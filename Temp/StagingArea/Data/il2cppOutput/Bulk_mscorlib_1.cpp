#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1631.h"
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
extern TypeInfo t1631_TI;
#include "t1631MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t1427.h"
#include "t463.h"

#include "t121.h"

extern MethodInfo m8119_MI;
extern "C" void m8119 (t1631 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8120_MI;
extern "C" void m8120 (t1631 * __this, t9 * p0, t1427 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8120((t1631 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1631(Il2CppObject* delegate, t9 * p0, t1427 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m8121_MI;
extern "C" t9 * m8121 (t1631 * __this, t9 * p0, t1427 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8122_MI;
extern "C" void m8122 (t1631 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1632.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1632_TI;
#include "t1632MD.h"

#include "t125.h"
#include "t124.h"
#include "t1612.h"
#include "t1203.h"
#include "mscorlib_ArrayTypes.h"
#include "t1520.h"
#include "t286.h"
#include "t168.h"
#include "t568.h"
#include "t2.h"
#include "t1521.h"
#include "t1344.h"
#include "t1341.h"
#include "t315.h"
extern TypeInfo t1203_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1612_TI;
extern TypeInfo t1424_TI;
extern TypeInfo t1520_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t9_TI;
extern TypeInfo t1427_TI;
extern TypeInfo t1521_TI;
extern TypeInfo t1344_TI;
extern TypeInfo t1341_TI;
extern TypeInfo t723_TI;
extern TypeInfo t568_TI;
extern TypeInfo t315_TI;
extern TypeInfo t884_TI;
extern TypeInfo t2_TI;
#include "t1612MD.h"
#include "t1203MD.h"
#include "t1208MD.h"
#include "t1520MD.h"
#include "t286MD.h"
#include "t9MD.h"
#include "t1521MD.h"
#include "t1582MD.h"
#include "t1344MD.h"
#include "t1345MD.h"
#include "t315MD.h"
#include "t884MD.h"
#include "t121MD.h"
extern Il2CppType t1424_0_0_0;
extern Il2CppType t723_0_0_0;
extern MethodInfo m7980_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m8012_MI;
extern MethodInfo m6881_MI;
extern MethodInfo m6880_MI;
extern MethodInfo m6882_MI;
extern MethodInfo m1060_MI;
extern MethodInfo m1061_MI;
extern MethodInfo m8134_MI;
extern MethodInfo m646_MI;
extern MethodInfo m8128_MI;
extern MethodInfo m7999_MI;
extern MethodInfo m7997_MI;
extern MethodInfo m8003_MI;
extern MethodInfo m8013_MI;
extern MethodInfo m8006_MI;
extern MethodInfo m8015_MI;
extern MethodInfo m8000_MI;
extern MethodInfo m8002_MI;
extern MethodInfo m7994_MI;
extern MethodInfo m8004_MI;
extern MethodInfo m6883_MI;
extern MethodInfo m8127_MI;
extern MethodInfo m7972_MI;
extern MethodInfo m7977_MI;
extern MethodInfo m7995_MI;
extern MethodInfo m8014_MI;
extern MethodInfo m8001_MI;
extern MethodInfo m8129_MI;
extern MethodInfo m7818_MI;
extern MethodInfo m5767_MI;
extern MethodInfo m7990_MI;
extern MethodInfo m8137_MI;
extern MethodInfo m7986_MI;
extern MethodInfo m5764_MI;
extern MethodInfo m1150_MI;
extern MethodInfo m8132_MI;
extern MethodInfo m1154_MI;
extern MethodInfo m4298_MI;
extern MethodInfo m1146_MI;
extern MethodInfo m1156_MI;


extern MethodInfo m8123_MI;
extern TypeInfo* t1424_TI_var;
extern "C" void m8123 (t1632 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8123_init;
	if (!m8123_init)
	{
		t1424_TI_var = il2cpp_codegen_class_from_type(&t1424_0_0_0);
		m8123_init = true;
	}
	{
		__this->f3 = 1;
		m6881(__this, &m6881_MI);
		__this->f1 = ((t1424*)SZArrayNew(t1424_TI_var, 1));
		t1424* L_0 = (__this->f1);
		t1520 * L_1 = (t1520 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1520_TI));
		m6880(L_1, ((int32_t)384), ((int32_t)16384), 8, &m6880_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t1520 **)(t1520 **)SZArrayLdElema(L_0, 0)) = (t1520 *)L_1;
		int32_t L_2 = p0;
		m6882(__this, L_2, &m6882_MI);
		return;
	}
}
extern MethodInfo m8124_MI;
extern "C" void m8124 (t1632 * __this, t1631 * p0, MethodInfo* method)
{
	{
		t1631 * L_0 = (__this->f14);
		t1631 * L_1 = p0;
		t286 * L_2 = m1060(NULL, L_0, L_1, &m1060_MI);
		__this->f14 = ((t1631 *)Castclass(L_2, InitializedTypeInfo(&t1631_TI)));
		return;
	}
}
extern MethodInfo m8125_MI;
extern "C" void m8125 (t1632 * __this, t1631 * p0, MethodInfo* method)
{
	{
		t1631 * L_0 = (__this->f14);
		t1631 * L_1 = p0;
		t286 * L_2 = m1061(NULL, L_0, L_1, &m1061_MI);
		__this->f14 = ((t1631 *)Castclass(L_2, InitializedTypeInfo(&t1631_TI)));
		return;
	}
}
extern MethodInfo m8126_MI;
extern "C" void m8126 (t1632 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8134_MI, __this, 0);
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
extern "C" void m8127 (t1632 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	t1612 * V_3 = {0};
	t1612 * V_4 = {0};
	t1612 * V_5 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))>>(int32_t)1));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_3 = m7999(NULL, ((int32_t)17), &m7999_MI);
		__this->f13 = L_3;
		goto IL_0041;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_5 = m7997(NULL, L_4, &m7997_MI);
		__this->f7 = L_5;
		t1612 * L_6 = (__this->f7);
		uint32_t L_7 = m8003(NULL, L_6, ((int32_t)17), &m8003_MI);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0043;
	}

IL_0041:
	{
		goto IL_0023;
	}

IL_0043:
	{
		goto IL_00c8;
	}

IL_0048:
	{
		goto IL_007b;
	}

IL_004a:
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_9 = m7997(NULL, L_8, &m7997_MI);
		__this->f8 = L_9;
		t1612 * L_10 = (__this->f8);
		uint32_t L_11 = m8003(NULL, L_10, ((int32_t)17), &m8003_MI);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		t1612 * L_12 = (__this->f7);
		t1612 * L_13 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_14 = m8013(NULL, L_12, L_13, &m8013_MI);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_007d;
	}

IL_007b:
	{
		goto IL_004a;
	}

IL_007d:
	{
		t1612 * L_15 = (__this->f7);
		t1612 * L_16 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_17 = m8006(NULL, L_15, L_16, &m8006_MI);
		__this->f12 = L_17;
		t1612 * L_18 = (__this->f12);
		int32_t L_19 = m7980(L_18, &m7980_MI);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00cd;
	}

IL_00a9:
	{
		t1612 * L_21 = (__this->f7);
		t1612 * L_22 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_23 = m8015(NULL, L_21, L_22, &m8015_MI);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		t1612 * L_24 = (__this->f8);
		__this->f7 = L_24;
	}

IL_00c8:
	{
		goto IL_0048;
	}

IL_00cd:
	{
		t1612 * L_25 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_26 = m8000(NULL, 1, &m8000_MI);
		t1612 * L_27 = m8002(NULL, L_25, L_26, &m8002_MI);
		V_3 = L_27;
		t1612 * L_28 = (__this->f8);
		t1612 * L_29 = m8000(NULL, 1, &m8000_MI);
		t1612 * L_30 = m8002(NULL, L_28, L_29, &m8002_MI);
		V_4 = L_30;
		t1612 * L_31 = V_3;
		t1612 * L_32 = V_4;
		t1612 * L_33 = m8006(NULL, L_31, L_32, &m8006_MI);
		V_5 = L_33;
		t1612 * L_34 = (__this->f13);
		t1612 * L_35 = V_5;
		t1612 * L_36 = m7994(L_34, L_35, &m7994_MI);
		__this->f6 = L_36;
		t1612 * L_37 = (__this->f6);
		t1612 * L_38 = V_3;
		t1612 * L_39 = m8004(NULL, L_37, L_38, &m8004_MI);
		__this->f9 = L_39;
		t1612 * L_40 = (__this->f6);
		t1612 * L_41 = V_4;
		t1612 * L_42 = m8004(NULL, L_40, L_41, &m8004_MI);
		__this->f10 = L_42;
		t1612 * L_43 = (__this->f8);
		t1612 * L_44 = (__this->f7);
		t1612 * L_45 = m7994(L_43, L_44, &m7994_MI);
		__this->f11 = L_45;
		__this->f4 = 1;
		__this->f2 = 1;
		t1631 * L_46 = (__this->f14);
		if (!L_46)
		{
			goto IL_016e;
		}
	}
	{
		t1631 * L_47 = (__this->f14);
		VirtActionInvoker2< t9 *, t1427 * >::Invoke(&m8120_MI, L_47, __this, (t1427 *)NULL);
	}

IL_016e:
	{
		return;
	}
}
extern "C" int32_t m8128 (t1632 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t1612 * L_1 = (__this->f12);
		int32_t L_2 = m7980(L_1, &m7980_MI);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&(int32_t)7)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)8-(int32_t)((int32_t)((int32_t)L_5&(int32_t)7))))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0023:
	{
		int32_t L_7 = m5817(__this, &m5817_MI);
		return L_7;
	}
}
extern "C" bool m8129 (t1632 * __this, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		t1612 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_2 = m8012(NULL, L_1, (t1612 *)NULL, &m8012_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t1612 * L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_4 = m8012(NULL, L_3, (t1612 *)NULL, &m8012_MI);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 1;
	}

IL_0025:
	{
		G_B6_0 = G_B4_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B6_0 = 0;
	}

IL_0028:
	{
		return G_B6_0;
	}
}
extern MethodInfo m8130_MI;
extern "C" t723* m8130 (t1632 * __this, t723* p0, MethodInfo* method)
{
	t1612 * V_0 = {0};
	t1612 * V_1 = {0};
	t1612 * V_2 = {0};
	t1612 * V_3 = {0};
	t1612 * V_4 = {0};
	t1612 * V_5 = {0};
	t723* V_6 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral832, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		bool L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		m8127(__this, &m8127_MI);
	}

IL_0021:
	{
		t723* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_4 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_4, L_3, &m7972_MI);
		V_0 = L_4;
		V_1 = (t1612 *)NULL;
		bool L_5 = (__this->f3);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		t1612 * L_6 = (__this->f12);
		int32_t L_7 = m7980(L_6, &m7980_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_8 = m7977(NULL, L_7, &m7977_MI);
		V_1 = L_8;
		t1612 * L_9 = V_1;
		t1612 * L_10 = (__this->f13);
		t1612 * L_11 = (__this->f12);
		t1612 * L_12 = m7995(L_9, L_10, L_11, &m7995_MI);
		t1612 * L_13 = V_0;
		t1612 * L_14 = m8006(NULL, L_12, L_13, &m8006_MI);
		t1612 * L_15 = (__this->f12);
		t1612 * L_16 = m8004(NULL, L_14, L_15, &m8004_MI);
		V_0 = L_16;
	}

IL_0067:
	{
		bool L_17 = (__this->f2);
		if (!L_17)
		{
			goto IL_011c;
		}
	}
	{
		t1612 * L_18 = V_0;
		t1612 * L_19 = (__this->f9);
		t1612 * L_20 = (__this->f7);
		t1612 * L_21 = m7995(L_18, L_19, L_20, &m7995_MI);
		V_3 = L_21;
		t1612 * L_22 = V_0;
		t1612 * L_23 = (__this->f10);
		t1612 * L_24 = (__this->f8);
		t1612 * L_25 = m7995(L_22, L_23, L_24, &m7995_MI);
		V_4 = L_25;
		t1612 * L_26 = V_4;
		t1612 * L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_28 = m8014(NULL, L_26, L_27, &m8014_MI);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		t1612 * L_29 = (__this->f7);
		t1612 * L_30 = V_4;
		t1612 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_32 = m8002(NULL, L_30, L_31, &m8002_MI);
		t1612 * L_33 = (__this->f11);
		t1612 * L_34 = m8006(NULL, L_32, L_33, &m8006_MI);
		t1612 * L_35 = (__this->f7);
		t1612 * L_36 = m8004(NULL, L_34, L_35, &m8004_MI);
		t1612 * L_37 = m8002(NULL, L_29, L_36, &m8002_MI);
		V_5 = L_37;
		t1612 * L_38 = V_4;
		t1612 * L_39 = (__this->f8);
		t1612 * L_40 = V_5;
		t1612 * L_41 = m8006(NULL, L_39, L_40, &m8006_MI);
		t1612 * L_42 = m8001(NULL, L_38, L_41, &m8001_MI);
		V_2 = L_42;
		goto IL_011a;
	}

IL_00e5:
	{
		t1612 * L_43 = V_3;
		t1612 * L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_45 = m8002(NULL, L_43, L_44, &m8002_MI);
		t1612 * L_46 = (__this->f11);
		t1612 * L_47 = m8006(NULL, L_45, L_46, &m8006_MI);
		t1612 * L_48 = (__this->f7);
		t1612 * L_49 = m8004(NULL, L_47, L_48, &m8004_MI);
		V_5 = L_49;
		t1612 * L_50 = V_4;
		t1612 * L_51 = (__this->f8);
		t1612 * L_52 = V_5;
		t1612 * L_53 = m8006(NULL, L_51, L_52, &m8006_MI);
		t1612 * L_54 = m8001(NULL, L_50, L_53, &m8001_MI);
		V_2 = L_54;
	}

IL_011a:
	{
		goto IL_0149;
	}

IL_011c:
	{
		bool L_55 = m8129(__this, &m8129_MI);
		if (L_55)
		{
			goto IL_0139;
		}
	}
	{
		t1612 * L_56 = V_0;
		t1612 * L_57 = (__this->f6);
		t1612 * L_58 = (__this->f12);
		t1612 * L_59 = m7995(L_56, L_57, L_58, &m7995_MI);
		V_2 = L_59;
		goto IL_0149;
	}

IL_0139:
	{
		t2* L_60 = m7818(NULL, (t2*) &_stringLiteral833, &m7818_MI);
		t1344 * L_61 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_61, L_60, &m5767_MI);
		il2cpp_codegen_raise_exception(L_61);
	}

IL_0149:
	{
		bool L_62 = (__this->f3);
		if (!L_62)
		{
			goto IL_0175;
		}
	}
	{
		t1612 * L_63 = V_2;
		t1612 * L_64 = V_1;
		t1612 * L_65 = (__this->f12);
		t1612 * L_66 = m7994(L_64, L_65, &m7994_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_67 = m8006(NULL, L_63, L_66, &m8006_MI);
		t1612 * L_68 = (__this->f12);
		t1612 * L_69 = m8004(NULL, L_67, L_68, &m8004_MI);
		V_2 = L_69;
		t1612 * L_70 = V_1;
		m7990(L_70, &m7990_MI);
	}

IL_0175:
	{
		t1612 * L_71 = V_2;
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		t723* L_73 = m8137(__this, L_71, ((int32_t)((int32_t)L_72>>(int32_t)3)), &m8137_MI);
		V_6 = L_73;
		t1612 * L_74 = V_0;
		m7990(L_74, &m7990_MI);
		t1612 * L_75 = V_2;
		m7990(L_75, &m7990_MI);
		t723* L_76 = V_6;
		return L_76;
	}
}
extern MethodInfo m8131_MI;
extern "C" t723* m8131 (t1632 * __this, t723* p0, MethodInfo* method)
{
	t1612 * V_0 = {0};
	t1612 * V_1 = {0};
	t723* V_2 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*) &_stringLiteral834, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		bool L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		m8127(__this, &m8127_MI);
	}

IL_0021:
	{
		t723* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_4 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_4, L_3, &m7972_MI);
		V_0 = L_4;
		t1612 * L_5 = V_0;
		t1612 * L_6 = (__this->f13);
		t1612 * L_7 = (__this->f12);
		t1612 * L_8 = m7995(L_5, L_6, L_7, &m7995_MI);
		V_1 = L_8;
		t1612 * L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		t723* L_11 = m8137(__this, L_9, ((int32_t)((int32_t)L_10>>(int32_t)3)), &m8137_MI);
		V_2 = L_11;
		t1612 * L_12 = V_0;
		m7990(L_12, &m7990_MI);
		t1612 * L_13 = V_1;
		m7990(L_13, &m7990_MI);
		t723* L_14 = V_2;
		return L_14;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t1341  m8132 (t1632 * __this, bool p0, MethodInfo* method)
{
	static bool m8132_init;
	if (!m8132_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8132_init = true;
	}
	t1341  V_0 = {0};
	t723* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral835, &m7818_MI);
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_2, L_1, &m6883_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		bool L_3 = (__this->f4);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		m8127(__this, &m8127_MI);
	}

IL_0026:
	{
		Initobj (InitializedTypeInfo(&t1341_TI), (&V_0));
		t1612 * L_4 = (__this->f13);
		t723* L_5 = m7986(L_4, &m7986_MI);
		(&V_0)->f7 = L_5;
		t1612 * L_6 = (__this->f12);
		t723* L_7 = m7986(L_6, &m7986_MI);
		(&V_0)->f6 = L_7;
		bool L_8 = p0;
		if (!L_8)
		{
			goto IL_018e;
		}
	}
	{
		t1612 * L_9 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_10 = m8012(NULL, L_9, (t1612 *)NULL, &m8012_MI);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		t1344 * L_11 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_11, (t2*) &_stringLiteral836, &m5767_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0071:
	{
		t1612 * L_12 = (__this->f6);
		t723* L_13 = m7986(L_12, &m7986_MI);
		(&V_0)->f2 = L_13;
		t723* L_14 = ((&V_0)->f2);
		t723* L_15 = ((&V_0)->f6);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		t723* L_16 = ((&V_0)->f6);
		V_1 = ((t723*)SZArrayNew(t723_TI_var, (((int32_t)(((t121 *)L_16)->max_length)))));
		t723* L_17 = ((&V_0)->f2);
		t723* L_18 = V_1;
		t723* L_19 = V_1;
		t723* L_20 = ((&V_0)->f2);
		t723* L_21 = ((&V_0)->f2);
		m5764(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_19)->max_length)))-(int32_t)(((int32_t)(((t121 *)L_20)->max_length))))), (((int32_t)(((t121 *)L_21)->max_length))), &m5764_MI);
		t723* L_22 = V_1;
		(&V_0)->f2 = L_22;
	}

IL_00d2:
	{
		t1612 * L_23 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_24 = m8013(NULL, L_23, (t1612 *)NULL, &m8013_MI);
		if (!L_24)
		{
			goto IL_018e;
		}
	}
	{
		t1612 * L_25 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_26 = m8013(NULL, L_25, (t1612 *)NULL, &m8013_MI);
		if (!L_26)
		{
			goto IL_018e;
		}
	}
	{
		t1612 * L_27 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_28 = m8013(NULL, L_27, (t1612 *)NULL, &m8013_MI);
		if (!L_28)
		{
			goto IL_018e;
		}
	}
	{
		t1612 * L_29 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_30 = m8013(NULL, L_29, (t1612 *)NULL, &m8013_MI);
		if (!L_30)
		{
			goto IL_018e;
		}
	}
	{
		t1612 * L_31 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_32 = m8013(NULL, L_31, (t1612 *)NULL, &m8013_MI);
		if (!L_32)
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8128_MI, __this);
		V_2 = ((int32_t)((int32_t)L_33>>(int32_t)4));
		t1612 * L_34 = (__this->f7);
		int32_t L_35 = V_2;
		t723* L_36 = m8137(__this, L_34, L_35, &m8137_MI);
		(&V_0)->f0 = L_36;
		t1612 * L_37 = (__this->f8);
		int32_t L_38 = V_2;
		t723* L_39 = m8137(__this, L_37, L_38, &m8137_MI);
		(&V_0)->f1 = L_39;
		t1612 * L_40 = (__this->f9);
		int32_t L_41 = V_2;
		t723* L_42 = m8137(__this, L_40, L_41, &m8137_MI);
		(&V_0)->f3 = L_42;
		t1612 * L_43 = (__this->f10);
		int32_t L_44 = V_2;
		t723* L_45 = m8137(__this, L_43, L_44, &m8137_MI);
		(&V_0)->f4 = L_45;
		t1612 * L_46 = (__this->f11);
		int32_t L_47 = V_2;
		t723* L_48 = m8137(__this, L_46, L_47, &m8137_MI);
		(&V_0)->f5 = L_48;
	}

IL_018e:
	{
		t1341  L_49 = V_0;
		return L_49;
	}
}
extern MethodInfo m8133_MI;
extern "C" void m8133 (t1632 * __this, t1341  p0, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	t1612 * V_2 = {0};
	t1612 * V_3 = {0};
	t1612 * V_4 = {0};
	t1612 * V_5 = {0};
	int32_t G_B22_0 = 0;
	t1632 * G_B25_0 = {0};
	t1632 * G_B23_0 = {0};
	t1632 * G_B24_0 = {0};
	int32_t G_B26_0 = 0;
	t1632 * G_B26_1 = {0};
	int32_t G_B35_0 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral835, &m7818_MI);
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_2, L_1, &m6883_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		t723* L_3 = ((&p0)->f7);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_4 = m7818(NULL, (t2*) &_stringLiteral837, &m7818_MI);
		t1344 * L_5 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_5, L_4, &m5767_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t723* L_6 = ((&p0)->f6);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		t2* L_7 = m7818(NULL, (t2*) &_stringLiteral838, &m7818_MI);
		t1344 * L_8 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_8, L_7, &m5767_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t723* L_9 = ((&p0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_10 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_10, L_9, &m7972_MI);
		__this->f13 = L_10;
		t723* L_11 = ((&p0)->f6);
		t1612 * L_12 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_12, L_11, &m7972_MI);
		__this->f12 = L_12;
		t723* L_13 = ((&p0)->f2);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		t723* L_14 = ((&p0)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_15 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_15, L_14, &m7972_MI);
		__this->f6 = L_15;
	}

IL_0089:
	{
		t723* L_16 = ((&p0)->f3);
		if (!L_16)
		{
			goto IL_00a4;
		}
	}
	{
		t723* L_17 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_18 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_18, L_17, &m7972_MI);
		__this->f9 = L_18;
	}

IL_00a4:
	{
		t723* L_19 = ((&p0)->f4);
		if (!L_19)
		{
			goto IL_00bf;
		}
	}
	{
		t723* L_20 = ((&p0)->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_21 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_21, L_20, &m7972_MI);
		__this->f10 = L_21;
	}

IL_00bf:
	{
		t723* L_22 = ((&p0)->f5);
		if (!L_22)
		{
			goto IL_00da;
		}
	}
	{
		t723* L_23 = ((&p0)->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_24 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_24, L_23, &m7972_MI);
		__this->f11 = L_24;
	}

IL_00da:
	{
		t723* L_25 = ((&p0)->f0);
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		t723* L_26 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_27 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_27, L_26, &m7972_MI);
		__this->f7 = L_27;
	}

IL_00f5:
	{
		t723* L_28 = ((&p0)->f1);
		if (!L_28)
		{
			goto IL_0110;
		}
	}
	{
		t723* L_29 = ((&p0)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_30 = (t1612 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1612_TI));
		m7972(L_30, L_29, &m7972_MI);
		__this->f8 = L_30;
	}

IL_0110:
	{
		__this->f4 = 1;
		t1612 * L_31 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_32 = m8013(NULL, L_31, (t1612 *)NULL, &m8013_MI);
		if (!L_32)
		{
			goto IL_0141;
		}
	}
	{
		t1612 * L_33 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_34 = m8013(NULL, L_33, (t1612 *)NULL, &m8013_MI);
		if (!L_34)
		{
			goto IL_0141;
		}
	}
	{
		t1612 * L_35 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_36 = m8013(NULL, L_35, (t1612 *)NULL, &m8013_MI);
		G_B22_0 = ((int32_t)(L_36));
		goto IL_0142;
	}

IL_0141:
	{
		G_B22_0 = 0;
	}

IL_0142:
	{
		V_0 = G_B22_0;
		bool L_37 = V_0;
		G_B23_0 = __this;
		if (!L_37)
		{
			G_B25_0 = __this;
			goto IL_0163;
		}
	}
	{
		t1612 * L_38 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_39 = m8013(NULL, L_38, (t1612 *)NULL, &m8013_MI);
		G_B24_0 = G_B23_0;
		if (!L_39)
		{
			G_B25_0 = G_B23_0;
			goto IL_0163;
		}
	}
	{
		t1612 * L_40 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_41 = m8013(NULL, L_40, (t1612 *)NULL, &m8013_MI);
		G_B26_0 = ((int32_t)(L_41));
		G_B26_1 = G_B24_0;
		goto IL_0164;
	}

IL_0163:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_0164:
	{
		G_B26_1->f2 = G_B26_0;
		bool L_42 = V_0;
		if (L_42)
		{
			goto IL_016d;
		}
	}
	{
		return;
	}

IL_016d:
	{
		t1612 * L_43 = (__this->f12);
		t1612 * L_44 = (__this->f7);
		t1612 * L_45 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_46 = m8006(NULL, L_44, L_45, &m8006_MI);
		bool L_47 = m8012(NULL, L_43, L_46, &m8012_MI);
		V_1 = L_47;
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_022f;
		}
	}
	{
		t1612 * L_49 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_50 = m8000(NULL, 1, &m8000_MI);
		t1612 * L_51 = m8002(NULL, L_49, L_50, &m8002_MI);
		V_2 = L_51;
		t1612 * L_52 = (__this->f8);
		t1612 * L_53 = m8000(NULL, 1, &m8000_MI);
		t1612 * L_54 = m8002(NULL, L_52, L_53, &m8002_MI);
		V_3 = L_54;
		t1612 * L_55 = V_2;
		t1612 * L_56 = V_3;
		t1612 * L_57 = m8006(NULL, L_55, L_56, &m8006_MI);
		V_4 = L_57;
		t1612 * L_58 = (__this->f13);
		t1612 * L_59 = V_4;
		t1612 * L_60 = m7994(L_58, L_59, &m7994_MI);
		V_5 = L_60;
		t1612 * L_61 = (__this->f6);
		t1612 * L_62 = V_5;
		bool L_63 = m8012(NULL, L_61, L_62, &m8012_MI);
		V_1 = L_63;
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_022f;
		}
	}
	{
		bool L_65 = (__this->f2);
		if (!L_65)
		{
			goto IL_022f;
		}
	}
	{
		t1612 * L_66 = (__this->f9);
		t1612 * L_67 = V_5;
		t1612 * L_68 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_69 = m8004(NULL, L_67, L_68, &m8004_MI);
		bool L_70 = m8012(NULL, L_66, L_69, &m8012_MI);
		if (!L_70)
		{
			goto IL_022d;
		}
	}
	{
		t1612 * L_71 = (__this->f10);
		t1612 * L_72 = V_5;
		t1612 * L_73 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		t1612 * L_74 = m8004(NULL, L_72, L_73, &m8004_MI);
		bool L_75 = m8012(NULL, L_71, L_74, &m8012_MI);
		if (!L_75)
		{
			goto IL_022d;
		}
	}
	{
		t1612 * L_76 = (__this->f11);
		t1612 * L_77 = (__this->f8);
		t1612 * L_78 = (__this->f7);
		t1612 * L_79 = m7994(L_77, L_78, &m7994_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_80 = m8012(NULL, L_76, L_79, &m8012_MI);
		G_B35_0 = ((int32_t)(L_80));
		goto IL_022e;
	}

IL_022d:
	{
		G_B35_0 = 0;
	}

IL_022e:
	{
		V_1 = G_B35_0;
	}

IL_022f:
	{
		bool L_81 = V_1;
		if (L_81)
		{
			goto IL_0242;
		}
	}
	{
		t2* L_82 = m7818(NULL, (t2*) &_stringLiteral839, &m7818_MI);
		t1344 * L_83 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_83, L_82, &m5767_MI);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_0242:
	{
		return;
	}
}
extern "C" void m8134 (t1632 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_010e;
		}
	}
	{
		t1612 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_2 = m8013(NULL, L_1, (t1612 *)NULL, &m8013_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1612 * L_3 = (__this->f6);
		m7990(L_3, &m7990_MI);
		__this->f6 = (t1612 *)NULL;
	}

IL_002b:
	{
		t1612 * L_4 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_5 = m8013(NULL, L_4, (t1612 *)NULL, &m8013_MI);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		t1612 * L_6 = (__this->f7);
		m7990(L_6, &m7990_MI);
		__this->f7 = (t1612 *)NULL;
	}

IL_004b:
	{
		t1612 * L_7 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_8 = m8013(NULL, L_7, (t1612 *)NULL, &m8013_MI);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		t1612 * L_9 = (__this->f8);
		m7990(L_9, &m7990_MI);
		__this->f8 = (t1612 *)NULL;
	}

IL_006b:
	{
		t1612 * L_10 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_11 = m8013(NULL, L_10, (t1612 *)NULL, &m8013_MI);
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t1612 * L_12 = (__this->f9);
		m7990(L_12, &m7990_MI);
		__this->f9 = (t1612 *)NULL;
	}

IL_008b:
	{
		t1612 * L_13 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_14 = m8013(NULL, L_13, (t1612 *)NULL, &m8013_MI);
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		t1612 * L_15 = (__this->f10);
		m7990(L_15, &m7990_MI);
		__this->f10 = (t1612 *)NULL;
	}

IL_00ab:
	{
		t1612 * L_16 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_17 = m8013(NULL, L_16, (t1612 *)NULL, &m8013_MI);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		t1612 * L_18 = (__this->f11);
		m7990(L_18, &m7990_MI);
		__this->f11 = (t1612 *)NULL;
	}

IL_00cb:
	{
		bool L_19 = p0;
		if (!L_19)
		{
			goto IL_010e;
		}
	}
	{
		t1612 * L_20 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_21 = m8013(NULL, L_20, (t1612 *)NULL, &m8013_MI);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		t1612 * L_22 = (__this->f13);
		m7990(L_22, &m7990_MI);
		__this->f13 = (t1612 *)NULL;
	}

IL_00ee:
	{
		t1612 * L_23 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1612_TI));
		bool L_24 = m8013(NULL, L_23, (t1612 *)NULL, &m8013_MI);
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		t1612 * L_25 = (__this->f12);
		m7990(L_25, &m7990_MI);
		__this->f12 = (t1612 *)NULL;
	}

IL_010e:
	{
		__this->f5 = 1;
		return;
	}
}
extern MethodInfo m8135_MI;
extern "C" t2* m8135 (t1632 * __this, bool p0, MethodInfo* method)
{
	t315 * V_0 = {0};
	t1341  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		bool L_1 = p0;
		t1341  L_2 = (t1341 )VirtFuncInvoker1< t1341 , bool >::Invoke(&m8132_MI, __this, L_1);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			t315 * L_3 = V_0;
			m1154(L_3, (t2*) &_stringLiteral840, &m1154_MI);
			t315 * L_4 = V_0;
			m1154(L_4, (t2*) &_stringLiteral841, &m1154_MI);
			t315 * L_5 = V_0;
			t723* L_6 = ((&V_1)->f6);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_7 = m4298(NULL, L_6, &m4298_MI);
			m1154(L_5, L_7, &m1154_MI);
			t315 * L_8 = V_0;
			m1154(L_8, (t2*) &_stringLiteral842, &m1154_MI);
			t315 * L_9 = V_0;
			m1154(L_9, (t2*) &_stringLiteral843, &m1154_MI);
			t315 * L_10 = V_0;
			t723* L_11 = ((&V_1)->f7);
			t2* L_12 = m4298(NULL, L_11, &m4298_MI);
			m1154(L_10, L_12, &m1154_MI);
			t315 * L_13 = V_0;
			m1154(L_13, (t2*) &_stringLiteral844, &m1154_MI);
			bool L_14 = p0;
			if (!L_14)
			{
				goto IL_01a5;
			}
		}

IL_0076:
		{
			t723* L_15 = ((&V_1)->f0);
			if (!L_15)
			{
				goto IL_00aa;
			}
		}

IL_007f:
		{
			t315 * L_16 = V_0;
			m1154(L_16, (t2*) &_stringLiteral845, &m1154_MI);
			t315 * L_17 = V_0;
			t723* L_18 = ((&V_1)->f0);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_19 = m4298(NULL, L_18, &m4298_MI);
			m1154(L_17, L_19, &m1154_MI);
			t315 * L_20 = V_0;
			m1154(L_20, (t2*) &_stringLiteral846, &m1154_MI);
		}

IL_00aa:
		{
			t723* L_21 = ((&V_1)->f1);
			if (!L_21)
			{
				goto IL_00de;
			}
		}

IL_00b3:
		{
			t315 * L_22 = V_0;
			m1154(L_22, (t2*) &_stringLiteral847, &m1154_MI);
			t315 * L_23 = V_0;
			t723* L_24 = ((&V_1)->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_25 = m4298(NULL, L_24, &m4298_MI);
			m1154(L_23, L_25, &m1154_MI);
			t315 * L_26 = V_0;
			m1154(L_26, (t2*) &_stringLiteral848, &m1154_MI);
		}

IL_00de:
		{
			t723* L_27 = ((&V_1)->f3);
			if (!L_27)
			{
				goto IL_0112;
			}
		}

IL_00e7:
		{
			t315 * L_28 = V_0;
			m1154(L_28, (t2*) &_stringLiteral849, &m1154_MI);
			t315 * L_29 = V_0;
			t723* L_30 = ((&V_1)->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_31 = m4298(NULL, L_30, &m4298_MI);
			m1154(L_29, L_31, &m1154_MI);
			t315 * L_32 = V_0;
			m1154(L_32, (t2*) &_stringLiteral850, &m1154_MI);
		}

IL_0112:
		{
			t723* L_33 = ((&V_1)->f4);
			if (!L_33)
			{
				goto IL_0146;
			}
		}

IL_011b:
		{
			t315 * L_34 = V_0;
			m1154(L_34, (t2*) &_stringLiteral851, &m1154_MI);
			t315 * L_35 = V_0;
			t723* L_36 = ((&V_1)->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_37 = m4298(NULL, L_36, &m4298_MI);
			m1154(L_35, L_37, &m1154_MI);
			t315 * L_38 = V_0;
			m1154(L_38, (t2*) &_stringLiteral852, &m1154_MI);
		}

IL_0146:
		{
			t723* L_39 = ((&V_1)->f5);
			if (!L_39)
			{
				goto IL_017a;
			}
		}

IL_014f:
		{
			t315 * L_40 = V_0;
			m1154(L_40, (t2*) &_stringLiteral853, &m1154_MI);
			t315 * L_41 = V_0;
			t723* L_42 = ((&V_1)->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_43 = m4298(NULL, L_42, &m4298_MI);
			m1154(L_41, L_43, &m1154_MI);
			t315 * L_44 = V_0;
			m1154(L_44, (t2*) &_stringLiteral854, &m1154_MI);
		}

IL_017a:
		{
			t315 * L_45 = V_0;
			m1154(L_45, (t2*) &_stringLiteral855, &m1154_MI);
			t315 * L_46 = V_0;
			t723* L_47 = ((&V_1)->f2);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
			t2* L_48 = m4298(NULL, L_47, &m4298_MI);
			m1154(L_46, L_48, &m1154_MI);
			t315 * L_49 = V_0;
			m1154(L_49, (t2*) &_stringLiteral856, &m1154_MI);
		}

IL_01a5:
		{
			t315 * L_50 = V_0;
			m1154(L_50, (t2*) &_stringLiteral857, &m1154_MI);
			goto IL_0275;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_01b6;
		throw e;
	}

CATCH_01b6:
	{ // begin catch(System.Object)
		{
			t723* L_51 = ((&V_1)->f0);
			if (!L_51)
			{
				goto IL_01d6;
			}
		}

IL_01c0:
		{
			t723* L_52 = ((&V_1)->f0);
			t723* L_53 = ((&V_1)->f0);
			m1146(NULL, (t121 *)(t121 *)L_52, 0, (((int32_t)(((t121 *)L_53)->max_length))), &m1146_MI);
		}

IL_01d6:
		{
			t723* L_54 = ((&V_1)->f1);
			if (!L_54)
			{
				goto IL_01f5;
			}
		}

IL_01df:
		{
			t723* L_55 = ((&V_1)->f1);
			t723* L_56 = ((&V_1)->f1);
			m1146(NULL, (t121 *)(t121 *)L_55, 0, (((int32_t)(((t121 *)L_56)->max_length))), &m1146_MI);
		}

IL_01f5:
		{
			t723* L_57 = ((&V_1)->f3);
			if (!L_57)
			{
				goto IL_0214;
			}
		}

IL_01fe:
		{
			t723* L_58 = ((&V_1)->f3);
			t723* L_59 = ((&V_1)->f3);
			m1146(NULL, (t121 *)(t121 *)L_58, 0, (((int32_t)(((t121 *)L_59)->max_length))), &m1146_MI);
		}

IL_0214:
		{
			t723* L_60 = ((&V_1)->f4);
			if (!L_60)
			{
				goto IL_0233;
			}
		}

IL_021d:
		{
			t723* L_61 = ((&V_1)->f4);
			t723* L_62 = ((&V_1)->f4);
			m1146(NULL, (t121 *)(t121 *)L_61, 0, (((int32_t)(((t121 *)L_62)->max_length))), &m1146_MI);
		}

IL_0233:
		{
			t723* L_63 = ((&V_1)->f5);
			if (!L_63)
			{
				goto IL_0252;
			}
		}

IL_023c:
		{
			t723* L_64 = ((&V_1)->f5);
			t723* L_65 = ((&V_1)->f5);
			m1146(NULL, (t121 *)(t121 *)L_64, 0, (((int32_t)(((t121 *)L_65)->max_length))), &m1146_MI);
		}

IL_0252:
		{
			t723* L_66 = ((&V_1)->f2);
			if (!L_66)
			{
				goto IL_0271;
			}
		}

IL_025b:
		{
			t723* L_67 = ((&V_1)->f2);
			t723* L_68 = ((&V_1)->f2);
			m1146(NULL, (t121 *)(t121 *)L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))), &m1146_MI);
		}

IL_0271:
		{
			il2cpp_codegen_raise_exception(__exception_local);
			goto IL_0275;
		}
	} // end catch (depth: 1)

IL_0275:
	{
		t315 * L_69 = V_0;
		t2* L_70 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_69);
		return L_70;
	}
}
extern MethodInfo m8136_MI;
extern "C" bool m8136 (t1632 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (__this->f2);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		return G_B3_0;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8137 (t1632 * __this, t1612 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8137_init;
	if (!m8137_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8137_init = true;
	}
	t723* V_0 = {0};
	t723* V_1 = {0};
	{
		t1612 * L_0 = p0;
		t723* L_1 = m7986(L_0, &m7986_MI);
		V_0 = L_1;
		t723* L_2 = V_0;
		int32_t L_3 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		t723* L_4 = V_0;
		return L_4;
	}

IL_000f:
	{
		int32_t L_5 = p1;
		V_1 = ((t723*)SZArrayNew(t723_TI_var, L_5));
		t723* L_6 = V_0;
		t723* L_7 = V_1;
		int32_t L_8 = p1;
		t723* L_9 = V_0;
		t723* L_10 = V_0;
		m5764(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8-(int32_t)(((int32_t)(((t121 *)L_9)->max_length))))), (((int32_t)(((t121 *)L_10)->max_length))), &m5764_MI);
		t723* L_11 = V_0;
		t723* L_12 = V_0;
		m1146(NULL, (t121 *)(t121 *)L_11, 0, (((int32_t)(((t121 *)L_12)->max_length))), &m1146_MI);
		t723* L_13 = V_1;
		return L_13;
	}
}
#include "t1633.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1633_TI;
#include "t1633MD.h"

#include "t1425.h"
#include "t1535.h"
#include "t1451.h"
#include "t8.h"
#include "t1337.h"
#include "t132.h"
#include "t896.h"
#include "t556.h"
#include "t1404.h"
extern TypeInfo t1425_TI;
extern TypeInfo t1535_TI;
extern TypeInfo t121_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1451_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1337_TI;
extern TypeInfo t132_TI;
extern TypeInfo t896_TI;
extern TypeInfo t556_TI;
extern TypeInfo t1404_TI;
#include "t1425MD.h"
#include "t1621MD.h"
#include "t160MD.h"
#include "t1517MD.h"
#include "t8MD.h"
#include "t2MD.h"
#include "t1337MD.h"
#include "t132MD.h"
#include "t896MD.h"
#include "t556MD.h"
#include "t1404MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m7018_MI;
extern MethodInfo m336_MI;
extern MethodInfo m7013_MI;
extern MethodInfo m8032_MI;
extern MethodInfo m5718_MI;
extern MethodInfo m7819_MI;
extern MethodInfo m11543_MI;
extern MethodInfo m7014_MI;
extern MethodInfo m8141_MI;
extern MethodInfo m6867_MI;
extern MethodInfo m7017_MI;
extern MethodInfo m11958_MI;
extern MethodInfo m8144_MI;
extern MethodInfo m8145_MI;
extern MethodInfo m8146_MI;
extern MethodInfo m8147_MI;
extern MethodInfo m651_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5745_MI;
extern MethodInfo m339_MI;
extern MethodInfo m4336_MI;
extern MethodInfo m5691_MI;
extern MethodInfo m8148_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m8150_MI;
extern MethodInfo m8151_MI;
extern MethodInfo m8143_MI;
extern MethodInfo m6859_MI;
extern MethodInfo m6860_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8152_MI;
extern MethodInfo m8153_MI;
extern MethodInfo m8154_MI;
extern MethodInfo m8155_MI;


extern MethodInfo m8138_MI;
extern TypeInfo* t723_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m8138 (t1633 * __this, t1425 * p0, bool p1, t723* p2, MethodInfo* method)
{
	static bool m8138_init;
	if (!m8138_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8138_init = true;
	}
	t2* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1425 * L_0 = p0;
		__this->f0 = L_0;
		bool L_1 = p1;
		__this->f1 = L_1;
		t1425 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7013_MI, L_2);
		__this->f2 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		t723* L_4 = p2;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = (__this->f2);
		t723* L_6 = m8032(NULL, L_5, &m8032_MI);
		p2 = L_6;
		goto IL_004a;
	}

IL_003b:
	{
		t723* L_7 = p2;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_7);
		p2 = ((t723*)Castclass(L_8, t723_TI_var));
	}

IL_004a:
	{
		t723* L_9 = p2;
		int32_t L_10 = (__this->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))) >= ((int32_t)L_10)))
		{
			goto IL_0086;
		}
	}
	{
		t158* L_11 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t723* L_12 = p2;
		int32_t L_13 = (((int32_t)(((t121 *)L_12)->max_length)));
		t9 * L_14 = Box(InitializedTypeInfo(&t125_TI), &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, 0)) = (t9 *)L_14;
		t158* L_15 = L_11;
		int32_t L_16 = (__this->f2);
		int32_t L_17 = L_16;
		t9 * L_18 = Box(InitializedTypeInfo(&t125_TI), &L_17);
		ArrayElementTypeCheck (L_15, L_18);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 1)) = (t9 *)L_18;
		t2* L_19 = m7819(NULL, (t2*) &_stringLiteral1343, L_15, &m7819_MI);
		V_0 = L_19;
		t2* L_20 = V_0;
		t1344 * L_21 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_21, L_20, &m5767_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0086:
	{
		int32_t L_22 = (__this->f2);
		__this->f3 = ((t723*)SZArrayNew(t723_TI_var, L_22));
		t723* L_23 = p2;
		t723* L_24 = (__this->f3);
		int32_t L_25 = (__this->f2);
		t723* L_26 = p2;
		int32_t L_27 = m11543(NULL, L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m11543_MI);
		m5764(NULL, (t121 *)(t121 *)L_23, 0, (t121 *)(t121 *)L_24, 0, L_27, &m5764_MI);
		int32_t L_28 = (__this->f2);
		__this->f4 = ((t723*)SZArrayNew(t723_TI_var, L_28));
		t1425 * L_29 = (__this->f0);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7014_MI, L_29);
		__this->f7 = ((int32_t)((int32_t)L_30>>(int32_t)3));
		int32_t L_31 = (__this->f7);
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_32 = (__this->f2);
		int32_t L_33 = (__this->f7);
		__this->f8 = ((int32_t)((int32_t)L_32/(int32_t)L_33));
	}

IL_00f2:
	{
		int32_t L_34 = (__this->f2);
		__this->f5 = ((t723*)SZArrayNew(t723_TI_var, L_34));
		int32_t L_35 = (__this->f2);
		__this->f6 = ((t723*)SZArrayNew(t723_TI_var, L_35));
		return;
	}
}
extern MethodInfo m8139_MI;
extern "C" void m8139 (t1633 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8141_MI, __this, 1);
		m6867(NULL, __this, &m6867_MI);
		return;
	}
}
extern MethodInfo m8140_MI;
extern "C" void m8140 (t1633 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8141_MI, __this, 0);
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
extern "C" void m8141 (t1633 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0044;
		}
	}
	{
		bool L_1 = p0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		t723* L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		m1146(NULL, (t121 *)(t121 *)L_2, 0, L_3, &m1146_MI);
		__this->f3 = (t723*)NULL;
		t723* L_4 = (__this->f4);
		int32_t L_5 = (__this->f2);
		m1146(NULL, (t121 *)(t121 *)L_4, 0, L_5, &m1146_MI);
		__this->f4 = (t723*)NULL;
	}

IL_003d:
	{
		__this->f9 = 1;
	}

IL_0044:
	{
		return;
	}
}
extern MethodInfo m8142_MI;
extern "C" bool m8142 (t1633 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m8143 (t1633 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t1425 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7017_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_0034;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_002a;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 3)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 4)
		{
			goto IL_0052;
		}
	}
	{
		goto IL_005c;
	}

IL_002a:
	{
		t723* L_3 = p0;
		t723* L_4 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m11958_MI, __this, L_3, L_4);
		goto IL_0081;
	}

IL_0034:
	{
		t723* L_5 = p0;
		t723* L_6 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8144_MI, __this, L_5, L_6);
		goto IL_0081;
	}

IL_003e:
	{
		t723* L_7 = p0;
		t723* L_8 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8145_MI, __this, L_7, L_8);
		goto IL_0081;
	}

IL_0048:
	{
		t723* L_9 = p0;
		t723* L_10 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8146_MI, __this, L_9, L_10);
		goto IL_0081;
	}

IL_0052:
	{
		t723* L_11 = p0;
		t723* L_12 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8147_MI, __this, L_11, L_12);
		goto IL_0081;
	}

IL_005c:
	{
		t1425 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7017_MI, L_13);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t1451_TI), &L_15);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m610(NULL, (t2*) &_stringLiteral1344, L_17, &m610_MI);
		t1337 * L_19 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m5745(L_19, L_18, &m5745_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0081:
	{
		return;
	}
}
extern "C" void m8144 (t1633 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		t723* L_1 = (__this->f3);
		int32_t L_2 = V_0;
		uint8_t* L_3 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2));
		t723* L_4 = p0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		*((int8_t*)(L_3)) = (int8_t)(((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_3))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6))))));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = (__this->f2);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		t723* L_10 = (__this->f3);
		t723* L_11 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m11958_MI, __this, L_10, L_11);
		t723* L_12 = p1;
		t723* L_13 = (__this->f3);
		int32_t L_14 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m5764_MI);
		goto IL_00aa;
	}

IL_0050:
	{
		t723* L_15 = p0;
		t723* L_16 = (__this->f4);
		int32_t L_17 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_15, 0, (t121 *)(t121 *)L_16, 0, L_17, &m5764_MI);
		t723* L_18 = p0;
		t723* L_19 = p1;
		VirtActionInvoker2< t723*, t723* >::Invoke(&m11958_MI, __this, L_18, L_19);
		V_1 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		t723* L_20 = p1;
		int32_t L_21 = V_1;
		uint8_t* L_22 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21));
		t723* L_23 = (__this->f3);
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		*((int8_t*)(L_22)) = (int8_t)(((uint8_t)((int32_t)((int32_t)(*((uint8_t*)L_22))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25))))));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0088:
	{
		int32_t L_27 = V_1;
		int32_t L_28 = (__this->f2);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0070;
		}
	}
	{
		t723* L_29 = (__this->f4);
		t723* L_30 = (__this->f3);
		int32_t L_31 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_29, 0, (t121 *)(t121 *)L_30, 0, L_31, &m5764_MI);
	}

IL_00aa:
	{
		return;
	}
}
extern "C" void m8145 (t1633 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_00a3;
		}
	}
	{
		V_0 = 0;
		goto IL_0092;
	}

IL_0012:
	{
		t723* L_1 = (__this->f3);
		t723* L_2 = (__this->f4);
		VirtActionInvoker2< t723*, t723* >::Invoke(&m11958_MI, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		t723* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		t723* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t723* L_9 = p0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)((int32_t)L_10+(int32_t)L_11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_12))))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = (__this->f7);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0028;
		}
	}
	{
		t723* L_16 = (__this->f3);
		int32_t L_17 = (__this->f7);
		t723* L_18 = (__this->f3);
		int32_t L_19 = (__this->f2);
		int32_t L_20 = (__this->f7);
		m5764(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, 0, ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m5764_MI);
		t723* L_21 = p1;
		int32_t L_22 = V_0;
		t723* L_23 = (__this->f3);
		int32_t L_24 = (__this->f2);
		int32_t L_25 = (__this->f7);
		int32_t L_26 = (__this->f7);
		m5764(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), L_26, &m5764_MI);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->f8);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0144;
	}

IL_00a3:
	{
		V_2 = 0;
		goto IL_0138;
	}

IL_00aa:
	{
		__this->f1 = 1;
		t723* L_30 = (__this->f3);
		t723* L_31 = (__this->f4);
		VirtActionInvoker2< t723*, t723* >::Invoke(&m11958_MI, __this, L_30, L_31);
		__this->f1 = 0;
		t723* L_32 = (__this->f3);
		int32_t L_33 = (__this->f7);
		t723* L_34 = (__this->f3);
		int32_t L_35 = (__this->f2);
		int32_t L_36 = (__this->f7);
		m5764(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, 0, ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m5764_MI);
		t723* L_37 = p0;
		int32_t L_38 = V_2;
		t723* L_39 = (__this->f3);
		int32_t L_40 = (__this->f2);
		int32_t L_41 = (__this->f7);
		int32_t L_42 = (__this->f7);
		m5764(NULL, (t121 *)(t121 *)L_37, L_38, (t121 *)(t121 *)L_39, ((int32_t)((int32_t)L_40-(int32_t)L_41)), L_42, &m5764_MI);
		V_3 = 0;
		goto IL_012b;
	}

IL_0113:
	{
		t723* L_43 = p1;
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		t723* L_46 = (__this->f4);
		int32_t L_47 = V_3;
		int32_t L_48 = L_47;
		t723* L_49 = p0;
		int32_t L_50 = V_3;
		int32_t L_51 = V_2;
		int32_t L_52 = ((int32_t)((int32_t)L_50+(int32_t)L_51));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, ((int32_t)((int32_t)L_44+(int32_t)L_45)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_46, L_48))^(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_52))))));
		int32_t L_53 = V_3;
		V_3 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_012b:
	{
		int32_t L_54 = V_3;
		int32_t L_55 = (__this->f7);
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_56 = V_2;
		V_2 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_0138:
	{
		int32_t L_57 = V_2;
		int32_t L_58 = (__this->f8);
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00aa;
		}
	}

IL_0144:
	{
		return;
	}
}
extern "C" void m8146 (t1633 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	{
		t1344 * L_0 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_0, (t2*) &_stringLiteral1345, &m5767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8147 (t1633 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	{
		t1344 * L_0 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_0, (t2*) &_stringLiteral1346, &m5767_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8148 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral810, &m339_MI);
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
		m4336(L_3, (t2*) &_stringLiteral811, (t2*) &_stringLiteral812, &m4336_MI);
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
		m4336(L_5, (t2*) &_stringLiteral813, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t723* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0053;
		}
	}
	{
		t2* L_9 = m7818(NULL, (t2*) &_stringLiteral814, &m7818_MI);
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_10, (t2*) &_stringLiteral810, L_9, &m5691_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0053:
	{
		return;
	}
}
extern MethodInfo m8149_MI;
extern "C" int32_t m8149 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, t723* p3, int32_t p4, MethodInfo* method)
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
		m6883(L_1, (t2*) &_stringLiteral1347, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t723* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8148(__this, L_2, L_3, L_4, &m8148_MI);
		t723* L_5 = p3;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_6 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_6, (t2*) &_stringLiteral815, &m339_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002b:
	{
		int32_t L_7 = p4;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_8, (t2*) &_stringLiteral816, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0040:
	{
		t723* L_9 = p3;
		int32_t L_10 = p2;
		int32_t L_11 = p4;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)L_10))-(int32_t)L_11));
		bool L_12 = (__this->f1);
		if (L_12)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_13)))
		{
			goto IL_0087;
		}
	}
	{
		t1425 * L_14 = (__this->f0);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		t1425 * L_16 = (__this->f0);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0087;
		}
	}

IL_0072:
	{
		t2* L_18 = m7818(NULL, (t2*) &_stringLiteral814, &m7818_MI);
		t1344 * L_19 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m10335(L_19, (t2*) &_stringLiteral815, L_18, &m10335_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0087:
	{
		bool L_20 = m8150(__this, &m8150_MI);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (__this->f2);
		if ((((int32_t)0) <= ((int32_t)((int32_t)((int32_t)L_21+(int32_t)L_22)))))
		{
			goto IL_00af;
		}
	}
	{
		t2* L_23 = m7818(NULL, (t2*) &_stringLiteral814, &m7818_MI);
		t1344 * L_24 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m10335(L_24, (t2*) &_stringLiteral815, L_23, &m10335_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00af:
	{
		goto IL_00e9;
	}

IL_00b1:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_25)))
		{
			goto IL_00e9;
		}
	}
	{
		t723* L_26 = p0;
		int32_t L_27 = p1;
		t723* L_28 = p3;
		int32_t L_29 = (__this->f2);
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))-(int32_t)L_27))-(int32_t)(((int32_t)(((t121 *)L_28)->max_length)))))) == ((uint32_t)L_29))))
		{
			goto IL_00d4;
		}
	}
	{
		t723* L_30 = p3;
		int32_t L_31 = p4;
		p2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_30)->max_length)))-(int32_t)L_31));
		goto IL_00e9;
	}

IL_00d4:
	{
		t2* L_32 = m7818(NULL, (t2*) &_stringLiteral814, &m7818_MI);
		t1344 * L_33 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m10335(L_33, (t2*) &_stringLiteral815, L_32, &m10335_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00e9:
	{
		t723* L_34 = p0;
		int32_t L_35 = p1;
		int32_t L_36 = p2;
		t723* L_37 = p3;
		int32_t L_38 = p4;
		int32_t L_39 = m8151(__this, L_34, L_35, L_36, L_37, L_38, &m8151_MI);
		return L_39;
	}
}
extern "C" bool m8150 (t1633 * __this, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		t1425 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		t1425 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_3);
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		return G_B4_0;
	}
}
extern "C" int32_t m8151 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, t723* p3, int32_t p4, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		int32_t L_1 = p2;
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = p2;
		int32_t L_4 = (__this->f2);
		if (!((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		t1344 * L_5 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_5, (t2*) &_stringLiteral1348, &m5767_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0020:
	{
		int32_t L_6 = p2;
		int32_t L_7 = (__this->f2);
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)L_7));
		goto IL_002d;
	}

IL_002b:
	{
		V_1 = 1;
	}

IL_002d:
	{
		bool L_8 = m8150(__this, &m8150_MI);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_0039:
	{
		V_2 = 0;
		bool L_10 = (__this->f10);
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		t723* L_11 = (__this->f5);
		t723* L_12 = (__this->f6);
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8143_MI, __this, L_11, L_12);
		t723* L_13 = (__this->f6);
		t723* L_14 = p3;
		int32_t L_15 = p4;
		int32_t L_16 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_13, 0, (t121 *)(t121 *)L_14, L_15, L_16, &m5764_MI);
		int32_t L_17 = p4;
		int32_t L_18 = (__this->f2);
		p4 = ((int32_t)((int32_t)L_17+(int32_t)L_18));
		int32_t L_19 = V_2;
		int32_t L_20 = (__this->f2);
		V_2 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		__this->f10 = 0;
	}

IL_0088:
	{
		V_3 = 0;
		goto IL_00eb;
	}

IL_008c:
	{
		t723* L_21 = p0;
		int32_t L_22 = V_0;
		t723* L_23 = (__this->f5);
		int32_t L_24 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, 0, L_24, &m5764_MI);
		t723* L_25 = (__this->f5);
		t723* L_26 = (__this->f6);
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8143_MI, __this, L_25, L_26);
		t723* L_27 = (__this->f6);
		t723* L_28 = p3;
		int32_t L_29 = p4;
		int32_t L_30 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_27, 0, (t121 *)(t121 *)L_28, L_29, L_30, &m5764_MI);
		int32_t L_31 = V_0;
		int32_t L_32 = (__this->f2);
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)L_32));
		int32_t L_33 = p4;
		int32_t L_34 = (__this->f2);
		p4 = ((int32_t)((int32_t)L_33+(int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = (__this->f2);
		V_2 = ((int32_t)((int32_t)L_35+(int32_t)L_36));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008c;
		}
	}
	{
		bool L_40 = m8150(__this, &m8150_MI);
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		t723* L_41 = p0;
		int32_t L_42 = V_0;
		t723* L_43 = (__this->f5);
		int32_t L_44 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_41, L_42, (t121 *)(t121 *)L_43, 0, L_44, &m5764_MI);
		__this->f10 = 1;
	}

IL_0112:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8152 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8152_init;
	if (!m8152_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8152_init = true;
	}
	t723* V_0 = {0};
	{
		t1404 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1404 * L_1 = m6859(NULL, &m6859_MI);
		__this->f11 = L_1;
	}

IL_0013:
	{
		int32_t L_2 = p2;
		V_0 = ((t723*)SZArrayNew(t723_TI_var, L_2));
		t1404 * L_3 = (__this->f11);
		t723* L_4 = V_0;
		VirtActionInvoker1< t723* >::Invoke(&m6860_MI, L_3, L_4);
		t723* L_5 = V_0;
		t723* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		m5764(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, L_7, L_8, &m5764_MI);
		return;
	}
}
extern "C" void m8153 (t1633 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral1349, &m7818_MI);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1535_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m590(NULL, L_0, L_3, &m590_MI);
		V_0 = L_4;
		int32_t L_5 = p1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t2* L_6 = V_0;
		t2* L_7 = m7818(NULL, (t2*) &_stringLiteral1350, &m7818_MI);
		int32_t L_8 = p1;
		int32_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t125_TI), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m590(NULL, L_7, L_10, &m590_MI);
		t2* L_12 = m610(NULL, L_6, L_11, &m610_MI);
		V_0 = L_12;
	}

IL_0036:
	{
		int32_t L_13 = p2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t2* L_14 = V_0;
		t2* L_15 = m7818(NULL, (t2*) &_stringLiteral1351, &m7818_MI);
		int32_t L_16 = p2;
		int32_t L_17 = L_16;
		t9 * L_18 = Box(InitializedTypeInfo(&t125_TI), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = m590(NULL, L_15, L_18, &m590_MI);
		t2* L_20 = m610(NULL, L_14, L_19, &m610_MI);
		V_0 = L_20;
	}

IL_0056:
	{
		t2* L_21 = V_0;
		t1344 * L_22 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_22, L_21, &m5767_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8154 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8154_init;
	if (!m8154_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8154_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t723* V_3 = {0};
	t723* V_4 = {0};
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = {0};
	{
		int32_t L_0 = p2;
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f2);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)L_1))*(int32_t)L_2));
		int32_t L_3 = p2;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)L_4));
		int32_t L_5 = V_0;
		V_2 = L_5;
		t1425 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_6);
		V_8 = L_7;
		int32_t L_8 = V_8;
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 0)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 1)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 2)
		{
			goto IL_003e;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)2)) == 3)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0049;
	}

IL_003e:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = (__this->f2);
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)L_10));
		goto IL_009c;
	}

IL_0049:
	{
		int32_t L_11 = p2;
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		return ((t723*)SZArrayNew(t723_TI_var, 0));
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		t1425 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		t1344 * L_15 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_15, (t2*) &_stringLiteral1352, &m5767_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006f:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f2);
		V_3 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)L_16+(int32_t)L_17))));
		t723* L_18 = p0;
		int32_t L_19 = p1;
		t723* L_20 = V_3;
		int32_t L_21 = p2;
		m5764(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, 0, L_21, &m5764_MI);
		t723* L_22 = V_3;
		p0 = L_22;
		p1 = 0;
		t723* L_23 = V_3;
		p2 = (((int32_t)(((t121 *)L_23)->max_length)));
		int32_t L_24 = p2;
		V_2 = L_24;
	}

IL_009a:
	{
		goto IL_009c;
	}

IL_009c:
	{
		int32_t L_25 = V_2;
		V_4 = ((t723*)SZArrayNew(t723_TI_var, L_25));
		V_5 = 0;
		goto IL_00dc;
	}

IL_00a9:
	{
		t723* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = (__this->f2);
		t723* L_29 = V_4;
		int32_t L_30 = V_5;
		m8151(__this, L_26, L_27, L_28, L_29, L_30, &m8151_MI);
		int32_t L_31 = p1;
		int32_t L_32 = (__this->f2);
		p1 = ((int32_t)((int32_t)L_31+(int32_t)L_32));
		int32_t L_33 = V_5;
		int32_t L_34 = (__this->f2);
		V_5 = ((int32_t)((int32_t)L_33+(int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = (__this->f2);
		V_2 = ((int32_t)((int32_t)L_35-(int32_t)L_36));
	}

IL_00dc:
	{
		int32_t L_37 = V_2;
		int32_t L_38 = (__this->f2);
		if ((((int32_t)L_37) > ((int32_t)L_38)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_39 = (__this->f2);
		int32_t L_40 = V_1;
		V_6 = (((uint8_t)((int32_t)((int32_t)L_39-(int32_t)L_40))));
		t1425 * L_41 = (__this->f0);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_41);
		V_8 = L_42;
		int32_t L_43 = V_8;
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 0)
		{
			goto IL_0187;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 2)
		{
			goto IL_011b;
		}
		if (((int32_t)((int32_t)L_43-(int32_t)2)) == 3)
		{
			goto IL_0149;
		}
	}
	{
		goto IL_01c6;
	}

IL_011b:
	{
		t723* L_44 = V_4;
		t723* L_45 = V_4;
		uint8_t L_46 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))) = (uint8_t)L_46;
		t723* L_47 = p0;
		int32_t L_48 = p1;
		t723* L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		m5764(NULL, (t121 *)(t121 *)L_47, L_48, (t121 *)(t121 *)L_49, L_50, L_51, &m5764_MI);
		t723* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = (__this->f2);
		t723* L_55 = V_4;
		int32_t L_56 = V_0;
		m8151(__this, L_52, L_53, L_54, L_55, L_56, &m8151_MI);
		goto IL_01db;
	}

IL_0149:
	{
		t723* L_57 = V_4;
		t723* L_58 = V_4;
		uint8_t L_59 = V_6;
		uint8_t L_60 = V_6;
		m8152(__this, L_57, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_58)->max_length)))-(int32_t)L_59)), ((int32_t)((int32_t)L_60-(int32_t)1)), &m8152_MI);
		t723* L_61 = V_4;
		t723* L_62 = V_4;
		uint8_t L_63 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_62)->max_length)))-(int32_t)1)))) = (uint8_t)L_63;
		t723* L_64 = p0;
		int32_t L_65 = p1;
		t723* L_66 = V_4;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		m5764(NULL, (t121 *)(t121 *)L_64, L_65, (t121 *)(t121 *)L_66, L_67, L_68, &m5764_MI);
		t723* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = (__this->f2);
		t723* L_72 = V_4;
		int32_t L_73 = V_0;
		m8151(__this, L_69, L_70, L_71, L_72, L_73, &m8151_MI);
		goto IL_01db;
	}

IL_0187:
	{
		t723* L_74 = V_4;
		V_7 = (((int32_t)(((t121 *)L_74)->max_length)));
		goto IL_0196;
	}

IL_018f:
	{
		t723* L_75 = V_4;
		int32_t L_76 = V_7;
		uint8_t L_77 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_76)) = (uint8_t)L_77;
	}

IL_0196:
	{
		int32_t L_78 = V_7;
		int32_t L_79 = ((int32_t)((int32_t)L_78-(int32_t)1));
		V_7 = L_79;
		t723* L_80 = V_4;
		uint8_t L_81 = V_6;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_80)->max_length)))-(int32_t)L_81)))))
		{
			goto IL_018f;
		}
	}
	{
		t723* L_82 = p0;
		int32_t L_83 = p1;
		t723* L_84 = V_4;
		int32_t L_85 = V_0;
		int32_t L_86 = V_1;
		m5764(NULL, (t121 *)(t121 *)L_82, L_83, (t121 *)(t121 *)L_84, L_85, L_86, &m5764_MI);
		t723* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = (__this->f2);
		t723* L_90 = V_4;
		int32_t L_91 = V_0;
		m8151(__this, L_87, L_88, L_89, L_90, L_91, &m8151_MI);
		goto IL_01db;
	}

IL_01c6:
	{
		t723* L_92 = p0;
		int32_t L_93 = p1;
		int32_t L_94 = (__this->f2);
		t723* L_95 = V_4;
		int32_t L_96 = V_5;
		m8151(__this, L_92, L_93, L_94, L_95, L_96, &m8151_MI);
		goto IL_01db;
	}

IL_01db:
	{
		t723* L_97 = V_4;
		return L_97;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8155 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8155_init;
	if (!m8155_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8155_init = true;
	}
	int32_t V_0 = 0;
	t723* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t723* V_7 = {0};
	int32_t V_8 = {0};
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = p2;
		int32_t L_1 = (__this->f2);
		if ((((int32_t)((int32_t)((int32_t)L_0%(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t1344 * L_2 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_2, (t2*) &_stringLiteral1348, &m5767_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int32_t L_3 = p2;
		V_0 = L_3;
		bool L_4 = (__this->f10);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->f2);
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)L_6));
	}

IL_0029:
	{
		int32_t L_7 = V_0;
		V_1 = ((t723*)SZArrayNew(t723_TI_var, L_7));
		V_2 = 0;
		goto IL_0061;
	}

IL_0034:
	{
		t723* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f2);
		t723* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = m8151(__this, L_8, L_9, L_10, L_11, L_12, &m8151_MI);
		V_3 = L_13;
		int32_t L_14 = p1;
		int32_t L_15 = (__this->f2);
		p1 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
		int32_t L_18 = p2;
		int32_t L_19 = (__this->f2);
		p2 = ((int32_t)((int32_t)L_18-(int32_t)L_19));
	}

IL_0061:
	{
		int32_t L_20 = p2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		bool L_21 = (__this->f10);
		if (!L_21)
		{
			goto IL_00a3;
		}
	}
	{
		t723* L_22 = (__this->f5);
		t723* L_23 = (__this->f6);
		VirtActionInvoker2< t723*, t723* >::Invoke(&m8143_MI, __this, L_22, L_23);
		t723* L_24 = (__this->f6);
		t723* L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_24, 0, (t121 *)(t121 *)L_25, L_26, L_27, &m5764_MI);
		int32_t L_28 = V_2;
		int32_t L_29 = (__this->f2);
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		__this->f10 = 0;
	}

IL_00a3:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		t723* L_31 = V_1;
		int32_t L_32 = V_0;
		int32_t L_33 = ((int32_t)((int32_t)L_32-(int32_t)1));
		G_B12_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_33))));
		goto IL_00af;
	}

IL_00ae:
	{
		G_B12_0 = 0;
	}

IL_00af:
	{
		V_4 = G_B12_0;
		t1425 * L_34 = (__this->f0);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_34);
		V_8 = L_35;
		int32_t L_36 = V_8;
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 0)
		{
			goto IL_01c2;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 1)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 2)
		{
			goto IL_01c2;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 3)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_36-(int32_t)1)) == 4)
		{
			goto IL_013d;
		}
	}
	{
		goto IL_01c4;
	}

IL_00e0:
	{
		uint8_t L_37 = V_4;
		if (!L_37)
		{
			goto IL_00ee;
		}
	}
	{
		uint8_t L_38 = V_4;
		int32_t L_39 = (__this->f2);
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_0102;
		}
	}

IL_00ee:
	{
		t1425 * L_40 = (__this->f0);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_40);
		uint8_t L_42 = V_4;
		m8153(__this, L_41, L_42, (-1), &m8153_MI);
	}

IL_0102:
	{
		uint8_t L_43 = V_4;
		V_5 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_012e;
	}

IL_010a:
	{
		t723* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45-(int32_t)1))-(int32_t)L_46));
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_44, L_47)))
		{
			goto IL_0128;
		}
	}
	{
		t1425 * L_48 = (__this->f0);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_48);
		int32_t L_50 = V_5;
		m8153(__this, L_49, (-1), L_50, &m8153_MI);
	}

IL_0128:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)((int32_t)L_51-(int32_t)1));
	}

IL_012e:
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_53 = V_0;
		uint8_t L_54 = V_4;
		V_0 = ((int32_t)((int32_t)L_53-(int32_t)L_54));
		goto IL_01c4;
	}

IL_013d:
	{
		uint8_t L_55 = V_4;
		if (!L_55)
		{
			goto IL_014b;
		}
	}
	{
		uint8_t L_56 = V_4;
		int32_t L_57 = (__this->f2);
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_015f;
		}
	}

IL_014b:
	{
		t1425 * L_58 = (__this->f0);
		int32_t L_59 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_58);
		uint8_t L_60 = V_4;
		m8153(__this, L_59, L_60, (-1), &m8153_MI);
	}

IL_015f:
	{
		int32_t L_61 = V_0;
		uint8_t L_62 = V_4;
		V_0 = ((int32_t)((int32_t)L_61-(int32_t)L_62));
		goto IL_01c4;
	}

IL_0166:
	{
		uint8_t L_63 = V_4;
		if (!L_63)
		{
			goto IL_0174;
		}
	}
	{
		uint8_t L_64 = V_4;
		int32_t L_65 = (__this->f2);
		if ((((int32_t)L_64) <= ((int32_t)L_65)))
		{
			goto IL_0188;
		}
	}

IL_0174:
	{
		t1425 * L_66 = (__this->f0);
		int32_t L_67 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_66);
		uint8_t L_68 = V_4;
		m8153(__this, L_67, L_68, (-1), &m8153_MI);
	}

IL_0188:
	{
		uint8_t L_69 = V_4;
		V_6 = ((int32_t)((int32_t)L_69-(int32_t)1));
		goto IL_01b6;
	}

IL_0190:
	{
		t723* L_70 = V_1;
		int32_t L_71 = V_0;
		int32_t L_72 = V_6;
		int32_t L_73 = ((int32_t)((int32_t)((int32_t)((int32_t)L_71-(int32_t)1))-(int32_t)L_72));
		uint8_t L_74 = V_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_73))) == ((int32_t)L_74)))
		{
			goto IL_01b0;
		}
	}
	{
		t1425 * L_75 = (__this->f0);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7018_MI, L_75);
		int32_t L_77 = V_6;
		m8153(__this, L_76, (-1), L_77, &m8153_MI);
	}

IL_01b0:
	{
		int32_t L_78 = V_6;
		V_6 = ((int32_t)((int32_t)L_78-(int32_t)1));
	}

IL_01b6:
	{
		int32_t L_79 = V_6;
		if ((((int32_t)L_79) > ((int32_t)0)))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_80 = V_0;
		uint8_t L_81 = V_4;
		V_0 = ((int32_t)((int32_t)L_80-(int32_t)L_81));
		goto IL_01c4;
	}

IL_01c2:
	{
		goto IL_01c4;
	}

IL_01c4:
	{
		int32_t L_82 = V_0;
		if ((((int32_t)L_82) <= ((int32_t)0)))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_83 = V_0;
		V_7 = ((t723*)SZArrayNew(t723_TI_var, L_83));
		t723* L_84 = V_1;
		t723* L_85 = V_7;
		int32_t L_86 = V_0;
		m5764(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, 0, L_86, &m5764_MI);
		t723* L_87 = V_1;
		t723* L_88 = V_1;
		m1146(NULL, (t121 *)(t121 *)L_87, 0, (((int32_t)(((t121 *)L_88)->max_length))), &m1146_MI);
		t723* L_89 = V_7;
		return L_89;
	}

IL_01e8:
	{
		return ((t723*)SZArrayNew(t723_TI_var, 0));
	}
}
extern MethodInfo m8156_MI;
extern "C" t723* m8156 (t1633 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m6883(L_1, (t2*) &_stringLiteral1347, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t723* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8148(__this, L_2, L_3, L_4, &m8148_MI);
		bool L_5 = (__this->f1);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t723* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		t723* L_9 = m8154(__this, L_6, L_7, L_8, &m8154_MI);
		return L_9;
	}

IL_002e:
	{
		t723* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		t723* L_13 = m8155(__this, L_10, L_11, L_12, &m8155_MI);
		return L_13;
	}
}
#include "t1634.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1634_TI;
#include "t1634MD.h"

#include "t1635.h"


extern MethodInfo m8157_MI;
extern "C" void m8157 (t1634 * __this, t2* p0, t1635 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t1635 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8158_MI;
extern "C" t2* m8158 (t1634 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8159_MI;
extern "C" t1635 * m8159 (t1634 * __this, MethodInfo* method)
{
	{
		t1635 * L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1636.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1636_TI;
#include "t1636MD.h"

#include "t2163.h"
#include "t2151.h"
#include "t306.h"
#include "t1359.h"
extern TypeInfo t2163_TI;
extern TypeInfo t1359_TI;
#include "t2163MD.h"
#include "t307MD.h"
#include "t1359MD.h"
extern MethodInfo m1107_MI;
extern MethodInfo m6884_MI;
extern MethodInfo m6873_MI;
extern MethodInfo m6885_MI;
extern MethodInfo m6886_MI;
extern MethodInfo m6887_MI;
extern MethodInfo m6888_MI;
extern MethodInfo m6889_MI;
extern MethodInfo m8166_MI;
extern MethodInfo m8167_MI;
extern FieldInfo t2163_f12_FieldInfo;
extern FieldInfo t2163_f13_FieldInfo;
extern FieldInfo t2163_f14_FieldInfo;


extern MethodInfo m8160_MI;
extern "C" void m8160 (t1636 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8161_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8161 (t9 * __this , MethodInfo* method)
{
	static bool m8161_init;
	if (!m8161_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8161_init = true;
	}
	{
		t723* L_0 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)64)));
		m1107(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2163_f12_FieldInfo), &m1107_MI);
		((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f0 = L_0;
		t723* L_1 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)64)));
		m1107(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2163_f13_FieldInfo), &m1107_MI);
		((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f1 = L_1;
		t723* L_2 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)64)));
		m1107(NULL, (t121 *)(t121 *)L_2, LoadFieldToken(&t2163_f14_FieldInfo), &m1107_MI);
		((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m8162_MI;
extern "C" void m8162 (t1636 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m8163_MI;
extern "C" void m8163 (t1636 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8164_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8164 (t1636 * __this, t723* p0, MethodInfo* method)
{
	static bool m8164_init;
	if (!m8164_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8164_init = true;
	}
	{
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		__this->f5 = ((t723*)SZArrayNew(t723_TI_var, 0));
		goto IL_0022;
	}

IL_0011:
	{
		t723* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		__this->f5 = ((t723*)Castclass(L_2, t723_TI_var));
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8165_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8165 (t1636 * __this, t723* p0, MethodInfo* method)
{
	static bool m8165_init;
	if (!m8165_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8165_init = true;
	}
	{
		t723* L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t723* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		__this->f6 = ((t723*)Castclass(L_2, t723_TI_var));
		goto IL_001d;
	}

IL_0016:
	{
		__this->f6 = (t723*)NULL;
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m8166 (t1636 * __this, t723* p0, int32_t p1, t723* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t723* L_0 = p2;
		t723* L_1 = p2;
		int32_t L_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))-(int32_t)1));
		t723* L_3 = p0;
		int32_t L_4 = p1;
		t723* L_5 = p2;
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)(((int32_t)(((t121 *)L_5)->max_length)))))-(int32_t)1));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_6))&(int32_t)((int32_t)255)))))+(int32_t)1));
		t723* L_7 = p0;
		int32_t L_8 = p1;
		t723* L_9 = p2;
		int32_t L_10 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))))-(int32_t)1)))) = (uint8_t)(((uint8_t)L_10));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11>>(int32_t)8));
		t723* L_12 = p2;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)2));
		goto IL_005e;
	}

IL_0037:
	{
		int32_t L_13 = V_0;
		t723* L_14 = p2;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		t723* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_20))&(int32_t)((int32_t)255)))))));
		t723* L_21 = p0;
		int32_t L_22 = p1;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, ((int32_t)((int32_t)L_22+(int32_t)L_23)))) = (uint8_t)(((uint8_t)L_24));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25>>(int32_t)8));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_005e:
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8167 (t1636 * __this, t723* p0, int32_t p1, MethodInfo* method)
{
	static bool m8167_init;
	if (!m8167_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8167_init = true;
	}
	t1359 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t723* V_3 = {0};
	t723* V_4 = {0};
	int32_t V_5 = 0;
	t723* V_6 = {0};
	int32_t V_7 = 0;
	t723* V_8 = {0};
	t723* V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	t723* V_12 = {0};
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		t2* L_0 = (__this->f3);
		t1359 * L_1 = m6884(NULL, L_0, &m6884_MI);
		V_0 = L_1;
		t1359 * L_2 = V_0;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6873_MI, L_2);
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		V_2 = ((int32_t)64);
		int32_t L_4 = p1;
		V_3 = ((t723*)SZArrayNew(t723_TI_var, L_4));
		t723* L_5 = (__this->f6);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		t723* L_6 = (__this->f6);
		if (!(((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_7 = V_2;
		t723* L_8 = (__this->f6);
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		V_4 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)L_7*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))+(int32_t)L_9))-(int32_t)1))/(int32_t)L_10))))));
		V_5 = 0;
		goto IL_006a;
	}

IL_004d:
	{
		t723* L_11 = V_4;
		int32_t L_12 = V_5;
		t723* L_13 = (__this->f6);
		int32_t L_14 = V_5;
		t723* L_15 = (__this->f6);
		int32_t L_16 = ((int32_t)((int32_t)L_14%(int32_t)(((int32_t)(((t121 *)L_15)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_16));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_18 = V_5;
		t723* L_19 = V_4;
		if ((!(((uint32_t)L_18) == ((uint32_t)(((int32_t)(((t121 *)L_19)->max_length)))))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_007c;
	}

IL_0074:
	{
		V_4 = ((t723*)SZArrayNew(t723_TI_var, 0));
	}

IL_007c:
	{
		t723* L_20 = (__this->f5);
		if (!L_20)
		{
			goto IL_00d1;
		}
	}
	{
		t723* L_21 = (__this->f5);
		if (!(((int32_t)(((t121 *)L_21)->max_length))))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_22 = V_2;
		t723* L_23 = (__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = V_2;
		V_6 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)L_22*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)L_24))-(int32_t)1))/(int32_t)L_25))))));
		V_7 = 0;
		goto IL_00c7;
	}

IL_00aa:
	{
		t723* L_26 = V_6;
		int32_t L_27 = V_7;
		t723* L_28 = (__this->f5);
		int32_t L_29 = V_7;
		t723* L_30 = (__this->f5);
		int32_t L_31 = ((int32_t)((int32_t)L_29%(int32_t)(((int32_t)(((t121 *)L_30)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_31));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		t723* L_34 = V_6;
		if ((!(((uint32_t)L_33) == ((uint32_t)(((int32_t)(((t121 *)L_34)->max_length)))))))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d1:
	{
		V_6 = ((t723*)SZArrayNew(t723_TI_var, 0));
	}

IL_00d9:
	{
		t723* L_35 = V_4;
		t723* L_36 = V_6;
		V_8 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_35)->max_length)))+(int32_t)(((int32_t)(((t121 *)L_36)->max_length)))))));
		t723* L_37 = V_4;
		t723* L_38 = V_8;
		t723* L_39 = V_4;
		m5764(NULL, (t121 *)(t121 *)L_37, 0, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m5764_MI);
		t723* L_40 = V_6;
		t723* L_41 = V_8;
		t723* L_42 = V_4;
		t723* L_43 = V_6;
		m5764(NULL, (t121 *)(t121 *)L_40, 0, (t121 *)(t121 *)L_41, (((int32_t)(((t121 *)L_42)->max_length))), (((int32_t)(((t121 *)L_43)->max_length))), &m5764_MI);
		int32_t L_44 = V_2;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, L_44));
		int32_t L_45 = p1;
		int32_t L_46 = V_1;
		int32_t L_47 = V_1;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45+(int32_t)L_46))-(int32_t)1))/(int32_t)L_47));
		V_11 = 1;
		goto IL_01f0;
	}

IL_0123:
	{
		t1359 * L_48 = V_0;
		t723* L_49 = p0;
		t723* L_50 = p0;
		t723* L_51 = p0;
		VirtFuncInvoker5< int32_t, t723*, int32_t, int32_t, t723*, int32_t >::Invoke(&m6885_MI, L_48, L_49, 0, (((int32_t)(((t121 *)L_50)->max_length))), L_51, 0);
		t1359 * L_52 = V_0;
		t723* L_53 = V_8;
		t723* L_54 = V_8;
		VirtFuncInvoker3< t723*, t723*, int32_t, int32_t >::Invoke(&m6886_MI, L_52, L_53, 0, (((int32_t)(((t121 *)L_54)->max_length))));
		t1359 * L_55 = V_0;
		t723* L_56 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m6887_MI, L_55);
		V_12 = L_56;
		t1359 * L_57 = V_0;
		VirtActionInvoker0::Invoke(&m6888_MI, L_57);
		V_13 = 1;
		goto IL_0167;
	}

IL_0152:
	{
		t1359 * L_58 = V_0;
		t723* L_59 = V_12;
		t723* L_60 = V_12;
		t723* L_61 = m6889(L_58, L_59, 0, (((int32_t)(((t121 *)L_60)->max_length))), &m6889_MI);
		V_12 = L_61;
		int32_t L_62 = V_13;
		V_13 = ((int32_t)((int32_t)L_62+(int32_t)1));
	}

IL_0167:
	{
		int32_t L_63 = V_13;
		int32_t L_64 = (__this->f4);
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_0152;
		}
	}
	{
		V_14 = 0;
		goto IL_018b;
	}

IL_0176:
	{
		t723* L_65 = V_9;
		int32_t L_66 = V_14;
		t723* L_67 = V_12;
		int32_t L_68 = V_14;
		t723* L_69 = V_12;
		int32_t L_70 = ((int32_t)((int32_t)L_68%(int32_t)(((int32_t)(((t121 *)L_69)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_66)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_70));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_018b:
	{
		int32_t L_72 = V_14;
		t723* L_73 = V_9;
		if ((!(((uint32_t)L_72) == ((uint32_t)(((int32_t)(((t121 *)L_73)->max_length)))))))
		{
			goto IL_0176;
		}
	}
	{
		V_15 = 0;
		goto IL_01ac;
	}

IL_0198:
	{
		t723* L_74 = V_8;
		int32_t L_75 = V_15;
		int32_t L_76 = V_2;
		t723* L_77 = V_9;
		m8166(__this, L_74, ((int32_t)((int32_t)L_75*(int32_t)L_76)), L_77, &m8166_MI);
		int32_t L_78 = V_15;
		V_15 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01ac:
	{
		int32_t L_79 = V_15;
		t723* L_80 = V_8;
		int32_t L_81 = V_2;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_80)->max_length)))/(int32_t)L_81))))))
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_82 = V_11;
		int32_t L_83 = V_10;
		if ((!(((uint32_t)L_82) == ((uint32_t)L_83))))
		{
			goto IL_01d7;
		}
	}
	{
		t723* L_84 = V_12;
		t723* L_85 = V_3;
		int32_t L_86 = V_11;
		int32_t L_87 = V_1;
		t723* L_88 = V_3;
		int32_t L_89 = V_11;
		int32_t L_90 = V_1;
		m5764(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)1))*(int32_t)L_87)), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_88)->max_length)))-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_89-(int32_t)1))*(int32_t)L_90)))), &m5764_MI);
		goto IL_01ea;
	}

IL_01d7:
	{
		t723* L_91 = V_12;
		t723* L_92 = V_3;
		int32_t L_93 = V_11;
		int32_t L_94 = V_1;
		t723* L_95 = V_12;
		m5764(NULL, (t121 *)(t121 *)L_91, 0, (t121 *)(t121 *)L_92, ((int32_t)((int32_t)((int32_t)((int32_t)L_93-(int32_t)1))*(int32_t)L_94)), (((int32_t)(((t121 *)L_95)->max_length))), &m5764_MI);
	}

IL_01ea:
	{
		int32_t L_96 = V_11;
		V_11 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_01f0:
	{
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		if ((((int32_t)L_97) <= ((int32_t)L_98)))
		{
			goto IL_0123;
		}
	}
	{
		t723* L_99 = V_3;
		return L_99;
	}
}
extern MethodInfo m8168_MI;
extern "C" t723* m8168 (t1636 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1636_TI));
		t723* L_0 = ((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f0;
		int32_t L_1 = p0;
		t723* L_2 = m8167(__this, L_0, L_1, &m8167_MI);
		return L_2;
	}
}
extern MethodInfo m8169_MI;
extern "C" t723* m8169 (t1636 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1636_TI));
		t723* L_0 = ((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f1;
		int32_t L_1 = p0;
		t723* L_2 = m8167(__this, L_0, L_1, &m8167_MI);
		return L_2;
	}
}
extern MethodInfo m8170_MI;
extern "C" t723* m8170 (t1636 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1636_TI));
		t723* L_0 = ((t1636_SFs*)InitializedTypeInfo(&t1636_TI)->static_fields)->f2;
		int32_t L_1 = p0;
		t723* L_2 = m8167(__this, L_0, L_1, &m8167_MI);
		return L_2;
	}
}
#include "t1637.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1637_TI;
#include "t1637MD.h"

#include "t296.h"
#include "t722.h"
#include "t1638.h"
#include "t1647.h"
#include "t1225.h"
#include "t1161.h"
#include "t1641.h"
#include "t1639.h"
#include "t713.h"
#include "t169.h"
#include "t1343.h"
#include "t1643.h"
#include "t1207.h"
#include "t1628.h"
#include "t1208.h"
#include "t1629.h"
#include "t1522.h"
#include "t1523.h"
extern TypeInfo t722_TI;
extern TypeInfo t1225_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1641_TI;
extern TypeInfo t137_TI;
extern TypeInfo t1638_TI;
extern TypeInfo t1635_TI;
extern TypeInfo t713_TI;
extern TypeInfo t1639_TI;
extern TypeInfo t169_TI;
extern TypeInfo t1416_TI;
extern TypeInfo t1207_TI;
extern TypeInfo t1343_TI;
extern TypeInfo t1643_TI;
extern TypeInfo t1628_TI;
extern TypeInfo t1629_TI;
extern TypeInfo t1522_TI;
extern TypeInfo t1523_TI;
#include "t722MD.h"
#include "t1225MD.h"
#include "t1161MD.h"
#include "t1635MD.h"
#include "t1647MD.h"
#include "t1641MD.h"
#include "t1638MD.h"
#include "t1645MD.h"
#include "t713MD.h"
#include "t1639MD.h"
#include "t169MD.h"
#include "t1643MD.h"
#include "t1207MD.h"
#include "t1628MD.h"
#include "t1629MD.h"
#include "t1523MD.h"
extern Il2CppType t713_0_0_0;
extern MethodInfo m2699_MI;
extern MethodInfo m8187_MI;
extern MethodInfo m2714_MI;
extern MethodInfo m6890_MI;
extern MethodInfo m6891_MI;
extern MethodInfo m5857_MI;
extern MethodInfo m5699_MI;
extern MethodInfo m361_MI;
extern MethodInfo m5852_MI;
extern MethodInfo m8242_MI;
extern MethodInfo m8234_MI;
extern MethodInfo m8262_MI;
extern MethodInfo m8264_MI;
extern MethodInfo m8192_MI;
extern MethodInfo m8216_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5698_MI;
extern MethodInfo m8213_MI;
extern MethodInfo m8171_MI;
extern MethodInfo m8177_MI;
extern MethodInfo m8175_MI;
extern MethodInfo m8230_MI;
extern MethodInfo m8232_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m8263_MI;
extern MethodInfo m8266_MI;
extern MethodInfo m2713_MI;
extern MethodInfo m8231_MI;
extern MethodInfo m8246_MI;
extern MethodInfo m8245_MI;
extern MethodInfo m8186_MI;
extern MethodInfo m8179_MI;
extern MethodInfo m5747_MI;
extern MethodInfo m5748_MI;
extern MethodInfo m5749_MI;
extern MethodInfo m8185_MI;
extern MethodInfo m8268_MI;
extern MethodInfo m8182_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m6893_MI;
extern MethodInfo m6894_MI;
extern MethodInfo m6895_MI;
extern MethodInfo m6896_MI;
extern MethodInfo m8180_MI;
extern MethodInfo m6897_MI;
extern MethodInfo m6898_MI;
extern MethodInfo m6899_MI;
extern MethodInfo m8269_MI;
extern MethodInfo m8270_MI;
extern MethodInfo m8181_MI;
extern MethodInfo m8178_MI;
extern MethodInfo m8217_MI;
extern MethodInfo m8211_MI;
extern MethodInfo m8198_MI;
extern MethodInfo m8196_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m8212_MI;
extern MethodInfo m8106_MI;
extern MethodInfo m8183_MI;
extern MethodInfo m8111_MI;
extern MethodInfo m5709_MI;
extern MethodInfo m8110_MI;
extern MethodInfo m8105_MI;
extern MethodInfo m8184_MI;
extern MethodInfo m8113_MI;
extern MethodInfo m8114_MI;
extern MethodInfo m8116_MI;
extern MethodInfo m8117_MI;
extern MethodInfo m8115_MI;
extern MethodInfo m6900_MI;
extern MethodInfo m6901_MI;
extern Il2CppGenericMethod m5747_GM;
extern Il2CppGenericMethod m5748_GM;
extern Il2CppGenericMethod m5749_GM;


extern "C" void m8171 (t1637 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		int32_t L_0 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f0;
		__this->f8 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		__this->f2 = L_1;
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_2, &m5698_MI);
		__this->f3 = L_2;
		t1638 * L_3 = (t1638 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1638_TI));
		m8213(L_3, &m8213_MI);
		__this->f4 = L_3;
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		t1161 * L_4 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_4, &m5698_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m8172_MI;
extern "C" void m8172 (t1637 * __this, t723* p0, MethodInfo* method)
{
	{
		m8171(__this, &m8171_MI);
		m8177(__this, (t2*)NULL, &m8177_MI);
		t723* L_0 = p0;
		m8175(__this, L_0, &m8175_MI);
		return;
	}
}
extern MethodInfo m8173_MI;
extern "C" void m8173 (t1637 * __this, t723* p0, t2* p1, MethodInfo* method)
{
	{
		m8171(__this, &m8171_MI);
		t2* L_0 = p1;
		m8177(__this, L_0, &m8177_MI);
		t723* L_1 = p0;
		m8175(__this, L_1, &m8175_MI);
		return;
	}
}
extern MethodInfo m8174_MI;
extern "C" void m8174 (t9 * __this , MethodInfo* method)
{
	{
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f0 = ((int32_t)2000);
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f10 = ((int32_t)2147483647);
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m8175 (t1637 * __this, t723* p0, MethodInfo* method)
{
	static bool m8175_init;
	if (!m8175_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m8175_init = true;
	}
	t1635 * V_0 = {0};
	t1635 * V_1 = {0};
	t1647 * V_2 = {0};
	t1635 * V_3 = {0};
	t1635 * V_4 = {0};
	t1635 * V_5 = {0};
	t2* V_6 = {0};
	t723* V_7 = {0};
	t1635 * V_8 = {0};
	t1635 * V_9 = {0};
	t723* V_10 = {0};
	t723* V_11 = {0};
	t1635 * V_12 = {0};
	int32_t V_13 = 0;
	t1647 * V_14 = {0};
	t1635 * V_15 = {0};
	int32_t V_16 = 0;
	t1635 * V_17 = {0};
	t1639 * V_18 = {0};
	t1635 * V_19 = {0};
	int32_t V_20 = 0;
	t1635 * V_21 = {0};
	t2* V_22 = {0};
	t713 * V_23 = {0};
	int32_t V_24 = 0;
	{
		t723* L_0 = p0;
		t1635 * L_1 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_1, L_0, &m8230_MI);
		V_0 = L_1;
		t1635 * L_2 = V_0;
		uint8_t L_3 = m8232(L_2, &m8232_MI);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral861, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1635 * L_5 = V_0;
		t1635 * L_6 = m8242(L_5, 0, &m8242_MI);
		V_1 = L_6;
		t1635 * L_7 = V_1;
		uint8_t L_8 = m8232(L_7, &m8232_MI);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		t556 * L_9 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_9, (t2*) &_stringLiteral862, &m2885_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0038:
	{
		t1635 * L_10 = V_0;
		t1635 * L_11 = m8242(L_10, 1, &m8242_MI);
		t1647 * L_12 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8263(L_12, L_11, &m8263_MI);
		V_2 = L_12;
		t1647 * L_13 = V_2;
		t2* L_14 = m8266(L_13, &m8266_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2713(NULL, L_14, (t2*) &_stringLiteral661, &m2713_MI);
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		t556 * L_16 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_16, (t2*) &_stringLiteral863, &m2885_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0062:
	{
		t1635 * L_17 = V_0;
		int32_t L_18 = m8231(L_17, &m8231_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_018b;
		}
	}
	{
		t1635 * L_19 = V_0;
		t1635 * L_20 = m8242(L_19, 2, &m8242_MI);
		V_3 = L_20;
		t1635 * L_21 = V_3;
		uint8_t L_22 = m8232(L_21, &m8232_MI);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			goto IL_008b;
		}
	}
	{
		t556 * L_23 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_23, (t2*) &_stringLiteral864, &m2885_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008b:
	{
		t1635 * L_24 = V_3;
		t1635 * L_25 = m8242(L_24, 0, &m8242_MI);
		V_4 = L_25;
		t1635 * L_26 = V_4;
		uint8_t L_27 = m8232(L_26, &m8232_MI);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_00aa;
		}
	}
	{
		t556 * L_28 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_28, (t2*) &_stringLiteral864, &m2885_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00aa:
	{
		t1635 * L_29 = V_4;
		t1635 * L_30 = m8242(L_29, 0, &m8242_MI);
		V_5 = L_30;
		t1635 * L_31 = V_5;
		t1635 * L_32 = m8242(L_31, 0, &m8242_MI);
		t2* L_33 = m8246(NULL, L_32, &m8246_MI);
		V_6 = L_33;
		t2* L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_35 = m2713(NULL, L_34, (t2*) &_stringLiteral667, &m2713_MI);
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		t556 * L_36 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_36, (t2*) &_stringLiteral865, &m2885_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00dc:
	{
		t1635 * L_37 = V_4;
		t1635 * L_38 = m8242(L_37, 1, &m8242_MI);
		t723* L_39 = m8234(L_38, &m8234_MI);
		V_7 = L_39;
		t1635 * L_40 = V_3;
		t1635 * L_41 = m8242(L_40, 1, &m8242_MI);
		V_8 = L_41;
		t1635 * L_42 = V_8;
		uint8_t L_43 = m8232(L_42, &m8232_MI);
		if ((((int32_t)L_43) == ((int32_t)4)))
		{
			goto IL_0109;
		}
	}
	{
		t556 * L_44 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_44, (t2*) &_stringLiteral866, &m2885_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0109:
	{
		__this->f8 = 1;
		t1635 * L_45 = V_3;
		int32_t L_46 = m8231(L_45, &m8231_MI);
		if ((((int32_t)L_46) <= ((int32_t)2)))
		{
			goto IL_0144;
		}
	}
	{
		t1635 * L_47 = V_3;
		t1635 * L_48 = m8242(L_47, 2, &m8242_MI);
		V_9 = L_48;
		t1635 * L_49 = V_9;
		uint8_t L_50 = m8232(L_49, &m8232_MI);
		if ((((int32_t)L_50) == ((int32_t)2)))
		{
			goto IL_0137;
		}
	}
	{
		t556 * L_51 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_51, (t2*) &_stringLiteral867, &m2885_MI);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_0137:
	{
		t1635 * L_52 = V_9;
		int32_t L_53 = m8245(NULL, L_52, &m8245_MI);
		__this->f8 = L_53;
	}

IL_0144:
	{
		t1647 * L_54 = V_2;
		t1635 * L_55 = m8264(L_54, &m8264_MI);
		t1635 * L_56 = m8242(L_55, 0, &m8242_MI);
		t723* L_57 = m8234(L_56, &m8234_MI);
		V_10 = L_57;
		t723* L_58 = (__this->f1);
		t1635 * L_59 = V_8;
		t723* L_60 = m8234(L_59, &m8234_MI);
		int32_t L_61 = (__this->f8);
		t723* L_62 = V_10;
		t723* L_63 = m8186(__this, L_58, L_60, L_61, L_62, &m8186_MI);
		V_11 = L_63;
		t723* L_64 = V_7;
		t723* L_65 = V_11;
		bool L_66 = m8179(__this, L_64, L_65, &m8179_MI);
		if (L_66)
		{
			goto IL_018b;
		}
	}
	{
		t1344 * L_67 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_67, (t2*) &_stringLiteral868, &m5767_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_018b:
	{
		t1647 * L_68 = V_2;
		t1635 * L_69 = m8264(L_68, &m8264_MI);
		t1635 * L_70 = m8242(L_69, 0, &m8242_MI);
		t723* L_71 = m8234(L_70, &m8234_MI);
		t1635 * L_72 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_72, L_71, &m8230_MI);
		V_12 = L_72;
		V_13 = 0;
		goto IL_02e1;
	}

IL_01ab:
	{
		t1635 * L_73 = V_12;
		int32_t L_74 = V_13;
		t1635 * L_75 = m8242(L_73, L_74, &m8242_MI);
		t1647 * L_76 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8263(L_76, L_75, &m8263_MI);
		V_14 = L_76;
		t1647 * L_77 = V_14;
		t2* L_78 = m8266(L_77, &m8266_MI);
		V_22 = L_78;
		t2* L_79 = V_22;
		if (!L_79)
		{
			goto IL_02d0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_80 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f11;
		if (L_80)
		{
			goto IL_0208;
		}
	}
	{
		t713 * L_81 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_81, 3, m5747_MI_var);
		V_23 = L_81;
		t713 * L_82 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_82, (t2*) &_stringLiteral661, 0);
		t713 * L_83 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_83, (t2*) &_stringLiteral869, 1);
		t713 * L_84 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_84, (t2*) &_stringLiteral870, 2);
		t713 * L_85 = V_23;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f11 = L_85;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_86 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f11;
		t2* L_87 = V_22;
		bool L_88 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_86, L_87, (&V_24));
		if (!L_88)
		{
			goto IL_02d0;
		}
	}
	{
		int32_t L_89 = V_24;
		if (L_89 == 0)
		{
			goto IL_0233;
		}
		if (L_89 == 1)
		{
			goto IL_0277;
		}
		if (L_89 == 2)
		{
			goto IL_02c5;
		}
	}
	{
		goto IL_02d0;
	}

IL_0233:
	{
		t1647 * L_90 = V_14;
		t1635 * L_91 = m8264(L_90, &m8264_MI);
		t1635 * L_92 = m8242(L_91, 0, &m8242_MI);
		t723* L_93 = m8234(L_92, &m8234_MI);
		t1635 * L_94 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_94, L_93, &m8230_MI);
		V_15 = L_94;
		V_16 = 0;
		goto IL_026a;
	}

IL_0251:
	{
		t1635 * L_95 = V_15;
		int32_t L_96 = V_16;
		t1635 * L_97 = m8242(L_95, L_96, &m8242_MI);
		V_17 = L_97;
		t1635 * L_98 = V_17;
		m8185(__this, L_98, &m8185_MI);
		int32_t L_99 = V_16;
		V_16 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_026a:
	{
		int32_t L_100 = V_16;
		t1635 * L_101 = V_15;
		int32_t L_102 = m8231(L_101, &m8231_MI);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02db;
	}

IL_0277:
	{
		t1647 * L_103 = V_14;
		t1635 * L_104 = m8264(L_103, &m8264_MI);
		t1635 * L_105 = m8242(L_104, 0, &m8242_MI);
		t1639 * L_106 = (t1639 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1639_TI));
		m8268(L_106, L_105, &m8268_MI);
		V_18 = L_106;
		t1639 * L_107 = V_18;
		t723* L_108 = m8182(__this, L_107, &m8182_MI);
		t1635 * L_109 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_109, L_108, &m8230_MI);
		V_19 = L_109;
		V_20 = 0;
		goto IL_02b8;
	}

IL_029f:
	{
		t1635 * L_110 = V_19;
		int32_t L_111 = V_20;
		t1635 * L_112 = m8242(L_110, L_111, &m8242_MI);
		V_21 = L_112;
		t1635 * L_113 = V_21;
		m8185(__this, L_113, &m8185_MI);
		int32_t L_114 = V_20;
		V_20 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_115 = V_20;
		t1635 * L_116 = V_19;
		int32_t L_117 = m8231(L_116, &m8231_MI);
		if ((((int32_t)L_115) < ((int32_t)L_117)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02db;
	}

IL_02c5:
	{
		t1337 * L_118 = (t1337 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1337_TI));
		m5745(L_118, (t2*) &_stringLiteral871, &m5745_MI);
		il2cpp_codegen_raise_exception(L_118);
	}

IL_02d0:
	{
		t556 * L_119 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_119, (t2*) &_stringLiteral872, &m2885_MI);
		il2cpp_codegen_raise_exception(L_119);
	}

IL_02db:
	{
		int32_t L_120 = V_13;
		V_13 = ((int32_t)((int32_t)L_120+(int32_t)1));
	}

IL_02e1:
	{
		int32_t L_121 = V_13;
		t1635 * L_122 = V_12;
		int32_t L_123 = m8231(L_122, &m8231_MI);
		if ((((int32_t)L_121) < ((int32_t)L_123)))
		{
			goto IL_01ab;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8176_MI;
extern "C" void m8176 (t1637 * __this, MethodInfo* method)
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
		{
			t723* L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_001c;
			}
		}

IL_0008:
		{
			t723* L_1 = (__this->f1);
			t723* L_2 = (__this->f1);
			m1146(NULL, (t121 *)(t121 *)L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))), &m1146_MI);
		}

IL_001c:
		{
			__this->f1 = (t723*)NULL;
			IL2CPP_LEAVE(0x2C, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_002c:
	{
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8177 (t1637 * __this, t2* p0, MethodInfo* method)
{
	static bool m8177_init;
	if (!m8177_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8177_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		t2* L_1 = p0;
		int32_t L_2 = m2699(L_1, &m2699_MI);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2699(L_3, &m2699_MI);
		V_0 = L_4;
		V_1 = 0;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		int32_t L_6 = m8187(NULL, &m8187_MI);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = V_0;
		uint16_t L_9 = m2714(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2714_MI);
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		V_1 = 1;
	}

IL_002a:
	{
		goto IL_0032;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		int32_t L_10 = m8187(NULL, &m8187_MI);
		V_0 = L_10;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))<<(int32_t)1))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_13 = m6890(NULL, &m6890_MI);
		t2* L_14 = p0;
		int32_t L_15 = V_0;
		t723* L_16 = (__this->f1);
		VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t723*, int32_t >::Invoke(&m6891_MI, L_13, L_14, 0, L_15, L_16, 0);
		goto IL_0065;
	}

IL_0059:
	{
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, 2));
	}

IL_0065:
	{
		goto IL_006e;
	}

IL_0067:
	{
		__this->f1 = (t723*)NULL;
	}

IL_006e:
	{
		return;
	}
}
extern "C" t1638 * m8178 (t1637 * __this, MethodInfo* method)
{
	t1634 * V_0 = {0};
	t9 * V_1 = {0};
	t1635 * V_2 = {0};
	t1635 * V_3 = {0};
	t1647 * V_4 = {0};
	t9 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_00a7;
		}
	}
	{
		t1638 * L_1 = (__this->f4);
		VirtActionInvoker0::Invoke(&m5857_MI, L_1);
		t1161 * L_2 = (__this->f9);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_2);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0024:
		{
			t9 * L_4 = V_1;
			t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_4);
			V_0 = ((t1634 *)Castclass(L_5, InitializedTypeInfo(&t1634_TI)));
			t1634 * L_6 = V_0;
			t2* L_7 = m8158(L_6, &m8158_MI);
			bool L_8 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5852_MI, L_7, (t2*) &_stringLiteral860);
			if (!L_8)
			{
				goto IL_0081;
			}
		}

IL_0042:
		{
			t1634 * L_9 = V_0;
			t1635 * L_10 = m8159(L_9, &m8159_MI);
			V_2 = L_10;
			t1635 * L_11 = V_2;
			t1635 * L_12 = m8242(L_11, 1, &m8242_MI);
			V_3 = L_12;
			t1635 * L_13 = V_3;
			t723* L_14 = m8234(L_13, &m8234_MI);
			t1647 * L_15 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
			m8262(L_15, L_14, &m8262_MI);
			V_4 = L_15;
			t1638 * L_16 = (__this->f4);
			t1647 * L_17 = V_4;
			t1635 * L_18 = m8264(L_17, &m8264_MI);
			t1635 * L_19 = m8242(L_18, 0, &m8242_MI);
			t723* L_20 = m8234(L_19, &m8234_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
			t1641 * L_21 = (t1641 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1641_TI));
			m8192(L_21, L_20, &m8192_MI);
			m8216(L_16, L_21, &m8216_MI);
		}

IL_0081:
		{
			t9 * L_22 = V_1;
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_22);
			if (L_23)
			{
				goto IL_0024;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0xA0, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		{
			t9 * L_24 = V_1;
			V_5 = ((t9 *)IsInst(L_24, InitializedTypeInfo(&t137_TI)));
			t9 * L_25 = V_5;
			if (L_25)
			{
				goto IL_0098;
			}
		}

IL_0097:
		{
			IL2CPP_END_FINALLY(139)
		}

IL_0098:
		{
			t9 * L_26 = V_5;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_26);
			IL2CPP_END_FINALLY(139)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0xA0, IL_00a0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00a0:
	{
		__this->f7 = 0;
	}

IL_00a7:
	{
		t1638 * L_27 = (__this->f4);
		return L_27;
	}
}
extern "C" bool m8179 (t1637 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t723* L_0 = p0;
		t723* L_1 = p1;
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_0024;
		}
	}
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_000e:
	{
		t723* L_2 = p0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t723* L_5 = p1;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_9 = V_1;
		t723* L_10 = p0;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		V_0 = 1;
	}

IL_0024:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" t1425 * m8180 (t1637 * __this, t2* p0, t723* p1, int32_t p2, MethodInfo* method)
{
	static bool m8180_init;
	if (!m8180_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m8180_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1636 * V_3 = {0};
	t1425 * V_4 = {0};
	t2* V_5 = {0};
	t713 * V_6 = {0};
	int32_t V_7 = 0;
	{
		V_0 = (t2*)NULL;
		V_1 = 8;
		V_2 = 8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1636_TI));
		t1636 * L_0 = (t1636 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1636_TI));
		m8160(L_0, &m8160_MI);
		V_3 = L_0;
		t1636 * L_1 = V_3;
		t723* L_2 = (__this->f1);
		m8164(L_1, L_2, &m8164_MI);
		t1636 * L_3 = V_3;
		t723* L_4 = p1;
		m8165(L_3, L_4, &m8165_MI);
		t1636 * L_5 = V_3;
		int32_t L_6 = p2;
		m8163(L_5, L_6, &m8163_MI);
		t2* L_7 = p0;
		V_5 = L_7;
		t2* L_8 = V_5;
		if (!L_8)
		{
			goto IL_024b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_9 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f12;
		if (L_9)
		{
			goto IL_00e9;
		}
	}
	{
		t713 * L_10 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_10, ((int32_t)12), m5747_MI_var);
		V_6 = L_10;
		t713 * L_11 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_11, (t2*) &_stringLiteral873, 0);
		t713 * L_12 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_12, (t2*) &_stringLiteral874, 1);
		t713 * L_13 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_13, (t2*) &_stringLiteral875, 2);
		t713 * L_14 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_14, (t2*) &_stringLiteral876, 3);
		t713 * L_15 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_15, (t2*) &_stringLiteral877, 4);
		t713 * L_16 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_16, (t2*) &_stringLiteral878, 5);
		t713 * L_17 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_17, (t2*) &_stringLiteral879, 6);
		t713 * L_18 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_18, (t2*) &_stringLiteral880, 7);
		t713 * L_19 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_19, (t2*) &_stringLiteral881, 8);
		t713 * L_20 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_20, (t2*) &_stringLiteral882, ((int32_t)9));
		t713 * L_21 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_21, (t2*) &_stringLiteral883, ((int32_t)10));
		t713 * L_22 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_22, (t2*) &_stringLiteral884, ((int32_t)11));
		t713 * L_23 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f12 = L_23;
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_24 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f12;
		t2* L_25 = V_5;
		bool L_26 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_24, L_25, (&V_7));
		if (!L_26)
		{
			goto IL_024b;
		}
	}
	{
		int32_t L_27 = V_7;
		if (L_27 == 0)
		{
			goto IL_0138;
		}
		if (L_27 == 1)
		{
			goto IL_014e;
		}
		if (L_27 == 2)
		{
			goto IL_0164;
		}
		if (L_27 == 3)
		{
			goto IL_017c;
		}
		if (L_27 == 4)
		{
			goto IL_0194;
		}
		if (L_27 == 5)
		{
			goto IL_01aa;
		}
		if (L_27 == 6)
		{
			goto IL_01c2;
		}
		if (L_27 == 7)
		{
			goto IL_01dd;
		}
		if (L_27 == 8)
		{
			goto IL_01f4;
		}
		if (L_27 == 9)
		{
			goto IL_020a;
		}
		if (L_27 == 10)
		{
			goto IL_0220;
		}
		if (L_27 == 11)
		{
			goto IL_0236;
		}
	}
	{
		goto IL_024b;
	}

IL_0138:
	{
		t1636 * L_28 = V_3;
		m8162(L_28, (t2*) &_stringLiteral817, &m8162_MI);
		V_0 = (t2*) &_stringLiteral885;
		goto IL_025c;
	}

IL_014e:
	{
		t1636 * L_29 = V_3;
		m8162(L_29, (t2*) &_stringLiteral886, &m8162_MI);
		V_0 = (t2*) &_stringLiteral885;
		goto IL_025c;
	}

IL_0164:
	{
		t1636 * L_30 = V_3;
		m8162(L_30, (t2*) &_stringLiteral817, &m8162_MI);
		V_0 = (t2*) &_stringLiteral887;
		V_1 = 4;
		goto IL_025c;
	}

IL_017c:
	{
		t1636 * L_31 = V_3;
		m8162(L_31, (t2*) &_stringLiteral886, &m8162_MI);
		V_0 = (t2*) &_stringLiteral887;
		V_1 = 4;
		goto IL_025c;
	}

IL_0194:
	{
		t1636 * L_32 = V_3;
		m8162(L_32, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral885;
		goto IL_025c;
	}

IL_01aa:
	{
		t1636 * L_33 = V_3;
		m8162(L_33, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral887;
		V_1 = 4;
		goto IL_025c;
	}

IL_01c2:
	{
		t1636 * L_34 = V_3;
		m8162(L_34, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral889;
		V_1 = ((int32_t)16);
		V_2 = 0;
		goto IL_025c;
	}

IL_01dd:
	{
		t1636 * L_35 = V_3;
		m8162(L_35, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral889;
		V_1 = 5;
		V_2 = 0;
		goto IL_025c;
	}

IL_01f4:
	{
		t1636 * L_36 = V_3;
		m8162(L_36, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral890;
		V_1 = ((int32_t)24);
		goto IL_025c;
	}

IL_020a:
	{
		t1636 * L_37 = V_3;
		m8162(L_37, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral890;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0220:
	{
		t1636 * L_38 = V_3;
		m8162(L_38, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral887;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0236:
	{
		t1636 * L_39 = V_3;
		m8162(L_39, (t2*) &_stringLiteral888, &m8162_MI);
		V_0 = (t2*) &_stringLiteral887;
		V_1 = 5;
		goto IL_025c;
	}

IL_024b:
	{
		t2* L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m610(NULL, (t2*) &_stringLiteral891, L_40, &m610_MI);
		t169 * L_42 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_42, L_41, &m5706_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_025c:
	{
		t2* L_43 = V_0;
		t1425 * L_44 = m6893(NULL, L_43, &m6893_MI);
		V_4 = L_44;
		t1425 * L_45 = V_4;
		t1636 * L_46 = V_3;
		int32_t L_47 = V_1;
		t723* L_48 = m8168(L_46, L_47, &m8168_MI);
		VirtActionInvoker1< t723* >::Invoke(&m6894_MI, L_45, L_48);
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		t1425 * L_50 = V_4;
		t1636 * L_51 = V_3;
		int32_t L_52 = V_2;
		t723* L_53 = m8169(L_51, L_52, &m8169_MI);
		VirtActionInvoker1< t723* >::Invoke(&m6895_MI, L_50, L_53);
		t1425 * L_54 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(&m6896_MI, L_54, 1);
	}

IL_028c:
	{
		t1425 * L_55 = V_4;
		return L_55;
	}
}
extern "C" t723* m8181 (t1637 * __this, t2* p0, t723* p1, int32_t p2, t723* p3, MethodInfo* method)
{
	t1425 * V_0 = {0};
	t723* V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t1425 *)NULL;
		V_1 = (t723*)NULL;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		t2* L_0 = p0;
		t723* L_1 = p1;
		int32_t L_2 = p2;
		t1425 * L_3 = m8180(__this, L_0, L_1, L_2, &m8180_MI);
		V_0 = L_3;
		t1425 * L_4 = V_0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m6897_MI, L_4);
		V_2 = L_5;
		t9 * L_6 = V_2;
		t723* L_7 = p3;
		t723* L_8 = p3;
		t723* L_9 = (t723*)InterfaceFuncInvoker3< t723*, t723*, int32_t, int32_t >::Invoke(&m6898_MI, L_6, L_7, 0, (((int32_t)(((t121 *)L_8)->max_length))));
		V_1 = L_9;
		IL2CPP_LEAVE(0x2F, FINALLY_0025);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		{
			t1425 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			t1425 * L_11 = V_0;
			m6899(L_11, &m6899_MI);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(37)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_002f:
	{
		t723* L_12 = V_1;
		return L_12;
	}
}
extern "C" t723* m8182 (t1637 * __this, t1639 * p0, MethodInfo* method)
{
	{
		t1639 * L_0 = p0;
		t1647 * L_1 = m8269(L_0, &m8269_MI);
		t2* L_2 = m8266(L_1, &m8266_MI);
		t1639 * L_3 = p0;
		t1647 * L_4 = m8269(L_3, &m8269_MI);
		t1635 * L_5 = m8264(L_4, &m8264_MI);
		t1635 * L_6 = m8242(L_5, 0, &m8242_MI);
		t723* L_7 = m8234(L_6, &m8234_MI);
		t1639 * L_8 = p0;
		t1647 * L_9 = m8269(L_8, &m8269_MI);
		t1635 * L_10 = m8264(L_9, &m8264_MI);
		t1635 * L_11 = m8242(L_10, 1, &m8242_MI);
		int32_t L_12 = m8245(NULL, L_11, &m8245_MI);
		t1639 * L_13 = p0;
		t723* L_14 = m8270(L_13, &m8270_MI);
		t723* L_15 = m8181(__this, L_2, L_7, L_12, L_14, &m8181_MI);
		return L_15;
	}
}
extern "C" t1343  m8183 (t1637 * __this, bool* p0, MethodInfo* method)
{
	t1641 * V_0 = {0};
	t1643 * V_1 = {0};
	t1207 * V_2 = {0};
	t1343  V_3 = {0};
	t9 * V_4 = {0};
	t1343  V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1638 * L_0 = m8178(__this, &m8178_MI);
		t1643 * L_1 = m8217(L_0, &m8217_MI);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_000e:
		{
			t1643 * L_2 = V_1;
			t1641 * L_3 = m8211(L_2, &m8211_MI);
			V_0 = L_3;
			t1641 * L_4 = V_0;
			t723* L_5 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m8198_MI, L_4);
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_001d:
		{
			t1641 * L_6 = V_0;
			t1207 * L_7 = m8196(L_6, &m8196_MI);
			V_2 = L_7;
			t1207 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_0027:
		{
			bool* L_9 = p0;
			*((int8_t*)(L_9)) = (int8_t)1;
			t1207 * L_10 = V_2;
			t1343  L_11 = (t1343 )VirtFuncInvoker1< t1343 , bool >::Invoke(&m5759_MI, L_10, 0);
			V_3 = L_11;
			IL2CPP_LEAVE(0x61, FINALLY_003e);
		}

IL_0034:
		{
			t1643 * L_12 = V_1;
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8212_MI, L_12);
			if (L_13)
			{
				goto IL_000e;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x53, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		{
			t1643 * L_14 = V_1;
			V_4 = ((t9 *)IsInst(L_14, InitializedTypeInfo(&t137_TI)));
			t9 * L_15 = V_4;
			if (L_15)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(62)
		}

IL_004b:
		{
			t9 * L_16 = V_4;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_16);
			IL2CPP_END_FINALLY(62)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0053:
	{
		bool* L_17 = p0;
		*((int8_t*)(L_17)) = (int8_t)0;
		Initobj (InitializedTypeInfo(&t1343_TI), (&V_5));
		t1343  L_18 = V_5;
		return L_18;
	}

IL_0061:
	{
		t1343  L_19 = V_3;
		return L_19;
	}
}
extern "C" void m8184 (t1637 * __this, t1628 * p0, MethodInfo* method)
{
	t723* V_0 = {0};
	bool V_1 = false;
	t1343  V_2 = {0};
	uint8_t V_3 = 0x0;
	{
		t1628 * L_0 = p0;
		t723* L_1 = m8106(L_0, &m8106_MI);
		V_0 = L_1;
		t723* L_2 = V_0;
		int32_t L_3 = 0;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
		uint8_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		uint8_t L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_004b;
	}

IL_0016:
	{
		t1343  L_6 = m8183(__this, (&V_1), &m8183_MI);
		V_2 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		t1161 * L_8 = (__this->f2);
		t723* L_9 = V_0;
		t1343  L_10 = V_2;
		t1207 * L_11 = m8111(NULL, L_9, L_10, &m8111_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_8, L_11);
	}

IL_0035:
	{
		goto IL_0060;
	}

IL_0037:
	{
		t1161 * L_12 = (__this->f2);
		t723* L_13 = V_0;
		t1208 * L_14 = m8110(NULL, L_13, &m8110_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_12, L_14);
		goto IL_0060;
	}

IL_004b:
	{
		t723* L_15 = V_0;
		t723* L_16 = V_0;
		m1146(NULL, (t121 *)(t121 *)L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))), &m1146_MI);
		t1344 * L_17 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_17, (t2*) &_stringLiteral892, &m5767_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0060:
	{
		t723* L_18 = V_0;
		t723* L_19 = V_0;
		m1146(NULL, (t121 *)(t121 *)L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))), &m1146_MI);
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m8185 (t1637 * __this, t1635 * p0, MethodInfo* method)
{
	static bool m8185_init;
	if (!m8185_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m8185_init = true;
	}
	t1635 * V_0 = {0};
	t1635 * V_1 = {0};
	t2* V_2 = {0};
	t1629 * V_3 = {0};
	t723* V_4 = {0};
	t1647 * V_5 = {0};
	t1641 * V_6 = {0};
	t723* V_7 = {0};
	t1635 * V_8 = {0};
	int32_t V_9 = 0;
	t1635 * V_10 = {0};
	t1635 * V_11 = {0};
	t2* V_12 = {0};
	t1635 * V_13 = {0};
	int32_t V_14 = 0;
	t1635 * V_15 = {0};
	t2* V_16 = {0};
	t713 * V_17 = {0};
	int32_t V_18 = 0;
	{
		t1635 * L_0 = p0;
		uint8_t L_1 = m8232(L_0, &m8232_MI);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)48))))
		{
			goto IL_0015;
		}
	}
	{
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_2, (t2*) &_stringLiteral893, &m2885_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		t1635 * L_3 = p0;
		t1635 * L_4 = m8242(L_3, 0, &m8242_MI);
		V_0 = L_4;
		t1635 * L_5 = V_0;
		uint8_t L_6 = m8232(L_5, &m8232_MI);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0031;
		}
	}
	{
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, (t2*) &_stringLiteral894, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t1635 * L_8 = p0;
		t1635 * L_9 = m8242(L_8, 1, &m8242_MI);
		V_1 = L_9;
		t1635 * L_10 = V_0;
		t2* L_11 = m8246(NULL, L_10, &m8246_MI);
		V_2 = L_11;
		t2* L_12 = V_2;
		V_16 = L_12;
		t2* L_13 = V_16;
		if (!L_13)
		{
			goto IL_01b5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_14 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f13;
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		t713 * L_15 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_15, 6, m5747_MI_var);
		V_17 = L_15;
		t713 * L_16 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_16, (t2*) &_stringLiteral858, 0);
		t713 * L_17 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_17, (t2*) &_stringLiteral859, 1);
		t713 * L_18 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_18, (t2*) &_stringLiteral860, 2);
		t713 * L_19 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_19, (t2*) &_stringLiteral895, 3);
		t713 * L_20 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_20, (t2*) &_stringLiteral896, 4);
		t713 * L_21 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_21, (t2*) &_stringLiteral897, 5);
		t713 * L_22 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f13 = L_22;
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_23 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f13;
		t2* L_24 = V_16;
		bool L_25 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_23, L_24, (&V_18));
		if (!L_25)
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_26 = V_18;
		if (L_26 == 0)
		{
			goto IL_00e5;
		}
		if (L_26 == 1)
		{
			goto IL_00fb;
		}
		if (L_26 == 2)
		{
			goto IL_0145;
		}
		if (L_26 == 3)
		{
			goto IL_0199;
		}
		if (L_26 == 4)
		{
			goto IL_019b;
		}
		if (L_26 == 5)
		{
			goto IL_01b3;
		}
	}
	{
		goto IL_01b5;
	}

IL_00e5:
	{
		t1635 * L_27 = V_1;
		t723* L_28 = m8234(L_27, &m8234_MI);
		t1628 * L_29 = (t1628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1628_TI));
		m8105(L_29, L_28, &m8105_MI);
		m8184(__this, L_29, &m8184_MI);
		goto IL_01c0;
	}

IL_00fb:
	{
		t1635 * L_30 = V_1;
		t723* L_31 = m8234(L_30, &m8234_MI);
		t1629 * L_32 = (t1629 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1629_TI));
		m8113(L_32, L_31, &m8113_MI);
		V_3 = L_32;
		t1629 * L_33 = V_3;
		t2* L_34 = m8114(L_33, &m8114_MI);
		t1629 * L_35 = V_3;
		t723* L_36 = m8116(L_35, &m8116_MI);
		t1629 * L_37 = V_3;
		int32_t L_38 = m8117(L_37, &m8117_MI);
		t1629 * L_39 = V_3;
		t723* L_40 = m8115(L_39, &m8115_MI);
		t723* L_41 = m8181(__this, L_34, L_36, L_38, L_40, &m8181_MI);
		V_4 = L_41;
		t723* L_42 = V_4;
		t1628 * L_43 = (t1628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1628_TI));
		m8105(L_43, L_42, &m8105_MI);
		m8184(__this, L_43, &m8184_MI);
		t723* L_44 = V_4;
		t723* L_45 = V_4;
		m1146(NULL, (t121 *)(t121 *)L_44, 0, (((int32_t)(((t121 *)L_45)->max_length))), &m1146_MI);
		goto IL_01c0;
	}

IL_0145:
	{
		t1635 * L_46 = V_1;
		t723* L_47 = m8234(L_46, &m8234_MI);
		t1647 * L_48 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8262(L_48, L_47, &m8262_MI);
		V_5 = L_48;
		t1647 * L_49 = V_5;
		t2* L_50 = m8266(L_49, &m8266_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_51 = m2713(NULL, L_50, (t2*) &_stringLiteral898, &m2713_MI);
		if (!L_51)
		{
			goto IL_0170;
		}
	}
	{
		t169 * L_52 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_52, (t2*) &_stringLiteral899, &m5706_MI);
		il2cpp_codegen_raise_exception(L_52);
	}

IL_0170:
	{
		t1647 * L_53 = V_5;
		t1635 * L_54 = m8264(L_53, &m8264_MI);
		t1635 * L_55 = m8242(L_54, 0, &m8242_MI);
		t723* L_56 = m8234(L_55, &m8234_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
		t1641 * L_57 = (t1641 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1641_TI));
		m8192(L_57, L_56, &m8192_MI);
		V_6 = L_57;
		t1638 * L_58 = (__this->f4);
		t1641 * L_59 = V_6;
		m8216(L_58, L_59, &m8216_MI);
		goto IL_01c0;
	}

IL_0199:
	{
		goto IL_01c0;
	}

IL_019b:
	{
		t1635 * L_60 = V_1;
		t723* L_61 = m8234(L_60, &m8234_MI);
		V_7 = L_61;
		t1161 * L_62 = (__this->f3);
		t723* L_63 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_62, (t9 *)(t9 *)L_63);
		goto IL_01c0;
	}

IL_01b3:
	{
		goto IL_01c0;
	}

IL_01b5:
	{
		t556 * L_64 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_64, (t2*) &_stringLiteral900, &m2885_MI);
		il2cpp_codegen_raise_exception(L_64);
	}

IL_01c0:
	{
		t1635 * L_65 = p0;
		int32_t L_66 = m8231(L_65, &m8231_MI);
		if ((((int32_t)L_66) <= ((int32_t)2)))
		{
			goto IL_0308;
		}
	}
	{
		t1635 * L_67 = p0;
		t1635 * L_68 = m8242(L_67, 2, &m8242_MI);
		V_8 = L_68;
		t1635 * L_69 = V_8;
		uint8_t L_70 = m8232(L_69, &m8232_MI);
		if ((((int32_t)L_70) == ((int32_t)((int32_t)49))))
		{
			goto IL_01eb;
		}
	}
	{
		t556 * L_71 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_71, (t2*) &_stringLiteral901, &m2885_MI);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_01eb:
	{
		V_9 = 0;
		goto IL_02fa;
	}

IL_01f3:
	{
		t1635 * L_72 = V_8;
		int32_t L_73 = V_9;
		t1635 * L_74 = m8242(L_72, L_73, &m8242_MI);
		V_10 = L_74;
		t1635 * L_75 = V_10;
		uint8_t L_76 = m8232(L_75, &m8232_MI);
		if ((((int32_t)L_76) == ((int32_t)((int32_t)48))))
		{
			goto IL_0214;
		}
	}
	{
		t556 * L_77 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_77, (t2*) &_stringLiteral902, &m2885_MI);
		il2cpp_codegen_raise_exception(L_77);
	}

IL_0214:
	{
		t1635 * L_78 = V_10;
		t1635 * L_79 = m8242(L_78, 0, &m8242_MI);
		V_11 = L_79;
		t1635 * L_80 = V_11;
		uint8_t L_81 = m8232(L_80, &m8232_MI);
		if ((((int32_t)L_81) == ((int32_t)6)))
		{
			goto IL_0233;
		}
	}
	{
		t556 * L_82 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_82, (t2*) &_stringLiteral903, &m2885_MI);
		il2cpp_codegen_raise_exception(L_82);
	}

IL_0233:
	{
		t1635 * L_83 = V_11;
		t2* L_84 = m8246(NULL, L_83, &m8246_MI);
		V_12 = L_84;
		t1635 * L_85 = V_10;
		t1635 * L_86 = m8242(L_85, 1, &m8242_MI);
		V_13 = L_86;
		V_14 = 0;
		goto IL_02e6;
	}

IL_024e:
	{
		t1635 * L_87 = V_13;
		int32_t L_88 = V_14;
		t1635 * L_89 = m8242(L_87, L_88, &m8242_MI);
		V_15 = L_89;
		t2* L_90 = V_12;
		V_16 = L_90;
		t2* L_91 = V_16;
		if (!L_91)
		{
			goto IL_02de;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_92 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f14;
		if (L_92)
		{
			goto IL_0294;
		}
	}
	{
		t713 * L_93 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_93, 2, m5747_MI_var);
		V_17 = L_93;
		t713 * L_94 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_94, (t2*) &_stringLiteral904, 0);
		t713 * L_95 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_95, (t2*) &_stringLiteral905, 1);
		t713 * L_96 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f14 = L_96;
	}

IL_0294:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		t713 * L_97 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f14;
		t2* L_98 = V_16;
		bool L_99 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_97, L_98, (&V_18));
		if (!L_99)
		{
			goto IL_02de;
		}
	}
	{
		int32_t L_100 = V_18;
		if (!L_100)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_101 = V_18;
		if ((((int32_t)L_101) == ((int32_t)1)))
		{
			goto IL_02c7;
		}
	}
	{
		goto IL_02de;
	}

IL_02af:
	{
		t1635 * L_102 = V_15;
		uint8_t L_103 = m8232(L_102, &m8232_MI);
		if ((((int32_t)L_103) == ((int32_t)((int32_t)30))))
		{
			goto IL_02c5;
		}
	}
	{
		t556 * L_104 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_104, (t2*) &_stringLiteral906, &m2885_MI);
		il2cpp_codegen_raise_exception(L_104);
	}

IL_02c5:
	{
		goto IL_02e0;
	}

IL_02c7:
	{
		t1635 * L_105 = V_15;
		uint8_t L_106 = m8232(L_105, &m8232_MI);
		if ((((int32_t)L_106) == ((int32_t)4)))
		{
			goto IL_02dc;
		}
	}
	{
		t556 * L_107 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_107, (t2*) &_stringLiteral906, &m2885_MI);
		il2cpp_codegen_raise_exception(L_107);
	}

IL_02dc:
	{
		goto IL_02e0;
	}

IL_02de:
	{
		goto IL_02e0;
	}

IL_02e0:
	{
		int32_t L_108 = V_14;
		V_14 = ((int32_t)((int32_t)L_108+(int32_t)1));
	}

IL_02e6:
	{
		int32_t L_109 = V_14;
		t1635 * L_110 = V_13;
		int32_t L_111 = m8231(L_110, &m8231_MI);
		if ((((int32_t)L_109) < ((int32_t)L_111)))
		{
			goto IL_024e;
		}
	}
	{
		int32_t L_112 = V_9;
		V_9 = ((int32_t)((int32_t)L_112+(int32_t)1));
	}

IL_02fa:
	{
		int32_t L_113 = V_9;
		t1635 * L_114 = V_8;
		int32_t L_115 = m8231(L_114, &m8231_MI);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_01f3;
		}
	}

IL_0308:
	{
		t1161 * L_116 = (__this->f9);
		t2* L_117 = V_2;
		t1635 * L_118 = p0;
		t1634 * L_119 = (t1634 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1634_TI));
		m8157(L_119, L_117, L_118, &m8157_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_116, L_119);
		return;
	}
}
extern "C" t723* m8186 (t1637 * __this, t723* p0, t723* p1, int32_t p2, t723* p3, MethodInfo* method)
{
	t1636 * V_0 = {0};
	t1522 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1636_TI));
		t1636 * L_0 = (t1636 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1636_TI));
		m8160(L_0, &m8160_MI);
		V_0 = L_0;
		t1636 * L_1 = V_0;
		m8162(L_1, (t2*) &_stringLiteral888, &m8162_MI);
		t1636 * L_2 = V_0;
		t723* L_3 = p0;
		m8164(L_2, L_3, &m8164_MI);
		t1636 * L_4 = V_0;
		t723* L_5 = p1;
		m8165(L_4, L_5, &m8165_MI);
		t1636 * L_6 = V_0;
		int32_t L_7 = p2;
		m8163(L_6, L_7, &m8163_MI);
		t1523 * L_8 = m6900(NULL, &m6900_MI);
		V_1 = ((t1522 *)Castclass(L_8, InitializedTypeInfo(&t1522_TI)));
		t1522 * L_9 = V_1;
		t1636 * L_10 = V_0;
		t723* L_11 = m8170(L_10, ((int32_t)20), &m8170_MI);
		VirtActionInvoker1< t723* >::Invoke(&m6901_MI, L_9, L_11);
		t1522 * L_12 = V_1;
		t723* L_13 = p3;
		t723* L_14 = p3;
		t723* L_15 = m6889(L_12, L_13, 0, (((int32_t)(((t121 *)L_14)->max_length))), &m6889_MI);
		return L_15;
	}
}
extern "C" int32_t m8187 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1637_TI));
		int32_t L_0 = ((t1637_SFs*)InitializedTypeInfo(&t1637_TI)->static_fields)->f10;
		return L_0;
	}
}
#include "t1640.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1640_TI;
#include "t1640MD.h"

#include "t2152.h"
#include "t2145.h"
extern TypeInfo t305_TI;
extern TypeInfo t296_TI;
extern Il2CppType t305_0_0_0;
extern MethodInfo m8191_MI;
extern MethodInfo m8237_MI;
extern MethodInfo m2733_MI;
extern MethodInfo m6902_MI;
extern MethodInfo m5800_MI;
extern MethodInfo m4249_MI;
extern MethodInfo m6903_MI;
extern MethodInfo m4255_MI;
extern MethodInfo m4421_MI;
extern MethodInfo m399_MI;
extern FieldInfo t2163_f15_FieldInfo;
extern FieldInfo t2163_f16_FieldInfo;
extern FieldInfo t2163_f17_FieldInfo;
extern FieldInfo t2163_f18_FieldInfo;


extern MethodInfo m8188_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8188 (t9 * __this , MethodInfo* method)
{
	static bool m8188_init;
	if (!m8188_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8188_init = true;
	}
	{
		t723* L_0 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)((int32_t)85);
		t723* L_1 = L_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 1)) = (uint8_t)4;
		t723* L_2 = L_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 2)) = (uint8_t)6;
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f0 = L_2;
		t723* L_3 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 0)) = (uint8_t)((int32_t)85);
		t723* L_4 = L_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)4;
		t723* L_5 = L_4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)((int32_t)10);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f1 = L_5;
		t723* L_6 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 0)) = (uint8_t)((int32_t)85);
		t723* L_7 = L_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 1)) = (uint8_t)4;
		t723* L_8 = L_7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 2)) = (uint8_t)((int32_t)11);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f2 = L_8;
		t723* L_9 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)((int32_t)85);
		t723* L_10 = L_9;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 1)) = (uint8_t)4;
		t723* L_11 = L_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)3;
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f3 = L_11;
		t723* L_12 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 0)) = (uint8_t)((int32_t)85);
		t723* L_13 = L_12;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 1)) = (uint8_t)4;
		t723* L_14 = L_13;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 2)) = (uint8_t)7;
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f4 = L_14;
		t723* L_15 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 0)) = (uint8_t)((int32_t)85);
		t723* L_16 = L_15;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, 1)) = (uint8_t)4;
		t723* L_17 = L_16;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 2)) = (uint8_t)8;
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f5 = L_17;
		t723* L_18 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 0)) = (uint8_t)((int32_t)85);
		t723* L_19 = L_18;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)4;
		t723* L_20 = L_19;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 2)) = (uint8_t)((int32_t)9);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f6 = L_20;
		t723* L_21 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)10)));
		m1107(NULL, (t121 *)(t121 *)L_21, LoadFieldToken(&t2163_f15_FieldInfo), &m1107_MI);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f7 = L_21;
		t723* L_22 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)10)));
		m1107(NULL, (t121 *)(t121 *)L_22, LoadFieldToken(&t2163_f16_FieldInfo), &m1107_MI);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f8 = L_22;
		t723* L_23 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)9)));
		m1107(NULL, (t121 *)(t121 *)L_23, LoadFieldToken(&t2163_f17_FieldInfo), &m1107_MI);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f9 = L_23;
		t723* L_24 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_24, 0)) = (uint8_t)((int32_t)85);
		t723* L_25 = L_24;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 1)) = (uint8_t)4;
		t723* L_26 = L_25;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, 2)) = (uint8_t)((int32_t)46);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f10 = L_26;
		t723* L_27 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 0)) = (uint8_t)((int32_t)85);
		t723* L_28 = L_27;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_28, 1)) = (uint8_t)4;
		t723* L_29 = L_28;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 2)) = (uint8_t)((int32_t)12);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f11 = L_29;
		t723* L_30 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, 0)) = (uint8_t)((int32_t)85);
		t723* L_31 = L_30;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 1)) = (uint8_t)4;
		t723* L_32 = L_31;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, 2)) = (uint8_t)4;
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f12 = L_32;
		t723* L_33 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, 0)) = (uint8_t)((int32_t)85);
		t723* L_34 = L_33;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 1)) = (uint8_t)4;
		t723* L_35 = L_34;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 2)) = (uint8_t)((int32_t)42);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f13 = L_35;
		t723* L_36 = ((t723*)SZArrayNew(t723_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 0)) = (uint8_t)((int32_t)85);
		t723* L_37 = L_36;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, 1)) = (uint8_t)4;
		t723* L_38 = L_37;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, 2)) = (uint8_t)((int32_t)43);
		((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f14 = L_38;
		return;
	}
}
extern MethodInfo m8189_MI;
extern "C" t2* m8189 (t9 * __this , t1635 * p0, MethodInfo* method)
{
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	t1635 * V_2 = {0};
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0035;
	}

IL_000a:
	{
		t1635 * L_1 = p0;
		int32_t L_2 = V_1;
		t1635 * L_3 = m8242(L_1, L_2, &m8242_MI);
		V_2 = L_3;
		t315 * L_4 = V_0;
		t1635 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		m8191(NULL, L_4, L_5, 1, &m8191_MI);
		int32_t L_6 = V_1;
		t1635 * L_7 = p0;
		int32_t L_8 = m8231(L_7, &m8231_MI);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0031;
		}
	}
	{
		t315 * L_9 = V_0;
		m1154(L_9, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		t1635 * L_12 = p0;
		int32_t L_13 = m8231(L_12, &m8231_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		t315 * L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_14);
		return L_15;
	}
}
extern MethodInfo m8190_MI;
extern "C" t2* m8190 (t9 * __this , t1635 * p0, bool p1, t2* p2, bool p3, MethodInfo* method)
{
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	t1635 * V_2 = {0};
	int32_t V_3 = 0;
	t1635 * V_4 = {0};
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		t1635 * L_2 = p0;
		int32_t L_3 = m8231(L_2, &m8231_MI);
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_0034;
	}

IL_0014:
	{
		t1635 * L_4 = p0;
		int32_t L_5 = V_1;
		t1635 * L_6 = m8242(L_4, L_5, &m8242_MI);
		V_2 = L_6;
		t315 * L_7 = V_0;
		t1635 * L_8 = V_2;
		bool L_9 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		m8191(NULL, L_7, L_8, L_9, &m8191_MI);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t315 * L_11 = V_0;
		t2* L_12 = p2;
		m1154(L_11, L_12, &m1154_MI);
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_0034:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0070;
	}

IL_003a:
	{
		V_3 = 0;
		goto IL_0067;
	}

IL_003e:
	{
		t1635 * L_15 = p0;
		int32_t L_16 = V_3;
		t1635 * L_17 = m8242(L_15, L_16, &m8242_MI);
		V_4 = L_17;
		t315 * L_18 = V_0;
		t1635 * L_19 = V_4;
		bool L_20 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		m8191(NULL, L_18, L_19, L_20, &m8191_MI);
		int32_t L_21 = V_3;
		t1635 * L_22 = p0;
		int32_t L_23 = m8231(L_22, &m8231_MI);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)((int32_t)L_23-(int32_t)1)))))
		{
			goto IL_0063;
		}
	}
	{
		t315 * L_24 = V_0;
		t2* L_25 = p2;
		m1154(L_24, L_25, &m1154_MI);
	}

IL_0063:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_3;
		t1635 * L_28 = p0;
		int32_t L_29 = m8231(L_28, &m8231_MI);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003e;
		}
	}

IL_0070:
	{
		t315 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_30);
		return L_31;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" void m8191 (t9 * __this , t315 * p0, t1635 * p1, bool p2, MethodInfo* method)
{
	static bool m8191_init;
	if (!m8191_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8191_init = true;
	}
	int32_t V_0 = 0;
	t1635 * V_1 = {0};
	t1635 * V_2 = {0};
	t1635 * V_3 = {0};
	t2* V_4 = {0};
	t315 * V_5 = {0};
	int32_t V_6 = 0;
	t305* V_7 = {0};
	{
		V_0 = 0;
		goto IL_0305;
	}

IL_0007:
	{
		t1635 * L_0 = p1;
		int32_t L_1 = V_0;
		t1635 * L_2 = m8242(L_0, L_1, &m8242_MI);
		V_1 = L_2;
		t1635 * L_3 = V_1;
		t1635 * L_4 = m8242(L_3, 1, &m8242_MI);
		V_2 = L_4;
		t1635 * L_5 = V_2;
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0301;
	}

IL_001f:
	{
		t1635 * L_6 = V_1;
		t1635 * L_7 = m8242(L_6, 0, &m8242_MI);
		V_3 = L_7;
		t1635 * L_8 = V_3;
		if (L_8)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0301;
	}

IL_002f:
	{
		t1635 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_10 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f0;
		bool L_11 = m8237(L_9, L_10, &m8237_MI);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t315 * L_12 = p0;
		m1154(L_12, (t2*) &_stringLiteral907, &m1154_MI);
		goto IL_020d;
	}

IL_004d:
	{
		t1635 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_14 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f1;
		bool L_15 = m8237(L_13, L_14, &m8237_MI);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		t315 * L_16 = p0;
		m1154(L_16, (t2*) &_stringLiteral908, &m1154_MI);
		goto IL_020d;
	}

IL_006b:
	{
		t1635 * L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_18 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f2;
		bool L_19 = m8237(L_17, L_18, &m8237_MI);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		t315 * L_20 = p0;
		m1154(L_20, (t2*) &_stringLiteral909, &m1154_MI);
		goto IL_020d;
	}

IL_0089:
	{
		t1635 * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_22 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f3;
		bool L_23 = m8237(L_21, L_22, &m8237_MI);
		if (!L_23)
		{
			goto IL_00a7;
		}
	}
	{
		t315 * L_24 = p0;
		m1154(L_24, (t2*) &_stringLiteral910, &m1154_MI);
		goto IL_020d;
	}

IL_00a7:
	{
		t1635 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_26 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f4;
		bool L_27 = m8237(L_25, L_26, &m8237_MI);
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		t315 * L_28 = p0;
		m1154(L_28, (t2*) &_stringLiteral911, &m1154_MI);
		goto IL_020d;
	}

IL_00c5:
	{
		t1635 * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_30 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f5;
		bool L_31 = m8237(L_29, L_30, &m8237_MI);
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		t315 * L_32 = p0;
		m1154(L_32, (t2*) &_stringLiteral912, &m1154_MI);
		goto IL_020d;
	}

IL_00e3:
	{
		t1635 * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_34 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f6;
		bool L_35 = m8237(L_33, L_34, &m8237_MI);
		if (!L_35)
		{
			goto IL_0101;
		}
	}
	{
		t315 * L_36 = p0;
		m1154(L_36, (t2*) &_stringLiteral913, &m1154_MI);
		goto IL_020d;
	}

IL_0101:
	{
		t1635 * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_38 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f7;
		bool L_39 = m8237(L_37, L_38, &m8237_MI);
		if (!L_39)
		{
			goto IL_011f;
		}
	}
	{
		t315 * L_40 = p0;
		m1154(L_40, (t2*) &_stringLiteral914, &m1154_MI);
		goto IL_020d;
	}

IL_011f:
	{
		t1635 * L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_42 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f8;
		bool L_43 = m8237(L_41, L_42, &m8237_MI);
		if (!L_43)
		{
			goto IL_013d;
		}
	}
	{
		t315 * L_44 = p0;
		m1154(L_44, (t2*) &_stringLiteral915, &m1154_MI);
		goto IL_020d;
	}

IL_013d:
	{
		t1635 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_46 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f9;
		bool L_47 = m8237(L_45, L_46, &m8237_MI);
		if (!L_47)
		{
			goto IL_015b;
		}
	}
	{
		t315 * L_48 = p0;
		m1154(L_48, (t2*) &_stringLiteral916, &m1154_MI);
		goto IL_020d;
	}

IL_015b:
	{
		t1635 * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_50 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f10;
		bool L_51 = m8237(L_49, L_50, &m8237_MI);
		if (!L_51)
		{
			goto IL_0179;
		}
	}
	{
		t315 * L_52 = p0;
		m1154(L_52, (t2*) &_stringLiteral917, &m1154_MI);
		goto IL_020d;
	}

IL_0179:
	{
		t1635 * L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_54 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f11;
		bool L_55 = m8237(L_53, L_54, &m8237_MI);
		if (!L_55)
		{
			goto IL_0197;
		}
	}
	{
		t315 * L_56 = p0;
		m1154(L_56, (t2*) &_stringLiteral918, &m1154_MI);
		goto IL_020d;
	}

IL_0197:
	{
		t1635 * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_58 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f12;
		bool L_59 = m8237(L_57, L_58, &m8237_MI);
		if (!L_59)
		{
			goto IL_01b2;
		}
	}
	{
		t315 * L_60 = p0;
		m1154(L_60, (t2*) &_stringLiteral919, &m1154_MI);
		goto IL_020d;
	}

IL_01b2:
	{
		t1635 * L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_62 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f13;
		bool L_63 = m8237(L_61, L_62, &m8237_MI);
		if (!L_63)
		{
			goto IL_01cd;
		}
	}
	{
		t315 * L_64 = p0;
		m1154(L_64, (t2*) &_stringLiteral920, &m1154_MI);
		goto IL_020d;
	}

IL_01cd:
	{
		t1635 * L_65 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
		t723* L_66 = ((t1640_SFs*)InitializedTypeInfo(&t1640_TI)->static_fields)->f14;
		bool L_67 = m8237(L_65, L_66, &m8237_MI);
		if (!L_67)
		{
			goto IL_01e8;
		}
	}
	{
		t315 * L_68 = p0;
		m1154(L_68, (t2*) &_stringLiteral921, &m1154_MI);
		goto IL_020d;
	}

IL_01e8:
	{
		t315 * L_69 = p0;
		m1154(L_69, (t2*) &_stringLiteral922, &m1154_MI);
		t315 * L_70 = p0;
		t1635 * L_71 = V_3;
		t2* L_72 = m8246(NULL, L_71, &m8246_MI);
		m1154(L_70, L_72, &m1154_MI);
		t315 * L_73 = p0;
		m1154(L_73, (t2*) &_stringLiteral255, &m1154_MI);
	}

IL_020d:
	{
		V_4 = (t2*)NULL;
		t1635 * L_74 = V_2;
		uint8_t L_75 = m8232(L_74, &m8232_MI);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0258;
		}
	}
	{
		t315 * L_76 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_76, &m1150_MI);
		V_5 = L_76;
		V_6 = 1;
		goto IL_023e;
	}

IL_0226:
	{
		t315 * L_77 = V_5;
		t1635 * L_78 = V_2;
		t723* L_79 = m8234(L_78, &m8234_MI);
		int32_t L_80 = V_6;
		int32_t L_81 = L_80;
		m2733(L_77, (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_79, L_81)))), &m2733_MI);
		int32_t L_82 = V_6;
		V_6 = ((int32_t)((int32_t)L_82+(int32_t)2));
	}

IL_023e:
	{
		int32_t L_83 = V_6;
		t1635 * L_84 = V_2;
		t723* L_85 = m8234(L_84, &m8234_MI);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)(((t121 *)L_85)->max_length))))))
		{
			goto IL_0226;
		}
	}
	{
		t315 * L_86 = V_5;
		t2* L_87 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_86);
		V_4 = L_87;
		goto IL_02e1;
	}

IL_0258:
	{
		t1635 * L_88 = V_2;
		uint8_t L_89 = m8232(L_88, &m8232_MI);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0276;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_90 = m6902(NULL, &m6902_MI);
		t1635 * L_91 = V_2;
		t723* L_92 = m8234(L_91, &m8234_MI);
		t2* L_93 = (t2*)VirtFuncInvoker1< t2*, t723* >::Invoke(&m5800_MI, L_90, L_92);
		V_4 = L_93;
		goto IL_0288;
	}

IL_0276:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_94 = m4249(NULL, &m4249_MI);
		t1635 * L_95 = V_2;
		t723* L_96 = m8234(L_95, &m8234_MI);
		t2* L_97 = (t2*)VirtFuncInvoker1< t2*, t723* >::Invoke(&m5800_MI, L_94, L_96);
		V_4 = L_97;
	}

IL_0288:
	{
		t305* L_98 = ((t305*)SZArrayNew(t305_TI_var, 7));
		m1107(NULL, (t121 *)(t121 *)L_98, LoadFieldToken(&t2163_f18_FieldInfo), &m1107_MI);
		V_7 = L_98;
		bool L_99 = p2;
		if (!L_99)
		{
			goto IL_02e1;
		}
	}
	{
		t2* L_100 = V_4;
		t305* L_101 = V_7;
		t2* L_102 = V_4;
		int32_t L_103 = m2699(L_102, &m2699_MI);
		int32_t L_104 = m6903(L_100, L_101, 0, L_103, &m6903_MI);
		if ((((int32_t)L_104) > ((int32_t)0)))
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_105 = V_4;
		bool L_106 = m4255(L_105, (t2*) &_stringLiteral168, &m4255_MI);
		if (L_106)
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_107 = V_4;
		bool L_108 = m4421(L_107, (t2*) &_stringLiteral168, &m4421_MI);
		if (!L_108)
		{
			goto IL_02e1;
		}
	}

IL_02ce:
	{
		t2* L_109 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_110 = m399(NULL, (t2*) &_stringLiteral244, L_109, (t2*) &_stringLiteral244, &m399_MI);
		V_4 = L_110;
	}

IL_02e1:
	{
		t315 * L_111 = p0;
		t2* L_112 = V_4;
		m1154(L_111, L_112, &m1154_MI);
		int32_t L_113 = V_0;
		t1635 * L_114 = p1;
		int32_t L_115 = m8231(L_114, &m8231_MI);
		if ((((int32_t)L_113) >= ((int32_t)((int32_t)((int32_t)L_115-(int32_t)1)))))
		{
			goto IL_0301;
		}
	}
	{
		t315 * L_116 = p0;
		m1154(L_116, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_0301:
	{
		int32_t L_117 = V_0;
		V_0 = ((int32_t)((int32_t)L_117+(int32_t)1));
	}

IL_0305:
	{
		int32_t L_118 = V_0;
		t1635 * L_119 = p1;
		int32_t L_120 = m8231(L_119, &m8231_MI);
		if ((((int32_t)L_118) < ((int32_t)L_120)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1342.h"
#include "t269.h"
#include "t138.h"
#include "t1642.h"
#include "t1093.h"
#include "t1094.h"
extern TypeInfo t1342_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1642_TI;
#include "t1342MD.h"
#include "t1642MD.h"
#include "t1093MD.h"
extern MethodInfo m8195_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m5761_MI;
extern MethodInfo m8207_MI;
extern MethodInfo m5771_MI;
extern MethodInfo m8194_MI;
extern MethodInfo m6907_MI;
extern MethodInfo m8243_MI;
extern MethodInfo m8247_MI;
extern MethodInfo m8239_MI;
extern MethodInfo m8233_MI;
extern MethodInfo m8226_MI;
extern MethodInfo m5715_MI;
extern MethodInfo m4242_MI;
extern MethodInfo m4257_MI;
extern MethodInfo m4422_MI;
extern MethodInfo m2715_MI;
extern MethodInfo m6914_MI;


extern "C" void m8192 (t1641 * __this, t723* p0, MethodInfo* method)
{
	t138 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t723* L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t723* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t723* L_2 = p0;
		int32_t L_3 = 0;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))) == ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		t723* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
		t723* L_5 = m8207(NULL, (t2*) &_stringLiteral931, L_4, &m8207_MI);
		p0 = L_5;
		goto IL_0036;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		V_0 = ((t138 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
		t2* L_6 = ((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20;
		t138 * L_7 = V_0;
		t1344 * L_8 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5771(L_8, L_6, L_7, &m5771_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		t723* L_9 = p0;
		m8194(__this, L_9, &m8194_MI);
	}

IL_003d:
	{
		return;
	}
}
extern MethodInfo m8193_MI;
extern "C" void m8193 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral932, &m7818_MI);
		((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20 = L_0;
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8194 (t1641 * __this, t723* p0, MethodInfo* method)
{
	static bool m8194_init;
	if (!m8194_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8194_init = true;
	}
	t1635 * V_0 = {0};
	int32_t V_1 = 0;
	t1635 * V_2 = {0};
	t1635 * V_3 = {0};
	t1635 * V_4 = {0};
	t1635 * V_5 = {0};
	t1635 * V_6 = {0};
	t1635 * V_7 = {0};
	t1635 * V_8 = {0};
	t1635 * V_9 = {0};
	t1635 * V_10 = {0};
	t1635 * V_11 = {0};
	int32_t V_12 = 0;
	t723* V_13 = {0};
	t1635 * V_14 = {0};
	t1635 * V_15 = {0};
	t1635 * V_16 = {0};
	t138 * V_17 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1641 * G_B11_0 = {0};
	t1641 * G_B10_0 = {0};
	t723* G_B12_0 = {0};
	t1641 * G_B12_1 = {0};

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t723* L_0 = p0;
			t1635 * L_1 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
			m8230(L_1, L_0, &m8230_MI);
			__this->f0 = L_1;
			t1635 * L_2 = (__this->f0);
			uint8_t L_3 = m8232(L_2, &m8232_MI);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
			t2* L_4 = ((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20;
			t1344 * L_5 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
			m5767(L_5, L_4, &m5767_MI);
			il2cpp_codegen_raise_exception(L_5);
		}

IL_0026:
		{
			t1635 * L_6 = (__this->f0);
			t1635 * L_7 = m8242(L_6, 0, &m8242_MI);
			uint8_t L_8 = m8232(L_7, &m8232_MI);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
			t2* L_9 = ((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20;
			t1344 * L_10 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
			m5767(L_10, L_9, &m5767_MI);
			il2cpp_codegen_raise_exception(L_10);
		}

IL_0046:
		{
			t1635 * L_11 = (__this->f0);
			t1635 * L_12 = m8242(L_11, 0, &m8242_MI);
			V_0 = L_12;
			V_1 = 0;
			t1635 * L_13 = (__this->f0);
			t1635 * L_14 = m8242(L_13, 0, &m8242_MI);
			int32_t L_15 = V_1;
			t1635 * L_16 = m8242(L_14, L_15, &m8242_MI);
			V_2 = L_16;
			__this->f15 = 1;
			t1635 * L_17 = V_2;
			uint8_t L_18 = m8232(L_17, &m8232_MI);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			t1635 * L_19 = V_2;
			int32_t L_20 = m8231(L_19, &m8231_MI);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00a4;
			}
		}

IL_0085:
		{
			int32_t L_21 = (__this->f15);
			t1635 * L_22 = V_2;
			t1635 * L_23 = m8242(L_22, 0, &m8242_MI);
			t723* L_24 = m8234(L_23, &m8234_MI);
			int32_t L_25 = 0;
			__this->f15 = ((int32_t)((int32_t)L_21+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25))));
			int32_t L_26 = V_1;
			V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_00a4:
		{
			t1635 * L_27 = (__this->f0);
			t1635 * L_28 = m8242(L_27, 0, &m8242_MI);
			int32_t L_29 = V_1;
			int32_t L_30 = L_29;
			V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
			t1635 * L_31 = m8242(L_28, L_30, &m8242_MI);
			V_3 = L_31;
			t1635 * L_32 = V_3;
			uint8_t L_33 = m8232(L_32, &m8232_MI);
			if ((((int32_t)L_33) == ((int32_t)2)))
			{
				goto IL_00cf;
			}
		}

IL_00c4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
			t2* L_34 = ((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20;
			t1344 * L_35 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
			m5767(L_35, L_34, &m5767_MI);
			il2cpp_codegen_raise_exception(L_35);
		}

IL_00cf:
		{
			t1635 * L_36 = V_3;
			t723* L_37 = m8234(L_36, &m8234_MI);
			__this->f16 = L_37;
			t723* L_38 = (__this->f16);
			t723* L_39 = (__this->f16);
			m6907(NULL, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m6907_MI);
			int32_t L_40 = V_1;
			V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
			t1635 * L_41 = V_0;
			int32_t L_42 = V_1;
			int32_t L_43 = L_42;
			V_1 = ((int32_t)((int32_t)L_43+(int32_t)1));
			t1635 * L_44 = m8243(L_41, L_43, ((int32_t)48), &m8243_MI);
			__this->f4 = L_44;
			t1635 * L_45 = (__this->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1640_TI));
			t2* L_46 = m8189(NULL, L_45, &m8189_MI);
			__this->f5 = L_46;
			t1635 * L_47 = V_0;
			int32_t L_48 = V_1;
			int32_t L_49 = L_48;
			V_1 = ((int32_t)((int32_t)L_49+(int32_t)1));
			t1635 * L_50 = m8243(L_47, L_49, ((int32_t)48), &m8243_MI);
			V_4 = L_50;
			t1635 * L_51 = V_4;
			t1635 * L_52 = m8242(L_51, 0, &m8242_MI);
			V_5 = L_52;
			t1635 * L_53 = V_5;
			t269  L_54 = m8247(NULL, L_53, &m8247_MI);
			__this->f2 = L_54;
			t1635 * L_55 = V_4;
			t1635 * L_56 = m8242(L_55, 1, &m8242_MI);
			V_6 = L_56;
			t1635 * L_57 = V_6;
			t269  L_58 = m8247(NULL, L_57, &m8247_MI);
			__this->f3 = L_58;
			t1635 * L_59 = V_0;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			V_1 = ((int32_t)((int32_t)L_61+(int32_t)1));
			t1635 * L_62 = m8243(L_59, L_61, ((int32_t)48), &m8243_MI);
			__this->f8 = L_62;
			t1635 * L_63 = (__this->f8);
			t2* L_64 = m8189(NULL, L_63, &m8189_MI);
			__this->f9 = L_64;
			t1635 * L_65 = V_0;
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			V_1 = ((int32_t)((int32_t)L_67+(int32_t)1));
			t1635 * L_68 = m8243(L_65, L_67, ((int32_t)48), &m8243_MI);
			V_7 = L_68;
			t1635 * L_69 = V_7;
			t1635 * L_70 = m8243(L_69, 0, ((int32_t)48), &m8243_MI);
			V_8 = L_70;
			t1635 * L_71 = V_8;
			t1635 * L_72 = m8243(L_71, 0, 6, &m8243_MI);
			V_9 = L_72;
			t1635 * L_73 = V_9;
			t2* L_74 = m8246(NULL, L_73, &m8246_MI);
			__this->f6 = L_74;
			t1635 * L_75 = V_8;
			t1635 * L_76 = m8242(L_75, 1, &m8242_MI);
			V_10 = L_76;
			t1635 * L_77 = V_8;
			int32_t L_78 = m8231(L_77, &m8231_MI);
			G_B10_0 = __this;
			if ((((int32_t)L_78) <= ((int32_t)1)))
			{
				G_B11_0 = __this;
				goto IL_01c9;
			}
		}

IL_01c0:
		{
			t1635 * L_79 = V_10;
			t723* L_80 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m8239_MI, L_79);
			G_B12_0 = L_80;
			G_B12_1 = G_B10_0;
			goto IL_01ca;
		}

IL_01c9:
		{
			G_B12_0 = ((t723*)(NULL));
			G_B12_1 = G_B11_0;
		}

IL_01ca:
		{
			G_B12_1->f7 = G_B12_0;
			t1635 * L_81 = V_7;
			t1635 * L_82 = m8243(L_81, 1, 3, &m8243_MI);
			V_11 = L_82;
			t1635 * L_83 = V_11;
			int32_t L_84 = m8233(L_83, &m8233_MI);
			V_12 = ((int32_t)((int32_t)L_84-(int32_t)1));
			int32_t L_85 = V_12;
			__this->f10 = ((t723*)SZArrayNew(t723_TI_var, L_85));
			t1635 * L_86 = V_11;
			t723* L_87 = m8234(L_86, &m8234_MI);
			t723* L_88 = (__this->f10);
			int32_t L_89 = V_12;
			m5764(NULL, (t121 *)(t121 *)L_87, 1, (t121 *)(t121 *)L_88, 0, L_89, &m5764_MI);
			t1635 * L_90 = (__this->f0);
			t1635 * L_91 = m8242(L_90, 2, &m8242_MI);
			t723* L_92 = m8234(L_91, &m8234_MI);
			V_13 = L_92;
			t723* L_93 = V_13;
			__this->f11 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_93)->max_length)))-(int32_t)1))));
			t723* L_94 = V_13;
			t723* L_95 = (__this->f11);
			t723* L_96 = (__this->f11);
			m5764(NULL, (t121 *)(t121 *)L_94, 1, (t121 *)(t121 *)L_95, 0, (((int32_t)(((t121 *)L_96)->max_length))), &m5764_MI);
			t1635 * L_97 = (__this->f0);
			t1635 * L_98 = m8242(L_97, 1, &m8242_MI);
			V_8 = L_98;
			t1635 * L_99 = V_8;
			t1635 * L_100 = m8243(L_99, 0, 6, &m8243_MI);
			V_9 = L_100;
			t1635 * L_101 = V_9;
			t2* L_102 = m8246(NULL, L_101, &m8246_MI);
			__this->f12 = L_102;
			t1635 * L_103 = V_8;
			t1635 * L_104 = m8242(L_103, 1, &m8242_MI);
			V_10 = L_104;
			t1635 * L_105 = V_10;
			if (!L_105)
			{
				goto IL_0286;
			}
		}

IL_0277:
		{
			t1635 * L_106 = V_10;
			t723* L_107 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m8239_MI, L_106);
			__this->f13 = L_107;
			goto IL_028d;
		}

IL_0286:
		{
			__this->f13 = (t723*)NULL;
		}

IL_028d:
		{
			t1635 * L_108 = V_0;
			int32_t L_109 = V_1;
			t1635 * L_110 = m8243(L_108, L_109, ((int32_t)129), &m8243_MI);
			V_14 = L_110;
			t1635 * L_111 = V_14;
			if (!L_111)
			{
				goto IL_02b0;
			}
		}

IL_029f:
		{
			int32_t L_112 = V_1;
			V_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
			t1635 * L_113 = V_14;
			t723* L_114 = m8234(L_113, &m8234_MI);
			__this->f17 = L_114;
		}

IL_02b0:
		{
			t1635 * L_115 = V_0;
			int32_t L_116 = V_1;
			t1635 * L_117 = m8243(L_115, L_116, ((int32_t)130), &m8243_MI);
			V_15 = L_117;
			t1635 * L_118 = V_15;
			if (!L_118)
			{
				goto IL_02d3;
			}
		}

IL_02c2:
		{
			int32_t L_119 = V_1;
			V_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
			t1635 * L_120 = V_15;
			t723* L_121 = m8234(L_120, &m8234_MI);
			__this->f18 = L_121;
		}

IL_02d3:
		{
			t1635 * L_122 = V_0;
			int32_t L_123 = V_1;
			t1635 * L_124 = m8243(L_122, L_123, ((int32_t)163), &m8243_MI);
			V_16 = L_124;
			t1635 * L_125 = V_16;
			if (!L_125)
			{
				goto IL_0304;
			}
		}

IL_02e5:
		{
			t1635 * L_126 = V_16;
			int32_t L_127 = m8231(L_126, &m8231_MI);
			if ((!(((uint32_t)L_127) == ((uint32_t)1))))
			{
				goto IL_0304;
			}
		}

IL_02ef:
		{
			t1635 * L_128 = V_16;
			t1635 * L_129 = m8242(L_128, 0, &m8242_MI);
			t1642 * L_130 = (t1642 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1642_TI));
			m8226(L_130, L_129, &m8226_MI);
			__this->f19 = L_130;
			goto IL_0310;
		}

IL_0304:
		{
			t1642 * L_131 = (t1642 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1642_TI));
			m8226(L_131, (t1635 *)NULL, &m8226_MI);
			__this->f19 = L_131;
		}

IL_0310:
		{
			t723* L_132 = p0;
			t9 * L_133 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_132);
			__this->f1 = ((t723*)Castclass(L_133, t723_TI_var));
			goto IL_0334;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0323;
		throw e;
	}

CATCH_0323:
	{ // begin catch(System.Exception)
		V_17 = ((t138 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1641_TI));
		t2* L_134 = ((t1641_SFs*)InitializedTypeInfo(&t1641_TI)->static_fields)->f20;
		t138 * L_135 = V_17;
		t1344 * L_136 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5771(L_136, L_134, L_135, &m5771_MI);
		il2cpp_codegen_raise_exception(L_136);
		goto IL_0334;
	} // end catch (depth: 1)

IL_0334:
	{
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8195 (t1641 * __this, t723* p0, MethodInfo* method)
{
	static bool m8195_init;
	if (!m8195_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8195_init = true;
	}
	int32_t V_0 = 0;
	t723* V_1 = {0};
	{
		t723* L_0 = p0;
		int32_t L_1 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)))
		{
			goto IL_001e;
		}
	}
	{
		t723* L_2 = p0;
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)1));
		int32_t L_3 = V_0;
		V_1 = ((t723*)SZArrayNew(t723_TI_var, L_3));
		t723* L_4 = p0;
		t723* L_5 = V_1;
		int32_t L_6 = V_0;
		m5764(NULL, (t121 *)(t121 *)L_4, 1, (t121 *)(t121 *)L_5, 0, L_6, &m5764_MI);
		t723* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		t723* L_8 = p0;
		return L_8;
	}
}
extern "C" t1207 * m8196 (t1641 * __this, MethodInfo* method)
{
	t1343  V_0 = {0};
	t1635 * V_1 = {0};
	t1635 * V_2 = {0};
	{
		t723* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1344 * L_1 = (t1344 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1344_TI));
		m5767(L_1, (t2*) &_stringLiteral923, &m5767_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1207 * L_2 = (__this->f14);
		if (L_2)
		{
			goto IL_0113;
		}
	}
	{
		Initobj (InitializedTypeInfo(&t1343_TI), (&V_0));
		t723* L_3 = (__this->f10);
		t1635 * L_4 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_4, L_3, &m8230_MI);
		V_1 = L_4;
		t1635 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		t1635 * L_6 = V_1;
		uint8_t L_7 = m8232(L_6, &m8232_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return (t1207 *)NULL;
	}

IL_0040:
	{
		t1635 * L_8 = V_1;
		t723* L_9 = m8234(L_8, &m8234_MI);
		t723* L_10 = m8195(__this, L_9, &m8195_MI);
		(&V_0)->f7 = L_10;
		t723* L_11 = (__this->f7);
		t1635 * L_12 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_12, L_11, &m8230_MI);
		V_2 = L_12;
		t1635 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t1635 * L_14 = V_2;
		uint8_t L_15 = m8232(L_14, &m8232_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0075;
		}
	}
	{
		t1635 * L_16 = V_2;
		int32_t L_17 = m8231(L_16, &m8231_MI);
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0077;
		}
	}

IL_0075:
	{
		return (t1207 *)NULL;
	}

IL_0077:
	{
		t1635 * L_18 = V_2;
		t1635 * L_19 = m8242(L_18, 0, &m8242_MI);
		uint8_t L_20 = m8232(L_19, &m8232_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1635 * L_21 = V_2;
		t1635 * L_22 = m8242(L_21, 1, &m8242_MI);
		uint8_t L_23 = m8232(L_22, &m8232_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1635 * L_24 = V_2;
		t1635 * L_25 = m8242(L_24, 2, &m8242_MI);
		uint8_t L_26 = m8232(L_25, &m8232_MI);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00a6;
		}
	}

IL_00a4:
	{
		return (t1207 *)NULL;
	}

IL_00a6:
	{
		t1635 * L_27 = V_2;
		t1635 * L_28 = m8242(L_27, 0, &m8242_MI);
		t723* L_29 = m8234(L_28, &m8234_MI);
		t723* L_30 = m8195(__this, L_29, &m8195_MI);
		(&V_0)->f3 = L_30;
		t1635 * L_31 = V_2;
		t1635 * L_32 = m8242(L_31, 1, &m8242_MI);
		t723* L_33 = m8234(L_32, &m8234_MI);
		t723* L_34 = m8195(__this, L_33, &m8195_MI);
		(&V_0)->f4 = L_34;
		t1635 * L_35 = V_2;
		t1635 * L_36 = m8242(L_35, 2, &m8242_MI);
		t723* L_37 = m8234(L_36, &m8234_MI);
		t723* L_38 = m8195(__this, L_37, &m8195_MI);
		(&V_0)->f1 = L_38;
		t723* L_39 = ((&V_0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1342_TI));
		t1342 * L_40 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5772(L_40, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_39)->max_length)))<<(int32_t)3)), &m5772_MI);
		__this->f14 = L_40;
		t1207 * L_41 = (__this->f14);
		t1343  L_42 = V_0;
		VirtActionInvoker1< t1343  >::Invoke(&m5761_MI, L_41, L_42);
	}

IL_0113:
	{
		t1207 * L_43 = (__this->f14);
		return L_43;
	}
}
extern MethodInfo m8197_MI;
extern "C" t2* m8197 (t1641 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8198 (t1641 * __this, MethodInfo* method)
{
	static bool m8198_init;
	if (!m8198_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8198_init = true;
	}
	{
		t723* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t723*)NULL;
	}

IL_000a:
	{
		t723* L_1 = (__this->f7);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t723*)Castclass(L_2, t723_TI_var));
	}
}
extern MethodInfo m8199_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m8199 (t1641 * __this, MethodInfo* method)
{
	static bool m8199_init;
	if (!m8199_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8199_init = true;
	}
	{
		t723* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t723*)NULL;
	}

IL_000a:
	{
		t723* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t723*)Castclass(L_2, t723_TI_var));
	}
}
extern MethodInfo m8200_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m8200 (t1641 * __this, MethodInfo* method)
{
	static bool m8200_init;
	if (!m8200_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8200_init = true;
	}
	{
		t723* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t723*)NULL;
	}

IL_000a:
	{
		t723* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t723*)Castclass(L_2, t723_TI_var));
	}
}
extern MethodInfo m8201_MI;
extern "C" t2* m8201 (t1641 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8202_MI;
extern "C" t269  m8202 (t1641 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8203_MI;
extern "C" t269  m8203 (t1641 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8204_MI;
extern "C" t1635 * m8204 (t1641 * __this, MethodInfo* method)
{
	{
		t1635 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8205_MI;
extern "C" t1635 * m8205 (t1641 * __this, MethodInfo* method)
{
	{
		t1635 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8206_MI;
extern "C" void m8206 (t1641 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t723* L_1 = (__this->f1);
		m5715(L_0, (t2*) &_stringLiteral936, (t9 *)(t9 *)L_1, &m5715_MI);
		return;
	}
}
extern "C" t723* m8207 (t9 * __this , t2* p0, t723* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_0 = m4242(NULL, &m4242_MI);
		t723* L_1 = p1;
		t2* L_2 = (t2*)VirtFuncInvoker1< t2*, t723* >::Invoke(&m5800_MI, L_0, L_1);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m590(NULL, (t2*) &_stringLiteral937, L_3, &m590_MI);
		V_1 = L_4;
		t2* L_5 = p0;
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral938, L_5, &m590_MI);
		V_2 = L_6;
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = m4257(L_7, L_8, &m4257_MI);
		t2* L_10 = V_1;
		int32_t L_11 = m2699(L_10, &m2699_MI);
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)L_11));
		t2* L_12 = V_0;
		t2* L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = m4422(L_12, L_13, L_14, &m4422_MI);
		V_4 = L_15;
		t2* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		t2* L_20 = m2715(L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2715_MI);
		V_5 = L_20;
		t2* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t723* L_22 = m6914(NULL, L_21, &m6914_MI);
		return L_22;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t658_TI;
extern MethodInfo m4344_MI;


extern MethodInfo m8208_MI;
extern "C" void m8208 (t1643 * __this, t1638 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1638 * L_0 = p0;
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4344_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m8209_MI;
extern "C" t9 * m8209 (t1643 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8210_MI;
extern "C" bool m8210 (t1643 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_0);
		return L_1;
	}
}
extern "C" t1641 * m8211 (t1643 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return ((t1641 *)Castclass(L_1, InitializedTypeInfo(&t1641_TI)));
	}
}
extern "C" bool m8212 (t1643 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5819_MI;
extern MethodInfo m5696_MI;
extern MethodInfo m5826_MI;
extern MethodInfo m672_MI;


extern "C" void m8213 (t1638 * __this, MethodInfo* method)
{
	{
		m5826(__this, &m5826_MI);
		return;
	}
}
extern MethodInfo m8214_MI;
extern "C" t9 * m8214 (t1638 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8215_MI;
extern "C" t1641 * m8215 (t1638 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return ((t1641 *)Castclass(L_2, InitializedTypeInfo(&t1641_TI)));
	}
}
extern "C" int32_t m8216 (t1638 * __this, t1641 * p0, MethodInfo* method)
{
	{
		t1641 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral611, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1161 * L_2 = m5819(__this, &m5819_MI);
		t1641 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_2, L_3);
		return L_4;
	}
}
extern "C" t1643 * m8217 (t1638 * __this, MethodInfo* method)
{
	{
		t1643 * L_0 = (t1643 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1643_TI));
		m8208(L_0, __this, &m8208_MI);
		return L_0;
	}
}
extern MethodInfo m8218_MI;
extern "C" int32_t m8218 (t1638 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_0);
		return L_1;
	}
}
#include "t1644.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1644_TI;
#include "t1644MD.h"

#include "t894.h"
extern TypeInfo t894_TI;
extern TypeInfo t899_TI;
#include "t894MD.h"
#include "t568MD.h"
#include "t886MD.h"
extern MethodInfo m8235_MI;
extern MethodInfo m8238_MI;
extern MethodInfo m8220_MI;
extern MethodInfo m4207_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m6869_MI;
extern MethodInfo m6916_MI;
extern MethodInfo m5775_MI;
extern MethodInfo m8223_MI;


extern MethodInfo m8219_MI;
extern "C" void m8219 (t1644 * __this, t1635 * p0, MethodInfo* method)
{
	t1635 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1644 * G_B7_0 = {0};
	t1644 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t1644 * G_B8_1 = {0};
	{
		m336(__this, &m336_MI);
		t1635 * L_0 = p0;
		uint8_t L_1 = m8232(L_0, &m8232_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1635 * L_2 = p0;
		int32_t L_3 = m8231(L_2, &m8231_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0019:
	{
		t2* L_4 = m7818(NULL, (t2*) &_stringLiteral944, &m7818_MI);
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, L_4, &m2885_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t1635 * L_6 = p0;
		t1635 * L_7 = m8242(L_6, 0, &m8242_MI);
		uint8_t L_8 = m8232(L_7, &m8232_MI);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0048;
		}
	}
	{
		t2* L_9 = m7818(NULL, (t2*) &_stringLiteral944, &m7818_MI);
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_10, L_9, &m2885_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0048:
	{
		t1635 * L_11 = p0;
		t1635 * L_12 = m8242(L_11, 0, &m8242_MI);
		t2* L_13 = m8246(NULL, L_12, &m8246_MI);
		__this->f0 = L_13;
		t1635 * L_14 = p0;
		t1635 * L_15 = m8242(L_14, 1, &m8242_MI);
		uint8_t L_16 = m8232(L_15, &m8232_MI);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_0081;
		}
	}
	{
		t1635 * L_17 = p0;
		t1635 * L_18 = m8242(L_17, 1, &m8242_MI);
		t723* L_19 = m8234(L_18, &m8234_MI);
		int32_t L_20 = 0;
		G_B8_0 = ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_20))) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0082:
	{
		G_B8_1->f1 = G_B8_0;
		t1635 * L_21 = p0;
		t1635 * L_22 = p0;
		int32_t L_23 = m8231(L_22, &m8231_MI);
		t1635 * L_24 = m8242(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m8242_MI);
		__this->f2 = L_24;
		t1635 * L_25 = (__this->f2);
		uint8_t L_26 = m8232(L_25, &m8232_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		t1635 * L_27 = (__this->f2);
		int32_t L_28 = m8233(L_27, &m8233_MI);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		t1635 * L_29 = (__this->f2);
		int32_t L_30 = m8231(L_29, &m8231_MI);
		if (L_30)
		{
			goto IL_00f3;
		}
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		t1635 * L_31 = (__this->f2);
		t723* L_32 = m8234(L_31, &m8234_MI);
		t1635 * L_33 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_33, L_32, &m8230_MI);
		V_0 = L_33;
		t1635 * L_34 = (__this->f2);
		m8235(L_34, (t723*)(t723*)NULL, &m8235_MI);
		t1635 * L_35 = (__this->f2);
		t1635 * L_36 = V_0;
		m8238(L_35, L_36, &m8238_MI);
		goto IL_00f3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_00f0;
		throw e;
	}

CATCH_00f0:
	{ // begin catch(System.Object)
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00f3:
	{
		VirtActionInvoker0::Invoke(&m8220_MI, __this);
		return;
	}
}
extern "C" void m8220 (t1644 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8221_MI;
extern "C" bool m8221 (t1644 * __this, t9 * p0, MethodInfo* method)
{
	t1644 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		V_0 = ((t1644 *)IsInst(L_1, InitializedTypeInfo(&t1644_TI)));
		t1644 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_3 = (__this->f1);
		t1644 * L_4 = V_0;
		bool L_5 = (L_4->f1);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		return 0;
	}

IL_0021:
	{
		t2* L_6 = (__this->f0);
		t1644 * L_7 = V_0;
		t2* L_8 = (L_7->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_9 = m2713(NULL, L_6, L_8, &m2713_MI);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		t1635 * L_10 = (__this->f2);
		int32_t L_11 = m8233(L_10, &m8233_MI);
		t1644 * L_12 = V_0;
		t1635 * L_13 = (L_12->f2);
		int32_t L_14 = m8233(L_13, &m8233_MI);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		return 0;
	}

IL_0050:
	{
		V_1 = 0;
		goto IL_0074;
	}

IL_0054:
	{
		t1635 * L_15 = (__this->f2);
		int32_t L_16 = V_1;
		t1635 * L_17 = m8242(L_15, L_16, &m8242_MI);
		t1644 * L_18 = V_0;
		t1635 * L_19 = (L_18->f2);
		int32_t L_20 = V_1;
		t1635 * L_21 = m8242(L_19, L_20, &m8242_MI);
		if ((((t9*)(t1635 *)L_17) == ((t9*)(t1635 *)L_21)))
		{
			goto IL_0070;
		}
	}
	{
		return 0;
	}

IL_0070:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_23 = V_1;
		t1635 * L_24 = (__this->f2);
		int32_t L_25 = m8233(L_24, &m8233_MI);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		return 1;
	}
}
extern MethodInfo m8222_MI;
extern "C" int32_t m8222 (t1644 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_0);
		return L_1;
	}
}
extern "C" void m8223 (t1644 * __this, t315 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t723* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		t1635 * L_0 = (__this->f2);
		t723* L_1 = m8234(L_0, &m8234_MI);
		V_0 = L_1;
		int32_t L_2 = p2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0055;
	}

IL_0012:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = p1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}
	{
		t315 * L_5 = p0;
		t723* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_9 = m4334(NULL, &m4334_MI);
		t2* L_10 = m6869(((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)), (t2*) &_stringLiteral579, L_9, &m6869_MI);
		m1154(L_5, L_10, &m1154_MI);
		t315 * L_11 = p0;
		m1154(L_11, (t2*) &_stringLiteral168, &m1154_MI);
		goto IL_0051;
	}

IL_0045:
	{
		t315 * L_12 = p0;
		m1154(L_12, (t2*) &_stringLiteral946, &m1154_MI);
	}

IL_0051:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0012;
		}
	}
	{
		t315 * L_15 = p0;
		m1154(L_15, (t2*) &_stringLiteral947, &m1154_MI);
		int32_t L_16 = p2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		t723* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = L_19;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_20));
		uint8_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0088;
		}
	}
	{
		t315 * L_22 = p0;
		m1154(L_22, (t2*) &_stringLiteral140, &m1154_MI);
		goto IL_0096;
	}

IL_0088:
	{
		t315 * L_23 = p0;
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		uint16_t L_25 = m6916(NULL, L_24, &m6916_MI);
		m2733(L_23, L_25, &m2733_MI);
	}

IL_0096:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = p1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_006b;
		}
	}
	{
		t315 * L_29 = p0;
		t2* L_30 = m5775(NULL, &m5775_MI);
		m1154(L_29, L_30, &m1154_MI);
		return;
	}
}
extern MethodInfo m8224_MI;
extern "C" t2* m8224 (t1644 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		t1635 * L_1 = (__this->f2);
		int32_t L_2 = m8233(L_1, &m8233_MI);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		t1635 * L_3 = (__this->f2);
		int32_t L_4 = m8233(L_3, &m8233_MI);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		t315 * L_6 = V_0;
		int32_t L_7 = V_3;
		m8223(__this, L_6, 8, L_7, &m8223_MI);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		t315 * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		m8223(__this, L_12, L_13, L_14, &m8223_MI);
		t315 * L_15 = V_0;
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_15);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t138MD.h"
extern MethodInfo m8225_MI;
extern MethodInfo m379_MI;


extern "C" void m8225 (t1642 * __this, MethodInfo* method)
{
	{
		m5826(__this, &m5826_MI);
		return;
	}
}
extern "C" void m8226 (t1642 * __this, t1635 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1644 * V_1 = {0};
	{
		m8225(__this, &m8225_MI);
		__this->f1 = 1;
		t1635 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		t1635 * L_1 = p0;
		uint8_t L_2 = m8232(L_1, &m8232_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral948, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		t1635 * L_4 = p0;
		int32_t L_5 = V_0;
		t1635 * L_6 = m8242(L_4, L_5, &m8242_MI);
		t1644 * L_7 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8219(L_7, L_6, &m8219_MI);
		V_1 = L_7;
		t1161 * L_8 = m5819(__this, &m5819_MI);
		t1644 * L_9 = V_1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		t1635 * L_12 = p0;
		int32_t L_13 = m8231(L_12, &m8231_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8227_MI;
extern "C" t9 * m8227 (t1642 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5694_MI;
extern MethodInfo m8229_MI;
extern MethodInfo m8240_MI;
extern MethodInfo m8236_MI;
extern MethodInfo m8241_MI;
extern MethodInfo m5792_MI;
extern MethodInfo m5813_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m6861_MI;


extern MethodInfo m8228_MI;
extern "C" void m8228 (t1635 * __this, uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		m8229(__this, L_0, (t723*)(t723*)NULL, &m8229_MI);
		return;
	}
}
extern "C" void m8229 (t1635 * __this, uint8_t p0, t723* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		t723* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8230 (t1635 * __this, t723* p0, MethodInfo* method)
{
	static bool m8230_init;
	if (!m8230_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8230_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t723* L_0 = p0;
		int32_t L_1 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1));
		V_0 = 0;
		t723* L_2 = p0;
		int32_t L_3 = 1;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)((int32_t)128)));
		V_1 = 0;
		V_2 = 0;
		goto IL_003f;
	}

IL_002b:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6*(int32_t)((int32_t)256)));
		int32_t L_7 = V_1;
		t723* L_8 = p0;
		int32_t L_9 = V_2;
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)2));
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_10))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0058;
	}

IL_0045:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0058;
		}
	}
	{
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_15, (t2*) &_stringLiteral787, &m5706_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0058:
	{
		int32_t L_16 = V_1;
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, L_16));
		t723* L_17 = p0;
		int32_t L_18 = V_0;
		t723* L_19 = (__this->f1);
		int32_t L_20 = V_1;
		m5764(NULL, (t121 *)(t121 *)L_17, ((int32_t)((int32_t)2+(int32_t)L_18)), (t121 *)(t121 *)L_19, 0, L_20, &m5764_MI);
		uint8_t L_21 = (__this->f0);
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_0;
		V_3 = ((int32_t)((int32_t)2+(int32_t)L_22));
		t723* L_23 = p0;
		t723* L_24 = p0;
		m8240(__this, L_23, (&V_3), (((int32_t)(((t121 *)L_24)->max_length))), &m8240_MI);
	}

IL_0092:
	{
		return;
	}
}
extern "C" int32_t m8231 (t1635 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f2);
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
		t1161 * L_1 = (__this->f2);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_1);
		return L_2;
	}
}
extern "C" uint8_t m8232 (t1635 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m8233 (t1635 * __this, MethodInfo* method)
{
	{
		t723* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t723* L_1 = (__this->f1);
		return (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0011:
	{
		return 0;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8234 (t1635 * __this, MethodInfo* method)
{
	static bool m8234_init;
	if (!m8234_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8234_init = true;
	}
	{
		t723* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VirtFuncInvoker0< t723* >::Invoke(&m8239_MI, __this);
	}

IL_000f:
	{
		t723* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t723*)Castclass(L_2, t723_TI_var));
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8235 (t1635 * __this, t723* p0, MethodInfo* method)
{
	static bool m8235_init;
	if (!m8235_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8235_init = true;
	}
	{
		t723* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t723* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		__this->f1 = ((t723*)Castclass(L_2, t723_TI_var));
	}

IL_0014:
	{
		return;
	}
}
extern "C" bool m8236 (t1635 * __this, t723* p0, t723* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		t723* L_0 = p0;
		t723* L_1 = p1;
		V_0 = ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		V_1 = 0;
		goto IL_001e;
	}

IL_0010:
	{
		t723* L_3 = p0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t723* L_6 = p1;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		t723* L_11 = p0;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((t121 *)L_11)->max_length))))))
		{
			goto IL_0010;
		}
	}

IL_0024:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
extern "C" bool m8237 (t1635 * __this, t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = (__this->f1);
		t723* L_1 = p0;
		bool L_2 = m8236(__this, L_0, L_1, &m8236_MI);
		return L_2;
	}
}
extern "C" t1635 * m8238 (t1635 * __this, t1635 * p0, MethodInfo* method)
{
	{
		t1635 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t1161 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_2, &m5698_MI);
		__this->f2 = L_2;
	}

IL_0016:
	{
		t1161 * L_3 = (__this->f2);
		t1635 * L_4 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_3, L_4);
	}

IL_0023:
	{
		t1635 * L_5 = p0;
		return L_5;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8239 (t1635 * __this, MethodInfo* method)
{
	static bool m8239_init;
	if (!m8239_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8239_init = true;
	}
	t723* V_0 = {0};
	int32_t V_1 = 0;
	t1161 * V_2 = {0};
	t1635 * V_3 = {0};
	t9 * V_4 = {0};
	t723* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t723* V_8 = {0};
	t723* V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	t9 * V_12 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t723*)NULL;
		int32_t L_0 = m8231(__this, &m8231_MI);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		V_2 = L_1;
		t1161 * L_2 = (__this->f2);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_2);
		V_4 = L_3;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0025:
		{
			t9 * L_4 = V_4;
			t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_4);
			V_3 = ((t1635 *)Castclass(L_5, InitializedTypeInfo(&t1635_TI)));
			t1635 * L_6 = V_3;
			t723* L_7 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m8239_MI, L_6);
			V_5 = L_7;
			t1161 * L_8 = V_2;
			t723* L_9 = V_5;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_8, (t9 *)(t9 *)L_9);
			int32_t L_10 = V_1;
			t723* L_11 = V_5;
			V_1 = ((int32_t)((int32_t)L_10+(int32_t)(((int32_t)(((t121 *)L_11)->max_length)))));
		}

IL_004a:
		{
			t9 * L_12 = V_4;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_12);
			if (L_13)
			{
				goto IL_0025;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			t9 * L_14 = V_4;
			V_12 = ((t9 *)IsInst(L_14, InitializedTypeInfo(&t137_TI)));
			t9 * L_15 = V_12;
			if (L_15)
			{
				goto IL_0063;
			}
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(85)
		}

IL_0063:
		{
			t9 * L_16 = V_12;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_16);
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006b:
	{
		int32_t L_17 = V_1;
		V_0 = ((t723*)SZArrayNew(t723_TI_var, L_17));
		V_6 = 0;
		V_7 = 0;
		goto IL_00a7;
	}

IL_007a:
	{
		t1161 * L_18 = V_2;
		int32_t L_19 = V_7;
		t9 * L_20 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_18, L_19);
		V_8 = ((t723*)Castclass(L_20, t723_TI_var));
		t723* L_21 = V_8;
		t723* L_22 = V_0;
		int32_t L_23 = V_6;
		t723* L_24 = V_8;
		m5764(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, L_23, (((int32_t)(((t121 *)L_24)->max_length))), &m5764_MI);
		int32_t L_25 = V_6;
		t723* L_26 = V_8;
		V_6 = ((int32_t)((int32_t)L_25+(int32_t)(((int32_t)(((t121 *)L_26)->max_length)))));
		int32_t L_27 = V_7;
		V_7 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_7;
		t1161 * L_29 = (__this->f2);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_29);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_00c7;
	}

IL_00b8:
	{
		t723* L_31 = (__this->f1);
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		t723* L_32 = (__this->f1);
		V_0 = L_32;
	}

IL_00c7:
	{
		V_10 = 0;
		t723* L_33 = V_0;
		if (!L_33)
		{
			goto IL_0200;
		}
	}
	{
		t723* L_34 = V_0;
		V_11 = (((int32_t)(((t121 *)L_34)->max_length)));
		int32_t L_35 = V_11;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)127))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_36 = V_11;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)255))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_37 = V_11;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)3+(int32_t)L_37))));
		t723* L_38 = V_0;
		t723* L_39 = V_9;
		int32_t L_40 = V_11;
		m5764(NULL, (t121 *)(t121 *)L_38, 0, (t121 *)(t121 *)L_39, 3, L_40, &m5764_MI);
		V_10 = ((int32_t)129);
		t723* L_41 = V_9;
		int32_t L_42 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, 2)) = (uint8_t)(((uint8_t)L_42));
		goto IL_01d2;
	}

IL_0111:
	{
		int32_t L_43 = V_11;
		if ((((int32_t)L_43) > ((int32_t)((int32_t)65535))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_44 = V_11;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)4+(int32_t)L_44))));
		t723* L_45 = V_0;
		t723* L_46 = V_9;
		int32_t L_47 = V_11;
		m5764(NULL, (t121 *)(t121 *)L_45, 0, (t121 *)(t121 *)L_46, 4, L_47, &m5764_MI);
		V_10 = ((int32_t)130);
		t723* L_48 = V_9;
		int32_t L_49 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_49>>(int32_t)8))));
		t723* L_50 = V_9;
		int32_t L_51 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_50, 3)) = (uint8_t)(((uint8_t)L_51));
		goto IL_01d2;
	}

IL_014d:
	{
		int32_t L_52 = V_11;
		if ((((int32_t)L_52) > ((int32_t)((int32_t)16777215))))
		{
			goto IL_0190;
		}
	}
	{
		int32_t L_53 = V_11;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)5+(int32_t)L_53))));
		t723* L_54 = V_0;
		t723* L_55 = V_9;
		int32_t L_56 = V_11;
		m5764(NULL, (t121 *)(t121 *)L_54, 0, (t121 *)(t121 *)L_55, 5, L_56, &m5764_MI);
		V_10 = ((int32_t)131);
		t723* L_57 = V_9;
		int32_t L_58 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_58>>(int32_t)((int32_t)16)))));
		t723* L_59 = V_9;
		int32_t L_60 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_59, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_60>>(int32_t)8))));
		t723* L_61 = V_9;
		int32_t L_62 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, 4)) = (uint8_t)(((uint8_t)L_62));
		goto IL_01d2;
	}

IL_0190:
	{
		int32_t L_63 = V_11;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)6+(int32_t)L_63))));
		t723* L_64 = V_0;
		t723* L_65 = V_9;
		int32_t L_66 = V_11;
		m5764(NULL, (t121 *)(t121 *)L_64, 0, (t121 *)(t121 *)L_65, 6, L_66, &m5764_MI);
		V_10 = ((int32_t)132);
		t723* L_67 = V_9;
		int32_t L_68 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_68>>(int32_t)((int32_t)24)))));
		t723* L_69 = V_9;
		int32_t L_70 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_69, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_70>>(int32_t)((int32_t)16)))));
		t723* L_71 = V_9;
		int32_t L_72 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, 4)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72>>(int32_t)8))));
		t723* L_73 = V_9;
		int32_t L_74 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_73, 5)) = (uint8_t)(((uint8_t)L_74));
	}

IL_01d2:
	{
		goto IL_01ef;
	}

IL_01d4:
	{
		int32_t L_75 = V_11;
		V_9 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)2+(int32_t)L_75))));
		t723* L_76 = V_0;
		t723* L_77 = V_9;
		int32_t L_78 = V_11;
		m5764(NULL, (t121 *)(t121 *)L_76, 0, (t121 *)(t121 *)L_77, 2, L_78, &m5764_MI);
		int32_t L_79 = V_11;
		V_10 = L_79;
	}

IL_01ef:
	{
		t723* L_80 = (__this->f1);
		if (L_80)
		{
			goto IL_01fe;
		}
	}
	{
		t723* L_81 = V_0;
		__this->f1 = L_81;
	}

IL_01fe:
	{
		goto IL_0208;
	}

IL_0200:
	{
		V_9 = ((t723*)SZArrayNew(t723_TI_var, 2));
	}

IL_0208:
	{
		t723* L_82 = V_9;
		uint8_t L_83 = (__this->f0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_82, 0)) = (uint8_t)L_83;
		t723* L_84 = V_9;
		int32_t L_85 = V_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_84, 1)) = (uint8_t)(((uint8_t)L_85));
		t723* L_86 = V_9;
		return L_86;
	}
}
extern "C" void m8240 (t1635 * __this, t723* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	t723* V_2 = {0};
	t1635 * V_3 = {0};
	int32_t V_4 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		t723* L_0 = p0;
		int32_t* L_1 = p1;
		m8241(__this, L_0, L_1, (&V_0), (&V_1), (&V_2), &m8241_MI);
		uint8_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0042;
	}

IL_0015:
	{
		uint8_t L_3 = V_0;
		t723* L_4 = V_2;
		t1635 * L_5 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8229(L_5, L_3, L_4, &m8229_MI);
		t1635 * L_6 = m8238(__this, L_5, &m8238_MI);
		V_3 = L_6;
		uint8_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t* L_8 = p1;
		V_4 = (*((int32_t*)L_8));
		t1635 * L_9 = V_3;
		t723* L_10 = p0;
		int32_t L_11 = V_4;
		int32_t L_12 = V_1;
		m8240(L_9, L_10, (&V_4), ((int32_t)((int32_t)L_11+(int32_t)L_12)), &m8240_MI);
	}

IL_003c:
	{
		int32_t* L_13 = p1;
		int32_t* L_14 = p1;
		int32_t L_15 = V_1;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)L_15));
	}

IL_0042:
	{
		int32_t* L_16 = p1;
		int32_t L_17 = p2;
		if ((((int32_t)(*((int32_t*)L_16))) < ((int32_t)((int32_t)((int32_t)L_17-(int32_t)1)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8241 (t1635 * __this, t723* p0, int32_t* p1, uint8_t* p2, int32_t* p3, t723** p4, MethodInfo* method)
{
	static bool m8241_init;
	if (!m8241_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8241_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = p2;
		t723* L_1 = p0;
		int32_t* L_2 = p1;
		int32_t* L_3 = p1;
		int32_t L_4 = (*((int32_t*)L_3));
		V_2 = L_4;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		*((int8_t*)(L_0)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_6));
		int32_t* L_7 = p3;
		t723* L_8 = p0;
		int32_t* L_9 = p1;
		int32_t* L_10 = p1;
		int32_t L_11 = (*((int32_t*)L_10));
		V_2 = L_11;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		*((int32_t*)(L_7)) = (int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_13));
		int32_t* L_14 = p3;
		if ((!(((uint32_t)((int32_t)((int32_t)(*((int32_t*)L_14))&(int32_t)((int32_t)128)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t* L_15 = p3;
		V_0 = ((int32_t)((int32_t)(*((int32_t*)L_15))&(int32_t)((int32_t)127)));
		int32_t* L_16 = p3;
		*((int32_t*)(L_16)) = (int32_t)0;
		V_1 = 0;
		goto IL_0056;
	}

IL_003a:
	{
		int32_t* L_17 = p3;
		int32_t* L_18 = p3;
		t723* L_19 = p0;
		int32_t* L_20 = p1;
		int32_t* L_21 = p1;
		int32_t L_22 = (*((int32_t*)L_21));
		V_2 = L_22;
		*((int32_t*)(L_20)) = (int32_t)((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*((int32_t*)L_18))*(int32_t)((int32_t)256)))+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_24))));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_003a;
		}
	}

IL_005a:
	{
		t723** L_28 = p4;
		int32_t* L_29 = p3;
		*((t9 **)(L_28)) = (t9 *)((t723*)SZArrayNew(t723_TI_var, (*((int32_t*)L_29))));
		t723* L_30 = p0;
		int32_t* L_31 = p1;
		t723** L_32 = p4;
		int32_t* L_33 = p3;
		m5764(NULL, (t121 *)(t121 *)L_30, (*((int32_t*)L_31)), (t121 *)(t121 *)(*((t723**)L_32)), 0, (*((int32_t*)L_33)), &m5764_MI);
		return;
	}
}
extern "C" t1635 * m8242 (t1635 * __this, int32_t p0, MethodInfo* method)
{
	t1635 * V_0 = {0};
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
			t1161 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1161 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_0 = (t1635 *)NULL;
			goto IL_0037;
		}

IL_001a:
		{
			t1161 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_4, L_5);
			V_0 = ((t1635 *)Castclass(L_6, InitializedTypeInfo(&t1635_TI)));
			goto IL_0037;
		}

IL_002e:
		{
			goto IL_0037;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t896_TI, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_0 = (t1635 *)NULL;
			goto IL_0037;
		}

IL_0035:
		{
			goto IL_0037;
		}
	} // end catch (depth: 1)

IL_0037:
	{
		t1635 * L_7 = V_0;
		return L_7;
	}
}
extern "C" t1635 * m8243 (t1635 * __this, int32_t p0, uint8_t p1, MethodInfo* method)
{
	t1635 * V_0 = {0};
	t1635 * V_1 = {0};
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
			t1161 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1161 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_1 = (t1635 *)NULL;
			goto IL_0046;
		}

IL_001a:
		{
			t1161 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_4, L_5);
			V_0 = ((t1635 *)Castclass(L_6, InitializedTypeInfo(&t1635_TI)));
			t1635 * L_7 = V_0;
			uint8_t L_8 = m8232(L_7, &m8232_MI);
			uint8_t L_9 = p1;
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0039;
			}
		}

IL_0035:
		{
			t1635 * L_10 = V_0;
			V_1 = L_10;
			goto IL_0046;
		}

IL_0039:
		{
			V_1 = (t1635 *)NULL;
			goto IL_0046;
		}

IL_003d:
		{
			goto IL_0046;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t896_TI, e.ex->object.klass))
			goto CATCH_003f;
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_1 = (t1635 *)NULL;
			goto IL_0046;
		}

IL_0044:
		{
			goto IL_0046;
		}
	} // end catch (depth: 1)

IL_0046:
	{
		t1635 * L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m8244_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m8244 (t1635 * __this, MethodInfo* method)
{
	static bool m8244_init;
	if (!m8244_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8244_init = true;
	}
	t315 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		t315 * L_1 = V_0;
		uint8_t* L_2 = &(__this->f0);
		t2* L_3 = m5792(L_2, (t2*) &_stringLiteral579, &m5792_MI);
		t2* L_4 = m5775(NULL, &m5775_MI);
		m5813(L_1, (t2*) &_stringLiteral788, L_3, L_4, &m5813_MI);
		t315 * L_5 = V_0;
		t723* L_6 = m8234(__this, &m8234_MI);
		int32_t L_7 = (((int32_t)(((t121 *)L_6)->max_length)));
		t9 * L_8 = Box(InitializedTypeInfo(&t125_TI), &L_7);
		t2* L_9 = m5775(NULL, &m5775_MI);
		m5813(L_5, (t2*) &_stringLiteral789, L_8, L_9, &m5813_MI);
		t315 * L_10 = V_0;
		m1154(L_10, (t2*) &_stringLiteral790, &m1154_MI);
		t315 * L_11 = V_0;
		t2* L_12 = m5775(NULL, &m5775_MI);
		m1154(L_11, L_12, &m1154_MI);
		V_1 = 0;
		goto IL_00a1;
	}

IL_0061:
	{
		t315 * L_13 = V_0;
		t723* L_14 = m8234(__this, &m8234_MI);
		int32_t L_15 = V_1;
		t2* L_16 = m5792(((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15)), (t2*) &_stringLiteral579, &m5792_MI);
		m5722(L_13, (t2*) &_stringLiteral791, L_16, &m5722_MI);
		int32_t L_17 = V_1;
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_17+(int32_t)1))%(int32_t)((int32_t)16))))
		{
			goto IL_009d;
		}
	}
	{
		t315 * L_18 = V_0;
		t2* L_19 = m5775(NULL, &m5775_MI);
		m6861(L_18, L_19, ((t158*)SZArrayNew(t158_TI_var, 0)), &m6861_MI);
	}

IL_009d:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_1;
		t723* L_22 = m8234(__this, &m8234_MI);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t121 *)L_22)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		t315 * L_23 = V_0;
		t2* L_24 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_23);
		return L_24;
	}
}
#include "t1645.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1645_TI;

#include "t883.h"
#include "t882.h"
#include "t327.h"
#include "t1516.h"
extern TypeInfo t883_TI;
extern TypeInfo t882_TI;
extern TypeInfo t269_TI;
#include "t883MD.h"
#include "t882MD.h"
#include "t269MD.h"
extern MethodInfo m4288_MI;
extern MethodInfo m6863_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m6864_MI;
extern MethodInfo m2884_MI;
extern MethodInfo m6865_MI;


extern "C" int32_t m8245 (t9 * __this , t1635 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1635 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral792, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1635 * L_2 = p0;
		uint8_t L_3 = m8232(L_2, &m8232_MI);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		t883 * L_4 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_4, (t2*) &_stringLiteral793, &m4288_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		int32_t L_5 = V_0;
		t1635 * L_6 = p0;
		t723* L_7 = m8234(L_6, &m8234_MI);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_11 = V_1;
		t1635 * L_12 = p0;
		t723* L_13 = m8234(L_12, &m8234_MI);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
extern "C" t2* m8246 (t9 * __this , t1635 * p0, MethodInfo* method)
{
	t723* V_0 = {0};
	t315 * V_1 = {0};
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint64_t V_4 = 0;
	{
		t1635 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral792, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1635 * L_2 = p0;
		t723* L_3 = m8234(L_2, &m8234_MI);
		V_0 = L_3;
		t315 * L_4 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_4, &m1150_MI);
		V_1 = L_4;
		t723* L_5 = V_0;
		int32_t L_6 = 0;
		V_2 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6))/(int32_t)((int32_t)40)))));
		t723* L_7 = V_0;
		int32_t L_8 = 0;
		V_3 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_8))%(int32_t)((int32_t)40)))));
		uint8_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		uint8_t L_10 = V_3;
		uint8_t L_11 = V_2;
		V_3 = (((uint8_t)((int32_t)((int32_t)L_10+(int32_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)2))*(int32_t)((int32_t)40)))))))));
		V_2 = 2;
	}

IL_003c:
	{
		t315 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_13 = m4334(NULL, &m4334_MI);
		t2* L_14 = m6863((&V_2), L_13, &m6863_MI);
		m1154(L_12, L_14, &m1154_MI);
		t315 * L_15 = V_1;
		m1154(L_15, (t2*) &_stringLiteral140, &m1154_MI);
		t315 * L_16 = V_1;
		t894 * L_17 = m4334(NULL, &m4334_MI);
		t2* L_18 = m6863((&V_3), L_17, &m6863_MI);
		m1154(L_16, L_18, &m1154_MI);
		V_4 = (((int64_t)0));
		V_2 = 1;
		goto IL_00bd;
	}

IL_0076:
	{
		uint64_t L_19 = V_4;
		t723* L_20 = V_0;
		uint8_t L_21 = V_2;
		uint8_t L_22 = L_21;
		V_4 = ((int64_t)((int64_t)((int64_t)((int64_t)L_19<<(int32_t)7))|(int64_t)(((uint64_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))&(int32_t)((int32_t)127)))))))));
		t723* L_23 = V_0;
		uint8_t L_24 = V_2;
		uint8_t L_25 = L_24;
		if ((((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25))&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00b8;
		}
	}
	{
		t315 * L_26 = V_1;
		m1154(L_26, (t2*) &_stringLiteral140, &m1154_MI);
		t315 * L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_28 = m4334(NULL, &m4334_MI);
		t2* L_29 = m4346((&V_4), L_28, &m4346_MI);
		m1154(L_27, L_29, &m1154_MI);
		V_4 = (((int64_t)0));
	}

IL_00b8:
	{
		uint8_t L_30 = V_2;
		V_2 = (((uint8_t)((int32_t)((int32_t)L_30+(int32_t)1))));
	}

IL_00bd:
	{
		uint8_t L_31 = V_2;
		t723* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		t315 * L_33 = V_1;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_33);
		return L_34;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t269  m8247 (t9 * __this , t1635 * p0, MethodInfo* method)
{
	static bool m8247_init;
	if (!m8247_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8247_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	t2* V_3 = {0};
	uint16_t V_4 = 0x0;
	int32_t V_5 = 0;
	t2* G_B13_0 = {0};
	int32_t G_B16_0 = 0;
	{
		t1635 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral794, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_2 = m4242(NULL, &m4242_MI);
		t1635 * L_3 = p0;
		t723* L_4 = m8234(L_3, &m8234_MI);
		t2* L_5 = (t2*)VirtFuncInvoker1< t2*, t723* >::Invoke(&m5800_MI, L_2, L_4);
		V_0 = L_5;
		V_1 = (t2*)NULL;
		t2* L_6 = V_0;
		int32_t L_7 = m2699(L_6, &m2699_MI);
		V_5 = L_7;
		int32_t L_8 = V_5;
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_0153;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_0153;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 4)
		{
			goto IL_009c;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 5)
		{
			goto IL_0153;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)((int32_t)11))) == 6)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_0153;
	}

IL_0054:
	{
		V_1 = (t2*) &_stringLiteral795;
		goto IL_0153;
	}

IL_005f:
	{
		t2* L_9 = V_0;
		t2* L_10 = m2715(L_9, 0, 2, &m2715_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_11 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int16_t L_12 = m6864(NULL, L_10, L_11, &m6864_MI);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)50))))
		{
			goto IL_0085;
		}
	}
	{
		t2* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = m610(NULL, (t2*) &_stringLiteral796, L_14, &m610_MI);
		V_0 = L_15;
		goto IL_0091;
	}

IL_0085:
	{
		t2* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m610(NULL, (t2*) &_stringLiteral797, L_16, &m610_MI);
		V_0 = L_17;
	}

IL_0091:
	{
		V_1 = (t2*) &_stringLiteral798;
		goto IL_0153;
	}

IL_009c:
	{
		V_1 = (t2*) &_stringLiteral798;
		goto IL_0153;
	}

IL_00a7:
	{
		t2* L_18 = V_0;
		t2* L_19 = m2715(L_18, 0, 2, &m2715_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_20 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int16_t L_21 = m6864(NULL, L_19, L_20, &m6864_MI);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)50))))
		{
			goto IL_00c6;
		}
	}
	{
		G_B13_0 = (t2*) &_stringLiteral796;
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B13_0 = (t2*) &_stringLiteral797;
	}

IL_00cb:
	{
		V_3 = G_B13_0;
		t2* L_23 = V_0;
		uint16_t L_24 = m2714(L_23, ((int32_t)12), &m2714_MI);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_00dc;
		}
	}
	{
		G_B16_0 = ((int32_t)45);
		goto IL_00de;
	}

IL_00dc:
	{
		G_B16_0 = ((int32_t)43);
	}

IL_00de:
	{
		V_4 = G_B16_0;
		t158* L_25 = ((t158*)SZArrayNew(t158_TI_var, 7));
		t2* L_26 = V_3;
		ArrayElementTypeCheck (L_25, L_26);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 0)) = (t9 *)L_26;
		t158* L_27 = L_25;
		t2* L_28 = V_0;
		t2* L_29 = m2715(L_28, 0, ((int32_t)12), &m2715_MI);
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 1)) = (t9 *)L_29;
		t158* L_30 = L_27;
		uint16_t L_31 = V_4;
		uint16_t L_32 = L_31;
		t9 * L_33 = Box(InitializedTypeInfo(&t296_TI), &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 2)) = (t9 *)L_33;
		t158* L_34 = L_30;
		t2* L_35 = V_0;
		uint16_t L_36 = m2714(L_35, ((int32_t)13), &m2714_MI);
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t296_TI), &L_37);
		ArrayElementTypeCheck (L_34, L_38);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 3)) = (t9 *)L_38;
		t158* L_39 = L_34;
		t2* L_40 = V_0;
		uint16_t L_41 = m2714(L_40, ((int32_t)14), &m2714_MI);
		uint16_t L_42 = L_41;
		t9 * L_43 = Box(InitializedTypeInfo(&t296_TI), &L_42);
		ArrayElementTypeCheck (L_39, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_39, 4)) = (t9 *)L_43;
		t158* L_44 = L_39;
		t2* L_45 = V_0;
		uint16_t L_46 = m2714(L_45, ((int32_t)15), &m2714_MI);
		uint16_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t296_TI), &L_47);
		ArrayElementTypeCheck (L_44, L_48);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, 5)) = (t9 *)L_48;
		t158* L_49 = L_44;
		t2* L_50 = V_0;
		uint16_t L_51 = m2714(L_50, ((int32_t)16), &m2714_MI);
		uint16_t L_52 = L_51;
		t9 * L_53 = Box(InitializedTypeInfo(&t296_TI), &L_52);
		ArrayElementTypeCheck (L_49, L_53);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 6)) = (t9 *)L_53;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_54 = m2884(NULL, (t2*) &_stringLiteral799, L_49, &m2884_MI);
		V_0 = L_54;
		V_1 = (t2*) &_stringLiteral800;
		goto IL_0153;
	}

IL_0153:
	{
		t2* L_55 = V_0;
		t2* L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_57 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_58 = m6865(NULL, L_55, L_56, L_57, ((int32_t)16), &m6865_MI);
		return L_58;
	}
}
#include "t1646.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1646_TI;
#include "t1646MD.h"

#include "t1334.h"
#include "t123.h"
#include "t156.h"
extern TypeInfo t1334_TI;
#include "t1334MD.h"
extern MethodInfo m8248_MI;
extern MethodInfo m8249_MI;
extern MethodInfo m8253_MI;
extern MethodInfo m8254_MI;
extern MethodInfo m8255_MI;


extern TypeInfo* t723_TI_var;
extern "C" t723* m8248 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8248_init;
	if (!m8248_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8248_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		t723* L_1 = ((t723*)SZArrayNew(t723_TI_var, 4));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t723* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t723* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t723* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		return L_7;
	}

IL_0028:
	{
		t723* L_9 = ((t723*)SZArrayNew(t723_TI_var, 4));
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)3))));
		t723* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)2))));
		t723* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)1))));
		t723* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 3)) = (uint8_t)(*((uint8_t*)L_16));
		return L_15;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8249 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8249_init;
	if (!m8249_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8249_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		t723* L_1 = ((t723*)SZArrayNew(t723_TI_var, 8));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t723* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t723* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t723* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		t723* L_9 = L_7;
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)4))));
		t723* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)5))));
		t723* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)6))));
		t723* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)7))));
		return L_15;
	}

IL_0044:
	{
		t723* L_17 = ((t723*)SZArrayNew(t723_TI_var, 8));
		uint8_t* L_18 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_18+(int32_t)7))));
		t723* L_19 = L_17;
		uint8_t* L_20 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_20+(int32_t)6))));
		t723* L_21 = L_19;
		uint8_t* L_22 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_22+(int32_t)5))));
		t723* L_23 = L_21;
		uint8_t* L_24 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_24+(int32_t)4))));
		t723* L_25 = L_23;
		uint8_t* L_26 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_26+(int32_t)3))));
		t723* L_27 = L_25;
		uint8_t* L_28 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_28+(int32_t)2))));
		t723* L_29 = L_27;
		uint8_t* L_30 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_30+(int32_t)1))));
		t723* L_31 = L_29;
		uint8_t* L_32 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 7)) = (uint8_t)(*((uint8_t*)L_32));
		return L_31;
	}
}
extern MethodInfo m8250_MI;
extern "C" t723* m8250 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t723* L_0 = m8248(NULL, (uint8_t*)(uint8_t*)(&p0), &m8248_MI);
		return L_0;
	}
}
extern MethodInfo m8251_MI;
extern "C" t723* m8251 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t723* L_0 = m8248(NULL, (uint8_t*)(uint8_t*)(&p0), &m8248_MI);
		return L_0;
	}
}
extern MethodInfo m8252_MI;
extern "C" t723* m8252 (t9 * __this , double p0, MethodInfo* method)
{
	{
		t723* L_0 = m8249(NULL, (uint8_t*)(uint8_t*)(&p0), &m8249_MI);
		return L_0;
	}
}
extern "C" void m8253 (t9 * __this , uint8_t* p0, t723* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_1 = p0;
		t723* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t723* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		goto IL_0025;
	}

IL_0017:
	{
		uint8_t* L_9 = p0;
		t723* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		*((int8_t*)(L_9)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t723* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = L_15;
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
	}

IL_0025:
	{
		return;
	}
}
extern "C" void m8254 (t9 * __this , uint8_t* p0, t723* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		uint8_t* L_1 = p0;
		t723* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t723* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		uint8_t* L_9 = p0;
		t723* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_9+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t723* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
		goto IL_0049;
	}

IL_0029:
	{
		uint8_t* L_17 = p0;
		t723* L_18 = p1;
		int32_t L_19 = p2;
		int32_t L_20 = ((int32_t)((int32_t)L_19+(int32_t)3));
		*((int8_t*)(L_17)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_20));
		uint8_t* L_21 = p0;
		t723* L_22 = p1;
		int32_t L_23 = p2;
		int32_t L_24 = ((int32_t)((int32_t)L_23+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_21+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
		uint8_t* L_25 = p0;
		t723* L_26 = p1;
		int32_t L_27 = p2;
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_25+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_28));
		uint8_t* L_29 = p0;
		t723* L_30 = p1;
		int32_t L_31 = p2;
		int32_t L_32 = L_31;
		*((int8_t*)(((intptr_t)((intptr_t)L_29+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32));
	}

IL_0049:
	{
		return;
	}
}
extern "C" void m8255 (t9 * __this , uint8_t* p0, t723* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		uint8_t* L_1 = p0;
		int32_t L_2 = V_0;
		t723* L_3 = p1;
		int32_t L_4 = p2;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)((int32_t)L_4+(int32_t)L_5));
		*((int8_t*)(((intptr_t)((intptr_t)L_1+(int32_t)L_2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_6));
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0035;
	}

IL_001e:
	{
		V_1 = 0;
		goto IL_0031;
	}

IL_0022:
	{
		uint8_t* L_9 = p0;
		int32_t L_10 = V_1;
		t723* L_11 = p1;
		int32_t L_12 = p2;
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_12+(int32_t)((int32_t)((int32_t)7-(int32_t)L_13))));
		*((int8_t*)(((intptr_t)((intptr_t)L_9+(int32_t)L_10)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_14));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0022;
		}
	}

IL_0035:
	{
		return;
	}
}
extern MethodInfo m8256_MI;
extern "C" int16_t m8256 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		m8253(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8253_MI);
		int16_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8257_MI;
extern "C" int32_t m8257 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		m8254(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8254_MI);
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8258_MI;
extern "C" float m8258 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		m8254(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8254_MI);
		float L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8259_MI;
extern "C" double m8259 (t9 * __this , t723* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	{
		t723* L_0 = p0;
		int32_t L_1 = p1;
		m8255(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8255_MI);
		double L_2 = V_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8260_MI;


extern "C" void m8260 (t1647 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1635 * L_0 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8228(L_0, ((int32_t)160), &m8228_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m8261_MI;
extern "C" void m8261 (t1647 * __this, t2* p0, MethodInfo* method)
{
	{
		m8260(__this, &m8260_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m8262 (t1647 * __this, t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		t1635 * L_1 = (t1635 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1635_TI));
		m8230(L_1, L_0, &m8230_MI);
		m8263(__this, L_1, &m8263_MI);
		return;
	}
}
extern "C" void m8263 (t1647 * __this, t1635 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1635 * L_0 = p0;
		uint8_t L_1 = m8232(L_0, &m8232_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0022;
		}
	}
	{
		t1635 * L_2 = p0;
		int32_t L_3 = m8231(L_2, &m8231_MI);
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t1635 * L_4 = p0;
		int32_t L_5 = m8231(L_4, &m8231_MI);
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral801, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t1635 * L_7 = p0;
		t1635 * L_8 = m8242(L_7, 0, &m8242_MI);
		uint8_t L_9 = m8232(L_8, &m8232_MI);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0047;
		}
	}
	{
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_10, (t2*) &_stringLiteral802, &m2885_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0047:
	{
		t1635 * L_11 = p0;
		t1635 * L_12 = m8242(L_11, 0, &m8242_MI);
		t2* L_13 = m8246(NULL, L_12, &m8246_MI);
		__this->f0 = L_13;
		t1635 * L_14 = p0;
		int32_t L_15 = m8231(L_14, &m8231_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		t1635 * L_16 = p0;
		t1635 * L_17 = m8242(L_16, 1, &m8242_MI);
		uint8_t L_18 = m8232(L_17, &m8232_MI);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)160))))
		{
			goto IL_0080;
		}
	}
	{
		t556 * L_19 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_19, (t2*) &_stringLiteral803, &m2885_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0080:
	{
		t1635 * L_20 = p0;
		t1635 * L_21 = m8242(L_20, 1, &m8242_MI);
		__this->f1 = L_21;
	}

IL_008d:
	{
		return;
	}
}
extern "C" t1635 * m8264 (t1647 * __this, MethodInfo* method)
{
	{
		t1635 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8265_MI;
extern "C" void m8265 (t1647 * __this, t1635 * p0, MethodInfo* method)
{
	{
		t1635 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m8266 (t1647 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8267_MI;


extern "C" void m8267 (t1639 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" void m8268 (t1639 * __this, t1635 * p0, MethodInfo* method)
{
	t1635 * V_0 = {0};
	t1635 * V_1 = {0};
	t1635 * V_2 = {0};
	t1635 * V_3 = {0};
	{
		m8267(__this, &m8267_MI);
		t1635 * L_0 = p0;
		uint8_t L_1 = m8232(L_0, &m8232_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1635 * L_2 = p0;
		int32_t L_3 = m8231(L_2, &m8231_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral804, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0024:
	{
		t1635 * L_5 = p0;
		t1635 * L_6 = m8242(L_5, 0, &m8242_MI);
		uint8_t L_7 = m8232(L_6, &m8232_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral805, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t1635 * L_9 = p0;
		t1635 * L_10 = m8242(L_9, 0, &m8242_MI);
		t723* L_11 = m8234(L_10, &m8234_MI);
		int32_t L_12 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t1635 * L_13 = p0;
		t1635 * L_14 = m8242(L_13, 1, &m8242_MI);
		V_0 = L_14;
		t1635 * L_15 = V_0;
		uint8_t L_16 = m8232(L_15, &m8232_MI);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral806, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_006f:
	{
		t1635 * L_18 = V_0;
		t1635 * L_19 = m8242(L_18, 0, &m8242_MI);
		V_1 = L_19;
		t1635 * L_20 = V_1;
		uint8_t L_21 = m8232(L_20, &m8232_MI);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_008b;
		}
	}
	{
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_22, (t2*) &_stringLiteral807, &m2885_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		t1635 * L_23 = V_1;
		t2* L_24 = m8246(NULL, L_23, &m8246_MI);
		t1647 * L_25 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8261(L_25, L_24, &m8261_MI);
		__this->f1 = L_25;
		t1635 * L_26 = V_0;
		t1635 * L_27 = m8242(L_26, 1, &m8242_MI);
		V_2 = L_27;
		t1635 * L_28 = V_2;
		uint8_t L_29 = m8232(L_28, &m8232_MI);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)48))))
		{
			goto IL_00b9;
		}
	}
	{
		t556 * L_30 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_30, (t2*) &_stringLiteral808, &m2885_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00b9:
	{
		t1635 * L_31 = V_2;
		t1635 * L_32 = m8242(L_31, 0, &m8242_MI);
		t2* L_33 = m8246(NULL, L_32, &m8246_MI);
		t1647 * L_34 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8261(L_34, L_33, &m8261_MI);
		__this->f2 = L_34;
		t1647 * L_35 = (__this->f2);
		t1635 * L_36 = V_2;
		t1635 * L_37 = m8242(L_36, 1, &m8242_MI);
		m8265(L_35, L_37, &m8265_MI);
		t1635 * L_38 = V_0;
		t1635 * L_39 = m8242(L_38, 2, &m8242_MI);
		V_3 = L_39;
		t1635 * L_40 = V_3;
		uint8_t L_41 = m8232(L_40, &m8232_MI);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)128))))
		{
			goto IL_0102;
		}
	}
	{
		t556 * L_42 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_42, (t2*) &_stringLiteral809, &m2885_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_0102:
	{
		t1635 * L_43 = V_3;
		t723* L_44 = m8234(L_43, &m8234_MI);
		__this->f3 = L_44;
		return;
	}
}
extern "C" t1647 * m8269 (t1639 * __this, MethodInfo* method)
{
	{
		t1647 * L_0 = (__this->f2);
		return L_0;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8270 (t1639 * __this, MethodInfo* method)
{
	static bool m8270_init;
	if (!m8270_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8270_init = true;
	}
	{
		t723* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t723*)NULL;
	}

IL_000a:
	{
		t723* L_1 = (__this->f3);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_1);
		return ((t723*)Castclass(L_2, t723_TI_var));
	}
}
#include "t1648.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1648_TI;
#include "t1648MD.h"



#include "t1649.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1649_TI;
#include "t1649MD.h"

#include "t1620MD.h"
extern MethodInfo m8274_MI;
extern MethodInfo m8029_MI;
extern MethodInfo m8276_MI;
extern MethodInfo m8278_MI;
extern MethodInfo m5868_MI;
extern MethodInfo m8027_MI;
extern MethodInfo m8275_MI;


extern MethodInfo m8271_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8271 (t1649 * __this, t723* p0, MethodInfo* method)
{
	static bool m8271_init;
	if (!m8271_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8271_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		t723* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1353, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t723* L_2 = p0;
		if ((!(((uint32_t)(((int32_t)(((t121 *)L_2)->max_length)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0048;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_002b;
	}

IL_0021:
	{
		int32_t L_3 = V_1;
		t723* L_4 = p0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = L_6;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_7))));
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		t723* L_9 = p0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0046;
		}
	}
	{
		t723* L_11 = p0;
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_11);
		__this->f1 = ((t723*)Castclass(L_12, t723_TI_var));
	}

IL_0046:
	{
		goto IL_0067;
	}

IL_0048:
	{
		t723* L_13 = p0;
		t1208 * L_14 = m8027(NULL, L_13, &m8027_MI);
		m8275(__this, L_14, &m8275_MI);
		t1208 * L_15 = (__this->f0);
		if (L_15)
		{
			goto IL_0067;
		}
	}
	{
		t556 * L_16 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_16, (t2*) &_stringLiteral1354, &m2885_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0067:
	{
		return;
	}
}
extern MethodInfo m8272_MI;
extern "C" void m8272 (t1649 * __this, t1208 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1208 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1317, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1208 * L_2 = p0;
		m8275(__this, L_2, &m8275_MI);
		return;
	}
}
extern MethodInfo m8273_MI;
extern "C" void m8273 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f4 = L_0;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f5 = 0;
		return;
	}
}
extern "C" void m8274 (t1649 * __this, MethodInfo* method)
{
	{
		__this->f1 = (t723*)NULL;
		__this->f2 = (t723*)NULL;
		return;
	}
}
extern "C" void m8275 (t1649 * __this, t1208 * p0, MethodInfo* method)
{
	{
		t1208 * L_0 = p0;
		__this->f0 = L_0;
		m8274(__this, &m8274_MI);
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m8276 (t1649 * __this, MethodInfo* method)
{
	static bool m8276_init;
	if (!m8276_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8276_init = true;
	}
	t723* V_0 = {0};
	t723* V_1 = {0};
	{
		t723* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_00f6;
		}
	}
	{
		t1208 * L_1 = (__this->f0);
		t723* L_2 = m8029(NULL, L_1, 0, &m8029_MI);
		V_0 = L_2;
		t1208 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5817_MI, L_3);
		__this->f1 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)((int32_t)((int32_t)32)+(int32_t)((int32_t)((int32_t)L_4>>(int32_t)3))))));
		t723* L_5 = (__this->f1);
		t723* L_6 = V_0;
		int32_t L_7 = 4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7));
		t723* L_8 = (__this->f1);
		t723* L_9 = V_0;
		int32_t L_10 = 5;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t723* L_11 = (__this->f1);
		t723* L_12 = V_0;
		int32_t L_13 = 6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13));
		t723* L_14 = (__this->f1);
		t723* L_15 = V_0;
		int32_t L_16 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 3)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t723* L_17 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 4)) = (uint8_t)4;
		t723* L_18 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 5)) = (uint8_t)((int32_t)128);
		t723* L_19 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 6)) = (uint8_t)0;
		t723* L_20 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 7)) = (uint8_t)0;
		t723* L_21 = (__this->f1);
		t723* L_22 = m8250(NULL, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)((int32_t)12))), &m8250_MI);
		V_1 = L_22;
		t723* L_23 = (__this->f1);
		t723* L_24 = V_1;
		int32_t L_25 = 0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 8)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25));
		t723* L_26 = (__this->f1);
		t723* L_27 = V_1;
		int32_t L_28 = 1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)9))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28));
		t723* L_29 = (__this->f1);
		t723* L_30 = V_1;
		int32_t L_31 = 2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, ((int32_t)10))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31));
		t723* L_32 = (__this->f1);
		t723* L_33 = V_1;
		int32_t L_34 = 3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, ((int32_t)11))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_34));
		t723* L_35 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)12))) = (uint8_t)6;
		t723* L_36 = V_0;
		t723* L_37 = (__this->f1);
		t723* L_38 = (__this->f1);
		m5764(NULL, (t121 *)(t121 *)L_36, 1, (t121 *)(t121 *)L_37, ((int32_t)13), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_38)->max_length)))-(int32_t)((int32_t)13))), &m5764_MI);
		t723* L_39 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)23))) = (uint8_t)((int32_t)49);
	}

IL_00f6:
	{
		t723* L_40 = (__this->f1);
		t9 * L_41 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_40);
		return ((t723*)Castclass(L_41, t723_TI_var));
	}
}
extern MethodInfo m8277_MI;
extern TypeInfo* t723_TI_var;
extern "C" t723* m8277 (t1649 * __this, MethodInfo* method)
{
	static bool m8277_init;
	if (!m8277_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8277_init = true;
	}
	t723* V_0 = {0};
	t1359 * V_1 = {0};
	t723* V_2 = {0};
	{
		t723* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		t723* L_1 = m8276(__this, &m8276_MI);
		V_0 = L_1;
		t723* L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (t723*)NULL;
	}

IL_0014:
	{
		t2* L_3 = m8278(__this, &m8278_MI);
		t1359 * L_4 = m6884(NULL, L_3, &m6884_MI);
		V_1 = L_4;
		t1359 * L_5 = V_1;
		t723* L_6 = V_0;
		t723* L_7 = m5868(L_5, L_6, &m5868_MI);
		V_2 = L_7;
		__this->f2 = ((t723*)SZArrayNew(t723_TI_var, 8));
		t723* L_8 = V_2;
		t723* L_9 = V_2;
		t723* L_10 = (__this->f2);
		m5764(NULL, (t121 *)(t121 *)L_8, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_10, 0, 8, &m5764_MI);
		t723* L_11 = (__this->f2);
		m6907(NULL, (t121 *)(t121 *)L_11, 0, 8, &m6907_MI);
	}

IL_0054:
	{
		t723* L_12 = (__this->f2);
		t9 * L_13 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_12);
		return ((t723*)Castclass(L_13, t723_TI_var));
	}
}
extern "C" t2* m8278 (t1649 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->f3 = (t2*) &_stringLiteral888;
	}

IL_0013:
	{
		t2* L_1 = (__this->f3);
		return L_1;
	}
}
#include "t1650.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1650_TI;
#include "t1650MD.h"

#include "t870.h"
#include "t1651.h"
#include "t880.h"
#include "t1656.h"
#include "t1652.h"
extern TypeInfo t870_TI;
extern TypeInfo t880_TI;
extern TypeInfo t1651_TI;
extern TypeInfo t1653_TI;
#include "t1652MD.h"
#include "t870MD.h"
#include "t880MD.h"
#include "t1651MD.h"
extern MethodInfo m8295_MI;
extern MethodInfo m4470_MI;
extern MethodInfo m4212_MI;
extern MethodInfo m4253_MI;
extern MethodInfo m8308_MI;
extern MethodInfo m10689_MI;
extern MethodInfo m4644_MI;
extern MethodInfo m10696_MI;
extern MethodInfo m4208_MI;
extern MethodInfo m11959_MI;
extern MethodInfo m11960_MI;
extern MethodInfo m11961_MI;
extern MethodInfo m10697_MI;
extern MethodInfo m10695_MI;
extern MethodInfo m4645_MI;
extern MethodInfo m10694_MI;


extern MethodInfo m8279_MI;
extern "C" void m8279 (t1650 * __this, MethodInfo* method)
{
	{
		m8295(__this, &m8295_MI);
		t870 * L_0 = (t870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t870_TI));
		m4470(L_0, &m4470_MI);
		__this->f15 = L_0;
		return;
	}
}
extern MethodInfo m8280_MI;
extern "C" void m8280 (t1650 * __this, t2* p0, MethodInfo* method)
{
	{
		__this->f13 = (t1651 *)NULL;
		t870 * L_0 = (__this->f15);
		VirtActionInvoker0::Invoke(&m4212_MI, L_0);
		t2* L_1 = p0;
		t880 * L_2 = (t880 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t880_TI));
		m4253(L_2, L_1, &m4253_MI);
		m8308(__this, L_2, __this, &m8308_MI);
		return;
	}
}
extern MethodInfo m8281_MI;
extern "C" t1651 * m8281 (t1650 * __this, MethodInfo* method)
{
	{
		t1651 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8282_MI;
extern "C" void m8282 (t1650 * __this, t1652 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8283_MI;
extern "C" void m8283 (t1650 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8284_MI;
extern "C" void m8284 (t1650 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8285_MI;
extern "C" void m8285 (t1650 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1651 * V_0 = {0};
	t1651 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t1651 * L_1 = (t1651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1651_TI));
		m10689(L_1, L_0, &m10689_MI);
		V_0 = L_1;
		t1651 * L_2 = (__this->f13);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		t1651 * L_3 = V_0;
		__this->f13 = L_3;
		t1651 * L_4 = V_0;
		__this->f14 = L_4;
		goto IL_0037;
	}

IL_001f:
	{
		t870 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4644_MI, L_5);
		V_1 = ((t1651 *)Castclass(L_6, InitializedTypeInfo(&t1651_TI)));
		t1651 * L_7 = V_1;
		t1651 * L_8 = V_0;
		m10696(L_7, L_8, &m10696_MI);
	}

IL_0037:
	{
		t870 * L_9 = (__this->f15);
		t1651 * L_10 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_9, L_10);
		t1651 * L_11 = V_0;
		__this->f14 = L_11;
		t9 * L_12 = p1;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m11959_MI, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_0077;
	}

IL_0055:
	{
		t1651 * L_14 = (__this->f14);
		t9 * L_15 = p1;
		int32_t L_16 = V_3;
		t2* L_17 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m11960_MI, L_15, L_16);
		t9 * L_18 = p1;
		int32_t L_19 = V_3;
		t2* L_20 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m11961_MI, L_18, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t2* L_21 = m10697(NULL, L_20, &m10697_MI);
		m10695(L_14, L_17, L_21, &m10695_MI);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0077:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0055;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8286_MI;
extern "C" void m8286 (t1650 * __this, t2* p0, MethodInfo* method)
{
	{
		t870 * L_0 = (__this->f15);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4645_MI, L_0);
		__this->f14 = ((t1651 *)Castclass(L_1, InitializedTypeInfo(&t1651_TI)));
		return;
	}
}
extern MethodInfo m8287_MI;
extern "C" void m8287 (t1650 * __this, t2* p0, MethodInfo* method)
{
	{
		t1651 * L_0 = (__this->f14);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t2* L_2 = m10697(NULL, L_1, &m10697_MI);
		m10694(L_0, L_2, &m10694_MI);
		return;
	}
}
extern MethodInfo m8288_MI;
extern "C" void m8288 (t1650 * __this, t1652 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1654_TI;
#include "t1654MD.h"

extern MethodInfo m5850_MI;


extern MethodInfo m8289_MI;
extern "C" void m8289 (t1654 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		__this->f0 = L_0;
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		__this->f1 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8290_MI;
extern "C" int32_t m8290 (t1654 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8291_MI;
extern "C" t2* m8291 (t1654 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8292_MI;
extern "C" t2* m8292 (t1654 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f1);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8293_MI;
extern "C" void m8293 (t1654 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(&m5850_MI, L_0);
		t1161 * L_1 = (__this->f1);
		VirtActionInvoker0::Invoke(&m5850_MI, L_1);
		return;
	}
}
extern MethodInfo m8294_MI;
extern "C" void m8294 (t1654 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f0);
		t2* L_1 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_0, L_1);
		t1161 * L_2 = (__this->f1);
		t2* L_3 = p1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_2, L_3);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1652_TI;

#include "t1657.h"
#include "t1276.h"
extern TypeInfo t1657_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t1655_TI;
#include "t1657MD.h"
#include "t296MD.h"
#include "t1656MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m4330_MI;
extern MethodInfo m8318_MI;
extern MethodInfo m4640_MI;
extern MethodInfo m4643_MI;
extern MethodInfo m7352_MI;
extern MethodInfo m8296_MI;
extern MethodInfo m5899_MI;
extern MethodInfo m8302_MI;
extern MethodInfo m8304_MI;
extern MethodInfo m8303_MI;
extern MethodInfo m8299_MI;
extern MethodInfo m9016_MI;
extern MethodInfo m9017_MI;
extern MethodInfo m8297_MI;
extern MethodInfo m1190_MI;
extern MethodInfo m8313_MI;
extern MethodInfo m5961_MI;
extern MethodInfo m8298_MI;
extern MethodInfo m5912_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m11962_MI;
extern MethodInfo m8310_MI;
extern MethodInfo m8311_MI;
extern MethodInfo m11963_MI;
extern MethodInfo m8309_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m8301_MI;
extern MethodInfo m8307_MI;
extern MethodInfo m8305_MI;
extern MethodInfo m8316_MI;
extern MethodInfo m8317_MI;
extern MethodInfo m8300_MI;
extern MethodInfo m8306_MI;
extern MethodInfo m11964_MI;
extern MethodInfo m11965_MI;
extern MethodInfo m8315_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m8312_MI;
extern MethodInfo m11967_MI;
extern MethodInfo m11968_MI;
extern MethodInfo m8314_MI;
extern MethodInfo m331_MI;


extern TypeInfo* t305_TI_var;
extern "C" void m8295 (t1652 * __this, MethodInfo* method)
{
	static bool m8295_init;
	if (!m8295_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8295_init = true;
	}
	{
		t870 * L_0 = (t870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t870_TI));
		m4470(L_0, &m4470_MI);
		__this->f2 = L_0;
		t870 * L_1 = (t870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t870_TI));
		m4470(L_1, &m4470_MI);
		__this->f3 = L_1;
		t315 * L_2 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_2, ((int32_t)200), &m4330_MI);
		__this->f5 = L_2;
		__this->f6 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)30)));
		t1654 * L_3 = (t1654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1654_TI));
		m8289(L_3, &m8289_MI);
		__this->f8 = L_3;
		__this->f9 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" t138 * m8296 (t1652 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = (__this->f9);
		int32_t L_2 = (__this->f10);
		t1657 * L_3 = (t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1657_TI));
		m8318(L_3, L_0, L_1, L_2, &m8318_MI);
		return L_3;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t138 * m8297 (t1652 * __this, MethodInfo* method)
{
	static bool m8297_init;
	if (!m8297_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8297_init = true;
	}
	t221* V_0 = {0};
	{
		t870 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4640_MI, L_0);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, L_1));
		t870 * L_2 = (__this->f2);
		t221* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m4643_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t221* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m7352(NULL, (t2*) &_stringLiteral342, L_4, &m7352_MI);
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral1355, L_5, &m590_MI);
		t138 * L_7 = m8296(__this, L_6, &m8296_MI);
		return L_7;
	}
}
extern "C" bool m8298 (t1652 * __this, uint16_t p0, bool p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = {0};
	{
		uint16_t L_0 = p0;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)45))))
		{
			goto IL_001a;
		}
	}
	{
		uint16_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)46))))
		{
			goto IL_001a;
		}
	}
	{
		uint16_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)58))))
		{
			goto IL_0018;
		}
	}
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)95))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_001f;
	}

IL_0018:
	{
		return 1;
	}

IL_001a:
	{
		bool L_5 = p1;
		return ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		uint16_t L_6 = p0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0057;
		}
	}
	{
		uint16_t L_7 = p0;
		V_0 = L_7;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1765))))
		{
			goto IL_0043;
		}
	}
	{
		uint16_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1766))))
		{
			goto IL_0043;
		}
	}
	{
		uint16_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1369))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0045;
	}

IL_0043:
	{
		return 1;
	}

IL_0045:
	{
		uint16_t L_11 = p0;
		if ((((int32_t)((int32_t)699)) > ((int32_t)L_11)))
		{
			goto IL_0057;
		}
	}
	{
		uint16_t L_12 = p0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)705))))
		{
			goto IL_0057;
		}
	}
	{
		return 1;
	}

IL_0057:
	{
		uint16_t L_13 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		int32_t L_14 = m5899(NULL, L_13, &m5899_MI);
		V_1 = L_14;
		int32_t L_15 = V_1;
		if (L_15 == 0)
		{
			goto IL_008e;
		}
		if (L_15 == 1)
		{
			goto IL_008e;
		}
		if (L_15 == 2)
		{
			goto IL_008e;
		}
		if (L_15 == 3)
		{
			goto IL_0090;
		}
		if (L_15 == 4)
		{
			goto IL_008e;
		}
		if (L_15 == 5)
		{
			goto IL_0090;
		}
		if (L_15 == 6)
		{
			goto IL_0090;
		}
		if (L_15 == 7)
		{
			goto IL_0090;
		}
		if (L_15 == 8)
		{
			goto IL_0090;
		}
		if (L_15 == 9)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_0095;
	}

IL_008e:
	{
		return 1;
	}

IL_0090:
	{
		bool L_16 = p1;
		return ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
	}

IL_0095:
	{
		return 0;
	}
}
extern "C" bool m8299 (t1652 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0026;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0026;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_001f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_001f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0026;
		}
	}

IL_001f:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0028;
	}

IL_0026:
	{
		return 1;
	}

IL_0028:
	{
		return 0;
	}
}
extern "C" void m8300 (t1652 * __this, MethodInfo* method)
{
	{
		m8302(__this, 0, &m8302_MI);
		return;
	}
}
extern "C" void m8301 (t1652 * __this, MethodInfo* method)
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		t315 * L_0 = (__this->f5);
		int32_t L_1 = m8304(__this, &m8304_MI);
		m2733(L_0, (((uint16_t)L_1)), &m2733_MI);
	}

IL_0015:
	{
		int32_t L_2 = m8303(__this, &m8303_MI);
		bool L_3 = m8299(__this, L_2, &m8299_MI);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		__this->f7 = 0;
	}

IL_003d:
	{
		return;
	}
}
extern "C" void m8302 (t1652 * __this, bool p0, MethodInfo* method)
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0024;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_002b;
		}
	}

IL_0024:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_003c;
	}

IL_002b:
	{
		m8304(__this, &m8304_MI);
		bool L_3 = p0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		p0 = 0;
	}

IL_003a:
	{
		goto IL_0000;
	}

IL_003c:
	{
		bool L_4 = p0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		t138 * L_5 = m8296(__this, (t2*) &_stringLiteral1356, &m8296_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004b:
	{
		return;
	}
	// Dead block : IL_004c: br.s IL_0000
}
extern "C" int32_t m8303 (t1652 * __this, MethodInfo* method)
{
	{
		t1656 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9016_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m8304 (t1652 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1656 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9017_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0018;
		}
	}
	{
		__this->f11 = 1;
	}

IL_0018:
	{
		bool L_3 = (__this->f11);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4 = (__this->f9);
		__this->f9 = ((int32_t)((int32_t)L_4+(int32_t)1));
		__this->f11 = 0;
		__this->f10 = 1;
		goto IL_004c;
	}

IL_003e:
	{
		int32_t L_5 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
extern "C" void m8305 (t1652 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = m8304(__this, &m8304_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_2 = m8297(__this, &m8297_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = p0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_5 = p0;
		uint16_t L_6 = (((uint16_t)L_5));
		t9 * L_7 = Box(InitializedTypeInfo(&t296_TI), &L_6);
		int32_t L_8 = V_0;
		uint16_t L_9 = (((uint16_t)L_8));
		t9 * L_10 = Box(InitializedTypeInfo(&t296_TI), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m1190(NULL, (t2*) &_stringLiteral1357, L_7, L_10, &m1190_MI);
		t138 * L_12 = m8296(__this, L_11, &m8296_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0035:
	{
		return;
	}
}
extern "C" t2* m8306 (t1652 * __this, uint16_t p0, bool p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	t2* V_1 = {0};

IL_0000:
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t138 * L_1 = m8297(__this, &m8297_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int32_t L_2 = m8304(__this, &m8304_MI);
		V_0 = (((uint16_t)L_2));
		uint16_t L_3 = V_0;
		uint16_t L_4 = p0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_003d;
	}

IL_001e:
	{
		bool L_5 = p1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		uint16_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_002e;
		}
	}
	{
		m8313(__this, &m8313_MI);
		goto IL_003b;
	}

IL_002e:
	{
		t315 * L_7 = (__this->f5);
		uint16_t L_8 = V_0;
		m2733(L_7, L_8, &m2733_MI);
	}

IL_003b:
	{
		goto IL_0000;
	}

IL_003d:
	{
		t315 * L_9 = (__this->f5);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_9);
		V_1 = L_10;
		t315 * L_11 = (__this->f5);
		m5961(L_11, 0, &m5961_MI);
		t2* L_12 = V_1;
		return L_12;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" t2* m8307 (t1652 * __this, MethodInfo* method)
{
	static bool m8307_init;
	if (!m8307_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8307_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	t305* V_3 = {0};
	{
		V_0 = 0;
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8303(__this, &m8303_MI);
		bool L_2 = m8298(__this, (((uint16_t)L_1)), 1, &m8298_MI);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		t138 * L_3 = m8296(__this, (t2*) &_stringLiteral1358, &m8296_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m8303(__this, &m8303_MI);
		V_1 = L_4;
		goto IL_0082;
	}

IL_0030:
	{
		int32_t L_5 = V_1;
		V_2 = (((uint16_t)L_5));
		uint16_t L_6 = V_2;
		bool L_7 = m8298(__this, L_6, 0, &m8298_MI);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0086;
	}

IL_003f:
	{
		int32_t L_8 = V_0;
		t305* L_9 = (__this->f6);
		if ((!(((uint32_t)L_8) == ((uint32_t)(((int32_t)(((t121 *)L_9)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = V_0;
		V_3 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)((int32_t)L_10*(int32_t)2))));
		t305* L_11 = (__this->f6);
		t305* L_12 = V_3;
		int32_t L_13 = V_0;
		m5912(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, L_13, &m5912_MI);
		t305* L_14 = V_3;
		__this->f6 = L_14;
	}

IL_0067:
	{
		t305* L_15 = (__this->f6);
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
		uint16_t L_18 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_17)) = (uint16_t)L_18;
		m8304(__this, &m8304_MI);
		int32_t L_19 = m8303(__this, &m8303_MI);
		V_1 = L_19;
	}

IL_0082:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_0086:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		t138 * L_22 = m8296(__this, (t2*) &_stringLiteral1359, &m8296_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0095:
	{
		t305* L_23 = (__this->f6);
		int32_t L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_25 = m4353(L_25, L_23, 0, L_24, &m4333_MI);
		return L_25;
	}
}
extern "C" void m8308 (t1652 * __this, t1656 * p0, t9 * p1, MethodInfo* method)
{
	{
		t1656 * L_0 = p0;
		__this->f1 = L_0;
		t9 * L_1 = p1;
		__this->f0 = L_1;
		t9 * L_2 = p1;
		InterfaceActionInvoker1< t1652 * >::Invoke(&m11962_MI, L_2, __this);
		goto IL_001d;
	}

IL_0017:
	{
		m8310(__this, &m8310_MI);
	}

IL_001d:
	{
		int32_t L_3 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		m8311(__this, &m8311_MI);
		t870 * L_4 = (__this->f2);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4640_MI, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t870 * L_6 = (__this->f2);
		t9 * L_7 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4644_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m590(NULL, (t2*) &_stringLiteral1360, L_7, &m590_MI);
		t138 * L_9 = m8296(__this, L_8, &m8296_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0056:
	{
		t9 * L_10 = p1;
		InterfaceActionInvoker1< t1652 * >::Invoke(&m11963_MI, L_10, __this);
		m8309(__this, &m8309_MI);
		return;
	}
}
extern "C" void m8309 (t1652 * __this, MethodInfo* method)
{
	{
		__this->f9 = 1;
		__this->f10 = 0;
		__this->f0 = (t9 *)NULL;
		__this->f1 = (t1656 *)NULL;
		t870 * L_0 = (__this->f2);
		VirtActionInvoker0::Invoke(&m4212_MI, L_0);
		t870 * L_1 = (__this->f3);
		VirtActionInvoker0::Invoke(&m4212_MI, L_1);
		t1654 * L_2 = (__this->f8);
		m8293(L_2, &m8293_MI);
		t315 * L_3 = (__this->f5);
		m5961(L_3, 0, &m5961_MI);
		__this->f4 = (t2*)NULL;
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8310 (t1652 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		bool L_1 = m8299(__this, L_0, &m8299_MI);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		t315 * L_2 = (__this->f5);
		int32_t L_3 = m5856(L_2, &m5856_MI);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		__this->f7 = 1;
	}

IL_0022:
	{
		m8301(__this, &m8301_MI);
	}

IL_0028:
	{
		int32_t L_4 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0287;
		}
	}
	{
		m8304(__this, &m8304_MI);
		int32_t L_5 = m8303(__this, &m8303_MI);
		V_3 = L_5;
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)33))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)63))))
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_01f0;
	}

IL_005d:
	{
		m8304(__this, &m8304_MI);
		int32_t L_9 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a2;
		}
	}
	{
		m8304(__this, &m8304_MI);
		t2* L_10 = m8307(__this, &m8307_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_11 = m2713(NULL, L_10, (t2*) &_stringLiteral1361, &m2713_MI);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		t138 * L_12 = m8296(__this, (t2*) &_stringLiteral1362, &m8296_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0093:
	{
		m8305(__this, ((int32_t)91), &m8305_MI);
		m8316(__this, &m8316_MI);
		return;
	}

IL_00a2:
	{
		int32_t L_13 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00b3;
		}
	}
	{
		m8317(__this, &m8317_MI);
		return;
	}

IL_00b3:
	{
		t2* L_14 = m8307(__this, &m8307_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2713(NULL, L_14, (t2*) &_stringLiteral1363, &m2713_MI);
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		t138 * L_16 = m8296(__this, (t2*) &_stringLiteral1364, &m8296_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00d1:
	{
		t138 * L_17 = m8296(__this, (t2*) &_stringLiteral1365, &m8296_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00dd:
	{
		m8311(__this, &m8311_MI);
		m8304(__this, &m8304_MI);
		t2* L_18 = m8307(__this, &m8307_MI);
		V_0 = L_18;
		m8300(__this, &m8300_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_1 = L_19;
		int32_t L_20 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)63))))
		{
			goto IL_0131;
		}
	}

IL_0107:
	{
		t2* L_21 = V_1;
		t2* L_22 = m8306(__this, ((int32_t)63), 0, &m8306_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, L_21, L_22, &m610_MI);
		V_1 = L_23;
		int32_t L_24 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_0131;
	}

IL_0123:
	{
		t2* L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = m610(NULL, L_25, (t2*) &_stringLiteral1366, &m610_MI);
		V_1 = L_26;
		goto IL_0107;
	}

IL_0131:
	{
		t9 * L_27 = (__this->f0);
		t2* L_28 = V_0;
		t2* L_29 = V_1;
		InterfaceActionInvoker2< t2*, t2* >::Invoke(&m11964_MI, L_27, L_28, L_29);
		m8305(__this, ((int32_t)62), &m8305_MI);
		return;
	}

IL_0147:
	{
		m8311(__this, &m8311_MI);
		t870 * L_30 = (__this->f2);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4640_MI, L_30);
		if (L_31)
		{
			goto IL_0161;
		}
	}
	{
		t138 * L_32 = m8297(__this, &m8297_MI);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_0161:
	{
		m8304(__this, &m8304_MI);
		t2* L_33 = m8307(__this, &m8307_MI);
		V_0 = L_33;
		m8300(__this, &m8300_MI);
		t870 * L_34 = (__this->f2);
		t9 * L_35 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4645_MI, L_34);
		V_2 = ((t2*)Castclass(L_35, (&t2_TI)));
		t870 * L_36 = (__this->f3);
		VirtFuncInvoker0< t9 * >::Invoke(&m4645_MI, L_36);
		t870 * L_37 = (__this->f3);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4640_MI, L_37);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01b8;
		}
	}
	{
		t870 * L_39 = (__this->f3);
		t9 * L_40 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4644_MI, L_39);
		__this->f4 = ((t2*)Castclass(L_40, (&t2_TI)));
		goto IL_01bf;
	}

IL_01b8:
	{
		__this->f4 = (t2*)NULL;
	}

IL_01bf:
	{
		t2* L_41 = V_0;
		t2* L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_43 = m2713(NULL, L_41, L_42, &m2713_MI);
		if (!L_43)
		{
			goto IL_01db;
		}
	}
	{
		t2* L_44 = V_2;
		t2* L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_46 = m1190(NULL, (t2*) &_stringLiteral1367, L_44, L_45, &m1190_MI);
		t138 * L_47 = m8296(__this, L_46, &m8296_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_01db:
	{
		t9 * L_48 = (__this->f0);
		t2* L_49 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m11965_MI, L_48, L_49);
		m8305(__this, ((int32_t)62), &m8305_MI);
		return;
	}

IL_01f0:
	{
		m8311(__this, &m8311_MI);
		t2* L_50 = m8307(__this, &m8307_MI);
		V_0 = L_50;
		goto IL_020b;
	}

IL_01ff:
	{
		t1654 * L_51 = (__this->f8);
		m8315(__this, L_51, &m8315_MI);
	}

IL_020b:
	{
		int32_t L_52 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_52) == ((int32_t)((int32_t)62))))
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_53 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01ff;
		}
	}

IL_021f:
	{
		t9 * L_54 = (__this->f0);
		t2* L_55 = V_0;
		t1654 * L_56 = (__this->f8);
		InterfaceActionInvoker2< t2*, t9 * >::Invoke(&m11966_MI, L_54, L_55, L_56);
		t1654 * L_57 = (__this->f8);
		m8293(L_57, &m8293_MI);
		m8300(__this, &m8300_MI);
		int32_t L_58 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0261;
		}
	}
	{
		m8304(__this, &m8304_MI);
		t9 * L_59 = (__this->f0);
		t2* L_60 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m11965_MI, L_59, L_60);
		goto IL_027e;
	}

IL_0261:
	{
		t870 * L_61 = (__this->f2);
		t2* L_62 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_61, L_62);
		t870 * L_63 = (__this->f3);
		t2* L_64 = (__this->f4);
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_63, L_64);
	}

IL_027e:
	{
		m8305(__this, ((int32_t)62), &m8305_MI);
		return;
	}

IL_0287:
	{
		m8312(__this, &m8312_MI);
		return;
	}
}
extern "C" void m8311 (t1652 * __this, MethodInfo* method)
{
	{
		t315 * L_0 = (__this->f5);
		int32_t L_1 = m5856(L_0, &m5856_MI);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		bool L_2 = (__this->f7);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		t9 * L_3 = (__this->f0);
		t315 * L_4 = (__this->f5);
		t2* L_5 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_4);
		InterfaceActionInvoker1< t2* >::Invoke(&m11967_MI, L_3, L_5);
		goto IL_0044;
	}

IL_002e:
	{
		t9 * L_6 = (__this->f0);
		t315 * L_7 = (__this->f5);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_7);
		InterfaceActionInvoker1< t2* >::Invoke(&m11968_MI, L_6, L_8);
	}

IL_0044:
	{
		t315 * L_9 = (__this->f5);
		m5961(L_9, 0, &m5961_MI);
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8312 (t1652 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->f7 = 0;
	}

IL_0007:
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)38))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0031;
	}

IL_0020:
	{
		return;
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		m8304(__this, &m8304_MI);
		m8313(__this, &m8313_MI);
		goto IL_0007;
	}

IL_0031:
	{
		t315 * L_5 = (__this->f5);
		int32_t L_6 = m8304(__this, &m8304_MI);
		m2733(L_5, (((uint16_t)L_6)), &m2733_MI);
		goto IL_0007;
	}
	// Dead block : IL_0046: br.s IL_0007
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m8313 (t1652 * __this, MethodInfo* method)
{
	static bool m8313_init;
	if (!m8313_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m8313_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t713 * V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_001d;
		}
	}
	{
		m8304(__this, &m8304_MI);
		m8314(__this, &m8314_MI);
		goto IL_010b;
	}

IL_001d:
	{
		t2* L_1 = m8307(__this, &m8307_MI);
		V_0 = L_1;
		m8305(__this, ((int32_t)59), &m8305_MI);
		t2* L_2 = V_0;
		V_1 = L_2;
		t2* L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		t713 * L_4 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12;
		if (L_4)
		{
			goto IL_0084;
		}
	}
	{
		t713 * L_5 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_5, 5, m5747_MI_var);
		V_2 = L_5;
		t713 * L_6 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral1368, 0);
		t713 * L_7 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral1369, 1);
		t713 * L_8 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral1370, 2);
		t713 * L_9 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_9, (t2*) &_stringLiteral1371, 3);
		t713 * L_10 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_10, (t2*) &_stringLiteral1372, 4);
		t713 * L_11 = V_2;
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12 = L_11;
	}

IL_0084:
	{
		t713 * L_12 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12;
		t2* L_13 = V_1;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_00af;
		}
		if (L_15 == 1)
		{
			goto IL_00bf;
		}
		if (L_15 == 2)
		{
			goto IL_00cf;
		}
		if (L_15 == 3)
		{
			goto IL_00df;
		}
		if (L_15 == 4)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_00ff;
	}

IL_00af:
	{
		t315 * L_16 = (__this->f5);
		m2733(L_16, ((int32_t)38), &m2733_MI);
		goto IL_010b;
	}

IL_00bf:
	{
		t315 * L_17 = (__this->f5);
		m2733(L_17, ((int32_t)34), &m2733_MI);
		goto IL_010b;
	}

IL_00cf:
	{
		t315 * L_18 = (__this->f5);
		m2733(L_18, ((int32_t)39), &m2733_MI);
		goto IL_010b;
	}

IL_00df:
	{
		t315 * L_19 = (__this->f5);
		m2733(L_19, ((int32_t)60), &m2733_MI);
		goto IL_010b;
	}

IL_00ef:
	{
		t315 * L_20 = (__this->f5);
		m2733(L_20, ((int32_t)62), &m2733_MI);
		goto IL_010b;
	}

IL_00ff:
	{
		t138 * L_21 = m8296(__this, (t2*) &_stringLiteral1373, &m8296_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_010b:
	{
		return;
	}
}
extern "C" int32_t m8314 (t1652 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_0083;
		}
	}
	{
		m8304(__this, &m8304_MI);
		int32_t L_1 = m8303(__this, &m8303_MI);
		V_1 = L_1;
		goto IL_007d;
	}

IL_001f:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)57))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4+(int32_t)L_5))-(int32_t)((int32_t)48)))&(int32_t)((int32_t)31)))));
		goto IL_006f;
	}

IL_0037:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)((int32_t)L_8<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4+(int32_t)L_9))-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)))&(int32_t)((int32_t)31)))));
		goto IL_006f;
	}

IL_0052:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_10)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)102))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_0 = ((int32_t)((int32_t)L_12<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4+(int32_t)L_13))-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)))&(int32_t)((int32_t)31)))));
		goto IL_006f;
	}

IL_006d:
	{
		goto IL_0081;
	}

IL_006f:
	{
		m8304(__this, &m8304_MI);
		int32_t L_14 = m8303(__this, &m8303_MI);
		V_1 = L_14;
	}

IL_007d:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}

IL_0081:
	{
		goto IL_00b8;
	}

IL_0083:
	{
		int32_t L_16 = m8303(__this, &m8303_MI);
		V_2 = L_16;
		goto IL_00b4;
	}

IL_008c:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_17)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)57))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		V_0 = ((int32_t)((int32_t)L_19<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4+(int32_t)L_20))-(int32_t)((int32_t)48)))&(int32_t)((int32_t)31)))));
		goto IL_00a6;
	}

IL_00a4:
	{
		goto IL_00b8;
	}

IL_00a6:
	{
		m8304(__this, &m8304_MI);
		int32_t L_21 = m8303(__this, &m8303_MI);
		V_2 = L_21;
	}

IL_00b4:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}

IL_00b8:
	{
		int32_t L_23 = V_0;
		return L_23;
	}
}
extern "C" void m8315 (t1652 * __this, t1654 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	{
		m8302(__this, 1, &m8302_MI);
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)47))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8303(__this, &m8303_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		t2* L_2 = m8307(__this, &m8307_MI);
		V_0 = L_2;
		m8300(__this, &m8300_MI);
		m8305(__this, ((int32_t)61), &m8305_MI);
		m8300(__this, &m8300_MI);
		int32_t L_3 = m8304(__this, &m8304_MI);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_0062;
	}

IL_004a:
	{
		t2* L_6 = m8306(__this, ((int32_t)39), 1, &m8306_MI);
		V_1 = L_6;
		goto IL_006e;
	}

IL_0056:
	{
		t2* L_7 = m8306(__this, ((int32_t)34), 1, &m8306_MI);
		V_1 = L_7;
		goto IL_006e;
	}

IL_0062:
	{
		t138 * L_8 = m8296(__this, (t2*) &_stringLiteral1374, &m8296_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_006e:
	{
		t2* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_10 = m331(NULL, L_9, (t2*) &_stringLiteral1375, &m331_MI);
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		t2* L_11 = V_1;
		__this->f4 = L_11;
	}

IL_0082:
	{
		t1654 * L_12 = p0;
		t2* L_13 = V_0;
		t2* L_14 = V_1;
		m8294(L_12, L_13, L_14, &m8294_MI);
		return;
	}
}
extern "C" void m8316 (t1652 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = m8303(__this, &m8303_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_1 = m8297(__this, &m8297_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = m8304(__this, &m8304_MI);
		V_1 = (((uint16_t)L_2));
		uint16_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		goto IL_0073;
	}

IL_0025:
	{
		uint16_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_2 = L_7;
		goto IL_0044;
	}

IL_0032:
	{
		t315 * L_8 = (__this->f5);
		m2733(L_8, ((int32_t)93), &m2733_MI);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9-(int32_t)1));
	}

IL_0044:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0075;
	}

IL_004a:
	{
		V_3 = 0;
		goto IL_0060;
	}

IL_004e:
	{
		t315 * L_11 = (__this->f5);
		m2733(L_11, ((int32_t)93), &m2733_MI);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_004e;
		}
	}
	{
		V_0 = 0;
		t315 * L_15 = (__this->f5);
		uint16_t L_16 = V_1;
		m2733(L_15, L_16, &m2733_MI);
	}

IL_0073:
	{
		goto IL_0002;
	}

IL_0075:
	{
		return;
	}
}
extern "C" void m8317 (t1652 * __this, MethodInfo* method)
{
	{
		m8305(__this, ((int32_t)45), &m8305_MI);
		m8305(__this, ((int32_t)45), &m8305_MI);
	}

IL_0010:
	{
		int32_t L_0 = m8304(__this, &m8304_MI);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)45))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0010;
	}

IL_001c:
	{
		int32_t L_1 = m8304(__this, &m8304_MI);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)45))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0010;
	}

IL_0028:
	{
		int32_t L_2 = m8304(__this, &m8304_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_003e;
		}
	}
	{
		t138 * L_3 = m8296(__this, (t2*) &_stringLiteral1376, &m8296_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_003e:
	{
		goto IL_0042;
	}
	// Dead block : IL_0040: br.s IL_0010

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1360MD.h"
extern MethodInfo m7349_MI;
extern MethodInfo m5872_MI;


extern "C" void m8318 (t1657 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		int32_t L_4 = p2;
		int32_t L_5 = L_4;
		t9 * L_6 = Box(InitializedTypeInfo(&t125_TI), &L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7349(NULL, (t2*) &_stringLiteral1377, L_0, L_3, L_6, &m7349_MI);
		m5872(__this, L_7, &m5872_MI);
		int32_t L_8 = p1;
		__this->f11 = L_8;
		int32_t L_9 = p2;
		__this->f12 = L_9;
		return;
	}
}
#include "t1658.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1658_TI;
#include "t1658MD.h"



extern MethodInfo m8319_MI;
extern "C" t2* m8319 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m8319_ftn) ();
	static m8319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8319_ftn)il2cpp_codegen_resolve_icall ("Mono.Runtime::GetDisplayName()");
	return _il2cpp_icall_func();
}
#include "t1659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1659_TI;
#include "t1659MD.h"



#include "t1660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1660_TI;
#include "t1660MD.h"

extern MethodInfo m11780_MI;


extern MethodInfo m8320_MI;
extern "C" void m8320 (t1660 * __this, MethodInfo* method)
{
	{
		m5872(__this, (t2*) &_stringLiteral1387, &m5872_MI);
		return;
	}
}
extern MethodInfo m8321_MI;
extern "C" void m8321 (t1660 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t1661.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1661_TI;
#include "t1661MD.h"

#include "t1332.h"
extern TypeInfo t1332_TI;
#include "t1332MD.h"
extern MethodInfo m5685_MI;


extern MethodInfo m8322_MI;
extern "C" void m8322 (t1661 * __this, t1161 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1161 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t1161 * L_1 = p0;
		int32_t L_2 = (L_1->f3);
		__this->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1661_TI));
		t9 * L_3 = ((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f4;
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m8323_MI;
extern "C" void m8323 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f4 = L_0;
		return;
	}
}
extern MethodInfo m8324_MI;
extern "C" bool m8324 (t1661 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t1161 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1404, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		t1161 * L_7 = (__this->f0);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_7);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		t1161 * L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		t9 * L_11 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_9, L_10);
		__this->f3 = L_11;
		return 1;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1661_TI));
		t9 * L_12 = ((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f4;
		__this->f3 = L_12;
		return 0;
	}
}
extern MethodInfo m8325_MI;
extern "C" t9 * m8325 (t1661 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1661_TI));
		t9 * L_1 = ((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f4;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t9 *)L_1))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1402, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_4, (t2*) &_stringLiteral1403, &m5685_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		t9 * L_5 = (__this->f3);
		return L_5;
	}
}
#include "t1662.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1662_TI;
#include "t1662MD.h"

#include "t126.h"
extern TypeInfo t991_TI;
extern TypeInfo t1156_TI;
extern TypeInfo t126_TI;
extern MethodInfo m5904_MI;
extern MethodInfo m8407_MI;
extern MethodInfo m8408_MI;
extern MethodInfo m6937_MI;
extern MethodInfo m6938_MI;
extern MethodInfo m5847_MI;
extern MethodInfo m5848_MI;
extern MethodInfo m6939_MI;
extern MethodInfo m6940_MI;
extern MethodInfo m8411_MI;
extern MethodInfo m8412_MI;
extern MethodInfo m5828_MI;
extern MethodInfo m8413_MI;
extern MethodInfo m6915_MI;
extern MethodInfo m5909_MI;
extern MethodInfo m5900_MI;
extern MethodInfo m5849_MI;
extern MethodInfo m8414_MI;
extern MethodInfo m5820_MI;
extern MethodInfo m8417_MI;
extern MethodInfo m5908_MI;
extern MethodInfo m8415_MI;
extern MethodInfo m8416_MI;
extern MethodInfo m5829_MI;


extern MethodInfo m8326_MI;
extern "C" void m8326 (t1662 * __this, t1161 * p0, MethodInfo* method)
{
	{
		m5698(__this, &m5698_MI);
		t1161 * L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m8327_MI;
extern "C" t9 * m8327 (t1662 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8328_MI;
extern "C" void m8328 (t1662 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5904_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8329_MI;
extern "C" int32_t m8329 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8330_MI;
extern "C" int32_t m8330 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8407_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8331_MI;
extern "C" void m8331 (t1662 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8408_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8332_MI;
extern "C" bool m8332 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6937_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8333_MI;
extern "C" bool m8333 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6938_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8334_MI;
extern "C" bool m8334 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5847_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8335_MI;
extern "C" t9 * m8335 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8336_MI;
extern "C" int32_t m8336 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8337_MI;
extern "C" void m8337 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5850_MI, L_0);
		return;
	}
}
extern MethodInfo m8338_MI;
extern "C" bool m8338 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6939_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8339_MI;
extern "C" int32_t m8339 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6940_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8340_MI;
extern "C" int32_t m8340 (t1662 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8411_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m8341_MI;
extern "C" int32_t m8341 (t1662 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8412_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m8342_MI;
extern "C" void m8342 (t1662 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5828_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8343_MI;
extern "C" void m8343 (t1662 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8413_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8344_MI;
extern "C" void m8344 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6915_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8345_MI;
extern "C" void m8345 (t1662 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8346_MI;
extern "C" void m8346 (t1662 * __this, t121 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8347_MI;
extern "C" void m8347 (t1662 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5849_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8348_MI;
extern "C" void m8348 (t1662 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t121 * L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8414_MI, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
extern MethodInfo m8349_MI;
extern "C" t9 * m8349 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8350_MI;
extern "C" void m8350 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8351_MI;
extern "C" t9 * m8351 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8417_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8352_MI;
extern "C" void m8352 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5908_MI, L_0);
		return;
	}
}
extern MethodInfo m8353_MI;
extern "C" void m8353 (t1662 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8415_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8354_MI;
extern "C" t158* m8354 (t1662 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t158* L_1 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8416_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8355_MI;
extern "C" t121 * m8355 (t1662 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		t126 * L_1 = p0;
		t121 * L_2 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_0, L_1);
		return L_2;
	}
}
#include "t1663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1663_TI;
#include "t1663MD.h"

#include "t294MD.h"
extern MethodInfo m1067_MI;
extern MethodInfo m1069_MI;


extern MethodInfo m8356_MI;
extern "C" void m8356 (t1663 * __this, t1161 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = p0;
		m8326(__this, L_0, &m8326_MI);
		t1161 * L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_1);
		__this->f6 = L_2;
		return;
	}
}
extern MethodInfo m8357_MI;
extern "C" t9 * m8357 (t1663 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			int32_t L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_2, L_3);
			V_1 = L_4;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		t9 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8358_MI;
extern "C" void m8358 (t1663 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5904_MI, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m8359_MI;
extern "C" int32_t m8359 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8360_MI;
extern "C" int32_t m8360 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8407_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8361_MI;
extern "C" void m8361 (t1663 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8408_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8362_MI;
extern "C" bool m8362 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	bool V_1 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6937_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8363_MI;
extern "C" bool m8363 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	bool V_1 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6938_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8364_MI;
extern "C" bool m8364 (t1663 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8365_MI;
extern "C" t9 * m8365 (t1663 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8366_MI;
extern "C" int32_t m8366 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_2, L_3);
			V_1 = L_4;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8367_MI;
extern "C" void m8367 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5850_MI, L_2);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		t9 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m8368_MI;
extern "C" bool m8368 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	bool V_1 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			bool L_4 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6939_MI, L_2, L_3);
			V_1 = L_4;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8369_MI;
extern "C" int32_t m8369 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6940_MI, L_2, L_3);
			V_1 = L_4;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m8370_MI;
extern "C" int32_t m8370 (t1663 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8411_MI, L_2, L_3, L_4);
			V_1 = L_5;
			IL2CPP_LEAVE(0x26, FINALLY_001f);
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x26, FINALLY_001f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		t9 * L_6 = V_0;
		m1069(NULL, L_6, &m1069_MI);
		IL2CPP_END_FINALLY(31)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_JUMP_TBL(0x26, IL_0026)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
extern MethodInfo m8371_MI;
extern "C" int32_t m8371 (t1663 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = p2;
			int32_t L_6 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8412_MI, L_2, L_3, L_4, L_5);
			V_1 = L_6;
			IL2CPP_LEAVE(0x27, FINALLY_0020);
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x27, FINALLY_0020);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0020;
	}

FINALLY_0020:
	{ // begin finally (depth: 1)
		t9 * L_7 = V_0;
		m1069(NULL, L_7, &m1069_MI);
		IL2CPP_END_FINALLY(32)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(32)
	{
		IL2CPP_JUMP_TBL(0x27, IL_0027)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0027:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
extern MethodInfo m8372_MI;
extern "C" void m8372 (t1663 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5828_MI, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m8373_MI;
extern "C" void m8373 (t1663 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8413_MI, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m8374_MI;
extern "C" void m8374 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6915_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8375_MI;
extern "C" void m8375 (t1663 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8376_MI;
extern "C" void m8376 (t1663 * __this, t121 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8377_MI;
extern "C" void m8377 (t1663 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		int32_t L_4 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5849_MI, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_JUMP_TBL(0x23, IL_0023)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0023:
	{
		return;
	}
}
extern MethodInfo m8378_MI;
extern "C" void m8378 (t1663 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t121 * L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8414_MI, L_2, L_3, L_4, L_5, L_6);
		IL2CPP_LEAVE(0x26, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		t9 * L_7 = V_0;
		m1069(NULL, L_7, &m1069_MI);
		IL2CPP_END_FINALLY(31)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_JUMP_TBL(0x26, IL_0026)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m8379_MI;
extern "C" t9 * m8379 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		t9 * L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8380_MI;
extern "C" void m8380 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8381_MI;
extern "C" t9 * m8381 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8417_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		t9 * L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8382_MI;
extern "C" void m8382 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5908_MI, L_2);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		t9 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0021:
	{
		return;
	}
}
extern MethodInfo m8383_MI;
extern "C" void m8383 (t1663 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1161 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8415_MI, L_2, L_3);
		IL2CPP_LEAVE(0x22, FINALLY_001b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8384_MI;
extern "C" t158* m8384 (t1663 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t158* V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t158* L_3 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8416_MI, L_2);
			V_1 = L_3;
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x24, FINALLY_001d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0024:
	{
		t158* L_5 = V_1;
		return L_5;
	}
}
extern MethodInfo m8385_MI;
extern "C" t121 * m8385 (t1663 * __this, t126 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t121 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = (__this->f6);
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_2 = (__this->f5);
			t126 * L_3 = p0;
			t121 * L_4 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_2, L_3);
			V_1 = L_4;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		t9 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0025:
	{
		t121 * L_6 = V_1;
		return L_6;
	}
}
#include "t1664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1664_TI;
#include "t1664MD.h"

extern MethodInfo m8387_MI;


extern MethodInfo m8386_MI;
extern "C" void m8386 (t1664 * __this, t1161 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = p0;
		m8326(__this, L_0, &m8326_MI);
		return;
	}
}
extern "C" t2* m8387 (t1664 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1405;
	}
}
extern MethodInfo m8388_MI;
extern "C" int32_t m8388 (t1664 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8330(__this, &m8330_MI);
		return L_0;
	}
}
extern MethodInfo m8389_MI;
extern "C" void m8389 (t1664 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8390_MI;
extern "C" bool m8390 (t1664 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8391_MI;
extern "C" int32_t m8391 (t1664 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8392_MI;
extern "C" void m8392 (t1664 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8393_MI;
extern "C" void m8393 (t1664 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8394_MI;
extern "C" void m8394 (t1664 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8395_MI;
extern "C" void m8395 (t1664 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8396_MI;
extern "C" void m8396 (t1664 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8397_MI;
extern "C" void m8397 (t1664 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8387_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#include "t1665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1665_TI;
#include "t1665MD.h"

extern MethodInfo m8399_MI;


extern MethodInfo m8398_MI;
extern "C" void m8398 (t1665 * __this, t1161 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = p0;
		m8386(__this, L_0, &m8386_MI);
		return;
	}
}
extern "C" t2* m8399 (t1665 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1406;
	}
}
extern MethodInfo m8400_MI;
extern "C" bool m8400 (t1665 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8401_MI;
extern "C" t9 * m8401 (t1665 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8402_MI;
extern "C" void m8402 (t1665 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8399_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8403_MI;
extern "C" void m8403 (t1665 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8399_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8404_MI;
extern "C" void m8404 (t1665 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8399_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_1, L_0, &m5706_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2131.h"
extern TypeInfo t2131_TI;
#include "t2131MD.h"
extern MethodInfo m8418_MI;
extern MethodInfo m7682_MI;
extern MethodInfo m5695_MI;
extern MethodInfo m11757_MI;
extern MethodInfo m5673_MI;
extern MethodInfo m8409_MI;
extern MethodInfo m8410_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m5681_MI;
extern MethodInfo m7699_MI;
extern MethodInfo m7667_MI;
extern MethodInfo m8405_MI;
extern MethodInfo m11117_MI;
struct t121;
#include "t2166.h"
extern "C" int32_t m11970_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11970(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m11970_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
extern "C" void m11971_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m11971(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, int32_t, MethodInfo*))m11971_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m11970_GM;
extern Il2CppGenericMethod m11971_GM;


extern "C" void m5698 (t1161 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t158* L_0 = ((t1161_SFs*)InitializedTypeInfo(&t1161_TI)->static_fields)->f4;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m5740_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5740 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	static bool m5740_init;
	if (!m5740_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5740_init = true;
	}
	t121 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1394, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t9 * L_2 = p0;
		V_0 = ((t121 *)IsInst(L_2, InitializedTypeInfo(&t121_TI)));
		t121 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		t121 * L_4 = V_0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t2131 * L_6 = (t2131 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2131_TI));
		m11757(L_6, &m11757_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t9 * L_7 = p0;
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_7);
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, L_8));
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, __this, L_9);
		return;
	}
}
extern MethodInfo m5853_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5853 (t1161 * __this, int32_t p0, MethodInfo* method)
{
	static bool m5853_init;
	if (!m5853_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5853_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral400, L_3, (t2*) &_stringLiteral1395, &m8418_MI);
	}

IL_001f:
	{
		int32_t L_4 = p0;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		p0 = 4;
	}

IL_0027:
	{
		int32_t L_5 = p0;
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8405 (t1161 * __this, t158* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8405_init;
	if (!m8405_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8405_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p2;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, 4));
		goto IL_0023;
	}

IL_0017:
	{
		int32_t L_1 = p2;
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, L_1));
	}

IL_0023:
	{
		t158* L_2 = p0;
		int32_t L_3 = p1;
		t158* L_4 = (__this->f2);
		int32_t L_5 = p2;
		m7682(NULL, (t121 *)(t121 *)L_2, L_3, (t121 *)(t121 *)L_4, 0, L_5, &m7682_MI);
		int32_t L_6 = p2;
		__this->f1 = L_6;
		return;
	}
}
extern MethodInfo m8406_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8406 (t9 * __this , MethodInfo* method)
{
	static bool m8406_init;
	if (!m8406_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8406_init = true;
	}
	{
		((t1161_SFs*)InitializedTypeInfo(&t1161_TI)->static_fields)->f4 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern "C" t9 * m5696 (t1161 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		int32_t L_3 = p0;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral401, L_5, (t2*) &_stringLiteral1391, &m8418_MI);
	}

IL_0022:
	{
		t158* L_6 = (__this->f2);
		int32_t L_7 = p0;
		int32_t L_8 = L_7;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_6, L_8));
	}
}
extern "C" void m5904 (t1161 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		int32_t L_3 = p0;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral401, L_5, (t2*) &_stringLiteral1391, &m8418_MI);
	}

IL_0022:
	{
		t158* L_6 = (__this->f2);
		int32_t L_7 = p0;
		t9 * L_8 = p1;
		ArrayElementTypeCheck (L_6, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, L_7)) = (t9 *)L_8;
		int32_t L_9 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_9+(int32_t)1));
		return;
	}
}
extern "C" int32_t m5694 (t1161 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m8407 (t1161 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8408 (t1161 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8408_init;
	if (!m8408_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8408_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = p0;
		int32_t L_3 = L_2;
		t9 * L_4 = Box(InitializedTypeInfo(&t125_TI), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral1392, L_4, (t2*) &_stringLiteral1393, &m8418_MI);
	}

IL_001e:
	{
		int32_t L_5 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		t158* L_6 = (__this->f2);
		t158* L_7 = V_0;
		int32_t L_8 = (__this->f1);
		m7682(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, 0, L_8, &m7682_MI);
		t158* L_9 = V_0;
		__this->f2 = L_9;
		return;
	}
}
extern "C" bool m6937 (t1161 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m6938 (t1161 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5847 (t1161 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m5848 (t1161 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8409 (t1161 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8409_init;
	if (!m8409_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8409_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		int32_t L_0 = p0;
		t158* L_1 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)(((int32_t)(((t121 *)L_1)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		t158* L_2 = (__this->f2);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))<<(int32_t)1));
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 4;
	}

IL_001c:
	{
		goto IL_0022;
	}

IL_001e:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4<<(int32_t)1));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = p0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_7 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_7));
		t158* L_8 = (__this->f2);
		t158* L_9 = V_1;
		t158* L_10 = (__this->f2);
		m7682(NULL, (t121 *)(t121 *)L_8, 0, (t121 *)(t121 *)L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))), &m7682_MI);
		t158* L_11 = V_1;
		__this->f2 = L_11;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8410 (t1161 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8410_init;
	if (!m8410_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8410_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = p1;
		t158* L_3 = (__this->f2);
		if ((((int32_t)((int32_t)((int32_t)L_1+(int32_t)L_2))) <= ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_007a;
		}
	}
	{
		t158* L_4 = (__this->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t158* L_5 = (__this->f2);
		G_B5_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_5)->max_length)))<<(int32_t)1));
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		V_0 = G_B5_0;
		goto IL_0038;
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6<<(int32_t)1));
	}

IL_0038:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->f1);
		int32_t L_9 = p1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_10));
		t158* L_11 = (__this->f2);
		t158* L_12 = V_1;
		int32_t L_13 = p0;
		m7682(NULL, (t121 *)(t121 *)L_11, 0, (t121 *)(t121 *)L_12, 0, L_13, &m7682_MI);
		t158* L_14 = (__this->f2);
		int32_t L_15 = p0;
		t158* L_16 = V_1;
		int32_t L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = (__this->f1);
		int32_t L_20 = p0;
		m7682(NULL, (t121 *)(t121 *)L_14, L_15, (t121 *)(t121 *)L_16, ((int32_t)((int32_t)L_17+(int32_t)L_18)), ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m7682_MI);
		t158* L_21 = V_1;
		__this->f2 = L_21;
		goto IL_0097;
	}

IL_007a:
	{
		t158* L_22 = (__this->f2);
		int32_t L_23 = p0;
		t158* L_24 = (__this->f2);
		int32_t L_25 = p0;
		int32_t L_26 = p1;
		int32_t L_27 = (__this->f1);
		int32_t L_28 = p0;
		m7682(NULL, (t121 *)(t121 *)L_22, L_23, (t121 *)(t121 *)L_24, ((int32_t)((int32_t)L_25+(int32_t)L_26)), ((int32_t)((int32_t)L_27-(int32_t)L_28)), &m7682_MI);
	}

IL_0097:
	{
		goto IL_00d1;
	}

IL_0099:
	{
		int32_t L_29 = p1;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_30 = p0;
		int32_t L_31 = p1;
		V_2 = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		t158* L_32 = (__this->f2);
		int32_t L_33 = V_2;
		t158* L_34 = (__this->f2);
		int32_t L_35 = p0;
		int32_t L_36 = (__this->f1);
		int32_t L_37 = V_2;
		m7682(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, L_35, ((int32_t)((int32_t)L_36-(int32_t)L_37)), &m7682_MI);
		t158* L_38 = (__this->f2);
		int32_t L_39 = (__this->f1);
		int32_t L_40 = p1;
		int32_t L_41 = p1;
		m1146(NULL, (t121 *)(t121 *)L_38, ((int32_t)((int32_t)L_39+(int32_t)L_40)), ((-L_41)), &m1146_MI);
	}

IL_00d1:
	{
		return;
	}
}
extern "C" int32_t m5709 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = (__this->f1);
		m8409(__this, ((int32_t)((int32_t)L_2+(int32_t)1)), &m8409_MI);
	}

IL_001e:
	{
		t158* L_3 = (__this->f2);
		int32_t L_4 = (__this->f1);
		t9 * L_5 = p0;
		ArrayElementTypeCheck (L_3, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_3, L_4)) = (t9 *)L_5;
		int32_t L_6 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = (__this->f1);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->f1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		return L_9;
	}
}
extern "C" void m5850 (t1161 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m1146(NULL, (t121 *)(t121 *)L_0, 0, L_1, &m1146_MI);
		__this->f1 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" bool m6939 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8412_MI, __this, L_0, 0, L_1);
		return ((((int32_t)L_2) > ((int32_t)(-1)))? 1 : 0);
	}
}
extern "C" int32_t m6940 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8411_MI, __this, L_0, 0);
		return L_1;
	}
}
extern "C" int32_t m8411 (t1161 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8412_MI, __this, L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)));
		return L_4;
	}
}
extern MethodInfo* m11970_MI_var;
extern "C" int32_t m8412 (t1161 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8412_init;
	if (!m8412_init)
	{
		m11970_MI_var = il2cpp_codegen_genericmethod_get_method(&m11970_GM);
		m8412_init = true;
	}
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral1117, L_5, (t2*) &_stringLiteral1396, &m8418_MI);
	}

IL_0022:
	{
		int32_t L_6 = p2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = p2;
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t125_TI), &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral493, L_9, (t2*) &_stringLiteral1397, &m8418_MI);
	}

IL_003b:
	{
		int32_t L_10 = p1;
		int32_t L_11 = (__this->f1);
		int32_t L_12 = p2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)L_11-(int32_t)L_12)))))
		{
			goto IL_0056;
		}
	}
	{
		t896 * L_13 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_13, (t2*) &_stringLiteral493, (t2*) &_stringLiteral1398, &m4336_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0056:
	{
		t158* L_14 = (__this->f2);
		t9 * L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = m11970(NULL, L_14, L_15, L_16, L_17, m11970_MI_var);
		return L_18;
	}
}
extern "C" void m5828 (t1161 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		int32_t L_3 = p0;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral401, L_5, (t2*) &_stringLiteral1399, &m8418_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8410(__this, L_6, 1, &m8410_MI);
		t158* L_7 = (__this->f2);
		int32_t L_8 = p0;
		t9 * L_9 = p1;
		ArrayElementTypeCheck (L_7, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, L_8)) = (t9 *)L_9;
		int32_t L_10 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
extern "C" void m8413 (t1161 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1394, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = p0;
		int32_t L_4 = (__this->f1);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0030;
		}
	}

IL_001b:
	{
		int32_t L_5 = p0;
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral401, L_7, (t2*) &_stringLiteral1399, &m8418_MI);
	}

IL_0030:
	{
		t9 * L_8 = p1;
		int32_t L_9 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_8);
		V_0 = L_9;
		t158* L_10 = (__this->f2);
		int32_t L_11 = (__this->f1);
		int32_t L_12 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))) >= ((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12)))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_13 = (__this->f1);
		int32_t L_14 = V_0;
		m8409(__this, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m8409_MI);
	}

IL_0057:
	{
		int32_t L_15 = p0;
		int32_t L_16 = (__this->f1);
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_007d;
		}
	}
	{
		t158* L_17 = (__this->f2);
		int32_t L_18 = p0;
		t158* L_19 = (__this->f2);
		int32_t L_20 = p0;
		int32_t L_21 = V_0;
		int32_t L_22 = (__this->f1);
		int32_t L_23 = p0;
		m7682(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, ((int32_t)((int32_t)L_20+(int32_t)L_21)), ((int32_t)((int32_t)L_22-(int32_t)L_23)), &m7682_MI);
	}

IL_007d:
	{
		t9 * L_24 = p1;
		t9 * L_25 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11969_MI, L_24);
		if ((!(((t9*)(t1161 *)__this) == ((t9*)(t9 *)L_25))))
		{
			goto IL_00bb;
		}
	}
	{
		t158* L_26 = (__this->f2);
		t158* L_27 = (__this->f2);
		int32_t L_28 = p0;
		int32_t L_29 = p0;
		m7682(NULL, (t121 *)(t121 *)L_26, 0, (t121 *)(t121 *)L_27, L_28, L_29, &m7682_MI);
		t158* L_30 = (__this->f2);
		int32_t L_31 = p0;
		int32_t L_32 = V_0;
		t158* L_33 = (__this->f2);
		int32_t L_34 = p0;
		int32_t L_35 = (__this->f1);
		int32_t L_36 = p0;
		m7682(NULL, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)L_32)), (t121 *)(t121 *)L_33, ((int32_t)((int32_t)L_34<<(int32_t)1)), ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m7682_MI);
		goto IL_00c8;
	}

IL_00bb:
	{
		t9 * L_37 = p1;
		t158* L_38 = (__this->f2);
		int32_t L_39 = p0;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5681_MI, L_37, (t121 *)(t121 *)L_38, L_39);
	}

IL_00c8:
	{
		int32_t L_40 = (__this->f1);
		t9 * L_41 = p1;
		int32_t L_42 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_41);
		__this->f1 = ((int32_t)((int32_t)L_40+(int32_t)L_42));
		int32_t L_43 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_43+(int32_t)1));
		return;
	}
}
extern "C" void m6915 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6940_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_4+(int32_t)1));
		return;
	}
}
extern "C" void m5909 (t1161 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}

IL_000d:
	{
		int32_t L_3 = p0;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		m8418(NULL, (t2*) &_stringLiteral401, L_5, (t2*) &_stringLiteral1400, &m8418_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8410(__this, L_6, (-1), &m8410_MI);
		int32_t L_7 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern "C" void m5900 (t1161 * __this, t121 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		t121 * L_1 = p0;
		int32_t L_2 = (__this->f1);
		m5912(NULL, (t121 *)(t121 *)L_0, L_1, L_2, &m5912_MI);
		return;
	}
}
extern "C" void m5849 (t1161 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8414_MI, __this, 0, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m8414 (t1161 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t121 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p1;
		int32_t L_3 = m5695(L_2, &m5695_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_4, (t2*) &_stringLiteral1401, (t2*) &_stringLiteral330, &m5691_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t158* L_5 = (__this->f2);
		int32_t L_6 = p0;
		t121 * L_7 = p1;
		int32_t L_8 = p2;
		int32_t L_9 = p3;
		m7682(NULL, (t121 *)(t121 *)L_5, L_6, L_7, L_8, L_9, &m7682_MI);
		return;
	}
}
extern "C" t9 * m5699 (t1161 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1661_TI));
		t1661 * L_0 = (t1661 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1661_TI));
		m8322(L_0, __this, &m8322_MI);
		return L_0;
	}
}
extern "C" void m5820 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t9 * L_1 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8413_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo* m11971_MI_var;
extern "C" void m5908 (t1161 * __this, MethodInfo* method)
{
	static bool m5908_init;
	if (!m5908_init)
	{
		m11971_MI_var = il2cpp_codegen_genericmethod_get_method(&m11971_GM);
		m5908_init = true;
	}
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m11971(NULL, L_0, 0, L_1, m11971_MI_var);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" void m8415 (t1161 * __this, t9 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		t9 * L_2 = p0;
		m7699(NULL, (t121 *)(t121 *)L_0, 0, L_1, L_2, &m7699_MI);
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m8416 (t1161 * __this, MethodInfo* method)
{
	static bool m8416_init;
	if (!m8416_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8416_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_0));
		t158* L_1 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, __this, (t121 *)(t121 *)L_1);
		t158* L_2 = V_0;
		return L_2;
	}
}
extern "C" t121 * m5829 (t1161 * __this, t126 * p0, MethodInfo* method)
{
	t121 * V_0 = {0};
	{
		t126 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		t121 * L_2 = m7667(NULL, L_0, L_1, &m7667_MI);
		V_0 = L_2;
		t121 * L_3 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5900_MI, __this, L_3);
		t121 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t9 * m8417 (t1161 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m8405(L_2, L_0, 0, L_1, &m8405_MI);
		return L_2;
	}
}
extern "C" void m8418 (t9 * __this , t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		t2* L_2 = p2;
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m11117(L_3, L_0, L_1, L_2, &m11117_MI);
		il2cpp_codegen_raise_exception(L_3);
	}
}
extern MethodInfo m8419_MI;
extern "C" t1161 * m8419 (t9 * __this , t1161 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1390, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1161 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5847_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1161 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1161 * L_5 = p0;
		t1663 * L_6 = (t1663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1663_TI));
		m8356(L_6, L_5, &m8356_MI);
		return L_6;
	}
}
extern MethodInfo m6892_MI;
extern "C" t1161 * m6892 (t9 * __this , t1161 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1390, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1161 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6938_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1161 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1161 * L_5 = p0;
		t1665 * L_6 = (t1665 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1665_TI));
		m8398(L_6, L_5, &m8398_MI);
		return L_6;
	}
}
#include "t1666.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1666_TI;
#include "t1666MD.h"

#include "t1283.h"
extern TypeInfo t1283_TI;
#include "t1283MD.h"
extern MethodInfo m8425_MI;
extern MethodInfo m8423_MI;
extern MethodInfo m5902_MI;
extern MethodInfo m5692_MI;


extern MethodInfo m8420_MI;
extern "C" void m8420 (t1666 * __this, t1283 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f2 = (-1);
		t1283 * L_0 = p0;
		__this->f0 = L_0;
		t1283 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f3 = L_2;
		return;
	}
}
extern MethodInfo m8421_MI;
extern "C" t9 * m8421 (t1666 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1410, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = (__this->f2);
		t1283 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8425_MI, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, (t2*) &_stringLiteral1411, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = (__this->f1);
		bool L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t124_TI), &L_7);
		return L_8;
	}
}
extern MethodInfo m8422_MI;
extern "C" bool m8422 (t1666 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8423(__this, &m8423_MI);
		int32_t L_0 = (__this->f2);
		t1283 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8425_MI, L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)L_2-(int32_t)1)))))
		{
			goto IL_003f;
		}
	}
	{
		t1283 * L_3 = (__this->f0);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f2 = L_5;
		int32_t L_6 = V_0;
		bool L_7 = m5902(L_3, L_6, &m5902_MI);
		__this->f1 = L_7;
		return 1;
	}

IL_003f:
	{
		t1283 * L_8 = (__this->f0);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8425_MI, L_8);
		__this->f2 = L_9;
		return 0;
	}
}
extern "C" void m8423 (t1666 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		t1283 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f2);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_3, &m5692_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1088_TI;
extern TypeInfo t1197_TI;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t1197_0_0_0;
extern MethodInfo m8429_MI;
extern MethodInfo m8430_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m5689_MI;
extern MethodInfo m11109_MI;
extern MethodInfo m8424_MI;
extern MethodInfo m5870_MI;


extern MethodInfo m5945_MI;
extern TypeInfo* t1088_TI_var;
extern "C" void m5945 (t1283 * __this, int32_t p0, MethodInfo* method)
{
	static bool m5945_init;
	if (!m5945_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m5945_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_1, (t2*) &_stringLiteral1118, &m5693_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = p0;
		__this->f1 = L_2;
		int32_t L_3 = (__this->f1);
		__this->f0 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32)))));
		return;
	}
}
extern "C" uint8_t m8424 (t1283 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)4));
		int32_t L_1 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1%(int32_t)4))*(int32_t)8));
		t1088* L_2 = (__this->f0);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))&(int32_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))))));
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		return (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)255)))));
	}
}
extern "C" int32_t m8425 (t1283 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8426_MI;
extern "C" bool m8426 (t1283 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5902 (t1283 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8429(__this, L_0, &m8429_MI);
		return L_1;
	}
}
extern MethodInfo m5946_MI;
extern "C" void m5946 (t1283 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8430(__this, L_0, L_1, &m8430_MI);
		return;
	}
}
extern MethodInfo m5901_MI;
extern "C" int32_t m5901 (t1283 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8427_MI;
extern "C" t9 * m8427 (t1283 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m8428_MI;
extern TypeInfo* t1197_TI_var;
extern TypeInfo* t723_TI_var;
extern TypeInfo* t1088_TI_var;
extern "C" void m8428 (t1283 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8428_init;
	if (!m8428_init)
	{
		t1197_TI_var = il2cpp_codegen_class_from_type(&t1197_0_0_0);
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8428_init = true;
	}
	t1197* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t723* V_3 = {0};
	int32_t V_4 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_3, (t2*) &_stringLiteral401, &m5693_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral330, (t2*) &_stringLiteral1407, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5689(L_8, &m5689_MI);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = (__this->f1);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_11, (t2*) &_stringLiteral401, (t2*) &_stringLiteral1408, &m5691_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0058:
	{
		t121 * L_12 = p0;
		if (!((t1197*)IsInst(L_12, t1197_TI_var)))
		{
			goto IL_009f;
		}
	}
	{
		t121 * L_13 = p0;
		int32_t L_14 = m5689(L_13, &m5689_MI);
		int32_t L_15 = p1;
		int32_t L_16 = (__this->f1);
		if ((((int32_t)((int32_t)((int32_t)L_14-(int32_t)L_15))) >= ((int32_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_17, &m11109_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0076:
	{
		t121 * L_18 = p0;
		V_0 = ((t1197*)Castclass(L_18, t1197_TI_var));
		V_1 = 0;
		goto IL_0091;
	}

IL_0081:
	{
		t1197* L_19 = V_0;
		int32_t L_20 = p1;
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		bool L_23 = m5902(__this, L_22, &m5902_MI);
		*((bool*)(bool*)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20+(int32_t)L_21)))) = (bool)L_23;
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->f1);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_011e;
	}

IL_009f:
	{
		t121 * L_27 = p0;
		if (!((t723*)IsInst(L_27, t723_TI_var)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_28 = (__this->f1);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)7))/(int32_t)8));
		t121 * L_29 = p0;
		int32_t L_30 = m5689(L_29, &m5689_MI);
		int32_t L_31 = p1;
		int32_t L_32 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))) >= ((int32_t)L_32)))
		{
			goto IL_00c3;
		}
	}
	{
		t556 * L_33 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_33, &m11109_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00c3:
	{
		t121 * L_34 = p0;
		V_3 = ((t723*)Castclass(L_34, t723_TI_var));
		V_4 = 0;
		goto IL_00e3;
	}

IL_00cf:
	{
		t723* L_35 = V_3;
		int32_t L_36 = p1;
		int32_t L_37 = V_4;
		int32_t L_38 = V_4;
		uint8_t L_39 = m8424(__this, L_38, &m8424_MI);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)((int32_t)L_36+(int32_t)L_37)))) = (uint8_t)L_39;
		int32_t L_40 = V_4;
		V_4 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00e3:
	{
		int32_t L_41 = V_4;
		int32_t L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_011e;
	}

IL_00ea:
	{
		t121 * L_43 = p0;
		if (!((t1088*)IsInst(L_43, t1088_TI_var)))
		{
			goto IL_010e;
		}
	}
	{
		t1088* L_44 = (__this->f0);
		t121 * L_45 = p0;
		int32_t L_46 = p1;
		int32_t L_47 = (__this->f1);
		m7682(NULL, (t121 *)(t121 *)L_44, 0, L_45, L_46, ((int32_t)((int32_t)((int32_t)((int32_t)L_47+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32))), &m7682_MI);
		goto IL_011e;
	}

IL_010e:
	{
		t556 * L_48 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_48, (t2*) &_stringLiteral330, (t2*) &_stringLiteral1409, &m5691_MI);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_011e:
	{
		return;
	}
}
extern "C" bool m8429 (t1283 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}

IL_000d:
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_3, &m5870_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t1088* L_4 = (__this->f0);
		int32_t L_5 = p0;
		int32_t L_6 = ((int32_t)((int32_t)L_5>>(int32_t)5));
		int32_t L_7 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8430 (t1283 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}

IL_000d:
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_3, &m5870_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		bool L_4 = p1;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		t1088* L_5 = (__this->f0);
		int32_t L_6 = p0;
		int32_t* L_7 = ((int32_t*)(int32_t*)SZArrayLdElema(L_5, ((int32_t)((int32_t)L_6>>(int32_t)5))));
		int32_t L_8 = p0;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_7))|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		goto IL_0055;
	}

IL_0036:
	{
		t1088* L_9 = (__this->f0);
		int32_t L_10 = p0;
		int32_t* L_11 = ((int32_t*)(int32_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10>>(int32_t)5))));
		int32_t L_12 = p0;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))&(int32_t)((~((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))))));
	}

IL_0055:
	{
		int32_t L_13 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_13+(int32_t)1));
		return;
	}
}
extern MethodInfo m8431_MI;
extern "C" t9 * m8431 (t1283 * __this, MethodInfo* method)
{
	{
		t1666 * L_0 = (t1666 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1666_TI));
		m8420(L_0, __this, &m8420_MI);
		return L_0;
	}
}
#include "t1330.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1330_TI;
#include "t1330MD.h"

#include "t1537.h"
#include "t1538.h"
#include "t1668.h"
extern TypeInfo t1537_TI;
extern TypeInfo t1538_TI;
extern TypeInfo t1668_TI;
#include "t1537MD.h"
#include "t1668MD.h"
extern MethodInfo m6941_MI;
extern MethodInfo m8432_MI;
extern MethodInfo m8433_MI;
extern MethodInfo m6942_MI;
extern MethodInfo m6943_MI;
extern MethodInfo m8445_MI;


extern "C" void m8432 (t1330 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = m6941(NULL, &m6941_MI);
		__this->f2 = L_0;
		return;
	}
}
extern "C" void m8433 (t1330 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8434_MI;
extern "C" void m8434 (t9 * __this , MethodInfo* method)
{
	{
		t1330 * L_0 = (t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1330_TI));
		m8432(L_0, &m8432_MI);
		((t1330_SFs*)InitializedTypeInfo(&t1330_TI)->static_fields)->f0 = L_0;
		t1330 * L_1 = (t1330 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1330_TI));
		m8433(L_1, 1, &m8433_MI);
		((t1330_SFs*)InitializedTypeInfo(&t1330_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern MethodInfo m5676_MI;
extern "C" t1330 * m5676 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1330_TI));
		t1330 * L_0 = ((t1330_SFs*)InitializedTypeInfo(&t1330_TI)->static_fields)->f1;
		return L_0;
	}
}
extern MethodInfo m8435_MI;
extern "C" int32_t m8435 (t1330 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t2*)IsInst(L_0, (&t2_TI)));
		t9 * L_1 = p1;
		V_1 = ((t2*)IsInst(L_1, (&t2_TI)));
		t2* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		t2* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		t894 * L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		t894 * L_5 = (__this->f2);
		t1537 * L_6 = (t1537 *)VirtFuncInvoker0< t1537 * >::Invoke(&m6942_MI, L_5);
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6943_MI, L_6, L_7, L_8, 1);
		return L_9;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_10 = m4334(NULL, &m4334_MI);
		t1537 * L_11 = (t1537 *)VirtFuncInvoker0< t1537 * >::Invoke(&m6942_MI, L_10);
		t2* L_12 = V_0;
		t2* L_13 = V_1;
		int32_t L_14 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6943_MI, L_11, L_12, L_13, 1);
		return L_14;
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1668_TI));
		t1668 * L_15 = ((t1668_SFs*)InitializedTypeInfo(&t1668_TI)->static_fields)->f0;
		t9 * L_16 = p0;
		t9 * L_17 = p1;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m8445_MI, L_15, L_16, L_17);
		return L_18;
	}
}
#include "t1331.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1331_TI;
#include "t1331MD.h"

#include "t1607.h"
extern TypeInfo t1607_TI;
#include "t1607MD.h"
extern MethodInfo m8439_MI;
extern MethodInfo m8628_MI;
extern MethodInfo m8437_MI;
extern MethodInfo m8626_MI;
extern MethodInfo m8742_MI;
extern MethodInfo m8440_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m7293_MI;


extern MethodInfo m8436_MI;
extern "C" void m8436 (t1331 * __this, MethodInfo* method)
{
	t894 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = m6941(NULL, &m6941_MI);
		V_0 = L_0;
		t894 * L_1 = V_0;
		t894 * L_2 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1331_TI));
		bool L_3 = m8439(NULL, L_1, L_2, &m8439_MI);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_4 = m6941(NULL, &m6941_MI);
		t1607 * L_5 = (t1607 *)VirtFuncInvoker0< t1607 * >::Invoke(&m8628_MI, L_4);
		__this->f2 = L_5;
	}

IL_0029:
	{
		return;
	}
}
extern "C" void m8437 (t1331 * __this, t894 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t894 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1107, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t894 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_3 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1331_TI));
		bool L_4 = m8439(NULL, L_2, L_3, &m8439_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t894 * L_5 = p0;
		t1607 * L_6 = (t1607 *)VirtFuncInvoker0< t1607 * >::Invoke(&m8628_MI, L_5);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m8438_MI;
extern "C" void m8438 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = m4334(NULL, &m4334_MI);
		t1331 * L_1 = (t1331 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1331_TI));
		m8437(L_1, L_0, &m8437_MI);
		((t1331_SFs*)InitializedTypeInfo(&t1331_TI)->static_fields)->f0 = L_1;
		t9 * L_2 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_2, &m336_MI);
		((t1331_SFs*)InitializedTypeInfo(&t1331_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" bool m8439 (t9 * __this , t894 * p0, t894 * p1, MethodInfo* method)
{
	{
		t894 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_0);
		t894 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern "C" bool m8440 (t9 * __this , t1607 * p0, t894 * p1, MethodInfo* method)
{
	{
		t1607 * L_0 = p0;
		t2* L_1 = m8742(L_0, &m8742_MI);
		t894 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m5677_MI;
extern "C" t1331 * m5677 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1331_TI));
		t1331 * L_0 = ((t1331_SFs*)InitializedTypeInfo(&t1331_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m8441_MI;
extern "C" int32_t m8441 (t1331 * __this, t9 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1412, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		V_0 = ((t2*)IsInst(L_2, (&t2_TI)));
		t2* L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		t9 * L_4 = p0;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_4);
		return L_5;
	}

IL_001f:
	{
		V_1 = 0;
		t1607 * L_6 = (__this->f2);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		t1607 * L_7 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_8 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1331_TI));
		bool L_9 = m8440(NULL, L_7, L_8, &m8440_MI);
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		t1607 * L_10 = (__this->f2);
		t2* L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker1< t2*, t2* >::Invoke(&m8748_MI, L_10, L_11);
		V_0 = L_12;
		V_3 = 0;
		goto IL_005f;
	}

IL_004c:
	{
		t2* L_13 = V_0;
		int32_t L_14 = V_3;
		uint16_t L_15 = m2714(L_13, L_14, &m2714_MI);
		V_2 = L_15;
		int32_t L_16 = V_1;
		uint16_t L_17 = V_2;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16*(int32_t)((int32_t)31)))+(int32_t)L_17));
		int32_t L_18 = V_3;
		V_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_19 = V_3;
		t2* L_20 = V_0;
		int32_t L_21 = m2699(L_20, &m2699_MI);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0099;
	}

IL_006a:
	{
		V_4 = 0;
		goto IL_008f;
	}

IL_006f:
	{
		t2* L_22 = V_0;
		int32_t L_23 = V_4;
		uint16_t L_24 = m2714(L_22, L_23, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_25 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_26 = m7293(NULL, L_24, L_25, &m7293_MI);
		V_2 = L_26;
		int32_t L_27 = V_1;
		uint16_t L_28 = V_2;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)31)))+(int32_t)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_008f:
	{
		int32_t L_30 = V_4;
		t2* L_31 = V_0;
		int32_t L_32 = m2699(L_31, &m2699_MI);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_006f;
		}
	}

IL_0099:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m6043_MI;
extern MethodInfo m6041_MI;
extern MethodInfo m6042_MI;
extern MethodInfo m6037_MI;
extern MethodInfo m6038_MI;
extern MethodInfo m6039_MI;
extern MethodInfo m6040_MI;
extern MethodInfo m6035_MI;
extern MethodInfo m6036_MI;


extern "C" void m5826 (t1225 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m6024_MI;
extern "C" void m6024 (t1225 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5849_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m6023_MI;
extern "C" t9 * m6023 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6022_MI;
extern "C" bool m6022 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5847_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6029_MI;
extern "C" int32_t m6029 (t1225 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6043_MI, __this, L_0);
		t1161 * L_1 = m5819(__this, &m5819_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		t9 * L_4 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6037_MI, __this, L_3, L_4);
		t1161 * L_5 = m5819(__this, &m5819_MI);
		t9 * L_6 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_5, L_6);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		int32_t L_7 = V_0;
		t9 * L_8 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6038_MI, __this, L_7, L_8);
		goto IL_0043;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Object)
		t1161 * L_9 = m5819(__this, &m5819_MI);
		int32_t L_10 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_9, L_10);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0043;
	} // end catch (depth: 1)

IL_0043:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m6030_MI;
extern "C" bool m6030 (t1225 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6939_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6031_MI;
extern "C" int32_t m6031 (t1225 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6940_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6032_MI;
extern "C" void m6032 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6043_MI, __this, L_0);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6037_MI, __this, L_1, L_2);
		t1161 * L_3 = m5819(__this, &m5819_MI);
		int32_t L_4 = p0;
		t9 * L_5 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5828_MI, L_3, L_4, L_5);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = p0;
		t9 * L_7 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6038_MI, __this, L_6, L_7);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_0026;
		throw e;
	}

CATCH_0026:
	{ // begin catch(System.Object)
		t1161 * L_8 = m5819(__this, &m5819_MI);
		int32_t L_9 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_8, L_9);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
extern MethodInfo m6033_MI;
extern "C" void m6033 (t1225 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6043_MI, __this, L_0);
		t1161 * L_1 = m5819(__this, &m5819_MI);
		t9 * L_2 = p0;
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6940_MI, L_1, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_5, (t2*) &_stringLiteral1413, (t2*) &_stringLiteral611, &m5691_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		t9 * L_7 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6039_MI, __this, L_6, L_7);
		t1161 * L_8 = m5819(__this, &m5819_MI);
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6915_MI, L_8, L_9);
		int32_t L_10 = V_0;
		t9 * L_11 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6040_MI, __this, L_10, L_11);
		return;
	}
}
extern MethodInfo m6025_MI;
extern "C" bool m6025 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6937_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6026_MI;
extern "C" bool m6026 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6938_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6027_MI;
extern "C" t9 * m6027 (t1225 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6028_MI;
extern "C" void m6028 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		t1161 * L_2 = m5819(__this, &m5819_MI);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_4, (t2*) &_stringLiteral401, &m5693_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t9 * L_5 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6043_MI, __this, L_5);
		t1161 * L_6 = m5819(__this, &m5819_MI);
		int32_t L_7 = p0;
		t9 * L_8 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_6, L_7);
		V_0 = L_8;
		int32_t L_9 = p0;
		t9 * L_10 = V_0;
		t9 * L_11 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6041_MI, __this, L_9, L_10, L_11);
		t1161 * L_12 = m5819(__this, &m5819_MI);
		int32_t L_13 = p0;
		t9 * L_14 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5904_MI, L_12, L_13, L_14);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		int32_t L_15 = p0;
		t9 * L_16 = V_0;
		t9 * L_17 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6042_MI, __this, L_15, L_16, L_17);
		goto IL_0064;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_0052;
		throw e;
	}

CATCH_0052:
	{ // begin catch(System.Object)
		t1161 * L_18 = m5819(__this, &m5819_MI);
		int32_t L_19 = p0;
		t9 * L_20 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5904_MI, L_18, L_19, L_20);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0064;
	} // end catch (depth: 1)

IL_0064:
	{
		return;
	}
}
extern MethodInfo m5804_MI;
extern "C" int32_t m5804 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m5843_MI;
extern "C" t9 * m5843 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_0);
		return L_1;
	}
}
extern "C" void m5857 (t1225 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m6035_MI, __this);
		t1161 * L_0 = m5819(__this, &m5819_MI);
		VirtActionInvoker0::Invoke(&m5850_MI, L_0);
		VirtActionInvoker0::Invoke(&m6036_MI, __this);
		return;
	}
}
extern MethodInfo m6034_MI;
extern "C" void m6034 (t1225 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1161 * L_0 = m5819(__this, &m5819_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_0, L_1);
		V_0 = L_2;
		t9 * L_3 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m6043_MI, __this, L_3);
		int32_t L_4 = p0;
		t9 * L_5 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6039_MI, __this, L_4, L_5);
		t1161 * L_6 = m5819(__this, &m5819_MI);
		int32_t L_7 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_6, L_7);
		int32_t L_8 = p0;
		t9 * L_9 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6040_MI, __this, L_8, L_9);
		return;
	}
}
extern "C" t1161 * m5819 (t1225 * __this, MethodInfo* method)
{
	{
		t1161 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1161 * L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m5913_MI;
extern "C" t9 * m5913 (t1225 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m6035 (t1225 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6036 (t1225 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6037 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6038 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6039 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6040 (t1225 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6041 (t1225 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6042 (t1225 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6043 (t1225 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1414, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
#include "t1667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1667_TI;
#include "t1667MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t127.h"
extern TypeInfo t185_TI;
#include "t126MD.h"
extern Il2CppType t1537_0_0_0;
extern MethodInfo m8442_MI;
extern MethodInfo m8443_MI;
extern MethodInfo m8602_MI;
extern MethodInfo m11940_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5700_MI;


extern "C" void m8442 (t1668 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" void m8443 (t1668 * __this, t894 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t894 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1107, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t894 * L_2 = p0;
		t1537 * L_3 = (t1537 *)VirtFuncInvoker0< t1537 * >::Invoke(&m6942_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m8444_MI;
extern "C" void m8444 (t9 * __this , MethodInfo* method)
{
	{
		t1668 * L_0 = (t1668 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1668_TI));
		m8442(L_0, &m8442_MI);
		((t1668_SFs*)InitializedTypeInfo(&t1668_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_1 = m4334(NULL, &m4334_MI);
		t1668 * L_2 = (t1668 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1668_TI));
		m8443(L_2, L_1, &m8443_MI);
		((t1668_SFs*)InitializedTypeInfo(&t1668_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" int32_t m8445 (t1668 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t9 *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		t9 * L_2 = p0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		t9 * L_3 = p1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		t1537 * L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		t9 * L_5 = p0;
		V_0 = ((t2*)IsInst(L_5, (&t2_TI)));
		t9 * L_6 = p1;
		V_1 = ((t2*)IsInst(L_6, (&t2_TI)));
		t2* L_7 = V_0;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_8 = V_1;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		t1537 * L_9 = (__this->f2);
		t2* L_10 = V_0;
		t2* L_11 = V_1;
		int32_t L_12 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m8602_MI, L_9, L_10, L_11);
		return L_12;
	}

IL_003a:
	{
		t9 * L_13 = p0;
		if (!((t9 *)IsInst(L_13, InitializedTypeInfo(&t185_TI))))
		{
			goto IL_004f;
		}
	}
	{
		t9 * L_14 = p0;
		t9 * L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11940_MI, ((t9 *)IsInst(L_14, InitializedTypeInfo(&t185_TI))), L_15);
		return L_16;
	}

IL_004f:
	{
		t9 * L_17 = p1;
		if (!((t9 *)IsInst(L_17, InitializedTypeInfo(&t185_TI))))
		{
			goto IL_0065;
		}
	}
	{
		t9 * L_18 = p1;
		t9 * L_19 = p0;
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11940_MI, ((t9 *)IsInst(L_18, InitializedTypeInfo(&t185_TI))), L_19);
		return ((-L_20));
	}

IL_0065:
	{
		t2* L_21 = m7818(NULL, (t2*) &_stringLiteral1415, &m7818_MI);
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_22, L_21, &m2885_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern MethodInfo m8446_MI;
extern "C" void m8446 (t1668 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
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
		t1537 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1537_0_0_0), &m329_MI);
		m5700(L_2, (t2*) &_stringLiteral1416, L_3, L_4, &m5700_MI);
		return;
	}
}
#include "t1155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1155_TI;
#include "t1155MD.h"



extern MethodInfo m5686_MI;
extern "C" void m5686 (t1155 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f0 = L_0;
		t9 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8447_MI;
extern "C" t9 * m8447 (t1155 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8448_MI;
extern "C" t9 * m8448 (t1155 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1669_TI;
#include "t1669MD.h"



#include "t1670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1670_TI;
#include "t1670MD.h"

extern MethodInfo m8449_MI;


extern "C" void m8449 (t1670 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8450_MI;
extern "C" void m8450 (t9 * __this , MethodInfo* method)
{
	{
		t1670 * L_0 = (t1670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1670_TI));
		m8449(L_0, &m8449_MI);
		((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1671_TI;
#include "t1671MD.h"



#include "t1672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1672_TI;
#include "t1672MD.h"

#include "t1149.h"
extern TypeInfo t1149_TI;
extern MethodInfo m8453_MI;
extern MethodInfo m8454_MI;


extern MethodInfo m8451_MI;
extern "C" void m8451 (t1672 * __this, t1149 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1149 * L_0 = p0;
		__this->f0 = L_0;
		t1149 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1149 * L_3 = p0;
		t1675* L_4 = (L_3->f4);
		__this->f3 = (((int32_t)(((t121 *)L_4)->max_length)));
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8454_MI, __this);
		return;
	}
}
extern MethodInfo m8452_MI;
extern "C" void m8452 (t9 * __this , MethodInfo* method)
{
	{
		((t1672_SFs*)InitializedTypeInfo(&t1672_TI)->static_fields)->f7 = (t2*) &_stringLiteral1430;
		return;
	}
}
extern "C" void m8453 (t1672 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		int32_t L_1 = (L_0->f2);
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t2* L_3 = ((t1672_SFs*)InitializedTypeInfo(&t1672_TI)->static_fields)->f7;
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_4, L_3, &m5685_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		return;
	}
}
extern "C" void m8454 (t1672 * __this, MethodInfo* method)
{
	{
		m8453(__this, &m8453_MI);
		__this->f2 = (-1);
		__this->f5 = NULL;
		__this->f6 = NULL;
		return;
	}
}
extern MethodInfo m8455_MI;
extern "C" bool m8455 (t1672 * __this, MethodInfo* method)
{
	t1669  V_0 = {0};
	int32_t V_1 = 0;
	{
		m8453(__this, &m8453_MI);
		int32_t L_0 = (__this->f2);
		int32_t L_1 = (__this->f3);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0065;
	}

IL_0016:
	{
		t1149 * L_2 = (__this->f0);
		t1675* L_3 = (L_2->f4);
		int32_t L_4 = (__this->f2);
		V_0 = (*(t1669 *)((t1669 *)(t1669 *)SZArrayLdElema(L_3, L_4)));
		t9 * L_5 = ((&V_0)->f0);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t9 * L_6 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_7 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0;
		if ((((t9*)(t9 *)L_6) == ((t9*)(t1670 *)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		t9 * L_8 = ((&V_0)->f0);
		__this->f5 = L_8;
		t9 * L_9 = ((&V_0)->f1);
		__this->f6 = L_9;
		return 1;
	}

IL_0065:
	{
		int32_t L_10 = (__this->f2);
		int32_t L_11 = ((int32_t)((int32_t)L_10+(int32_t)1));
		V_1 = L_11;
		__this->f2 = L_11;
		int32_t L_12 = V_1;
		int32_t L_13 = (__this->f3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}

IL_007e:
	{
		__this->f5 = NULL;
		__this->f6 = NULL;
		return 0;
	}
}
extern MethodInfo m8456_MI;
extern "C" t1155  m8456 (t1672 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8453(__this, &m8453_MI);
		t9 * L_2 = (__this->f5);
		t9 * L_3 = (__this->f6);
		t1155  L_4 = {0};
		m5686(&L_4, L_2, L_3, &m5686_MI);
		return L_4;
	}
}
extern MethodInfo m8457_MI;
extern "C" t9 * m8457 (t1672 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8453(__this, &m8453_MI);
		t9 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m8458_MI;
extern "C" t9 * m8458 (t1672 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8453(__this, &m8453_MI);
		t9 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m8459_MI;
extern "C" t9 * m8459 (t1672 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = (__this->f4);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0029;
		}
		if (L_3 == 1)
		{
			goto IL_0030;
		}
		if (L_3 == 2)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_004e;
	}

IL_0029:
	{
		t9 * L_4 = (__this->f5);
		return L_4;
	}

IL_0030:
	{
		t9 * L_5 = (__this->f6);
		return L_5;
	}

IL_0037:
	{
		t9 * L_6 = (__this->f5);
		t9 * L_7 = (__this->f6);
		t1155  L_8 = {0};
		m5686(&L_8, L_6, L_7, &m5686_MI);
		t1155  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t1155_TI), &L_9);
		return L_10;
	}

IL_004e:
	{
		t138 * L_11 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_11, (t2*) &_stringLiteral1429, &m379_MI);
		il2cpp_codegen_raise_exception(L_11);
	}
}
#include "t1673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1673_TI;
#include "t1673MD.h"

#include "t1149MD.h"
extern MethodInfo m5893_MI;
extern MethodInfo m8482_MI;
extern MethodInfo m8483_MI;
extern MethodInfo m11115_MI;
extern MethodInfo m8461_MI;
extern MethodInfo m8496_MI;


extern MethodInfo m8460_MI;
extern "C" void m8460 (t1673 * __this, t1149 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1149 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1149 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8461 (t1673 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5893_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8462_MI;
extern "C" bool m8462 (t1673 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8482_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8463_MI;
extern "C" t9 * m8463 (t1673 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8483_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8464_MI;
extern "C" void m8464 (t1673 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5695(L_2, &m5695_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral330, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		int32_t L_5 = p1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_6, (t2*) &_stringLiteral431, &m5693_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5689(L_7, &m5689_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8461_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_11, (t2*) &_stringLiteral1431, &m2885_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1149 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8496(L_12, L_13, L_14, 0, &m8496_MI);
		return;
	}
}
extern MethodInfo m8465_MI;
extern "C" t9 * m8465 (t1673 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t1672 * L_1 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8451(L_1, L_0, 0, &m8451_MI);
		return L_1;
	}
}
#include "t1674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;
#include "t1674MD.h"

extern MethodInfo m8467_MI;


extern MethodInfo m8466_MI;
extern "C" void m8466 (t1674 * __this, t1149 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1149 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1149 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8467 (t1674 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5893_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8468_MI;
extern "C" bool m8468 (t1674 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8482_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8469_MI;
extern "C" t9 * m8469 (t1674 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8483_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8470_MI;
extern "C" void m8470 (t1674 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5695(L_2, &m5695_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral330, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		int32_t L_5 = p1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_6, (t2*) &_stringLiteral431, &m5693_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5689(L_7, &m5689_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8467_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_11, (t2*) &_stringLiteral1431, &m2885_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1149 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8496(L_12, L_13, L_14, 1, &m8496_MI);
		return;
	}
}
extern MethodInfo m8471_MI;
extern "C" t9 * m8471 (t1674 * __this, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t1672 * L_1 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8451(L_1, L_0, 1, &m8451_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2153.h"
#include "t1333.h"
extern TypeInfo t1675_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t1152_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1163_TI;
extern TypeInfo t1162_TI;
extern TypeInfo t1333_TI;
#include "t123MD.h"
#include "t1333MD.h"
extern Il2CppType t1675_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t9_0_0_0;
extern MethodInfo m5687_MI;
extern MethodInfo m8489_MI;
extern MethodInfo m8490_MI;
extern MethodInfo m8495_MI;
extern MethodInfo m8473_MI;
extern MethodInfo m7394_MI;
extern MethodInfo m8499_MI;
extern MethodInfo m8492_MI;
extern MethodInfo m8481_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m5682_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m5728_MI;
extern MethodInfo m5708_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m8477_MI;
extern MethodInfo m8485_MI;
extern MethodInfo m11972_MI;
extern MethodInfo m5690_MI;
extern MethodInfo m8493_MI;
extern MethodInfo m5894_MI;
extern MethodInfo m8474_MI;
extern MethodInfo m10302_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m5704_MI;
extern MethodInfo m8491_MI;
extern MethodInfo m11973_MI;
extern MethodInfo m11974_MI;
extern MethodInfo m11975_MI;
extern MethodInfo m671_MI;
extern MethodInfo m5688_MI;
extern MethodInfo m8494_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4233_MI;
extern MethodInfo m8497_MI;
extern MethodInfo m8498_MI;
extern FieldInfo t2163_f19_FieldInfo;


extern MethodInfo m5883_MI;
extern "C" void m5883 (t1149 * __this, MethodInfo* method)
{
	{
		m8473(__this, 0, (1.0f), &m8473_MI);
		return;
	}
}
extern TypeInfo* t1675_TI_var;
extern TypeInfo* t1088_TI_var;
extern "C" void m8472 (t1149 * __this, int32_t p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	static bool m8472_init;
	if (!m8472_init)
	{
		t1675_TI_var = il2cpp_codegen_class_from_type(&t1675_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8472_init = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_1, (t2*) &_stringLiteral400, (t2*) &_stringLiteral1418, &m4336_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		float L_2 = p1;
		if ((((float)L_2) < ((float)(0.1f))))
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = p1;
		if ((((float)L_3) > ((float)(1.0f))))
		{
			goto IL_0032;
		}
	}
	{
		float L_4 = p1;
		bool L_5 = m7394(NULL, L_4, &m7394_MI);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_6, (t2*) &_stringLiteral1419, (t2*) &_stringLiteral1420, &m4336_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0042:
	{
		int32_t L_7 = p0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = p0;
		p0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_004c:
	{
		float L_9 = p1;
		__this->f3 = ((float)((float)(0.75f)*(float)L_9));
		int32_t L_10 = p0;
		float L_11 = (__this->f3);
		V_0 = (((double)((float)((float)(((float)L_10))/(float)L_11))));
		double L_12 = V_0;
		if ((!(((double)L_12) > ((double)(2147483647.0)))))
		{
			goto IL_007b;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral1421, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007b:
	{
		double L_14 = V_0;
		V_1 = (((int32_t)L_14));
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		int32_t L_16 = m8499(NULL, L_15, &m8499_MI);
		V_1 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		m8492(__this, ((t1675*)SZArrayNew(t1675_TI_var, L_17)), ((t1088*)SZArrayNew(t1088_TI_var, L_18)), &m8492_MI);
		t9 * L_19 = p2;
		m8481(__this, L_19, &m8481_MI);
		t9 * L_20 = p3;
		m8480(__this, L_20, &m8480_MI);
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" void m8473 (t1149 * __this, int32_t p0, float p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8472(__this, L_0, L_1, (t9 *)NULL, (t9 *)NULL, &m8472_MI);
		return;
	}
}
extern MethodInfo m5890_MI;
extern "C" void m5890 (t1149 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8473(__this, L_0, (1.0f), &m8473_MI);
		return;
	}
}
extern TypeInfo* t1675_TI_var;
extern TypeInfo* t1088_TI_var;
extern "C" void m8474 (t1149 * __this, t1149 * p0, MethodInfo* method)
{
	static bool m8474_init;
	if (!m8474_init)
	{
		t1675_TI_var = il2cpp_codegen_class_from_type(&t1675_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8474_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1149 * L_0 = p0;
		int32_t L_1 = (L_0->f1);
		__this->f1 = L_1;
		t1149 * L_2 = p0;
		float L_3 = (L_2->f3);
		__this->f3 = L_3;
		t1149 * L_4 = p0;
		t1675* L_5 = (L_4->f4);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_5);
		__this->f4 = ((t1675*)Castclass(L_6, t1675_TI_var));
		t1149 * L_7 = p0;
		t1088* L_8 = (L_7->f5);
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_8);
		__this->f5 = ((t1088*)Castclass(L_9, t1088_TI_var));
		t1149 * L_10 = p0;
		int32_t L_11 = (L_10->f6);
		__this->f6 = L_11;
		t1149 * L_12 = p0;
		t9 * L_13 = (L_12->f9);
		__this->f9 = L_13;
		t1149 * L_14 = p0;
		t9 * L_15 = (L_14->f10);
		__this->f10 = L_15;
		t1149 * L_16 = p0;
		t9 * L_17 = (L_16->f12);
		__this->f12 = L_17;
		return;
	}
}
extern MethodInfo m5678_MI;
extern "C" void m5678 (t1149 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8472(__this, L_0, (1.0f), L_1, L_2, &m8472_MI);
		return;
	}
}
extern "C" void m8475 (t1149 * __this, t9 * p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1149 * G_B2_0 = {0};
	t1149 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1149 * G_B3_1 = {0};
	{
		t9 * L_0 = p0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		float L_3 = p1;
		t9 * L_4 = p2;
		t9 * L_5 = p3;
		m8472(G_B3_1, G_B3_0, L_3, L_4, L_5, &m8472_MI);
		t9 * L_6 = p0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0024:
	{
		t9 * L_8 = p0;
		t9 * L_9 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5682_MI, L_8);
		V_0 = L_9;
		goto IL_003f;
	}

IL_002d:
	{
		t9 * L_10 = V_0;
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5729_MI, L_10);
		t9 * L_12 = V_0;
		t9 * L_13 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_12);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, __this, L_11, L_13);
	}

IL_003f:
	{
		t9 * L_14 = V_0;
		bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_14);
		if (L_15)
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
extern MethodInfo m5684_MI;
extern "C" void m5684 (t1149 * __this, t9 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8475(__this, L_0, (1.0f), L_1, L_2, &m8475_MI);
		return;
	}
}
extern MethodInfo m5735_MI;
extern "C" void m5735 (t1149 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8472(__this, 1, (1.0f), L_0, L_1, &m8472_MI);
		return;
	}
}
extern MethodInfo m8476_MI;
extern "C" void m8476 (t1149 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m5697_MI;
extern "C" void m5697 (t1149 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		m8477(__this, L_0, (1.0f), L_1, &m8477_MI);
		return;
	}
}
extern "C" void m8477 (t1149 * __this, int32_t p0, float p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8473(__this, L_0, L_1, &m8473_MI);
		t9 * L_2 = p2;
		__this->f12 = L_2;
		return;
	}
}
extern MethodInfo m8478_MI;
extern TypeInfo* t1088_TI_var;
extern "C" void m8478 (t9 * __this , MethodInfo* method)
{
	static bool m8478_init;
	if (!m8478_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8478_init = true;
	}
	{
		t1088* L_0 = ((t1088*)SZArrayNew(t1088_TI_var, ((int32_t)34)));
		m1107(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2163_f19_FieldInfo), &m1107_MI);
		((t1149_SFs*)InitializedTypeInfo(&t1149_TI)->static_fields)->f13 = L_0;
		return;
	}
}
extern MethodInfo m8479_MI;
extern "C" t9 * m8479 (t1149 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t1672 * L_0 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8451(L_0, __this, 2, &m8451_MI);
		return L_0;
	}
}
extern "C" void m8480 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f10 = L_0;
		return;
	}
}
extern "C" void m8481 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" int32_t m5893 (t1149 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" bool m8482 (t1149 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m8483 (t1149 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m5911_MI;
extern "C" t9 * m5911 (t1149 * __this, MethodInfo* method)
{
	{
		t1673 * L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1673 * L_1 = (t1673 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1673_TI));
		m8460(L_1, __this, &m8460_MI);
		__this->f7 = L_1;
	}

IL_0014:
	{
		t1673 * L_2 = (__this->f7);
		return L_2;
	}
}
extern MethodInfo m6950_MI;
extern "C" t9 * m6950 (t1149 * __this, MethodInfo* method)
{
	{
		t1674 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1674 * L_1 = (t1674 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1674_TI));
		m8466(L_1, __this, &m8466_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1674 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m5707_MI;
extern "C" t9 * m5707 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	t1675* V_0 = {0};
	t1088* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1669  V_7 = {0};
	int32_t V_8 = 0;
	t9 * V_9 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5687(L_1, (t2*) &_stringLiteral409, (t2*) &_stringLiteral1417, &m5687_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1675* L_2 = (__this->f4);
		V_0 = L_2;
		t1088* L_3 = (__this->f5);
		V_1 = L_3;
		t1675* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8489_MI, __this, L_5);
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)));
		int32_t L_7 = V_3;
		V_4 = L_7;
		int32_t L_8 = V_3;
		uint32_t L_9 = V_2;
		V_5 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8>>(int32_t)5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_9-(int32_t)1))))+(int32_t)1));
		uint32_t L_10 = V_2;
		V_6 = L_10;
		goto IL_00b0;
	}

IL_0048:
	{
		uint32_t L_11 = V_4;
		uint32_t L_12 = V_2;
		V_4 = ((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)L_12));
		t1675* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1669 *)((t1669 *)(t1669 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1088* L_15 = V_1;
		uint32_t L_16 = V_4;
		uintptr_t L_17 = (((uintptr_t)L_16));
		V_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17));
		t9 * L_18 = ((&V_7)->f0);
		V_9 = L_18;
		t9 * L_19 = V_9;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00b5;
	}

IL_0074:
	{
		t9 * L_20 = V_9;
		t9 * L_21 = p0;
		if ((((t9*)(t9 *)L_20) == ((t9*)(t9 *)L_21)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_8;
		int32_t L_23 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)2147483647)))) == ((uint32_t)L_23))))
		{
			goto IL_0097;
		}
	}
	{
		t9 * L_24 = p0;
		t9 * L_25 = V_9;
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8490_MI, __this, L_24, L_25);
		if (!L_26)
		{
			goto IL_0097;
		}
	}

IL_008f:
	{
		t9 * L_27 = ((&V_7)->f1);
		return L_27;
	}

IL_0097:
	{
		int32_t L_28 = V_8;
		if (((int32_t)((int32_t)L_28&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_00b5;
	}

IL_00a3:
	{
		uint32_t L_29 = V_4;
		uint32_t L_30 = V_5;
		V_4 = ((int32_t)((int32_t)L_29+(int32_t)L_30));
		uint32_t L_31 = V_6;
		V_6 = ((int32_t)((int32_t)L_31-(int32_t)1));
	}

IL_00b0:
	{
		uint32_t L_32 = V_6;
		if ((!(((uint32_t)L_32) <= ((uint32_t)0))))
		{
			goto IL_0048;
		}
	}

IL_00b5:
	{
		return NULL;
	}
}
extern MethodInfo m5891_MI;
extern "C" void m5891 (t1149 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8495(__this, L_0, L_1, 1, &m8495_MI);
		return;
	}
}
extern MethodInfo m8484_MI;
extern "C" void m8484 (t1149 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_3, (t2*) &_stringLiteral431, &m5693_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral434, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5689(L_7, &m5689_MI);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = p1;
		t121 * L_10 = p0;
		int32_t L_11 = m5689(L_10, &m5689_MI);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_004e;
		}
	}
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral432, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = p1;
		int32_t L_14 = (__this->f1);
		t121 * L_15 = p0;
		int32_t L_16 = m5689(L_15, &m5689_MI);
		if ((((int32_t)((int32_t)((int32_t)L_13+(int32_t)L_14))) <= ((int32_t)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral1422, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0069:
	{
		t9 * L_18 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8485_MI, __this);
		V_0 = L_18;
		int32_t L_19 = p1;
		V_1 = L_19;
		goto IL_008a;
	}

IL_0074:
	{
		t121 * L_20 = p0;
		t9 * L_21 = V_0;
		t1155  L_22 = (t1155 )InterfaceFuncInvoker0< t1155  >::Invoke(&m11972_MI, L_21);
		t1155  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t1155_TI), &L_23);
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		m5690(L_20, L_24, L_26, &m5690_MI);
	}

IL_008a:
	{
		t9 * L_27 = V_0;
		bool L_28 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_27);
		if (L_28)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}
}
extern "C" void m5708 (t1149 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8495(__this, L_0, L_1, 0, &m8495_MI);
		return;
	}
}
extern MethodInfo m5910_MI;
extern "C" void m5910 (t1149 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		t1675* L_0 = (__this->f4);
		int32_t L_1 = V_0;
		((t1669 *)(t1669 *)SZArrayLdElema(L_0, L_1))->f0 = NULL;
		t1675* L_2 = (__this->f4);
		int32_t L_3 = V_0;
		((t1669 *)(t1669 *)SZArrayLdElema(L_2, L_3))->f1 = NULL;
		t1088* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		t1675* L_8 = (__this->f4);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		__this->f1 = 0;
		int32_t L_9 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		return;
	}
}
extern "C" bool m5894 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8493(__this, L_0, &m8493_MI);
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t9 * m8485 (t1149 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t1672 * L_0 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8451(L_0, __this, 2, &m8451_MI);
		return L_0;
	}
}
extern MethodInfo m5892_MI;
extern "C" void m5892 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1675* V_1 = {0};
	int32_t V_2 = 0;
	t1669 * G_B3_0 = {0};
	t1669 * G_B2_0 = {0};
	t1670 * G_B4_0 = {0};
	t1669 * G_B4_1 = {0};
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8493(__this, L_0, &m8493_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		t1675* L_3 = (__this->f4);
		V_1 = L_3;
		t1088* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648)));
		t1088* L_8 = (__this->f5);
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		t1675* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		G_B2_0 = ((t1669 *)(t1669 *)SZArrayLdElema(L_11, L_12));
		if (!L_13)
		{
			G_B3_0 = ((t1669 *)(t1669 *)SZArrayLdElema(L_11, L_12));
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_14 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0;
		G_B4_0 = L_14;
		G_B4_1 = G_B2_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = ((t1670 *)(NULL));
		G_B4_1 = G_B3_0;
	}

IL_003f:
	{
		G_B4_1->f0 = G_B4_0;
		t1675* L_15 = V_1;
		int32_t L_16 = V_0;
		((t1669 *)(t1669 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
		int32_t L_17 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_17-(int32_t)1));
		int32_t L_18 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_006d:
	{
		return;
	}
}
extern MethodInfo m5739_MI;
extern "C" bool m5739 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5894_MI, __this, L_0);
		return L_1;
	}
}
extern MethodInfo m8486_MI;
extern "C" t9 * m8486 (t1149 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m8474(L_0, __this, &m8474_MI);
		return L_0;
	}
}
extern MethodInfo m8487_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8487 (t1149 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m8487_init;
	if (!m8487_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8487_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
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
		float L_3 = (__this->f3);
		m10302(L_2, (t2*) &_stringLiteral1423, L_3, &m10302_MI);
		t1093 * L_4 = p0;
		int32_t L_5 = (__this->f2);
		m5702(L_4, (t2*) &_stringLiteral420, L_5, &m5702_MI);
		t9 * L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		t1093 * L_7 = p0;
		t9 * L_8 = (__this->f12);
		m5715(L_7, (t2*) &_stringLiteral419, L_8, &m5715_MI);
		goto IL_005c;
	}

IL_004b:
	{
		t1093 * L_9 = p0;
		t9 * L_10 = (__this->f10);
		m5715(L_9, (t2*) &_stringLiteral422, L_10, &m5715_MI);
	}

IL_005c:
	{
		t9 * L_11 = (__this->f9);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		t1093 * L_12 = p0;
		t9 * L_13 = (__this->f9);
		m5715(L_12, (t2*) &_stringLiteral1424, L_13, &m5715_MI);
	}

IL_0075:
	{
		t1093 * L_14 = p0;
		t1675* L_15 = (__this->f4);
		m5702(L_14, (t2*) &_stringLiteral1382, (((int32_t)(((t121 *)L_15)->max_length))), &m5702_MI);
		int32_t L_16 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_16));
		t158* L_17 = V_0;
		m8496(__this, (t121 *)(t121 *)L_17, 0, 0, &m8496_MI);
		int32_t L_18 = (__this->f1);
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_18));
		t158* L_19 = V_1;
		m8496(__this, (t121 *)(t121 *)L_19, 0, 1, &m8496_MI);
		t1093 * L_20 = p0;
		t158* L_21 = V_0;
		m5715(L_20, (t2*) &_stringLiteral425, (t9 *)(t9 *)L_21, &m5715_MI);
		t1093 * L_22 = p0;
		t158* L_23 = V_1;
		m5715(L_22, (t2*) &_stringLiteral426, (t9 *)(t9 *)L_23, &m5715_MI);
		t1093 * L_24 = p0;
		t9 * L_25 = (__this->f12);
		m5715(L_24, (t2*) &_stringLiteral1425, L_25, &m5715_MI);
		return;
	}
}
extern MethodInfo m8488_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1675_TI_var;
extern TypeInfo* t1088_TI_var;
extern "C" void m8488 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	static bool m8488_init;
	if (!m8488_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1675_TI_var = il2cpp_codegen_class_from_type(&t1675_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8488_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	t158* V_2 = {0};
	int32_t V_3 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1093 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		t1093 * L_1 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t123_0_0_0), &m329_MI);
		t9 * L_3 = m5703(L_1, (t2*) &_stringLiteral1423, L_2, &m5703_MI);
		__this->f3 = ((*(float*)((float*)UnBox (L_3, InitializedTypeInfo(&t123_TI)))));
		t1093 * L_4 = (__this->f11);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_6 = m5703(L_4, (t2*) &_stringLiteral420, L_5, &m5703_MI);
		__this->f2 = ((*(int32_t*)((int32_t*)UnBox (L_6, InitializedTypeInfo(&t125_TI)))));
	}

IL_0053:
	try
	{ // begin try (depth: 1)
		t1093 * L_7 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_9 = m5703(L_7, (t2*) &_stringLiteral419, L_8, &m5703_MI);
		__this->f12 = ((t9 *)Castclass(L_9, InitializedTypeInfo(&t1163_TI)));
		goto IL_007d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_007a;
		throw e;
	}

CATCH_007a:
	{ // begin catch(System.Object)
		goto IL_007d;
	} // end catch (depth: 1)

IL_007d:
	{
		t9 * L_10 = (__this->f12);
		if (L_10)
		{
			goto IL_00aa;
		}
	}
	{
		t1093 * L_11 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_13 = m5703(L_11, (t2*) &_stringLiteral422, L_12, &m5703_MI);
		__this->f10 = ((t9 *)Castclass(L_13, InitializedTypeInfo(&t1156_TI)));
	}

IL_00aa:
	try
	{ // begin try (depth: 1)
		t1093 * L_14 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_16 = m5703(L_14, (t2*) &_stringLiteral1424, L_15, &m5703_MI);
		__this->f9 = ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1162_TI)));
		goto IL_00d4;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_00d1;
		throw e;
	}

CATCH_00d1:
	{ // begin catch(System.Object)
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00d4:
	{
		t1093 * L_17 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_18 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_19 = m5703(L_17, (t2*) &_stringLiteral1382, L_18, &m5703_MI);
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_19, InitializedTypeInfo(&t125_TI)))));
		t1093 * L_20 = (__this->f11);
		t126 * L_21 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_22 = m5703(L_20, (t2*) &_stringLiteral425, L_21, &m5703_MI);
		V_1 = ((t158*)Castclass(L_22, t158_TI_var));
		t1093 * L_23 = (__this->f11);
		t126 * L_24 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_25 = m5703(L_23, (t2*) &_stringLiteral426, L_24, &m5703_MI);
		V_2 = ((t158*)Castclass(L_25, t158_TI_var));
		t158* L_26 = V_1;
		t158* L_27 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_27)->max_length))))))
		{
			goto IL_0147;
		}
	}
	{
		t1333 * L_28 = (t1333 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1333_TI));
		m5704(L_28, (t2*) &_stringLiteral1426, &m5704_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_0147:
	{
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		int32_t L_30 = m8499(NULL, L_29, &m8499_MI);
		V_0 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		m8492(__this, ((t1675*)SZArrayNew(t1675_TI_var, L_31)), ((t1088*)SZArrayNew(t1088_TI_var, L_32)), &m8492_MI);
		V_3 = 0;
		goto IL_0174;
	}

IL_0164:
	{
		t158* L_33 = V_1;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		t158* L_36 = V_2;
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5708_MI, __this, (*(t9 **)(t9 **)SZArrayLdElema(L_33, L_35)), (*(t9 **)(t9 **)SZArrayLdElema(L_36, L_38)));
		int32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_0174:
	{
		int32_t L_40 = V_3;
		t158* L_41 = V_1;
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((t121 *)L_41)->max_length))))))
		{
			goto IL_0164;
		}
	}
	{
		m8491(__this, &m8491_MI);
		__this->f11 = (t1093 *)NULL;
		return;
	}
}
extern "C" int32_t m8489 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f12);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_1 = (__this->f12);
		t9 * L_2 = p0;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11973_MI, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		t9 * L_4 = (__this->f9);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_5);
		return L_6;
	}

IL_0024:
	{
		t9 * L_7 = (__this->f9);
		t9 * L_8 = p0;
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11974_MI, L_7, L_8);
		return L_9;
	}
}
extern "C" bool m8490 (t1149 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_1 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t1670 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t9 * L_2 = (__this->f12);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		t9 * L_3 = (__this->f12);
		t9 * L_4 = p0;
		t9 * L_5 = p1;
		bool L_6 = (bool)InterfaceFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m11975_MI, L_3, L_4, L_5);
		return L_6;
	}

IL_0020:
	{
		t9 * L_7 = (__this->f10);
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		t9 * L_8 = p0;
		t9 * L_9 = p1;
		bool L_10 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m671_MI, L_8, L_9);
		return L_10;
	}

IL_0030:
	{
		t9 * L_11 = (__this->f10);
		t9 * L_12 = p0;
		t9 * L_13 = p1;
		int32_t L_14 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5688_MI, L_11, L_12, L_13);
		return ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8491 (t1149 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1675* L_0 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = V_0;
		float L_2 = (__this->f3);
		__this->f6 = (((int32_t)((float)((float)(((float)L_1))*(float)L_2))));
		int32_t L_3 = (__this->f6);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->f6 = ((int32_t)((int32_t)L_5-(int32_t)1));
	}

IL_002b:
	{
		return;
	}
}
extern "C" void m8492 (t1149 * __this, t1675* p0, t1088* p1, MethodInfo* method)
{
	{
		t1675* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1427, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1675* L_2 = p0;
		__this->f4 = L_2;
		t1088* L_3 = p1;
		__this->f5 = L_3;
		m8491(__this, &m8491_MI);
		return;
	}
}
extern "C" int32_t m8493 (t1149 * __this, t9 * p0, MethodInfo* method)
{
	t1675* V_0 = {0};
	t1088* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1669  V_7 = {0};
	int32_t V_8 = 0;
	t9 * V_9 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5687(L_1, (t2*) &_stringLiteral409, (t2*) &_stringLiteral1417, &m5687_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1675* L_2 = (__this->f4);
		V_0 = L_2;
		t1088* L_3 = (__this->f5);
		V_1 = L_3;
		t1675* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8489_MI, __this, L_5);
		V_3 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)));
		int32_t L_7 = V_3;
		V_4 = L_7;
		int32_t L_8 = V_3;
		uint32_t L_9 = V_2;
		V_5 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8>>(int32_t)5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_9-(int32_t)1))))+(int32_t)1));
		uint32_t L_10 = V_2;
		V_6 = L_10;
		goto IL_00ab;
	}

IL_0048:
	{
		uint32_t L_11 = V_4;
		uint32_t L_12 = V_2;
		V_4 = ((int32_t)((uint32_t)(int32_t)L_11%(uint32_t)(int32_t)L_12));
		t1675* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1669 *)((t1669 *)(t1669 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1088* L_15 = V_1;
		uint32_t L_16 = V_4;
		uintptr_t L_17 = (((uintptr_t)L_16));
		V_8 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_17));
		t9 * L_18 = ((&V_7)->f0);
		V_9 = L_18;
		t9 * L_19 = V_9;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		goto IL_00b0;
	}

IL_0074:
	{
		t9 * L_20 = V_9;
		t9 * L_21 = p0;
		if ((((t9*)(t9 *)L_20) == ((t9*)(t9 *)L_21)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_22 = V_8;
		int32_t L_23 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)2147483647)))) == ((uint32_t)L_23))))
		{
			goto IL_0092;
		}
	}
	{
		t9 * L_24 = p0;
		t9 * L_25 = V_9;
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8490_MI, __this, L_24, L_25);
		if (!L_26)
		{
			goto IL_0092;
		}
	}

IL_008f:
	{
		uint32_t L_27 = V_4;
		return L_27;
	}

IL_0092:
	{
		int32_t L_28 = V_8;
		if (((int32_t)((int32_t)L_28&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00b0;
	}

IL_009e:
	{
		uint32_t L_29 = V_4;
		uint32_t L_30 = V_5;
		V_4 = ((int32_t)((int32_t)L_29+(int32_t)L_30));
		uint32_t L_31 = V_6;
		V_6 = ((int32_t)((int32_t)L_31-(int32_t)1));
	}

IL_00ab:
	{
		uint32_t L_32 = V_6;
		if ((!(((uint32_t)L_32) <= ((uint32_t)0))))
		{
			goto IL_0048;
		}
	}

IL_00b0:
	{
		return (-1);
	}
}
extern TypeInfo* t1675_TI_var;
extern TypeInfo* t1088_TI_var;
extern "C" void m8494 (t1149 * __this, MethodInfo* method)
{
	static bool m8494_init;
	if (!m8494_init)
	{
		t1675_TI_var = il2cpp_codegen_class_from_type(&t1675_0_0_0);
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8494_init = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	t1675* V_2 = {0};
	t1675* V_3 = {0};
	t1088* V_4 = {0};
	t1088* V_5 = {0};
	int32_t V_6 = 0;
	t1669  V_7 = {0};
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		t1675* L_0 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		int32_t L_2 = m8499(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1<<(int32_t)1))|(int32_t)1)), &m8499_MI);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((t1675*)SZArrayNew(t1675_TI_var, (((uintptr_t)L_3))));
		t1675* L_4 = (__this->f4);
		V_3 = L_4;
		uint32_t L_5 = V_1;
		V_4 = ((t1088*)SZArrayNew(t1088_TI_var, (((uintptr_t)L_5))));
		t1088* L_6 = (__this->f5);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00f2;
	}

IL_003c:
	{
		t1675* L_7 = V_3;
		int32_t L_8 = V_6;
		V_7 = (*(t1669 *)((t1669 *)(t1669 *)SZArrayLdElema(L_7, L_8)));
		t9 * L_9 = ((&V_7)->f0);
		if (!L_9)
		{
			goto IL_00ec;
		}
	}
	{
		t1088* L_10 = V_5;
		int32_t L_11 = V_6;
		int32_t L_12 = L_11;
		V_8 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12))&(int32_t)((int32_t)2147483647)));
		int32_t L_13 = V_8;
		V_9 = L_13;
		int32_t L_14 = V_8;
		uint32_t L_15 = V_1;
		V_10 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14>>(int32_t)5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_15-(int32_t)1))))+(int32_t)1));
		uint32_t L_16 = V_9;
		uint32_t L_17 = V_1;
		V_11 = ((int32_t)((uint32_t)(int32_t)L_16%(uint32_t)(int32_t)L_17));
		goto IL_00ea;
	}

IL_007e:
	{
		t1675* L_18 = V_2;
		uint32_t L_19 = V_11;
		t9 * L_20 = (((t1669 *)(t1669 *)SZArrayLdElema(L_18, (((uintptr_t)L_19))))->f0);
		if (L_20)
		{
			goto IL_00ca;
		}
	}
	{
		t1675* L_21 = V_2;
		uint32_t L_22 = V_11;
		t9 * L_23 = ((&V_7)->f0);
		((t1669 *)(t1669 *)SZArrayLdElema(L_21, (((uintptr_t)L_22))))->f0 = L_23;
		t1675* L_24 = V_2;
		uint32_t L_25 = V_11;
		t9 * L_26 = ((&V_7)->f1);
		((t1669 *)(t1669 *)SZArrayLdElema(L_24, (((uintptr_t)L_25))))->f1 = L_26;
		t1088* L_27 = V_4;
		uint32_t L_28 = V_11;
		int32_t* L_29 = ((int32_t*)(int32_t*)SZArrayLdElema(L_27, (((uintptr_t)L_28))));
		int32_t L_30 = V_8;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_29))|(int32_t)L_30));
		goto IL_00ec;
	}

IL_00ca:
	{
		t1088* L_31 = V_4;
		uint32_t L_32 = V_11;
		int32_t* L_33 = ((int32_t*)(int32_t*)SZArrayLdElema(L_31, (((uintptr_t)L_32))));
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_33))|(int32_t)((int32_t)-2147483648)));
		uint32_t L_34 = V_9;
		uint32_t L_35 = V_10;
		V_9 = ((int32_t)((int32_t)L_34+(int32_t)L_35));
		uint32_t L_36 = V_9;
		uint32_t L_37 = V_1;
		V_11 = ((int32_t)((uint32_t)(int32_t)L_36%(uint32_t)(int32_t)L_37));
	}

IL_00ea:
	{
		goto IL_007e;
	}

IL_00ec:
	{
		int32_t L_38 = V_6;
		V_6 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00f2:
	{
		int32_t L_39 = V_6;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_41 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_41+(int32_t)1));
		t1675* L_42 = V_2;
		t1088* L_43 = V_4;
		m8492(__this, L_42, L_43, &m8492_MI);
		return;
	}
}
extern "C" void m8495 (t1149 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	t1675* V_4 = {0};
	t1088* V_5 = {0};
	t1669  V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m5687(L_1, (t2*) &_stringLiteral409, (t2*) &_stringLiteral1417, &m5687_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->f1);
		int32_t L_3 = (__this->f6);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0027;
		}
	}
	{
		m8494(__this, &m8494_MI);
	}

IL_0027:
	{
		t1675* L_4 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8489_MI, __this, L_5);
		V_1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)));
		int32_t L_7 = V_1;
		V_2 = L_7;
		uint32_t L_8 = V_2;
		uint32_t L_9 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_8>>5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_9-(int32_t)1))))+(int32_t)1));
		t1675* L_10 = (__this->f4);
		V_4 = L_10;
		t1088* L_11 = (__this->f5);
		V_5 = L_11;
		V_7 = (-1);
		V_8 = 0;
		goto IL_0143;
	}

IL_0067:
	{
		uint32_t L_12 = V_2;
		uint32_t L_13 = V_0;
		V_9 = ((int32_t)((uint32_t)(int32_t)L_12%(uint32_t)(int32_t)L_13));
		t1675* L_14 = V_4;
		int32_t L_15 = V_9;
		V_6 = (*(t1669 *)((t1669 *)(t1669 *)SZArrayLdElema(L_14, L_15)));
		t1088* L_16 = V_5;
		int32_t L_17 = V_9;
		int32_t L_18 = L_17;
		V_10 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18));
		int32_t L_19 = V_7;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		t9 * L_20 = ((&V_6)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_21 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_20) == ((t9*)(t1670 *)L_21))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_22 = V_10;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_23 = V_9;
		V_7 = L_23;
	}

IL_00a4:
	{
		t9 * L_24 = ((&V_6)->f0);
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		t9 * L_25 = ((&V_6)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_26 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_25) == ((t9*)(t1670 *)L_26))))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_27 = V_10;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_00d3;
		}
	}

IL_00c5:
	{
		int32_t L_28 = V_7;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_29 = V_9;
		V_7 = L_29;
	}

IL_00ce:
	{
		goto IL_014d;
	}

IL_00d3:
	{
		int32_t L_30 = V_10;
		int32_t L_31 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))) == ((uint32_t)L_31))))
		{
			goto IL_0122;
		}
	}
	{
		t9 * L_32 = p0;
		t9 * L_33 = ((&V_6)->f0);
		bool L_34 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8490_MI, __this, L_32, L_33);
		if (!L_34)
		{
			goto IL_0122;
		}
	}
	{
		bool L_35 = p2;
		if (!L_35)
		{
			goto IL_0110;
		}
	}
	{
		t1675* L_36 = V_4;
		int32_t L_37 = V_9;
		t9 * L_38 = p1;
		((t1669 *)(t1669 *)SZArrayLdElema(L_36, L_37))->f1 = L_38;
		int32_t L_39 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_39+(int32_t)1));
		goto IL_0121;
	}

IL_0110:
	{
		t9 * L_40 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m511(NULL, (t2*) &_stringLiteral1428, L_40, &m511_MI);
		t556 * L_42 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_42, L_41, &m2885_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_0121:
	{
		return;
	}

IL_0122:
	{
		int32_t L_43 = V_7;
		if ((!(((uint32_t)L_43) == ((uint32_t)(-1)))))
		{
			goto IL_0139;
		}
	}
	{
		t1088* L_44 = V_5;
		int32_t L_45 = V_9;
		int32_t* L_46 = ((int32_t*)(int32_t*)SZArrayLdElema(L_44, L_45));
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_46))|(int32_t)((int32_t)-2147483648)));
	}

IL_0139:
	{
		uint32_t L_47 = V_2;
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((int32_t)L_47+(int32_t)L_48));
		int32_t L_49 = V_8;
		V_8 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_0143:
	{
		int32_t L_50 = V_8;
		uint32_t L_51 = V_0;
		if ((((int64_t)(((int64_t)L_50))) < ((int64_t)(((uint64_t)L_51)))))
		{
			goto IL_0067;
		}
	}

IL_014d:
	{
		int32_t L_52 = V_7;
		if ((((int32_t)L_52) == ((int32_t)(-1))))
		{
			goto IL_019a;
		}
	}
	{
		t1675* L_53 = V_4;
		int32_t L_54 = V_7;
		t9 * L_55 = p0;
		((t1669 *)(t1669 *)SZArrayLdElema(L_53, L_54))->f0 = L_55;
		t1675* L_56 = V_4;
		int32_t L_57 = V_7;
		t9 * L_58 = p1;
		((t1669 *)(t1669 *)SZArrayLdElema(L_56, L_57))->f1 = L_58;
		t1088* L_59 = V_5;
		int32_t L_60 = V_7;
		int32_t* L_61 = ((int32_t*)(int32_t*)SZArrayLdElema(L_59, L_60));
		int32_t L_62 = V_1;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_61))|(int32_t)L_62));
		int32_t L_63 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_019a:
	{
		return;
	}
}
extern "C" void m8496 (t1149 * __this, t121 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		int32_t L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1672_TI));
		t1672 * L_1 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8451(L_1, __this, L_0, &m8451_MI);
		V_0 = L_1;
		goto IL_001e;
	}

IL_000a:
	{
		t121 * L_2 = p0;
		t9 * L_3 = V_0;
		t9 * L_4 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_3);
		int32_t L_5 = p1;
		int32_t L_6 = L_5;
		p1 = ((int32_t)((int32_t)L_6+(int32_t)1));
		m5690(L_2, L_4, L_6, &m5690_MI);
	}

IL_001e:
	{
		t9 * L_7 = V_0;
		bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_7);
		if (L_8)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
extern "C" bool m8497 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = p0;
		double L_2 = sqrt((((double)L_1)));
		V_0 = (((int32_t)L_2));
		V_1 = 3;
		goto IL_001d;
	}

IL_0012:
	{
		int32_t L_3 = p0;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		return 0;
	}

IL_0019:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)2));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		int32_t L_8 = p0;
		return ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}
}
extern "C" int32_t m8498 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2)))-(int32_t)1));
		goto IL_0017;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		bool L_2 = m8497(NULL, L_1, &m8497_MI);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_6 = p0;
		return L_6;
	}
}
extern "C" int32_t m8499 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1088* L_1 = ((t1149_SFs*)InitializedTypeInfo(&t1149_TI)->static_fields)->f13;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		if ((((int32_t)L_0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1088* L_4 = ((t1149_SFs*)InitializedTypeInfo(&t1149_TI)->static_fields)->f13;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1088* L_9 = ((t1149_SFs*)InitializedTypeInfo(&t1149_TI)->static_fields)->f13;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		int32_t L_11 = m8498(NULL, L_10, &m8498_MI);
		return L_11;
	}
}
#include "t1676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;
#include "t1676MD.h"

#include "t1677.h"
extern TypeInfo t1677_TI;


extern MethodInfo m8500_MI;
extern "C" void m8500 (t1676 * __this, t1677 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1677 * L_0 = p0;
		__this->f0 = L_0;
		t1677 * L_1 = p0;
		int32_t L_2 = (L_1->f5);
		__this->f1 = L_2;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m8501_MI;
extern "C" t9 * m8501 (t1676 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1677 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f5);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = (__this->f2);
		t1677 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t1332 * L_7 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_7, &m5692_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t1677 * L_8 = (__this->f0);
		t158* L_9 = (L_8->f0);
		t1677 * L_10 = (__this->f0);
		int32_t L_11 = (L_10->f1);
		int32_t L_12 = (__this->f2);
		t1677 * L_13 = (__this->f0);
		t158* L_14 = (L_13->f0);
		int32_t L_15 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))%(int32_t)(((int32_t)(((t121 *)L_14)->max_length)))));
		return (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_15));
	}
}
extern MethodInfo m8502_MI;
extern "C" bool m8502 (t1676 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1677 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f5);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_3, &m5692_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		t1677 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)((int32_t)L_6-(int32_t)1)))))
		{
			goto IL_003b;
		}
	}
	{
		__this->f2 = ((int32_t)2147483647);
		return 0;
	}

IL_003b:
	{
		int32_t L_7 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1677MD.h"

extern MethodInfo m8506_MI;
extern MethodInfo m8504_MI;
extern MethodInfo m8514_MI;
extern MethodInfo m8516_MI;
extern MethodInfo m8510_MI;


extern MethodInfo m8503_MI;
extern "C" void m8503 (t1677 * __this, MethodInfo* method)
{
	{
		m8506(__this, ((int32_t)32), (2.0f), &m8506_MI);
		return;
	}
}
extern "C" void m8504 (t1677 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8506(__this, L_0, (2.0f), &m8506_MI);
		return;
	}
}
extern MethodInfo m8505_MI;
extern "C" void m8505 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1677 * G_B2_0 = {0};
	t1677 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1677 * G_B3_1 = {0};
	{
		t9 * L_0 = p0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = ((int32_t)32);
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_0008:
	{
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		m8504(G_B3_1, G_B3_0, &m8504_MI);
		t9 * L_3 = p0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1432, &m339_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t9 * L_5 = p0;
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4344_MI, L_5);
		V_1 = L_6;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_002a:
		{
			t9 * L_7 = V_1;
			t9 * L_8 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_7);
			V_0 = L_8;
			t9 * L_9 = V_0;
			VirtActionInvoker1< t9 * >::Invoke(&m8514_MI, __this, L_9);
		}

IL_0038:
		{
			t9 * L_10 = V_1;
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_10);
			if (L_11)
			{
				goto IL_002a;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			t9 * L_12 = V_1;
			V_2 = ((t9 *)IsInst(L_12, InitializedTypeInfo(&t137_TI)));
			t9 * L_13 = V_2;
			if (L_13)
			{
				goto IL_004d;
			}
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(66)
		}

IL_004d:
		{
			t9 * L_14 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_14);
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0054:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8506 (t1677 * __this, int32_t p0, float p1, MethodInfo* method)
{
	static bool m8506_init;
	if (!m8506_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8506_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_1, (t2*) &_stringLiteral400, (t2*) &_stringLiteral1433, &m4336_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		float L_2 = p1;
		if ((!(((float)L_2) >= ((float)(1.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		float L_3 = p1;
		if ((((float)L_3) <= ((float)(10.0f))))
		{
			goto IL_003a;
		}
	}

IL_002a:
	{
		t896 * L_4 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_4, (t2*) &_stringLiteral1434, (t2*) &_stringLiteral1435, &m4336_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_003a:
	{
		int32_t L_5 = p0;
		__this->f0 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		float L_6 = p1;
		__this->f4 = (((int32_t)((float)((float)L_6*(float)(100.0f)))));
		return;
	}
}
extern MethodInfo m8507_MI;
extern "C" int32_t m8507 (t1677 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8508_MI;
extern "C" bool m8508 (t1677 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8509_MI;
extern "C" t9 * m8509 (t1677 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m8510 (t1677 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_3, (t2*) &_stringLiteral401, &m5693_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = p1;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5689(L_8, &m5689_MI);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		int32_t L_10 = (__this->f2);
		t121 * L_11 = p0;
		int32_t L_12 = m5689(L_11, &m5689_MI);
		int32_t L_13 = p1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13)))))
		{
			goto IL_0048;
		}
	}

IL_0042:
	{
		t556 * L_14 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_14, &m11109_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0048:
	{
		t158* L_15 = (__this->f0);
		V_0 = (((int32_t)(((t121 *)L_15)->max_length)));
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f1);
		V_1 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		t158* L_18 = (__this->f0);
		int32_t L_19 = (__this->f1);
		t121 * L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = (__this->f2);
		int32_t L_23 = V_1;
		int32_t L_24 = m11543(NULL, L_22, L_23, &m11543_MI);
		m7682(NULL, (t121 *)(t121 *)L_18, L_19, L_20, L_21, L_24, &m7682_MI);
		int32_t L_25 = (__this->f2);
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_009a;
		}
	}
	{
		t158* L_27 = (__this->f0);
		t121 * L_28 = p0;
		int32_t L_29 = p1;
		int32_t L_30 = V_1;
		int32_t L_31 = (__this->f2);
		int32_t L_32 = V_1;
		m7682(NULL, (t121 *)(t121 *)L_27, 0, L_28, ((int32_t)((int32_t)L_29+(int32_t)L_30)), ((int32_t)((int32_t)L_31-(int32_t)L_32)), &m7682_MI);
	}

IL_009a:
	{
		return;
	}
}
extern MethodInfo m8511_MI;
extern "C" t9 * m8511 (t1677 * __this, MethodInfo* method)
{
	{
		t1676 * L_0 = (t1676 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1676_TI));
		m8500(L_0, __this, &m8500_MI);
		return L_0;
	}
}
extern MethodInfo m8512_MI;
extern "C" void m8512 (t1677 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f5);
		__this->f5 = ((int32_t)((int32_t)L_0+(int32_t)1));
		__this->f1 = 0;
		__this->f2 = 0;
		__this->f3 = 0;
		t158* L_1 = (__this->f0);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))-(int32_t)1));
		goto IL_003d;
	}

IL_0030:
	{
		t158* L_2 = (__this->f0);
		int32_t L_3 = V_0;
		ArrayElementTypeCheck (L_2, NULL);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, L_3)) = (t9 *)NULL;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)1));
	}

IL_003d:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8513_MI;
extern "C" t9 * m8513 (t1677 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		int32_t L_0 = (__this->f5);
		__this->f5 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->f2);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_2, &m5692_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		t158* L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		int32_t L_5 = L_4;
		V_0 = (*(t9 **)(t9 **)SZArrayLdElema(L_3, L_5));
		t158* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		ArrayElementTypeCheck (L_6, NULL);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, L_7)) = (t9 *)NULL;
		int32_t L_8 = (__this->f1);
		t158* L_9 = (__this->f0);
		__this->f1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)1))%(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))));
		int32_t L_10 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_10-(int32_t)1));
		t9 * L_11 = V_0;
		return L_11;
	}
}
extern "C" void m8514 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		__this->f5 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->f2);
		t158* L_2 = (__this->f0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((t121 *)L_2)->max_length)))))))
		{
			goto IL_0024;
		}
	}
	{
		m8516(__this, &m8516_MI);
	}

IL_0024:
	{
		t158* L_3 = (__this->f0);
		int32_t L_4 = (__this->f3);
		t9 * L_5 = p0;
		ArrayElementTypeCheck (L_3, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_3, L_4)) = (t9 *)L_5;
		int32_t L_6 = (__this->f3);
		t158* L_7 = (__this->f0);
		__this->f3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6+(int32_t)1))%(int32_t)(((int32_t)(((t121 *)L_7)->max_length)))));
		int32_t L_8 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern MethodInfo m8515_MI;
extern "C" t9 * m8515 (t1677 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t158* L_2 = (__this->f0);
		int32_t L_3 = (__this->f1);
		int32_t L_4 = L_3;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_2, L_4));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8516 (t1677 * __this, MethodInfo* method)
{
	static bool m8516_init;
	if (!m8516_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8516_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		t158* L_0 = (__this->f0);
		int32_t L_1 = (__this->f4);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))*(int32_t)L_1))/(int32_t)((int32_t)100)));
		int32_t L_2 = V_0;
		t158* L_3 = (__this->f0);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_3)->max_length)))+(int32_t)1)))))
		{
			goto IL_002b;
		}
	}
	{
		t158* L_4 = (__this->f0);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_4)->max_length)))+(int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		t158* L_6 = V_1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m8510_MI, __this, (t121 *)(t121 *)L_6, 0);
		t158* L_7 = V_1;
		__this->f0 = L_7;
		__this->f1 = 0;
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f2);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		return;
	}
}
#include "t1678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1678_TI;
#include "t1678MD.h"



#include "t1679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1679_TI;
#include "t1679MD.h"



#include "t1680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1680_TI;
#include "t1680MD.h"

#include "t1335.h"
extern TypeInfo t1335_TI;
#include "t1335MD.h"
extern MethodInfo m8521_MI;
extern MethodInfo m5734_MI;
extern MethodInfo m8519_MI;


extern MethodInfo m8517_MI;
extern "C" void m8517 (t1680 * __this, t1335 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1335 * L_0 = p0;
		__this->f0 = L_0;
		t1335 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1335 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, L_3);
		__this->f3 = L_4;
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8519_MI, __this);
		return;
	}
}
extern MethodInfo m8518_MI;
extern "C" void m8518 (t9 * __this , MethodInfo* method)
{
	{
		((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8 = (t2*) &_stringLiteral1447;
		return;
	}
}
extern "C" void m8519 (t1680 * __this, MethodInfo* method)
{
	{
		t1335 * L_0 = (__this->f0);
		int32_t L_1 = (L_0->f2);
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		bool L_3 = (__this->f7);
		if (!L_3)
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		__this->f2 = (-1);
		__this->f5 = NULL;
		__this->f6 = NULL;
		return;
	}
}
extern MethodInfo m8520_MI;
extern "C" bool m8520 (t1680 * __this, MethodInfo* method)
{
	t1681* V_0 = {0};
	t1678  V_1 = {0};
	int32_t V_2 = 0;
	{
		t1335 * L_0 = (__this->f0);
		int32_t L_1 = (L_0->f2);
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		bool L_3 = (__this->f7);
		if (!L_3)
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1335 * L_6 = (__this->f0);
		t1681* L_7 = (L_6->f3);
		V_0 = L_7;
		int32_t L_8 = (__this->f2);
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)1));
		V_2 = L_9;
		__this->f2 = L_9;
		int32_t L_10 = V_2;
		int32_t L_11 = (__this->f3);
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0079;
		}
	}
	{
		t1681* L_12 = V_0;
		int32_t L_13 = (__this->f2);
		V_1 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_12, L_13)));
		t9 * L_14 = ((&V_1)->f0);
		__this->f5 = L_14;
		t9 * L_15 = ((&V_1)->f1);
		__this->f6 = L_15;
		return 1;
	}

IL_0079:
	{
		__this->f5 = NULL;
		__this->f6 = NULL;
		return 0;
	}
}
extern "C" t1155  m8521 (t1680 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		t9 * L_7 = (__this->f6);
		t1155  L_8 = {0};
		m5686(&L_8, L_6, L_7, &m5686_MI);
		return L_8;
	}
}
extern MethodInfo m8522_MI;
extern "C" t9 * m8522 (t1680 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		return L_6;
	}
}
extern MethodInfo m8523_MI;
extern "C" t9 * m8523 (t1680 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f6);
		return L_6;
	}
}
extern MethodInfo m8524_MI;
extern "C" t9 * m8524 (t1680 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		bool L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = (__this->f3);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t2* L_4 = ((t1680_SFs*)InitializedTypeInfo(&t1680_TI)->static_fields)->f8;
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, L_4, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		int32_t L_6 = (__this->f4);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if (L_7 == 0)
		{
			goto IL_0045;
		}
		if (L_7 == 1)
		{
			goto IL_004c;
		}
		if (L_7 == 2)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_005f;
	}

IL_0045:
	{
		t9 * L_8 = (__this->f5);
		return L_8;
	}

IL_004c:
	{
		t9 * L_9 = (__this->f6);
		return L_9;
	}

IL_0053:
	{
		t1155  L_10 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(&m8521_MI, __this);
		t1155  L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t1155_TI), &L_11);
		return L_12;
	}

IL_005f:
	{
		int32_t L_13 = (__this->f4);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t1679_TI), &L_14);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m511(NULL, L_15, (t2*) &_stringLiteral1446, &m511_MI);
		t169 * L_17 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_17, L_16, &m5706_MI);
		il2cpp_codegen_raise_exception(L_17);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1681_TI;
extern Il2CppType t1681_0_0_0;
extern MethodInfo m8545_MI;
extern MethodInfo m8532_MI;
extern MethodInfo m8547_MI;
extern MethodInfo m8531_MI;
extern MethodInfo m8544_MI;
extern MethodInfo m8526_MI;
extern MethodInfo m8546_MI;
extern MethodInfo m8542_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m8538_MI;
extern MethodInfo m8537_MI;
extern MethodInfo m8535_MI;
extern MethodInfo m515_MI;
extern MethodInfo m8543_MI;


extern MethodInfo m8525_MI;
extern "C" void m8525 (t1335 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1335_TI));
		int32_t L_0 = ((t1335_SFs*)InitializedTypeInfo(&t1335_TI)->static_fields)->f0;
		m8526(__this, (t9 *)NULL, L_0, &m8526_MI);
		return;
	}
}
extern MethodInfo m5730_MI;
extern "C" void m5730 (t1335 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8526(__this, (t9 *)NULL, L_0, &m8526_MI);
		return;
	}
}
extern "C" void m8526 (t1335 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p1;
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
		int32_t L_2 = p1;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		__this->f5 = 0;
		goto IL_002c;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1335_TI));
		int32_t L_3 = ((t1335_SFs*)InitializedTypeInfo(&t1335_TI)->static_fields)->f0;
		__this->f5 = L_3;
	}

IL_002c:
	{
		t9 * L_4 = p0;
		__this->f4 = L_4;
		int32_t L_5 = p1;
		m8546(__this, L_5, 1, &m8546_MI);
		return;
	}
}
extern MethodInfo m8527_MI;
extern "C" void m8527 (t9 * __this , MethodInfo* method)
{
	{
		((t1335_SFs*)InitializedTypeInfo(&t1335_TI)->static_fields)->f0 = ((int32_t)16);
		return;
	}
}
extern MethodInfo m8528_MI;
extern "C" t9 * m8528 (t1335 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t1680 * L_0 = (t1680 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1680_TI));
		m8517(L_0, __this, 2, &m8517_MI);
		return L_0;
	}
}
extern "C" int32_t m5734 (t1335 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8529_MI;
extern "C" bool m8529 (t1335 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8530_MI;
extern "C" t9 * m8530 (t1335 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m8531 (t1335 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m8532 (t1335 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8533_MI;
extern "C" t9 * m8533 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = m8545(__this, L_2, &m8545_MI);
		return L_3;
	}
}
extern MethodInfo m8534_MI;
extern "C" void m8534 (t1335 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8532_MI, __this);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_3, (t2*) &_stringLiteral1436, &m5706_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m8547(__this, L_4, &m8547_MI);
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8531_MI, __this);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_7, (t2*) &_stringLiteral1437, &m5706_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0039:
	{
		t9 * L_8 = p0;
		t9 * L_9 = p1;
		m8544(__this, L_8, L_9, 1, &m8544_MI);
		return;
	}
}
extern "C" int32_t m8535 (t1335 * __this, MethodInfo* method)
{
	{
		t1681* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m8536_MI;
extern TypeInfo* t1681_TI_var;
extern "C" void m8536 (t1335 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8536_init;
	if (!m8536_init)
	{
		t1681_TI_var = il2cpp_codegen_class_from_type(&t1681_0_0_0);
		m8536_init = true;
	}
	int32_t V_0 = 0;
	t1681* V_1 = {0};
	t1681* V_2 = {0};
	t1681* V_3 = {0};
	{
		t1681* L_0 = (__this->f3);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = (__this->f1);
		int32_t L_2 = p0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_3, (t2*) &_stringLiteral1438, &m5693_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = p0;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_5 = (__this->f5);
		V_1 = ((t1681*)SZArrayNew(t1681_TI_var, L_5));
		t1681* L_6 = (__this->f3);
		t1681* L_7 = V_1;
		int32_t L_8 = (__this->f1);
		m5912(NULL, (t121 *)(t121 *)L_6, (t121 *)(t121 *)L_7, L_8, &m5912_MI);
		t1681* L_9 = V_1;
		__this->f3 = L_9;
		goto IL_0091;
	}

IL_0047:
	{
		int32_t L_10 = p0;
		int32_t L_11 = (__this->f1);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_12 = p0;
		V_2 = ((t1681*)SZArrayNew(t1681_TI_var, L_12));
		t1681* L_13 = (__this->f3);
		t1681* L_14 = V_2;
		int32_t L_15 = (__this->f1);
		m5912(NULL, (t121 *)(t121 *)L_13, (t121 *)(t121 *)L_14, L_15, &m5912_MI);
		t1681* L_16 = V_2;
		__this->f3 = L_16;
		goto IL_0091;
	}

IL_0072:
	{
		int32_t L_17 = p0;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_19 = p0;
		V_3 = ((t1681*)SZArrayNew(t1681_TI_var, L_19));
		t1681* L_20 = (__this->f3);
		t1681* L_21 = V_3;
		int32_t L_22 = V_0;
		m5912(NULL, (t121 *)(t121 *)L_20, (t121 *)(t121 *)L_21, L_22, &m5912_MI);
		t1681* L_23 = V_3;
		__this->f3 = L_23;
	}

IL_0091:
	{
		return;
	}
}
extern MethodInfo m5732_MI;
extern "C" void m5732 (t1335 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8544(__this, L_0, L_1, 0, &m8544_MI);
		return;
	}
}
extern "C" bool m8537 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			int32_t L_3 = m8547(__this, L_2, &m8547_MI);
			V_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_0024;
		}

IL_0019:
		{
			goto IL_0024;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_001b:
	{ // begin catch(System.Exception)
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_4, &m5692_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0024;
	} // end catch (depth: 1)

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C" t9 * m8538 (t1335 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1680_TI));
		t1680 * L_0 = (t1680 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1680_TI));
		m8517(L_0, __this, 2, &m8517_MI);
		return L_0;
	}
}
extern MethodInfo m8539_MI;
extern "C" void m8539 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8542_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m8541_MI, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8540_MI;
extern "C" void m8540 (t1335 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_3, &m5870_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral1439, &m2885_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0027:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5689(L_8, &m5689_MI);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_003b;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_10, (t2*) &_stringLiteral1440, &m339_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003b:
	{
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		t121 * L_12 = p0;
		int32_t L_13 = m5689(L_12, &m5689_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_15 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_15, (t2*) &_stringLiteral1441, &m339_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0056:
	{
		t9 * L_16 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8538_MI, __this);
		V_0 = L_16;
		int32_t L_17 = p1;
		V_1 = L_17;
		goto IL_0077;
	}

IL_0061:
	{
		t121 * L_18 = p0;
		t9 * L_19 = V_0;
		t1155  L_20 = (t1155 )InterfaceFuncInvoker0< t1155  >::Invoke(&m11972_MI, L_19);
		t1155  L_21 = L_20;
		t9 * L_22 = Box(InitializedTypeInfo(&t1155_TI), &L_21);
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		m5690(L_18, L_22, L_24, &m5690_MI);
	}

IL_0077:
	{
		t9 * L_25 = V_0;
		bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_25);
		if (L_26)
		{
			goto IL_0061;
		}
	}
	{
		return;
	}
}
extern "C" void m8541 (t1335 * __this, int32_t p0, MethodInfo* method)
{
	t1681* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1681* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		V_1 = L_1;
		int32_t L_2 = p0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_3 = p0;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_5 = p0;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)((int32_t)L_6-(int32_t)1)))))
		{
			goto IL_002e;
		}
	}
	{
		t1681* L_7 = V_0;
		int32_t L_8 = p0;
		t1681* L_9 = V_0;
		int32_t L_10 = p0;
		int32_t L_11 = V_1;
		int32_t L_12 = p0;
		m7682(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8+(int32_t)1)), (t121 *)(t121 *)L_9, L_10, ((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)1))-(int32_t)L_12)), &m7682_MI);
		goto IL_0048;
	}

IL_002e:
	{
		t1681* L_13 = V_0;
		int32_t L_14 = p0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_13, L_14))->f0 = NULL;
		t1681* L_15 = V_0;
		int32_t L_16 = p0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
	}

IL_0048:
	{
		int32_t L_17 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_17-(int32_t)1));
		int32_t L_18 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		goto IL_0071;
	}

IL_0066:
	{
		t896 * L_19 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_19, (t2*) &_stringLiteral1442, &m5693_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0071:
	{
		return;
	}
}
extern "C" int32_t m8542 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		V_0 = 0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		t9 * L_2 = p0;
		int32_t L_3 = m8547(__this, L_2, &m8547_MI);
		V_0 = L_3;
		goto IL_001e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Exception)
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_4, &m5692_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		return ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)31)))));
	}
}
extern MethodInfo m5731_MI;
extern "C" bool m5731 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	bool V_0 = false;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_1, &m11115_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			bool L_3 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m8537_MI, __this, L_2);
			V_0 = L_3;
			goto IL_001e;
		}

IL_0013:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0015;
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Exception)
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_4, &m5692_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m5733_MI;
extern "C" t9 * m5733 (t1335 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		t1681* L_3 = (__this->f3);
		int32_t L_4 = p0;
		t9 * L_5 = (((t1678 *)(t1678 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001f:
	{
		t896 * L_6 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_6, (t2*) &_stringLiteral1442, &m5693_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern TypeInfo* t1681_TI_var;
extern "C" void m8543 (t1335 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8543_init;
	if (!m8543_init)
	{
		t1681_TI_var = il2cpp_codegen_class_from_type(&t1681_0_0_0);
		m8543_init = true;
	}
	t1681* V_0 = {0};
	t1681* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		t1681* L_0 = (__this->f3);
		V_0 = L_0;
		V_1 = (t1681*)NULL;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8535_MI, __this);
		V_2 = L_1;
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_3 = G_B3_0;
		int32_t L_5 = p0;
		int32_t L_6 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = p0;
		V_1 = ((t1681*)SZArrayNew(t1681_TI_var, ((int32_t)((int32_t)L_7<<(int32_t)1))));
	}

IL_002e:
	{
		t1681* L_8 = V_1;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_10 = p1;
		V_4 = L_10;
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		t1681* L_12 = V_0;
		t1681* L_13 = V_1;
		int32_t L_14 = V_4;
		m7682(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m7682_MI);
	}

IL_0047:
	{
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		int32_t L_16 = p1;
		V_4 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		t1681* L_18 = V_0;
		int32_t L_19 = p1;
		t1681* L_20 = V_1;
		int32_t L_21 = p1;
		int32_t L_22 = V_4;
		m7682(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, ((int32_t)((int32_t)L_21+(int32_t)1)), L_22, &m7682_MI);
	}

IL_0063:
	{
		goto IL_0072;
	}

IL_0065:
	{
		t1681* L_23 = V_0;
		t1681* L_24 = V_1;
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		m5912(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, L_25, &m5912_MI);
	}

IL_0072:
	{
		t1681* L_26 = V_1;
		__this->f3 = L_26;
		goto IL_0091;
	}

IL_007b:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0091;
		}
	}
	{
		t1681* L_28 = V_0;
		int32_t L_29 = p1;
		t1681* L_30 = V_0;
		int32_t L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		int32_t L_33 = p1;
		m7682(NULL, (t121 *)(t121 *)L_28, L_29, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)1)), ((int32_t)((int32_t)L_32-(int32_t)L_33)), &m7682_MI);
	}

IL_0091:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8544 (t1335 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	static bool m8544_init;
	if (!m8544_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8544_init = true;
	}
	t1681* V_0 = {0};
	int32_t V_1 = 0;
	t2* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1417, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1681* L_2 = (__this->f3);
		V_0 = L_2;
		V_1 = (-1);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t9 * L_3 = p0;
		int32_t L_4 = m8547(__this, L_3, &m8547_MI);
		V_1 = L_4;
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0021;
		throw e;
	}

CATCH_0021:
	{ // begin catch(System.Exception)
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_5, &m5692_MI);
		il2cpp_codegen_raise_exception(L_5);
		goto IL_002a;
	} // end catch (depth: 1)

IL_002a:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_7 = p2;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		t158* L_8 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t9 * L_9 = p0;
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 0)) = (t9 *)L_9;
		t2* L_10 = m7819(NULL, (t2*) &_stringLiteral1443, L_8, &m7819_MI);
		V_2 = L_10;
		t2* L_11 = V_2;
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, L_11, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004d:
	{
		t1681* L_13 = V_0;
		int32_t L_14 = V_1;
		t9 * L_15 = p1;
		((t1678 *)(t1678 *)SZArrayLdElema(L_13, L_14))->f1 = L_15;
		int32_t L_16 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_16+(int32_t)1));
		return;
	}

IL_0069:
	{
		int32_t L_17 = V_1;
		V_1 = ((~L_17));
		int32_t L_18 = V_1;
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8535_MI, __this);
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)((int32_t)L_19+(int32_t)1)))))
		{
			goto IL_00b9;
		}
	}
	{
		t158* L_20 = ((t158*)SZArrayNew(t158_TI_var, 7));
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1444);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 0)) = (t9 *)(t2*) &_stringLiteral1444;
		t158* L_21 = L_20;
		t9 * L_22 = p0;
		ArrayElementTypeCheck (L_21, L_22);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 1)) = (t9 *)L_22;
		t158* L_23 = L_21;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral388);
		*((t9 **)(t9 **)SZArrayLdElema(L_23, 2)) = (t9 *)(t2*) &_stringLiteral388;
		t158* L_24 = L_23;
		t9 * L_25 = p1;
		ArrayElementTypeCheck (L_24, L_25);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 3)) = (t9 *)L_25;
		t158* L_26 = L_24;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1445);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 4)) = (t9 *)(t2*) &_stringLiteral1445;
		t158* L_27 = L_26;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		t9 * L_30 = Box(InitializedTypeInfo(&t125_TI), &L_29);
		ArrayElementTypeCheck (L_27, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 5)) = (t9 *)L_30;
		t158* L_31 = L_27;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral345);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 6)) = (t9 *)(t2*) &_stringLiteral345;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m515(NULL, L_31, &m515_MI);
		t138 * L_33 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_33, L_32, &m379_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00b9:
	{
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		int32_t L_35 = V_1;
		m8543(__this, ((int32_t)((int32_t)L_34+(int32_t)1)), L_35, &m8543_MI);
		t1681* L_36 = (__this->f3);
		V_0 = L_36;
		t1681* L_37 = V_0;
		int32_t L_38 = V_1;
		t9 * L_39 = p0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_37, L_38))->f0 = L_39;
		t1681* L_40 = V_0;
		int32_t L_41 = V_1;
		t9 * L_42 = p1;
		((t1678 *)(t1678 *)SZArrayLdElema(L_40, L_41))->f1 = L_42;
		int32_t L_43 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_44+(int32_t)1));
		return;
	}
}
extern "C" t9 * m8545 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8547(__this, L_0, &m8547_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		t1681* L_3 = (__this->f3);
		int32_t L_4 = V_0;
		t9 * L_5 = (((t1678 *)(t1678 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001e:
	{
		return NULL;
	}
}
extern TypeInfo* t1681_TI_var;
extern "C" void m8546 (t1335 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8546_init;
	if (!m8546_init)
	{
		t1681_TI_var = il2cpp_codegen_class_from_type(&t1681_0_0_0);
		m8546_init = true;
	}
	{
		bool L_0 = p1;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (__this->f5);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = (__this->f5);
		p0 = L_3;
	}

IL_0016:
	{
		int32_t L_4 = p0;
		__this->f3 = ((t1681*)SZArrayNew(t1681_TI_var, L_4));
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" int32_t m8547 (t1335 * __this, t9 * p0, MethodInfo* method)
{
	t1681* V_0 = {0};
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t9 * V_7 = {0};
	t9 * G_B5_0 = {0};
	{
		t1681* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5734_MI, __this);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		t9 * L_3 = (__this->f4);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1668_TI));
		t1668 * L_4 = ((t1668_SFs*)InitializedTypeInfo(&t1668_TI)->static_fields)->f0;
		V_7 = L_4;
		t9 * L_5 = V_7;
		G_B5_0 = L_5;
		goto IL_002c;
	}

IL_0026:
	{
		t9 * L_6 = (__this->f4);
		G_B5_0 = L_6;
	}

IL_002c:
	{
		V_2 = G_B5_0;
		V_3 = 0;
		int32_t L_7 = V_1;
		V_4 = ((int32_t)((int32_t)L_7-(int32_t)1));
		goto IL_006d;
	}

IL_0036:
	{
		int32_t L_8 = V_3;
		int32_t L_9 = V_4;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9))>>(int32_t)1));
		t9 * L_10 = V_2;
		t1681* L_11 = V_0;
		int32_t L_12 = V_5;
		t9 * L_13 = (((t1678 *)(t1678 *)SZArrayLdElema(L_11, L_12))->f0);
		t9 * L_14 = p0;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5688_MI, L_10, L_13, L_14);
		V_6 = L_15;
		int32_t L_16 = V_6;
		if (L_16)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_17 = V_5;
		return L_17;
	}

IL_005b:
	{
		int32_t L_18 = V_6;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_19 = V_5;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
		goto IL_006d;
	}

IL_0067:
	{
		int32_t L_20 = V_5;
		V_4 = ((int32_t)((int32_t)L_20-(int32_t)1));
	}

IL_006d:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_4;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_23 = V_3;
		return ((~L_23));
	}
}
#include "t1682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;
#include "t1682MD.h"



extern MethodInfo m8548_MI;
extern "C" void m8548 (t1682 * __this, t870 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t870 * L_0 = p0;
		__this->f0 = L_0;
		t870 * L_1 = p0;
		int32_t L_2 = (L_1->f4);
		__this->f1 = L_2;
		__this->f2 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8549_MI;
extern "C" t9 * m8549 (t1682 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t870 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f4);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = (__this->f2);
		t870 * L_6 = (__this->f0);
		int32_t L_7 = (L_6->f2);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_0039:
	{
		t1332 * L_8 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_8, &m5692_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003f:
	{
		t870 * L_9 = (__this->f0);
		t158* L_10 = (L_9->f0);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m8550_MI;
extern "C" bool m8550 (t1682 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		t870 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_3, &m5692_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-2))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004b;
	}

IL_002b:
	{
		t870 * L_7 = (__this->f0);
		int32_t L_8 = (L_7->f1);
		__this->f2 = L_8;
		int32_t L_9 = (__this->f2);
		return ((((int32_t)((((int32_t)L_9) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0049:
	{
		return 0;
	}

IL_004b:
	{
		int32_t L_10 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_10-(int32_t)1));
		int32_t L_11 = (__this->f2);
		return ((((int32_t)((((int32_t)L_11) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m6875_MI;
extern MethodInfo m8551_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m4470 (t870 * __this, MethodInfo* method)
{
	static bool m4470_init;
	if (!m4470_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4470_init = true;
	}
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		__this->f0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)16)));
		__this->f3 = ((int32_t)16);
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8551 (t870 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8551_init;
	if (!m8551_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8551_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m6875(NULL, L_0, ((int32_t)16), &m6875_MI);
		p0 = L_1;
		int32_t L_2 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		t158* L_3 = (__this->f0);
		t158* L_4 = V_0;
		int32_t L_5 = (__this->f2);
		m5912(NULL, (t121 *)(t121 *)L_3, (t121 *)(t121 *)L_4, L_5, &m5912_MI);
		int32_t L_6 = p0;
		__this->f3 = L_6;
		t158* L_7 = V_0;
		__this->f0 = L_7;
		return;
	}
}
extern "C" int32_t m4640 (t870 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m4641_MI;
extern "C" bool m4641 (t870 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m4642_MI;
extern "C" t9 * m4642 (t870 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m4212 (t870 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_0 = 0;
		goto IL_001f;
	}

IL_0012:
	{
		t158* L_1 = (__this->f0);
		int32_t L_2 = V_0;
		ArrayElementTypeCheck (L_1, NULL);
		*((t9 **)(t9 **)SZArrayLdElema(L_1, L_2)) = (t9 *)NULL;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->f2);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0012;
		}
	}
	{
		__this->f2 = 0;
		__this->f1 = (-1);
		return;
	}
}
extern "C" void m4643 (t870 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t121 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_3, (t2*) &_stringLiteral401, &m5693_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5695(L_4, &m5695_MI);
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		t121 * L_6 = p0;
		int32_t L_7 = m5689(L_6, &m5689_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = p1;
		t121 * L_9 = p0;
		int32_t L_10 = m5689(L_9, &m5689_MI);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		int32_t L_11 = (__this->f2);
		t121 * L_12 = p0;
		int32_t L_13 = m5689(L_12, &m5689_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_004e;
		}
	}

IL_0048:
	{
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_15, &m11109_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_004e:
	{
		int32_t L_16 = (__this->f1);
		V_0 = L_16;
		goto IL_0075;
	}

IL_0057:
	{
		t121 * L_17 = p0;
		t158* L_18 = (__this->f0);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		int32_t L_21 = (__this->f2);
		int32_t L_22 = V_0;
		int32_t L_23 = p1;
		m5690(L_17, (*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), ((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)((int32_t)((int32_t)L_22+(int32_t)1))))+(int32_t)L_23)), &m5690_MI);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)1));
	}

IL_0075:
	{
		int32_t L_25 = V_0;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}
}
extern MethodInfo m4639_MI;
extern "C" t9 * m4639 (t870 * __this, MethodInfo* method)
{
	{
		t1682 * L_0 = (t1682 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1682_TI));
		m8548(L_0, __this, &m8548_MI);
		return L_0;
	}
}
extern "C" t9 * m4644 (t870 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t158* L_2 = (__this->f0);
		int32_t L_3 = (__this->f1);
		int32_t L_4 = L_3;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_2, L_4));
	}
}
extern "C" t9 * m4645 (t870 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5692(L_1, &m5692_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_2+(int32_t)1));
		t158* L_3 = (__this->f0);
		int32_t L_4 = (__this->f1);
		int32_t L_5 = L_4;
		V_0 = (*(t9 **)(t9 **)SZArrayLdElema(L_3, L_5));
		t158* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		ArrayElementTypeCheck (L_6, NULL);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, L_7)) = (t9 *)NULL;
		int32_t L_8 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_8-(int32_t)1));
		int32_t L_9 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		int32_t L_10 = (__this->f2);
		int32_t L_11 = (__this->f3);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)((int32_t)L_11/(int32_t)4)))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_12 = (__this->f2);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)16))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_13 = (__this->f3);
		m8551(__this, ((int32_t)((int32_t)L_13/(int32_t)2)), &m8551_MI);
	}

IL_007d:
	{
		t9 * L_14 = V_0;
		return L_14;
	}
}
extern "C" void m4208 (t870 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		__this->f4 = ((int32_t)((int32_t)L_0+(int32_t)1));
		int32_t L_1 = (__this->f3);
		int32_t L_2 = (__this->f2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = (__this->f3);
		m8551(__this, ((int32_t)((int32_t)L_3*(int32_t)2)), &m8551_MI);
	}

IL_002a:
	{
		int32_t L_4 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		t158* L_6 = (__this->f0);
		int32_t L_7 = (__this->f1);
		t9 * L_8 = p0;
		ArrayElementTypeCheck (L_6, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, L_7)) = (t9 *)L_8;
		return;
	}
}
#include "t1683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1683_TI;
#include "t1683MD.h"



#include "t1684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1684_TI;
#include "t1684MD.h"



#include "t999.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t999_TI;
#include "t999MD.h"

#include "t718MD.h"
extern MethodInfo m4240_MI;


extern MethodInfo m4544_MI;
extern "C" void m4544 (t999 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t2* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m4545_MI;
extern "C" void m4545 (t999 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1685_TI;
#include "t1685MD.h"



#include "t1139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1139_TI;
#include "t1139MD.h"



extern MethodInfo m4769_MI;
extern "C" void m4769 (t1139 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = (__this->f2);
		__this->f0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_2 = (__this->f2);
		__this->f1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
#include "t1686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1686_TI;
#include "t1686MD.h"



extern MethodInfo m8552_MI;
extern "C" void m8552 (t1686 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		p0 = L_1;
	}

IL_0012:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f1 = L_3;
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_4;
		return;
	}
}
extern MethodInfo m8553_MI;
extern "C" void m8553 (t1686 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1687_TI;
#include "t1687MD.h"



extern MethodInfo m8554_MI;
extern "C" void m8554 (t1687 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1688_TI;
#include "t1688MD.h"

#include "t553.h"
extern TypeInfo t553_TI;
#include "t553MD.h"
extern MethodInfo m4367_MI;


extern MethodInfo m8555_MI;
extern "C" void m8555 (t1688 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t929.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t929_TI;
#include "t929MD.h"

#include "t907.h"
extern TypeInfo t2024_TI;
extern MethodInfo m8558_MI;
extern MethodInfo m4430_MI;
extern MethodInfo m5786_MI;
extern MethodInfo m8559_MI;


extern MethodInfo m8556_MI;
extern "C" void m8556 (t929 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		t907 ** L_0 = &(__this->f3);
		int32_t* L_1 = &(__this->f1);
		int32_t* L_2 = &(__this->f2);
		t2** L_3 = &(__this->f4);
		int32_t* L_4 = &(__this->f5);
		int32_t* L_5 = &(__this->f6);
		m8558(NULL, 2, 0, L_0, L_1, L_2, L_3, L_4, L_5, &m8558_MI);
		return;
	}
}
extern MethodInfo m8557_MI;
extern "C" void m8557 (t929 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		t907 ** L_2 = &(__this->f3);
		int32_t* L_3 = &(__this->f1);
		int32_t* L_4 = &(__this->f2);
		t2** L_5 = &(__this->f4);
		int32_t* L_6 = &(__this->f5);
		int32_t* L_7 = &(__this->f6);
		m8558(NULL, ((int32_t)((int32_t)L_0+(int32_t)2)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8558_MI);
		return;
	}
}
extern "C" bool m8558 (t9 * __this , int32_t p0, bool p1, t907 ** p2, int32_t* p3, int32_t* p4, t2** p5, int32_t* p6, int32_t* p7, MethodInfo* method)
{
	typedef bool (*m8558_ftn) (int32_t, bool, t907 **, int32_t*, int32_t*, t2**, int32_t*, int32_t*);
	static m8558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8558_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7);
}
extern MethodInfo m4431_MI;
extern "C" int32_t m4431 (t929 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t2* m4430 (t929 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m8559 (t929 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*) &_stringLiteral1448;
		t2* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		t2* L_1 = V_0;
		return L_1;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4430_MI, __this);
		V_0 = L_2;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2024_TI, e.ex->object.klass))
			goto CATCH_0019;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.Security.SecurityException)
		goto IL_001c;
	} // end catch (depth: 1)

IL_001c:
	{
		t2* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m8560_MI;
extern "C" int32_t m8560 (t929 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4427_MI;
extern "C" t907 * m4427 (t929 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8561_MI;
extern "C" int32_t m8561 (t929 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8562_MI;
extern "C" t2* m8562 (t929 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8563_MI;
extern "C" t2* m8563 (t929 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_0, &m1150_MI);
		V_0 = L_0;
		t907 * L_1 = (__this->f3);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t315 * L_2 = V_0;
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral1264, &m7818_MI);
		m1154(L_2, L_3, &m1154_MI);
		goto IL_0033;
	}

IL_0021:
	{
		t315 * L_4 = V_0;
		t907 * L_5 = (__this->f3);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_5);
		m1154(L_4, L_6, &m1154_MI);
	}

IL_0033:
	{
		t315 * L_7 = V_0;
		t2* L_8 = m7818(NULL, (t2*) &_stringLiteral1449, &m7818_MI);
		m1154(L_7, L_8, &m1154_MI);
		int32_t L_9 = (__this->f1);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		t315 * L_10 = V_0;
		t2* L_11 = m7818(NULL, (t2*) &_stringLiteral1450, &m7818_MI);
		m1154(L_10, L_11, &m1154_MI);
		goto IL_007e;
	}

IL_0060:
	{
		t315 * L_12 = V_0;
		t2* L_13 = m7818(NULL, (t2*) &_stringLiteral1451, &m7818_MI);
		m1154(L_12, L_13, &m1154_MI);
		t315 * L_14 = V_0;
		int32_t L_15 = (__this->f1);
		m5786(L_14, L_15, &m5786_MI);
	}

IL_007e:
	{
		t315 * L_16 = V_0;
		t2* L_17 = m7818(NULL, (t2*) &_stringLiteral1452, &m7818_MI);
		m1154(L_16, L_17, &m1154_MI);
		t315 * L_18 = V_0;
		t2* L_19 = m8559(__this, &m8559_MI);
		m1154(L_18, L_19, &m1154_MI);
		t315 * L_20 = V_0;
		int32_t L_21 = (__this->f5);
		int32_t L_22 = L_21;
		t9 * L_23 = Box(InitializedTypeInfo(&t125_TI), &L_22);
		int32_t L_24 = (__this->f6);
		int32_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t125_TI), &L_25);
		m5813(L_20, (t2*) &_stringLiteral1453, L_23, L_26, &m5813_MI);
		t315 * L_27 = V_0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_27);
		return L_28;
	}
}
#include "t848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t848_TI;
#include "t848MD.h"

#include "t917.h"
extern TypeInfo t907_TI;
extern TypeInfo t1689_TI;
extern TypeInfo t921_TI;
extern TypeInfo t917_TI;
#include "t907MD.h"
#include "t917MD.h"
extern Il2CppType t929_0_0_0;
extern Il2CppType t1689_0_0_0;
extern MethodInfo m8568_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m8569_MI;
extern MethodInfo m4432_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m4385_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m7723_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m7724_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m9678_MI;


extern MethodInfo m8564_MI;
extern "C" void m8564 (t848 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m8568(__this, 0, 0, &m8568_MI);
		return;
	}
}
extern MethodInfo m4416_MI;
extern "C" void m4416 (t848 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8568(__this, L_0, L_1, &m8568_MI);
		return;
	}
}
extern MethodInfo m8565_MI;
extern "C" void m8565 (t848 * __this, t138 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		bool L_1 = p1;
		m8566(__this, L_0, 0, L_1, &m8566_MI);
		return;
	}
}
extern "C" void m8566 (t848 * __this, t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		int32_t L_1 = p1;
		bool L_2 = p2;
		m8567(__this, L_0, L_1, L_2, 0, &m8567_MI);
		return;
	}
}
extern TypeInfo* t1689_TI_var;
extern "C" void m8567 (t848 * __this, t138 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m8567_init;
	if (!m8567_init)
	{
		t1689_TI_var = il2cpp_codegen_class_from_type(&t1689_0_0_0);
		m8567_init = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	t1161 * V_2 = {0};
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t138 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral335, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = p1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_3, (t2*) &_stringLiteral812, (t2*) &_stringLiteral1454, &m4336_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		t138 * L_4 = p0;
		int32_t L_5 = p1;
		bool L_6 = p2;
		t1689* L_7 = m8569(NULL, L_4, L_5, L_6, &m8569_MI);
		__this->f1 = L_7;
		bool L_8 = p3;
		if (L_8)
		{
			goto IL_00b8;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0058;
	}

IL_0043:
	{
		t1689* L_9 = (__this->f1);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		t907 * L_12 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m4427_MI, (*(t929 **)(t929 **)SZArrayLdElema(L_9, L_11)));
		if (L_12)
		{
			goto IL_0054;
		}
	}
	{
		V_0 = 1;
	}

IL_0054:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_14 = V_1;
		t1689* L_15 = (__this->f1);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_17 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_17, &m5698_MI);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0092;
	}

IL_0070:
	{
		t1689* L_18 = (__this->f1);
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t907 * L_21 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m4427_MI, (*(t929 **)(t929 **)SZArrayLdElema(L_18, L_20)));
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t1161 * L_22 = V_2;
		t1689* L_23 = (__this->f1);
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_22, (*(t929 **)(t929 **)SZArrayLdElema(L_23, L_25)));
	}

IL_008e:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_27 = V_3;
		t1689* L_28 = (__this->f1);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		t1161 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t929_0_0_0), &m329_MI);
		t121 * L_31 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_29, L_30);
		__this->f1 = ((t1689*)Castclass(L_31, t1689_TI_var));
	}

IL_00b8:
	{
		return;
	}
}
extern TypeInfo* t1689_TI_var;
extern "C" void m8568 (t848 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8568_init;
	if (!m8568_init)
	{
		t1689_TI_var = il2cpp_codegen_class_from_type(&t1689_0_0_0);
		m8568_init = true;
	}
	t929 * V_0 = {0};
	t1161 * V_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_1, (t2*) &_stringLiteral812, (t2*) &_stringLiteral1454, &m4336_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_2 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_2, &m5698_MI);
		V_1 = L_2;
		int32_t L_3 = p0;
		p0 = ((int32_t)((int32_t)L_3+(int32_t)2));
		goto IL_0032;
	}

IL_0023:
	{
		t1161 * L_4 = V_1;
		t929 * L_5 = V_0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_4, L_5);
		int32_t L_6 = p0;
		p0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_7 = p0;
		bool L_8 = p1;
		t929 * L_9 = (t929 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t929_TI));
		m8557(L_9, L_7, L_8, &m8557_MI);
		t929 * L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		t929 * L_11 = V_0;
		t907 * L_12 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m4427_MI, L_11);
		if (L_12)
		{
			goto IL_0023;
		}
	}

IL_0045:
	{
		bool L_13 = p1;
		__this->f2 = L_13;
		t1161 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t929_0_0_0), &m329_MI);
		t121 * L_16 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_14, L_15);
		__this->f1 = ((t1689*)Castclass(L_16, t1689_TI_var));
		return;
	}
}
extern "C" t1689* m8569 (t9 * __this , t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef t1689* (*m8569_ftn) (t138 *, int32_t, bool);
	static m8569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8569_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" int32_t m4432 (t848 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1689* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_000b:
	{
		t1689* L_1 = (__this->f1);
		G_B3_0 = (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern "C" t929 * m4426 (t848 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4432_MI, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (t929 *)NULL;
	}

IL_000f:
	{
		t1689* L_3 = (__this->f1);
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		return (*(t929 **)(t929 **)SZArrayLdElema(L_3, L_5));
	}
}
extern MethodInfo m8570_MI;
extern "C" t2* m8570 (t848 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	t315 * V_3 = {0};
	int32_t V_4 = 0;
	t929 * V_5 = {0};
	t907 * V_6 = {0};
	t921* V_7 = {0};
	int32_t V_8 = 0;
	t126 * V_9 = {0};
	bool V_10 = false;
	t2* V_11 = {0};
	{
		t2* L_0 = m5775(NULL, &m5775_MI);
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral1263, &m7818_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1190(NULL, (t2*) &_stringLiteral1455, L_0, L_1, &m1190_MI);
		V_0 = L_2;
		t2* L_3 = m7818(NULL, (t2*) &_stringLiteral1264, &m7818_MI);
		V_1 = L_3;
		t2* L_4 = m7818(NULL, (t2*) &_stringLiteral1456, &m7818_MI);
		V_2 = L_4;
		t315 * L_5 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m1150(L_5, &m1150_MI);
		V_3 = L_5;
		V_4 = 0;
		goto IL_01b8;
	}

IL_003e:
	{
		int32_t L_6 = V_4;
		t929 * L_7 = (t929 *)VirtFuncInvoker1< t929 *, int32_t >::Invoke(&m4426_MI, __this, L_6);
		V_5 = L_7;
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t315 * L_9 = V_3;
		t2* L_10 = V_0;
		m1154(L_9, L_10, &m1154_MI);
		goto IL_006d;
	}

IL_0057:
	{
		t315 * L_11 = V_3;
		t2* L_12 = m7818(NULL, (t2*) &_stringLiteral1263, &m7818_MI);
		m5722(L_11, (t2*) &_stringLiteral1457, L_12, &m5722_MI);
	}

IL_006d:
	{
		t929 * L_13 = V_5;
		t907 * L_14 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m4427_MI, L_13);
		V_6 = L_14;
		t907 * L_15 = V_6;
		if (!L_15)
		{
			goto IL_0175;
		}
	}
	{
		t315 * L_16 = V_3;
		t907 * L_17 = V_6;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_17);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_18);
		t907 * L_20 = V_6;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_20);
		m5813(L_16, (t2*) &_stringLiteral1458, L_19, L_21, &m5813_MI);
		t315 * L_22 = V_3;
		m1154(L_22, (t2*) &_stringLiteral387, &m1154_MI);
		t907 * L_23 = V_6;
		t921* L_24 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_23);
		V_7 = L_24;
		V_8 = 0;
		goto IL_015c;
	}

IL_00b9:
	{
		int32_t L_25 = V_8;
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		t315 * L_26 = V_3;
		m1154(L_26, (t2*) &_stringLiteral388, &m1154_MI);
	}

IL_00ca:
	{
		t921* L_27 = V_7;
		int32_t L_28 = V_8;
		int32_t L_29 = L_28;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_27, L_29)));
		V_9 = L_30;
		t126 * L_31 = V_9;
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_31);
		V_10 = L_32;
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_00ec;
		}
	}
	{
		t126 * L_34 = V_9;
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_34);
		V_9 = L_35;
	}

IL_00ec:
	{
		t126 * L_36 = V_9;
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7724_MI, L_36);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		t126 * L_38 = V_9;
		t2* L_39 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4429_MI, L_38);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_41 = m2713(NULL, L_39, L_40, &m2713_MI);
		if (!L_41)
		{
			goto IL_0122;
		}
	}
	{
		t315 * L_42 = V_3;
		t126 * L_43 = V_9;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4429_MI, L_43);
		m1154(L_42, L_44, &m1154_MI);
		t315 * L_45 = V_3;
		m1154(L_45, (t2*) &_stringLiteral140, &m1154_MI);
	}

IL_0122:
	{
		t315 * L_46 = V_3;
		t126 * L_47 = V_9;
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_47);
		m1154(L_46, L_48, &m1154_MI);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_0140;
		}
	}
	{
		t315 * L_50 = V_3;
		m1154(L_50, (t2*) &_stringLiteral1459, &m1154_MI);
	}

IL_0140:
	{
		t315 * L_51 = V_3;
		t921* L_52 = V_7;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		t2* L_55 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9678_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_52, L_54)));
		m5722(L_51, (t2*) &_stringLiteral1460, L_55, &m5722_MI);
		int32_t L_56 = V_8;
		V_8 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_015c:
	{
		int32_t L_57 = V_8;
		t921* L_58 = V_7;
		if ((((int32_t)L_57) < ((int32_t)(((int32_t)(((t121 *)L_58)->max_length))))))
		{
			goto IL_00b9;
		}
	}
	{
		t315 * L_59 = V_3;
		m1154(L_59, (t2*) &_stringLiteral148, &m1154_MI);
		goto IL_017d;
	}

IL_0175:
	{
		t315 * L_60 = V_3;
		t2* L_61 = V_1;
		m1154(L_60, L_61, &m1154_MI);
	}

IL_017d:
	{
		bool L_62 = (__this->f2);
		if (!L_62)
		{
			goto IL_01b2;
		}
	}
	{
		t929 * L_63 = V_5;
		t2* L_64 = m8559(L_63, &m8559_MI);
		V_11 = L_64;
		t2* L_65 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_66 = m2713(NULL, L_65, (t2*) &_stringLiteral1448, &m2713_MI);
		if (!L_66)
		{
			goto IL_01b2;
		}
	}
	{
		t315 * L_67 = V_3;
		t2* L_68 = V_2;
		t2* L_69 = V_11;
		t929 * L_70 = V_5;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4431_MI, L_70);
		int32_t L_72 = L_71;
		t9 * L_73 = Box(InitializedTypeInfo(&t125_TI), &L_72);
		m5813(L_67, L_68, L_69, L_73, &m5813_MI);
	}

IL_01b2:
	{
		int32_t L_74 = V_4;
		V_4 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_01b8:
	{
		int32_t L_75 = V_4;
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4432_MI, __this);
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_003e;
		}
	}
	{
		t315 * L_77 = V_3;
		t2* L_78 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_77);
		return L_78;
	}
}
#include "t1690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1690_TI;
#include "t1690MD.h"

#include "t1691.h"
extern MethodInfo m11976_MI;


extern MethodInfo m8571_MI;
extern "C" void m8571 (t1690 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f1 = ((int32_t)99);
		return;
	}
}
extern MethodInfo m8572_MI;
extern "C" void m8572 (t1690 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1462, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8573_MI;
extern TypeInfo* t221_TI_var;
extern "C" t221* m8573 (t1690 * __this, MethodInfo* method)
{
	static bool m8573_init;
	if (!m8573_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8573_init = true;
	}
	{
		t221* L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t221* L_1 = (__this->f3);
		t1088* L_2 = (t1088*)VirtFuncInvoker0< t1088* >::Invoke(&m11976_MI, __this);
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral1461, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		t221* L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5718_MI, L_4);
		return ((t221*)Castclass(L_5, t221_TI_var));
	}
}
#include "t1692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1692_TI;
#include "t1692MD.h"

extern MethodInfo m4237_MI;
extern MethodInfo m8574_MI;


extern "C" int32_t m8574 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		double L_2 = floor(((double)((double)(((double)L_0))/(double)(((double)L_1)))));
		return (((int32_t)L_2));
	}
}
extern MethodInfo m8575_MI;
extern "C" int32_t m8575 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = m8574(NULL, L_2, L_3, &m8574_MI);
		return ((int32_t)((int32_t)L_0-(int32_t)((int32_t)((int32_t)L_1*(int32_t)L_4))));
	}
}
extern MethodInfo m8576_MI;
extern "C" int32_t m8576 (t9 * __this , int32_t* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8574(NULL, L_0, L_1, &m8574_MI);
		V_0 = L_2;
		int32_t* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = V_0;
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5*(int32_t)L_6))));
		int32_t L_7 = V_0;
		return L_7;
	}
}
#include "t1693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1693_TI;
#include "t1693MD.h"

#include "t292.h"
extern MethodInfo m6951_MI;


extern MethodInfo m8577_MI;
extern "C" int32_t m8577 (t9 * __this , t269  p0, MethodInfo* method)
{
	{
		int64_t L_0 = m6951((&p0), &m6951_MI);
		return ((int32_t)((int32_t)1+(int32_t)(((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))))));
	}
}
extern MethodInfo m8578_MI;
extern "C" int32_t m8578 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8575(NULL, L_0, 7, &m8575_MI);
		return (int32_t)(L_1);
	}
}
#include "t1694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1694_TI;
#include "t1694MD.h"

extern MethodInfo m8579_MI;
extern MethodInfo m8581_MI;
extern MethodInfo m8580_MI;
extern MethodInfo m8582_MI;
extern MethodInfo m8583_MI;
extern MethodInfo m8585_MI;
extern MethodInfo m8584_MI;


extern "C" bool m8579 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8575(NULL, L_0, 4, &m8575_MI);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int32_t L_2 = p0;
		int32_t L_3 = m8575(NULL, L_2, ((int32_t)400), &m8575_MI);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)100))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)200))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)300))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0034;
	}

IL_002e:
	{
		return 0;
	}

IL_0030:
	{
		return 0;
	}

IL_0032:
	{
		return 0;
	}

IL_0034:
	{
		return 1;
	}
}
extern "C" int32_t m8580 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		int32_t L_1 = p2;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)((int32_t)365)*(int32_t)((int32_t)((int32_t)L_1-(int32_t)1))))));
		int32_t L_2 = V_0;
		int32_t L_3 = p2;
		int32_t L_4 = m8574(NULL, ((int32_t)((int32_t)L_3-(int32_t)1)), 4, &m8574_MI);
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)L_4));
		int32_t L_5 = V_0;
		int32_t L_6 = p2;
		int32_t L_7 = m8574(NULL, ((int32_t)((int32_t)L_6-(int32_t)1)), ((int32_t)100), &m8574_MI);
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = p2;
		int32_t L_10 = m8574(NULL, ((int32_t)((int32_t)L_9-(int32_t)1)), ((int32_t)400), &m8574_MI);
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		int32_t L_13 = m8574(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)367)*(int32_t)L_12))-(int32_t)((int32_t)362))), ((int32_t)12), &m8574_MI);
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_13));
		int32_t L_14 = p1;
		if ((((int32_t)L_14) <= ((int32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = p2;
		bool L_17 = m8579(NULL, L_16, &m8579_MI);
		G_B2_0 = L_15;
		if (!L_17)
		{
			G_B3_0 = L_15;
			goto IL_005e;
		}
	}
	{
		G_B4_0 = (-1);
		G_B4_1 = G_B2_0;
		goto IL_0060;
	}

IL_005e:
	{
		G_B4_0 = ((int32_t)-2);
		G_B4_1 = G_B3_0;
	}

IL_0060:
	{
		V_0 = ((int32_t)((int32_t)G_B4_1+(int32_t)G_B4_0));
	}

IL_0062:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = p0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		int32_t L_20 = V_0;
		return L_20;
	}
}
extern "C" int32_t m8581 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)1));
		int32_t L_1 = V_0;
		int32_t L_2 = m8576(NULL, (&V_0), L_1, ((int32_t)146097), &m8576_MI);
		V_1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = m8576(NULL, (&V_0), L_3, ((int32_t)36524), &m8576_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = m8576(NULL, (&V_0), L_5, ((int32_t)1461), &m8576_MI);
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = m8574(NULL, L_7, ((int32_t)365), &m8574_MI);
		V_4 = L_8;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		int32_t L_12 = V_4;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)400)*(int32_t)L_9))+(int32_t)((int32_t)((int32_t)((int32_t)100)*(int32_t)L_10))))+(int32_t)((int32_t)((int32_t)4*(int32_t)L_11))))+(int32_t)L_12));
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = V_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)4))))
		{
			goto IL_005d;
		}
	}

IL_0059:
	{
		int32_t L_15 = V_5;
		G_B4_0 = L_15;
		goto IL_0061;
	}

IL_005d:
	{
		int32_t L_16 = V_5;
		G_B4_0 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0061:
	{
		return G_B4_0;
	}
}
extern "C" void m8582 (t9 * __this , int32_t* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8581(NULL, L_1, &m8581_MI);
		*((int32_t*)(L_0)) = (int32_t)L_2;
		int32_t L_3 = p2;
		int32_t* L_4 = p1;
		int32_t L_5 = m8580(NULL, 1, 1, (*((int32_t*)L_4)), &m8580_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)L_5));
		int32_t L_6 = p2;
		int32_t* L_7 = p1;
		int32_t L_8 = m8580(NULL, 1, 3, (*((int32_t*)L_7)), &m8580_MI);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0024;
		}
	}
	{
		V_1 = 0;
		goto IL_0033;
	}

IL_0024:
	{
		int32_t* L_9 = p1;
		bool L_10 = m8579(NULL, (*((int32_t*)L_9)), &m8579_MI);
		if (!L_10)
		{
			goto IL_0031;
		}
	}
	{
		V_1 = 1;
		goto IL_0033;
	}

IL_0031:
	{
		V_1 = 2;
	}

IL_0033:
	{
		int32_t* L_11 = p0;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = m8574(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)12)*(int32_t)((int32_t)((int32_t)L_12+(int32_t)L_13))))+(int32_t)((int32_t)373))), ((int32_t)367), &m8574_MI);
		*((int32_t*)(L_11)) = (int32_t)L_14;
		return;
	}
}
extern "C" void m8583 (t9 * __this , int32_t* p0, int32_t* p1, int32_t* p2, int32_t p3, MethodInfo* method)
{
	{
		int32_t* L_0 = p1;
		int32_t* L_1 = p2;
		int32_t L_2 = p3;
		m8582(NULL, L_0, L_1, L_2, &m8582_MI);
		int32_t* L_3 = p0;
		int32_t L_4 = p3;
		int32_t* L_5 = p1;
		int32_t* L_6 = p2;
		int32_t L_7 = m8580(NULL, 1, (*((int32_t*)L_5)), (*((int32_t*)L_6)), &m8580_MI);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_7))+(int32_t)1));
		return;
	}
}
extern "C" int32_t m8584 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		m8582(NULL, (&V_0), (&V_1), L_0, &m8582_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C" int32_t m8585 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		m8583(NULL, (&V_0), (&V_1), (&V_2), L_0, &m8583_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m8586_MI;
extern "C" int32_t m8586 (t9 * __this , t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8577(NULL, L_0, &m8577_MI);
		int32_t L_2 = m8585(NULL, L_1, &m8585_MI);
		return L_2;
	}
}
extern MethodInfo m8587_MI;
extern "C" int32_t m8587 (t9 * __this , t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8577(NULL, L_0, &m8577_MI);
		int32_t L_2 = m8584(NULL, L_1, &m8584_MI);
		return L_2;
	}
}
extern MethodInfo m8588_MI;
extern "C" int32_t m8588 (t9 * __this , t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8577(NULL, L_0, &m8577_MI);
		int32_t L_2 = m8581(NULL, L_1, &m8581_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1606.h"
#include "t1608.h"
extern TypeInfo t1606_TI;
extern TypeInfo t1608_TI;
#include "t1606MD.h"
#include "t1391MD.h"
#include "t1608MD.h"
extern MethodInfo m8625_MI;
extern MethodInfo m8593_MI;
extern MethodInfo m7863_MI;
extern MethodInfo m8629_MI;
extern MethodInfo m8594_MI;
extern MethodInfo m11498_MI;
extern MethodInfo m6045_MI;
extern MethodInfo m8617_MI;
extern MethodInfo m8595_MI;
extern MethodInfo m7889_MI;
extern MethodInfo m8600_MI;
extern MethodInfo m8596_MI;
extern MethodInfo m8601_MI;
extern MethodInfo m8616_MI;
extern MethodInfo m7881_MI;
extern MethodInfo m7915_MI;
extern MethodInfo m8597_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m7900_MI;
extern MethodInfo m7905_MI;
extern MethodInfo m8608_MI;
extern MethodInfo m8598_MI;
extern MethodInfo m8609_MI;
extern MethodInfo m7894_MI;
extern MethodInfo m8603_MI;
extern MethodInfo m7897_MI;
extern MethodInfo m8614_MI;


extern MethodInfo m8589_MI;
extern "C" void m8589 (t1537 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8590_MI;
extern "C" void m8590 (t1537 * __this, t894 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t894 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_0);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_2 = m8593(NULL, &m8593_MI);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		t9 * L_3 = ((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f5;
		V_0 = L_3;
		t9 * L_4 = V_0;
		m1067(NULL, L_4, &m1067_MI);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
			t1149 * L_5 = ((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f4;
			if (L_5)
			{
				goto IL_0039;
			}
		}

IL_002f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
			t1149 * L_6 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
			m5883(L_6, &m5883_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
			((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f4 = L_6;
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
			t1149 * L_7 = ((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f4;
			t894 * L_8 = p0;
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_8);
			int32_t L_10 = L_9;
			t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
			t9 * L_12 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_7, L_11);
			__this->f3 = ((t1606 *)Castclass(L_12, InitializedTypeInfo(&t1606_TI)));
			t1606 * L_13 = (__this->f3);
			if (L_13)
			{
				goto IL_0088;
			}
		}

IL_0061:
		{
			t894 * L_14 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1606_TI));
			t1606 * L_15 = (t1606 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1606_TI));
			m7863(L_15, L_14, &m7863_MI);
			__this->f3 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
			t1149 * L_16 = ((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f4;
			t894 * L_17 = p0;
			int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_17);
			int32_t L_19 = L_18;
			t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
			t1606 * L_21 = (__this->f3);
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_16, L_20, L_21);
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x91, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		t9 * L_22 = V_0;
		m1069(NULL, L_22, &m1069_MI);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0091:
	{
		goto IL_00ab;
	}

IL_0093:
	{
		t894 * L_23 = p0;
		t2* L_24 = m8629(L_23, &m8629_MI);
		__this->f2 = L_24;
		t2* L_25 = (__this->f2);
		m8594(__this, L_25, &m8594_MI);
	}

IL_00ab:
	{
		return;
	}
}
extern MethodInfo m8591_MI;
extern "C" void m8591 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = m11498(NULL, (t2*) &_stringLiteral1463, &m11498_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m2713(NULL, L_0, (t2*) &_stringLiteral1305, &m2713_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m6045(NULL, &m6045_MI);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f0 = G_B3_0;
		t9 * L_3 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_3, &m336_MI);
		((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f5 = L_3;
		return;
	}
}
extern MethodInfo m8592_MI;
extern "C" void m8592 (t1537 * __this, t9 * p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_0 = m8593(NULL, &m8593_MI);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_2 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8617(L_2, L_1, &m8617_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1606_TI));
		t1606 * L_3 = (t1606 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1606_TI));
		m7863(L_3, L_2, &m7863_MI);
		__this->f3 = L_3;
		goto IL_0030;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t2* L_4 = (__this->f2);
		m8594(__this, L_4, &m8594_MI);
		goto IL_0030;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Object)
		goto IL_0030;
	} // end catch (depth: 1)

IL_0030:
	{
		return;
	}
}
extern "C" bool m8593 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_0 = ((t1537_SFs*)InitializedTypeInfo(&t1537_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m8594 (t1537 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m8594_ftn) (t1537 *, t2*);
	static m8594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8594_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::construct_compareinfo(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m8595 (t1537 * __this, MethodInfo* method)
{
	typedef void (*m8595_ftn) (t1537 *);
	static m8595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8595_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::free_internal_collator()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m8596 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	typedef int32_t (*m8596_ftn) (t1537 *, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t);
	static m8596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8596_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5, p6);
}
extern "C" void m8597 (t1537 * __this, t9 * p0, t2* p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m8597_ftn) (t1537 *, t9 *, t2*, int32_t);
	static m8597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8597_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" int32_t m8598 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	typedef int32_t (*m8598_ftn) (t1537 *, t2*, int32_t, int32_t, t2*, int32_t, bool);
	static m8598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8598_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8599_MI;
extern "C" void m8599 (t1537 * __this, MethodInfo* method)
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
		m8595(__this, &m8595_MI);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_JUMP_TBL(0xF, IL_000f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_000f:
	{
		return;
	}
}
extern "C" int32_t m8600 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	{
		t1606 * L_0 = (__this->f3);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		t2* L_4 = p3;
		int32_t L_5 = p4;
		int32_t L_6 = p5;
		int32_t L_7 = p6;
		int32_t L_8 = m7889(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m7889_MI);
		return L_8;
	}
}
extern "C" int32_t m8601 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_0 = m8593(NULL, &m8593_MI);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		t2* L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		t2* L_4 = p3;
		int32_t L_5 = p4;
		int32_t L_6 = p5;
		int32_t L_7 = p6;
		int32_t L_8 = m8600(__this, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8600_MI);
		G_B3_0 = L_8;
		goto IL_002b;
	}

IL_001a:
	{
		t2* L_9 = p0;
		int32_t L_10 = p1;
		int32_t L_11 = p2;
		t2* L_12 = p3;
		int32_t L_13 = p4;
		int32_t L_14 = p5;
		int32_t L_15 = p6;
		int32_t L_16 = m8596(__this, L_9, L_10, L_11, L_12, L_13, L_14, L_15, &m8596_MI);
		G_B3_0 = L_16;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8602 (t1537 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6943_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" int32_t m6943 (t1537 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p2;
		int32_t L_1 = p2;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1879048223)))) == ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_2, (t2*) &_stringLiteral685, &m2885_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		t2* L_4 = p1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		return (-1);
	}

IL_001f:
	{
		t2* L_5 = p1;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		t2* L_6 = p0;
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_8 = p1;
		int32_t L_9 = m2699(L_8, &m2699_MI);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		return 0;
	}

IL_0036:
	{
		t2* L_10 = p0;
		t2* L_11 = p0;
		int32_t L_12 = m2699(L_11, &m2699_MI);
		t2* L_13 = p1;
		t2* L_14 = p1;
		int32_t L_15 = m2699(L_14, &m2699_MI);
		int32_t L_16 = p2;
		int32_t L_17 = m8601(__this, L_10, 0, L_12, L_13, 0, L_15, L_16, &m8601_MI);
		return L_17;
	}
}
extern "C" int32_t m8603 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	{
		int32_t L_0 = p6;
		int32_t L_1 = p6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)1879048223)))) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_2, (t2*) &_stringLiteral685, &m2885_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		t2* L_3 = p0;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		t2* L_4 = p3;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		return (-1);
	}

IL_0022:
	{
		t2* L_5 = p3;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		return 1;
	}

IL_0028:
	{
		t2* L_6 = p0;
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = p1;
		t2* L_9 = p0;
		int32_t L_10 = m2699(L_9, &m2699_MI);
		if ((((int32_t)L_8) == ((int32_t)L_10)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = p2;
		if (L_11)
		{
			goto IL_0056;
		}
	}

IL_003c:
	{
		t2* L_12 = p3;
		int32_t L_13 = m2699(L_12, &m2699_MI);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14 = p4;
		t2* L_15 = p3;
		int32_t L_16 = m2699(L_15, &m2699_MI);
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_17 = p5;
		if (L_17)
		{
			goto IL_0056;
		}
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		int32_t L_18 = p1;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_19 = p2;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_20 = p4;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_21 = p5;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}

IL_0068:
	{
		t896 * L_22 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_22, (t2*) &_stringLiteral1464, &m5693_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0073:
	{
		int32_t L_23 = p1;
		t2* L_24 = p0;
		int32_t L_25 = m2699(L_24, &m2699_MI);
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0087;
		}
	}
	{
		t896 * L_26 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_26, (t2*) &_stringLiteral1465, &m5693_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_0087:
	{
		int32_t L_27 = p4;
		t2* L_28 = p3;
		int32_t L_29 = m2699(L_28, &m2699_MI);
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		t896 * L_30 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_30, (t2*) &_stringLiteral1466, &m5693_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009d:
	{
		int32_t L_31 = p2;
		t2* L_32 = p0;
		int32_t L_33 = m2699(L_32, &m2699_MI);
		int32_t L_34 = p1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34)))))
		{
			goto IL_00b3;
		}
	}
	{
		t896 * L_35 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_35, (t2*) &_stringLiteral1467, &m5693_MI);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_00b3:
	{
		int32_t L_36 = p5;
		t2* L_37 = p3;
		int32_t L_38 = m2699(L_37, &m2699_MI);
		int32_t L_39 = p4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_39)))))
		{
			goto IL_00cc;
		}
	}
	{
		t896 * L_40 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_40, (t2*) &_stringLiteral1468, &m5693_MI);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_00cc:
	{
		t2* L_41 = p0;
		int32_t L_42 = p1;
		int32_t L_43 = p2;
		t2* L_44 = p3;
		int32_t L_45 = p4;
		int32_t L_46 = p5;
		int32_t L_47 = p6;
		int32_t L_48 = m8601(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, &m8601_MI);
		return L_48;
	}
}
extern MethodInfo m8604_MI;
extern "C" bool m8604 (t1537 * __this, t9 * p0, MethodInfo* method)
{
	t1537 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1537 *)IsInst(L_0, InitializedTypeInfo(&t1537_TI)));
		t1537 * L_1 = V_0;
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
		t1537 * L_2 = V_0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m8605_MI;
extern "C" int32_t m8605 (t1537 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8616(__this, &m8616_MI);
		return L_0;
	}
}
extern MethodInfo m8606_MI;
extern "C" t1608 * m8606 (t1537 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	t1608 * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = p1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)268435456))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1073741824))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0024;
	}

IL_0014:
	{
		t556 * L_3 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_3, (t2*) &_stringLiteral1469, (t2*) &_stringLiteral685, &m5691_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_4 = m8593(NULL, &m8593_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t1606 * L_5 = (__this->f3);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t1608 * L_8 = m7881(L_5, L_6, L_7, &m7881_MI);
		return L_8;
	}

IL_0039:
	{
		int32_t L_9 = (__this->f1);
		t2* L_10 = p0;
		int32_t L_11 = p1;
		t1608 * L_12 = (t1608 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1608_TI));
		m7915(L_12, L_9, L_10, L_11, &m7915_MI);
		V_0 = L_12;
		t1608 * L_13 = V_0;
		t2* L_14 = p0;
		int32_t L_15 = p1;
		m8597(__this, L_13, L_14, L_15, &m8597_MI);
		t1608 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m8607_MI;
extern "C" int32_t m8607 (t1537 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8610_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8608 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = p5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1606 * L_1 = (__this->f3);
		t2* L_2 = p0;
		t2* L_3 = p3;
		int32_t L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p4;
		int32_t L_7 = m7900(L_1, L_2, L_3, L_4, L_5, L_6, &m7900_MI);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0018:
	{
		t1606 * L_8 = (__this->f3);
		t2* L_9 = p0;
		t2* L_10 = p3;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		int32_t L_13 = p4;
		int32_t L_14 = m7905(L_8, L_9, L_10, L_11, L_12, L_13, &m7905_MI);
		G_B3_0 = L_14;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8609 (t1537 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_0 = m8593(NULL, &m8593_MI);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = p5;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = p4;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1073741824))))
		{
			goto IL_0025;
		}
	}

IL_0014:
	{
		t2* L_3 = p0;
		int32_t L_4 = p1;
		int32_t L_5 = p2;
		t2* L_6 = p3;
		int32_t L_7 = p4;
		bool L_8 = p5;
		int32_t L_9 = m8608(__this, L_3, L_4, L_5, L_6, L_7, L_8, &m8608_MI);
		G_B5_0 = L_9;
		goto IL_0034;
	}

IL_0025:
	{
		t2* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		t2* L_13 = p3;
		int32_t L_14 = p4;
		bool L_15 = p5;
		int32_t L_16 = m8598(__this, L_10, L_11, L_12, L_13, L_14, L_15, &m8598_MI);
		G_B5_0 = L_16;
	}

IL_0034:
	{
		return G_B5_0;
	}
}
extern "C" int32_t m8610 (t1537 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral611, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_5, (t2*) &_stringLiteral1117, &m5693_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		int32_t L_6 = p3;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = m2699(L_7, &m2699_MI);
		int32_t L_9 = p2;
		int32_t L_10 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		t896 * L_11 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_11, (t2*) &_stringLiteral493, &m5693_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0047:
	{
		int32_t L_12 = p4;
		int32_t L_13 = p4;
		if ((((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)1342177311)))) == ((int32_t)L_13)))
		{
			goto IL_005e;
		}
	}
	{
		t556 * L_14 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_14, (t2*) &_stringLiteral685, &m2885_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005e:
	{
		t2* L_15 = p1;
		int32_t L_16 = m2699(L_15, &m2699_MI);
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_17 = p2;
		return L_17;
	}

IL_0068:
	{
		int32_t L_18 = p3;
		if (L_18)
		{
			goto IL_006e;
		}
	}
	{
		return (-1);
	}

IL_006e:
	{
		t2* L_19 = p0;
		int32_t L_20 = p2;
		int32_t L_21 = p3;
		t2* L_22 = p1;
		int32_t L_23 = p4;
		int32_t L_24 = m8609(__this, L_19, L_20, L_21, L_22, L_23, 1, &m8609_MI);
		return L_24;
	}
}
extern MethodInfo m8611_MI;
extern "C" bool m8611 (t1537 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1470, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_4 = m8593(NULL, &m8593_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1606 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7894(L_5, L_6, L_7, L_8, &m7894_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2699(L_10, &m2699_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2699(L_12, &m2699_MI);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		t2* L_14 = p0;
		t2* L_15 = p1;
		int32_t L_16 = m2699(L_15, &m2699_MI);
		t2* L_17 = p1;
		t2* L_18 = p1;
		int32_t L_19 = m2699(L_18, &m2699_MI);
		int32_t L_20 = p2;
		int32_t L_21 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8603_MI, __this, L_14, 0, L_16, L_17, 0, L_19, L_20);
		return ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8612_MI;
extern "C" bool m8612 (t1537 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1471, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
		bool L_4 = m8593(NULL, &m8593_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1606 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7897(L_5, L_6, L_7, L_8, &m7897_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2699(L_10, &m2699_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2699(L_12, &m2699_MI);
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}

IL_0042:
	{
		t2* L_14 = p0;
		t2* L_15 = p0;
		int32_t L_16 = m2699(L_15, &m2699_MI);
		t2* L_17 = p1;
		int32_t L_18 = m2699(L_17, &m2699_MI);
		t2* L_19 = p1;
		int32_t L_20 = m2699(L_19, &m2699_MI);
		t2* L_21 = p1;
		t2* L_22 = p1;
		int32_t L_23 = m2699(L_22, &m2699_MI);
		int32_t L_24 = p2;
		int32_t L_25 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8603_MI, __this, L_14, ((int32_t)((int32_t)L_16-(int32_t)L_18)), L_20, L_21, 0, L_23, L_24);
		return ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8613_MI;
extern "C" int32_t m8613 (t1537 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8614_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8614 (t1537 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral611, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = p2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_5, (t2*) &_stringLiteral1117, &m5693_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		int32_t L_6 = p3;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))) >= ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}

IL_0037:
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_9, (t2*) &_stringLiteral493, &m5693_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		int32_t L_10 = p4;
		int32_t L_11 = p4;
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)1342177311)))) == ((int32_t)L_11)))
		{
			goto IL_0059;
		}
	}
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral685, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0059:
	{
		int32_t L_13 = p3;
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		return (-1);
	}

IL_005f:
	{
		t2* L_14 = p1;
		int32_t L_15 = m2699(L_14, &m2699_MI);
		V_0 = L_15;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		return 0;
	}

IL_006b:
	{
		t2* L_17 = p0;
		int32_t L_18 = p2;
		int32_t L_19 = p3;
		t2* L_20 = p1;
		int32_t L_21 = p4;
		int32_t L_22 = m8609(__this, L_17, L_18, L_19, L_20, L_21, 0, &m8609_MI);
		return L_22;
	}
}
extern MethodInfo m8615_MI;
extern "C" t2* m8615 (t1537 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1472, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" int32_t m8616 (t1537 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1538MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1863.h"
#include "t1546.h"
#include "t1695.h"
extern TypeInfo t1863_TI;
extern TypeInfo t1546_TI;
extern TypeInfo t1695_TI;
#include "t1863MD.h"
#include "t1546MD.h"
#include "t1695MD.h"
extern Il2CppType t1546_0_0_0;
extern Il2CppType t1695_0_0_0;
extern MethodInfo m11013_MI;
extern MethodInfo m11024_MI;
extern MethodInfo m11025_MI;
extern MethodInfo m8639_MI;
extern MethodInfo m8649_MI;
extern MethodInfo m8634_MI;
extern MethodInfo m8706_MI;
extern MethodInfo m8647_MI;
extern MethodInfo m8651_MI;
extern MethodInfo m8646_MI;
extern MethodInfo m8680_MI;
extern MethodInfo m8618_MI;
extern MethodInfo m8619_MI;
extern MethodInfo m8648_MI;
extern MethodInfo m8641_MI;
extern MethodInfo m7345_MI;
extern MethodInfo m8640_MI;
extern MethodInfo m8621_MI;
extern MethodInfo m8642_MI;
extern MethodInfo m8623_MI;
extern MethodInfo m8633_MI;
extern MethodInfo m8635_MI;
extern MethodInfo m8636_MI;
extern MethodInfo m8643_MI;
extern MethodInfo m8644_MI;
extern MethodInfo m8645_MI;
extern MethodInfo m8717_MI;
extern MethodInfo m8678_MI;
extern MethodInfo m8738_MI;
extern MethodInfo m8657_MI;
extern MethodInfo m8740_MI;
extern MethodInfo m8620_MI;


extern "C" void m8617 (t894 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8618(__this, L_0, 1, &m8618_MI);
		return;
	}
}
extern "C" void m8618 (t894 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8619(__this, L_0, L_1, 0, &m8619_MI);
		return;
	}
}
extern "C" void m8619 (t894 * __this, int32_t p0, bool p1, bool p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_1, (t2*) &_stringLiteral1107, (t2*) &_stringLiteral1473, &m4336_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		__this->f33 = 1;
		bool L_2 = p2;
		__this->f7 = L_2;
		bool L_3 = p1;
		__this->f13 = L_3;
		int32_t L_4 = p0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_003c;
		}
	}
	{
		bool L_5 = p2;
		m8648(__this, L_5, &m8648_MI);
		return;
	}

IL_003c:
	{
		int32_t L_6 = p0;
		bool L_7 = m8641(__this, L_6, &m8641_MI);
		if (L_7)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_8 = p0;
		int32_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t125_TI), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1474, L_10, &m590_MI);
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_12, L_11, (t2*) &_stringLiteral1107, &m5691_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0060:
	{
		return;
	}
}
extern "C" void m8620 (t894 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		__this->f33 = 1;
		bool L_2 = p2;
		__this->f7 = L_2;
		bool L_3 = p1;
		__this->f13 = L_3;
		t2* L_4 = p0;
		int32_t L_5 = m2699(L_4, &m2699_MI);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = p2;
		m8648(__this, L_6, &m8648_MI);
		return;
	}

IL_0039:
	{
		t2* L_7 = p0;
		t2* L_8 = m7345(L_7, &m7345_MI);
		bool L_9 = m8640(__this, L_8, &m8640_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m399(NULL, (t2*) &_stringLiteral1475, L_10, (t2*) &_stringLiteral1476, &m399_MI);
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_12, L_11, (t2*) &_stringLiteral2, &m5691_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0062:
	{
		return;
	}
}
extern "C" void m8621 (t894 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f33 = 1;
		return;
	}
}
extern MethodInfo m8622_MI;
extern "C" void m8622 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f5 = L_0;
		((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f35 = (t2*) &_stringLiteral1477;
		t894 * L_1 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8619(L_1, ((int32_t)127), 0, 1, &m8619_MI);
		((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f4 = L_1;
		return;
	}
}
extern "C" t894 * m4334 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = ((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f4;
		return L_0;
	}
}
extern "C" t894 * m6941 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m11013(NULL, &m11013_MI);
		t894 * L_1 = m11024(L_0, &m11024_MI);
		return L_1;
	}
}
extern MethodInfo m6945_MI;
extern "C" t894 * m6945 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m11013(NULL, &m11013_MI);
		t894 * L_1 = m11025(L_0, &m11025_MI);
		return L_1;
	}
}
extern "C" t894 * m8623 (t9 * __this , MethodInfo* method)
{
	t894 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8621(L_0, &m8621_MI);
		V_0 = L_0;
		t894 * L_1 = V_0;
		bool L_2 = m8642(NULL, L_1, &m8642_MI);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_3 = m4334(NULL, &m4334_MI);
		V_0 = L_3;
	}

IL_0014:
	{
		t894 * L_4 = V_0;
		int32_t L_5 = (L_4->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f6 = L_5;
		t894 * L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m8624_MI;
extern "C" t894 * m8624 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_0 = m8623(NULL, &m8623_MI);
		return L_0;
	}
}
extern "C" int32_t m8625 (t894 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m8626 (t894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8627_MI;
extern "C" t894 * m8627 (t894 * __this, MethodInfo* method)
{
	{
		t894 * L_0 = (__this->f30);
		if (L_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_1 = (__this->f33);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_0016:
	{
		int32_t L_2 = (__this->f9);
		int32_t L_3 = (__this->f8);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		return (t894 *)NULL;
	}

IL_0026:
	{
		int32_t L_4 = (__this->f9);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_5 = m4334(NULL, &m4334_MI);
		__this->f30 = L_5;
		goto IL_0061;
	}

IL_003d:
	{
		int32_t L_6 = (__this->f8);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0050;
		}
	}
	{
		__this->f30 = __this;
		goto IL_0061;
	}

IL_0050:
	{
		int32_t L_7 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_8 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8617(L_8, L_7, &m8617_MI);
		__this->f30 = L_8;
	}

IL_0061:
	{
		t894 * L_9 = (__this->f30);
		return L_9;
	}
}
extern "C" t1607 * m8628 (t894 * __this, MethodInfo* method)
{
	t894 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1607 * L_0 = (__this->f16);
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		bool L_1 = (__this->f33);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t894 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1607 * L_3 = (__this->f16);
			if (L_3)
			{
				goto IL_003e;
			}
		}

IL_002a:
		{
			bool L_4 = (__this->f7);
			t1607 * L_5 = m8649(__this, L_4, &m8649_MI);
			__this->f16 = L_5;
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		t894 * L_6 = V_0;
		m1069(NULL, L_6, &m1069_MI);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0047:
	{
		t1607 * L_7 = (__this->f16);
		return L_7;
	}
}
extern "C" t2* m8629 (t894 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_000e:
	{
		t2* L_1 = (__this->f23);
		return L_1;
	}
}
extern MethodInfo m8630_MI;
extern "C" bool m8630 (t894 * __this, t9 * p0, MethodInfo* method)
{
	t894 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t894 *)IsInst(L_0, InitializedTypeInfo(&t894_TI)));
		t894 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t894 * L_2 = V_0;
		int32_t L_3 = (L_2->f8);
		int32_t L_4 = (__this->f8);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0019:
	{
		return 0;
	}
}
extern MethodInfo m8631_MI;
extern "C" int32_t m8631 (t894 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8632_MI;
extern "C" t2* m8632 (t894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t1537 * m6942 (t894 * __this, MethodInfo* method)
{
	t894 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1537 * L_0 = (__this->f26);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = (__this->f33);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t894 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1537 * L_3 = (__this->f26);
			if (L_3)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1537_TI));
			t1537 * L_4 = (t1537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1537_TI));
			m8590(L_4, __this, &m8590_MI);
			__this->f26 = L_4;
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x41, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		t894 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0041:
	{
		t1537 * L_6 = (__this->f26);
		return L_6;
	}
}
extern "C" bool m8633 (t894 * __this, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_000e:
	{
		int32_t L_1 = (__this->f8);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_2 = (__this->f8);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)65280))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = (__this->f10);
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B7_0 = 1;
	}

IL_0034:
	{
		return G_B7_0;
	}
}
extern "C" void m8634 (t894 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8633_MI, __this);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2* L_1 = (__this->f17);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1478, L_1, (t2*) &_stringLiteral1479, &m399_MI);
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_3, L_2, &m5706_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		return;
	}
}
extern "C" t1546 * m8635 (t894 * __this, MethodInfo* method)
{
	t894 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_000e:
	{
		m8634(__this, &m8634_MI);
		t1546 * L_1 = (__this->f14);
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		V_0 = __this;
		t894 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1546 * L_3 = (__this->f14);
			if (L_3)
			{
				goto IL_0049;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			t1546 * L_5 = (t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1546_TI));
			m8706(L_5, L_4, &m8706_MI);
			__this->f14 = L_5;
			m8647(__this, &m8647_MI);
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x52, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		t894 * L_6 = V_0;
		m1069(NULL, L_6, &m1069_MI);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0052:
	{
		t1546 * L_7 = (__this->f14);
		return L_7;
	}
}
extern "C" t1695 * m8636 (t894 * __this, MethodInfo* method)
{
	t894 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8639(__this, &m8639_MI);
	}

IL_000e:
	{
		m8634(__this, &m8634_MI);
		t1695 * L_1 = (__this->f15);
		if (L_1)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = __this;
		t894 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1695 * L_3 = (__this->f15);
			if (L_3)
			{
				goto IL_0066;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
			t1695 * L_5 = (t1695 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1695_TI));
			m8651(L_5, L_4, &m8651_MI);
			__this->f15 = L_5;
			m8646(__this, &m8646_MI);
			t1696* L_6 = (__this->f29);
			if (!L_6)
			{
				goto IL_0066;
			}
		}

IL_0051:
		{
			t1695 * L_7 = (__this->f15);
			t1696* L_8 = (__this->f29);
			int32_t L_9 = 0;
			m8680(L_7, (*(t1690 **)(t1690 **)SZArrayLdElema(L_8, L_9)), &m8680_MI);
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		t894 * L_10 = V_0;
		m1069(NULL, L_10, &m1069_MI);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006f:
	{
		t1695 * L_11 = (__this->f15);
		return L_11;
	}
}
extern MethodInfo m8637_MI;
extern "C" bool m8637 (t894 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8638_MI;
extern "C" t9 * m8638 (t894 * __this, t126 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		V_0 = NULL;
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1546_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		t1546 * L_2 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m8635_MI, __this);
		V_0 = L_2;
		goto IL_002c;
	}

IL_0018:
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1695_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		t1695 * L_5 = (t1695 *)VirtFuncInvoker0< t1695 * >::Invoke(&m8636_MI, __this);
		V_0 = L_5;
	}

IL_002c:
	{
		t9 * L_6 = V_0;
		return L_6;
	}
}
extern "C" void m8639 (t894 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		m8643(__this, L_0, &m8643_MI);
		__this->f33 = 1;
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" bool m8640 (t894 * __this, t2* p0, MethodInfo* method)
{
	static bool m8640_init;
	if (!m8640_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m8640_init = true;
	}
	t2* V_0 = {0};
	t713 * V_1 = {0};
	int32_t V_2 = 0;
	{
		t2* L_0 = p0;
		V_0 = L_0;
		t2* L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t713 * L_2 = ((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f38;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 2, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral1480, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral1481, 1);
		t713 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f38 = L_6;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t713 * L_7 = ((t894_SFs*)InitializedTypeInfo(&t894_TI)->static_fields)->f38;
		t2* L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_7, L_8, (&V_2));
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = V_2;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_005f;
	}

IL_0049:
	{
		p0 = (t2*) &_stringLiteral1482;
		goto IL_005f;
	}

IL_0054:
	{
		p0 = (t2*) &_stringLiteral1483;
		goto IL_005f;
	}

IL_005f:
	{
		t2* L_12 = p0;
		bool L_13 = m8644(__this, L_12, &m8644_MI);
		if (L_13)
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		return 1;
	}
}
extern "C" bool m8641 (t894 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8643(__this, L_0, &m8643_MI);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		return 1;
	}
}
extern "C" bool m8642 (t9 * __this , t894 * p0, MethodInfo* method)
{
	{
		t894 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		bool L_1 = m8645(NULL, L_0, &m8645_MI);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
extern "C" bool m8643 (t894 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m8643_ftn) (t894 *, int32_t);
	static m8643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8643_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8644 (t894 * __this, t2* p0, MethodInfo* method)
{
	typedef bool (*m8644_ftn) (t894 *, t2*);
	static m8644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8644_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8645 (t9 * __this , t894 * p0, MethodInfo* method)
{
	typedef bool (*m8645_ftn) (t894 *);
	static m8645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8645_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m8646 (t894 * __this, MethodInfo* method)
{
	typedef void (*m8646_ftn) (t894 *);
	static m8646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8646_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_datetime_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8647 (t894 * __this, MethodInfo* method)
{
	typedef void (*m8647_ftn) (t894 *);
	static m8647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8647_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_number_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8648 (t894 * __this, bool p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		__this->f8 = ((int32_t)127);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t1546 * L_0 = m8717(NULL, &m8717_MI);
		__this->f14 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_1 = m8678(NULL, &m8678_MI);
		__this->f15 = L_1;
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		t1546 * L_3 = (__this->f14);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8738_MI, L_3);
		__this->f14 = ((t1546 *)Castclass(L_4, InitializedTypeInfo(&t1546_TI)));
		t1695 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8657_MI, L_5);
		__this->f15 = ((t1695 *)Castclass(L_6, InitializedTypeInfo(&t1695_TI)));
	}

IL_0059:
	{
		bool L_7 = p0;
		t1607 * L_8 = m8649(__this, L_7, &m8649_MI);
		__this->f16 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f17 = L_9;
		t2* L_10 = (t2*) &_stringLiteral1484;
		V_0 = L_10;
		__this->f20 = L_10;
		t2* L_11 = V_0;
		t2* L_12 = L_11;
		V_0 = L_12;
		__this->f19 = L_12;
		t2* L_13 = V_0;
		__this->f18 = L_13;
		__this->f21 = (t2*) &_stringLiteral1485;
		__this->f22 = (t2*) &_stringLiteral1486;
		__this->f23 = (t2*) &_stringLiteral1487;
		__this->f24 = (t2*) &_stringLiteral1485;
		return;
	}
}
extern "C" t1607 * m8649 (t894 * __this, bool p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		void* L_1 = (__this->f28);
		bool L_2 = p0;
		t1607 * L_3 = (t1607 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1607_TI));
		m8740(L_3, __this, L_0, (void*)(void*)L_1, L_2, &m8740_MI);
		return L_3;
	}
}
extern MethodInfo m8650_MI;
extern "C" t894 * m8650 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_2 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = 1;
	}

IL_0014:
	{
		V_1 = G_B4_0;
		V_0 = 0;
		goto IL_0023;
	}

IL_0019:
	{
		V_0 = 0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B8_0 = 1;
	}

IL_0022:
	{
		V_1 = G_B8_0;
	}

IL_0023:
	{
		t2* L_5 = p0;
		bool L_6 = V_1;
		bool L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_8 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m8620(L_8, L_5, L_6, L_7, &m8620_MI);
		return L_8;
	}
}
#include "t1697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1697_TI;
#include "t1697MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1699.h"
extern TypeInfo t1699_TI;
#include "t1699MD.h"
#include "t125MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m8652_MI;
extern MethodInfo m8656_MI;
extern MethodInfo m8690_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m8697_MI;
extern MethodInfo m11933_MI;
extern MethodInfo m8677_MI;
extern MethodInfo m7030_MI;
extern MethodInfo m2486_MI;
extern MethodInfo m4276_MI;
extern MethodInfo m8686_MI;
extern MethodInfo m8687_MI;
extern MethodInfo m8670_MI;
extern MethodInfo m8671_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m8691_MI;
extern MethodInfo m8674_MI;
extern MethodInfo m8675_MI;
extern MethodInfo m8681_MI;
extern MethodInfo m8683_MI;
extern MethodInfo m8684_MI;


extern "C" void m8651 (t1695 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p0;
		__this->f10 = L_0;
		__this->f11 = (t2*) &_stringLiteral1489;
		__this->f12 = (t2*) &_stringLiteral1490;
		__this->f13 = (t2*) &_stringLiteral750;
		__this->f14 = (t2*) &_stringLiteral343;
		__this->f15 = (t2*) &_stringLiteral1491;
		__this->f16 = (t2*) &_stringLiteral1492;
		__this->f17 = (t2*) &_stringLiteral1493;
		__this->f18 = (t2*) &_stringLiteral1494;
		__this->f19 = (t2*) &_stringLiteral1495;
		__this->f20 = (t2*) &_stringLiteral1496;
		__this->f21 = (t2*) &_stringLiteral1497;
		__this->f22 = (t2*) &_stringLiteral1498;
		__this->f23 = (t2*) &_stringLiteral1499;
		__this->f24 = (t2*) &_stringLiteral1500;
		__this->f25 = 0;
		t1699 * L_1 = (t1699 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1699_TI));
		m8697(L_1, &m8697_MI);
		__this->f26 = L_1;
		__this->f27 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t221* L_2 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f4;
		__this->f28 = L_2;
		t221* L_3 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f5;
		__this->f29 = L_3;
		t221* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f6;
		__this->f31 = L_4;
		t221* L_5 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f7;
		__this->f30 = L_5;
		t221* L_6 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f6;
		__this->f53 = L_6;
		t221* L_7 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f7;
		__this->f52 = L_7;
		t221* L_8 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		__this->f38 = L_8;
		return;
	}
}
extern "C" void m8652 (t1695 * __this, MethodInfo* method)
{
	{
		m8651(__this, 0, &m8651_MI);
		return;
	}
}
extern MethodInfo m8653_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8653 (t9 * __this , MethodInfo* method)
{
	static bool m8653_init;
	if (!m8653_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8653_init = true;
	}
	{
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f1 = (t2*) &_stringLiteral1477;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f2 = (t2*) &_stringLiteral1501;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f3 = (t2*) &_stringLiteral1502;
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1503);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1503;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1504);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1504;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1505);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1505;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1506);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1506;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1507);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1507;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1508);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1508;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1509);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1509;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f4 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1510);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1510;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1511);
		*((t2**)(t2**)SZArrayLdElema(L_8, 1)) = (t2*)(t2*) &_stringLiteral1511;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1512);
		*((t2**)(t2**)SZArrayLdElema(L_9, 2)) = (t2*)(t2*) &_stringLiteral1512;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1513);
		*((t2**)(t2**)SZArrayLdElema(L_10, 3)) = (t2*)(t2*) &_stringLiteral1513;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1514);
		*((t2**)(t2**)SZArrayLdElema(L_11, 4)) = (t2*)(t2*) &_stringLiteral1514;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1515);
		*((t2**)(t2**)SZArrayLdElema(L_12, 5)) = (t2*)(t2*) &_stringLiteral1515;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1516);
		*((t2**)(t2**)SZArrayLdElema(L_13, 6)) = (t2*)(t2*) &_stringLiteral1516;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f5 = L_13;
		t221* L_14 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1517);
		*((t2**)(t2**)SZArrayLdElema(L_14, 0)) = (t2*)(t2*) &_stringLiteral1517;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1518);
		*((t2**)(t2**)SZArrayLdElema(L_15, 1)) = (t2*)(t2*) &_stringLiteral1518;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1519);
		*((t2**)(t2**)SZArrayLdElema(L_16, 2)) = (t2*)(t2*) &_stringLiteral1519;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1520);
		*((t2**)(t2**)SZArrayLdElema(L_17, 3)) = (t2*)(t2*) &_stringLiteral1520;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1521);
		*((t2**)(t2**)SZArrayLdElema(L_18, 4)) = (t2*)(t2*) &_stringLiteral1521;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1522);
		*((t2**)(t2**)SZArrayLdElema(L_19, 5)) = (t2*)(t2*) &_stringLiteral1522;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1523);
		*((t2**)(t2**)SZArrayLdElema(L_20, 6)) = (t2*)(t2*) &_stringLiteral1523;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1524);
		*((t2**)(t2**)SZArrayLdElema(L_21, 7)) = (t2*)(t2*) &_stringLiteral1524;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1525);
		*((t2**)(t2**)SZArrayLdElema(L_22, 8)) = (t2*)(t2*) &_stringLiteral1525;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1526);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1526;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1527);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1527;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1528);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1528;
		t221* L_26 = L_25;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)12))) = (t2*)L_27;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f6 = L_26;
		t221* L_28 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1529);
		*((t2**)(t2**)SZArrayLdElema(L_28, 0)) = (t2*)(t2*) &_stringLiteral1529;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1530);
		*((t2**)(t2**)SZArrayLdElema(L_29, 1)) = (t2*)(t2*) &_stringLiteral1530;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1531);
		*((t2**)(t2**)SZArrayLdElema(L_30, 2)) = (t2*)(t2*) &_stringLiteral1531;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1532);
		*((t2**)(t2**)SZArrayLdElema(L_31, 3)) = (t2*)(t2*) &_stringLiteral1532;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1521);
		*((t2**)(t2**)SZArrayLdElema(L_32, 4)) = (t2*)(t2*) &_stringLiteral1521;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1533);
		*((t2**)(t2**)SZArrayLdElema(L_33, 5)) = (t2*)(t2*) &_stringLiteral1533;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1534);
		*((t2**)(t2**)SZArrayLdElema(L_34, 6)) = (t2*)(t2*) &_stringLiteral1534;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1535);
		*((t2**)(t2**)SZArrayLdElema(L_35, 7)) = (t2*)(t2*) &_stringLiteral1535;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1536);
		*((t2**)(t2**)SZArrayLdElema(L_36, 8)) = (t2*)(t2*) &_stringLiteral1536;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1537);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1537;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1538);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1538;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1539);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1539;
		t221* L_40 = L_39;
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_40, L_41);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)12))) = (t2*)L_41;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f7 = L_40;
		t221* L_42 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1540);
		*((t2**)(t2**)SZArrayLdElema(L_42, 0)) = (t2*)(t2*) &_stringLiteral1540;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1541);
		*((t2**)(t2**)SZArrayLdElema(L_43, 1)) = (t2*)(t2*) &_stringLiteral1541;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1542);
		*((t2**)(t2**)SZArrayLdElema(L_44, 2)) = (t2*)(t2*) &_stringLiteral1542;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1543);
		*((t2**)(t2**)SZArrayLdElema(L_45, 3)) = (t2*)(t2*) &_stringLiteral1543;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1544);
		*((t2**)(t2**)SZArrayLdElema(L_46, 4)) = (t2*)(t2*) &_stringLiteral1544;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1545);
		*((t2**)(t2**)SZArrayLdElema(L_47, 5)) = (t2*)(t2*) &_stringLiteral1545;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1546);
		*((t2**)(t2**)SZArrayLdElema(L_48, 6)) = (t2*)(t2*) &_stringLiteral1546;
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8 = L_48;
		return;
	}
}
extern MethodInfo m8654_MI;
extern "C" t1695 * m8654 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1695 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1695_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m11933_MI, L_1, L_2);
		V_0 = ((t1695 *)Castclass(L_3, InitializedTypeInfo(&t1695_TI)));
		t1695 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1695 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_6 = m8677(NULL, &m8677_MI);
		return L_6;
	}
}
extern "C" bool m8655 (t1695 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1695 * m8656 (t9 * __this , t1695 * p0, MethodInfo* method)
{
	t1695 * V_0 = {0};
	{
		t1695 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8657_MI, L_0);
		V_0 = ((t1695 *)Castclass(L_1, InitializedTypeInfo(&t1695_TI)));
		t1695 * L_2 = V_0;
		L_2->f10 = 1;
		t1695 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t9 * m8657 (t1695 * __this, MethodInfo* method)
{
	t1695 * V_0 = {0};
	{
		t9 * L_0 = m7030(__this, &m7030_MI);
		V_0 = ((t1695 *)Castclass(L_0, InitializedTypeInfo(&t1695_TI)));
		t1695 * L_1 = V_0;
		L_1->f10 = 0;
		t1695 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8658_MI;
extern "C" t9 * m8658 (t1695 * __this, t126 * p0, MethodInfo* method)
{
	t1695 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		t126 * L_1 = m2486(__this, &m2486_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = __this;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = ((t1695 *)(NULL));
	}

IL_000d:
	{
		return G_B3_0;
	}
}
extern MethodInfo m8659_MI;
extern "C" t2* m8659 (t1695 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)13))))
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_2, &m5870_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		t221* L_3 = (__this->f31);
		int32_t L_4 = p0;
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return (*(t2**)(t2**)SZArrayLdElema(L_3, L_5));
	}
}
extern MethodInfo m8660_MI;
extern "C" t2* m8660 (t1695 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = p0;
		t1690 * L_2 = (__this->f26);
		t221* L_3 = m8573(L_2, &m8573_MI);
		if ((((int32_t)L_1) <= ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0014:
	{
		t2* L_4 = m4276((&p0), &m4276_MI);
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral1547, L_4, &m4336_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1690 * L_6 = (__this->f26);
		t221* L_7 = m8573(L_6, &m8573_MI);
		int32_t L_8 = p0;
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		return (*(t2**)(t2**)SZArrayLdElema(L_7, L_9));
	}
}
extern MethodInfo m8661_MI;
extern "C" t2* m8661 (t1695 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)13))))
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_2, &m5870_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		t221* L_3 = (__this->f30);
		int32_t L_4 = p0;
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		return (*(t2**)(t2**)SZArrayLdElema(L_3, L_5));
	}
}
extern MethodInfo m8662_MI;
extern "C" t221* m8662 (t1695 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8663_MI;
extern "C" t221* m8663 (t1695 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f31);
		return L_0;
	}
}
extern MethodInfo m8664_MI;
extern "C" t221* m8664 (t1695 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8665_MI;
extern "C" t221* m8665 (t1695 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8666_MI;
extern "C" t2* m8666 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8667_MI;
extern "C" t2* m8667 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m8668_MI;
extern "C" t2* m8668 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8669_MI;
extern "C" t2* m8669 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern "C" t2* m8670 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" t2* m8671 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern "C" t2* m8672 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t2* m8673 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern "C" t2* m8674 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" t2* m8675 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m8676_MI;
extern "C" t2* m8676 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f21);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t2* L_1 = (__this->f21);
		return L_1;
	}

IL_000f:
	{
		t2* L_2 = (__this->f16);
		t2* L_3 = (__this->f18);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m399(NULL, L_2, (t2*) &_stringLiteral168, L_3, &m399_MI);
		return L_4;
	}
}
extern "C" t1695 * m8677 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m11013(NULL, &m11013_MI);
		t894 * L_1 = m11024(L_0, &m11024_MI);
		t1695 * L_2 = (t1695 *)VirtFuncInvoker0< t1695 * >::Invoke(&m8636_MI, L_1);
		return L_2;
	}
}
extern "C" t1695 * m8678 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_0 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f9;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_1 = (t1695 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1695_TI));
		m8652(L_1, &m8652_MI);
		t1695 * L_2 = m8656(NULL, L_1, &m8656_MI);
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f9 = L_2;
		t1695 * L_3 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f9;
		m8690(L_3, &m8690_MI);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f9;
		return L_4;
	}
}
extern MethodInfo m8679_MI;
extern "C" t1690 * m8679 (t1695 * __this, MethodInfo* method)
{
	{
		t1690 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m8680 (t1695 * __this, t1690 * p0, MethodInfo* method)
{
	{
		bool L_0 = m8655(__this, &m8655_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_1 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f1;
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_2, L_1, &m5685_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t1690 * L_3 = p0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_4, &m11115_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1690 * L_5 = p0;
		__this->f26 = L_5;
		return;
	}
}
extern "C" t2* m8681 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8682_MI;
extern "C" t2* m8682 (t1695 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1488;
	}
}
extern "C" t2* m8683 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern "C" t2* m8684 (t1695 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8685_MI;
extern "C" t221* m8685 (t1695 * __this, MethodInfo* method)
{
	{
		m8686(__this, &m8686_MI);
		t221* L_0 = (__this->f57);
		return (t221*)L_0;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m8686 (t1695 * __this, MethodInfo* method)
{
	static bool m8686_init;
	if (!m8686_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8686_init = true;
	}
	t1161 * V_0 = {0};
	{
		t221* L_0 = (__this->f57);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		V_0 = L_1;
		t1161 * L_2 = V_0;
		t221* L_3 = m8687(__this, ((int32_t)100), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_2, (t9 *)(t9 *)L_3);
		t1161 * L_4 = V_0;
		t221* L_5 = m8687(__this, ((int32_t)68), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_4, (t9 *)(t9 *)L_5);
		t1161 * L_6 = V_0;
		t221* L_7 = m8687(__this, ((int32_t)103), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_6, (t9 *)(t9 *)L_7);
		t1161 * L_8 = V_0;
		t221* L_9 = m8687(__this, ((int32_t)71), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_8, (t9 *)(t9 *)L_9);
		t1161 * L_10 = V_0;
		t221* L_11 = m8687(__this, ((int32_t)102), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_10, (t9 *)(t9 *)L_11);
		t1161 * L_12 = V_0;
		t221* L_13 = m8687(__this, ((int32_t)70), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_12, (t9 *)(t9 *)L_13);
		t1161 * L_14 = V_0;
		t221* L_15 = m8687(__this, ((int32_t)109), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_14, (t9 *)(t9 *)L_15);
		t1161 * L_16 = V_0;
		t221* L_17 = m8687(__this, ((int32_t)77), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_16, (t9 *)(t9 *)L_17);
		t1161 * L_18 = V_0;
		t221* L_19 = m8687(__this, ((int32_t)114), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_18, (t9 *)(t9 *)L_19);
		t1161 * L_20 = V_0;
		t221* L_21 = m8687(__this, ((int32_t)82), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_20, (t9 *)(t9 *)L_21);
		t1161 * L_22 = V_0;
		t221* L_23 = m8687(__this, ((int32_t)115), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_22, (t9 *)(t9 *)L_23);
		t1161 * L_24 = V_0;
		t221* L_25 = m8687(__this, ((int32_t)116), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_24, (t9 *)(t9 *)L_25);
		t1161 * L_26 = V_0;
		t221* L_27 = m8687(__this, ((int32_t)84), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_26, (t9 *)(t9 *)L_27);
		t1161 * L_28 = V_0;
		t221* L_29 = m8687(__this, ((int32_t)117), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_28, (t9 *)(t9 *)L_29);
		t1161 * L_30 = V_0;
		t221* L_31 = m8687(__this, ((int32_t)85), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_30, (t9 *)(t9 *)L_31);
		t1161 * L_32 = V_0;
		t221* L_33 = m8687(__this, ((int32_t)121), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_32, (t9 *)(t9 *)L_33);
		t1161 * L_34 = V_0;
		t221* L_35 = m8687(__this, ((int32_t)89), &m8687_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_34, (t9 *)(t9 *)L_35);
		t1161 * L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_37 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		t121 * L_38 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_36, L_37);
		__this->f57 = (t221*)((t221*)Castclass(L_38, t221_TI_var));
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8687 (t1695 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8687_init;
	if (!m8687_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8687_init = true;
	}
	t221* V_0 = {0};
	uint16_t V_1 = 0x0;
	{
		uint16_t L_0 = p0;
		V_1 = L_0;
		uint16_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 0)
		{
			goto IL_028f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 1)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 2)
		{
			goto IL_00ef;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 3)
		{
			goto IL_01bf;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 4)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 5)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 6)
		{
			goto IL_002b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)82))) == 7)
		{
			goto IL_0265;
		}
	}

IL_002b:
	{
		uint16_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 0)
		{
			goto IL_028f;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 1)
		{
			goto IL_029f;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 2)
		{
			goto IL_0119;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 3)
		{
			goto IL_02af;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 4)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 5)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 6)
		{
			goto IL_0054;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)114))) == 7)
		{
			goto IL_0265;
		}
	}

IL_0054:
	{
		uint16_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)68))) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)68))) == 1)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)68))) == 2)
		{
			goto IL_01bf;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)68))) == 3)
		{
			goto IL_0143;
		}
	}

IL_006d:
	{
		uint16_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)100))) == 0)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)100))) == 1)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)100))) == 2)
		{
			goto IL_01fd;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)100))) == 3)
		{
			goto IL_0181;
		}
	}

IL_0086:
	{
		uint16_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)77))))
		{
			goto IL_023b;
		}
	}
	{
		uint16_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)109))))
		{
			goto IL_023b;
		}
	}
	{
		goto IL_02bf;
	}

IL_009b:
	{
		t221* L_7 = (__this->f33);
		if (!L_7)
		{
			goto IL_00b5;
		}
	}
	{
		t221* L_8 = (__this->f33);
		if ((((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		t221* L_9 = (__this->f33);
		return L_9;
	}

IL_00b5:
	{
		t221* L_10 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_11 = m8670(__this, &m8670_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t2**)(t2**)SZArrayLdElema(L_10, 0)) = (t2*)L_11;
		return L_10;
	}

IL_00c5:
	{
		t221* L_12 = (__this->f32);
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		t221* L_13 = (__this->f32);
		if ((((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_00df;
		}
	}
	{
		t221* L_14 = (__this->f32);
		return L_14;
	}

IL_00df:
	{
		t221* L_15 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_16 = m8671(__this, &m8671_MI);
		ArrayElementTypeCheck (L_15, L_16);
		*((t2**)(t2**)SZArrayLdElema(L_15, 0)) = (t2*)L_16;
		return L_15;
	}

IL_00ef:
	{
		t221* L_17 = (__this->f35);
		if (!L_17)
		{
			goto IL_0109;
		}
	}
	{
		t221* L_18 = (__this->f35);
		if ((((int32_t)(((int32_t)(((t121 *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		t221* L_19 = (__this->f35);
		return L_19;
	}

IL_0109:
	{
		t221* L_20 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_21 = m8673(__this, &m8673_MI);
		ArrayElementTypeCheck (L_20, L_21);
		*((t2**)(t2**)SZArrayLdElema(L_20, 0)) = (t2*)L_21;
		return L_20;
	}

IL_0119:
	{
		t221* L_22 = (__this->f34);
		if (!L_22)
		{
			goto IL_0133;
		}
	}
	{
		t221* L_23 = (__this->f34);
		if ((((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		t221* L_24 = (__this->f34);
		return L_24;
	}

IL_0133:
	{
		t221* L_25 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_26 = m8672(__this, &m8672_MI);
		ArrayElementTypeCheck (L_25, L_26);
		*((t2**)(t2**)SZArrayLdElema(L_25, 0)) = (t2*)L_26;
		return L_25;
	}

IL_0143:
	{
		t221* L_27 = (__this->f32);
		t221* L_28 = (__this->f35);
		t221* L_29 = m8691(__this, L_27, L_28, &m8691_MI);
		V_0 = L_29;
		t221* L_30 = V_0;
		if (!L_30)
		{
			goto IL_0161;
		}
	}
	{
		t221* L_31 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_31)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		t221* L_32 = V_0;
		return L_32;
	}

IL_0161:
	{
		t221* L_33 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_34 = m8671(__this, &m8671_MI);
		t2* L_35 = m8673(__this, &m8673_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_36 = m399(NULL, L_34, (t2*) &_stringLiteral168, L_35, &m399_MI);
		ArrayElementTypeCheck (L_33, L_36);
		*((t2**)(t2**)SZArrayLdElema(L_33, 0)) = (t2*)L_36;
		return L_33;
	}

IL_0181:
	{
		t221* L_37 = (__this->f32);
		t221* L_38 = (__this->f34);
		t221* L_39 = m8691(__this, L_37, L_38, &m8691_MI);
		V_0 = L_39;
		t221* L_40 = V_0;
		if (!L_40)
		{
			goto IL_019f;
		}
	}
	{
		t221* L_41 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_41)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_019f;
		}
	}
	{
		t221* L_42 = V_0;
		return L_42;
	}

IL_019f:
	{
		t221* L_43 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_44 = m8671(__this, &m8671_MI);
		t2* L_45 = m8672(__this, &m8672_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_46 = m399(NULL, L_44, (t2*) &_stringLiteral168, L_45, &m399_MI);
		ArrayElementTypeCheck (L_43, L_46);
		*((t2**)(t2**)SZArrayLdElema(L_43, 0)) = (t2*)L_46;
		return L_43;
	}

IL_01bf:
	{
		t221* L_47 = (__this->f33);
		t221* L_48 = (__this->f35);
		t221* L_49 = m8691(__this, L_47, L_48, &m8691_MI);
		V_0 = L_49;
		t221* L_50 = V_0;
		if (!L_50)
		{
			goto IL_01dd;
		}
	}
	{
		t221* L_51 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_51)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_01dd;
		}
	}
	{
		t221* L_52 = V_0;
		return L_52;
	}

IL_01dd:
	{
		t221* L_53 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_54 = m8670(__this, &m8670_MI);
		t2* L_55 = m8673(__this, &m8673_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_56 = m399(NULL, L_54, (t2*) &_stringLiteral168, L_55, &m399_MI);
		ArrayElementTypeCheck (L_53, L_56);
		*((t2**)(t2**)SZArrayLdElema(L_53, 0)) = (t2*)L_56;
		return L_53;
	}

IL_01fd:
	{
		t221* L_57 = (__this->f33);
		t221* L_58 = (__this->f34);
		t221* L_59 = m8691(__this, L_57, L_58, &m8691_MI);
		V_0 = L_59;
		t221* L_60 = V_0;
		if (!L_60)
		{
			goto IL_021b;
		}
	}
	{
		t221* L_61 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_61)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_021b;
		}
	}
	{
		t221* L_62 = V_0;
		return L_62;
	}

IL_021b:
	{
		t221* L_63 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_64 = m8670(__this, &m8670_MI);
		t2* L_65 = m8672(__this, &m8672_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_66 = m399(NULL, L_64, (t2*) &_stringLiteral168, L_65, &m399_MI);
		ArrayElementTypeCheck (L_63, L_66);
		*((t2**)(t2**)SZArrayLdElema(L_63, 0)) = (t2*)L_66;
		return L_63;
	}

IL_023b:
	{
		t221* L_67 = (__this->f36);
		if (!L_67)
		{
			goto IL_0255;
		}
	}
	{
		t221* L_68 = (__this->f36);
		if ((((int32_t)(((int32_t)(((t121 *)L_68)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0255;
		}
	}
	{
		t221* L_69 = (__this->f36);
		return L_69;
	}

IL_0255:
	{
		t221* L_70 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_71 = m8674(__this, &m8674_MI);
		ArrayElementTypeCheck (L_70, L_71);
		*((t2**)(t2**)SZArrayLdElema(L_70, 0)) = (t2*)L_71;
		return L_70;
	}

IL_0265:
	{
		t221* L_72 = (__this->f37);
		if (!L_72)
		{
			goto IL_027f;
		}
	}
	{
		t221* L_73 = (__this->f37);
		if ((((int32_t)(((int32_t)(((t121 *)L_73)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_027f;
		}
	}
	{
		t221* L_74 = (__this->f37);
		return L_74;
	}

IL_027f:
	{
		t221* L_75 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_76 = m8675(__this, &m8675_MI);
		ArrayElementTypeCheck (L_75, L_76);
		*((t2**)(t2**)SZArrayLdElema(L_75, 0)) = (t2*)L_76;
		return L_75;
	}

IL_028f:
	{
		t221* L_77 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_78 = m8681(__this, &m8681_MI);
		ArrayElementTypeCheck (L_77, L_78);
		*((t2**)(t2**)SZArrayLdElema(L_77, 0)) = (t2*)L_78;
		return L_77;
	}

IL_029f:
	{
		t221* L_79 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_80 = m8683(__this, &m8683_MI);
		ArrayElementTypeCheck (L_79, L_80);
		*((t2**)(t2**)SZArrayLdElema(L_79, 0)) = (t2*)L_80;
		return L_79;
	}

IL_02af:
	{
		t221* L_81 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_82 = m8684(__this, &m8684_MI);
		ArrayElementTypeCheck (L_81, L_82);
		*((t2**)(t2**)SZArrayLdElema(L_81, 0)) = (t2*)L_82;
		return L_81;
	}

IL_02bf:
	{
		t556 * L_83 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_83, (t2*) &_stringLiteral1548, &m2885_MI);
		il2cpp_codegen_raise_exception(L_83);
	}
}
extern MethodInfo m8688_MI;
extern "C" t2* m8688 (t1695 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)6)))
		{
			goto IL_0010;
		}
	}

IL_000a:
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_3, &m5870_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0010:
	{
		t221* L_4 = (__this->f29);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(t2**)(t2**)SZArrayLdElema(L_4, L_6));
	}
}
extern MethodInfo m8689_MI;
extern "C" t2* m8689 (t1695 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)6)))
		{
			goto IL_0010;
		}
	}

IL_000a:
	{
		t896 * L_3 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5870(L_3, &m5870_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0010:
	{
		t221* L_4 = (__this->f28);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		return (*(t2**)(t2**)SZArrayLdElema(L_4, L_6));
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m8690 (t1695 * __this, MethodInfo* method)
{
	static bool m8690_init;
	if (!m8690_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8690_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1491);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1491;
		__this->f32 = L_0;
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1492);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1492;
		__this->f33 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1494);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1494;
		__this->f35 = L_2;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 4));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1493);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral1493;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1549);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral1549;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1550);
		*((t2**)(t2**)SZArrayLdElema(L_5, 2)) = (t2*)(t2*) &_stringLiteral1550;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1551);
		*((t2**)(t2**)SZArrayLdElema(L_6, 3)) = (t2*)(t2*) &_stringLiteral1551;
		__this->f34 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1495);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1495;
		__this->f36 = L_7;
		t221* L_8 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1496);
		*((t2**)(t2**)SZArrayLdElema(L_8, 0)) = (t2*)(t2*) &_stringLiteral1496;
		__this->f37 = L_8;
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8691 (t1695 * __this, t221* p0, t221* p1, MethodInfo* method)
{
	static bool m8691_init;
	if (!m8691_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8691_init = true;
	}
	t221* V_0 = {0};
	int32_t V_1 = 0;
	t2* V_2 = {0};
	t221* V_3 = {0};
	int32_t V_4 = 0;
	t2* V_5 = {0};
	t221* V_6 = {0};
	int32_t V_7 = 0;
	{
		t221* L_0 = p0;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		t221* L_1 = p1;
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		t221* L_2 = p0;
		t221* L_3 = p1;
		V_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))*(int32_t)(((int32_t)(((t121 *)L_3)->max_length)))))));
		V_1 = 0;
		t221* L_4 = p0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0058;
	}

IL_001c:
	{
		t221* L_5 = V_3;
		int32_t L_6 = V_4;
		int32_t L_7 = L_6;
		V_2 = (*(t2**)(t2**)SZArrayLdElema(L_5, L_7));
		t221* L_8 = p1;
		V_6 = L_8;
		V_7 = 0;
		goto IL_004a;
	}

IL_0029:
	{
		t221* L_9 = V_6;
		int32_t L_10 = V_7;
		int32_t L_11 = L_10;
		V_5 = (*(t2**)(t2**)SZArrayLdElema(L_9, L_11));
		t221* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		t2* L_15 = V_2;
		t2* L_16 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m399(NULL, L_15, (t2*) &_stringLiteral168, L_16, &m399_MI);
		ArrayElementTypeCheck (L_12, L_17);
		*((t2**)(t2**)SZArrayLdElema(L_12, L_14)) = (t2*)L_17;
		int32_t L_18 = V_7;
		V_7 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_19 = V_7;
		t221* L_20 = V_6;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t121 *)L_20)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_22 = V_4;
		t221* L_23 = V_3;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		t221* L_24 = V_0;
		return L_24;
	}

IL_0061:
	{
		return (t221*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1516_TI;
#include "t1516MD.h"



#include "t1698.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1698_TI;
#include "t1698MD.h"

#include "t297.h"


extern MethodInfo m8692_MI;
extern "C" void m8692 (t1698 * __this, t269  p0, t269  p1, t297  p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t269  L_0 = p0;
		__this->f0 = L_0;
		t269  L_1 = p1;
		__this->f1 = L_1;
		t297  L_2 = p2;
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m8693_MI;
extern "C" t269  m8693 (t1698 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8694_MI;
extern "C" t269  m8694 (t1698 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8695_MI;
extern "C" t297  m8695 (t1698 * __this, MethodInfo* method)
{
	{
		t297  L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1700.h"
extern TypeInfo t1700_TI;
extern MethodInfo m8699_MI;
extern MethodInfo m8696_MI;


extern TypeInfo* t221_TI_var;
extern "C" void m8696 (t1699 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8696_init;
	if (!m8696_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8696_init = true;
	}
	{
		m8571(__this, &m8571_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8699_MI, __this, L_0);
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1552);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1552;
		__this->f2 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1553);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1553;
		__this->f3 = L_2;
		int32_t L_3 = (__this->f1);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)99)))))
		{
			goto IL_004a;
		}
	}
	{
		__this->f1 = ((int32_t)2029);
	}

IL_004a:
	{
		return;
	}
}
extern "C" void m8697 (t1699 * __this, MethodInfo* method)
{
	{
		m8696(__this, 1, &m8696_MI);
		return;
	}
}
extern MethodInfo m8698_MI;
extern TypeInfo* t1088_TI_var;
extern "C" t1088* m8698 (t1699 * __this, MethodInfo* method)
{
	static bool m8698_init;
	if (!m8698_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8698_init = true;
	}
	{
		t1088* L_0 = ((t1088*)SZArrayNew(t1088_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 0)) = (int32_t)1;
		return L_0;
	}
}
extern "C" void m8699 (t1699 * __this, int32_t p0, MethodInfo* method)
{
	{
		m8572(__this, &m8572_MI);
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8700_MI;
extern "C" int32_t m8700 (t1699 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8586(NULL, L_0, &m8586_MI);
		return L_1;
	}
}
extern MethodInfo m8701_MI;
extern "C" int32_t m8701 (t1699 * __this, t269  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t269  L_0 = p0;
		int32_t L_1 = m8577(NULL, L_0, &m8577_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = m8578(NULL, L_2, &m8578_MI);
		return L_3;
	}
}
extern MethodInfo m8702_MI;
extern "C" int32_t m8702 (t1699 * __this, t269  p0, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8703_MI;
extern "C" int32_t m8703 (t1699 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8587(NULL, L_0, &m8587_MI);
		return L_1;
	}
}
extern MethodInfo m8704_MI;
extern "C" int32_t m8704 (t1699 * __this, t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		int32_t L_1 = m8588(NULL, L_0, &m8588_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1700MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8707_MI;
extern MethodInfo m8726_MI;
extern MethodInfo m8705_MI;
extern MethodInfo m8716_MI;


extern TypeInfo* t1088_TI_var;
extern "C" void m8705 (t1546 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8705_init;
	if (!m8705_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m8705_init = true;
	}
	int32_t V_0 = 0;
	{
		__this->f4 = (t2*) &_stringLiteral736;
		__this->f5 = (t2*) &_stringLiteral695;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t221* L_0 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f38;
		__this->f36 = L_0;
		__this->f37 = 1;
		m336(__this, &m336_MI);
		bool L_1 = p1;
		__this->f0 = L_1;
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)127))))
		{
			goto IL_0040;
		}
	}
	{
		p0 = ((int32_t)127);
	}

IL_0040:
	{
		int32_t L_3 = p0;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)127))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0157;
	}

IL_004c:
	{
		__this->f0 = 0;
		__this->f6 = 2;
		__this->f7 = (t2*) &_stringLiteral140;
		__this->f8 = (t2*) &_stringLiteral342;
		t1088* L_5 = ((t1088*)SZArrayNew(t1088_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 0)) = (int32_t)3;
		__this->f9 = L_5;
		__this->f10 = 0;
		__this->f11 = 0;
		__this->f12 = (t2*) &_stringLiteral1556;
		__this->f13 = (t2*) &_stringLiteral1557;
		__this->f14 = (t2*) &_stringLiteral1558;
		__this->f15 = (t2*) &_stringLiteral172;
		__this->f16 = 2;
		__this->f17 = (t2*) &_stringLiteral140;
		__this->f18 = (t2*) &_stringLiteral342;
		t1088* L_6 = ((t1088*)SZArrayNew(t1088_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, 0)) = (int32_t)3;
		__this->f19 = L_6;
		__this->f20 = 1;
		__this->f21 = 2;
		__this->f22 = (t2*) &_stringLiteral140;
		__this->f23 = (t2*) &_stringLiteral342;
		t1088* L_7 = ((t1088*)SZArrayNew(t1088_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, 0)) = (int32_t)3;
		__this->f24 = L_7;
		__this->f25 = 0;
		__this->f26 = 0;
		__this->f27 = (t2*) &_stringLiteral743;
		__this->f28 = (t2*) &_stringLiteral1559;
		__this->f29 = (t2*) &_stringLiteral1560;
		__this->f30 = (t2*) &_stringLiteral173;
		goto IL_0157;
	}

IL_0157:
	{
		return;
	}
}
extern "C" void m8706 (t1546 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		m8705(__this, ((int32_t)127), L_0, &m8705_MI);
		return;
	}
}
extern "C" void m8707 (t1546 * __this, MethodInfo* method)
{
	{
		m8706(__this, 0, &m8706_MI);
		return;
	}
}
extern MethodInfo m8708_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8708 (t9 * __this , MethodInfo* method)
{
	static bool m8708_init;
	if (!m8708_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8708_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral695);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral695;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral779);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral779;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1561);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1561;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1562);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1562;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1563);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1563;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1564);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1564;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1565);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1565;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1566);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1566;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1567);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1567;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1568);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1568;
		((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f38 = L_9;
		return;
	}
}
extern MethodInfo m8709_MI;
extern "C" int32_t m8709 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8710_MI;
extern "C" t2* m8710 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8711_MI;
extern "C" t2* m8711 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8712_MI;
extern "C" t1088* m8712 (t1546 * __this, MethodInfo* method)
{
	{
		t1088* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8713_MI;
extern "C" int32_t m8713 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m8714_MI;
extern "C" int32_t m8714 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8715_MI;
extern "C" t2* m8715 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t1546 * m8716 (t9 * __this , MethodInfo* method)
{
	t1546 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1863 * L_0 = m11013(NULL, &m11013_MI);
		t894 * L_1 = m11024(L_0, &m11024_MI);
		t1546 * L_2 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m8635_MI, L_1);
		V_0 = L_2;
		t1546 * L_3 = V_0;
		L_3->f0 = 1;
		t1546 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t1546 * m8717 (t9 * __this , MethodInfo* method)
{
	t1546 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t1546 * L_0 = (t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1546_TI));
		m8707(L_0, &m8707_MI);
		V_0 = L_0;
		t1546 * L_1 = V_0;
		m8726(L_1, 1, &m8726_MI);
		t1546 * L_2 = V_0;
		L_2->f0 = 1;
		t1546 * L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m8718_MI;
extern "C" t2* m8718 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8719_MI;
extern "C" t2* m8719 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m8720_MI;
extern "C" t2* m8720 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m8721_MI;
extern "C" int32_t m8721 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m8722_MI;
extern "C" t2* m8722 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8723_MI;
extern "C" t2* m8723 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m8724_MI;
extern "C" t1088* m8724 (t1546 * __this, MethodInfo* method)
{
	{
		t1088* L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m8725_MI;
extern "C" int32_t m8725 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f20);
		return L_0;
	}
}
extern "C" void m8726 (t1546 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)4)))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_2, (t2*) &_stringLiteral1554, &m5693_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		bool L_3 = (__this->f0);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		t1332 * L_4 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_4, (t2*) &_stringLiteral1555, &m5685_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		int32_t L_5 = p0;
		__this->f20 = L_5;
		return;
	}
}
extern MethodInfo m8727_MI;
extern "C" int32_t m8727 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m8728_MI;
extern "C" t2* m8728 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8729_MI;
extern "C" t2* m8729 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m8730_MI;
extern "C" t1088* m8730 (t1546 * __this, MethodInfo* method)
{
	{
		t1088* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8731_MI;
extern "C" int32_t m8731 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f25);
		return L_0;
	}
}
extern MethodInfo m8732_MI;
extern "C" int32_t m8732 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f26);
		return L_0;
	}
}
extern MethodInfo m8733_MI;
extern "C" t2* m8733 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f27);
		return L_0;
	}
}
extern MethodInfo m8734_MI;
extern "C" t2* m8734 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8735_MI;
extern "C" t2* m8735 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8736_MI;
extern "C" t2* m8736 (t1546 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8737_MI;
extern "C" t9 * m8737 (t1546 * __this, t126 * p0, MethodInfo* method)
{
	t1546 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1546_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = __this;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = ((t1546 *)(NULL));
	}

IL_0011:
	{
		return G_B3_0;
	}
}
extern "C" t9 * m8738 (t1546 * __this, MethodInfo* method)
{
	t1546 * V_0 = {0};
	{
		t9 * L_0 = m7030(__this, &m7030_MI);
		V_0 = ((t1546 *)Castclass(L_0, InitializedTypeInfo(&t1546_TI)));
		t1546 * L_1 = V_0;
		L_1->f0 = 0;
		t1546 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8739_MI;
extern "C" t1546 * m8739 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1546 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1546_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m11933_MI, L_1, L_2);
		V_0 = ((t1546 *)Castclass(L_3, InitializedTypeInfo(&t1546_TI)));
		t1546 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1546 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t1546 * L_6 = m8716(NULL, &m8716_MI);
		return L_6;
	}
}
#include "t895.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t895_TI;
#include "t895MD.h"



#include "t1701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1701_TI;
#include "t1701MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7292_MI;
extern MethodInfo m5778_MI;
extern MethodInfo m7375_MI;
extern MethodInfo m7817_MI;
extern MethodInfo m8746_MI;
extern MethodInfo m8747_MI;


extern "C" void m8740 (t1607 * __this, t894 * p0, int32_t p1, void* p2, bool p3, MethodInfo* method)
{
	t894 * V_0 = {0};
	t1701  V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		bool L_0 = p3;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f2 = L_1;
		t894 * L_2 = p0;
		__this->f3 = L_2;
		void* L_3 = p2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		void* L_4 = p2;
		__this->f5 = (*(t1701 *)L_4);
		goto IL_0049;
	}

IL_002d:
	{
		Initobj (InitializedTypeInfo(&t1701_TI), (&V_1));
		t1701  L_5 = V_1;
		__this->f5 = L_5;
		t1701 * L_6 = &(__this->f5);
		L_6->f4 = ((int32_t)44);
	}

IL_0049:
	{
		t894 * L_7 = p0;
		V_0 = L_7;
		goto IL_0054;
	}

IL_004d:
	{
		t894 * L_8 = V_0;
		t894 * L_9 = (t894 *)VirtFuncInvoker0< t894 * >::Invoke(&m8627_MI, L_8);
		V_0 = L_9;
	}

IL_0054:
	{
		t894 * L_10 = V_0;
		t894 * L_11 = (t894 *)VirtFuncInvoker0< t894 * >::Invoke(&m8627_MI, L_10);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		t894 * L_12 = V_0;
		t894 * L_13 = (t894 *)VirtFuncInvoker0< t894 * >::Invoke(&m8627_MI, L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)127))))
		{
			goto IL_0074;
		}
	}
	{
		t894 * L_15 = V_0;
		t894 * L_16 = (t894 *)VirtFuncInvoker0< t894 * >::Invoke(&m8627_MI, L_15);
		t894 * L_17 = V_0;
		if ((!(((t9*)(t894 *)L_16) == ((t9*)(t894 *)L_17))))
		{
			goto IL_004d;
		}
	}

IL_0074:
	{
		t894 * L_18 = V_0;
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		t894 * L_19 = V_0;
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_19);
		V_2 = L_20;
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)31))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)44))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0093;
	}

IL_008a:
	{
		__this->f4 = 1;
		goto IL_0093;
	}

IL_0093:
	{
		return;
	}
}
extern MethodInfo m8741_MI;
extern "C" void m8741 (t1607 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t2* m8742 (t1607 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t894 * L_1 = (__this->f3);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8626_MI, L_1);
		__this->f1 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f1);
		return L_3;
	}
}
extern MethodInfo m8743_MI;
extern "C" bool m8743 (t1607 * __this, t9 * p0, MethodInfo* method)
{
	t1607 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t9 * L_1 = p0;
		V_0 = ((t1607 *)IsInst(L_1, InitializedTypeInfo(&t1607_TI)));
		t1607 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		t1607 * L_3 = V_0;
		int32_t L_4 = (L_3->f2);
		int32_t L_5 = (__this->f2);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		return 0;
	}

IL_0021:
	{
		t1607 * L_6 = V_0;
		t894 * L_7 = (L_6->f3);
		t894 * L_8 = (__this->f3);
		if ((((t9*)(t894 *)L_7) == ((t9*)(t894 *)L_8)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		return 1;
	}
}
extern MethodInfo m8744_MI;
extern "C" int32_t m8744 (t1607 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8745_MI;
extern "C" t2* m8745 (t1607 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1569, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" uint16_t m8746 (t1607 * __this, uint16_t p0, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)64))))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_1 = p0;
		if ((((int32_t)((int32_t)96)) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_2 = p0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		uint16_t L_3 = p0;
		return L_3;
	}

IL_0014:
	{
		uint16_t L_4 = p0;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		uint16_t L_5 = p0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)90))))
		{
			goto IL_0031;
		}
	}
	{
		bool L_6 = (__this->f4);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		uint16_t L_7 = p0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)73))))
		{
			goto IL_0031;
		}
	}

IL_002b:
	{
		uint16_t L_8 = p0;
		return (((uint16_t)((int32_t)((int32_t)L_8+(int32_t)((int32_t)32)))));
	}

IL_0031:
	{
		t894 * L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		t894 * L_10 = (__this->f3);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_004f;
		}
	}

IL_0048:
	{
		uint16_t L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_13 = m7292(NULL, L_12, &m7292_MI);
		return L_13;
	}

IL_004f:
	{
		uint16_t L_14 = p0;
		V_0 = L_14;
		uint16_t L_15 = V_0;
		if (((int32_t)((int32_t)L_15-(int32_t)((int32_t)453))) == 0)
		{
			goto IL_00b7;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)((int32_t)453))) == 1)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)((int32_t)453))) == 2)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)L_15-(int32_t)((int32_t)453))) == 3)
		{
			goto IL_00bd;
		}
	}

IL_006d:
	{
		uint16_t L_16 = V_0;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)978))) == 0)
		{
			goto IL_00cf;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)978))) == 1)
		{
			goto IL_00d5;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)978))) == 2)
		{
			goto IL_00db;
		}
	}
	{
		uint16_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)73))))
		{
			goto IL_00a4;
		}
	}
	{
		uint16_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)304))))
		{
			goto IL_00b4;
		}
	}
	{
		uint16_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)459))))
		{
			goto IL_00c3;
		}
	}
	{
		uint16_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)498))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00e1;
	}

IL_00a4:
	{
		bool L_21 = (__this->f4);
		if (!L_21)
		{
			goto IL_00b2;
		}
	}
	{
		return ((int32_t)305);
	}

IL_00b2:
	{
		goto IL_00e1;
	}

IL_00b4:
	{
		return ((int32_t)105);
	}

IL_00b7:
	{
		return ((int32_t)454);
	}

IL_00bd:
	{
		return ((int32_t)457);
	}

IL_00c3:
	{
		return ((int32_t)460);
	}

IL_00c9:
	{
		return ((int32_t)499);
	}

IL_00cf:
	{
		return ((int32_t)965);
	}

IL_00d5:
	{
		return ((int32_t)973);
	}

IL_00db:
	{
		return ((int32_t)971);
	}

IL_00e1:
	{
		uint16_t L_22 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_23 = m7292(NULL, L_22, &m7292_MI);
		return L_23;
	}
}
extern "C" uint16_t m8747 (t1607 * __this, uint16_t p0, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		uint16_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)96))))
		{
			goto IL_0007;
		}
	}
	{
		uint16_t L_1 = p0;
		return L_1;
	}

IL_0007:
	{
		uint16_t L_2 = p0;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		uint16_t L_3 = p0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)122))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_4 = (__this->f4);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_5 = p0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)105))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		uint16_t L_6 = p0;
		return (((uint16_t)((int32_t)((int32_t)L_6-(int32_t)((int32_t)32)))));
	}

IL_0024:
	{
		t894 * L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t894 * L_8 = (__this->f3);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8625_MI, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		uint16_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_11 = m5778(NULL, L_10, &m5778_MI);
		return L_11;
	}

IL_0042:
	{
		uint16_t L_12 = p0;
		V_0 = L_12;
		uint16_t L_13 = V_0;
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 0)
		{
			goto IL_0104;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 1)
		{
			goto IL_010a;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 2)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 3)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 4)
		{
			goto IL_006c;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 5)
		{
			goto IL_0110;
		}
		if (((int32_t)((int32_t)L_13-(int32_t)((int32_t)976))) == 6)
		{
			goto IL_0116;
		}
	}

IL_006c:
	{
		uint16_t L_14 = V_0;
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)453))) == 0)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)453))) == 1)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)453))) == 2)
		{
			goto IL_0088;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)((int32_t)453))) == 3)
		{
			goto IL_00e6;
		}
	}

IL_0088:
	{
		uint16_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1008))))
		{
			goto IL_011c;
		}
	}
	{
		uint16_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1009))))
		{
			goto IL_0122;
		}
	}
	{
		uint16_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)105))))
		{
			goto IL_00cd;
		}
	}
	{
		uint16_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)305))))
		{
			goto IL_00dd;
		}
	}
	{
		uint16_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)459))))
		{
			goto IL_00ec;
		}
	}
	{
		uint16_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)498))))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)912))))
		{
			goto IL_00f8;
		}
	}
	{
		uint16_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)944))))
		{
			goto IL_00fe;
		}
	}
	{
		goto IL_0128;
	}

IL_00cd:
	{
		bool L_23 = (__this->f4);
		if (!L_23)
		{
			goto IL_00db;
		}
	}
	{
		return ((int32_t)304);
	}

IL_00db:
	{
		goto IL_0128;
	}

IL_00dd:
	{
		return ((int32_t)73);
	}

IL_00e0:
	{
		return ((int32_t)452);
	}

IL_00e6:
	{
		return ((int32_t)455);
	}

IL_00ec:
	{
		return ((int32_t)458);
	}

IL_00f2:
	{
		return ((int32_t)497);
	}

IL_00f8:
	{
		return ((int32_t)938);
	}

IL_00fe:
	{
		return ((int32_t)939);
	}

IL_0104:
	{
		return ((int32_t)914);
	}

IL_010a:
	{
		return ((int32_t)920);
	}

IL_0110:
	{
		return ((int32_t)934);
	}

IL_0116:
	{
		return ((int32_t)928);
	}

IL_011c:
	{
		return ((int32_t)922);
	}

IL_0122:
	{
		return ((int32_t)929);
	}

IL_0128:
	{
		uint16_t L_24 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		uint16_t L_25 = m5778(NULL, L_24, &m5778_MI);
		return L_25;
	}
}
extern "C" t2* m8748 (t1607 * __this, t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	uint16_t* V_1 = {0};
	uint16_t* V_2 = {0};
	uint16_t* V_3 = {0};
	uint16_t* V_4 = {0};
	int32_t V_5 = 0;
	t2* V_6 = {0};
	t2* V_7 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1570, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_4;
	}

IL_001c:
	{
		t2* L_5 = p0;
		int32_t L_6 = m2699(L_5, &m2699_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7375(NULL, L_6, &m7375_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7817(NULL, &m7817_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7817(NULL, &m7817_MI);
		V_2 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_12))+(int32_t)L_13));
		uint16_t* L_14 = V_2;
		V_3 = (uint16_t*)L_14;
		uint16_t* L_15 = V_1;
		V_4 = (uint16_t*)L_15;
		V_5 = 0;
		goto IL_0069;
	}

IL_004c:
	{
		uint16_t* L_16 = V_3;
		uint16_t* L_17 = V_4;
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8746_MI, __this, (*((uint16_t*)L_17)));
		*((int16_t*)(L_16)) = (int16_t)L_18;
		uint16_t* L_19 = V_4;
		V_4 = (uint16_t*)((intptr_t)((intptr_t)L_19+(intptr_t)(((intptr_t)2))));
		uint16_t* L_20 = V_3;
		V_3 = (uint16_t*)((intptr_t)((intptr_t)L_20+(intptr_t)(((intptr_t)2))));
		int32_t L_21 = V_5;
		V_5 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_22 = V_5;
		t2* L_23 = p0;
		int32_t L_24 = m2699(L_23, &m2699_MI);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}
	{
		V_6 = (t2*)NULL;
		V_7 = (t2*)NULL;
		t2* L_25 = V_0;
		return L_25;
	}
}
extern MethodInfo m8749_MI;
extern "C" t2* m8749 (t1607 * __this, t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	uint16_t* V_1 = {0};
	uint16_t* V_2 = {0};
	uint16_t* V_3 = {0};
	uint16_t* V_4 = {0};
	int32_t V_5 = 0;
	t2* V_6 = {0};
	t2* V_7 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1570, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_4;
	}

IL_001c:
	{
		t2* L_5 = p0;
		int32_t L_6 = m2699(L_5, &m2699_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7375(NULL, L_6, &m7375_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7817(NULL, &m7817_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7817(NULL, &m7817_MI);
		V_2 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_12))+(int32_t)L_13));
		uint16_t* L_14 = V_2;
		V_3 = (uint16_t*)L_14;
		uint16_t* L_15 = V_1;
		V_4 = (uint16_t*)L_15;
		V_5 = 0;
		goto IL_0069;
	}

IL_004c:
	{
		uint16_t* L_16 = V_3;
		uint16_t* L_17 = V_4;
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8747_MI, __this, (*((uint16_t*)L_17)));
		*((int16_t*)(L_16)) = (int16_t)L_18;
		uint16_t* L_19 = V_4;
		V_4 = (uint16_t*)((intptr_t)((intptr_t)L_19+(intptr_t)(((intptr_t)2))));
		uint16_t* L_20 = V_3;
		V_3 = (uint16_t*)((intptr_t)((intptr_t)L_20+(intptr_t)(((intptr_t)2))));
		int32_t L_21 = V_5;
		V_5 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_22 = V_5;
		t2* L_23 = p0;
		int32_t L_24 = m2699(L_23, &m2699_MI);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}
	{
		V_6 = (t2*)NULL;
		V_7 = (t2*)NULL;
		t2* L_25 = V_0;
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1276_TI;
#include "t1276MD.h"



#include "t1702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1702_TI;
#include "t1702MD.h"

extern MethodInfo m7000_MI;


extern MethodInfo m8750_MI;
extern "C" void m8750 (t1702 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral1571, &m7818_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8751_MI;
extern "C" void m8751 (t1702 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8752_MI;
extern "C" void m8752 (t1702 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
#include "t1703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1703_TI;
#include "t1703MD.h"

#include "t291.h"
#include "t1704.h"
#include "t1540.h"
#include "t1709.h"
#include "t897.h"
#include "t186.h"
#include "t302.h"
extern TypeInfo t291_TI;
extern TypeInfo t1704_TI;
extern TypeInfo t1540_TI;
extern TypeInfo t1709_TI;
#include "t291MD.h"
#include "t1540MD.h"
#include "t1709MD.h"
#include "t1704MD.h"
extern MethodInfo m10835_MI;
extern MethodInfo m8754_MI;
extern MethodInfo m6979_MI;
extern MethodInfo m10826_MI;
extern MethodInfo m8756_MI;
extern MethodInfo m1081_MI;
extern MethodInfo m11743_MI;
extern MethodInfo m8882_MI;
extern MethodInfo m8777_MI;
extern MethodInfo m6969_MI;
extern MethodInfo m8817_MI;
extern MethodInfo m8760_MI;
extern MethodInfo m8761_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m11977_MI;
extern MethodInfo m8764_MI;
extern MethodInfo m8758_MI;
extern MethodInfo m8757_MI;
extern MethodInfo m8762_MI;
extern MethodInfo m11978_MI;
extern MethodInfo m10869_MI;
extern MethodInfo m11140_MI;


extern MethodInfo m8753_MI;
extern "C" void m8753 (t1703 * __this, t291 * p0, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10835(NULL, &m10835_MI);
		m8754(__this, L_0, L_1, &m8754_MI);
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8754 (t1703 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	static bool m8754_init;
	if (!m8754_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8754_init = true;
	}
	{
		m336(__this, &m336_MI);
		t291 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t722 * L_1 = p1;
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7818(NULL, (t2*) &_stringLiteral1572, &m7818_MI);
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, L_2, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t291 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6979_MI, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral1573, &m7818_MI);
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, L_6, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t291 * L_8 = p0;
		__this->f0 = L_8;
		t722 * L_9 = p1;
		__this->f1 = L_9;
		t722 * L_10 = p1;
		t1704 * L_11 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m10826_MI, L_10);
		__this->f3 = L_11;
		__this->f2 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)32)));
		return;
	}
}
extern MethodInfo m8755_MI;
extern "C" void m8755 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8756_MI, __this, 1);
		return;
	}
}
extern "C" void m8756 (t1703 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_1 = (__this->f0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_2 = (__this->f0);
		VirtActionInvoker0::Invoke(&m1081_MI, L_2);
	}

IL_0016:
	{
		__this->f5 = 1;
		__this->f2 = (t723*)NULL;
		__this->f1 = (t722 *)NULL;
		__this->f0 = (t291 *)NULL;
		__this->f4 = (t305*)NULL;
		return;
	}
}
extern "C" void m8757 (t1703 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1574, (t2*) &_stringLiteral1575, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t291 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1540 * L_3 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_3, (t2*) &_stringLiteral1576, &m8882_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		int32_t L_4 = p0;
		m8777(__this, L_4, &m8777_MI);
		V_0 = 0;
		goto IL_0059;
	}

IL_0036:
	{
		t291 * L_5 = (__this->f0);
		t723* L_6 = (__this->f2);
		int32_t L_7 = V_0;
		int32_t L_8 = p0;
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t723*, int32_t, int32_t >::Invoke(&m6969_MI, L_5, L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)));
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1709 * L_12 = (t1709 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1709_TI));
		m8817(L_12, &m8817_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0055:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)L_14));
	}

IL_0059:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = p0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" int32_t m8758 (t1703 * __this, MethodInfo* method)
{
	static bool m8758_init;
	if (!m8758_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8758_init = true;
	}
	int32_t V_0 = 0;
	{
		t305* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->f4 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)128)));
	}

IL_0018:
	{
		t305* L_1 = (__this->f4);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t305*, int32_t, int32_t >::Invoke(&m8760_MI, __this, L_1, 0, 1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		return (-1);
	}

IL_002c:
	{
		t305* L_4 = (__this->f4);
		int32_t L_5 = 0;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_5));
	}
}
extern MethodInfo m8759_MI;
extern "C" int32_t m8759 (t1703 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t291 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_2, (t2*) &_stringLiteral1574, (t2*) &_stringLiteral1575, &m11743_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1540 * L_3 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_3, (t2*) &_stringLiteral1576, &m8882_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t723* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1577, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0039:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_7, (t2*) &_stringLiteral412, &m5693_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0048:
	{
		int32_t L_8 = p2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_9, (t2*) &_stringLiteral1578, &m5693_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t723* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral1579, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t291 * L_14 = (__this->f0);
		t723* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = (int32_t)VirtFuncInvoker3< int32_t, t723*, int32_t, int32_t >::Invoke(&m6969_MI, L_14, L_15, L_16, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		return L_19;
	}
}
extern "C" int32_t m8760 (t1703 * __this, t305* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t291 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_2, (t2*) &_stringLiteral1574, (t2*) &_stringLiteral1575, &m11743_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1540 * L_3 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_3, (t2*) &_stringLiteral1576, &m8882_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t305* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1577, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0039:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_7, (t2*) &_stringLiteral412, &m5693_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0048:
	{
		int32_t L_8 = p2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_9, (t2*) &_stringLiteral1578, &m5693_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t305* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral1579, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t305* L_14 = p0;
		int32_t L_15 = p1;
		int32_t L_16 = p2;
		int32_t L_17 = m8761(__this, L_14, L_15, L_16, (&V_0), &m8761_MI);
		return L_17;
	}
}
extern "C" int32_t m8761 (t1703 * __this, t305* p0, int32_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t* L_0 = p3;
		*((int32_t*)(L_0)) = (int32_t)0;
		goto IL_005f;
	}

IL_0008:
	{
		V_1 = 0;
	}

IL_000a:
	{
		int32_t L_1 = V_1;
		m8777(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m8777_MI);
		t291 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6967_MI, L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0025:
	{
		t723* L_6 = (__this->f2);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)) = (uint8_t)(((uint8_t)L_9));
		int32_t* L_10 = p3;
		int32_t* L_11 = p3;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)1));
		t722 * L_12 = (__this->f1);
		t723* L_13 = (__this->f2);
		int32_t L_14 = V_1;
		t305* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)VirtFuncInvoker5< int32_t, t723*, int32_t, int32_t, t305*, int32_t >::Invoke(&m11977_MI, L_12, L_13, 0, L_14, L_15, ((int32_t)((int32_t)L_16+(int32_t)L_17)));
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_005b;
	}

IL_0059:
	{
		goto IL_000a;
	}

IL_005b:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = p2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_23 = V_0;
		return L_23;
	}
}
extern "C" int32_t m8762 (t1703 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_002e;
	}

IL_0008:
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8764_MI, __this);
		V_3 = L_0;
		int32_t L_1 = V_0;
		uint8_t L_2 = V_3;
		int32_t L_3 = V_1;
		V_0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)127)))<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31)))))));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)7));
		uint8_t L_5 = V_3;
		if (((int32_t)((int32_t)L_5&(int32_t)((int32_t)128))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0032;
	}

IL_002a:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0008;
		}
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) >= ((int32_t)5)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0038:
	{
		t883 * L_10 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_10, (t2*) &_stringLiteral1580, &m4288_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m8763_MI;
extern "C" bool m8763 (t1703 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8764_MI, __this);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" uint8_t m8764 (t1703 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t291 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		t1521 * L_2 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_2, (t2*) &_stringLiteral1574, (t2*) &_stringLiteral1575, &m11743_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1540 * L_3 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_3, (t2*) &_stringLiteral1576, &m8882_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t291 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6967_MI, L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = V_0;
		return (((uint8_t)L_7));
	}

IL_003e:
	{
		t1709 * L_8 = (t1709 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1709_TI));
		m8817(L_8, &m8817_MI);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern MethodInfo m8765_MI;
extern "C" uint16_t m8765 (t1703 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8758_MI, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		t1709 * L_2 = (t1709 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1709_TI));
		m8817(L_2, &m8817_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m8766_MI;
extern "C" t897  m8766 (t1703 * __this, MethodInfo* method)
{
	t897  V_0 = {0};
	uint8_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, ((int32_t)16));
		V_1 = (uint8_t*)(&V_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_0 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0072;
		}
	}
	{
		V_2 = 0;
		goto IL_006b;
	}

IL_0016:
	{
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) >= ((int32_t)4)))
		{
			goto IL_002a;
		}
	}
	{
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_2;
		t723* L_4 = (__this->f2);
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		*((int8_t*)(((intptr_t)((intptr_t)L_2+(int32_t)((int32_t)((int32_t)L_3+(int32_t)8)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6));
		goto IL_0067;
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) >= ((int32_t)8)))
		{
			goto IL_003e;
		}
	}
	{
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		t723* L_10 = (__this->f2);
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		*((int8_t*)(((intptr_t)((intptr_t)L_8+(int32_t)((int32_t)((int32_t)L_9+(int32_t)8)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		goto IL_0067;
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0053;
		}
	}
	{
		uint8_t* L_14 = V_1;
		int32_t L_15 = V_2;
		t723* L_16 = (__this->f2);
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		*((int8_t*)(((intptr_t)((intptr_t)L_14+(int32_t)((int32_t)((int32_t)L_15-(int32_t)4)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_18));
		goto IL_0067;
	}

IL_0053:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0067;
		}
	}
	{
		uint8_t* L_20 = V_1;
		int32_t L_21 = V_2;
		t723* L_22 = (__this->f2);
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		*((int8_t*)(((intptr_t)((intptr_t)L_20+(int32_t)((int32_t)((int32_t)L_21-(int32_t)((int32_t)12))))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
	}

IL_0067:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)16))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_00d3;
	}

IL_0072:
	{
		V_3 = 0;
		goto IL_00ce;
	}

IL_0076:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) >= ((int32_t)4)))
		{
			goto IL_008b;
		}
	}
	{
		uint8_t* L_28 = V_1;
		int32_t L_29 = V_3;
		t723* L_30 = (__this->f2);
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		*((int8_t*)(((intptr_t)((intptr_t)L_28+(int32_t)((int32_t)((int32_t)((int32_t)11)-(int32_t)L_29)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32));
		goto IL_00ca;
	}

IL_008b:
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) >= ((int32_t)8)))
		{
			goto IL_00a0;
		}
	}
	{
		uint8_t* L_34 = V_1;
		int32_t L_35 = V_3;
		t723* L_36 = (__this->f2);
		int32_t L_37 = V_3;
		int32_t L_38 = L_37;
		*((int8_t*)(((intptr_t)((intptr_t)L_34+(int32_t)((int32_t)((int32_t)((int32_t)19)-(int32_t)L_35)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_38));
		goto IL_00ca;
	}

IL_00a0:
	{
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)12))))
		{
			goto IL_00b6;
		}
	}
	{
		uint8_t* L_40 = V_1;
		int32_t L_41 = V_3;
		t723* L_42 = (__this->f2);
		int32_t L_43 = V_3;
		int32_t L_44 = L_43;
		*((int8_t*)(((intptr_t)((intptr_t)L_40+(int32_t)((int32_t)((int32_t)((int32_t)15)-(int32_t)L_41)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_42, L_44));
		goto IL_00ca;
	}

IL_00b6:
	{
		int32_t L_45 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00ca;
		}
	}
	{
		uint8_t* L_46 = V_1;
		int32_t L_47 = V_3;
		t723* L_48 = (__this->f2);
		int32_t L_49 = V_3;
		int32_t L_50 = L_49;
		*((int8_t*)(((intptr_t)((intptr_t)L_46+(int32_t)((int32_t)((int32_t)((int32_t)15)-(int32_t)L_47)))))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_48, L_50));
	}

IL_00ca:
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_00ce:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)16))))
		{
			goto IL_0076;
		}
	}

IL_00d3:
	{
		t897  L_53 = V_0;
		return L_53;
	}
}
extern MethodInfo m8767_MI;
extern "C" double m8767 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 8);
		t723* L_0 = (__this->f2);
		double L_1 = m8259(NULL, L_0, 0, &m8259_MI);
		return L_1;
	}
}
extern MethodInfo m8768_MI;
extern "C" int16_t m8768 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 2);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((int16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8769_MI;
extern "C" int32_t m8769 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 4);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t723* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t723* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8770_MI;
extern "C" int64_t m8770 (t1703 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 8);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t723* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t723* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t723* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t723* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t723* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t723* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern MethodInfo m8771_MI;
extern "C" int8_t m8771 (t1703 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8764_MI, __this);
		return (((int8_t)L_0));
	}
}
extern MethodInfo m8772_MI;
extern TypeInfo* t305_TI_var;
extern "C" t2* m8772 (t1703 * __this, MethodInfo* method)
{
	static bool m8772_init;
	if (!m8772_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8772_init = true;
	}
	int32_t V_0 = 0;
	t315 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = m8762(__this, &m8762_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t1540 * L_2 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_2, (t2*) &_stringLiteral1581, &m8882_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_4;
	}

IL_001f:
	{
		t305* L_5 = (__this->f4);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		__this->f4 = ((t305*)SZArrayNew(t305_TI_var, ((int32_t)128)));
	}

IL_0037:
	{
		V_1 = (t315 *)NULL;
	}

IL_0039:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)128))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = ((int32_t)128);
		goto IL_0049;
	}

IL_0048:
	{
		int32_t L_7 = V_0;
		G_B10_0 = L_7;
	}

IL_0049:
	{
		V_2 = G_B10_0;
		int32_t L_8 = V_2;
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, L_8);
		t1704 * L_9 = (__this->f3);
		t723* L_10 = (__this->f2);
		int32_t L_11 = V_2;
		t305* L_12 = (__this->f4);
		int32_t L_13 = (int32_t)VirtFuncInvoker5< int32_t, t723*, int32_t, int32_t, t305*, int32_t >::Invoke(&m11978_MI, L_9, L_10, 0, L_11, L_12, 0);
		V_3 = L_13;
		t315 * L_14 = V_1;
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0081;
		}
	}
	{
		t305* L_17 = (__this->f4);
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4353(L_19, L_17, 0, L_18, &m4333_MI);
		return L_19;
	}

IL_0081:
	{
		t315 * L_20 = V_1;
		if (L_20)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = V_0;
		t315 * L_22 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_22, L_21, &m4330_MI);
		V_1 = L_22;
	}

IL_008b:
	{
		t315 * L_23 = V_1;
		t305* L_24 = (__this->f4);
		int32_t L_25 = V_3;
		m10869(L_23, L_24, 0, L_25, &m10869_MI);
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		V_0 = ((int32_t)((int32_t)L_26-(int32_t)L_27));
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		t315 * L_29 = V_1;
		t2* L_30 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_29);
		return L_30;
	}
}
extern MethodInfo m8773_MI;
extern "C" float m8773 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 4);
		t723* L_0 = (__this->f2);
		float L_1 = m8258(NULL, L_0, 0, &m8258_MI);
		return L_1;
	}
}
extern MethodInfo m8774_MI;
extern "C" uint16_t m8774 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 2);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((uint16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8775_MI;
extern "C" uint32_t m8775 (t1703 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 4);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t723* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t723* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8776_MI;
extern "C" uint64_t m8776 (t1703 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8757_MI, __this, 8);
		t723* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t723* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t723* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t723* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t723* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t723* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t723* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t723* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8777 (t1703 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8777_init;
	if (!m8777_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8777_init = true;
	}
	t723* V_0 = {0};
	{
		t723* L_0 = (__this->f2);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) > ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = p0;
		V_0 = ((t723*)SZArrayNew(t723_TI_var, L_2));
		t723* L_3 = (__this->f2);
		t723* L_4 = V_0;
		t723* L_5 = (__this->f2);
		m11140(NULL, (t121 *)(t121 *)L_3, 0, (t121 *)(t121 *)L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))), &m11140_MI);
		t723* L_6 = V_0;
		__this->f2 = L_6;
	}

IL_0030:
	{
		return;
	}
}
#include "t1705.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1705_TI;
#include "t1705MD.h"

extern MethodInfo m8780_MI;
extern MethodInfo m6980_MI;
extern MethodInfo m8778_MI;
extern MethodInfo m8783_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m6944_MI;
extern MethodInfo m10824_MI;
extern MethodInfo m10822_MI;
extern MethodInfo m8802_MI;
extern MethodInfo m11979_MI;
extern MethodInfo m8786_MI;


extern "C" void m8778 (t1705 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t291_TI));
		t291 * L_0 = ((t291_SFs*)InitializedTypeInfo(&t291_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10835(NULL, &m10835_MI);
		m8780(__this, L_0, L_1, &m8780_MI);
		return;
	}
}
extern MethodInfo m8779_MI;
extern "C" void m8779 (t1705 * __this, t291 * p0, MethodInfo* method)
{
	{
		t291 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_1 = m10835(NULL, &m10835_MI);
		m8780(__this, L_0, L_1, &m8780_MI);
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8780 (t1705 * __this, t291 * p0, t722 * p1, MethodInfo* method)
{
	static bool m8780_init;
	if (!m8780_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8780_init = true;
	}
	{
		m336(__this, &m336_MI);
		t291 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1582, &m339_MI);
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
		t291 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6980_MI, L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_6 = m7818(NULL, (t2*) &_stringLiteral1584, &m7818_MI);
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, L_6, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		t291 * L_8 = p0;
		__this->f1 = L_8;
		t722 * L_9 = p1;
		__this->f2 = L_9;
		__this->f3 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)16)));
		return;
	}
}
extern MethodInfo m8781_MI;
extern "C" void m8781 (t9 * __this , MethodInfo* method)
{
	{
		t1705 * L_0 = (t1705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1705_TI));
		m8778(L_0, &m8778_MI);
		((t1705_SFs*)InitializedTypeInfo(&t1705_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m8782_MI;
extern "C" void m8782 (t1705 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8783_MI, __this, 1);
		return;
	}
}
extern "C" void m8783 (t1705 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t291 * L_2 = (__this->f1);
		VirtActionInvoker0::Invoke(&m1081_MI, L_2);
	}

IL_0016:
	{
		__this->f3 = (t723*)NULL;
		__this->f2 = (t722 *)NULL;
		__this->f4 = 1;
		return;
	}
}
extern MethodInfo m8784_MI;
extern "C" void m8784 (t1705 * __this, MethodInfo* method)
{
	{
		t291 * L_0 = (__this->f1);
		VirtActionInvoker0::Invoke(&m6998_MI, L_0);
		return;
	}
}
extern MethodInfo m8785_MI;
extern "C" void m8785 (t1705 * __this, bool p0, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	t723* G_B4_1 = {0};
	int32_t G_B3_0 = 0;
	t723* G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	t723* G_B5_2 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		bool L_3 = p0;
		G_B3_0 = 0;
		G_B3_1 = L_2;
		if (!L_3)
		{
			G_B4_0 = 0;
			G_B4_1 = L_2;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0026:
	{
		*((uint8_t*)(uint8_t*)SZArrayLdElema(G_B5_2, G_B5_1)) = (uint8_t)(((uint8_t)G_B5_0));
		t291 * L_4 = (__this->f1);
		t723* L_5 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern "C" void m8786 (t1705 * __this, uint8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t291 * L_2 = (__this->f1);
		uint8_t L_3 = p0;
		VirtActionInvoker1< uint8_t >::Invoke(&m6944_MI, L_2, L_3);
		return;
	}
}
extern MethodInfo m8787_MI;
extern "C" void m8787 (t1705 * __this, t723* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = p0;
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
		t291 * L_4 = (__this->f1);
		t723* L_5 = p0;
		t723* L_6 = p0;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		return;
	}
}
extern MethodInfo m8788_MI;
extern "C" void m8788 (t1705 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = p0;
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
		t291 * L_4 = (__this->f1);
		t723* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_4, L_5, L_6, L_7);
		return;
	}
}
extern MethodInfo m8789_MI;
extern TypeInfo* t305_TI_var;
extern "C" void m8789 (t1705 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8789_init;
	if (!m8789_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m8789_init = true;
	}
	t305* V_0 = {0};
	t723* V_1 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = ((t305*)SZArrayNew(t305_TI_var, 1));
		t305* L_2 = V_0;
		uint16_t L_3 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t722 * L_4 = (__this->f2);
		t305* L_5 = V_0;
		t723* L_6 = (t723*)VirtFuncInvoker3< t723*, t305*, int32_t, int32_t >::Invoke(&m10824_MI, L_4, L_5, 0, 1);
		V_1 = L_6;
		t291 * L_7 = (__this->f1);
		t723* L_8 = V_1;
		t723* L_9 = V_1;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return;
	}
}
extern MethodInfo m8790_MI;
extern "C" void m8790 (t1705 * __this, t305* p0, MethodInfo* method)
{
	t723* V_0 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
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
		m339(L_3, (t2*) &_stringLiteral1587, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		t722 * L_4 = (__this->f2);
		t305* L_5 = p0;
		t305* L_6 = p0;
		t723* L_7 = (t723*)VirtFuncInvoker3< t723*, t305*, int32_t, int32_t >::Invoke(&m10824_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		V_0 = L_7;
		t291 * L_8 = (__this->f1);
		t723* L_9 = V_0;
		t723* L_10 = V_0;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_8, L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))));
		return;
	}
}
extern MethodInfo m8791_MI;
extern "C" void m8791 (t1705 * __this, t897  p0, MethodInfo* method)
{
	uint8_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = (uint8_t*)(&p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1334_TI));
		bool L_2 = ((t1334_SFs*)InitializedTypeInfo(&t1334_TI)->static_fields)->f1;
		if (!L_2)
		{
			goto IL_007d;
		}
	}
	{
		V_1 = 0;
		goto IL_0076;
	}

IL_0026:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)4)))
		{
			goto IL_003b;
		}
	}
	{
		t723* L_4 = (__this->f3);
		int32_t L_5 = V_1;
		uint8_t* L_6 = V_0;
		int32_t L_7 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, ((int32_t)((int32_t)L_5+(int32_t)((int32_t)12))))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)L_7))));
		goto IL_0072;
	}

IL_003b:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)8)))
		{
			goto IL_004f;
		}
	}
	{
		t723* L_9 = (__this->f3);
		int32_t L_10 = V_1;
		uint8_t* L_11 = V_0;
		int32_t L_12 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)4)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_11+(int32_t)L_12))));
		goto IL_0072;
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0064;
		}
	}
	{
		t723* L_14 = (__this->f3);
		int32_t L_15 = V_1;
		uint8_t* L_16 = V_0;
		int32_t L_17 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15-(int32_t)8)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)L_17))));
		goto IL_0072;
	}

IL_0064:
	{
		t723* L_18 = (__this->f3);
		int32_t L_19 = V_1;
		uint8_t* L_20 = V_0;
		int32_t L_21 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19-(int32_t)8)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_20+(int32_t)L_21))));
	}

IL_0072:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)16))))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_00d9;
	}

IL_007d:
	{
		V_2 = 0;
		goto IL_00d4;
	}

IL_0081:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) >= ((int32_t)4)))
		{
			goto IL_0096;
		}
	}
	{
		t723* L_25 = (__this->f3);
		int32_t L_26 = V_2;
		uint8_t* L_27 = V_0;
		int32_t L_28 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, ((int32_t)((int32_t)((int32_t)15)-(int32_t)L_26)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_27+(int32_t)L_28))));
		goto IL_00d0;
	}

IL_0096:
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)8)))
		{
			goto IL_00ab;
		}
	}
	{
		t723* L_30 = (__this->f3);
		int32_t L_31 = V_2;
		uint8_t* L_32 = V_0;
		int32_t L_33 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, ((int32_t)((int32_t)((int32_t)15)-(int32_t)L_31)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_32+(int32_t)L_33))));
		goto IL_00d0;
	}

IL_00ab:
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) >= ((int32_t)((int32_t)12))))
		{
			goto IL_00c1;
		}
	}
	{
		t723* L_35 = (__this->f3);
		int32_t L_36 = V_2;
		uint8_t* L_37 = V_0;
		int32_t L_38 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)((int32_t)((int32_t)11)-(int32_t)L_36)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_37+(int32_t)L_38))));
		goto IL_00d0;
	}

IL_00c1:
	{
		t723* L_39 = (__this->f3);
		int32_t L_40 = V_2;
		uint8_t* L_41 = V_0;
		int32_t L_42 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)((int32_t)((int32_t)19)-(int32_t)L_40)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_41+(int32_t)L_42))));
	}

IL_00d0:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_00d4:
	{
		int32_t L_44 = V_2;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)16))))
		{
			goto IL_0081;
		}
	}

IL_00d9:
	{
		t291 * L_45 = (__this->f1);
		t723* L_46 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_45, L_46, 0, ((int32_t)16));
		return;
	}
}
extern MethodInfo m8792_MI;
extern "C" void m8792 (t1705 * __this, double p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t291 * L_2 = (__this->f1);
		double L_3 = p0;
		t723* L_4 = m8252(NULL, L_3, &m8252_MI);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_2, L_4, 0, 8);
		return;
	}
}
extern MethodInfo m8793_MI;
extern "C" void m8793 (t1705 * __this, int16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		int16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t723* L_4 = (__this->f3);
		int16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t291 * L_6 = (__this->f1);
		t723* L_7 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8794_MI;
extern "C" void m8794 (t1705 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		int32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t723* L_4 = (__this->f3);
		int32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t723* L_6 = (__this->f3);
		int32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16)))));
		t723* L_8 = (__this->f3);
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_9>>(int32_t)((int32_t)24)))));
		t291 * L_10 = (__this->f1);
		t723* L_11 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8795_MI;
extern "C" void m8795 (t1705 * __this, int64_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		t723* L_2 = (__this->f3);
		int32_t L_3 = V_0;
		int64_t L_4 = p0;
		int32_t L_5 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)L_4>>(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)63)))))));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)8));
	}

IL_0035:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_001e;
		}
	}
	{
		t291 * L_9 = (__this->f1);
		t723* L_10 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern MethodInfo m8796_MI;
extern "C" void m8796 (t1705 * __this, int8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		int8_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t291 * L_4 = (__this->f1);
		t723* L_5 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern MethodInfo m8797_MI;
extern "C" void m8797 (t1705 * __this, float p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t291 * L_2 = (__this->f1);
		float L_3 = p0;
		t723* L_4 = m8251(NULL, L_3, &m8251_MI);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_2, L_4, 0, 4);
		return;
	}
}
extern MethodInfo m8798_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m8798 (t1705 * __this, t2* p0, MethodInfo* method)
{
	static bool m8798_init;
	if (!m8798_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8798_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B8_0 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t722 * L_2 = (__this->f2);
		t2* L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m10822_MI, L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		m8802(__this, L_5, &m8802_MI);
		t723* L_6 = (__this->f5);
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		__this->f5 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)512)));
		t722 * L_7 = (__this->f2);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m11979_MI, L_7, 1);
		__this->f6 = ((int32_t)((int32_t)((int32_t)512)/(int32_t)L_8));
	}

IL_005c:
	{
		V_1 = 0;
		t2* L_9 = p0;
		int32_t L_10 = m2699(L_9, &m2699_MI);
		V_2 = L_10;
		goto IL_00ad;
	}

IL_0067:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = (__this->f6);
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_13 = (__this->f6);
		G_B8_0 = L_13;
		goto IL_0079;
	}

IL_0078:
	{
		int32_t L_14 = V_2;
		G_B8_0 = L_14;
	}

IL_0079:
	{
		V_3 = G_B8_0;
		t722 * L_15 = (__this->f2);
		t2* L_16 = p0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		t723* L_19 = (__this->f5);
		int32_t L_20 = (int32_t)VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t723*, int32_t >::Invoke(&m6891_MI, L_15, L_16, L_17, L_18, L_19, 0);
		V_4 = L_20;
		t291 * L_21 = (__this->f1);
		t723* L_22 = (__this->f5);
		int32_t L_23 = V_4;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_21, L_22, 0, L_23);
		int32_t L_24 = V_1;
		int32_t L_25 = V_3;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)L_25));
		int32_t L_26 = V_2;
		int32_t L_27 = V_3;
		V_2 = ((int32_t)((int32_t)L_26-(int32_t)L_27));
	}

IL_00ad:
	{
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8799_MI;
extern "C" void m8799 (t1705 * __this, uint16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		uint16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t723* L_4 = (__this->f3);
		uint16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t291 * L_6 = (__this->f1);
		t723* L_7 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8800_MI;
extern "C" void m8800 (t1705 * __this, uint32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t723* L_2 = (__this->f3);
		uint32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t723* L_4 = (__this->f3);
		uint32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_5>>8))));
		t723* L_6 = (__this->f3);
		uint32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		t723* L_8 = (__this->f3);
		uint32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		t291 * L_10 = (__this->f1);
		t723* L_11 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8801_MI;
extern "C" void m8801 (t1705 * __this, uint64_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m11743(L_1, (t2*) &_stringLiteral1585, (t2*) &_stringLiteral1586, &m11743_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		t723* L_2 = (__this->f3);
		int32_t L_3 = V_0;
		uint64_t L_4 = p0;
		int32_t L_5 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3)) = (uint8_t)(((uint8_t)((int64_t)((uint64_t)L_4>>((int32_t)((int32_t)L_5&(int32_t)((int32_t)63)))))));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)8));
	}

IL_0035:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_001e;
		}
	}
	{
		t291 * L_9 = (__this->f1);
		t723* L_10 = (__this->f3);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern "C" void m8802 (t1705 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;

IL_0000:
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)7))&(int32_t)((int32_t)33554431)));
		int32_t L_1 = p0;
		V_1 = (((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)127)))));
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		uint8_t L_3 = V_1;
		V_1 = (((uint8_t)((int32_t)((int32_t)L_3|(int32_t)((int32_t)128)))));
	}

IL_001c:
	{
		uint8_t L_4 = V_1;
		VirtActionInvoker1< uint8_t >::Invoke(&m8786_MI, __this, L_4);
		int32_t L_5 = V_0;
		p0 = L_5;
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_0000;
		}
	}
	{
		return;
	}
}
#include "t1529.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1529_TI;
#include "t1529MD.h"

#include "t1528.h"
#include "t293.h"
#include "t1720.h"
#include "t1706.h"
#include "t1722.h"
#include "t1708.h"
extern TypeInfo t293_TI;
extern TypeInfo t1528_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t1722_TI;
extern TypeInfo t1708_TI;
#include "t293MD.h"
#include "t295MD.h"
#include "t1528MD.h"
#include "t1719MD.h"
#include "t1722MD.h"
#include "t1708MD.h"
extern MethodInfo m5952_MI;
extern MethodInfo m4246_MI;
extern MethodInfo m1077_MI;
extern MethodInfo m8803_MI;
extern MethodInfo m8807_MI;
extern MethodInfo m8811_MI;
extern MethodInfo m8810_MI;
extern MethodInfo m8812_MI;
extern MethodInfo m8897_MI;
extern MethodInfo m8896_MI;
extern MethodInfo m8904_MI;
extern MethodInfo m8899_MI;
extern MethodInfo m8895_MI;
extern MethodInfo m8805_MI;
extern MethodInfo m1076_MI;
extern MethodInfo m8922_MI;
extern MethodInfo m8903_MI;
extern MethodInfo m8815_MI;
extern MethodInfo m8898_MI;


extern MethodInfo m6921_MI;
extern "C" t1528 * m6921 (t9 * __this , t2* p0, MethodInfo* method)
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
		m2885(L_4, (t2*) &_stringLiteral1589, &m2885_MI);
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
		m2885(L_8, (t2*) &_stringLiteral1590, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		t2* L_9 = p0;
		t2* L_10 = m4246(L_9, &m4246_MI);
		int32_t L_11 = m2699(L_10, &m2699_MI);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral1591, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0052:
	{
		t2* L_13 = p0;
		bool L_14 = m1077(NULL, L_13, &m1077_MI);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, (t2*) &_stringLiteral1592, L_15, (t2*) &_stringLiteral1593, &m399_MI);
		t1540 * L_17 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_17, L_16, &m8882_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0070:
	{
		t2* L_18 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_18, (t2*) &_stringLiteral343, &m331_MI);
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		t556 * L_20 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_20, (t2*) &_stringLiteral1594, &m2885_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0088:
	{
		t2* L_21 = p0;
		t1528 * L_22 = m8803(NULL, L_21, &m8803_MI);
		return L_22;
	}
}
extern "C" t1528 * m8803 (t9 * __this , t2* p0, MethodInfo* method)
{
	t1528 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2* L_0 = p0;
		t1528 * L_1 = (t1528 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1528_TI));
		m8807(L_1, L_0, 1, &m8807_MI);
		V_0 = L_1;
		t1528 * L_2 = V_0;
		t1528 * L_3 = m8811(L_2, &m8811_MI);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t1528 * L_4 = V_0;
		t1528 * L_5 = m8811(L_4, &m8811_MI);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8810_MI, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		t1528 * L_7 = V_0;
		t1528 * L_8 = m8811(L_7, &m8811_MI);
		m8812(L_8, &m8812_MI);
	}

IL_0028:
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_10 = m8897(NULL, L_9, (&V_1), &m8897_MI);
		if (L_10)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)183))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)80))))
		{
			goto IL_0047;
		}
	}
	{
		t2* L_13 = p0;
		int32_t L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_15 = m8896(NULL, L_13, L_14, &m8896_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0047:
	{
		t1528 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m6920_MI;
extern "C" bool m6920 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	bool V_1 = false;
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_2 = m8904(NULL, L_1, (&V_0), &m8904_MI);
		V_1 = L_2;
		bool L_3 = V_1;
		return L_3;
	}
}
extern MethodInfo m8804_MI;
extern "C" t2* m8804 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t2* L_0 = m8899(NULL, (&V_0), &m8899_MI);
		V_1 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_3 = m8895(NULL, L_2, &m8895_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m6922_MI;
extern "C" t221* m6922 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		t221* L_2 = m8805(NULL, L_0, L_1, ((int32_t)16), 0, &m8805_MI);
		return L_2;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8805 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	static bool m8805_init;
	if (!m8805_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8805_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	t2* V_4 = {0};
	t221* V_5 = {0};
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t2* L_1 = p1;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11115(L_2, &m11115_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		t2* L_3 = p1;
		int32_t L_4 = m2699(L_3, &m2699_MI);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		return ((t221*)SZArrayNew(t221_TI_var, 0));
	}

IL_001b:
	{
		t2* L_5 = p0;
		t2* L_6 = m4246(L_5, &m4246_MI);
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral1595, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0033:
	{
		t2* L_9 = p0;
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_11 = m1076(NULL, L_9, L_10, &m1076_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t2* L_13 = m8922(NULL, L_12, &m8922_MI);
		V_1 = L_13;
		t2* L_14 = V_1;
		t305* L_15 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_16 = m5952(L_14, L_15, &m5952_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral1596, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005b:
	{
		t2* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_19 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_20 = m5952(L_18, L_19, &m5952_MI);
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_0097;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t305* L_22 = ((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f1;
		int32_t L_23 = m5952(L_21, L_22, &m5952_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0087;
		}
	}
	{
		t556 * L_24 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_24, (t2*) &_stringLiteral1596, (t2*) &_stringLiteral1588, &m5691_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0087:
	{
		t556 * L_25 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_25, (t2*) &_stringLiteral1597, (t2*) &_stringLiteral684, &m5691_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0097:
	{
		t2* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_27 = m8904(NULL, L_26, (&V_2), &m8904_MI);
		if (L_27)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_28 = V_2;
		if (L_28)
		{
			goto IL_00bc;
		}
	}
	{
		t2* L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_30 = m8903(NULL, L_29, (&V_3), &m8903_MI);
		if (!L_30)
		{
			goto IL_00bc;
		}
	}
	{
		t221* L_31 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_32 = V_1;
		ArrayElementTypeCheck (L_31, L_32);
		*((t2**)(t2**)SZArrayLdElema(L_31, 0)) = (t2*)L_32;
		return L_31;
	}

IL_00bc:
	{
		int32_t L_33 = V_2;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00c8;
		}
	}
	{
		t2* L_34 = V_1;
		int32_t L_35 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_36 = m8896(NULL, L_34, L_35, &m8896_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00c8:
	{
		t2* L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t305* L_38 = ((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0;
		int32_t L_39 = m5952(L_37, L_38, &m5952_MI);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m399(NULL, (t2*) &_stringLiteral1598, L_40, (t2*) &_stringLiteral1599, &m399_MI);
		t1708 * L_42 = (t1708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1708_TI));
		m8815(L_42, L_41, &m8815_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_00ec:
	{
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1722_TI));
		t305* L_44 = ((t1722_SFs*)InitializedTypeInfo(&t1722_TI)->static_fields)->f0;
		int32_t L_45 = m5952(L_43, L_44, &m5952_MI);
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_010a;
		}
	}
	{
		t556 * L_46 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_46, (t2*) &_stringLiteral1600, (t2*) &_stringLiteral1601, &m5691_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_010a:
	{
		t556 * L_47 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_47, (t2*) &_stringLiteral1602, (t2*) &_stringLiteral1588, &m5691_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_011a:
	{
		t2* L_48 = V_1;
		t2* L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_50 = m1076(NULL, L_48, L_49, &m1076_MI);
		V_4 = L_50;
		t2* L_51 = p0;
		t2* L_52 = V_4;
		int32_t L_53 = p3;
		int32_t L_54 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t221* L_55 = m8898(NULL, L_51, L_52, L_53, L_54, (&V_2), &m8898_MI);
		V_5 = L_55;
		int32_t L_56 = V_2;
		if (!L_56)
		{
			goto IL_013c;
		}
	}
	{
		t2* L_57 = V_1;
		int32_t L_58 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_59 = m8896(NULL, L_57, L_58, &m8896_MI);
		il2cpp_codegen_raise_exception(L_59);
	}

IL_013c:
	{
		t221* L_60 = V_5;
		return L_60;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1707.h"
#include "t1717.h"
#include "t1719.h"
extern TypeInfo t1707_TI;
extern TypeInfo t1717_TI;
#include "t1707MD.h"
extern MethodInfo m8878_MI;
extern MethodInfo m8806_MI;
extern MethodInfo m8874_MI;
extern MethodInfo m8880_MI;
extern MethodInfo m8925_MI;
extern MethodInfo m8924_MI;
extern MethodInfo m8809_MI;
extern MethodInfo m8875_MI;
extern MethodInfo m5954_MI;
extern MethodInfo m11502_MI;
extern MethodInfo m2765_MI;


extern "C" void m8806 (t1528 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8807(__this, L_0, 0, &m8807_MI);
		return;
	}
}
extern "C" void m8807 (t1528 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		m8874(__this, &m8874_MI);
		t2* L_0 = p0;
		m8880(__this, L_0, &m8880_MI);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_2 = m8925(NULL, L_1, &m8925_MI);
		__this->f1 = L_2;
		bool L_3 = p1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_5 = m8924(NULL, L_4, &m8924_MI);
		__this->f2 = L_5;
		goto IL_0031;
	}

IL_002a:
	{
		t2* L_6 = p0;
		__this->f2 = L_6;
	}

IL_0031:
	{
		m8809(__this, &m8809_MI);
		return;
	}
}
extern MethodInfo m8808_MI;
extern "C" void m8808 (t1528 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m8875(__this, L_0, L_1, &m8875_MI);
		m8809(__this, &m8809_MI);
		return;
	}
}
extern "C" void m8809 (t1528 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = m2699(L_0, &m2699_MI);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		t2* L_3 = (__this->f1);
		int32_t L_4 = V_0;
		uint16_t L_5 = m2714(L_3, L_4, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_6 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0029:
	{
		t2* L_8 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_9 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		int32_t L_10 = V_0;
		int32_t L_11 = m5954(L_8, L_9, L_10, &m5954_MI);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_13 = V_1;
		if (L_13)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_14 = V_0;
		if (L_14)
		{
			goto IL_005d;
		}
	}

IL_0045:
	{
		t2* L_15 = (__this->f1);
		__this->f5 = L_15;
		__this->f6 = (t2*)NULL;
		goto IL_00f1;
	}

IL_005d:
	{
		t2* L_16 = (__this->f1);
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		t2* L_20 = m2715(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2715_MI);
		__this->f5 = L_20;
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_008b;
		}
	}
	{
		bool L_22 = m11502(NULL, &m11502_MI);
		if (L_22)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_23 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f4;
		__this->f6 = L_23;
		goto IL_009e;
	}

IL_008b:
	{
		t2* L_24 = (__this->f1);
		int32_t L_25 = V_1;
		t2* L_26 = m2715(L_24, 0, L_25, &m2715_MI);
		__this->f6 = L_26;
	}

IL_009e:
	{
		bool L_27 = m11502(NULL, &m11502_MI);
		if (!L_27)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_28 = (__this->f6);
		int32_t L_29 = m2699(L_28, &m2699_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_30 = (__this->f6);
		uint16_t L_31 = m2714(L_30, 1, &m2714_MI);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_32 = (__this->f6);
		uint16_t L_33 = m2714(L_32, 0, &m2714_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t296_TI));
		bool L_34 = m2765(NULL, L_33, &m2765_MI);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_35 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_36 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t296_TI), &L_37);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_39 = m511(NULL, L_35, L_38, &m511_MI);
		__this->f6 = L_39;
	}

IL_00f1:
	{
		return;
	}
}
extern "C" bool m8810 (t1528 * __this, MethodInfo* method)
{
	{
		m8878(__this, 0, &m8878_MI);
		t1717 * L_0 = &(__this->f3);
		int32_t L_1 = (L_0->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_2 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		t1717 * L_3 = &(__this->f3);
		int32_t L_4 = (L_3->f1);
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)16))))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		return 1;
	}
}
extern "C" t1528 * m8811 (t1528 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t2* L_1 = (__this->f6);
		int32_t L_2 = m2699(L_1, &m2699_MI);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (t1528 *)NULL;
	}

IL_0017:
	{
		t2* L_3 = (__this->f6);
		t1528 * L_4 = (t1528 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1528_TI));
		m8806(L_4, L_3, &m8806_MI);
		return L_4;
	}
}
extern "C" void m8812 (t1528 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		m6921(NULL, L_0, &m6921_MI);
		return;
	}
}
extern MethodInfo m8813_MI;
extern "C" t2* m8813 (t1528 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8883_MI;


extern MethodInfo m8814_MI;
extern "C" void m8814 (t1708 * __this, MethodInfo* method)
{
	{
		m8882(__this, (t2*) &_stringLiteral1603, &m8882_MI);
		return;
	}
}
extern "C" void m8815 (t1708 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8882(__this, L_0, &m8882_MI);
		return;
	}
}
extern MethodInfo m8816_MI;
extern "C" void m8816 (t1708 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m8883(__this, L_0, L_1, &m8883_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m8817 (t1709 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral1604, &m7818_MI);
		m8882(__this, L_0, &m8882_MI);
		return;
	}
}
extern MethodInfo m8818_MI;
extern "C" void m8818 (t1709 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m8883(__this, L_0, L_1, &m8883_MI);
		return;
	}
}
#include "t295.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t295_TI;

#include "t2139.h"
#include "t289.h"
#include "t290.h"
#include "t1178.h"
#include "t1713.h"
#include "t1710.h"
extern TypeInfo t2139_TI;
extern TypeInfo t289_TI;
extern TypeInfo t1710_TI;
#include "t2139MD.h"
#include "t289MD.h"
#include "t1710MD.h"
extern MethodInfo m11845_MI;
extern MethodInfo m8900_MI;
extern MethodInfo m8838_MI;
extern MethodInfo m8974_MI;


extern MethodInfo m8819_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8819 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8819_init;
	if (!m8819_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8819_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = {0};
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
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_6 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_7 = m5952(L_5, L_6, &m5952_MI);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_8, (t2*) &_stringLiteral1588, &m2885_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t2* L_9 = p0;
		bool L_10 = m6920(NULL, L_9, &m6920_MI);
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		t158* L_11 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_12 = p0;
		ArrayElementTypeCheck (L_11, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, 0)) = (t9 *)L_12;
		t2* L_13 = m7819(NULL, (t2*) &_stringLiteral1605, L_11, &m7819_MI);
		t2139 * L_14 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11845(L_14, L_13, &m11845_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0056:
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_16 = m8922(NULL, L_15, &m8922_MI);
		V_0 = L_16;
		t2* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_19 = m2713(NULL, L_17, L_18, &m2713_MI);
		if (!L_19)
		{
			goto IL_008c;
		}
	}
	{
		t2* L_20 = V_0;
		bool L_21 = m6920(NULL, L_20, &m6920_MI);
		if (L_21)
		{
			goto IL_008c;
		}
	}
	{
		t158* L_22 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_23 = p0;
		ArrayElementTypeCheck (L_22, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(L_22, 0)) = (t9 *)L_23;
		t2* L_24 = m7819(NULL, (t2*) &_stringLiteral1606, L_22, &m7819_MI);
		t1708 * L_25 = (t1708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1708_TI));
		m8815(L_25, L_24, &m8815_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_008c:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_27 = m8900(NULL, L_26, (&V_1), &m8900_MI);
		if (L_27)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)2)))
		{
			goto IL_00a2;
		}
	}
	{
		t2* L_29 = p0;
		int32_t L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_31 = m8896(NULL, L_29, L_30, &m8896_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a2:
	{
		return;
	}
}
extern "C" bool m1077 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_1 = p0;
		t2* L_2 = m4246(L_1, &m4246_MI);
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_5 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_6 = m5952(L_4, L_5, &m5952_MI);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return 0;
	}

IL_0020:
	{
		t2* L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		bool L_8 = m8903(NULL, L_7, (&V_0), &m8903_MI);
		return L_8;
	}
}
extern MethodInfo m1079_MI;
extern "C" t289 * m1079 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	t2* G_B2_1 = {0};
	int32_t G_B1_0 = {0};
	t2* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	t2* G_B3_2 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p1;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)6))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = 3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000a:
	{
		t289 * L_3 = (t289 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t289_TI));
		m8838(L_3, G_B3_2, G_B3_1, G_B3_0, 0, &m8838_MI);
		return L_3;
	}
}
extern MethodInfo m6917_MI;
extern "C" t289 * m6917 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t289 * L_1 = (t289 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t289_TI));
		m8838(L_1, L_0, 3, 1, 1, &m8838_MI);
		return L_1;
	}
}
extern MethodInfo m8820_MI;
extern "C" t1710 * m8820 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = (t1710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1710_TI));
		m8974(L_1, L_0, &m8974_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1178_TI;
#include "t1178MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1706_TI;
#include "t1706MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t290_TI;
#include "t290MD.h"



#include "t1711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1711_TI;
#include "t1711MD.h"

extern TypeInfo t1093_TI;
extern TypeInfo t1094_TI;
extern MethodInfo m6946_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m5712_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m4418_MI;
extern MethodInfo m2487_MI;
extern MethodInfo m8825_MI;
extern MethodInfo m4219_MI;
extern MethodInfo m4417_MI;


extern MethodInfo m8821_MI;
extern "C" void m8821 (t1711 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral1608, &m7818_MI);
		m8882(__this, L_0, &m8882_MI);
		m4433(__this, ((int32_t)-2146232799), &m4433_MI);
		return;
	}
}
extern MethodInfo m8822_MI;
extern "C" void m8822 (t1711 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8882(__this, L_0, &m8882_MI);
		m4433(__this, ((int32_t)-2146232799), &m4433_MI);
		return;
	}
}
extern MethodInfo m8823_MI;
extern "C" void m8823 (t1711 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8882(__this, L_0, &m8882_MI);
		m4433(__this, ((int32_t)-2146232799), &m4433_MI);
		t2* L_1 = p1;
		__this->f11 = L_1;
		return;
	}
}
extern MethodInfo m8824_MI;
extern "C" void m8824 (t1711 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m8883(__this, L_0, L_1, &m8883_MI);
		t1093 * L_2 = p0;
		t2* L_3 = m5712(L_2, (t2*) &_stringLiteral1609, &m5712_MI);
		__this->f11 = L_3;
		t1093 * L_4 = p0;
		t2* L_5 = m5712(L_4, (t2*) &_stringLiteral1610, &m5712_MI);
		__this->f12 = L_5;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t2* m8825 (t1711 * __this, MethodInfo* method)
{
	static bool m8825_init;
	if (!m8825_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8825_init = true;
	}
	t2* V_0 = {0};
	{
		t2* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_1 = (__this->f11);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_2 = m6941(NULL, &m6941_MI);
		t158* L_3 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_4 = (__this->f11);
		ArrayElementTypeCheck (L_3, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_3, 0)) = (t9 *)L_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m6946(NULL, L_2, (t2*) &_stringLiteral1607, L_3, &m6946_MI);
		V_0 = L_5;
		t2* L_6 = V_0;
		return L_6;
	}

IL_0031:
	{
		t2* L_7 = (__this->f2);
		return L_7;
	}
}
extern MethodInfo m8826_MI;
extern "C" void m8826 (t1711 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m4473(__this, L_0, L_1, &m4473_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5715(L_2, (t2*) &_stringLiteral1609, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5715(L_4, (t2*) &_stringLiteral1610, L_5, &m5715_MI);
		return;
	}
}
extern MethodInfo m8827_MI;
extern "C" t2* m8827 (t1711 * __this, MethodInfo* method)
{
	t315 * V_0 = {0};
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4418_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_0);
		t315 * L_2 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m2487(L_2, L_1, &m2487_MI);
		V_0 = L_2;
		t315 * L_3 = V_0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8825_MI, __this);
		m5722(L_3, (t2*) &_stringLiteral1611, L_4, &m5722_MI);
		t2* L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		t2* L_6 = (__this->f11);
		int32_t L_7 = m2699(L_6, &m2699_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t315 * L_8 = V_0;
		t2* L_9 = m5775(NULL, &m5775_MI);
		m1154(L_8, L_9, &m1154_MI);
		t315 * L_10 = V_0;
		t2* L_11 = (__this->f11);
		m5722(L_10, (t2*) &_stringLiteral1612, L_11, &m5722_MI);
	}

IL_0057:
	{
		t138 * L_12 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4219_MI, __this);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		t315 * L_13 = V_0;
		t138 * L_14 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4219_MI, __this);
		m5722(L_13, (t2*) &_stringLiteral1613, L_14, &m5722_MI);
	}

IL_0071:
	{
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4417_MI, __this);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		t315 * L_16 = V_0;
		t2* L_17 = m5775(NULL, &m5775_MI);
		m1154(L_16, L_17, &m1154_MI);
		t315 * L_18 = V_0;
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4417_MI, __this);
		m1154(L_18, L_19, &m1154_MI);
	}

IL_0092:
	{
		t315 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_20);
		return L_21;
	}
}
#include "t1712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1712_TI;
#include "t1712MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1713_TI;
#include "t1713MD.h"



#include "t1714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1714_TI;
#include "t1714MD.h"



extern MethodInfo m8828_MI;
extern "C" void m8828 (t1714 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8829_MI;
extern "C" int32_t m8829 (t1714 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8829((t1714 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 *, t9 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_t1714(Il2CppObject* delegate, t723* p0, int32_t p1, int32_t p2)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(uint8_t*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	uint8_t* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)p0);

	// Marshaling of parameter 'p1' to native representation

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(_p0_marshaled, p1, p2);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

	return _return_value;
}
extern MethodInfo m8830_MI;
extern "C" t9 * m8830 (t1714 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8831_MI;
extern "C" int32_t m8831 (t1714 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1715_TI;
#include "t1715MD.h"



extern MethodInfo m8832_MI;
extern "C" void m8832 (t1715 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8833_MI;
extern "C" void m8833 (t1715 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8833((t1715 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1715(Il2CppObject* delegate, t723* p0, int32_t p1, int32_t p2)
{
	typedef void (STDCALL *native_function_ptr_type)(uint8_t*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	uint8_t* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)p0);

	// Marshaling of parameter 'p1' to native representation

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled, p1, p2);

	// Marshaling cleanup of parameter 'p0' native representation

	// Marshaling cleanup of parameter 'p1' native representation

	// Marshaling cleanup of parameter 'p2' native representation

}
extern MethodInfo m8834_MI;
extern "C" t9 * m8834 (t1715 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8835_MI;
extern "C" void m8835 (t1715 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

#include "t1490.h"
#include "t1718.h"
#include "t1874.h"
#include "t1716.h"
#include "t881.h"
extern TypeInfo t292_TI;
extern TypeInfo t1490_TI;
extern TypeInfo t462_TI;
extern TypeInfo t463_TI;
extern TypeInfo t1874_TI;
extern TypeInfo t1716_TI;
extern TypeInfo t881_TI;
#include "t58MD.h"
#include "t1874MD.h"
#include "t1716MD.h"
#include "t881MD.h"
extern MethodInfo m4436_MI;
extern MethodInfo m8843_MI;
extern MethodInfo m8863_MI;
extern MethodInfo m8911_MI;
extern MethodInfo m8867_MI;
extern MethodInfo m8855_MI;
extern MethodInfo m6982_MI;
extern MethodInfo m8902_MI;
extern MethodInfo m8866_MI;
extern MethodInfo m8910_MI;
extern MethodInfo m8839_MI;
extern MethodInfo m8840_MI;
extern MethodInfo m8868_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m8906_MI;
extern MethodInfo m6918_MI;
extern MethodInfo m8844_MI;
extern MethodInfo m8841_MI;
extern MethodInfo m8865_MI;
extern MethodInfo m8864_MI;
extern MethodInfo m8842_MI;
extern MethodInfo m8862_MI;
extern MethodInfo m8849_MI;
extern MethodInfo m8850_MI;
extern MethodInfo m8848_MI;
extern MethodInfo m8859_MI;
extern MethodInfo m6959_MI;
extern MethodInfo m6961_MI;
extern MethodInfo m9863_MI;
extern MethodInfo m8853_MI;
extern MethodInfo m8854_MI;
extern MethodInfo m8852_MI;
extern MethodInfo m8909_MI;
extern MethodInfo m8860_MI;
extern MethodInfo m6970_MI;
extern MethodInfo m8869_MI;
extern MethodInfo m6981_MI;
extern MethodInfo m8861_MI;
extern MethodInfo m4266_MI;
extern MethodInfo m6990_MI;
extern MethodInfo m6971_MI;
extern MethodInfo m8856_MI;
extern MethodInfo m8912_MI;
extern MethodInfo m8845_MI;
extern MethodInfo m8858_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m8907_MI;
extern MethodInfo m8908_MI;
extern MethodInfo m8881_MI;


extern MethodInfo m8836_MI;
extern "C" void m8836 (t289 * __this, t58 p0, int32_t p1, bool p2, int32_t p3, bool p4, bool p5, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		__this->f13 = (t2*) &_stringLiteral1617;
		m6982(__this, &m6982_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_0 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		__this->f14 = L_0;
		t58 L_1 = p0;
		t58 L_2 = (__this->f14);
		bool L_3 = m4436(NULL, L_1, L_2, &m4436_MI);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		t2* L_4 = m7818(NULL, (t2*) &_stringLiteral1619, &m7818_MI);
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_5, (t2*) &_stringLiteral1618, L_4, &m5691_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003f:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = p1;
		if ((((int32_t)L_7) <= ((int32_t)3)))
		{
			goto IL_0052;
		}
	}

IL_0047:
	{
		t896 * L_8 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_8, (t2*) &_stringLiteral1620, &m5693_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0052:
	{
		t58 L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_10 = m8902(NULL, L_9, (&V_0), &m8902_MI);
		V_1 = L_10;
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		t2* L_12 = (__this->f13);
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_14 = m8896(NULL, L_12, L_13, &m8896_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_006b:
	{
		int32_t L_15 = V_1;
		if (L_15)
		{
			goto IL_0079;
		}
	}
	{
		t1540 * L_16 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_16, (t2*) &_stringLiteral1621, &m8882_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0079:
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		__this->f4 = 1;
		goto IL_008d;
	}

IL_0086:
	{
		__this->f4 = 0;
	}

IL_008d:
	{
		t58 L_18 = p0;
		__this->f14 = L_18;
		int32_t L_19 = p1;
		__this->f1 = L_19;
		bool L_20 = p2;
		__this->f2 = L_20;
		bool L_21 = p4;
		__this->f3 = L_21;
		__this->f6 = 0;
		int32_t L_22 = p3;
		bool L_23 = p5;
		m8866(__this, L_22, L_23, &m8866_MI);
		bool L_24 = (__this->f4);
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		t58 L_25 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int64_t L_26 = m8910(NULL, L_25, (((int64_t)0)), 1, (&V_0), &m8910_MI);
		__this->f12 = L_26;
		int32_t L_27 = V_0;
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		t2* L_28 = (__this->f13);
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_30 = m8896(NULL, L_28, L_29, &m8896_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00e4:
	{
		__this->f5 = (((int64_t)0));
		return;
	}
}
extern MethodInfo m8837_MI;
extern "C" void m8837 (t289 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	int32_t G_B2_1 = {0};
	t2* G_B2_2 = {0};
	t289 * G_B2_3 = {0};
	int32_t G_B1_0 = {0};
	int32_t G_B1_1 = {0};
	t2* G_B1_2 = {0};
	t289 * G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	int32_t G_B3_2 = {0};
	t2* G_B3_3 = {0};
	t289 * G_B3_4 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p2;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_000c:
	{
		m8839(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, ((int32_t)8192), 0, 0, &m8839_MI);
		return;
	}
}
extern "C" void m8838 (t289 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m8840(__this, L_0, L_1, L_2, L_3, ((int32_t)8192), 0, 0, &m8840_MI);
		return;
	}
}
extern "C" void m8839 (t289 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, bool p6, MethodInfo* method)
{
	bool G_B2_0 = false;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = {0};
	int32_t G_B2_3 = {0};
	int32_t G_B2_4 = {0};
	t2* G_B2_5 = {0};
	t289 * G_B2_6 = {0};
	bool G_B1_0 = false;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = {0};
	int32_t G_B1_3 = {0};
	int32_t G_B1_4 = {0};
	t2* G_B1_5 = {0};
	t289 * G_B1_6 = {0};
	int32_t G_B3_0 = 0;
	bool G_B3_1 = false;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = {0};
	int32_t G_B3_4 = {0};
	int32_t G_B3_5 = {0};
	t2* G_B3_6 = {0};
	t289 * G_B3_7 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = p4;
		bool L_5 = p6;
		bool L_6 = p5;
		G_B1_0 = L_5;
		G_B1_1 = L_4;
		G_B1_2 = L_3;
		G_B1_3 = L_2;
		G_B1_4 = L_1;
		G_B1_5 = L_0;
		G_B1_6 = __this;
		if (!L_6)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_4;
			G_B2_2 = L_3;
			G_B2_3 = L_2;
			G_B2_4 = L_1;
			G_B2_5 = L_0;
			G_B2_6 = __this;
			goto IL_0015;
		}
	}
	{
		G_B3_0 = ((int32_t)1073741824);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		G_B3_7 = G_B1_6;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
		G_B3_7 = G_B2_6;
	}

IL_0016:
	{
		m8840(G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, &m8840_MI);
		return;
	}
}
extern "C" void m8840 (t289 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, int32_t p6, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	t2* V_3 = {0};
	t2* V_4 = {0};
	t2* V_5 = {0};
	t2* V_6 = {0};
	t2* V_7 = {0};
	int32_t V_8 = {0};
	int64_t V_9 = 0;
	t2* G_B41_0 = {0};
	int64_t G_B62_0 = 0;
	{
		__this->f13 = (t2*) &_stringLiteral1617;
		m6982(__this, &m6982_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1588, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001f:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral1589, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0032:
	{
		int32_t L_5 = p3;
		p3 = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)-17)));
		int32_t L_6 = p4;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_7, (t2*) &_stringLiteral1622, (t2*) &_stringLiteral1473, &m4336_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0050:
	{
		int32_t L_8 = p1;
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_9 = p1;
		if ((((int32_t)L_9) <= ((int32_t)6)))
		{
			goto IL_007c;
		}
	}

IL_0058:
	{
		bool L_10 = p5;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_11, (t2*) &_stringLiteral1623, (t2*) &_stringLiteral1624, &m5691_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_006c:
	{
		t896 * L_12 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_12, (t2*) &_stringLiteral1623, (t2*) &_stringLiteral1624, &m4336_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_007c:
	{
		int32_t L_13 = p2;
		if ((((int32_t)L_13) < ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_14 = p2;
		if ((((int32_t)L_14) <= ((int32_t)3)))
		{
			goto IL_00a3;
		}
	}

IL_0084:
	{
		bool L_15 = p5;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		t1702 * L_16 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_16, (t2*) &_stringLiteral1625, &m8751_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0093:
	{
		t896 * L_17 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_17, (t2*) &_stringLiteral1620, (t2*) &_stringLiteral1624, &m4336_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00a3:
	{
		int32_t L_18 = p3;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = p3;
		if ((((int32_t)L_19) <= ((int32_t)7)))
		{
			goto IL_00cc;
		}
	}

IL_00ad:
	{
		bool L_20 = p5;
		if (!L_20)
		{
			goto IL_00bc;
		}
	}
	{
		t1702 * L_21 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_21, (t2*) &_stringLiteral1626, &m8751_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t896 * L_22 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_22, (t2*) &_stringLiteral1627, (t2*) &_stringLiteral1624, &m4336_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00cc:
	{
		t2* L_23 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t305* L_24 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f0;
		int32_t L_25 = m5952(L_23, L_24, &m5952_MI);
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_00e5;
		}
	}
	{
		t556 * L_26 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_26, (t2*) &_stringLiteral1628, &m2885_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00e5:
	{
		t2* L_27 = p0;
		bool L_28 = m6920(NULL, L_27, &m6920_MI);
		if (!L_28)
		{
			goto IL_010c;
		}
	}
	{
		t2* L_29 = m7818(NULL, (t2*) &_stringLiteral1629, &m7818_MI);
		V_0 = L_29;
		t2* L_30 = V_0;
		t2* L_31 = p0;
		t2* L_32 = m8868(__this, L_31, 0, &m8868_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = m590(NULL, L_30, L_32, &m590_MI);
		t2139 * L_34 = (t2139 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2139_TI));
		m11845(L_34, L_33, &m11845_MI);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_010c:
	{
		int32_t L_35 = p1;
		if ((!(((uint32_t)L_35) == ((uint32_t)6))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_36 = p2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_36&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0121;
		}
	}
	{
		t556 * L_37 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_37, (t2*) &_stringLiteral1630, &m2885_MI);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_0121:
	{
		int32_t L_38 = p2;
		if (((int32_t)((int32_t)L_38&(int32_t)2)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_39 = p1;
		if ((((int32_t)L_39) == ((int32_t)3)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_40 = p1;
		if ((((int32_t)L_40) == ((int32_t)4)))
		{
			goto IL_0151;
		}
	}
	{
		t2* L_41 = m7818(NULL, (t2*) &_stringLiteral1631, &m7818_MI);
		V_1 = L_41;
		t2* L_42 = V_1;
		int32_t L_43 = p2;
		int32_t L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t1178_TI), &L_44);
		int32_t L_46 = p1;
		int32_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t290_TI), &L_47);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_49 = m1190(NULL, L_42, L_45, L_48, &m1190_MI);
		t556 * L_50 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_50, L_49, &m2885_MI);
		il2cpp_codegen_raise_exception(L_50);
	}

IL_0151:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		uint16_t L_51 = ((t293_SFs*)InitializedTypeInfo(&t293_TI)->static_fields)->f2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)47))))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_52 = p0;
		int32_t L_53 = m2770(L_52, ((int32_t)47), &m2770_MI);
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_54 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_55 = m8925(NULL, L_54, &m8925_MI);
		t2* L_56 = m8922(NULL, L_55, &m8922_MI);
		V_2 = L_56;
		goto IL_017a;
	}

IL_0173:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_58 = m8922(NULL, L_57, &m8922_MI);
		V_2 = L_58;
	}

IL_017a:
	{
		t2* L_59 = V_2;
		int32_t L_60 = m2699(L_59, &m2699_MI);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_61 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_62 = m8925(NULL, L_61, &m8925_MI);
		V_3 = L_62;
		t2* L_63 = V_3;
		bool L_64 = m6920(NULL, L_63, &m6920_MI);
		if (L_64)
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_65 = m7818(NULL, (t2*) &_stringLiteral1606, &m7818_MI);
		V_4 = L_65;
		bool L_66 = p5;
		if (!L_66)
		{
			goto IL_01a5;
		}
	}
	{
		t2* L_67 = V_2;
		G_B41_0 = L_67;
		goto IL_01ab;
	}

IL_01a5:
	{
		t2* L_68 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_69 = m8925(NULL, L_68, &m8925_MI);
		G_B41_0 = L_69;
	}

IL_01ab:
	{
		V_5 = G_B41_0;
		t2* L_70 = V_4;
		t2* L_71 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_72 = m590(NULL, L_70, L_71, &m590_MI);
		t1702 * L_73 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_73, L_72, &m8751_MI);
		il2cpp_codegen_raise_exception(L_73);
	}

IL_01bc:
	{
		int32_t L_74 = p2;
		if ((!(((uint32_t)L_74) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_75 = p1;
		if ((((int32_t)L_75) == ((int32_t)2)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_76 = p1;
		if ((((int32_t)L_76) == ((int32_t)4)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_77 = p1;
		if ((((int32_t)L_77) == ((int32_t)1)))
		{
			goto IL_01f8;
		}
	}
	{
		t2* L_78 = p0;
		bool L_79 = m1077(NULL, L_78, &m1077_MI);
		if (L_79)
		{
			goto IL_01f8;
		}
	}
	{
		t2* L_80 = m7818(NULL, (t2*) &_stringLiteral1632, &m7818_MI);
		V_6 = L_80;
		t2* L_81 = p0;
		t2* L_82 = m8867(__this, L_81, &m8867_MI);
		V_7 = L_82;
		t2* L_83 = V_6;
		t2* L_84 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m590(NULL, L_83, L_84, &m590_MI);
		t1702 * L_86 = (t1702 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1702_TI));
		m8751(L_86, L_85, &m8751_MI);
		il2cpp_codegen_raise_exception(L_86);
	}

IL_01f8:
	{
		bool L_87 = p5;
		if (L_87)
		{
			goto IL_0203;
		}
	}
	{
		t2* L_88 = p0;
		__this->f13 = L_88;
	}

IL_0203:
	{
		t2* L_89 = p0;
		int32_t L_90 = p1;
		int32_t L_91 = p2;
		int32_t L_92 = p3;
		int32_t L_93 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_94 = m8906(NULL, L_89, L_90, L_91, L_92, L_93, (&V_8), &m8906_MI);
		__this->f14 = L_94;
		t58 L_95 = (__this->f14);
		t58 L_96 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_97 = m4436(NULL, L_95, L_96, &m4436_MI);
		if (!L_97)
		{
			goto IL_0238;
		}
	}
	{
		t2* L_98 = p0;
		t2* L_99 = m8867(__this, L_98, &m8867_MI);
		int32_t L_100 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_101 = m8896(NULL, L_99, L_100, &m8896_MI);
		il2cpp_codegen_raise_exception(L_101);
	}

IL_0238:
	{
		int32_t L_102 = p2;
		__this->f1 = L_102;
		__this->f2 = 1;
		bool L_103 = p5;
		__this->f6 = L_103;
		t58 L_104 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_105 = m8902(NULL, L_104, (&V_8), &m8902_MI);
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_027b;
		}
	}
	{
		__this->f4 = 1;
		int32_t L_106 = p6;
		__this->f3 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)1073741824)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0289;
	}

IL_027b:
	{
		__this->f4 = 0;
		__this->f3 = 0;
	}

IL_0289:
	{
		int32_t L_107 = p2;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_02c6;
		}
	}
	{
		bool L_108 = (__this->f4);
		if (!L_108)
		{
			goto IL_02c6;
		}
	}
	{
		int32_t L_109 = p4;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)8192)))))
		{
			goto IL_02c6;
		}
	}
	{
		int64_t L_110 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6918_MI, __this);
		V_9 = L_110;
		int32_t L_111 = p4;
		int64_t L_112 = V_9;
		if ((((int64_t)(((int64_t)L_111))) <= ((int64_t)L_112)))
		{
			goto IL_02c6;
		}
	}
	{
		int64_t L_113 = V_9;
		if ((((int64_t)L_113) >= ((int64_t)(((int64_t)((int32_t)1000))))))
		{
			goto IL_02bf;
		}
	}
	{
		G_B62_0 = (((int64_t)((int32_t)1000)));
		goto IL_02c1;
	}

IL_02bf:
	{
		int64_t L_114 = V_9;
		G_B62_0 = L_114;
	}

IL_02c1:
	{
		p4 = (((int32_t)G_B62_0));
	}

IL_02c6:
	{
		int32_t L_115 = p4;
		m8866(__this, L_115, 0, &m8866_MI);
		int32_t L_116 = p1;
		if ((!(((uint32_t)L_116) == ((uint32_t)6))))
		{
			goto IL_02eb;
		}
	}
	{
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8855_MI, __this, (((int64_t)0)), 2);
		int64_t L_117 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8844_MI, __this);
		__this->f5 = L_117;
		goto IL_02f3;
	}

IL_02eb:
	{
		__this->f5 = (((int64_t)0));
	}

IL_02f3:
	{
		return;
	}
}
extern "C" bool m8841 (t289 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->f1);
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
extern "C" bool m8842 (t289 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->f1);
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
extern "C" bool m8843 (t289 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int64_t m6918 (t289 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int64_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1615, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		m8863(__this, &m8863_MI);
		t58 L_6 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int64_t L_7 = m8911(NULL, L_6, (&V_0), &m8911_MI);
		V_1 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8867(__this, L_9, &m8867_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_12 = m8896(NULL, L_10, L_11, &m8896_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005a:
	{
		int64_t L_13 = V_1;
		return L_13;
	}
}
extern "C" int64_t m8844 (t289 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1615, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int64_t L_6 = (__this->f12);
		int32_t L_7 = (__this->f10);
		return ((int64_t)((int64_t)L_6+(int64_t)(((int64_t)L_7))));
	}
}
extern "C" void m8845 (t289 * __this, int64_t p0, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1615, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int64_t L_6 = p0;
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0040;
		}
	}
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_7, (t2*) &_stringLiteral1616, &m5693_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int64_t L_8 = p0;
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8855_MI, __this, L_8, 0);
		return;
	}
}
extern MethodInfo m8846_MI;
extern "C" int32_t m8846 (t289 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8841_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1633, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int32_t L_6 = (__this->f8);
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		t58 L_7 = (__this->f14);
		t723* L_8 = (__this->f7);
		int32_t L_9 = m8865(__this, L_7, L_8, 0, 1, &m8865_MI);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		return (-1);
	}

IL_0052:
	{
		t723* L_11 = (__this->f7);
		int32_t L_12 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
	}

IL_005b:
	{
		int32_t L_13 = (__this->f10);
		int32_t L_14 = (__this->f9);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0079;
		}
	}
	{
		m8864(__this, &m8864_MI);
		int32_t L_15 = (__this->f9);
		if (L_15)
		{
			goto IL_0079;
		}
	}
	{
		return (-1);
	}

IL_0079:
	{
		t723* L_16 = (__this->f7);
		int32_t L_17 = (__this->f10);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->f10 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_20));
	}
}
extern MethodInfo m8847_MI;
extern "C" void m8847 (t289 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8842_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1634, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int32_t L_6 = (__this->f10);
		int32_t L_7 = (__this->f8);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0044;
		}
	}
	{
		m8862(__this, &m8862_MI);
	}

IL_0044:
	{
		int32_t L_8 = (__this->f8);
		if (L_8)
		{
			goto IL_006a;
		}
	}
	{
		t723* L_9 = (__this->f7);
		uint8_t L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)L_10;
		__this->f11 = 1;
		__this->f9 = 1;
		m8862(__this, &m8862_MI);
		return;
	}

IL_006a:
	{
		t723* L_11 = (__this->f7);
		int32_t L_12 = (__this->f10);
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->f10 = ((int32_t)((int32_t)L_13+(int32_t)1));
		int32_t L_14 = V_0;
		uint8_t L_15 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_14)) = (uint8_t)L_15;
		int32_t L_16 = (__this->f10);
		int32_t L_17 = (__this->f9);
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_18 = (__this->f10);
		__this->f9 = L_18;
	}

IL_009d:
	{
		__this->f11 = 1;
		return;
	}
}
extern MethodInfo m6919_MI;
extern "C" int32_t m6919 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t9 * V_1 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t723* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8841_MI, __this);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_7, (t2*) &_stringLiteral1633, &m5706_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		t723* L_8 = p0;
		V_0 = (((int32_t)(((t121 *)L_8)->max_length)));
		int32_t L_9 = p1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t896 * L_10 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_10, (t2*) &_stringLiteral986, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0056:
	{
		int32_t L_11 = p2;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		t896 * L_12 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_12, (t2*) &_stringLiteral493, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_006a:
	{
		int32_t L_13 = p1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0079;
		}
	}
	{
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_15, (t2*) &_stringLiteral1635, &m2885_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0079:
	{
		int32_t L_16 = p1;
		int32_t L_17 = V_0;
		int32_t L_18 = p2;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)((int32_t)L_17-(int32_t)L_18)))))
		{
			goto IL_008a;
		}
	}
	{
		t556 * L_19 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_19, (t2*) &_stringLiteral1636, &m2885_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_008a:
	{
		bool L_20 = (__this->f3);
		if (!L_20)
		{
			goto IL_00a6;
		}
	}
	{
		t723* L_21 = p0;
		int32_t L_22 = p1;
		int32_t L_23 = p2;
		t9 * L_24 = (t9 *)VirtFuncInvoker5< t9 *, t723*, int32_t, int32_t, t463 *, t9 * >::Invoke(&m8849_MI, __this, L_21, L_22, L_23, (t463 *)NULL, NULL);
		V_1 = L_24;
		t9 * L_25 = V_1;
		int32_t L_26 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8850_MI, __this, L_25);
		return L_26;
	}

IL_00a6:
	{
		t723* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = p2;
		int32_t L_30 = m8848(__this, L_27, L_28, L_29, &m8848_MI);
		return L_30;
	}
}
extern "C" int32_t m8848 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t723* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = m8859(__this, L_0, L_1, L_2, &m8859_MI);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)L_5));
		int32_t L_6 = p2;
		int32_t L_7 = V_1;
		p2 = ((int32_t)((int32_t)L_6-(int32_t)L_7));
		int32_t L_8 = p2;
		if (L_8)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_001c:
	{
		int32_t L_10 = p2;
		int32_t L_11 = (__this->f8);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_004e;
		}
	}
	{
		m8862(__this, &m8862_MI);
		t58 L_12 = (__this->f14);
		t723* L_13 = p0;
		int32_t L_14 = p1;
		int32_t L_15 = V_0;
		int32_t L_16 = p2;
		int32_t L_17 = m8865(__this, L_12, L_13, ((int32_t)((int32_t)L_14+(int32_t)L_15)), L_16, &m8865_MI);
		V_1 = L_17;
		int64_t L_18 = (__this->f12);
		int32_t L_19 = V_1;
		__this->f12 = ((int64_t)((int64_t)L_18+(int64_t)(((int64_t)L_19))));
		goto IL_0060;
	}

IL_004e:
	{
		m8864(__this, &m8864_MI);
		t723* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_0;
		int32_t L_23 = p2;
		int32_t L_24 = m8859(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8859_MI);
		V_1 = L_24;
	}

IL_0060:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
		int32_t L_27 = V_0;
		return L_27;
	}
}
extern "C" t9 * m8849 (t289 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	t1714 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8841_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1637, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t723* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		int32_t L_8 = p2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_9, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1639, &m4336_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0052:
	{
		int32_t L_10 = p1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t896 * L_11 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_11, (t2*) &_stringLiteral986, (t2*) &_stringLiteral1639, &m4336_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t723* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_15, (t2*) &_stringLiteral1640, &m2885_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0079:
	{
		bool L_16 = (__this->f3);
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		t723* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t463 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m6959(__this, L_17, L_18, L_19, L_20, L_21, &m6959_MI);
		return L_22;
	}

IL_008f:
	{
		t58 L_23 = { &m8848_MI };
		t1714 * L_24 = (t1714 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1714_TI));
		m8828(L_24, __this, L_23, &m8828_MI);
		V_0 = L_24;
		t1714 * L_25 = V_0;
		t723* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = p2;
		t463 * L_29 = p3;
		t9 * L_30 = p4;
		t9 * L_31 = (t9 *)VirtFuncInvoker5< t9 *, t723*, int32_t, int32_t, t463 *, t9 * >::Invoke(&m8830_MI, L_25, L_26, L_27, L_28, L_29, L_30);
		return L_31;
	}
}
extern "C" int32_t m8850 (t289 * __this, t9 * p0, MethodInfo* method)
{
	t1874 * V_0 = {0};
	t1714 * V_1 = {0};
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
		bool L_2 = (__this->f3);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_3 = p0;
		int32_t L_4 = m6961(__this, L_3, &m6961_MI);
		return L_4;
	}

IL_001e:
	{
		t9 * L_5 = p0;
		V_0 = ((t1874 *)IsInst(L_5, InitializedTypeInfo(&t1874_TI)));
		t1874 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_7, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0038:
	{
		t1874 * L_8 = V_0;
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9863_MI, L_8);
		V_1 = ((t1714 *)IsInst(L_9, InitializedTypeInfo(&t1714_TI)));
		t1714 * L_10 = V_1;
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		t556 * L_11 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_11, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0057:
	{
		t1714 * L_12 = V_1;
		t9 * L_13 = p0;
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8831_MI, L_12, L_13);
		return L_14;
	}
}
extern MethodInfo m8851_MI;
extern "C" void m8851 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t723* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		int32_t L_6 = p1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		t896 * L_7 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_7, (t2*) &_stringLiteral986, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003f:
	{
		int32_t L_8 = p2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_9, (t2*) &_stringLiteral493, (t2*) &_stringLiteral812, &m4336_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		int32_t L_10 = p1;
		t723* L_11 = p0;
		int32_t L_12 = p2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0066;
		}
	}
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_13, (t2*) &_stringLiteral1636, &m2885_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0066:
	{
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8842_MI, __this);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_15, (t2*) &_stringLiteral1634, &m5706_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0079:
	{
		bool L_16 = (__this->f3);
		if (!L_16)
		{
			goto IL_0095;
		}
	}
	{
		t723* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t9 * L_20 = (t9 *)VirtFuncInvoker5< t9 *, t723*, int32_t, int32_t, t463 *, t9 * >::Invoke(&m8853_MI, __this, L_17, L_18, L_19, (t463 *)NULL, NULL);
		V_0 = L_20;
		t9 * L_21 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m8854_MI, __this, L_21);
		return;
	}

IL_0095:
	{
		t723* L_22 = p0;
		int32_t L_23 = p1;
		int32_t L_24 = p2;
		m8852(__this, L_22, L_23, L_24, &m8852_MI);
		return;
	}
}
extern "C" void m8852 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p2;
		int32_t L_1 = (__this->f8);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_005a;
		}
	}
	{
		m8862(__this, &m8862_MI);
		int32_t L_2 = p2;
		V_1 = L_2;
		goto IL_0045;
	}

IL_0013:
	{
		t58 L_3 = (__this->f14);
		t723* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_7 = m8909(NULL, L_3, L_4, L_5, L_6, (&V_0), &m8909_MI);
		V_2 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8867(__this, L_9, &m8867_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_12 = m8896(NULL, L_10, L_11, &m8896_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003a:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		V_1 = ((int32_t)((int32_t)L_13-(int32_t)L_14));
		int32_t L_15 = p1;
		int32_t L_16 = V_2;
		p1 = ((int32_t)((int32_t)L_15+(int32_t)L_16));
	}

IL_0045:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_18 = (__this->f12);
		int32_t L_19 = p2;
		__this->f12 = ((int64_t)((int64_t)L_18+(int64_t)(((int64_t)L_19))));
		goto IL_0087;
	}

IL_005a:
	{
		V_3 = 0;
		goto IL_0083;
	}

IL_005e:
	{
		t723* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_3;
		int32_t L_23 = p2;
		int32_t L_24 = m8860(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8860_MI);
		V_4 = L_24;
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)L_26));
		int32_t L_27 = p2;
		int32_t L_28 = V_4;
		p2 = ((int32_t)((int32_t)L_27-(int32_t)L_28));
		int32_t L_29 = p2;
		if (L_29)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0087;
	}

IL_007d:
	{
		m8862(__this, &m8862_MI);
	}

IL_0083:
	{
		int32_t L_30 = p2;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_005e;
		}
	}

IL_0087:
	{
		return;
	}
}
extern "C" t9 * m8853 (t289 * __this, t723* p0, int32_t p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	t1716 * V_0 = {0};
	t881 * V_1 = {0};
	t1715 * V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8842_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1643, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t723* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		int32_t L_8 = p2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_9, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1639, &m4336_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0052:
	{
		int32_t L_10 = p1;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		t896 * L_11 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_11, (t2*) &_stringLiteral986, (t2*) &_stringLiteral1639, &m4336_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t723* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t556 * L_15 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_15, (t2*) &_stringLiteral1644, &m2885_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0079:
	{
		bool L_16 = (__this->f3);
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		t723* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t463 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m6970(__this, L_17, L_18, L_19, L_20, L_21, &m6970_MI);
		return L_22;
	}

IL_008f:
	{
		t463 * L_23 = p3;
		t9 * L_24 = p4;
		t1716 * L_25 = (t1716 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1716_TI));
		m8869(L_25, L_23, L_24, &m8869_MI);
		V_0 = L_25;
		t1716 * L_26 = V_0;
		L_26->f6 = (-1);
		t1716 * L_27 = V_0;
		int32_t L_28 = p2;
		L_27->f4 = L_28;
		t1716 * L_29 = V_0;
		int32_t L_30 = p2;
		L_29->f5 = L_30;
		bool L_31 = (__this->f11);
		if (!L_31)
		{
			goto IL_00dc;
		}
	}
	{
		t881 * L_32 = (t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t881_TI));
		m6981(L_32, &m6981_MI);
		V_1 = L_32;
		t881 * L_33 = V_1;
		m8861(__this, L_33, &m8861_MI);
		t881 * L_34 = V_1;
		t723* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = p2;
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_34, L_35, L_36, L_37);
		p1 = 0;
		t881 * L_38 = V_1;
		int64_t L_39 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6990_MI, L_38);
		p2 = (((int32_t)L_39));
	}

IL_00dc:
	{
		t58 L_40 = { &m8852_MI };
		t1715 * L_41 = (t1715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1715_TI));
		m8832(L_41, __this, L_40, &m8832_MI);
		V_2 = L_41;
		t1715 * L_42 = V_2;
		t723* L_43 = p0;
		int32_t L_44 = p1;
		int32_t L_45 = p2;
		t463 * L_46 = p3;
		t9 * L_47 = p4;
		t9 * L_48 = (t9 *)VirtFuncInvoker5< t9 *, t723*, int32_t, int32_t, t463 *, t9 * >::Invoke(&m8834_MI, L_42, L_43, L_44, L_45, L_46, L_47);
		return L_48;
	}
}
extern "C" void m8854 (t289 * __this, t9 * p0, MethodInfo* method)
{
	t1874 * V_0 = {0};
	t1715 * V_1 = {0};
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
		bool L_2 = (__this->f3);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_3 = p0;
		m6971(__this, L_3, &m6971_MI);
		return;
	}

IL_001e:
	{
		t9 * L_4 = p0;
		V_0 = ((t1874 *)IsInst(L_4, InitializedTypeInfo(&t1874_TI)));
		t1874 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t1874 * L_7 = V_0;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9863_MI, L_7);
		V_1 = ((t1715 *)IsInst(L_8, InitializedTypeInfo(&t1715_TI)));
		t1715 * L_9 = V_1;
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		t556 * L_10 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_10, (t2*) &_stringLiteral1642, (t2*) &_stringLiteral1641, &m5691_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0057:
	{
		t1715 * L_11 = V_1;
		t9 * L_12 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8835_MI, L_11, L_12);
		return;
	}
}
extern "C" int64_t m8855 (t289 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1615, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int32_t L_6 = p1;
		V_2 = L_6;
		int32_t L_7 = V_2;
		if (L_7 == 0)
		{
			goto IL_005c;
		}
		if (L_7 == 1)
		{
			goto IL_0051;
		}
		if (L_7 == 2)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0060;
	}

IL_0046:
	{
		int64_t L_8 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6918_MI, __this);
		int64_t L_9 = p0;
		V_0 = ((int64_t)((int64_t)L_8+(int64_t)L_9));
		goto IL_0070;
	}

IL_0051:
	{
		int64_t L_10 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8844_MI, __this);
		int64_t L_11 = p0;
		V_0 = ((int64_t)((int64_t)L_10+(int64_t)L_11));
		goto IL_0070;
	}

IL_005c:
	{
		int64_t L_12 = p0;
		V_0 = L_12;
		goto IL_0070;
	}

IL_0060:
	{
		t556 * L_13 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_13, (t2*) &_stringLiteral1645, (t2*) &_stringLiteral1646, &m5691_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0070:
	{
		int64_t L_14 = V_0;
		if ((((int64_t)L_14) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0080;
		}
	}
	{
		t1540 * L_15 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_15, (t2*) &_stringLiteral1647, &m8882_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0080:
	{
		int64_t L_16 = V_0;
		int64_t L_17 = (__this->f5);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_0094;
		}
	}
	{
		t1540 * L_18 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8882(L_18, (t2*) &_stringLiteral1648, &m8882_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0094:
	{
		m8862(__this, &m8862_MI);
		t58 L_19 = (__this->f14);
		int64_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int64_t L_21 = m8910(NULL, L_19, L_20, 0, (&V_1), &m8910_MI);
		__this->f12 = L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_23 = (__this->f13);
		t2* L_24 = m8867(__this, L_23, &m8867_MI);
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_26 = m8896(NULL, L_24, L_25, &m8896_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00c5:
	{
		int64_t L_27 = (__this->f12);
		return L_27;
	}
}
extern MethodInfo m1085_MI;
extern "C" void m1085 (t289 * __this, int64_t p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_5, (t2*) &_stringLiteral1615, &m5706_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8842_MI, __this);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_7, (t2*) &_stringLiteral1649, &m5706_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0043:
	{
		int64_t L_8 = p0;
		if ((((int64_t)L_8) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0053;
		}
	}
	{
		t896 * L_9 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_9, (t2*) &_stringLiteral1650, &m5693_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		VirtActionInvoker0::Invoke(&m8856_MI, __this);
		t58 L_10 = (__this->f14);
		int64_t L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		m8912(NULL, L_10, L_11, (&V_0), &m8912_MI);
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		t2* L_13 = (__this->f13);
		t2* L_14 = m8867(__this, L_13, &m8867_MI);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_16 = m8896(NULL, L_14, L_15, &m8896_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_007e:
	{
		int64_t L_17 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8844_MI, __this);
		int64_t L_18 = p0;
		if ((((int64_t)L_17) <= ((int64_t)L_18)))
		{
			goto IL_008e;
		}
	}
	{
		int64_t L_19 = p0;
		VirtActionInvoker1< int64_t >::Invoke(&m8845_MI, __this, L_19);
	}

IL_008e:
	{
		return;
	}
}
extern "C" void m8856 (t289 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4436(NULL, L_0, L_1, &m4436_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, (t2*) &_stringLiteral1614, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8862(__this, &m8862_MI);
		return;
	}
}
extern MethodInfo m8857_MI;
extern "C" void m8857 (t289 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8858_MI, __this, 0);
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
extern "C" void m8858 (t289 * __this, bool p0, MethodInfo* method)
{
	t138 * V_0 = {0};
	t138 * V_1 = {0};
	int32_t V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t138 *)NULL;
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_1 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		bool L_2 = m4280(NULL, L_0, L_1, &m4280_MI);
		if (!L_2)
		{
			goto IL_0058;
		}
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		m8862(__this, &m8862_MI);
		goto IL_0021;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.Exception)
		V_1 = ((t138 *)__exception_local);
		t138 * L_3 = V_1;
		V_0 = L_3;
		goto IL_0021;
	} // end catch (depth: 1)

IL_0021:
	{
		bool L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		t58 L_5 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		m8907(NULL, L_5, (&V_2), &m8907_MI);
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t2* L_7 = (__this->f13);
		t2* L_8 = m8867(__this, L_7, &m8867_MI);
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_10 = m8896(NULL, L_8, L_9, &m8896_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t58 L_11 = ((t1719_SFs*)InitializedTypeInfo(&t1719_TI)->static_fields)->f1;
		__this->f14 = L_11;
	}

IL_0058:
	{
		__this->f4 = 0;
		__this->f1 = 0;
		bool L_12 = p0;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		__this->f7 = (t723*)NULL;
	}

IL_0070:
	{
		bool L_13 = p0;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		m6867(NULL, __this, &m6867_MI);
	}

IL_0079:
	{
		t138 * L_14 = V_0;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		t138 * L_15 = V_0;
		il2cpp_codegen_raise_exception(L_15);
	}

IL_007e:
	{
		return;
	}
}
extern "C" int32_t m8859 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p2;
		int32_t L_1 = (__this->f9);
		int32_t L_2 = (__this->f10);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = (__this->f9);
		int32_t L_4 = (__this->f10);
		p2 = ((int32_t)((int32_t)L_3-(int32_t)L_4));
	}

IL_0021:
	{
		int32_t L_5 = p2;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		t723* L_6 = (__this->f7);
		int32_t L_7 = (__this->f10);
		t723* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = p2;
		m5764(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5764_MI);
		int32_t L_11 = (__this->f10);
		int32_t L_12 = p2;
		__this->f10 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_0047:
	{
		int32_t L_13 = p2;
		return L_13;
	}
}
extern "C" int32_t m8860 (t289 * __this, t723* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p2;
		int32_t L_1 = (__this->f8);
		int32_t L_2 = (__this->f10);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2)))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = (__this->f8);
		int32_t L_4 = (__this->f10);
		p2 = ((int32_t)((int32_t)L_3-(int32_t)L_4));
	}

IL_0021:
	{
		int32_t L_5 = p2;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		t723* L_6 = p0;
		int32_t L_7 = p1;
		t723* L_8 = (__this->f7);
		int32_t L_9 = (__this->f10);
		int32_t L_10 = p2;
		m5764(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5764_MI);
		int32_t L_11 = (__this->f10);
		int32_t L_12 = p2;
		__this->f10 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
		int32_t L_13 = (__this->f10);
		int32_t L_14 = (__this->f9);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_15 = (__this->f10);
		__this->f9 = L_15;
	}

IL_0061:
	{
		__this->f11 = 1;
	}

IL_0068:
	{
		int32_t L_16 = p2;
		return L_16;
	}
}
extern "C" void m8861 (t289 * __this, t291 * p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		bool L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8843_MI, __this);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		t58 L_2 = (__this->f14);
		int64_t L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		m8910(NULL, L_2, L_3, 0, (&V_0), &m8910_MI);
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_5 = (__this->f13);
		t2* L_6 = m8867(__this, L_5, &m8867_MI);
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_8 = m8896(NULL, L_6, L_7, &m8896_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t291 * L_9 = p0;
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		t58 L_10 = (__this->f14);
		t723* L_11 = (__this->f7);
		int32_t L_12 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		m8909(NULL, L_10, L_11, 0, L_12, (&V_0), &m8909_MI);
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_14 = (__this->f13);
		t2* L_15 = m8867(__this, L_14, &m8867_MI);
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_17 = m8896(NULL, L_15, L_16, &m8896_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0072:
	{
		goto IL_0087;
	}

IL_0074:
	{
		t291 * L_18 = p0;
		t723* L_19 = (__this->f7);
		int32_t L_20 = (__this->f9);
		VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m6953_MI, L_18, L_19, 0, L_20);
	}

IL_0087:
	{
		int64_t L_21 = (__this->f12);
		int32_t L_22 = (__this->f10);
		__this->f12 = ((int64_t)((int64_t)L_21+(int64_t)(((int64_t)L_22))));
		int32_t L_23 = 0;
		V_1 = L_23;
		__this->f9 = L_23;
		int32_t L_24 = V_1;
		__this->f10 = L_24;
		__this->f11 = 0;
		return;
	}
}
extern "C" void m8862 (t289 * __this, MethodInfo* method)
{
	{
		m8861(__this, (t291 *)NULL, &m8861_MI);
		return;
	}
}
extern "C" void m8863 (t289 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		m8861(__this, (t291 *)NULL, &m8861_MI);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m8864 (t289 * __this, MethodInfo* method)
{
	{
		m8861(__this, (t291 *)NULL, &m8861_MI);
		t58 L_0 = (__this->f14);
		t723* L_1 = (__this->f7);
		int32_t L_2 = (__this->f8);
		int32_t L_3 = m8865(__this, L_0, L_1, 0, L_2, &m8865_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" int32_t m8865 (t289 * __this, t58 p0, t723* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
		t58 L_0 = p0;
		t723* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		int32_t L_4 = m8908(NULL, L_0, L_1, L_2, L_3, (&V_0), &m8908_MI);
		V_1 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)109)))))
		{
			goto IL_0018;
		}
	}
	{
		V_1 = 0;
		goto IL_002e;
	}

IL_0018:
	{
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		t2* L_7 = (__this->f13);
		t2* L_8 = m8867(__this, L_7, &m8867_MI);
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t138 * L_10 = m8896(NULL, L_8, L_9, &m8896_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_002e:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		t1540 * L_12 = (t1540 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1540_TI));
		m8881(L_12, &m8881_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0038:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" void m8866 (t289 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8866_init;
	if (!m8866_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m8866_init = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		p0 = 0;
		__this->f7 = ((t723*)SZArrayNew(t723_TI_var, 1));
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_2, (t2*) &_stringLiteral1622, (t2*) &_stringLiteral1473, &m4336_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = p0;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_0033;
		}
	}
	{
		p0 = 8;
	}

IL_0033:
	{
		int32_t L_4 = p0;
		__this->f7 = ((t723*)SZArrayNew(t723_TI_var, L_4));
	}

IL_003f:
	{
		int32_t L_5 = p0;
		__this->f8 = L_5;
		__this->f12 = (((int64_t)0));
		int32_t L_6 = 0;
		V_0 = L_6;
		__this->f9 = L_6;
		int32_t L_7 = V_0;
		__this->f10 = L_7;
		__this->f11 = 0;
		return;
	}
}
extern "C" t2* m8867 (t289 * __this, t2* p0, MethodInfo* method)
{
	t2* G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_2 = m8924(NULL, L_1, &m8924_MI);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_4 = m8925(NULL, L_3, &m8925_MI);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern "C" t2* m8868 (t289 * __this, t2* p0, bool p1, MethodInfo* method)
{
	t2* G_B5_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_2 = m8924(NULL, L_1, &m8924_MI);
		G_B5_0 = L_2;
		goto IL_001c;
	}

IL_0010:
	{
		bool L_3 = p1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t293_TI));
		t2* L_5 = m8925(NULL, L_4, &m8925_MI);
		G_B5_0 = L_5;
		goto IL_001c;
	}

IL_001b:
	{
		t2* L_6 = p0;
		G_B5_0 = L_6;
	}

IL_001c:
	{
		return G_B5_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
