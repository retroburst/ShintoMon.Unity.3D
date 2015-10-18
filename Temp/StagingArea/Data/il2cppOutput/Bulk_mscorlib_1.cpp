#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1640.h"
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
extern TypeInfo t1640_TI;
#include "t1640MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t1436.h"
#include "t470.h"

#include "t121.h"

extern MethodInfo m8148_MI;
extern "C" void m8148 (t1640 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8149_MI;
extern "C" void m8149 (t1640 * __this, t9 * p0, t1436 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8149((t1640 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1640(Il2CppObject* delegate, t9 * p0, t1436 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m8150_MI;
extern "C" t9 * m8150 (t1640 * __this, t9 * p0, t1436 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8151_MI;
extern "C" void m8151 (t1640 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1641.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1641_TI;
#include "t1641MD.h"

#include "t125.h"
#include "t124.h"
#include "t1621.h"
#include "t1212.h"
#include "mscorlib_ArrayTypes.h"
#include "t1529.h"
#include "t293.h"
#include "t168.h"
#include "t575.h"
#include "t2.h"
#include "t1530.h"
#include "t1353.h"
#include "t1350.h"
#include "t322.h"
extern TypeInfo t1212_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1621_TI;
extern TypeInfo t1433_TI;
extern TypeInfo t1529_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t9_TI;
extern TypeInfo t1436_TI;
extern TypeInfo t1530_TI;
extern TypeInfo t1353_TI;
extern TypeInfo t1350_TI;
extern TypeInfo t730_TI;
extern TypeInfo t575_TI;
extern TypeInfo t322_TI;
extern TypeInfo t891_TI;
extern TypeInfo t2_TI;
#include "t1621MD.h"
#include "t1212MD.h"
#include "t1217MD.h"
#include "t1529MD.h"
#include "t293MD.h"
#include "t9MD.h"
#include "t1530MD.h"
#include "t1591MD.h"
#include "t1353MD.h"
#include "t1354MD.h"
#include "t322MD.h"
#include "t891MD.h"
#include "t121MD.h"
extern Il2CppType t1433_0_0_0;
extern Il2CppType t730_0_0_0;
extern MethodInfo m8009_MI;
extern MethodInfo m5846_MI;
extern MethodInfo m8041_MI;
extern MethodInfo m6910_MI;
extern MethodInfo m6909_MI;
extern MethodInfo m6911_MI;
extern MethodInfo m1074_MI;
extern MethodInfo m1075_MI;
extern MethodInfo m8163_MI;
extern MethodInfo m646_MI;
extern MethodInfo m8157_MI;
extern MethodInfo m8028_MI;
extern MethodInfo m8026_MI;
extern MethodInfo m8032_MI;
extern MethodInfo m8042_MI;
extern MethodInfo m8035_MI;
extern MethodInfo m8044_MI;
extern MethodInfo m8029_MI;
extern MethodInfo m8031_MI;
extern MethodInfo m8023_MI;
extern MethodInfo m8033_MI;
extern MethodInfo m6912_MI;
extern MethodInfo m8156_MI;
extern MethodInfo m8001_MI;
extern MethodInfo m8006_MI;
extern MethodInfo m8024_MI;
extern MethodInfo m8043_MI;
extern MethodInfo m8030_MI;
extern MethodInfo m8158_MI;
extern MethodInfo m7847_MI;
extern MethodInfo m5796_MI;
extern MethodInfo m8019_MI;
extern MethodInfo m8166_MI;
extern MethodInfo m8015_MI;
extern MethodInfo m5793_MI;
extern MethodInfo m1166_MI;
extern MethodInfo m8161_MI;
extern MethodInfo m1170_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m1162_MI;
extern MethodInfo m1172_MI;


extern MethodInfo m8152_MI;
extern TypeInfo* t1433_TI_var;
extern "C" void m8152 (t1641 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8152_init;
	if (!m8152_init)
	{
		t1433_TI_var = il2cpp_codegen_class_from_type(&t1433_0_0_0);
		m8152_init = true;
	}
	{
		__this->f3 = 1;
		m6910(__this, &m6910_MI);
		__this->f1 = ((t1433*)SZArrayNew(t1433_TI_var, 1));
		t1433* L_0 = (__this->f1);
		t1529 * L_1 = (t1529 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1529_TI));
		m6909(L_1, ((int32_t)384), ((int32_t)16384), 8, &m6909_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t1529 **)(t1529 **)SZArrayLdElema(L_0, 0)) = (t1529 *)L_1;
		int32_t L_2 = p0;
		m6911(__this, L_2, &m6911_MI);
		return;
	}
}
extern MethodInfo m8153_MI;
extern "C" void m8153 (t1641 * __this, t1640 * p0, MethodInfo* method)
{
	{
		t1640 * L_0 = (__this->f14);
		t1640 * L_1 = p0;
		t293 * L_2 = m1074(NULL, L_0, L_1, &m1074_MI);
		__this->f14 = ((t1640 *)Castclass(L_2, InitializedTypeInfo(&t1640_TI)));
		return;
	}
}
extern MethodInfo m8154_MI;
extern "C" void m8154 (t1641 * __this, t1640 * p0, MethodInfo* method)
{
	{
		t1640 * L_0 = (__this->f14);
		t1640 * L_1 = p0;
		t293 * L_2 = m1075(NULL, L_0, L_1, &m1075_MI);
		__this->f14 = ((t1640 *)Castclass(L_2, InitializedTypeInfo(&t1640_TI)));
		return;
	}
}
extern MethodInfo m8155_MI;
extern "C" void m8155 (t1641 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8163_MI, __this, 0);
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
extern "C" void m8156 (t1641 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	t1621 * V_3 = {0};
	t1621 * V_4 = {0};
	t1621 * V_5 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))>>(int32_t)1));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_3 = m8028(NULL, ((int32_t)17), &m8028_MI);
		__this->f13 = L_3;
		goto IL_0041;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_5 = m8026(NULL, L_4, &m8026_MI);
		__this->f7 = L_5;
		t1621 * L_6 = (__this->f7);
		uint32_t L_7 = m8032(NULL, L_6, ((int32_t)17), &m8032_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_9 = m8026(NULL, L_8, &m8026_MI);
		__this->f8 = L_9;
		t1621 * L_10 = (__this->f8);
		uint32_t L_11 = m8032(NULL, L_10, ((int32_t)17), &m8032_MI);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		t1621 * L_12 = (__this->f7);
		t1621 * L_13 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_14 = m8042(NULL, L_12, L_13, &m8042_MI);
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
		t1621 * L_15 = (__this->f7);
		t1621 * L_16 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_17 = m8035(NULL, L_15, L_16, &m8035_MI);
		__this->f12 = L_17;
		t1621 * L_18 = (__this->f12);
		int32_t L_19 = m8009(L_18, &m8009_MI);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
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
		t1621 * L_21 = (__this->f7);
		t1621 * L_22 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_23 = m8044(NULL, L_21, L_22, &m8044_MI);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		t1621 * L_24 = (__this->f8);
		__this->f7 = L_24;
	}

IL_00c8:
	{
		goto IL_0048;
	}

IL_00cd:
	{
		t1621 * L_25 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_26 = m8029(NULL, 1, &m8029_MI);
		t1621 * L_27 = m8031(NULL, L_25, L_26, &m8031_MI);
		V_3 = L_27;
		t1621 * L_28 = (__this->f8);
		t1621 * L_29 = m8029(NULL, 1, &m8029_MI);
		t1621 * L_30 = m8031(NULL, L_28, L_29, &m8031_MI);
		V_4 = L_30;
		t1621 * L_31 = V_3;
		t1621 * L_32 = V_4;
		t1621 * L_33 = m8035(NULL, L_31, L_32, &m8035_MI);
		V_5 = L_33;
		t1621 * L_34 = (__this->f13);
		t1621 * L_35 = V_5;
		t1621 * L_36 = m8023(L_34, L_35, &m8023_MI);
		__this->f6 = L_36;
		t1621 * L_37 = (__this->f6);
		t1621 * L_38 = V_3;
		t1621 * L_39 = m8033(NULL, L_37, L_38, &m8033_MI);
		__this->f9 = L_39;
		t1621 * L_40 = (__this->f6);
		t1621 * L_41 = V_4;
		t1621 * L_42 = m8033(NULL, L_40, L_41, &m8033_MI);
		__this->f10 = L_42;
		t1621 * L_43 = (__this->f8);
		t1621 * L_44 = (__this->f7);
		t1621 * L_45 = m8023(L_43, L_44, &m8023_MI);
		__this->f11 = L_45;
		__this->f4 = 1;
		__this->f2 = 1;
		t1640 * L_46 = (__this->f14);
		if (!L_46)
		{
			goto IL_016e;
		}
	}
	{
		t1640 * L_47 = (__this->f14);
		VirtActionInvoker2< t9 *, t1436 * >::Invoke(&m8149_MI, L_47, __this, (t1436 *)NULL);
	}

IL_016e:
	{
		return;
	}
}
extern "C" int32_t m8157 (t1641 * __this, MethodInfo* method)
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
		t1621 * L_1 = (__this->f12);
		int32_t L_2 = m8009(L_1, &m8009_MI);
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
		int32_t L_7 = m5846(__this, &m5846_MI);
		return L_7;
	}
}
extern "C" bool m8158 (t1641 * __this, MethodInfo* method)
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
		t1621 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_2 = m8041(NULL, L_1, (t1621 *)NULL, &m8041_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t1621 * L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_4 = m8041(NULL, L_3, (t1621 *)NULL, &m8041_MI);
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
extern MethodInfo m8159_MI;
extern "C" t730* m8159 (t1641 * __this, t730* p0, MethodInfo* method)
{
	t1621 * V_0 = {0};
	t1621 * V_1 = {0};
	t1621 * V_2 = {0};
	t1621 * V_3 = {0};
	t1621 * V_4 = {0};
	t1621 * V_5 = {0};
	t730* V_6 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_1, (t2*) &_stringLiteral827, &m6912_MI);
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
		m8156(__this, &m8156_MI);
	}

IL_0021:
	{
		t730* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_4 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_4, L_3, &m8001_MI);
		V_0 = L_4;
		V_1 = (t1621 *)NULL;
		bool L_5 = (__this->f3);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		t1621 * L_6 = (__this->f12);
		int32_t L_7 = m8009(L_6, &m8009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_8 = m8006(NULL, L_7, &m8006_MI);
		V_1 = L_8;
		t1621 * L_9 = V_1;
		t1621 * L_10 = (__this->f13);
		t1621 * L_11 = (__this->f12);
		t1621 * L_12 = m8024(L_9, L_10, L_11, &m8024_MI);
		t1621 * L_13 = V_0;
		t1621 * L_14 = m8035(NULL, L_12, L_13, &m8035_MI);
		t1621 * L_15 = (__this->f12);
		t1621 * L_16 = m8033(NULL, L_14, L_15, &m8033_MI);
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
		t1621 * L_18 = V_0;
		t1621 * L_19 = (__this->f9);
		t1621 * L_20 = (__this->f7);
		t1621 * L_21 = m8024(L_18, L_19, L_20, &m8024_MI);
		V_3 = L_21;
		t1621 * L_22 = V_0;
		t1621 * L_23 = (__this->f10);
		t1621 * L_24 = (__this->f8);
		t1621 * L_25 = m8024(L_22, L_23, L_24, &m8024_MI);
		V_4 = L_25;
		t1621 * L_26 = V_4;
		t1621 * L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_28 = m8043(NULL, L_26, L_27, &m8043_MI);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		t1621 * L_29 = (__this->f7);
		t1621 * L_30 = V_4;
		t1621 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_32 = m8031(NULL, L_30, L_31, &m8031_MI);
		t1621 * L_33 = (__this->f11);
		t1621 * L_34 = m8035(NULL, L_32, L_33, &m8035_MI);
		t1621 * L_35 = (__this->f7);
		t1621 * L_36 = m8033(NULL, L_34, L_35, &m8033_MI);
		t1621 * L_37 = m8031(NULL, L_29, L_36, &m8031_MI);
		V_5 = L_37;
		t1621 * L_38 = V_4;
		t1621 * L_39 = (__this->f8);
		t1621 * L_40 = V_5;
		t1621 * L_41 = m8035(NULL, L_39, L_40, &m8035_MI);
		t1621 * L_42 = m8030(NULL, L_38, L_41, &m8030_MI);
		V_2 = L_42;
		goto IL_011a;
	}

IL_00e5:
	{
		t1621 * L_43 = V_3;
		t1621 * L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_45 = m8031(NULL, L_43, L_44, &m8031_MI);
		t1621 * L_46 = (__this->f11);
		t1621 * L_47 = m8035(NULL, L_45, L_46, &m8035_MI);
		t1621 * L_48 = (__this->f7);
		t1621 * L_49 = m8033(NULL, L_47, L_48, &m8033_MI);
		V_5 = L_49;
		t1621 * L_50 = V_4;
		t1621 * L_51 = (__this->f8);
		t1621 * L_52 = V_5;
		t1621 * L_53 = m8035(NULL, L_51, L_52, &m8035_MI);
		t1621 * L_54 = m8030(NULL, L_50, L_53, &m8030_MI);
		V_2 = L_54;
	}

IL_011a:
	{
		goto IL_0149;
	}

IL_011c:
	{
		bool L_55 = m8158(__this, &m8158_MI);
		if (L_55)
		{
			goto IL_0139;
		}
	}
	{
		t1621 * L_56 = V_0;
		t1621 * L_57 = (__this->f6);
		t1621 * L_58 = (__this->f12);
		t1621 * L_59 = m8024(L_56, L_57, L_58, &m8024_MI);
		V_2 = L_59;
		goto IL_0149;
	}

IL_0139:
	{
		t2* L_60 = m7847(NULL, (t2*) &_stringLiteral828, &m7847_MI);
		t1353 * L_61 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_61, L_60, &m5796_MI);
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
		t1621 * L_63 = V_2;
		t1621 * L_64 = V_1;
		t1621 * L_65 = (__this->f12);
		t1621 * L_66 = m8023(L_64, L_65, &m8023_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_67 = m8035(NULL, L_63, L_66, &m8035_MI);
		t1621 * L_68 = (__this->f12);
		t1621 * L_69 = m8033(NULL, L_67, L_68, &m8033_MI);
		V_2 = L_69;
		t1621 * L_70 = V_1;
		m8019(L_70, &m8019_MI);
	}

IL_0175:
	{
		t1621 * L_71 = V_2;
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
		t730* L_73 = m8166(__this, L_71, ((int32_t)((int32_t)L_72>>(int32_t)3)), &m8166_MI);
		V_6 = L_73;
		t1621 * L_74 = V_0;
		m8019(L_74, &m8019_MI);
		t1621 * L_75 = V_2;
		m8019(L_75, &m8019_MI);
		t730* L_76 = V_6;
		return L_76;
	}
}
extern MethodInfo m8160_MI;
extern "C" t730* m8160 (t1641 * __this, t730* p0, MethodInfo* method)
{
	t1621 * V_0 = {0};
	t1621 * V_1 = {0};
	t730* V_2 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_1, (t2*) &_stringLiteral829, &m6912_MI);
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
		m8156(__this, &m8156_MI);
	}

IL_0021:
	{
		t730* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_4 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_4, L_3, &m8001_MI);
		V_0 = L_4;
		t1621 * L_5 = V_0;
		t1621 * L_6 = (__this->f13);
		t1621 * L_7 = (__this->f12);
		t1621 * L_8 = m8024(L_5, L_6, L_7, &m8024_MI);
		V_1 = L_8;
		t1621 * L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
		t730* L_11 = m8166(__this, L_9, ((int32_t)((int32_t)L_10>>(int32_t)3)), &m8166_MI);
		V_2 = L_11;
		t1621 * L_12 = V_0;
		m8019(L_12, &m8019_MI);
		t1621 * L_13 = V_1;
		m8019(L_13, &m8019_MI);
		t730* L_14 = V_2;
		return L_14;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t1350  m8161 (t1641 * __this, bool p0, MethodInfo* method)
{
	static bool m8161_init;
	if (!m8161_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8161_init = true;
	}
	t1350  V_0 = {0};
	t730* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral830, &m7847_MI);
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_2, L_1, &m6912_MI);
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
		m8156(__this, &m8156_MI);
	}

IL_0026:
	{
		Initobj (InitializedTypeInfo(&t1350_TI), (&V_0));
		t1621 * L_4 = (__this->f13);
		t730* L_5 = m8015(L_4, &m8015_MI);
		(&V_0)->f7 = L_5;
		t1621 * L_6 = (__this->f12);
		t730* L_7 = m8015(L_6, &m8015_MI);
		(&V_0)->f6 = L_7;
		bool L_8 = p0;
		if (!L_8)
		{
			goto IL_018e;
		}
	}
	{
		t1621 * L_9 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_10 = m8041(NULL, L_9, (t1621 *)NULL, &m8041_MI);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		t1353 * L_11 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_11, (t2*) &_stringLiteral831, &m5796_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0071:
	{
		t1621 * L_12 = (__this->f6);
		t730* L_13 = m8015(L_12, &m8015_MI);
		(&V_0)->f2 = L_13;
		t730* L_14 = ((&V_0)->f2);
		t730* L_15 = ((&V_0)->f6);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		t730* L_16 = ((&V_0)->f6);
		V_1 = ((t730*)SZArrayNew(t730_TI_var, (((int32_t)(((t121 *)L_16)->max_length)))));
		t730* L_17 = ((&V_0)->f2);
		t730* L_18 = V_1;
		t730* L_19 = V_1;
		t730* L_20 = ((&V_0)->f2);
		t730* L_21 = ((&V_0)->f2);
		m5793(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_19)->max_length)))-(int32_t)(((int32_t)(((t121 *)L_20)->max_length))))), (((int32_t)(((t121 *)L_21)->max_length))), &m5793_MI);
		t730* L_22 = V_1;
		(&V_0)->f2 = L_22;
	}

IL_00d2:
	{
		t1621 * L_23 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_24 = m8042(NULL, L_23, (t1621 *)NULL, &m8042_MI);
		if (!L_24)
		{
			goto IL_018e;
		}
	}
	{
		t1621 * L_25 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_26 = m8042(NULL, L_25, (t1621 *)NULL, &m8042_MI);
		if (!L_26)
		{
			goto IL_018e;
		}
	}
	{
		t1621 * L_27 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_28 = m8042(NULL, L_27, (t1621 *)NULL, &m8042_MI);
		if (!L_28)
		{
			goto IL_018e;
		}
	}
	{
		t1621 * L_29 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_30 = m8042(NULL, L_29, (t1621 *)NULL, &m8042_MI);
		if (!L_30)
		{
			goto IL_018e;
		}
	}
	{
		t1621 * L_31 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_32 = m8042(NULL, L_31, (t1621 *)NULL, &m8042_MI);
		if (!L_32)
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8157_MI, __this);
		V_2 = ((int32_t)((int32_t)L_33>>(int32_t)4));
		t1621 * L_34 = (__this->f7);
		int32_t L_35 = V_2;
		t730* L_36 = m8166(__this, L_34, L_35, &m8166_MI);
		(&V_0)->f0 = L_36;
		t1621 * L_37 = (__this->f8);
		int32_t L_38 = V_2;
		t730* L_39 = m8166(__this, L_37, L_38, &m8166_MI);
		(&V_0)->f1 = L_39;
		t1621 * L_40 = (__this->f9);
		int32_t L_41 = V_2;
		t730* L_42 = m8166(__this, L_40, L_41, &m8166_MI);
		(&V_0)->f3 = L_42;
		t1621 * L_43 = (__this->f10);
		int32_t L_44 = V_2;
		t730* L_45 = m8166(__this, L_43, L_44, &m8166_MI);
		(&V_0)->f4 = L_45;
		t1621 * L_46 = (__this->f11);
		int32_t L_47 = V_2;
		t730* L_48 = m8166(__this, L_46, L_47, &m8166_MI);
		(&V_0)->f5 = L_48;
	}

IL_018e:
	{
		t1350  L_49 = V_0;
		return L_49;
	}
}
extern MethodInfo m8162_MI;
extern "C" void m8162 (t1641 * __this, t1350  p0, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	t1621 * V_2 = {0};
	t1621 * V_3 = {0};
	t1621 * V_4 = {0};
	t1621 * V_5 = {0};
	int32_t G_B22_0 = 0;
	t1641 * G_B25_0 = {0};
	t1641 * G_B23_0 = {0};
	t1641 * G_B24_0 = {0};
	int32_t G_B26_0 = 0;
	t1641 * G_B26_1 = {0};
	int32_t G_B35_0 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral830, &m7847_MI);
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_2, L_1, &m6912_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		t730* L_3 = ((&p0)->f7);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_4 = m7847(NULL, (t2*) &_stringLiteral832, &m7847_MI);
		t1353 * L_5 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_5, L_4, &m5796_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t730* L_6 = ((&p0)->f6);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		t2* L_7 = m7847(NULL, (t2*) &_stringLiteral833, &m7847_MI);
		t1353 * L_8 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_8, L_7, &m5796_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t730* L_9 = ((&p0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_10 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_10, L_9, &m8001_MI);
		__this->f13 = L_10;
		t730* L_11 = ((&p0)->f6);
		t1621 * L_12 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_12, L_11, &m8001_MI);
		__this->f12 = L_12;
		t730* L_13 = ((&p0)->f2);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		t730* L_14 = ((&p0)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_15 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_15, L_14, &m8001_MI);
		__this->f6 = L_15;
	}

IL_0089:
	{
		t730* L_16 = ((&p0)->f3);
		if (!L_16)
		{
			goto IL_00a4;
		}
	}
	{
		t730* L_17 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_18 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_18, L_17, &m8001_MI);
		__this->f9 = L_18;
	}

IL_00a4:
	{
		t730* L_19 = ((&p0)->f4);
		if (!L_19)
		{
			goto IL_00bf;
		}
	}
	{
		t730* L_20 = ((&p0)->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_21 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_21, L_20, &m8001_MI);
		__this->f10 = L_21;
	}

IL_00bf:
	{
		t730* L_22 = ((&p0)->f5);
		if (!L_22)
		{
			goto IL_00da;
		}
	}
	{
		t730* L_23 = ((&p0)->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_24 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_24, L_23, &m8001_MI);
		__this->f11 = L_24;
	}

IL_00da:
	{
		t730* L_25 = ((&p0)->f0);
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		t730* L_26 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_27 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_27, L_26, &m8001_MI);
		__this->f7 = L_27;
	}

IL_00f5:
	{
		t730* L_28 = ((&p0)->f1);
		if (!L_28)
		{
			goto IL_0110;
		}
	}
	{
		t730* L_29 = ((&p0)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_30 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m8001(L_30, L_29, &m8001_MI);
		__this->f8 = L_30;
	}

IL_0110:
	{
		__this->f4 = 1;
		t1621 * L_31 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_32 = m8042(NULL, L_31, (t1621 *)NULL, &m8042_MI);
		if (!L_32)
		{
			goto IL_0141;
		}
	}
	{
		t1621 * L_33 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_34 = m8042(NULL, L_33, (t1621 *)NULL, &m8042_MI);
		if (!L_34)
		{
			goto IL_0141;
		}
	}
	{
		t1621 * L_35 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_36 = m8042(NULL, L_35, (t1621 *)NULL, &m8042_MI);
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
		t1621 * L_38 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_39 = m8042(NULL, L_38, (t1621 *)NULL, &m8042_MI);
		G_B24_0 = G_B23_0;
		if (!L_39)
		{
			G_B25_0 = G_B23_0;
			goto IL_0163;
		}
	}
	{
		t1621 * L_40 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_41 = m8042(NULL, L_40, (t1621 *)NULL, &m8042_MI);
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
		t1621 * L_43 = (__this->f12);
		t1621 * L_44 = (__this->f7);
		t1621 * L_45 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_46 = m8035(NULL, L_44, L_45, &m8035_MI);
		bool L_47 = m8041(NULL, L_43, L_46, &m8041_MI);
		V_1 = L_47;
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_022f;
		}
	}
	{
		t1621 * L_49 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_50 = m8029(NULL, 1, &m8029_MI);
		t1621 * L_51 = m8031(NULL, L_49, L_50, &m8031_MI);
		V_2 = L_51;
		t1621 * L_52 = (__this->f8);
		t1621 * L_53 = m8029(NULL, 1, &m8029_MI);
		t1621 * L_54 = m8031(NULL, L_52, L_53, &m8031_MI);
		V_3 = L_54;
		t1621 * L_55 = V_2;
		t1621 * L_56 = V_3;
		t1621 * L_57 = m8035(NULL, L_55, L_56, &m8035_MI);
		V_4 = L_57;
		t1621 * L_58 = (__this->f13);
		t1621 * L_59 = V_4;
		t1621 * L_60 = m8023(L_58, L_59, &m8023_MI);
		V_5 = L_60;
		t1621 * L_61 = (__this->f6);
		t1621 * L_62 = V_5;
		bool L_63 = m8041(NULL, L_61, L_62, &m8041_MI);
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
		t1621 * L_66 = (__this->f9);
		t1621 * L_67 = V_5;
		t1621 * L_68 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_69 = m8033(NULL, L_67, L_68, &m8033_MI);
		bool L_70 = m8041(NULL, L_66, L_69, &m8041_MI);
		if (!L_70)
		{
			goto IL_022d;
		}
	}
	{
		t1621 * L_71 = (__this->f10);
		t1621 * L_72 = V_5;
		t1621 * L_73 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_74 = m8033(NULL, L_72, L_73, &m8033_MI);
		bool L_75 = m8041(NULL, L_71, L_74, &m8041_MI);
		if (!L_75)
		{
			goto IL_022d;
		}
	}
	{
		t1621 * L_76 = (__this->f11);
		t1621 * L_77 = (__this->f8);
		t1621 * L_78 = (__this->f7);
		t1621 * L_79 = m8023(L_77, L_78, &m8023_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_80 = m8041(NULL, L_76, L_79, &m8041_MI);
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
		t2* L_82 = m7847(NULL, (t2*) &_stringLiteral834, &m7847_MI);
		t1353 * L_83 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_83, L_82, &m5796_MI);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_0242:
	{
		return;
	}
}
extern "C" void m8163 (t1641 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_010e;
		}
	}
	{
		t1621 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_2 = m8042(NULL, L_1, (t1621 *)NULL, &m8042_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1621 * L_3 = (__this->f6);
		m8019(L_3, &m8019_MI);
		__this->f6 = (t1621 *)NULL;
	}

IL_002b:
	{
		t1621 * L_4 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_5 = m8042(NULL, L_4, (t1621 *)NULL, &m8042_MI);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		t1621 * L_6 = (__this->f7);
		m8019(L_6, &m8019_MI);
		__this->f7 = (t1621 *)NULL;
	}

IL_004b:
	{
		t1621 * L_7 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_8 = m8042(NULL, L_7, (t1621 *)NULL, &m8042_MI);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		t1621 * L_9 = (__this->f8);
		m8019(L_9, &m8019_MI);
		__this->f8 = (t1621 *)NULL;
	}

IL_006b:
	{
		t1621 * L_10 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_11 = m8042(NULL, L_10, (t1621 *)NULL, &m8042_MI);
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t1621 * L_12 = (__this->f9);
		m8019(L_12, &m8019_MI);
		__this->f9 = (t1621 *)NULL;
	}

IL_008b:
	{
		t1621 * L_13 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_14 = m8042(NULL, L_13, (t1621 *)NULL, &m8042_MI);
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		t1621 * L_15 = (__this->f10);
		m8019(L_15, &m8019_MI);
		__this->f10 = (t1621 *)NULL;
	}

IL_00ab:
	{
		t1621 * L_16 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_17 = m8042(NULL, L_16, (t1621 *)NULL, &m8042_MI);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		t1621 * L_18 = (__this->f11);
		m8019(L_18, &m8019_MI);
		__this->f11 = (t1621 *)NULL;
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
		t1621 * L_20 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_21 = m8042(NULL, L_20, (t1621 *)NULL, &m8042_MI);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		t1621 * L_22 = (__this->f13);
		m8019(L_22, &m8019_MI);
		__this->f13 = (t1621 *)NULL;
	}

IL_00ee:
	{
		t1621 * L_23 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		bool L_24 = m8042(NULL, L_23, (t1621 *)NULL, &m8042_MI);
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		t1621 * L_25 = (__this->f12);
		m8019(L_25, &m8019_MI);
		__this->f12 = (t1621 *)NULL;
	}

IL_010e:
	{
		__this->f5 = 1;
		return;
	}
}
extern MethodInfo m8164_MI;
extern "C" t2* m8164 (t1641 * __this, bool p0, MethodInfo* method)
{
	t322 * V_0 = {0};
	t1350  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		bool L_1 = p0;
		t1350  L_2 = (t1350 )VirtFuncInvoker1< t1350 , bool >::Invoke(&m8161_MI, __this, L_1);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			t322 * L_3 = V_0;
			m1170(L_3, (t2*) &_stringLiteral835, &m1170_MI);
			t322 * L_4 = V_0;
			m1170(L_4, (t2*) &_stringLiteral836, &m1170_MI);
			t322 * L_5 = V_0;
			t730* L_6 = ((&V_1)->f6);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_7 = m4323(NULL, L_6, &m4323_MI);
			m1170(L_5, L_7, &m1170_MI);
			t322 * L_8 = V_0;
			m1170(L_8, (t2*) &_stringLiteral837, &m1170_MI);
			t322 * L_9 = V_0;
			m1170(L_9, (t2*) &_stringLiteral838, &m1170_MI);
			t322 * L_10 = V_0;
			t730* L_11 = ((&V_1)->f7);
			t2* L_12 = m4323(NULL, L_11, &m4323_MI);
			m1170(L_10, L_12, &m1170_MI);
			t322 * L_13 = V_0;
			m1170(L_13, (t2*) &_stringLiteral839, &m1170_MI);
			bool L_14 = p0;
			if (!L_14)
			{
				goto IL_01a5;
			}
		}

IL_0076:
		{
			t730* L_15 = ((&V_1)->f0);
			if (!L_15)
			{
				goto IL_00aa;
			}
		}

IL_007f:
		{
			t322 * L_16 = V_0;
			m1170(L_16, (t2*) &_stringLiteral840, &m1170_MI);
			t322 * L_17 = V_0;
			t730* L_18 = ((&V_1)->f0);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_19 = m4323(NULL, L_18, &m4323_MI);
			m1170(L_17, L_19, &m1170_MI);
			t322 * L_20 = V_0;
			m1170(L_20, (t2*) &_stringLiteral841, &m1170_MI);
		}

IL_00aa:
		{
			t730* L_21 = ((&V_1)->f1);
			if (!L_21)
			{
				goto IL_00de;
			}
		}

IL_00b3:
		{
			t322 * L_22 = V_0;
			m1170(L_22, (t2*) &_stringLiteral842, &m1170_MI);
			t322 * L_23 = V_0;
			t730* L_24 = ((&V_1)->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_25 = m4323(NULL, L_24, &m4323_MI);
			m1170(L_23, L_25, &m1170_MI);
			t322 * L_26 = V_0;
			m1170(L_26, (t2*) &_stringLiteral843, &m1170_MI);
		}

IL_00de:
		{
			t730* L_27 = ((&V_1)->f3);
			if (!L_27)
			{
				goto IL_0112;
			}
		}

IL_00e7:
		{
			t322 * L_28 = V_0;
			m1170(L_28, (t2*) &_stringLiteral844, &m1170_MI);
			t322 * L_29 = V_0;
			t730* L_30 = ((&V_1)->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_31 = m4323(NULL, L_30, &m4323_MI);
			m1170(L_29, L_31, &m1170_MI);
			t322 * L_32 = V_0;
			m1170(L_32, (t2*) &_stringLiteral845, &m1170_MI);
		}

IL_0112:
		{
			t730* L_33 = ((&V_1)->f4);
			if (!L_33)
			{
				goto IL_0146;
			}
		}

IL_011b:
		{
			t322 * L_34 = V_0;
			m1170(L_34, (t2*) &_stringLiteral846, &m1170_MI);
			t322 * L_35 = V_0;
			t730* L_36 = ((&V_1)->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_37 = m4323(NULL, L_36, &m4323_MI);
			m1170(L_35, L_37, &m1170_MI);
			t322 * L_38 = V_0;
			m1170(L_38, (t2*) &_stringLiteral847, &m1170_MI);
		}

IL_0146:
		{
			t730* L_39 = ((&V_1)->f5);
			if (!L_39)
			{
				goto IL_017a;
			}
		}

IL_014f:
		{
			t322 * L_40 = V_0;
			m1170(L_40, (t2*) &_stringLiteral848, &m1170_MI);
			t322 * L_41 = V_0;
			t730* L_42 = ((&V_1)->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_43 = m4323(NULL, L_42, &m4323_MI);
			m1170(L_41, L_43, &m1170_MI);
			t322 * L_44 = V_0;
			m1170(L_44, (t2*) &_stringLiteral849, &m1170_MI);
		}

IL_017a:
		{
			t322 * L_45 = V_0;
			m1170(L_45, (t2*) &_stringLiteral850, &m1170_MI);
			t322 * L_46 = V_0;
			t730* L_47 = ((&V_1)->f2);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
			t2* L_48 = m4323(NULL, L_47, &m4323_MI);
			m1170(L_46, L_48, &m1170_MI);
			t322 * L_49 = V_0;
			m1170(L_49, (t2*) &_stringLiteral851, &m1170_MI);
		}

IL_01a5:
		{
			t322 * L_50 = V_0;
			m1170(L_50, (t2*) &_stringLiteral852, &m1170_MI);
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
			t730* L_51 = ((&V_1)->f0);
			if (!L_51)
			{
				goto IL_01d6;
			}
		}

IL_01c0:
		{
			t730* L_52 = ((&V_1)->f0);
			t730* L_53 = ((&V_1)->f0);
			m1162(NULL, (t121 *)(t121 *)L_52, 0, (((int32_t)(((t121 *)L_53)->max_length))), &m1162_MI);
		}

IL_01d6:
		{
			t730* L_54 = ((&V_1)->f1);
			if (!L_54)
			{
				goto IL_01f5;
			}
		}

IL_01df:
		{
			t730* L_55 = ((&V_1)->f1);
			t730* L_56 = ((&V_1)->f1);
			m1162(NULL, (t121 *)(t121 *)L_55, 0, (((int32_t)(((t121 *)L_56)->max_length))), &m1162_MI);
		}

IL_01f5:
		{
			t730* L_57 = ((&V_1)->f3);
			if (!L_57)
			{
				goto IL_0214;
			}
		}

IL_01fe:
		{
			t730* L_58 = ((&V_1)->f3);
			t730* L_59 = ((&V_1)->f3);
			m1162(NULL, (t121 *)(t121 *)L_58, 0, (((int32_t)(((t121 *)L_59)->max_length))), &m1162_MI);
		}

IL_0214:
		{
			t730* L_60 = ((&V_1)->f4);
			if (!L_60)
			{
				goto IL_0233;
			}
		}

IL_021d:
		{
			t730* L_61 = ((&V_1)->f4);
			t730* L_62 = ((&V_1)->f4);
			m1162(NULL, (t121 *)(t121 *)L_61, 0, (((int32_t)(((t121 *)L_62)->max_length))), &m1162_MI);
		}

IL_0233:
		{
			t730* L_63 = ((&V_1)->f5);
			if (!L_63)
			{
				goto IL_0252;
			}
		}

IL_023c:
		{
			t730* L_64 = ((&V_1)->f5);
			t730* L_65 = ((&V_1)->f5);
			m1162(NULL, (t121 *)(t121 *)L_64, 0, (((int32_t)(((t121 *)L_65)->max_length))), &m1162_MI);
		}

IL_0252:
		{
			t730* L_66 = ((&V_1)->f2);
			if (!L_66)
			{
				goto IL_0271;
			}
		}

IL_025b:
		{
			t730* L_67 = ((&V_1)->f2);
			t730* L_68 = ((&V_1)->f2);
			m1162(NULL, (t121 *)(t121 *)L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))), &m1162_MI);
		}

IL_0271:
		{
			il2cpp_codegen_raise_exception(__exception_local);
			goto IL_0275;
		}
	} // end catch (depth: 1)

IL_0275:
	{
		t322 * L_69 = V_0;
		t2* L_70 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_69);
		return L_70;
	}
}
extern MethodInfo m8165_MI;
extern "C" bool m8165 (t1641 * __this, MethodInfo* method)
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
extern TypeInfo* t730_TI_var;
extern "C" t730* m8166 (t1641 * __this, t1621 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8166_init;
	if (!m8166_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8166_init = true;
	}
	t730* V_0 = {0};
	t730* V_1 = {0};
	{
		t1621 * L_0 = p0;
		t730* L_1 = m8015(L_0, &m8015_MI);
		V_0 = L_1;
		t730* L_2 = V_0;
		int32_t L_3 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		t730* L_4 = V_0;
		return L_4;
	}

IL_000f:
	{
		int32_t L_5 = p1;
		V_1 = ((t730*)SZArrayNew(t730_TI_var, L_5));
		t730* L_6 = V_0;
		t730* L_7 = V_1;
		int32_t L_8 = p1;
		t730* L_9 = V_0;
		t730* L_10 = V_0;
		m5793(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8-(int32_t)(((int32_t)(((t121 *)L_9)->max_length))))), (((int32_t)(((t121 *)L_10)->max_length))), &m5793_MI);
		t730* L_11 = V_0;
		t730* L_12 = V_0;
		m1162(NULL, (t121 *)(t121 *)L_11, 0, (((int32_t)(((t121 *)L_12)->max_length))), &m1162_MI);
		t730* L_13 = V_1;
		return L_13;
	}
}
#include "t1642.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1642_TI;
#include "t1642MD.h"

#include "t1434.h"
#include "t1544.h"
#include "t1460.h"
#include "t8.h"
#include "t1346.h"
#include "t132.h"
#include "t903.h"
#include "t563.h"
#include "t1413.h"
extern TypeInfo t1434_TI;
extern TypeInfo t1544_TI;
extern TypeInfo t121_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1460_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1346_TI;
extern TypeInfo t132_TI;
extern TypeInfo t903_TI;
extern TypeInfo t563_TI;
extern TypeInfo t1413_TI;
#include "t1434MD.h"
#include "t1630MD.h"
#include "t160MD.h"
#include "t1526MD.h"
#include "t8MD.h"
#include "t2MD.h"
#include "t1346MD.h"
#include "t132MD.h"
#include "t903MD.h"
#include "t563MD.h"
#include "t1413MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m7047_MI;
extern MethodInfo m336_MI;
extern MethodInfo m7042_MI;
extern MethodInfo m8061_MI;
extern MethodInfo m5747_MI;
extern MethodInfo m7848_MI;
extern MethodInfo m11572_MI;
extern MethodInfo m7043_MI;
extern MethodInfo m8170_MI;
extern MethodInfo m6896_MI;
extern MethodInfo m7046_MI;
extern MethodInfo m11987_MI;
extern MethodInfo m8173_MI;
extern MethodInfo m8174_MI;
extern MethodInfo m8175_MI;
extern MethodInfo m8176_MI;
extern MethodInfo m651_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5774_MI;
extern MethodInfo m339_MI;
extern MethodInfo m4361_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m8177_MI;
extern MethodInfo m10364_MI;
extern MethodInfo m8179_MI;
extern MethodInfo m8180_MI;
extern MethodInfo m8172_MI;
extern MethodInfo m6888_MI;
extern MethodInfo m6889_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8181_MI;
extern MethodInfo m8182_MI;
extern MethodInfo m8183_MI;
extern MethodInfo m8184_MI;


extern MethodInfo m8167_MI;
extern TypeInfo* t730_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m8167 (t1642 * __this, t1434 * p0, bool p1, t730* p2, MethodInfo* method)
{
	static bool m8167_init;
	if (!m8167_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8167_init = true;
	}
	t2* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1434 * L_0 = p0;
		__this->f0 = L_0;
		bool L_1 = p1;
		__this->f1 = L_1;
		t1434 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7042_MI, L_2);
		__this->f2 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		t730* L_4 = p2;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = (__this->f2);
		t730* L_6 = m8061(NULL, L_5, &m8061_MI);
		p2 = L_6;
		goto IL_004a;
	}

IL_003b:
	{
		t730* L_7 = p2;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_7);
		p2 = ((t730*)Castclass(L_8, t730_TI_var));
	}

IL_004a:
	{
		t730* L_9 = p2;
		int32_t L_10 = (__this->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))) >= ((int32_t)L_10)))
		{
			goto IL_0086;
		}
	}
	{
		t158* L_11 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t730* L_12 = p2;
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
		t2* L_19 = m7848(NULL, (t2*) &_stringLiteral1338, L_15, &m7848_MI);
		V_0 = L_19;
		t2* L_20 = V_0;
		t1353 * L_21 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_21, L_20, &m5796_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0086:
	{
		int32_t L_22 = (__this->f2);
		__this->f3 = ((t730*)SZArrayNew(t730_TI_var, L_22));
		t730* L_23 = p2;
		t730* L_24 = (__this->f3);
		int32_t L_25 = (__this->f2);
		t730* L_26 = p2;
		int32_t L_27 = m11572(NULL, L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m11572_MI);
		m5793(NULL, (t121 *)(t121 *)L_23, 0, (t121 *)(t121 *)L_24, 0, L_27, &m5793_MI);
		int32_t L_28 = (__this->f2);
		__this->f4 = ((t730*)SZArrayNew(t730_TI_var, L_28));
		t1434 * L_29 = (__this->f0);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7043_MI, L_29);
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
		__this->f5 = ((t730*)SZArrayNew(t730_TI_var, L_34));
		int32_t L_35 = (__this->f2);
		__this->f6 = ((t730*)SZArrayNew(t730_TI_var, L_35));
		return;
	}
}
extern MethodInfo m8168_MI;
extern "C" void m8168 (t1642 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8170_MI, __this, 1);
		m6896(NULL, __this, &m6896_MI);
		return;
	}
}
extern MethodInfo m8169_MI;
extern "C" void m8169 (t1642 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8170_MI, __this, 0);
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
extern "C" void m8170 (t1642 * __this, bool p0, MethodInfo* method)
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
		t730* L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		m1162(NULL, (t121 *)(t121 *)L_2, 0, L_3, &m1162_MI);
		__this->f3 = (t730*)NULL;
		t730* L_4 = (__this->f4);
		int32_t L_5 = (__this->f2);
		m1162(NULL, (t121 *)(t121 *)L_4, 0, L_5, &m1162_MI);
		__this->f4 = (t730*)NULL;
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
extern MethodInfo m8171_MI;
extern "C" bool m8171 (t1642 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m8172 (t1642 * __this, t730* p0, t730* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t1434 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7046_MI, L_0);
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
		t730* L_3 = p0;
		t730* L_4 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m11987_MI, __this, L_3, L_4);
		goto IL_0081;
	}

IL_0034:
	{
		t730* L_5 = p0;
		t730* L_6 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8173_MI, __this, L_5, L_6);
		goto IL_0081;
	}

IL_003e:
	{
		t730* L_7 = p0;
		t730* L_8 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8174_MI, __this, L_7, L_8);
		goto IL_0081;
	}

IL_0048:
	{
		t730* L_9 = p0;
		t730* L_10 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8175_MI, __this, L_9, L_10);
		goto IL_0081;
	}

IL_0052:
	{
		t730* L_11 = p0;
		t730* L_12 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8176_MI, __this, L_11, L_12);
		goto IL_0081;
	}

IL_005c:
	{
		t1434 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7046_MI, L_13);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t1460_TI), &L_15);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m610(NULL, (t2*) &_stringLiteral1339, L_17, &m610_MI);
		t1346 * L_19 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m5774(L_19, L_18, &m5774_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0081:
	{
		return;
	}
}
extern "C" void m8173 (t1642 * __this, t730* p0, t730* p1, MethodInfo* method)
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
		t730* L_1 = (__this->f3);
		int32_t L_2 = V_0;
		uint8_t* L_3 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2));
		t730* L_4 = p0;
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
		t730* L_10 = (__this->f3);
		t730* L_11 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m11987_MI, __this, L_10, L_11);
		t730* L_12 = p1;
		t730* L_13 = (__this->f3);
		int32_t L_14 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m5793_MI);
		goto IL_00aa;
	}

IL_0050:
	{
		t730* L_15 = p0;
		t730* L_16 = (__this->f4);
		int32_t L_17 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_15, 0, (t121 *)(t121 *)L_16, 0, L_17, &m5793_MI);
		t730* L_18 = p0;
		t730* L_19 = p1;
		VirtActionInvoker2< t730*, t730* >::Invoke(&m11987_MI, __this, L_18, L_19);
		V_1 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		t730* L_20 = p1;
		int32_t L_21 = V_1;
		uint8_t* L_22 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21));
		t730* L_23 = (__this->f3);
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
		t730* L_29 = (__this->f4);
		t730* L_30 = (__this->f3);
		int32_t L_31 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_29, 0, (t121 *)(t121 *)L_30, 0, L_31, &m5793_MI);
	}

IL_00aa:
	{
		return;
	}
}
extern "C" void m8174 (t1642 * __this, t730* p0, t730* p1, MethodInfo* method)
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
		t730* L_1 = (__this->f3);
		t730* L_2 = (__this->f4);
		VirtActionInvoker2< t730*, t730* >::Invoke(&m11987_MI, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		t730* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		t730* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t730* L_9 = p0;
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
		t730* L_16 = (__this->f3);
		int32_t L_17 = (__this->f7);
		t730* L_18 = (__this->f3);
		int32_t L_19 = (__this->f2);
		int32_t L_20 = (__this->f7);
		m5793(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, 0, ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m5793_MI);
		t730* L_21 = p1;
		int32_t L_22 = V_0;
		t730* L_23 = (__this->f3);
		int32_t L_24 = (__this->f2);
		int32_t L_25 = (__this->f7);
		int32_t L_26 = (__this->f7);
		m5793(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), L_26, &m5793_MI);
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
		t730* L_30 = (__this->f3);
		t730* L_31 = (__this->f4);
		VirtActionInvoker2< t730*, t730* >::Invoke(&m11987_MI, __this, L_30, L_31);
		__this->f1 = 0;
		t730* L_32 = (__this->f3);
		int32_t L_33 = (__this->f7);
		t730* L_34 = (__this->f3);
		int32_t L_35 = (__this->f2);
		int32_t L_36 = (__this->f7);
		m5793(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, 0, ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m5793_MI);
		t730* L_37 = p0;
		int32_t L_38 = V_2;
		t730* L_39 = (__this->f3);
		int32_t L_40 = (__this->f2);
		int32_t L_41 = (__this->f7);
		int32_t L_42 = (__this->f7);
		m5793(NULL, (t121 *)(t121 *)L_37, L_38, (t121 *)(t121 *)L_39, ((int32_t)((int32_t)L_40-(int32_t)L_41)), L_42, &m5793_MI);
		V_3 = 0;
		goto IL_012b;
	}

IL_0113:
	{
		t730* L_43 = p1;
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		t730* L_46 = (__this->f4);
		int32_t L_47 = V_3;
		int32_t L_48 = L_47;
		t730* L_49 = p0;
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
extern "C" void m8175 (t1642 * __this, t730* p0, t730* p1, MethodInfo* method)
{
	{
		t1353 * L_0 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_0, (t2*) &_stringLiteral1340, &m5796_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8176 (t1642 * __this, t730* p0, t730* p1, MethodInfo* method)
{
	{
		t1353 * L_0 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_0, (t2*) &_stringLiteral1341, &m5796_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8177 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral805, &m339_MI);
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
		m4361(L_3, (t2*) &_stringLiteral806, (t2*) &_stringLiteral807, &m4361_MI);
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
		m4361(L_5, (t2*) &_stringLiteral808, (t2*) &_stringLiteral807, &m4361_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t730* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0053;
		}
	}
	{
		t2* L_9 = m7847(NULL, (t2*) &_stringLiteral809, &m7847_MI);
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_10, (t2*) &_stringLiteral805, L_9, &m5720_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0053:
	{
		return;
	}
}
extern MethodInfo m8178_MI;
extern "C" int32_t m8178 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, t730* p3, int32_t p4, MethodInfo* method)
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
		m6912(L_1, (t2*) &_stringLiteral1342, &m6912_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t730* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8177(__this, L_2, L_3, L_4, &m8177_MI);
		t730* L_5 = p3;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_6 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_6, (t2*) &_stringLiteral810, &m339_MI);
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_8, (t2*) &_stringLiteral811, (t2*) &_stringLiteral807, &m4361_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0040:
	{
		t730* L_9 = p3;
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
		t1434 * L_14 = (__this->f0);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		t1434 * L_16 = (__this->f0);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0087;
		}
	}

IL_0072:
	{
		t2* L_18 = m7847(NULL, (t2*) &_stringLiteral809, &m7847_MI);
		t1353 * L_19 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m10364(L_19, (t2*) &_stringLiteral810, L_18, &m10364_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0087:
	{
		bool L_20 = m8179(__this, &m8179_MI);
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
		t2* L_23 = m7847(NULL, (t2*) &_stringLiteral809, &m7847_MI);
		t1353 * L_24 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m10364(L_24, (t2*) &_stringLiteral810, L_23, &m10364_MI);
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
		t730* L_26 = p0;
		int32_t L_27 = p1;
		t730* L_28 = p3;
		int32_t L_29 = (__this->f2);
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))-(int32_t)L_27))-(int32_t)(((int32_t)(((t121 *)L_28)->max_length)))))) == ((uint32_t)L_29))))
		{
			goto IL_00d4;
		}
	}
	{
		t730* L_30 = p3;
		int32_t L_31 = p4;
		p2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_30)->max_length)))-(int32_t)L_31));
		goto IL_00e9;
	}

IL_00d4:
	{
		t2* L_32 = m7847(NULL, (t2*) &_stringLiteral809, &m7847_MI);
		t1353 * L_33 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m10364(L_33, (t2*) &_stringLiteral810, L_32, &m10364_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00e9:
	{
		t730* L_34 = p0;
		int32_t L_35 = p1;
		int32_t L_36 = p2;
		t730* L_37 = p3;
		int32_t L_38 = p4;
		int32_t L_39 = m8180(__this, L_34, L_35, L_36, L_37, L_38, &m8180_MI);
		return L_39;
	}
}
extern "C" bool m8179 (t1642 * __this, MethodInfo* method)
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
		t1434 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		t1434 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_3);
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
extern "C" int32_t m8180 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, t730* p3, int32_t p4, MethodInfo* method)
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
		t1353 * L_5 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_5, (t2*) &_stringLiteral1343, &m5796_MI);
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
		bool L_8 = m8179(__this, &m8179_MI);
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
		t730* L_11 = (__this->f5);
		t730* L_12 = (__this->f6);
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8172_MI, __this, L_11, L_12);
		t730* L_13 = (__this->f6);
		t730* L_14 = p3;
		int32_t L_15 = p4;
		int32_t L_16 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_13, 0, (t121 *)(t121 *)L_14, L_15, L_16, &m5793_MI);
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
		t730* L_21 = p0;
		int32_t L_22 = V_0;
		t730* L_23 = (__this->f5);
		int32_t L_24 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, 0, L_24, &m5793_MI);
		t730* L_25 = (__this->f5);
		t730* L_26 = (__this->f6);
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8172_MI, __this, L_25, L_26);
		t730* L_27 = (__this->f6);
		t730* L_28 = p3;
		int32_t L_29 = p4;
		int32_t L_30 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_27, 0, (t121 *)(t121 *)L_28, L_29, L_30, &m5793_MI);
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
		bool L_40 = m8179(__this, &m8179_MI);
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		t730* L_41 = p0;
		int32_t L_42 = V_0;
		t730* L_43 = (__this->f5);
		int32_t L_44 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_41, L_42, (t121 *)(t121 *)L_43, 0, L_44, &m5793_MI);
		__this->f10 = 1;
	}

IL_0112:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8181 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8181_init;
	if (!m8181_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8181_init = true;
	}
	t730* V_0 = {0};
	{
		t1413 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1413 * L_1 = m6888(NULL, &m6888_MI);
		__this->f11 = L_1;
	}

IL_0013:
	{
		int32_t L_2 = p2;
		V_0 = ((t730*)SZArrayNew(t730_TI_var, L_2));
		t1413 * L_3 = (__this->f11);
		t730* L_4 = V_0;
		VirtActionInvoker1< t730* >::Invoke(&m6889_MI, L_3, L_4);
		t730* L_5 = V_0;
		t730* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		m5793(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, L_7, L_8, &m5793_MI);
		return;
	}
}
extern "C" void m8182 (t1642 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral1344, &m7847_MI);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1544_TI), &L_2);
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
		t2* L_7 = m7847(NULL, (t2*) &_stringLiteral1345, &m7847_MI);
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
		t2* L_15 = m7847(NULL, (t2*) &_stringLiteral1346, &m7847_MI);
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
		t1353 * L_22 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_22, L_21, &m5796_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8183 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8183_init;
	if (!m8183_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8183_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t730* V_3 = {0};
	t730* V_4 = {0};
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
		t1434 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_6);
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
		return ((t730*)SZArrayNew(t730_TI_var, 0));
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
		t1434 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		t1353 * L_15 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_15, (t2*) &_stringLiteral1347, &m5796_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006f:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f2);
		V_3 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)L_16+(int32_t)L_17))));
		t730* L_18 = p0;
		int32_t L_19 = p1;
		t730* L_20 = V_3;
		int32_t L_21 = p2;
		m5793(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, 0, L_21, &m5793_MI);
		t730* L_22 = V_3;
		p0 = L_22;
		p1 = 0;
		t730* L_23 = V_3;
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
		V_4 = ((t730*)SZArrayNew(t730_TI_var, L_25));
		V_5 = 0;
		goto IL_00dc;
	}

IL_00a9:
	{
		t730* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = (__this->f2);
		t730* L_29 = V_4;
		int32_t L_30 = V_5;
		m8180(__this, L_26, L_27, L_28, L_29, L_30, &m8180_MI);
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
		t1434 * L_41 = (__this->f0);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_41);
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
		t730* L_44 = V_4;
		t730* L_45 = V_4;
		uint8_t L_46 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))) = (uint8_t)L_46;
		t730* L_47 = p0;
		int32_t L_48 = p1;
		t730* L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		m5793(NULL, (t121 *)(t121 *)L_47, L_48, (t121 *)(t121 *)L_49, L_50, L_51, &m5793_MI);
		t730* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = (__this->f2);
		t730* L_55 = V_4;
		int32_t L_56 = V_0;
		m8180(__this, L_52, L_53, L_54, L_55, L_56, &m8180_MI);
		goto IL_01db;
	}

IL_0149:
	{
		t730* L_57 = V_4;
		t730* L_58 = V_4;
		uint8_t L_59 = V_6;
		uint8_t L_60 = V_6;
		m8181(__this, L_57, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_58)->max_length)))-(int32_t)L_59)), ((int32_t)((int32_t)L_60-(int32_t)1)), &m8181_MI);
		t730* L_61 = V_4;
		t730* L_62 = V_4;
		uint8_t L_63 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_62)->max_length)))-(int32_t)1)))) = (uint8_t)L_63;
		t730* L_64 = p0;
		int32_t L_65 = p1;
		t730* L_66 = V_4;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		m5793(NULL, (t121 *)(t121 *)L_64, L_65, (t121 *)(t121 *)L_66, L_67, L_68, &m5793_MI);
		t730* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = (__this->f2);
		t730* L_72 = V_4;
		int32_t L_73 = V_0;
		m8180(__this, L_69, L_70, L_71, L_72, L_73, &m8180_MI);
		goto IL_01db;
	}

IL_0187:
	{
		t730* L_74 = V_4;
		V_7 = (((int32_t)(((t121 *)L_74)->max_length)));
		goto IL_0196;
	}

IL_018f:
	{
		t730* L_75 = V_4;
		int32_t L_76 = V_7;
		uint8_t L_77 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_76)) = (uint8_t)L_77;
	}

IL_0196:
	{
		int32_t L_78 = V_7;
		int32_t L_79 = ((int32_t)((int32_t)L_78-(int32_t)1));
		V_7 = L_79;
		t730* L_80 = V_4;
		uint8_t L_81 = V_6;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_80)->max_length)))-(int32_t)L_81)))))
		{
			goto IL_018f;
		}
	}
	{
		t730* L_82 = p0;
		int32_t L_83 = p1;
		t730* L_84 = V_4;
		int32_t L_85 = V_0;
		int32_t L_86 = V_1;
		m5793(NULL, (t121 *)(t121 *)L_82, L_83, (t121 *)(t121 *)L_84, L_85, L_86, &m5793_MI);
		t730* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = (__this->f2);
		t730* L_90 = V_4;
		int32_t L_91 = V_0;
		m8180(__this, L_87, L_88, L_89, L_90, L_91, &m8180_MI);
		goto IL_01db;
	}

IL_01c6:
	{
		t730* L_92 = p0;
		int32_t L_93 = p1;
		int32_t L_94 = (__this->f2);
		t730* L_95 = V_4;
		int32_t L_96 = V_5;
		m8180(__this, L_92, L_93, L_94, L_95, L_96, &m8180_MI);
		goto IL_01db;
	}

IL_01db:
	{
		t730* L_97 = V_4;
		return L_97;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8184 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8184_init;
	if (!m8184_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8184_init = true;
	}
	int32_t V_0 = 0;
	t730* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t730* V_7 = {0};
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
		t1353 * L_2 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_2, (t2*) &_stringLiteral1343, &m5796_MI);
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
		V_1 = ((t730*)SZArrayNew(t730_TI_var, L_7));
		V_2 = 0;
		goto IL_0061;
	}

IL_0034:
	{
		t730* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f2);
		t730* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = m8180(__this, L_8, L_9, L_10, L_11, L_12, &m8180_MI);
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
		t730* L_22 = (__this->f5);
		t730* L_23 = (__this->f6);
		VirtActionInvoker2< t730*, t730* >::Invoke(&m8172_MI, __this, L_22, L_23);
		t730* L_24 = (__this->f6);
		t730* L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_24, 0, (t121 *)(t121 *)L_25, L_26, L_27, &m5793_MI);
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
		t730* L_31 = V_1;
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
		t1434 * L_34 = (__this->f0);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_34);
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
		t1434 * L_40 = (__this->f0);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_40);
		uint8_t L_42 = V_4;
		m8182(__this, L_41, L_42, (-1), &m8182_MI);
	}

IL_0102:
	{
		uint8_t L_43 = V_4;
		V_5 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_012e;
	}

IL_010a:
	{
		t730* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45-(int32_t)1))-(int32_t)L_46));
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_44, L_47)))
		{
			goto IL_0128;
		}
	}
	{
		t1434 * L_48 = (__this->f0);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_48);
		int32_t L_50 = V_5;
		m8182(__this, L_49, (-1), L_50, &m8182_MI);
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
		t1434 * L_58 = (__this->f0);
		int32_t L_59 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_58);
		uint8_t L_60 = V_4;
		m8182(__this, L_59, L_60, (-1), &m8182_MI);
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
		t1434 * L_66 = (__this->f0);
		int32_t L_67 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_66);
		uint8_t L_68 = V_4;
		m8182(__this, L_67, L_68, (-1), &m8182_MI);
	}

IL_0188:
	{
		uint8_t L_69 = V_4;
		V_6 = ((int32_t)((int32_t)L_69-(int32_t)1));
		goto IL_01b6;
	}

IL_0190:
	{
		t730* L_70 = V_1;
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
		t1434 * L_75 = (__this->f0);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7047_MI, L_75);
		int32_t L_77 = V_6;
		m8182(__this, L_76, (-1), L_77, &m8182_MI);
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
		V_7 = ((t730*)SZArrayNew(t730_TI_var, L_83));
		t730* L_84 = V_1;
		t730* L_85 = V_7;
		int32_t L_86 = V_0;
		m5793(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, 0, L_86, &m5793_MI);
		t730* L_87 = V_1;
		t730* L_88 = V_1;
		m1162(NULL, (t121 *)(t121 *)L_87, 0, (((int32_t)(((t121 *)L_88)->max_length))), &m1162_MI);
		t730* L_89 = V_7;
		return L_89;
	}

IL_01e8:
	{
		return ((t730*)SZArrayNew(t730_TI_var, 0));
	}
}
extern MethodInfo m8185_MI;
extern "C" t730* m8185 (t1642 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m6912(L_1, (t2*) &_stringLiteral1342, &m6912_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t730* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8177(__this, L_2, L_3, L_4, &m8177_MI);
		bool L_5 = (__this->f1);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t730* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		t730* L_9 = m8183(__this, L_6, L_7, L_8, &m8183_MI);
		return L_9;
	}

IL_002e:
	{
		t730* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		t730* L_13 = m8184(__this, L_10, L_11, L_12, &m8184_MI);
		return L_13;
	}
}
#include "t1643.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1643_TI;
#include "t1643MD.h"

#include "t1644.h"


extern MethodInfo m8186_MI;
extern "C" void m8186 (t1643 * __this, t2* p0, t1644 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t1644 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8187_MI;
extern "C" t2* m8187 (t1643 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8188_MI;
extern "C" t1644 * m8188 (t1643 * __this, MethodInfo* method)
{
	{
		t1644 * L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1645.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1645_TI;
#include "t1645MD.h"

#include "t2172.h"
#include "t2160.h"
#include "t313.h"
#include "t1368.h"
extern TypeInfo t2172_TI;
extern TypeInfo t1368_TI;
#include "t2172MD.h"
#include "t314MD.h"
#include "t1368MD.h"
extern MethodInfo m1123_MI;
extern MethodInfo m6913_MI;
extern MethodInfo m6902_MI;
extern MethodInfo m6914_MI;
extern MethodInfo m6915_MI;
extern MethodInfo m6916_MI;
extern MethodInfo m6917_MI;
extern MethodInfo m6918_MI;
extern MethodInfo m8195_MI;
extern MethodInfo m8196_MI;
extern FieldInfo t2172_f12_FieldInfo;
extern FieldInfo t2172_f13_FieldInfo;
extern FieldInfo t2172_f14_FieldInfo;


extern MethodInfo m8189_MI;
extern "C" void m8189 (t1645 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8190_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8190 (t9 * __this , MethodInfo* method)
{
	static bool m8190_init;
	if (!m8190_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8190_init = true;
	}
	{
		t730* L_0 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)64)));
		m1123(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2172_f12_FieldInfo), &m1123_MI);
		((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f0 = L_0;
		t730* L_1 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)64)));
		m1123(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2172_f13_FieldInfo), &m1123_MI);
		((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f1 = L_1;
		t730* L_2 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)64)));
		m1123(NULL, (t121 *)(t121 *)L_2, LoadFieldToken(&t2172_f14_FieldInfo), &m1123_MI);
		((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m8191_MI;
extern "C" void m8191 (t1645 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m8192_MI;
extern "C" void m8192 (t1645 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8193_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8193 (t1645 * __this, t730* p0, MethodInfo* method)
{
	static bool m8193_init;
	if (!m8193_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8193_init = true;
	}
	{
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		__this->f5 = ((t730*)SZArrayNew(t730_TI_var, 0));
		goto IL_0022;
	}

IL_0011:
	{
		t730* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		__this->f5 = ((t730*)Castclass(L_2, t730_TI_var));
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8194_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8194 (t1645 * __this, t730* p0, MethodInfo* method)
{
	static bool m8194_init;
	if (!m8194_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8194_init = true;
	}
	{
		t730* L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t730* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		__this->f6 = ((t730*)Castclass(L_2, t730_TI_var));
		goto IL_001d;
	}

IL_0016:
	{
		__this->f6 = (t730*)NULL;
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m8195 (t1645 * __this, t730* p0, int32_t p1, t730* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t730* L_0 = p2;
		t730* L_1 = p2;
		int32_t L_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))-(int32_t)1));
		t730* L_3 = p0;
		int32_t L_4 = p1;
		t730* L_5 = p2;
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)(((int32_t)(((t121 *)L_5)->max_length)))))-(int32_t)1));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_6))&(int32_t)((int32_t)255)))))+(int32_t)1));
		t730* L_7 = p0;
		int32_t L_8 = p1;
		t730* L_9 = p2;
		int32_t L_10 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))))-(int32_t)1)))) = (uint8_t)(((uint8_t)L_10));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11>>(int32_t)8));
		t730* L_12 = p2;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)2));
		goto IL_005e;
	}

IL_0037:
	{
		int32_t L_13 = V_0;
		t730* L_14 = p2;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		t730* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_20))&(int32_t)((int32_t)255)))))));
		t730* L_21 = p0;
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
extern TypeInfo* t730_TI_var;
extern "C" t730* m8196 (t1645 * __this, t730* p0, int32_t p1, MethodInfo* method)
{
	static bool m8196_init;
	if (!m8196_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8196_init = true;
	}
	t1368 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t730* V_3 = {0};
	t730* V_4 = {0};
	int32_t V_5 = 0;
	t730* V_6 = {0};
	int32_t V_7 = 0;
	t730* V_8 = {0};
	t730* V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	t730* V_12 = {0};
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		t2* L_0 = (__this->f3);
		t1368 * L_1 = m6913(NULL, L_0, &m6913_MI);
		V_0 = L_1;
		t1368 * L_2 = V_0;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6902_MI, L_2);
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		V_2 = ((int32_t)64);
		int32_t L_4 = p1;
		V_3 = ((t730*)SZArrayNew(t730_TI_var, L_4));
		t730* L_5 = (__this->f6);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		t730* L_6 = (__this->f6);
		if (!(((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_7 = V_2;
		t730* L_8 = (__this->f6);
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		V_4 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)L_7*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))+(int32_t)L_9))-(int32_t)1))/(int32_t)L_10))))));
		V_5 = 0;
		goto IL_006a;
	}

IL_004d:
	{
		t730* L_11 = V_4;
		int32_t L_12 = V_5;
		t730* L_13 = (__this->f6);
		int32_t L_14 = V_5;
		t730* L_15 = (__this->f6);
		int32_t L_16 = ((int32_t)((int32_t)L_14%(int32_t)(((int32_t)(((t121 *)L_15)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_16));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_18 = V_5;
		t730* L_19 = V_4;
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
		V_4 = ((t730*)SZArrayNew(t730_TI_var, 0));
	}

IL_007c:
	{
		t730* L_20 = (__this->f5);
		if (!L_20)
		{
			goto IL_00d1;
		}
	}
	{
		t730* L_21 = (__this->f5);
		if (!(((int32_t)(((t121 *)L_21)->max_length))))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_22 = V_2;
		t730* L_23 = (__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = V_2;
		V_6 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)L_22*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)L_24))-(int32_t)1))/(int32_t)L_25))))));
		V_7 = 0;
		goto IL_00c7;
	}

IL_00aa:
	{
		t730* L_26 = V_6;
		int32_t L_27 = V_7;
		t730* L_28 = (__this->f5);
		int32_t L_29 = V_7;
		t730* L_30 = (__this->f5);
		int32_t L_31 = ((int32_t)((int32_t)L_29%(int32_t)(((int32_t)(((t121 *)L_30)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_31));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		t730* L_34 = V_6;
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
		V_6 = ((t730*)SZArrayNew(t730_TI_var, 0));
	}

IL_00d9:
	{
		t730* L_35 = V_4;
		t730* L_36 = V_6;
		V_8 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_35)->max_length)))+(int32_t)(((int32_t)(((t121 *)L_36)->max_length)))))));
		t730* L_37 = V_4;
		t730* L_38 = V_8;
		t730* L_39 = V_4;
		m5793(NULL, (t121 *)(t121 *)L_37, 0, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m5793_MI);
		t730* L_40 = V_6;
		t730* L_41 = V_8;
		t730* L_42 = V_4;
		t730* L_43 = V_6;
		m5793(NULL, (t121 *)(t121 *)L_40, 0, (t121 *)(t121 *)L_41, (((int32_t)(((t121 *)L_42)->max_length))), (((int32_t)(((t121 *)L_43)->max_length))), &m5793_MI);
		int32_t L_44 = V_2;
		V_9 = ((t730*)SZArrayNew(t730_TI_var, L_44));
		int32_t L_45 = p1;
		int32_t L_46 = V_1;
		int32_t L_47 = V_1;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45+(int32_t)L_46))-(int32_t)1))/(int32_t)L_47));
		V_11 = 1;
		goto IL_01f0;
	}

IL_0123:
	{
		t1368 * L_48 = V_0;
		t730* L_49 = p0;
		t730* L_50 = p0;
		t730* L_51 = p0;
		VirtFuncInvoker5< int32_t, t730*, int32_t, int32_t, t730*, int32_t >::Invoke(&m6914_MI, L_48, L_49, 0, (((int32_t)(((t121 *)L_50)->max_length))), L_51, 0);
		t1368 * L_52 = V_0;
		t730* L_53 = V_8;
		t730* L_54 = V_8;
		VirtFuncInvoker3< t730*, t730*, int32_t, int32_t >::Invoke(&m6915_MI, L_52, L_53, 0, (((int32_t)(((t121 *)L_54)->max_length))));
		t1368 * L_55 = V_0;
		t730* L_56 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m6916_MI, L_55);
		V_12 = L_56;
		t1368 * L_57 = V_0;
		VirtActionInvoker0::Invoke(&m6917_MI, L_57);
		V_13 = 1;
		goto IL_0167;
	}

IL_0152:
	{
		t1368 * L_58 = V_0;
		t730* L_59 = V_12;
		t730* L_60 = V_12;
		t730* L_61 = m6918(L_58, L_59, 0, (((int32_t)(((t121 *)L_60)->max_length))), &m6918_MI);
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
		t730* L_65 = V_9;
		int32_t L_66 = V_14;
		t730* L_67 = V_12;
		int32_t L_68 = V_14;
		t730* L_69 = V_12;
		int32_t L_70 = ((int32_t)((int32_t)L_68%(int32_t)(((int32_t)(((t121 *)L_69)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_66)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_70));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_018b:
	{
		int32_t L_72 = V_14;
		t730* L_73 = V_9;
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
		t730* L_74 = V_8;
		int32_t L_75 = V_15;
		int32_t L_76 = V_2;
		t730* L_77 = V_9;
		m8195(__this, L_74, ((int32_t)((int32_t)L_75*(int32_t)L_76)), L_77, &m8195_MI);
		int32_t L_78 = V_15;
		V_15 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01ac:
	{
		int32_t L_79 = V_15;
		t730* L_80 = V_8;
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
		t730* L_84 = V_12;
		t730* L_85 = V_3;
		int32_t L_86 = V_11;
		int32_t L_87 = V_1;
		t730* L_88 = V_3;
		int32_t L_89 = V_11;
		int32_t L_90 = V_1;
		m5793(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)1))*(int32_t)L_87)), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_88)->max_length)))-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_89-(int32_t)1))*(int32_t)L_90)))), &m5793_MI);
		goto IL_01ea;
	}

IL_01d7:
	{
		t730* L_91 = V_12;
		t730* L_92 = V_3;
		int32_t L_93 = V_11;
		int32_t L_94 = V_1;
		t730* L_95 = V_12;
		m5793(NULL, (t121 *)(t121 *)L_91, 0, (t121 *)(t121 *)L_92, ((int32_t)((int32_t)((int32_t)((int32_t)L_93-(int32_t)1))*(int32_t)L_94)), (((int32_t)(((t121 *)L_95)->max_length))), &m5793_MI);
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
		t730* L_99 = V_3;
		return L_99;
	}
}
extern MethodInfo m8197_MI;
extern "C" t730* m8197 (t1645 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1645_TI));
		t730* L_0 = ((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f0;
		int32_t L_1 = p0;
		t730* L_2 = m8196(__this, L_0, L_1, &m8196_MI);
		return L_2;
	}
}
extern MethodInfo m8198_MI;
extern "C" t730* m8198 (t1645 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1645_TI));
		t730* L_0 = ((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f1;
		int32_t L_1 = p0;
		t730* L_2 = m8196(__this, L_0, L_1, &m8196_MI);
		return L_2;
	}
}
extern MethodInfo m8199_MI;
extern "C" t730* m8199 (t1645 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1645_TI));
		t730* L_0 = ((t1645_SFs*)InitializedTypeInfo(&t1645_TI)->static_fields)->f2;
		int32_t L_1 = p0;
		t730* L_2 = m8196(__this, L_0, L_1, &m8196_MI);
		return L_2;
	}
}
#include "t1646.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1646_TI;
#include "t1646MD.h"

#include "t303.h"
#include "t729.h"
#include "t1647.h"
#include "t1656.h"
#include "t1234.h"
#include "t1170.h"
#include "t1650.h"
#include "t1648.h"
#include "t720.h"
#include "t169.h"
#include "t1352.h"
#include "t1652.h"
#include "t1216.h"
#include "t1637.h"
#include "t1217.h"
#include "t1638.h"
#include "t1531.h"
#include "t1532.h"
extern TypeInfo t729_TI;
extern TypeInfo t1234_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t1650_TI;
extern TypeInfo t137_TI;
extern TypeInfo t1647_TI;
extern TypeInfo t1644_TI;
extern TypeInfo t720_TI;
extern TypeInfo t1648_TI;
extern TypeInfo t169_TI;
extern TypeInfo t1425_TI;
extern TypeInfo t1216_TI;
extern TypeInfo t1352_TI;
extern TypeInfo t1652_TI;
extern TypeInfo t1637_TI;
extern TypeInfo t1638_TI;
extern TypeInfo t1531_TI;
extern TypeInfo t1532_TI;
#include "t729MD.h"
#include "t1234MD.h"
#include "t1170MD.h"
#include "t1644MD.h"
#include "t1656MD.h"
#include "t1650MD.h"
#include "t1647MD.h"
#include "t1654MD.h"
#include "t720MD.h"
#include "t1648MD.h"
#include "t169MD.h"
#include "t1652MD.h"
#include "t1216MD.h"
#include "t1637MD.h"
#include "t1638MD.h"
#include "t1532MD.h"
extern Il2CppType t720_0_0_0;
extern MethodInfo m2724_MI;
extern MethodInfo m8216_MI;
extern MethodInfo m2739_MI;
extern MethodInfo m6919_MI;
extern MethodInfo m6920_MI;
extern MethodInfo m5886_MI;
extern MethodInfo m5728_MI;
extern MethodInfo m361_MI;
extern MethodInfo m5881_MI;
extern MethodInfo m8271_MI;
extern MethodInfo m8263_MI;
extern MethodInfo m8291_MI;
extern MethodInfo m8293_MI;
extern MethodInfo m8221_MI;
extern MethodInfo m8245_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5727_MI;
extern MethodInfo m8242_MI;
extern MethodInfo m8200_MI;
extern MethodInfo m8206_MI;
extern MethodInfo m8204_MI;
extern MethodInfo m8259_MI;
extern MethodInfo m8261_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m8292_MI;
extern MethodInfo m8295_MI;
extern MethodInfo m2738_MI;
extern MethodInfo m8260_MI;
extern MethodInfo m8275_MI;
extern MethodInfo m8274_MI;
extern MethodInfo m8215_MI;
extern MethodInfo m8208_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m5778_MI;
extern MethodInfo m8214_MI;
extern MethodInfo m8297_MI;
extern MethodInfo m8211_MI;
extern MethodInfo m5735_MI;
extern MethodInfo m6922_MI;
extern MethodInfo m6923_MI;
extern MethodInfo m6924_MI;
extern MethodInfo m6925_MI;
extern MethodInfo m8209_MI;
extern MethodInfo m6926_MI;
extern MethodInfo m6927_MI;
extern MethodInfo m6928_MI;
extern MethodInfo m8298_MI;
extern MethodInfo m8299_MI;
extern MethodInfo m8210_MI;
extern MethodInfo m8207_MI;
extern MethodInfo m8246_MI;
extern MethodInfo m8240_MI;
extern MethodInfo m8227_MI;
extern MethodInfo m8225_MI;
extern MethodInfo m5788_MI;
extern MethodInfo m8241_MI;
extern MethodInfo m8135_MI;
extern MethodInfo m8212_MI;
extern MethodInfo m8140_MI;
extern MethodInfo m5738_MI;
extern MethodInfo m8139_MI;
extern MethodInfo m8134_MI;
extern MethodInfo m8213_MI;
extern MethodInfo m8142_MI;
extern MethodInfo m8143_MI;
extern MethodInfo m8145_MI;
extern MethodInfo m8146_MI;
extern MethodInfo m8144_MI;
extern MethodInfo m6929_MI;
extern MethodInfo m6930_MI;
extern Il2CppGenericMethod m5776_GM;
extern Il2CppGenericMethod m5777_GM;
extern Il2CppGenericMethod m5778_GM;


extern "C" void m8200 (t1646 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		int32_t L_0 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f0;
		__this->f8 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_1, &m5727_MI);
		__this->f2 = L_1;
		t1170 * L_2 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_2, &m5727_MI);
		__this->f3 = L_2;
		t1647 * L_3 = (t1647 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1647_TI));
		m8242(L_3, &m8242_MI);
		__this->f4 = L_3;
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		t1170 * L_4 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_4, &m5727_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m8201_MI;
extern "C" void m8201 (t1646 * __this, t730* p0, MethodInfo* method)
{
	{
		m8200(__this, &m8200_MI);
		m8206(__this, (t2*)NULL, &m8206_MI);
		t730* L_0 = p0;
		m8204(__this, L_0, &m8204_MI);
		return;
	}
}
extern MethodInfo m8202_MI;
extern "C" void m8202 (t1646 * __this, t730* p0, t2* p1, MethodInfo* method)
{
	{
		m8200(__this, &m8200_MI);
		t2* L_0 = p1;
		m8206(__this, L_0, &m8206_MI);
		t730* L_1 = p0;
		m8204(__this, L_1, &m8204_MI);
		return;
	}
}
extern MethodInfo m8203_MI;
extern "C" void m8203 (t9 * __this , MethodInfo* method)
{
	{
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f0 = ((int32_t)2000);
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f10 = ((int32_t)2147483647);
		return;
	}
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern MethodInfo* m5778_MI_var;
extern "C" void m8204 (t1646 * __this, t730* p0, MethodInfo* method)
{
	static bool m8204_init;
	if (!m8204_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m5778_MI_var = il2cpp_codegen_genericmethod_get_method(&m5778_GM);
		m8204_init = true;
	}
	t1644 * V_0 = {0};
	t1644 * V_1 = {0};
	t1656 * V_2 = {0};
	t1644 * V_3 = {0};
	t1644 * V_4 = {0};
	t1644 * V_5 = {0};
	t2* V_6 = {0};
	t730* V_7 = {0};
	t1644 * V_8 = {0};
	t1644 * V_9 = {0};
	t730* V_10 = {0};
	t730* V_11 = {0};
	t1644 * V_12 = {0};
	int32_t V_13 = 0;
	t1656 * V_14 = {0};
	t1644 * V_15 = {0};
	int32_t V_16 = 0;
	t1644 * V_17 = {0};
	t1648 * V_18 = {0};
	t1644 * V_19 = {0};
	int32_t V_20 = 0;
	t1644 * V_21 = {0};
	t2* V_22 = {0};
	t720 * V_23 = {0};
	int32_t V_24 = 0;
	{
		t730* L_0 = p0;
		t1644 * L_1 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_1, L_0, &m8259_MI);
		V_0 = L_1;
		t1644 * L_2 = V_0;
		uint8_t L_3 = m8261(L_2, &m8261_MI);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral856, &m2910_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1644 * L_5 = V_0;
		t1644 * L_6 = m8271(L_5, 0, &m8271_MI);
		V_1 = L_6;
		t1644 * L_7 = V_1;
		uint8_t L_8 = m8261(L_7, &m8261_MI);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		t563 * L_9 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_9, (t2*) &_stringLiteral857, &m2910_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0038:
	{
		t1644 * L_10 = V_0;
		t1644 * L_11 = m8271(L_10, 1, &m8271_MI);
		t1656 * L_12 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8292(L_12, L_11, &m8292_MI);
		V_2 = L_12;
		t1656 * L_13 = V_2;
		t2* L_14 = m8295(L_13, &m8295_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2738(NULL, L_14, (t2*) &_stringLiteral656, &m2738_MI);
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		t563 * L_16 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_16, (t2*) &_stringLiteral858, &m2910_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0062:
	{
		t1644 * L_17 = V_0;
		int32_t L_18 = m8260(L_17, &m8260_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_018b;
		}
	}
	{
		t1644 * L_19 = V_0;
		t1644 * L_20 = m8271(L_19, 2, &m8271_MI);
		V_3 = L_20;
		t1644 * L_21 = V_3;
		uint8_t L_22 = m8261(L_21, &m8261_MI);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			goto IL_008b;
		}
	}
	{
		t563 * L_23 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_23, (t2*) &_stringLiteral859, &m2910_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008b:
	{
		t1644 * L_24 = V_3;
		t1644 * L_25 = m8271(L_24, 0, &m8271_MI);
		V_4 = L_25;
		t1644 * L_26 = V_4;
		uint8_t L_27 = m8261(L_26, &m8261_MI);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_00aa;
		}
	}
	{
		t563 * L_28 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_28, (t2*) &_stringLiteral859, &m2910_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00aa:
	{
		t1644 * L_29 = V_4;
		t1644 * L_30 = m8271(L_29, 0, &m8271_MI);
		V_5 = L_30;
		t1644 * L_31 = V_5;
		t1644 * L_32 = m8271(L_31, 0, &m8271_MI);
		t2* L_33 = m8275(NULL, L_32, &m8275_MI);
		V_6 = L_33;
		t2* L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_35 = m2738(NULL, L_34, (t2*) &_stringLiteral662, &m2738_MI);
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		t563 * L_36 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_36, (t2*) &_stringLiteral860, &m2910_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00dc:
	{
		t1644 * L_37 = V_4;
		t1644 * L_38 = m8271(L_37, 1, &m8271_MI);
		t730* L_39 = m8263(L_38, &m8263_MI);
		V_7 = L_39;
		t1644 * L_40 = V_3;
		t1644 * L_41 = m8271(L_40, 1, &m8271_MI);
		V_8 = L_41;
		t1644 * L_42 = V_8;
		uint8_t L_43 = m8261(L_42, &m8261_MI);
		if ((((int32_t)L_43) == ((int32_t)4)))
		{
			goto IL_0109;
		}
	}
	{
		t563 * L_44 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_44, (t2*) &_stringLiteral861, &m2910_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0109:
	{
		__this->f8 = 1;
		t1644 * L_45 = V_3;
		int32_t L_46 = m8260(L_45, &m8260_MI);
		if ((((int32_t)L_46) <= ((int32_t)2)))
		{
			goto IL_0144;
		}
	}
	{
		t1644 * L_47 = V_3;
		t1644 * L_48 = m8271(L_47, 2, &m8271_MI);
		V_9 = L_48;
		t1644 * L_49 = V_9;
		uint8_t L_50 = m8261(L_49, &m8261_MI);
		if ((((int32_t)L_50) == ((int32_t)2)))
		{
			goto IL_0137;
		}
	}
	{
		t563 * L_51 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_51, (t2*) &_stringLiteral862, &m2910_MI);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_0137:
	{
		t1644 * L_52 = V_9;
		int32_t L_53 = m8274(NULL, L_52, &m8274_MI);
		__this->f8 = L_53;
	}

IL_0144:
	{
		t1656 * L_54 = V_2;
		t1644 * L_55 = m8293(L_54, &m8293_MI);
		t1644 * L_56 = m8271(L_55, 0, &m8271_MI);
		t730* L_57 = m8263(L_56, &m8263_MI);
		V_10 = L_57;
		t730* L_58 = (__this->f1);
		t1644 * L_59 = V_8;
		t730* L_60 = m8263(L_59, &m8263_MI);
		int32_t L_61 = (__this->f8);
		t730* L_62 = V_10;
		t730* L_63 = m8215(__this, L_58, L_60, L_61, L_62, &m8215_MI);
		V_11 = L_63;
		t730* L_64 = V_7;
		t730* L_65 = V_11;
		bool L_66 = m8208(__this, L_64, L_65, &m8208_MI);
		if (L_66)
		{
			goto IL_018b;
		}
	}
	{
		t1353 * L_67 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_67, (t2*) &_stringLiteral863, &m5796_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_018b:
	{
		t1656 * L_68 = V_2;
		t1644 * L_69 = m8293(L_68, &m8293_MI);
		t1644 * L_70 = m8271(L_69, 0, &m8271_MI);
		t730* L_71 = m8263(L_70, &m8263_MI);
		t1644 * L_72 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_72, L_71, &m8259_MI);
		V_12 = L_72;
		V_13 = 0;
		goto IL_02e1;
	}

IL_01ab:
	{
		t1644 * L_73 = V_12;
		int32_t L_74 = V_13;
		t1644 * L_75 = m8271(L_73, L_74, &m8271_MI);
		t1656 * L_76 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8292(L_76, L_75, &m8292_MI);
		V_14 = L_76;
		t1656 * L_77 = V_14;
		t2* L_78 = m8295(L_77, &m8295_MI);
		V_22 = L_78;
		t2* L_79 = V_22;
		if (!L_79)
		{
			goto IL_02d0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_80 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f11;
		if (L_80)
		{
			goto IL_0208;
		}
	}
	{
		t720 * L_81 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_81, 3, m5776_MI_var);
		V_23 = L_81;
		t720 * L_82 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_82, (t2*) &_stringLiteral656, 0);
		t720 * L_83 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_83, (t2*) &_stringLiteral864, 1);
		t720 * L_84 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_84, (t2*) &_stringLiteral865, 2);
		t720 * L_85 = V_23;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f11 = L_85;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_86 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f11;
		t2* L_87 = V_22;
		bool L_88 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_86, L_87, (&V_24));
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
		t1656 * L_90 = V_14;
		t1644 * L_91 = m8293(L_90, &m8293_MI);
		t1644 * L_92 = m8271(L_91, 0, &m8271_MI);
		t730* L_93 = m8263(L_92, &m8263_MI);
		t1644 * L_94 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_94, L_93, &m8259_MI);
		V_15 = L_94;
		V_16 = 0;
		goto IL_026a;
	}

IL_0251:
	{
		t1644 * L_95 = V_15;
		int32_t L_96 = V_16;
		t1644 * L_97 = m8271(L_95, L_96, &m8271_MI);
		V_17 = L_97;
		t1644 * L_98 = V_17;
		m8214(__this, L_98, &m8214_MI);
		int32_t L_99 = V_16;
		V_16 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_026a:
	{
		int32_t L_100 = V_16;
		t1644 * L_101 = V_15;
		int32_t L_102 = m8260(L_101, &m8260_MI);
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
		t1656 * L_103 = V_14;
		t1644 * L_104 = m8293(L_103, &m8293_MI);
		t1644 * L_105 = m8271(L_104, 0, &m8271_MI);
		t1648 * L_106 = (t1648 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1648_TI));
		m8297(L_106, L_105, &m8297_MI);
		V_18 = L_106;
		t1648 * L_107 = V_18;
		t730* L_108 = m8211(__this, L_107, &m8211_MI);
		t1644 * L_109 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_109, L_108, &m8259_MI);
		V_19 = L_109;
		V_20 = 0;
		goto IL_02b8;
	}

IL_029f:
	{
		t1644 * L_110 = V_19;
		int32_t L_111 = V_20;
		t1644 * L_112 = m8271(L_110, L_111, &m8271_MI);
		V_21 = L_112;
		t1644 * L_113 = V_21;
		m8214(__this, L_113, &m8214_MI);
		int32_t L_114 = V_20;
		V_20 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_115 = V_20;
		t1644 * L_116 = V_19;
		int32_t L_117 = m8260(L_116, &m8260_MI);
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
		t1346 * L_118 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m5774(L_118, (t2*) &_stringLiteral866, &m5774_MI);
		il2cpp_codegen_raise_exception(L_118);
	}

IL_02d0:
	{
		t563 * L_119 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_119, (t2*) &_stringLiteral867, &m2910_MI);
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
		t1644 * L_122 = V_12;
		int32_t L_123 = m8260(L_122, &m8260_MI);
		if ((((int32_t)L_121) < ((int32_t)L_123)))
		{
			goto IL_01ab;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8205_MI;
extern "C" void m8205 (t1646 * __this, MethodInfo* method)
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
			t730* L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_001c;
			}
		}

IL_0008:
		{
			t730* L_1 = (__this->f1);
			t730* L_2 = (__this->f1);
			m1162(NULL, (t121 *)(t121 *)L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))), &m1162_MI);
		}

IL_001c:
		{
			__this->f1 = (t730*)NULL;
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
extern TypeInfo* t730_TI_var;
extern "C" void m8206 (t1646 * __this, t2* p0, MethodInfo* method)
{
	static bool m8206_init;
	if (!m8206_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8206_init = true;
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
		int32_t L_2 = m2724(L_1, &m2724_MI);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2724(L_3, &m2724_MI);
		V_0 = L_4;
		V_1 = 0;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		int32_t L_6 = m8216(NULL, &m8216_MI);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = V_0;
		uint16_t L_9 = m2739(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2739_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		int32_t L_10 = m8216(NULL, &m8216_MI);
		V_0 = L_10;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))<<(int32_t)1))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_13 = m6919(NULL, &m6919_MI);
		t2* L_14 = p0;
		int32_t L_15 = V_0;
		t730* L_16 = (__this->f1);
		VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t730*, int32_t >::Invoke(&m6920_MI, L_13, L_14, 0, L_15, L_16, 0);
		goto IL_0065;
	}

IL_0059:
	{
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, 2));
	}

IL_0065:
	{
		goto IL_006e;
	}

IL_0067:
	{
		__this->f1 = (t730*)NULL;
	}

IL_006e:
	{
		return;
	}
}
extern "C" t1647 * m8207 (t1646 * __this, MethodInfo* method)
{
	t1643 * V_0 = {0};
	t9 * V_1 = {0};
	t1644 * V_2 = {0};
	t1644 * V_3 = {0};
	t1656 * V_4 = {0};
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
		t1647 * L_1 = (__this->f4);
		VirtActionInvoker0::Invoke(&m5886_MI, L_1);
		t1170 * L_2 = (__this->f9);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_2);
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
			V_0 = ((t1643 *)Castclass(L_5, InitializedTypeInfo(&t1643_TI)));
			t1643 * L_6 = V_0;
			t2* L_7 = m8187(L_6, &m8187_MI);
			bool L_8 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5881_MI, L_7, (t2*) &_stringLiteral855);
			if (!L_8)
			{
				goto IL_0081;
			}
		}

IL_0042:
		{
			t1643 * L_9 = V_0;
			t1644 * L_10 = m8188(L_9, &m8188_MI);
			V_2 = L_10;
			t1644 * L_11 = V_2;
			t1644 * L_12 = m8271(L_11, 1, &m8271_MI);
			V_3 = L_12;
			t1644 * L_13 = V_3;
			t730* L_14 = m8263(L_13, &m8263_MI);
			t1656 * L_15 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
			m8291(L_15, L_14, &m8291_MI);
			V_4 = L_15;
			t1647 * L_16 = (__this->f4);
			t1656 * L_17 = V_4;
			t1644 * L_18 = m8293(L_17, &m8293_MI);
			t1644 * L_19 = m8271(L_18, 0, &m8271_MI);
			t730* L_20 = m8263(L_19, &m8263_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
			t1650 * L_21 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
			m8221(L_21, L_20, &m8221_MI);
			m8245(L_16, L_21, &m8245_MI);
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
		t1647 * L_27 = (__this->f4);
		return L_27;
	}
}
extern "C" bool m8208 (t1646 * __this, t730* p0, t730* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t730* L_0 = p0;
		t730* L_1 = p1;
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
		t730* L_2 = p0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t730* L_5 = p1;
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
		t730* L_10 = p0;
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
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern MethodInfo* m5778_MI_var;
extern "C" t1434 * m8209 (t1646 * __this, t2* p0, t730* p1, int32_t p2, MethodInfo* method)
{
	static bool m8209_init;
	if (!m8209_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m5778_MI_var = il2cpp_codegen_genericmethod_get_method(&m5778_GM);
		m8209_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1645 * V_3 = {0};
	t1434 * V_4 = {0};
	t2* V_5 = {0};
	t720 * V_6 = {0};
	int32_t V_7 = 0;
	{
		V_0 = (t2*)NULL;
		V_1 = 8;
		V_2 = 8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1645_TI));
		t1645 * L_0 = (t1645 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1645_TI));
		m8189(L_0, &m8189_MI);
		V_3 = L_0;
		t1645 * L_1 = V_3;
		t730* L_2 = (__this->f1);
		m8193(L_1, L_2, &m8193_MI);
		t1645 * L_3 = V_3;
		t730* L_4 = p1;
		m8194(L_3, L_4, &m8194_MI);
		t1645 * L_5 = V_3;
		int32_t L_6 = p2;
		m8192(L_5, L_6, &m8192_MI);
		t2* L_7 = p0;
		V_5 = L_7;
		t2* L_8 = V_5;
		if (!L_8)
		{
			goto IL_024b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_9 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f12;
		if (L_9)
		{
			goto IL_00e9;
		}
	}
	{
		t720 * L_10 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_10, ((int32_t)12), m5776_MI_var);
		V_6 = L_10;
		t720 * L_11 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_11, (t2*) &_stringLiteral868, 0);
		t720 * L_12 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_12, (t2*) &_stringLiteral869, 1);
		t720 * L_13 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_13, (t2*) &_stringLiteral870, 2);
		t720 * L_14 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_14, (t2*) &_stringLiteral871, 3);
		t720 * L_15 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_15, (t2*) &_stringLiteral872, 4);
		t720 * L_16 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_16, (t2*) &_stringLiteral873, 5);
		t720 * L_17 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_17, (t2*) &_stringLiteral874, 6);
		t720 * L_18 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_18, (t2*) &_stringLiteral875, 7);
		t720 * L_19 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_19, (t2*) &_stringLiteral876, 8);
		t720 * L_20 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_20, (t2*) &_stringLiteral877, ((int32_t)9));
		t720 * L_21 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_21, (t2*) &_stringLiteral878, ((int32_t)10));
		t720 * L_22 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_22, (t2*) &_stringLiteral879, ((int32_t)11));
		t720 * L_23 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f12 = L_23;
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_24 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f12;
		t2* L_25 = V_5;
		bool L_26 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_24, L_25, (&V_7));
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
		t1645 * L_28 = V_3;
		m8191(L_28, (t2*) &_stringLiteral812, &m8191_MI);
		V_0 = (t2*) &_stringLiteral880;
		goto IL_025c;
	}

IL_014e:
	{
		t1645 * L_29 = V_3;
		m8191(L_29, (t2*) &_stringLiteral881, &m8191_MI);
		V_0 = (t2*) &_stringLiteral880;
		goto IL_025c;
	}

IL_0164:
	{
		t1645 * L_30 = V_3;
		m8191(L_30, (t2*) &_stringLiteral812, &m8191_MI);
		V_0 = (t2*) &_stringLiteral882;
		V_1 = 4;
		goto IL_025c;
	}

IL_017c:
	{
		t1645 * L_31 = V_3;
		m8191(L_31, (t2*) &_stringLiteral881, &m8191_MI);
		V_0 = (t2*) &_stringLiteral882;
		V_1 = 4;
		goto IL_025c;
	}

IL_0194:
	{
		t1645 * L_32 = V_3;
		m8191(L_32, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral880;
		goto IL_025c;
	}

IL_01aa:
	{
		t1645 * L_33 = V_3;
		m8191(L_33, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral882;
		V_1 = 4;
		goto IL_025c;
	}

IL_01c2:
	{
		t1645 * L_34 = V_3;
		m8191(L_34, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral884;
		V_1 = ((int32_t)16);
		V_2 = 0;
		goto IL_025c;
	}

IL_01dd:
	{
		t1645 * L_35 = V_3;
		m8191(L_35, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral884;
		V_1 = 5;
		V_2 = 0;
		goto IL_025c;
	}

IL_01f4:
	{
		t1645 * L_36 = V_3;
		m8191(L_36, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral885;
		V_1 = ((int32_t)24);
		goto IL_025c;
	}

IL_020a:
	{
		t1645 * L_37 = V_3;
		m8191(L_37, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral885;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0220:
	{
		t1645 * L_38 = V_3;
		m8191(L_38, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral882;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0236:
	{
		t1645 * L_39 = V_3;
		m8191(L_39, (t2*) &_stringLiteral883, &m8191_MI);
		V_0 = (t2*) &_stringLiteral882;
		V_1 = 5;
		goto IL_025c;
	}

IL_024b:
	{
		t2* L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m610(NULL, (t2*) &_stringLiteral886, L_40, &m610_MI);
		t169 * L_42 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_42, L_41, &m5735_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_025c:
	{
		t2* L_43 = V_0;
		t1434 * L_44 = m6922(NULL, L_43, &m6922_MI);
		V_4 = L_44;
		t1434 * L_45 = V_4;
		t1645 * L_46 = V_3;
		int32_t L_47 = V_1;
		t730* L_48 = m8197(L_46, L_47, &m8197_MI);
		VirtActionInvoker1< t730* >::Invoke(&m6923_MI, L_45, L_48);
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		t1434 * L_50 = V_4;
		t1645 * L_51 = V_3;
		int32_t L_52 = V_2;
		t730* L_53 = m8198(L_51, L_52, &m8198_MI);
		VirtActionInvoker1< t730* >::Invoke(&m6924_MI, L_50, L_53);
		t1434 * L_54 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(&m6925_MI, L_54, 1);
	}

IL_028c:
	{
		t1434 * L_55 = V_4;
		return L_55;
	}
}
extern "C" t730* m8210 (t1646 * __this, t2* p0, t730* p1, int32_t p2, t730* p3, MethodInfo* method)
{
	t1434 * V_0 = {0};
	t730* V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t1434 *)NULL;
		V_1 = (t730*)NULL;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		t2* L_0 = p0;
		t730* L_1 = p1;
		int32_t L_2 = p2;
		t1434 * L_3 = m8209(__this, L_0, L_1, L_2, &m8209_MI);
		V_0 = L_3;
		t1434 * L_4 = V_0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m6926_MI, L_4);
		V_2 = L_5;
		t9 * L_6 = V_2;
		t730* L_7 = p3;
		t730* L_8 = p3;
		t730* L_9 = (t730*)InterfaceFuncInvoker3< t730*, t730*, int32_t, int32_t >::Invoke(&m6927_MI, L_6, L_7, 0, (((int32_t)(((t121 *)L_8)->max_length))));
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
			t1434 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			t1434 * L_11 = V_0;
			m6928(L_11, &m6928_MI);
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
		t730* L_12 = V_1;
		return L_12;
	}
}
extern "C" t730* m8211 (t1646 * __this, t1648 * p0, MethodInfo* method)
{
	{
		t1648 * L_0 = p0;
		t1656 * L_1 = m8298(L_0, &m8298_MI);
		t2* L_2 = m8295(L_1, &m8295_MI);
		t1648 * L_3 = p0;
		t1656 * L_4 = m8298(L_3, &m8298_MI);
		t1644 * L_5 = m8293(L_4, &m8293_MI);
		t1644 * L_6 = m8271(L_5, 0, &m8271_MI);
		t730* L_7 = m8263(L_6, &m8263_MI);
		t1648 * L_8 = p0;
		t1656 * L_9 = m8298(L_8, &m8298_MI);
		t1644 * L_10 = m8293(L_9, &m8293_MI);
		t1644 * L_11 = m8271(L_10, 1, &m8271_MI);
		int32_t L_12 = m8274(NULL, L_11, &m8274_MI);
		t1648 * L_13 = p0;
		t730* L_14 = m8299(L_13, &m8299_MI);
		t730* L_15 = m8210(__this, L_2, L_7, L_12, L_14, &m8210_MI);
		return L_15;
	}
}
extern "C" t1352  m8212 (t1646 * __this, bool* p0, MethodInfo* method)
{
	t1650 * V_0 = {0};
	t1652 * V_1 = {0};
	t1216 * V_2 = {0};
	t1352  V_3 = {0};
	t9 * V_4 = {0};
	t1352  V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1647 * L_0 = m8207(__this, &m8207_MI);
		t1652 * L_1 = m8246(L_0, &m8246_MI);
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
			t1652 * L_2 = V_1;
			t1650 * L_3 = m8240(L_2, &m8240_MI);
			V_0 = L_3;
			t1650 * L_4 = V_0;
			t730* L_5 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m8227_MI, L_4);
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_001d:
		{
			t1650 * L_6 = V_0;
			t1216 * L_7 = m8225(L_6, &m8225_MI);
			V_2 = L_7;
			t1216 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_0027:
		{
			bool* L_9 = p0;
			*((int8_t*)(L_9)) = (int8_t)1;
			t1216 * L_10 = V_2;
			t1352  L_11 = (t1352 )VirtFuncInvoker1< t1352 , bool >::Invoke(&m5788_MI, L_10, 0);
			V_3 = L_11;
			IL2CPP_LEAVE(0x61, FINALLY_003e);
		}

IL_0034:
		{
			t1652 * L_12 = V_1;
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8241_MI, L_12);
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
			t1652 * L_14 = V_1;
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
		Initobj (InitializedTypeInfo(&t1352_TI), (&V_5));
		t1352  L_18 = V_5;
		return L_18;
	}

IL_0061:
	{
		t1352  L_19 = V_3;
		return L_19;
	}
}
extern "C" void m8213 (t1646 * __this, t1637 * p0, MethodInfo* method)
{
	t730* V_0 = {0};
	bool V_1 = false;
	t1352  V_2 = {0};
	uint8_t V_3 = 0x0;
	{
		t1637 * L_0 = p0;
		t730* L_1 = m8135(L_0, &m8135_MI);
		V_0 = L_1;
		t730* L_2 = V_0;
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
		t1352  L_6 = m8212(__this, (&V_1), &m8212_MI);
		V_2 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		t1170 * L_8 = (__this->f2);
		t730* L_9 = V_0;
		t1352  L_10 = V_2;
		t1216 * L_11 = m8140(NULL, L_9, L_10, &m8140_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_8, L_11);
	}

IL_0035:
	{
		goto IL_0060;
	}

IL_0037:
	{
		t1170 * L_12 = (__this->f2);
		t730* L_13 = V_0;
		t1217 * L_14 = m8139(NULL, L_13, &m8139_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_12, L_14);
		goto IL_0060;
	}

IL_004b:
	{
		t730* L_15 = V_0;
		t730* L_16 = V_0;
		m1162(NULL, (t121 *)(t121 *)L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))), &m1162_MI);
		t1353 * L_17 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_17, (t2*) &_stringLiteral887, &m5796_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0060:
	{
		t730* L_18 = V_0;
		t730* L_19 = V_0;
		m1162(NULL, (t121 *)(t121 *)L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))), &m1162_MI);
		return;
	}
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern MethodInfo* m5778_MI_var;
extern "C" void m8214 (t1646 * __this, t1644 * p0, MethodInfo* method)
{
	static bool m8214_init;
	if (!m8214_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m5778_MI_var = il2cpp_codegen_genericmethod_get_method(&m5778_GM);
		m8214_init = true;
	}
	t1644 * V_0 = {0};
	t1644 * V_1 = {0};
	t2* V_2 = {0};
	t1638 * V_3 = {0};
	t730* V_4 = {0};
	t1656 * V_5 = {0};
	t1650 * V_6 = {0};
	t730* V_7 = {0};
	t1644 * V_8 = {0};
	int32_t V_9 = 0;
	t1644 * V_10 = {0};
	t1644 * V_11 = {0};
	t2* V_12 = {0};
	t1644 * V_13 = {0};
	int32_t V_14 = 0;
	t1644 * V_15 = {0};
	t2* V_16 = {0};
	t720 * V_17 = {0};
	int32_t V_18 = 0;
	{
		t1644 * L_0 = p0;
		uint8_t L_1 = m8261(L_0, &m8261_MI);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)48))))
		{
			goto IL_0015;
		}
	}
	{
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_2, (t2*) &_stringLiteral888, &m2910_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		t1644 * L_3 = p0;
		t1644 * L_4 = m8271(L_3, 0, &m8271_MI);
		V_0 = L_4;
		t1644 * L_5 = V_0;
		uint8_t L_6 = m8261(L_5, &m8261_MI);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0031;
		}
	}
	{
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_7, (t2*) &_stringLiteral889, &m2910_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t1644 * L_8 = p0;
		t1644 * L_9 = m8271(L_8, 1, &m8271_MI);
		V_1 = L_9;
		t1644 * L_10 = V_0;
		t2* L_11 = m8275(NULL, L_10, &m8275_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_14 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f13;
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		t720 * L_15 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_15, 6, m5776_MI_var);
		V_17 = L_15;
		t720 * L_16 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_16, (t2*) &_stringLiteral853, 0);
		t720 * L_17 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_17, (t2*) &_stringLiteral854, 1);
		t720 * L_18 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_18, (t2*) &_stringLiteral855, 2);
		t720 * L_19 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_19, (t2*) &_stringLiteral890, 3);
		t720 * L_20 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_20, (t2*) &_stringLiteral891, 4);
		t720 * L_21 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_21, (t2*) &_stringLiteral892, 5);
		t720 * L_22 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f13 = L_22;
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_23 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f13;
		t2* L_24 = V_16;
		bool L_25 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_23, L_24, (&V_18));
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
		t1644 * L_27 = V_1;
		t730* L_28 = m8263(L_27, &m8263_MI);
		t1637 * L_29 = (t1637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1637_TI));
		m8134(L_29, L_28, &m8134_MI);
		m8213(__this, L_29, &m8213_MI);
		goto IL_01c0;
	}

IL_00fb:
	{
		t1644 * L_30 = V_1;
		t730* L_31 = m8263(L_30, &m8263_MI);
		t1638 * L_32 = (t1638 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1638_TI));
		m8142(L_32, L_31, &m8142_MI);
		V_3 = L_32;
		t1638 * L_33 = V_3;
		t2* L_34 = m8143(L_33, &m8143_MI);
		t1638 * L_35 = V_3;
		t730* L_36 = m8145(L_35, &m8145_MI);
		t1638 * L_37 = V_3;
		int32_t L_38 = m8146(L_37, &m8146_MI);
		t1638 * L_39 = V_3;
		t730* L_40 = m8144(L_39, &m8144_MI);
		t730* L_41 = m8210(__this, L_34, L_36, L_38, L_40, &m8210_MI);
		V_4 = L_41;
		t730* L_42 = V_4;
		t1637 * L_43 = (t1637 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1637_TI));
		m8134(L_43, L_42, &m8134_MI);
		m8213(__this, L_43, &m8213_MI);
		t730* L_44 = V_4;
		t730* L_45 = V_4;
		m1162(NULL, (t121 *)(t121 *)L_44, 0, (((int32_t)(((t121 *)L_45)->max_length))), &m1162_MI);
		goto IL_01c0;
	}

IL_0145:
	{
		t1644 * L_46 = V_1;
		t730* L_47 = m8263(L_46, &m8263_MI);
		t1656 * L_48 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8291(L_48, L_47, &m8291_MI);
		V_5 = L_48;
		t1656 * L_49 = V_5;
		t2* L_50 = m8295(L_49, &m8295_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_51 = m2738(NULL, L_50, (t2*) &_stringLiteral893, &m2738_MI);
		if (!L_51)
		{
			goto IL_0170;
		}
	}
	{
		t169 * L_52 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_52, (t2*) &_stringLiteral894, &m5735_MI);
		il2cpp_codegen_raise_exception(L_52);
	}

IL_0170:
	{
		t1656 * L_53 = V_5;
		t1644 * L_54 = m8293(L_53, &m8293_MI);
		t1644 * L_55 = m8271(L_54, 0, &m8271_MI);
		t730* L_56 = m8263(L_55, &m8263_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
		t1650 * L_57 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8221(L_57, L_56, &m8221_MI);
		V_6 = L_57;
		t1647 * L_58 = (__this->f4);
		t1650 * L_59 = V_6;
		m8245(L_58, L_59, &m8245_MI);
		goto IL_01c0;
	}

IL_0199:
	{
		goto IL_01c0;
	}

IL_019b:
	{
		t1644 * L_60 = V_1;
		t730* L_61 = m8263(L_60, &m8263_MI);
		V_7 = L_61;
		t1170 * L_62 = (__this->f3);
		t730* L_63 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_62, (t9 *)(t9 *)L_63);
		goto IL_01c0;
	}

IL_01b3:
	{
		goto IL_01c0;
	}

IL_01b5:
	{
		t563 * L_64 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_64, (t2*) &_stringLiteral895, &m2910_MI);
		il2cpp_codegen_raise_exception(L_64);
	}

IL_01c0:
	{
		t1644 * L_65 = p0;
		int32_t L_66 = m8260(L_65, &m8260_MI);
		if ((((int32_t)L_66) <= ((int32_t)2)))
		{
			goto IL_0308;
		}
	}
	{
		t1644 * L_67 = p0;
		t1644 * L_68 = m8271(L_67, 2, &m8271_MI);
		V_8 = L_68;
		t1644 * L_69 = V_8;
		uint8_t L_70 = m8261(L_69, &m8261_MI);
		if ((((int32_t)L_70) == ((int32_t)((int32_t)49))))
		{
			goto IL_01eb;
		}
	}
	{
		t563 * L_71 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_71, (t2*) &_stringLiteral896, &m2910_MI);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_01eb:
	{
		V_9 = 0;
		goto IL_02fa;
	}

IL_01f3:
	{
		t1644 * L_72 = V_8;
		int32_t L_73 = V_9;
		t1644 * L_74 = m8271(L_72, L_73, &m8271_MI);
		V_10 = L_74;
		t1644 * L_75 = V_10;
		uint8_t L_76 = m8261(L_75, &m8261_MI);
		if ((((int32_t)L_76) == ((int32_t)((int32_t)48))))
		{
			goto IL_0214;
		}
	}
	{
		t563 * L_77 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_77, (t2*) &_stringLiteral897, &m2910_MI);
		il2cpp_codegen_raise_exception(L_77);
	}

IL_0214:
	{
		t1644 * L_78 = V_10;
		t1644 * L_79 = m8271(L_78, 0, &m8271_MI);
		V_11 = L_79;
		t1644 * L_80 = V_11;
		uint8_t L_81 = m8261(L_80, &m8261_MI);
		if ((((int32_t)L_81) == ((int32_t)6)))
		{
			goto IL_0233;
		}
	}
	{
		t563 * L_82 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_82, (t2*) &_stringLiteral898, &m2910_MI);
		il2cpp_codegen_raise_exception(L_82);
	}

IL_0233:
	{
		t1644 * L_83 = V_11;
		t2* L_84 = m8275(NULL, L_83, &m8275_MI);
		V_12 = L_84;
		t1644 * L_85 = V_10;
		t1644 * L_86 = m8271(L_85, 1, &m8271_MI);
		V_13 = L_86;
		V_14 = 0;
		goto IL_02e6;
	}

IL_024e:
	{
		t1644 * L_87 = V_13;
		int32_t L_88 = V_14;
		t1644 * L_89 = m8271(L_87, L_88, &m8271_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_92 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f14;
		if (L_92)
		{
			goto IL_0294;
		}
	}
	{
		t720 * L_93 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_93, 2, m5776_MI_var);
		V_17 = L_93;
		t720 * L_94 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_94, (t2*) &_stringLiteral899, 0);
		t720 * L_95 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_95, (t2*) &_stringLiteral900, 1);
		t720 * L_96 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f14 = L_96;
	}

IL_0294:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		t720 * L_97 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f14;
		t2* L_98 = V_16;
		bool L_99 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_97, L_98, (&V_18));
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
		t1644 * L_102 = V_15;
		uint8_t L_103 = m8261(L_102, &m8261_MI);
		if ((((int32_t)L_103) == ((int32_t)((int32_t)30))))
		{
			goto IL_02c5;
		}
	}
	{
		t563 * L_104 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_104, (t2*) &_stringLiteral901, &m2910_MI);
		il2cpp_codegen_raise_exception(L_104);
	}

IL_02c5:
	{
		goto IL_02e0;
	}

IL_02c7:
	{
		t1644 * L_105 = V_15;
		uint8_t L_106 = m8261(L_105, &m8261_MI);
		if ((((int32_t)L_106) == ((int32_t)4)))
		{
			goto IL_02dc;
		}
	}
	{
		t563 * L_107 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_107, (t2*) &_stringLiteral901, &m2910_MI);
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
		t1644 * L_110 = V_13;
		int32_t L_111 = m8260(L_110, &m8260_MI);
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
		t1644 * L_114 = V_8;
		int32_t L_115 = m8260(L_114, &m8260_MI);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_01f3;
		}
	}

IL_0308:
	{
		t1170 * L_116 = (__this->f9);
		t2* L_117 = V_2;
		t1644 * L_118 = p0;
		t1643 * L_119 = (t1643 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1643_TI));
		m8186(L_119, L_117, L_118, &m8186_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_116, L_119);
		return;
	}
}
extern "C" t730* m8215 (t1646 * __this, t730* p0, t730* p1, int32_t p2, t730* p3, MethodInfo* method)
{
	t1645 * V_0 = {0};
	t1531 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1645_TI));
		t1645 * L_0 = (t1645 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1645_TI));
		m8189(L_0, &m8189_MI);
		V_0 = L_0;
		t1645 * L_1 = V_0;
		m8191(L_1, (t2*) &_stringLiteral883, &m8191_MI);
		t1645 * L_2 = V_0;
		t730* L_3 = p0;
		m8193(L_2, L_3, &m8193_MI);
		t1645 * L_4 = V_0;
		t730* L_5 = p1;
		m8194(L_4, L_5, &m8194_MI);
		t1645 * L_6 = V_0;
		int32_t L_7 = p2;
		m8192(L_6, L_7, &m8192_MI);
		t1532 * L_8 = m6929(NULL, &m6929_MI);
		V_1 = ((t1531 *)Castclass(L_8, InitializedTypeInfo(&t1531_TI)));
		t1531 * L_9 = V_1;
		t1645 * L_10 = V_0;
		t730* L_11 = m8199(L_10, ((int32_t)20), &m8199_MI);
		VirtActionInvoker1< t730* >::Invoke(&m6930_MI, L_9, L_11);
		t1531 * L_12 = V_1;
		t730* L_13 = p3;
		t730* L_14 = p3;
		t730* L_15 = m6918(L_12, L_13, 0, (((int32_t)(((t121 *)L_14)->max_length))), &m6918_MI);
		return L_15;
	}
}
extern "C" int32_t m8216 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1646_TI));
		int32_t L_0 = ((t1646_SFs*)InitializedTypeInfo(&t1646_TI)->static_fields)->f10;
		return L_0;
	}
}
#include "t1649.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1649_TI;
#include "t1649MD.h"

#include "t2161.h"
#include "t2154.h"
extern TypeInfo t312_TI;
extern TypeInfo t303_TI;
extern Il2CppType t312_0_0_0;
extern MethodInfo m8220_MI;
extern MethodInfo m8266_MI;
extern MethodInfo m2758_MI;
extern MethodInfo m6931_MI;
extern MethodInfo m5829_MI;
extern MethodInfo m4274_MI;
extern MethodInfo m6932_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m4446_MI;
extern MethodInfo m399_MI;
extern FieldInfo t2172_f15_FieldInfo;
extern FieldInfo t2172_f16_FieldInfo;
extern FieldInfo t2172_f17_FieldInfo;
extern FieldInfo t2172_f18_FieldInfo;


extern MethodInfo m8217_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8217 (t9 * __this , MethodInfo* method)
{
	static bool m8217_init;
	if (!m8217_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8217_init = true;
	}
	{
		t730* L_0 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)((int32_t)85);
		t730* L_1 = L_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 1)) = (uint8_t)4;
		t730* L_2 = L_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 2)) = (uint8_t)6;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f0 = L_2;
		t730* L_3 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 0)) = (uint8_t)((int32_t)85);
		t730* L_4 = L_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)4;
		t730* L_5 = L_4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)((int32_t)10);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f1 = L_5;
		t730* L_6 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 0)) = (uint8_t)((int32_t)85);
		t730* L_7 = L_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 1)) = (uint8_t)4;
		t730* L_8 = L_7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 2)) = (uint8_t)((int32_t)11);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f2 = L_8;
		t730* L_9 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)((int32_t)85);
		t730* L_10 = L_9;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 1)) = (uint8_t)4;
		t730* L_11 = L_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)3;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f3 = L_11;
		t730* L_12 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 0)) = (uint8_t)((int32_t)85);
		t730* L_13 = L_12;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 1)) = (uint8_t)4;
		t730* L_14 = L_13;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 2)) = (uint8_t)7;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f4 = L_14;
		t730* L_15 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 0)) = (uint8_t)((int32_t)85);
		t730* L_16 = L_15;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, 1)) = (uint8_t)4;
		t730* L_17 = L_16;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 2)) = (uint8_t)8;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f5 = L_17;
		t730* L_18 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 0)) = (uint8_t)((int32_t)85);
		t730* L_19 = L_18;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)4;
		t730* L_20 = L_19;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 2)) = (uint8_t)((int32_t)9);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f6 = L_20;
		t730* L_21 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)10)));
		m1123(NULL, (t121 *)(t121 *)L_21, LoadFieldToken(&t2172_f15_FieldInfo), &m1123_MI);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f7 = L_21;
		t730* L_22 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)10)));
		m1123(NULL, (t121 *)(t121 *)L_22, LoadFieldToken(&t2172_f16_FieldInfo), &m1123_MI);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f8 = L_22;
		t730* L_23 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)9)));
		m1123(NULL, (t121 *)(t121 *)L_23, LoadFieldToken(&t2172_f17_FieldInfo), &m1123_MI);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f9 = L_23;
		t730* L_24 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_24, 0)) = (uint8_t)((int32_t)85);
		t730* L_25 = L_24;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 1)) = (uint8_t)4;
		t730* L_26 = L_25;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, 2)) = (uint8_t)((int32_t)46);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f10 = L_26;
		t730* L_27 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 0)) = (uint8_t)((int32_t)85);
		t730* L_28 = L_27;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_28, 1)) = (uint8_t)4;
		t730* L_29 = L_28;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 2)) = (uint8_t)((int32_t)12);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f11 = L_29;
		t730* L_30 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, 0)) = (uint8_t)((int32_t)85);
		t730* L_31 = L_30;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 1)) = (uint8_t)4;
		t730* L_32 = L_31;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, 2)) = (uint8_t)4;
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f12 = L_32;
		t730* L_33 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, 0)) = (uint8_t)((int32_t)85);
		t730* L_34 = L_33;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 1)) = (uint8_t)4;
		t730* L_35 = L_34;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 2)) = (uint8_t)((int32_t)42);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f13 = L_35;
		t730* L_36 = ((t730*)SZArrayNew(t730_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 0)) = (uint8_t)((int32_t)85);
		t730* L_37 = L_36;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, 1)) = (uint8_t)4;
		t730* L_38 = L_37;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, 2)) = (uint8_t)((int32_t)43);
		((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f14 = L_38;
		return;
	}
}
extern MethodInfo m8218_MI;
extern "C" t2* m8218 (t9 * __this , t1644 * p0, MethodInfo* method)
{
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	t1644 * V_2 = {0};
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0035;
	}

IL_000a:
	{
		t1644 * L_1 = p0;
		int32_t L_2 = V_1;
		t1644 * L_3 = m8271(L_1, L_2, &m8271_MI);
		V_2 = L_3;
		t322 * L_4 = V_0;
		t1644 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		m8220(NULL, L_4, L_5, 1, &m8220_MI);
		int32_t L_6 = V_1;
		t1644 * L_7 = p0;
		int32_t L_8 = m8260(L_7, &m8260_MI);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0031;
		}
	}
	{
		t322 * L_9 = V_0;
		m1170(L_9, (t2*) &_stringLiteral383, &m1170_MI);
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		t1644 * L_12 = p0;
		int32_t L_13 = m8260(L_12, &m8260_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		t322 * L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_14);
		return L_15;
	}
}
extern MethodInfo m8219_MI;
extern "C" t2* m8219 (t9 * __this , t1644 * p0, bool p1, t2* p2, bool p3, MethodInfo* method)
{
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	t1644 * V_2 = {0};
	int32_t V_3 = 0;
	t1644 * V_4 = {0};
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		t1644 * L_2 = p0;
		int32_t L_3 = m8260(L_2, &m8260_MI);
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_0034;
	}

IL_0014:
	{
		t1644 * L_4 = p0;
		int32_t L_5 = V_1;
		t1644 * L_6 = m8271(L_4, L_5, &m8271_MI);
		V_2 = L_6;
		t322 * L_7 = V_0;
		t1644 * L_8 = V_2;
		bool L_9 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		m8220(NULL, L_7, L_8, L_9, &m8220_MI);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t322 * L_11 = V_0;
		t2* L_12 = p2;
		m1170(L_11, L_12, &m1170_MI);
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
		t1644 * L_15 = p0;
		int32_t L_16 = V_3;
		t1644 * L_17 = m8271(L_15, L_16, &m8271_MI);
		V_4 = L_17;
		t322 * L_18 = V_0;
		t1644 * L_19 = V_4;
		bool L_20 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		m8220(NULL, L_18, L_19, L_20, &m8220_MI);
		int32_t L_21 = V_3;
		t1644 * L_22 = p0;
		int32_t L_23 = m8260(L_22, &m8260_MI);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)((int32_t)L_23-(int32_t)1)))))
		{
			goto IL_0063;
		}
	}
	{
		t322 * L_24 = V_0;
		t2* L_25 = p2;
		m1170(L_24, L_25, &m1170_MI);
	}

IL_0063:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_3;
		t1644 * L_28 = p0;
		int32_t L_29 = m8260(L_28, &m8260_MI);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003e;
		}
	}

IL_0070:
	{
		t322 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_30);
		return L_31;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" void m8220 (t9 * __this , t322 * p0, t1644 * p1, bool p2, MethodInfo* method)
{
	static bool m8220_init;
	if (!m8220_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8220_init = true;
	}
	int32_t V_0 = 0;
	t1644 * V_1 = {0};
	t1644 * V_2 = {0};
	t1644 * V_3 = {0};
	t2* V_4 = {0};
	t322 * V_5 = {0};
	int32_t V_6 = 0;
	t312* V_7 = {0};
	{
		V_0 = 0;
		goto IL_0305;
	}

IL_0007:
	{
		t1644 * L_0 = p1;
		int32_t L_1 = V_0;
		t1644 * L_2 = m8271(L_0, L_1, &m8271_MI);
		V_1 = L_2;
		t1644 * L_3 = V_1;
		t1644 * L_4 = m8271(L_3, 1, &m8271_MI);
		V_2 = L_4;
		t1644 * L_5 = V_2;
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
		t1644 * L_6 = V_1;
		t1644 * L_7 = m8271(L_6, 0, &m8271_MI);
		V_3 = L_7;
		t1644 * L_8 = V_3;
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
		t1644 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_10 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f0;
		bool L_11 = m8266(L_9, L_10, &m8266_MI);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t322 * L_12 = p0;
		m1170(L_12, (t2*) &_stringLiteral902, &m1170_MI);
		goto IL_020d;
	}

IL_004d:
	{
		t1644 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_14 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f1;
		bool L_15 = m8266(L_13, L_14, &m8266_MI);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		t322 * L_16 = p0;
		m1170(L_16, (t2*) &_stringLiteral903, &m1170_MI);
		goto IL_020d;
	}

IL_006b:
	{
		t1644 * L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_18 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f2;
		bool L_19 = m8266(L_17, L_18, &m8266_MI);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		t322 * L_20 = p0;
		m1170(L_20, (t2*) &_stringLiteral904, &m1170_MI);
		goto IL_020d;
	}

IL_0089:
	{
		t1644 * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_22 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f3;
		bool L_23 = m8266(L_21, L_22, &m8266_MI);
		if (!L_23)
		{
			goto IL_00a7;
		}
	}
	{
		t322 * L_24 = p0;
		m1170(L_24, (t2*) &_stringLiteral905, &m1170_MI);
		goto IL_020d;
	}

IL_00a7:
	{
		t1644 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_26 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f4;
		bool L_27 = m8266(L_25, L_26, &m8266_MI);
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		t322 * L_28 = p0;
		m1170(L_28, (t2*) &_stringLiteral906, &m1170_MI);
		goto IL_020d;
	}

IL_00c5:
	{
		t1644 * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_30 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f5;
		bool L_31 = m8266(L_29, L_30, &m8266_MI);
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		t322 * L_32 = p0;
		m1170(L_32, (t2*) &_stringLiteral907, &m1170_MI);
		goto IL_020d;
	}

IL_00e3:
	{
		t1644 * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_34 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f6;
		bool L_35 = m8266(L_33, L_34, &m8266_MI);
		if (!L_35)
		{
			goto IL_0101;
		}
	}
	{
		t322 * L_36 = p0;
		m1170(L_36, (t2*) &_stringLiteral908, &m1170_MI);
		goto IL_020d;
	}

IL_0101:
	{
		t1644 * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_38 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f7;
		bool L_39 = m8266(L_37, L_38, &m8266_MI);
		if (!L_39)
		{
			goto IL_011f;
		}
	}
	{
		t322 * L_40 = p0;
		m1170(L_40, (t2*) &_stringLiteral909, &m1170_MI);
		goto IL_020d;
	}

IL_011f:
	{
		t1644 * L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_42 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f8;
		bool L_43 = m8266(L_41, L_42, &m8266_MI);
		if (!L_43)
		{
			goto IL_013d;
		}
	}
	{
		t322 * L_44 = p0;
		m1170(L_44, (t2*) &_stringLiteral910, &m1170_MI);
		goto IL_020d;
	}

IL_013d:
	{
		t1644 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_46 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f9;
		bool L_47 = m8266(L_45, L_46, &m8266_MI);
		if (!L_47)
		{
			goto IL_015b;
		}
	}
	{
		t322 * L_48 = p0;
		m1170(L_48, (t2*) &_stringLiteral911, &m1170_MI);
		goto IL_020d;
	}

IL_015b:
	{
		t1644 * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_50 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f10;
		bool L_51 = m8266(L_49, L_50, &m8266_MI);
		if (!L_51)
		{
			goto IL_0179;
		}
	}
	{
		t322 * L_52 = p0;
		m1170(L_52, (t2*) &_stringLiteral912, &m1170_MI);
		goto IL_020d;
	}

IL_0179:
	{
		t1644 * L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_54 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f11;
		bool L_55 = m8266(L_53, L_54, &m8266_MI);
		if (!L_55)
		{
			goto IL_0197;
		}
	}
	{
		t322 * L_56 = p0;
		m1170(L_56, (t2*) &_stringLiteral913, &m1170_MI);
		goto IL_020d;
	}

IL_0197:
	{
		t1644 * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_58 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f12;
		bool L_59 = m8266(L_57, L_58, &m8266_MI);
		if (!L_59)
		{
			goto IL_01b2;
		}
	}
	{
		t322 * L_60 = p0;
		m1170(L_60, (t2*) &_stringLiteral914, &m1170_MI);
		goto IL_020d;
	}

IL_01b2:
	{
		t1644 * L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_62 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f13;
		bool L_63 = m8266(L_61, L_62, &m8266_MI);
		if (!L_63)
		{
			goto IL_01cd;
		}
	}
	{
		t322 * L_64 = p0;
		m1170(L_64, (t2*) &_stringLiteral915, &m1170_MI);
		goto IL_020d;
	}

IL_01cd:
	{
		t1644 * L_65 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t730* L_66 = ((t1649_SFs*)InitializedTypeInfo(&t1649_TI)->static_fields)->f14;
		bool L_67 = m8266(L_65, L_66, &m8266_MI);
		if (!L_67)
		{
			goto IL_01e8;
		}
	}
	{
		t322 * L_68 = p0;
		m1170(L_68, (t2*) &_stringLiteral916, &m1170_MI);
		goto IL_020d;
	}

IL_01e8:
	{
		t322 * L_69 = p0;
		m1170(L_69, (t2*) &_stringLiteral917, &m1170_MI);
		t322 * L_70 = p0;
		t1644 * L_71 = V_3;
		t2* L_72 = m8275(NULL, L_71, &m8275_MI);
		m1170(L_70, L_72, &m1170_MI);
		t322 * L_73 = p0;
		m1170(L_73, (t2*) &_stringLiteral250, &m1170_MI);
	}

IL_020d:
	{
		V_4 = (t2*)NULL;
		t1644 * L_74 = V_2;
		uint8_t L_75 = m8261(L_74, &m8261_MI);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0258;
		}
	}
	{
		t322 * L_76 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_76, &m1166_MI);
		V_5 = L_76;
		V_6 = 1;
		goto IL_023e;
	}

IL_0226:
	{
		t322 * L_77 = V_5;
		t1644 * L_78 = V_2;
		t730* L_79 = m8263(L_78, &m8263_MI);
		int32_t L_80 = V_6;
		int32_t L_81 = L_80;
		m2758(L_77, (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_79, L_81)))), &m2758_MI);
		int32_t L_82 = V_6;
		V_6 = ((int32_t)((int32_t)L_82+(int32_t)2));
	}

IL_023e:
	{
		int32_t L_83 = V_6;
		t1644 * L_84 = V_2;
		t730* L_85 = m8263(L_84, &m8263_MI);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)(((t121 *)L_85)->max_length))))))
		{
			goto IL_0226;
		}
	}
	{
		t322 * L_86 = V_5;
		t2* L_87 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_86);
		V_4 = L_87;
		goto IL_02e1;
	}

IL_0258:
	{
		t1644 * L_88 = V_2;
		uint8_t L_89 = m8261(L_88, &m8261_MI);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0276;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_90 = m6931(NULL, &m6931_MI);
		t1644 * L_91 = V_2;
		t730* L_92 = m8263(L_91, &m8263_MI);
		t2* L_93 = (t2*)VirtFuncInvoker1< t2*, t730* >::Invoke(&m5829_MI, L_90, L_92);
		V_4 = L_93;
		goto IL_0288;
	}

IL_0276:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_94 = m4274(NULL, &m4274_MI);
		t1644 * L_95 = V_2;
		t730* L_96 = m8263(L_95, &m8263_MI);
		t2* L_97 = (t2*)VirtFuncInvoker1< t2*, t730* >::Invoke(&m5829_MI, L_94, L_96);
		V_4 = L_97;
	}

IL_0288:
	{
		t312* L_98 = ((t312*)SZArrayNew(t312_TI_var, 7));
		m1123(NULL, (t121 *)(t121 *)L_98, LoadFieldToken(&t2172_f18_FieldInfo), &m1123_MI);
		V_7 = L_98;
		bool L_99 = p2;
		if (!L_99)
		{
			goto IL_02e1;
		}
	}
	{
		t2* L_100 = V_4;
		t312* L_101 = V_7;
		t2* L_102 = V_4;
		int32_t L_103 = m2724(L_102, &m2724_MI);
		int32_t L_104 = m6932(L_100, L_101, 0, L_103, &m6932_MI);
		if ((((int32_t)L_104) > ((int32_t)0)))
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_105 = V_4;
		bool L_106 = m4280(L_105, (t2*) &_stringLiteral163, &m4280_MI);
		if (L_106)
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_107 = V_4;
		bool L_108 = m4446(L_107, (t2*) &_stringLiteral163, &m4446_MI);
		if (!L_108)
		{
			goto IL_02e1;
		}
	}

IL_02ce:
	{
		t2* L_109 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_110 = m399(NULL, (t2*) &_stringLiteral239, L_109, (t2*) &_stringLiteral239, &m399_MI);
		V_4 = L_110;
	}

IL_02e1:
	{
		t322 * L_111 = p0;
		t2* L_112 = V_4;
		m1170(L_111, L_112, &m1170_MI);
		int32_t L_113 = V_0;
		t1644 * L_114 = p1;
		int32_t L_115 = m8260(L_114, &m8260_MI);
		if ((((int32_t)L_113) >= ((int32_t)((int32_t)((int32_t)L_115-(int32_t)1)))))
		{
			goto IL_0301;
		}
	}
	{
		t322 * L_116 = p0;
		m1170(L_116, (t2*) &_stringLiteral383, &m1170_MI);
	}

IL_0301:
	{
		int32_t L_117 = V_0;
		V_0 = ((int32_t)((int32_t)L_117+(int32_t)1));
	}

IL_0305:
	{
		int32_t L_118 = V_0;
		t1644 * L_119 = p1;
		int32_t L_120 = m8260(L_119, &m8260_MI);
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

#include "t1351.h"
#include "t270.h"
#include "t138.h"
#include "t1651.h"
#include "t1100.h"
#include "t1101.h"
extern TypeInfo t1351_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1651_TI;
#include "t1351MD.h"
#include "t1651MD.h"
#include "t1100MD.h"
extern MethodInfo m8224_MI;
extern MethodInfo m5801_MI;
extern MethodInfo m5790_MI;
extern MethodInfo m8236_MI;
extern MethodInfo m5800_MI;
extern MethodInfo m8223_MI;
extern MethodInfo m6936_MI;
extern MethodInfo m8272_MI;
extern MethodInfo m8276_MI;
extern MethodInfo m8268_MI;
extern MethodInfo m8262_MI;
extern MethodInfo m8255_MI;
extern MethodInfo m5744_MI;
extern MethodInfo m4267_MI;
extern MethodInfo m4282_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m2740_MI;
extern MethodInfo m6943_MI;


extern "C" void m8221 (t1650 * __this, t730* p0, MethodInfo* method)
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
		t730* L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t730* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t730* L_2 = p0;
		int32_t L_3 = 0;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))) == ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		t730* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
		t730* L_5 = m8236(NULL, (t2*) &_stringLiteral926, L_4, &m8236_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
		t2* L_6 = ((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20;
		t138 * L_7 = V_0;
		t1353 * L_8 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5800(L_8, L_6, L_7, &m5800_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		t730* L_9 = p0;
		m8223(__this, L_9, &m8223_MI);
	}

IL_003d:
	{
		return;
	}
}
extern MethodInfo m8222_MI;
extern "C" void m8222 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral927, &m7847_MI);
		((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20 = L_0;
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8223 (t1650 * __this, t730* p0, MethodInfo* method)
{
	static bool m8223_init;
	if (!m8223_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8223_init = true;
	}
	t1644 * V_0 = {0};
	int32_t V_1 = 0;
	t1644 * V_2 = {0};
	t1644 * V_3 = {0};
	t1644 * V_4 = {0};
	t1644 * V_5 = {0};
	t1644 * V_6 = {0};
	t1644 * V_7 = {0};
	t1644 * V_8 = {0};
	t1644 * V_9 = {0};
	t1644 * V_10 = {0};
	t1644 * V_11 = {0};
	int32_t V_12 = 0;
	t730* V_13 = {0};
	t1644 * V_14 = {0};
	t1644 * V_15 = {0};
	t1644 * V_16 = {0};
	t138 * V_17 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1650 * G_B11_0 = {0};
	t1650 * G_B10_0 = {0};
	t730* G_B12_0 = {0};
	t1650 * G_B12_1 = {0};

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t730* L_0 = p0;
			t1644 * L_1 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
			m8259(L_1, L_0, &m8259_MI);
			__this->f0 = L_1;
			t1644 * L_2 = (__this->f0);
			uint8_t L_3 = m8261(L_2, &m8261_MI);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
			t2* L_4 = ((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20;
			t1353 * L_5 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
			m5796(L_5, L_4, &m5796_MI);
			il2cpp_codegen_raise_exception(L_5);
		}

IL_0026:
		{
			t1644 * L_6 = (__this->f0);
			t1644 * L_7 = m8271(L_6, 0, &m8271_MI);
			uint8_t L_8 = m8261(L_7, &m8261_MI);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
			t2* L_9 = ((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20;
			t1353 * L_10 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
			m5796(L_10, L_9, &m5796_MI);
			il2cpp_codegen_raise_exception(L_10);
		}

IL_0046:
		{
			t1644 * L_11 = (__this->f0);
			t1644 * L_12 = m8271(L_11, 0, &m8271_MI);
			V_0 = L_12;
			V_1 = 0;
			t1644 * L_13 = (__this->f0);
			t1644 * L_14 = m8271(L_13, 0, &m8271_MI);
			int32_t L_15 = V_1;
			t1644 * L_16 = m8271(L_14, L_15, &m8271_MI);
			V_2 = L_16;
			__this->f15 = 1;
			t1644 * L_17 = V_2;
			uint8_t L_18 = m8261(L_17, &m8261_MI);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			t1644 * L_19 = V_2;
			int32_t L_20 = m8260(L_19, &m8260_MI);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00a4;
			}
		}

IL_0085:
		{
			int32_t L_21 = (__this->f15);
			t1644 * L_22 = V_2;
			t1644 * L_23 = m8271(L_22, 0, &m8271_MI);
			t730* L_24 = m8263(L_23, &m8263_MI);
			int32_t L_25 = 0;
			__this->f15 = ((int32_t)((int32_t)L_21+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25))));
			int32_t L_26 = V_1;
			V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_00a4:
		{
			t1644 * L_27 = (__this->f0);
			t1644 * L_28 = m8271(L_27, 0, &m8271_MI);
			int32_t L_29 = V_1;
			int32_t L_30 = L_29;
			V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
			t1644 * L_31 = m8271(L_28, L_30, &m8271_MI);
			V_3 = L_31;
			t1644 * L_32 = V_3;
			uint8_t L_33 = m8261(L_32, &m8261_MI);
			if ((((int32_t)L_33) == ((int32_t)2)))
			{
				goto IL_00cf;
			}
		}

IL_00c4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
			t2* L_34 = ((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20;
			t1353 * L_35 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
			m5796(L_35, L_34, &m5796_MI);
			il2cpp_codegen_raise_exception(L_35);
		}

IL_00cf:
		{
			t1644 * L_36 = V_3;
			t730* L_37 = m8263(L_36, &m8263_MI);
			__this->f16 = L_37;
			t730* L_38 = (__this->f16);
			t730* L_39 = (__this->f16);
			m6936(NULL, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m6936_MI);
			int32_t L_40 = V_1;
			V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
			t1644 * L_41 = V_0;
			int32_t L_42 = V_1;
			int32_t L_43 = L_42;
			V_1 = ((int32_t)((int32_t)L_43+(int32_t)1));
			t1644 * L_44 = m8272(L_41, L_43, ((int32_t)48), &m8272_MI);
			__this->f4 = L_44;
			t1644 * L_45 = (__this->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
			t2* L_46 = m8218(NULL, L_45, &m8218_MI);
			__this->f5 = L_46;
			t1644 * L_47 = V_0;
			int32_t L_48 = V_1;
			int32_t L_49 = L_48;
			V_1 = ((int32_t)((int32_t)L_49+(int32_t)1));
			t1644 * L_50 = m8272(L_47, L_49, ((int32_t)48), &m8272_MI);
			V_4 = L_50;
			t1644 * L_51 = V_4;
			t1644 * L_52 = m8271(L_51, 0, &m8271_MI);
			V_5 = L_52;
			t1644 * L_53 = V_5;
			t270  L_54 = m8276(NULL, L_53, &m8276_MI);
			__this->f2 = L_54;
			t1644 * L_55 = V_4;
			t1644 * L_56 = m8271(L_55, 1, &m8271_MI);
			V_6 = L_56;
			t1644 * L_57 = V_6;
			t270  L_58 = m8276(NULL, L_57, &m8276_MI);
			__this->f3 = L_58;
			t1644 * L_59 = V_0;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			V_1 = ((int32_t)((int32_t)L_61+(int32_t)1));
			t1644 * L_62 = m8272(L_59, L_61, ((int32_t)48), &m8272_MI);
			__this->f8 = L_62;
			t1644 * L_63 = (__this->f8);
			t2* L_64 = m8218(NULL, L_63, &m8218_MI);
			__this->f9 = L_64;
			t1644 * L_65 = V_0;
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			V_1 = ((int32_t)((int32_t)L_67+(int32_t)1));
			t1644 * L_68 = m8272(L_65, L_67, ((int32_t)48), &m8272_MI);
			V_7 = L_68;
			t1644 * L_69 = V_7;
			t1644 * L_70 = m8272(L_69, 0, ((int32_t)48), &m8272_MI);
			V_8 = L_70;
			t1644 * L_71 = V_8;
			t1644 * L_72 = m8272(L_71, 0, 6, &m8272_MI);
			V_9 = L_72;
			t1644 * L_73 = V_9;
			t2* L_74 = m8275(NULL, L_73, &m8275_MI);
			__this->f6 = L_74;
			t1644 * L_75 = V_8;
			t1644 * L_76 = m8271(L_75, 1, &m8271_MI);
			V_10 = L_76;
			t1644 * L_77 = V_8;
			int32_t L_78 = m8260(L_77, &m8260_MI);
			G_B10_0 = __this;
			if ((((int32_t)L_78) <= ((int32_t)1)))
			{
				G_B11_0 = __this;
				goto IL_01c9;
			}
		}

IL_01c0:
		{
			t1644 * L_79 = V_10;
			t730* L_80 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m8268_MI, L_79);
			G_B12_0 = L_80;
			G_B12_1 = G_B10_0;
			goto IL_01ca;
		}

IL_01c9:
		{
			G_B12_0 = ((t730*)(NULL));
			G_B12_1 = G_B11_0;
		}

IL_01ca:
		{
			G_B12_1->f7 = G_B12_0;
			t1644 * L_81 = V_7;
			t1644 * L_82 = m8272(L_81, 1, 3, &m8272_MI);
			V_11 = L_82;
			t1644 * L_83 = V_11;
			int32_t L_84 = m8262(L_83, &m8262_MI);
			V_12 = ((int32_t)((int32_t)L_84-(int32_t)1));
			int32_t L_85 = V_12;
			__this->f10 = ((t730*)SZArrayNew(t730_TI_var, L_85));
			t1644 * L_86 = V_11;
			t730* L_87 = m8263(L_86, &m8263_MI);
			t730* L_88 = (__this->f10);
			int32_t L_89 = V_12;
			m5793(NULL, (t121 *)(t121 *)L_87, 1, (t121 *)(t121 *)L_88, 0, L_89, &m5793_MI);
			t1644 * L_90 = (__this->f0);
			t1644 * L_91 = m8271(L_90, 2, &m8271_MI);
			t730* L_92 = m8263(L_91, &m8263_MI);
			V_13 = L_92;
			t730* L_93 = V_13;
			__this->f11 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_93)->max_length)))-(int32_t)1))));
			t730* L_94 = V_13;
			t730* L_95 = (__this->f11);
			t730* L_96 = (__this->f11);
			m5793(NULL, (t121 *)(t121 *)L_94, 1, (t121 *)(t121 *)L_95, 0, (((int32_t)(((t121 *)L_96)->max_length))), &m5793_MI);
			t1644 * L_97 = (__this->f0);
			t1644 * L_98 = m8271(L_97, 1, &m8271_MI);
			V_8 = L_98;
			t1644 * L_99 = V_8;
			t1644 * L_100 = m8272(L_99, 0, 6, &m8272_MI);
			V_9 = L_100;
			t1644 * L_101 = V_9;
			t2* L_102 = m8275(NULL, L_101, &m8275_MI);
			__this->f12 = L_102;
			t1644 * L_103 = V_8;
			t1644 * L_104 = m8271(L_103, 1, &m8271_MI);
			V_10 = L_104;
			t1644 * L_105 = V_10;
			if (!L_105)
			{
				goto IL_0286;
			}
		}

IL_0277:
		{
			t1644 * L_106 = V_10;
			t730* L_107 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m8268_MI, L_106);
			__this->f13 = L_107;
			goto IL_028d;
		}

IL_0286:
		{
			__this->f13 = (t730*)NULL;
		}

IL_028d:
		{
			t1644 * L_108 = V_0;
			int32_t L_109 = V_1;
			t1644 * L_110 = m8272(L_108, L_109, ((int32_t)129), &m8272_MI);
			V_14 = L_110;
			t1644 * L_111 = V_14;
			if (!L_111)
			{
				goto IL_02b0;
			}
		}

IL_029f:
		{
			int32_t L_112 = V_1;
			V_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
			t1644 * L_113 = V_14;
			t730* L_114 = m8263(L_113, &m8263_MI);
			__this->f17 = L_114;
		}

IL_02b0:
		{
			t1644 * L_115 = V_0;
			int32_t L_116 = V_1;
			t1644 * L_117 = m8272(L_115, L_116, ((int32_t)130), &m8272_MI);
			V_15 = L_117;
			t1644 * L_118 = V_15;
			if (!L_118)
			{
				goto IL_02d3;
			}
		}

IL_02c2:
		{
			int32_t L_119 = V_1;
			V_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
			t1644 * L_120 = V_15;
			t730* L_121 = m8263(L_120, &m8263_MI);
			__this->f18 = L_121;
		}

IL_02d3:
		{
			t1644 * L_122 = V_0;
			int32_t L_123 = V_1;
			t1644 * L_124 = m8272(L_122, L_123, ((int32_t)163), &m8272_MI);
			V_16 = L_124;
			t1644 * L_125 = V_16;
			if (!L_125)
			{
				goto IL_0304;
			}
		}

IL_02e5:
		{
			t1644 * L_126 = V_16;
			int32_t L_127 = m8260(L_126, &m8260_MI);
			if ((!(((uint32_t)L_127) == ((uint32_t)1))))
			{
				goto IL_0304;
			}
		}

IL_02ef:
		{
			t1644 * L_128 = V_16;
			t1644 * L_129 = m8271(L_128, 0, &m8271_MI);
			t1651 * L_130 = (t1651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1651_TI));
			m8255(L_130, L_129, &m8255_MI);
			__this->f19 = L_130;
			goto IL_0310;
		}

IL_0304:
		{
			t1651 * L_131 = (t1651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1651_TI));
			m8255(L_131, (t1644 *)NULL, &m8255_MI);
			__this->f19 = L_131;
		}

IL_0310:
		{
			t730* L_132 = p0;
			t9 * L_133 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_132);
			__this->f1 = ((t730*)Castclass(L_133, t730_TI_var));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1650_TI));
		t2* L_134 = ((t1650_SFs*)InitializedTypeInfo(&t1650_TI)->static_fields)->f20;
		t138 * L_135 = V_17;
		t1353 * L_136 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5800(L_136, L_134, L_135, &m5800_MI);
		il2cpp_codegen_raise_exception(L_136);
		goto IL_0334;
	} // end catch (depth: 1)

IL_0334:
	{
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8224 (t1650 * __this, t730* p0, MethodInfo* method)
{
	static bool m8224_init;
	if (!m8224_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8224_init = true;
	}
	int32_t V_0 = 0;
	t730* V_1 = {0};
	{
		t730* L_0 = p0;
		int32_t L_1 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)))
		{
			goto IL_001e;
		}
	}
	{
		t730* L_2 = p0;
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)1));
		int32_t L_3 = V_0;
		V_1 = ((t730*)SZArrayNew(t730_TI_var, L_3));
		t730* L_4 = p0;
		t730* L_5 = V_1;
		int32_t L_6 = V_0;
		m5793(NULL, (t121 *)(t121 *)L_4, 1, (t121 *)(t121 *)L_5, 0, L_6, &m5793_MI);
		t730* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		t730* L_8 = p0;
		return L_8;
	}
}
extern "C" t1216 * m8225 (t1650 * __this, MethodInfo* method)
{
	t1352  V_0 = {0};
	t1644 * V_1 = {0};
	t1644 * V_2 = {0};
	{
		t730* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1353 * L_1 = (t1353 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1353_TI));
		m5796(L_1, (t2*) &_stringLiteral918, &m5796_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1216 * L_2 = (__this->f14);
		if (L_2)
		{
			goto IL_0113;
		}
	}
	{
		Initobj (InitializedTypeInfo(&t1352_TI), (&V_0));
		t730* L_3 = (__this->f10);
		t1644 * L_4 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_4, L_3, &m8259_MI);
		V_1 = L_4;
		t1644 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		t1644 * L_6 = V_1;
		uint8_t L_7 = m8261(L_6, &m8261_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return (t1216 *)NULL;
	}

IL_0040:
	{
		t1644 * L_8 = V_1;
		t730* L_9 = m8263(L_8, &m8263_MI);
		t730* L_10 = m8224(__this, L_9, &m8224_MI);
		(&V_0)->f7 = L_10;
		t730* L_11 = (__this->f7);
		t1644 * L_12 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_12, L_11, &m8259_MI);
		V_2 = L_12;
		t1644 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t1644 * L_14 = V_2;
		uint8_t L_15 = m8261(L_14, &m8261_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0075;
		}
	}
	{
		t1644 * L_16 = V_2;
		int32_t L_17 = m8260(L_16, &m8260_MI);
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0077;
		}
	}

IL_0075:
	{
		return (t1216 *)NULL;
	}

IL_0077:
	{
		t1644 * L_18 = V_2;
		t1644 * L_19 = m8271(L_18, 0, &m8271_MI);
		uint8_t L_20 = m8261(L_19, &m8261_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1644 * L_21 = V_2;
		t1644 * L_22 = m8271(L_21, 1, &m8271_MI);
		uint8_t L_23 = m8261(L_22, &m8261_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1644 * L_24 = V_2;
		t1644 * L_25 = m8271(L_24, 2, &m8271_MI);
		uint8_t L_26 = m8261(L_25, &m8261_MI);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00a6;
		}
	}

IL_00a4:
	{
		return (t1216 *)NULL;
	}

IL_00a6:
	{
		t1644 * L_27 = V_2;
		t1644 * L_28 = m8271(L_27, 0, &m8271_MI);
		t730* L_29 = m8263(L_28, &m8263_MI);
		t730* L_30 = m8224(__this, L_29, &m8224_MI);
		(&V_0)->f3 = L_30;
		t1644 * L_31 = V_2;
		t1644 * L_32 = m8271(L_31, 1, &m8271_MI);
		t730* L_33 = m8263(L_32, &m8263_MI);
		t730* L_34 = m8224(__this, L_33, &m8224_MI);
		(&V_0)->f4 = L_34;
		t1644 * L_35 = V_2;
		t1644 * L_36 = m8271(L_35, 2, &m8271_MI);
		t730* L_37 = m8263(L_36, &m8263_MI);
		t730* L_38 = m8224(__this, L_37, &m8224_MI);
		(&V_0)->f1 = L_38;
		t730* L_39 = ((&V_0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1351_TI));
		t1351 * L_40 = (t1351 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1351_TI));
		m5801(L_40, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_39)->max_length)))<<(int32_t)3)), &m5801_MI);
		__this->f14 = L_40;
		t1216 * L_41 = (__this->f14);
		t1352  L_42 = V_0;
		VirtActionInvoker1< t1352  >::Invoke(&m5790_MI, L_41, L_42);
	}

IL_0113:
	{
		t1216 * L_43 = (__this->f14);
		return L_43;
	}
}
extern MethodInfo m8226_MI;
extern "C" t2* m8226 (t1650 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8227 (t1650 * __this, MethodInfo* method)
{
	static bool m8227_init;
	if (!m8227_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8227_init = true;
	}
	{
		t730* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t730*)NULL;
	}

IL_000a:
	{
		t730* L_1 = (__this->f7);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		return ((t730*)Castclass(L_2, t730_TI_var));
	}
}
extern MethodInfo m8228_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m8228 (t1650 * __this, MethodInfo* method)
{
	static bool m8228_init;
	if (!m8228_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8228_init = true;
	}
	{
		t730* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t730*)NULL;
	}

IL_000a:
	{
		t730* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		return ((t730*)Castclass(L_2, t730_TI_var));
	}
}
extern MethodInfo m8229_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m8229 (t1650 * __this, MethodInfo* method)
{
	static bool m8229_init;
	if (!m8229_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8229_init = true;
	}
	{
		t730* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t730*)NULL;
	}

IL_000a:
	{
		t730* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		return ((t730*)Castclass(L_2, t730_TI_var));
	}
}
extern MethodInfo m8230_MI;
extern "C" t2* m8230 (t1650 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8231_MI;
extern "C" t270  m8231 (t1650 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8232_MI;
extern "C" t270  m8232 (t1650 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8233_MI;
extern "C" t1644 * m8233 (t1650 * __this, MethodInfo* method)
{
	{
		t1644 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8234_MI;
extern "C" t1644 * m8234 (t1650 * __this, MethodInfo* method)
{
	{
		t1644 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8235_MI;
extern "C" void m8235 (t1650 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t730* L_1 = (__this->f1);
		m5744(L_0, (t2*) &_stringLiteral931, (t9 *)(t9 *)L_1, &m5744_MI);
		return;
	}
}
extern "C" t730* m8236 (t9 * __this , t2* p0, t730* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_0 = m4267(NULL, &m4267_MI);
		t730* L_1 = p1;
		t2* L_2 = (t2*)VirtFuncInvoker1< t2*, t730* >::Invoke(&m5829_MI, L_0, L_1);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m590(NULL, (t2*) &_stringLiteral932, L_3, &m590_MI);
		V_1 = L_4;
		t2* L_5 = p0;
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral933, L_5, &m590_MI);
		V_2 = L_6;
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = m4282(L_7, L_8, &m4282_MI);
		t2* L_10 = V_1;
		int32_t L_11 = m2724(L_10, &m2724_MI);
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)L_11));
		t2* L_12 = V_0;
		t2* L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = m4447(L_12, L_13, L_14, &m4447_MI);
		V_4 = L_15;
		t2* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		t2* L_20 = m2740(L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2740_MI);
		V_5 = L_20;
		t2* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t730* L_22 = m6943(NULL, L_21, &m6943_MI);
		return L_22;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t665_TI;
extern MethodInfo m4369_MI;


extern MethodInfo m8237_MI;
extern "C" void m8237 (t1652 * __this, t1647 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1647 * L_0 = p0;
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4369_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m8238_MI;
extern "C" t9 * m8238 (t1652 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8239_MI;
extern "C" bool m8239 (t1652 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_0);
		return L_1;
	}
}
extern "C" t1650 * m8240 (t1652 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return ((t1650 *)Castclass(L_1, InitializedTypeInfo(&t1650_TI)));
	}
}
extern "C" bool m8241 (t1652 * __this, MethodInfo* method)
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

extern MethodInfo m5848_MI;
extern MethodInfo m5725_MI;
extern MethodInfo m5855_MI;
extern MethodInfo m672_MI;


extern "C" void m8242 (t1647 * __this, MethodInfo* method)
{
	{
		m5855(__this, &m5855_MI);
		return;
	}
}
extern MethodInfo m8243_MI;
extern "C" t9 * m8243 (t1647 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8244_MI;
extern "C" t1650 * m8244 (t1647 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return ((t1650 *)Castclass(L_2, InitializedTypeInfo(&t1650_TI)));
	}
}
extern "C" int32_t m8245 (t1647 * __this, t1650 * p0, MethodInfo* method)
{
	{
		t1650 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral606, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1170 * L_2 = m5848(__this, &m5848_MI);
		t1650 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_2, L_3);
		return L_4;
	}
}
extern "C" t1652 * m8246 (t1647 * __this, MethodInfo* method)
{
	{
		t1652 * L_0 = (t1652 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1652_TI));
		m8237(L_0, __this, &m8237_MI);
		return L_0;
	}
}
extern MethodInfo m8247_MI;
extern "C" int32_t m8247 (t1647 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_0);
		return L_1;
	}
}
#include "t1653.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1653_TI;
#include "t1653MD.h"

#include "t901.h"
extern TypeInfo t901_TI;
extern TypeInfo t906_TI;
#include "t901MD.h"
#include "t575MD.h"
#include "t893MD.h"
extern MethodInfo m8264_MI;
extern MethodInfo m8267_MI;
extern MethodInfo m8249_MI;
extern MethodInfo m4232_MI;
extern MethodInfo m4359_MI;
extern MethodInfo m6898_MI;
extern MethodInfo m6945_MI;
extern MethodInfo m5804_MI;
extern MethodInfo m8252_MI;


extern MethodInfo m8248_MI;
extern "C" void m8248 (t1653 * __this, t1644 * p0, MethodInfo* method)
{
	t1644 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1653 * G_B7_0 = {0};
	t1653 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t1653 * G_B8_1 = {0};
	{
		m336(__this, &m336_MI);
		t1644 * L_0 = p0;
		uint8_t L_1 = m8261(L_0, &m8261_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1644 * L_2 = p0;
		int32_t L_3 = m8260(L_2, &m8260_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0019:
	{
		t2* L_4 = m7847(NULL, (t2*) &_stringLiteral939, &m7847_MI);
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_5, L_4, &m2910_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t1644 * L_6 = p0;
		t1644 * L_7 = m8271(L_6, 0, &m8271_MI);
		uint8_t L_8 = m8261(L_7, &m8261_MI);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0048;
		}
	}
	{
		t2* L_9 = m7847(NULL, (t2*) &_stringLiteral939, &m7847_MI);
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_10, L_9, &m2910_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0048:
	{
		t1644 * L_11 = p0;
		t1644 * L_12 = m8271(L_11, 0, &m8271_MI);
		t2* L_13 = m8275(NULL, L_12, &m8275_MI);
		__this->f0 = L_13;
		t1644 * L_14 = p0;
		t1644 * L_15 = m8271(L_14, 1, &m8271_MI);
		uint8_t L_16 = m8261(L_15, &m8261_MI);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_0081;
		}
	}
	{
		t1644 * L_17 = p0;
		t1644 * L_18 = m8271(L_17, 1, &m8271_MI);
		t730* L_19 = m8263(L_18, &m8263_MI);
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
		t1644 * L_21 = p0;
		t1644 * L_22 = p0;
		int32_t L_23 = m8260(L_22, &m8260_MI);
		t1644 * L_24 = m8271(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m8271_MI);
		__this->f2 = L_24;
		t1644 * L_25 = (__this->f2);
		uint8_t L_26 = m8261(L_25, &m8261_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		t1644 * L_27 = (__this->f2);
		int32_t L_28 = m8262(L_27, &m8262_MI);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		t1644 * L_29 = (__this->f2);
		int32_t L_30 = m8260(L_29, &m8260_MI);
		if (L_30)
		{
			goto IL_00f3;
		}
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		t1644 * L_31 = (__this->f2);
		t730* L_32 = m8263(L_31, &m8263_MI);
		t1644 * L_33 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_33, L_32, &m8259_MI);
		V_0 = L_33;
		t1644 * L_34 = (__this->f2);
		m8264(L_34, (t730*)(t730*)NULL, &m8264_MI);
		t1644 * L_35 = (__this->f2);
		t1644 * L_36 = V_0;
		m8267(L_35, L_36, &m8267_MI);
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
		VirtActionInvoker0::Invoke(&m8249_MI, __this);
		return;
	}
}
extern "C" void m8249 (t1653 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8250_MI;
extern "C" bool m8250 (t1653 * __this, t9 * p0, MethodInfo* method)
{
	t1653 * V_0 = {0};
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
		V_0 = ((t1653 *)IsInst(L_1, InitializedTypeInfo(&t1653_TI)));
		t1653 * L_2 = V_0;
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
		t1653 * L_4 = V_0;
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
		t1653 * L_7 = V_0;
		t2* L_8 = (L_7->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_9 = m2738(NULL, L_6, L_8, &m2738_MI);
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
		t1644 * L_10 = (__this->f2);
		int32_t L_11 = m8262(L_10, &m8262_MI);
		t1653 * L_12 = V_0;
		t1644 * L_13 = (L_12->f2);
		int32_t L_14 = m8262(L_13, &m8262_MI);
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
		t1644 * L_15 = (__this->f2);
		int32_t L_16 = V_1;
		t1644 * L_17 = m8271(L_15, L_16, &m8271_MI);
		t1653 * L_18 = V_0;
		t1644 * L_19 = (L_18->f2);
		int32_t L_20 = V_1;
		t1644 * L_21 = m8271(L_19, L_20, &m8271_MI);
		if ((((t9*)(t1644 *)L_17) == ((t9*)(t1644 *)L_21)))
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
		t1644 * L_24 = (__this->f2);
		int32_t L_25 = m8262(L_24, &m8262_MI);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		return 1;
	}
}
extern MethodInfo m8251_MI;
extern "C" int32_t m8251 (t1653 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, L_0);
		return L_1;
	}
}
extern "C" void m8252 (t1653 * __this, t322 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t730* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		t1644 * L_0 = (__this->f2);
		t730* L_1 = m8263(L_0, &m8263_MI);
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
		t322 * L_5 = p0;
		t730* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_9 = m4359(NULL, &m4359_MI);
		t2* L_10 = m6898(((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)), (t2*) &_stringLiteral574, L_9, &m6898_MI);
		m1170(L_5, L_10, &m1170_MI);
		t322 * L_11 = p0;
		m1170(L_11, (t2*) &_stringLiteral163, &m1170_MI);
		goto IL_0051;
	}

IL_0045:
	{
		t322 * L_12 = p0;
		m1170(L_12, (t2*) &_stringLiteral941, &m1170_MI);
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
		t322 * L_15 = p0;
		m1170(L_15, (t2*) &_stringLiteral942, &m1170_MI);
		int32_t L_16 = p2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		t730* L_17 = V_0;
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
		t322 * L_22 = p0;
		m1170(L_22, (t2*) &_stringLiteral135, &m1170_MI);
		goto IL_0096;
	}

IL_0088:
	{
		t322 * L_23 = p0;
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		uint16_t L_25 = m6945(NULL, L_24, &m6945_MI);
		m2758(L_23, L_25, &m2758_MI);
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
		t322 * L_29 = p0;
		t2* L_30 = m5804(NULL, &m5804_MI);
		m1170(L_29, L_30, &m1170_MI);
		return;
	}
}
extern MethodInfo m8253_MI;
extern "C" t2* m8253 (t1653 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		t1644 * L_1 = (__this->f2);
		int32_t L_2 = m8262(L_1, &m8262_MI);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		t1644 * L_3 = (__this->f2);
		int32_t L_4 = m8262(L_3, &m8262_MI);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		t322 * L_6 = V_0;
		int32_t L_7 = V_3;
		m8252(__this, L_6, 8, L_7, &m8252_MI);
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
		t322 * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		m8252(__this, L_12, L_13, L_14, &m8252_MI);
		t322 * L_15 = V_0;
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_15);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t138MD.h"
extern MethodInfo m8254_MI;
extern MethodInfo m379_MI;


extern "C" void m8254 (t1651 * __this, MethodInfo* method)
{
	{
		m5855(__this, &m5855_MI);
		return;
	}
}
extern "C" void m8255 (t1651 * __this, t1644 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1653 * V_1 = {0};
	{
		m8254(__this, &m8254_MI);
		__this->f1 = 1;
		t1644 * L_0 = p0;
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
		t1644 * L_1 = p0;
		uint8_t L_2 = m8261(L_1, &m8261_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral943, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		t1644 * L_4 = p0;
		int32_t L_5 = V_0;
		t1644 * L_6 = m8271(L_4, L_5, &m8271_MI);
		t1653 * L_7 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8248(L_7, L_6, &m8248_MI);
		V_1 = L_7;
		t1170 * L_8 = m5848(__this, &m5848_MI);
		t1653 * L_9 = V_1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		t1644 * L_12 = p0;
		int32_t L_13 = m8260(L_12, &m8260_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8256_MI;
extern "C" t9 * m8256 (t1651 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5723_MI;
extern MethodInfo m8258_MI;
extern MethodInfo m8269_MI;
extern MethodInfo m8265_MI;
extern MethodInfo m8270_MI;
extern MethodInfo m5821_MI;
extern MethodInfo m5842_MI;
extern MethodInfo m5751_MI;
extern MethodInfo m6890_MI;


extern MethodInfo m8257_MI;
extern "C" void m8257 (t1644 * __this, uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		m8258(__this, L_0, (t730*)(t730*)NULL, &m8258_MI);
		return;
	}
}
extern "C" void m8258 (t1644 * __this, uint8_t p0, t730* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		t730* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8259 (t1644 * __this, t730* p0, MethodInfo* method)
{
	static bool m8259_init;
	if (!m8259_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8259_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t730* L_0 = p0;
		int32_t L_1 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1));
		V_0 = 0;
		t730* L_2 = p0;
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
		t730* L_8 = p0;
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
		m5735(L_15, (t2*) &_stringLiteral782, &m5735_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0058:
	{
		int32_t L_16 = V_1;
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, L_16));
		t730* L_17 = p0;
		int32_t L_18 = V_0;
		t730* L_19 = (__this->f1);
		int32_t L_20 = V_1;
		m5793(NULL, (t121 *)(t121 *)L_17, ((int32_t)((int32_t)2+(int32_t)L_18)), (t121 *)(t121 *)L_19, 0, L_20, &m5793_MI);
		uint8_t L_21 = (__this->f0);
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_0;
		V_3 = ((int32_t)((int32_t)2+(int32_t)L_22));
		t730* L_23 = p0;
		t730* L_24 = p0;
		m8269(__this, L_23, (&V_3), (((int32_t)(((t121 *)L_24)->max_length))), &m8269_MI);
	}

IL_0092:
	{
		return;
	}
}
extern "C" int32_t m8260 (t1644 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f2);
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
		t1170 * L_1 = (__this->f2);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_1);
		return L_2;
	}
}
extern "C" uint8_t m8261 (t1644 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m8262 (t1644 * __this, MethodInfo* method)
{
	{
		t730* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t730* L_1 = (__this->f1);
		return (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0011:
	{
		return 0;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8263 (t1644 * __this, MethodInfo* method)
{
	static bool m8263_init;
	if (!m8263_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8263_init = true;
	}
	{
		t730* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VirtFuncInvoker0< t730* >::Invoke(&m8268_MI, __this);
	}

IL_000f:
	{
		t730* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		return ((t730*)Castclass(L_2, t730_TI_var));
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8264 (t1644 * __this, t730* p0, MethodInfo* method)
{
	static bool m8264_init;
	if (!m8264_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8264_init = true;
	}
	{
		t730* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t730* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		__this->f1 = ((t730*)Castclass(L_2, t730_TI_var));
	}

IL_0014:
	{
		return;
	}
}
extern "C" bool m8265 (t1644 * __this, t730* p0, t730* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		t730* L_0 = p0;
		t730* L_1 = p1;
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
		t730* L_3 = p0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t730* L_6 = p1;
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
		t730* L_11 = p0;
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
extern "C" bool m8266 (t1644 * __this, t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = (__this->f1);
		t730* L_1 = p0;
		bool L_2 = m8265(__this, L_0, L_1, &m8265_MI);
		return L_2;
	}
}
extern "C" t1644 * m8267 (t1644 * __this, t1644 * p0, MethodInfo* method)
{
	{
		t1644 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t1170 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_2 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_2, &m5727_MI);
		__this->f2 = L_2;
	}

IL_0016:
	{
		t1170 * L_3 = (__this->f2);
		t1644 * L_4 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_3, L_4);
	}

IL_0023:
	{
		t1644 * L_5 = p0;
		return L_5;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8268 (t1644 * __this, MethodInfo* method)
{
	static bool m8268_init;
	if (!m8268_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8268_init = true;
	}
	t730* V_0 = {0};
	int32_t V_1 = 0;
	t1170 * V_2 = {0};
	t1644 * V_3 = {0};
	t9 * V_4 = {0};
	t730* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t730* V_8 = {0};
	t730* V_9 = {0};
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
		V_0 = (t730*)NULL;
		int32_t L_0 = m8260(__this, &m8260_MI);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_1, &m5727_MI);
		V_2 = L_1;
		t1170 * L_2 = (__this->f2);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_2);
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
			V_3 = ((t1644 *)Castclass(L_5, InitializedTypeInfo(&t1644_TI)));
			t1644 * L_6 = V_3;
			t730* L_7 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m8268_MI, L_6);
			V_5 = L_7;
			t1170 * L_8 = V_2;
			t730* L_9 = V_5;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_8, (t9 *)(t9 *)L_9);
			int32_t L_10 = V_1;
			t730* L_11 = V_5;
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
		V_0 = ((t730*)SZArrayNew(t730_TI_var, L_17));
		V_6 = 0;
		V_7 = 0;
		goto IL_00a7;
	}

IL_007a:
	{
		t1170 * L_18 = V_2;
		int32_t L_19 = V_7;
		t9 * L_20 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_18, L_19);
		V_8 = ((t730*)Castclass(L_20, t730_TI_var));
		t730* L_21 = V_8;
		t730* L_22 = V_0;
		int32_t L_23 = V_6;
		t730* L_24 = V_8;
		m5793(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, L_23, (((int32_t)(((t121 *)L_24)->max_length))), &m5793_MI);
		int32_t L_25 = V_6;
		t730* L_26 = V_8;
		V_6 = ((int32_t)((int32_t)L_25+(int32_t)(((int32_t)(((t121 *)L_26)->max_length)))));
		int32_t L_27 = V_7;
		V_7 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_7;
		t1170 * L_29 = (__this->f2);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_29);
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
		t730* L_31 = (__this->f1);
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		t730* L_32 = (__this->f1);
		V_0 = L_32;
	}

IL_00c7:
	{
		V_10 = 0;
		t730* L_33 = V_0;
		if (!L_33)
		{
			goto IL_0200;
		}
	}
	{
		t730* L_34 = V_0;
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
		V_9 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)3+(int32_t)L_37))));
		t730* L_38 = V_0;
		t730* L_39 = V_9;
		int32_t L_40 = V_11;
		m5793(NULL, (t121 *)(t121 *)L_38, 0, (t121 *)(t121 *)L_39, 3, L_40, &m5793_MI);
		V_10 = ((int32_t)129);
		t730* L_41 = V_9;
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
		V_9 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)4+(int32_t)L_44))));
		t730* L_45 = V_0;
		t730* L_46 = V_9;
		int32_t L_47 = V_11;
		m5793(NULL, (t121 *)(t121 *)L_45, 0, (t121 *)(t121 *)L_46, 4, L_47, &m5793_MI);
		V_10 = ((int32_t)130);
		t730* L_48 = V_9;
		int32_t L_49 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_49>>(int32_t)8))));
		t730* L_50 = V_9;
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
		V_9 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)5+(int32_t)L_53))));
		t730* L_54 = V_0;
		t730* L_55 = V_9;
		int32_t L_56 = V_11;
		m5793(NULL, (t121 *)(t121 *)L_54, 0, (t121 *)(t121 *)L_55, 5, L_56, &m5793_MI);
		V_10 = ((int32_t)131);
		t730* L_57 = V_9;
		int32_t L_58 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_58>>(int32_t)((int32_t)16)))));
		t730* L_59 = V_9;
		int32_t L_60 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_59, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_60>>(int32_t)8))));
		t730* L_61 = V_9;
		int32_t L_62 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, 4)) = (uint8_t)(((uint8_t)L_62));
		goto IL_01d2;
	}

IL_0190:
	{
		int32_t L_63 = V_11;
		V_9 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)6+(int32_t)L_63))));
		t730* L_64 = V_0;
		t730* L_65 = V_9;
		int32_t L_66 = V_11;
		m5793(NULL, (t121 *)(t121 *)L_64, 0, (t121 *)(t121 *)L_65, 6, L_66, &m5793_MI);
		V_10 = ((int32_t)132);
		t730* L_67 = V_9;
		int32_t L_68 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_68>>(int32_t)((int32_t)24)))));
		t730* L_69 = V_9;
		int32_t L_70 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_69, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_70>>(int32_t)((int32_t)16)))));
		t730* L_71 = V_9;
		int32_t L_72 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, 4)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72>>(int32_t)8))));
		t730* L_73 = V_9;
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
		V_9 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)2+(int32_t)L_75))));
		t730* L_76 = V_0;
		t730* L_77 = V_9;
		int32_t L_78 = V_11;
		m5793(NULL, (t121 *)(t121 *)L_76, 0, (t121 *)(t121 *)L_77, 2, L_78, &m5793_MI);
		int32_t L_79 = V_11;
		V_10 = L_79;
	}

IL_01ef:
	{
		t730* L_80 = (__this->f1);
		if (L_80)
		{
			goto IL_01fe;
		}
	}
	{
		t730* L_81 = V_0;
		__this->f1 = L_81;
	}

IL_01fe:
	{
		goto IL_0208;
	}

IL_0200:
	{
		V_9 = ((t730*)SZArrayNew(t730_TI_var, 2));
	}

IL_0208:
	{
		t730* L_82 = V_9;
		uint8_t L_83 = (__this->f0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_82, 0)) = (uint8_t)L_83;
		t730* L_84 = V_9;
		int32_t L_85 = V_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_84, 1)) = (uint8_t)(((uint8_t)L_85));
		t730* L_86 = V_9;
		return L_86;
	}
}
extern "C" void m8269 (t1644 * __this, t730* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	t730* V_2 = {0};
	t1644 * V_3 = {0};
	int32_t V_4 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		t730* L_0 = p0;
		int32_t* L_1 = p1;
		m8270(__this, L_0, L_1, (&V_0), (&V_1), (&V_2), &m8270_MI);
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
		t730* L_4 = V_2;
		t1644 * L_5 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8258(L_5, L_3, L_4, &m8258_MI);
		t1644 * L_6 = m8267(__this, L_5, &m8267_MI);
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
		t1644 * L_9 = V_3;
		t730* L_10 = p0;
		int32_t L_11 = V_4;
		int32_t L_12 = V_1;
		m8269(L_9, L_10, (&V_4), ((int32_t)((int32_t)L_11+(int32_t)L_12)), &m8269_MI);
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
extern TypeInfo* t730_TI_var;
extern "C" void m8270 (t1644 * __this, t730* p0, int32_t* p1, uint8_t* p2, int32_t* p3, t730** p4, MethodInfo* method)
{
	static bool m8270_init;
	if (!m8270_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8270_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = p2;
		t730* L_1 = p0;
		int32_t* L_2 = p1;
		int32_t* L_3 = p1;
		int32_t L_4 = (*((int32_t*)L_3));
		V_2 = L_4;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		*((int8_t*)(L_0)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_6));
		int32_t* L_7 = p3;
		t730* L_8 = p0;
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
		t730* L_19 = p0;
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
		t730** L_28 = p4;
		int32_t* L_29 = p3;
		*((t9 **)(L_28)) = (t9 *)((t730*)SZArrayNew(t730_TI_var, (*((int32_t*)L_29))));
		t730* L_30 = p0;
		int32_t* L_31 = p1;
		t730** L_32 = p4;
		int32_t* L_33 = p3;
		m5793(NULL, (t121 *)(t121 *)L_30, (*((int32_t*)L_31)), (t121 *)(t121 *)(*((t730**)L_32)), 0, (*((int32_t*)L_33)), &m5793_MI);
		return;
	}
}
extern "C" t1644 * m8271 (t1644 * __this, int32_t p0, MethodInfo* method)
{
	t1644 * V_0 = {0};
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
			t1170 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1170 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_0 = (t1644 *)NULL;
			goto IL_0037;
		}

IL_001a:
		{
			t1170 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_4, L_5);
			V_0 = ((t1644 *)Castclass(L_6, InitializedTypeInfo(&t1644_TI)));
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
		if(il2cpp_codegen_class_is_assignable_from (&t903_TI, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_0 = (t1644 *)NULL;
			goto IL_0037;
		}

IL_0035:
		{
			goto IL_0037;
		}
	} // end catch (depth: 1)

IL_0037:
	{
		t1644 * L_7 = V_0;
		return L_7;
	}
}
extern "C" t1644 * m8272 (t1644 * __this, int32_t p0, uint8_t p1, MethodInfo* method)
{
	t1644 * V_0 = {0};
	t1644 * V_1 = {0};
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
			t1170 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1170 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_1 = (t1644 *)NULL;
			goto IL_0046;
		}

IL_001a:
		{
			t1170 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_4, L_5);
			V_0 = ((t1644 *)Castclass(L_6, InitializedTypeInfo(&t1644_TI)));
			t1644 * L_7 = V_0;
			uint8_t L_8 = m8261(L_7, &m8261_MI);
			uint8_t L_9 = p1;
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0039;
			}
		}

IL_0035:
		{
			t1644 * L_10 = V_0;
			V_1 = L_10;
			goto IL_0046;
		}

IL_0039:
		{
			V_1 = (t1644 *)NULL;
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
		if(il2cpp_codegen_class_is_assignable_from (&t903_TI, e.ex->object.klass))
			goto CATCH_003f;
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_1 = (t1644 *)NULL;
			goto IL_0046;
		}

IL_0044:
		{
			goto IL_0046;
		}
	} // end catch (depth: 1)

IL_0046:
	{
		t1644 * L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m8273_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m8273 (t1644 * __this, MethodInfo* method)
{
	static bool m8273_init;
	if (!m8273_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8273_init = true;
	}
	t322 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		t322 * L_1 = V_0;
		uint8_t* L_2 = &(__this->f0);
		t2* L_3 = m5821(L_2, (t2*) &_stringLiteral574, &m5821_MI);
		t2* L_4 = m5804(NULL, &m5804_MI);
		m5842(L_1, (t2*) &_stringLiteral783, L_3, L_4, &m5842_MI);
		t322 * L_5 = V_0;
		t730* L_6 = m8263(__this, &m8263_MI);
		int32_t L_7 = (((int32_t)(((t121 *)L_6)->max_length)));
		t9 * L_8 = Box(InitializedTypeInfo(&t125_TI), &L_7);
		t2* L_9 = m5804(NULL, &m5804_MI);
		m5842(L_5, (t2*) &_stringLiteral784, L_8, L_9, &m5842_MI);
		t322 * L_10 = V_0;
		m1170(L_10, (t2*) &_stringLiteral785, &m1170_MI);
		t322 * L_11 = V_0;
		t2* L_12 = m5804(NULL, &m5804_MI);
		m1170(L_11, L_12, &m1170_MI);
		V_1 = 0;
		goto IL_00a1;
	}

IL_0061:
	{
		t322 * L_13 = V_0;
		t730* L_14 = m8263(__this, &m8263_MI);
		int32_t L_15 = V_1;
		t2* L_16 = m5821(((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15)), (t2*) &_stringLiteral574, &m5821_MI);
		m5751(L_13, (t2*) &_stringLiteral786, L_16, &m5751_MI);
		int32_t L_17 = V_1;
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_17+(int32_t)1))%(int32_t)((int32_t)16))))
		{
			goto IL_009d;
		}
	}
	{
		t322 * L_18 = V_0;
		t2* L_19 = m5804(NULL, &m5804_MI);
		m6890(L_18, L_19, ((t158*)SZArrayNew(t158_TI_var, 0)), &m6890_MI);
	}

IL_009d:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_1;
		t730* L_22 = m8263(__this, &m8263_MI);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t121 *)L_22)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		t322 * L_23 = V_0;
		t2* L_24 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_23);
		return L_24;
	}
}
#include "t1654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1654_TI;

#include "t890.h"
#include "t889.h"
#include "t334.h"
#include "t1525.h"
extern TypeInfo t890_TI;
extern TypeInfo t889_TI;
extern TypeInfo t270_TI;
#include "t890MD.h"
#include "t889MD.h"
#include "t270MD.h"
extern MethodInfo m4313_MI;
extern MethodInfo m6892_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m6893_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m6894_MI;


extern "C" int32_t m8274 (t9 * __this , t1644 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1644 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral787, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1644 * L_2 = p0;
		uint8_t L_3 = m8261(L_2, &m8261_MI);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		t890 * L_4 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_4, (t2*) &_stringLiteral788, &m4313_MI);
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
		t1644 * L_6 = p0;
		t730* L_7 = m8263(L_6, &m8263_MI);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_11 = V_1;
		t1644 * L_12 = p0;
		t730* L_13 = m8263(L_12, &m8263_MI);
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
extern "C" t2* m8275 (t9 * __this , t1644 * p0, MethodInfo* method)
{
	t730* V_0 = {0};
	t322 * V_1 = {0};
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint64_t V_4 = 0;
	{
		t1644 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral787, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1644 * L_2 = p0;
		t730* L_3 = m8263(L_2, &m8263_MI);
		V_0 = L_3;
		t322 * L_4 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_4, &m1166_MI);
		V_1 = L_4;
		t730* L_5 = V_0;
		int32_t L_6 = 0;
		V_2 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6))/(int32_t)((int32_t)40)))));
		t730* L_7 = V_0;
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
		t322 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_13 = m4359(NULL, &m4359_MI);
		t2* L_14 = m6892((&V_2), L_13, &m6892_MI);
		m1170(L_12, L_14, &m1170_MI);
		t322 * L_15 = V_1;
		m1170(L_15, (t2*) &_stringLiteral135, &m1170_MI);
		t322 * L_16 = V_1;
		t901 * L_17 = m4359(NULL, &m4359_MI);
		t2* L_18 = m6892((&V_3), L_17, &m6892_MI);
		m1170(L_16, L_18, &m1170_MI);
		V_4 = (((int64_t)0));
		V_2 = 1;
		goto IL_00bd;
	}

IL_0076:
	{
		uint64_t L_19 = V_4;
		t730* L_20 = V_0;
		uint8_t L_21 = V_2;
		uint8_t L_22 = L_21;
		V_4 = ((int64_t)((int64_t)((int64_t)((int64_t)L_19<<(int32_t)7))|(int64_t)(((uint64_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))&(int32_t)((int32_t)127)))))))));
		t730* L_23 = V_0;
		uint8_t L_24 = V_2;
		uint8_t L_25 = L_24;
		if ((((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25))&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00b8;
		}
	}
	{
		t322 * L_26 = V_1;
		m1170(L_26, (t2*) &_stringLiteral135, &m1170_MI);
		t322 * L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_28 = m4359(NULL, &m4359_MI);
		t2* L_29 = m4371((&V_4), L_28, &m4371_MI);
		m1170(L_27, L_29, &m1170_MI);
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
		t730* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		t322 * L_33 = V_1;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_33);
		return L_34;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t270  m8276 (t9 * __this , t1644 * p0, MethodInfo* method)
{
	static bool m8276_init;
	if (!m8276_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8276_init = true;
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
		t1644 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral789, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_2 = m4267(NULL, &m4267_MI);
		t1644 * L_3 = p0;
		t730* L_4 = m8263(L_3, &m8263_MI);
		t2* L_5 = (t2*)VirtFuncInvoker1< t2*, t730* >::Invoke(&m5829_MI, L_2, L_4);
		V_0 = L_5;
		V_1 = (t2*)NULL;
		t2* L_6 = V_0;
		int32_t L_7 = m2724(L_6, &m2724_MI);
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
		V_1 = (t2*) &_stringLiteral790;
		goto IL_0153;
	}

IL_005f:
	{
		t2* L_9 = V_0;
		t2* L_10 = m2740(L_9, 0, 2, &m2740_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_11 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int16_t L_12 = m6893(NULL, L_10, L_11, &m6893_MI);
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
		t2* L_15 = m610(NULL, (t2*) &_stringLiteral791, L_14, &m610_MI);
		V_0 = L_15;
		goto IL_0091;
	}

IL_0085:
	{
		t2* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m610(NULL, (t2*) &_stringLiteral792, L_16, &m610_MI);
		V_0 = L_17;
	}

IL_0091:
	{
		V_1 = (t2*) &_stringLiteral793;
		goto IL_0153;
	}

IL_009c:
	{
		V_1 = (t2*) &_stringLiteral793;
		goto IL_0153;
	}

IL_00a7:
	{
		t2* L_18 = V_0;
		t2* L_19 = m2740(L_18, 0, 2, &m2740_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_20 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int16_t L_21 = m6893(NULL, L_19, L_20, &m6893_MI);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)50))))
		{
			goto IL_00c6;
		}
	}
	{
		G_B13_0 = (t2*) &_stringLiteral791;
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B13_0 = (t2*) &_stringLiteral792;
	}

IL_00cb:
	{
		V_3 = G_B13_0;
		t2* L_23 = V_0;
		uint16_t L_24 = m2739(L_23, ((int32_t)12), &m2739_MI);
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
		t2* L_29 = m2740(L_28, 0, ((int32_t)12), &m2740_MI);
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 1)) = (t9 *)L_29;
		t158* L_30 = L_27;
		uint16_t L_31 = V_4;
		uint16_t L_32 = L_31;
		t9 * L_33 = Box(InitializedTypeInfo(&t303_TI), &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 2)) = (t9 *)L_33;
		t158* L_34 = L_30;
		t2* L_35 = V_0;
		uint16_t L_36 = m2739(L_35, ((int32_t)13), &m2739_MI);
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t303_TI), &L_37);
		ArrayElementTypeCheck (L_34, L_38);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 3)) = (t9 *)L_38;
		t158* L_39 = L_34;
		t2* L_40 = V_0;
		uint16_t L_41 = m2739(L_40, ((int32_t)14), &m2739_MI);
		uint16_t L_42 = L_41;
		t9 * L_43 = Box(InitializedTypeInfo(&t303_TI), &L_42);
		ArrayElementTypeCheck (L_39, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_39, 4)) = (t9 *)L_43;
		t158* L_44 = L_39;
		t2* L_45 = V_0;
		uint16_t L_46 = m2739(L_45, ((int32_t)15), &m2739_MI);
		uint16_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t303_TI), &L_47);
		ArrayElementTypeCheck (L_44, L_48);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, 5)) = (t9 *)L_48;
		t158* L_49 = L_44;
		t2* L_50 = V_0;
		uint16_t L_51 = m2739(L_50, ((int32_t)16), &m2739_MI);
		uint16_t L_52 = L_51;
		t9 * L_53 = Box(InitializedTypeInfo(&t303_TI), &L_52);
		ArrayElementTypeCheck (L_49, L_53);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 6)) = (t9 *)L_53;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_54 = m2909(NULL, (t2*) &_stringLiteral794, L_49, &m2909_MI);
		V_0 = L_54;
		V_1 = (t2*) &_stringLiteral795;
		goto IL_0153;
	}

IL_0153:
	{
		t2* L_55 = V_0;
		t2* L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_57 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_58 = m6894(NULL, L_55, L_56, L_57, ((int32_t)16), &m6894_MI);
		return L_58;
	}
}
#include "t1655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1655_TI;
#include "t1655MD.h"

#include "t1343.h"
#include "t123.h"
#include "t156.h"
extern TypeInfo t1343_TI;
#include "t1343MD.h"
extern MethodInfo m8277_MI;
extern MethodInfo m8278_MI;
extern MethodInfo m8282_MI;
extern MethodInfo m8283_MI;
extern MethodInfo m8284_MI;


extern TypeInfo* t730_TI_var;
extern "C" t730* m8277 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8277_init;
	if (!m8277_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8277_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		t730* L_1 = ((t730*)SZArrayNew(t730_TI_var, 4));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t730* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t730* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t730* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		return L_7;
	}

IL_0028:
	{
		t730* L_9 = ((t730*)SZArrayNew(t730_TI_var, 4));
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)3))));
		t730* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)2))));
		t730* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)1))));
		t730* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 3)) = (uint8_t)(*((uint8_t*)L_16));
		return L_15;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8278 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8278_init;
	if (!m8278_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8278_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		t730* L_1 = ((t730*)SZArrayNew(t730_TI_var, 8));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t730* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t730* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t730* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		t730* L_9 = L_7;
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)4))));
		t730* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)5))));
		t730* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)6))));
		t730* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)7))));
		return L_15;
	}

IL_0044:
	{
		t730* L_17 = ((t730*)SZArrayNew(t730_TI_var, 8));
		uint8_t* L_18 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_18+(int32_t)7))));
		t730* L_19 = L_17;
		uint8_t* L_20 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_20+(int32_t)6))));
		t730* L_21 = L_19;
		uint8_t* L_22 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_22+(int32_t)5))));
		t730* L_23 = L_21;
		uint8_t* L_24 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_24+(int32_t)4))));
		t730* L_25 = L_23;
		uint8_t* L_26 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_26+(int32_t)3))));
		t730* L_27 = L_25;
		uint8_t* L_28 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_28+(int32_t)2))));
		t730* L_29 = L_27;
		uint8_t* L_30 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_30+(int32_t)1))));
		t730* L_31 = L_29;
		uint8_t* L_32 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 7)) = (uint8_t)(*((uint8_t*)L_32));
		return L_31;
	}
}
extern MethodInfo m8279_MI;
extern "C" t730* m8279 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t730* L_0 = m8277(NULL, (uint8_t*)(uint8_t*)(&p0), &m8277_MI);
		return L_0;
	}
}
extern MethodInfo m8280_MI;
extern "C" t730* m8280 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t730* L_0 = m8277(NULL, (uint8_t*)(uint8_t*)(&p0), &m8277_MI);
		return L_0;
	}
}
extern MethodInfo m8281_MI;
extern "C" t730* m8281 (t9 * __this , double p0, MethodInfo* method)
{
	{
		t730* L_0 = m8278(NULL, (uint8_t*)(uint8_t*)(&p0), &m8278_MI);
		return L_0;
	}
}
extern "C" void m8282 (t9 * __this , uint8_t* p0, t730* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_1 = p0;
		t730* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t730* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		goto IL_0025;
	}

IL_0017:
	{
		uint8_t* L_9 = p0;
		t730* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		*((int8_t*)(L_9)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t730* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = L_15;
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
	}

IL_0025:
	{
		return;
	}
}
extern "C" void m8283 (t9 * __this , uint8_t* p0, t730* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		uint8_t* L_1 = p0;
		t730* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t730* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		uint8_t* L_9 = p0;
		t730* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_9+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t730* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
		goto IL_0049;
	}

IL_0029:
	{
		uint8_t* L_17 = p0;
		t730* L_18 = p1;
		int32_t L_19 = p2;
		int32_t L_20 = ((int32_t)((int32_t)L_19+(int32_t)3));
		*((int8_t*)(L_17)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_20));
		uint8_t* L_21 = p0;
		t730* L_22 = p1;
		int32_t L_23 = p2;
		int32_t L_24 = ((int32_t)((int32_t)L_23+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_21+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
		uint8_t* L_25 = p0;
		t730* L_26 = p1;
		int32_t L_27 = p2;
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_25+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_28));
		uint8_t* L_29 = p0;
		t730* L_30 = p1;
		int32_t L_31 = p2;
		int32_t L_32 = L_31;
		*((int8_t*)(((intptr_t)((intptr_t)L_29+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32));
	}

IL_0049:
	{
		return;
	}
}
extern "C" void m8284 (t9 * __this , uint8_t* p0, t730* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
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
		t730* L_3 = p1;
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
		t730* L_11 = p1;
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
extern MethodInfo m8285_MI;
extern "C" int16_t m8285 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		m8282(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8282_MI);
		int16_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8286_MI;
extern "C" int32_t m8286 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		m8283(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8283_MI);
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8287_MI;
extern "C" float m8287 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		m8283(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8283_MI);
		float L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8288_MI;
extern "C" double m8288 (t9 * __this , t730* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	{
		t730* L_0 = p0;
		int32_t L_1 = p1;
		m8284(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8284_MI);
		double L_2 = V_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8289_MI;


extern "C" void m8289 (t1656 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1644 * L_0 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8257(L_0, ((int32_t)160), &m8257_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m8290_MI;
extern "C" void m8290 (t1656 * __this, t2* p0, MethodInfo* method)
{
	{
		m8289(__this, &m8289_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m8291 (t1656 * __this, t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		t1644 * L_1 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8259(L_1, L_0, &m8259_MI);
		m8292(__this, L_1, &m8292_MI);
		return;
	}
}
extern "C" void m8292 (t1656 * __this, t1644 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1644 * L_0 = p0;
		uint8_t L_1 = m8261(L_0, &m8261_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0022;
		}
	}
	{
		t1644 * L_2 = p0;
		int32_t L_3 = m8260(L_2, &m8260_MI);
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t1644 * L_4 = p0;
		int32_t L_5 = m8260(L_4, &m8260_MI);
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_6, (t2*) &_stringLiteral796, &m2910_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t1644 * L_7 = p0;
		t1644 * L_8 = m8271(L_7, 0, &m8271_MI);
		uint8_t L_9 = m8261(L_8, &m8261_MI);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0047;
		}
	}
	{
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_10, (t2*) &_stringLiteral797, &m2910_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0047:
	{
		t1644 * L_11 = p0;
		t1644 * L_12 = m8271(L_11, 0, &m8271_MI);
		t2* L_13 = m8275(NULL, L_12, &m8275_MI);
		__this->f0 = L_13;
		t1644 * L_14 = p0;
		int32_t L_15 = m8260(L_14, &m8260_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		t1644 * L_16 = p0;
		t1644 * L_17 = m8271(L_16, 1, &m8271_MI);
		uint8_t L_18 = m8261(L_17, &m8261_MI);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)160))))
		{
			goto IL_0080;
		}
	}
	{
		t563 * L_19 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_19, (t2*) &_stringLiteral798, &m2910_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0080:
	{
		t1644 * L_20 = p0;
		t1644 * L_21 = m8271(L_20, 1, &m8271_MI);
		__this->f1 = L_21;
	}

IL_008d:
	{
		return;
	}
}
extern "C" t1644 * m8293 (t1656 * __this, MethodInfo* method)
{
	{
		t1644 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8294_MI;
extern "C" void m8294 (t1656 * __this, t1644 * p0, MethodInfo* method)
{
	{
		t1644 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m8295 (t1656 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8296_MI;


extern "C" void m8296 (t1648 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" void m8297 (t1648 * __this, t1644 * p0, MethodInfo* method)
{
	t1644 * V_0 = {0};
	t1644 * V_1 = {0};
	t1644 * V_2 = {0};
	t1644 * V_3 = {0};
	{
		m8296(__this, &m8296_MI);
		t1644 * L_0 = p0;
		uint8_t L_1 = m8261(L_0, &m8261_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1644 * L_2 = p0;
		int32_t L_3 = m8260(L_2, &m8260_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral799, &m2910_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0024:
	{
		t1644 * L_5 = p0;
		t1644 * L_6 = m8271(L_5, 0, &m8271_MI);
		uint8_t L_7 = m8261(L_6, &m8261_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_8, (t2*) &_stringLiteral800, &m2910_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t1644 * L_9 = p0;
		t1644 * L_10 = m8271(L_9, 0, &m8271_MI);
		t730* L_11 = m8263(L_10, &m8263_MI);
		int32_t L_12 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t1644 * L_13 = p0;
		t1644 * L_14 = m8271(L_13, 1, &m8271_MI);
		V_0 = L_14;
		t1644 * L_15 = V_0;
		uint8_t L_16 = m8261(L_15, &m8261_MI);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_17, (t2*) &_stringLiteral801, &m2910_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_006f:
	{
		t1644 * L_18 = V_0;
		t1644 * L_19 = m8271(L_18, 0, &m8271_MI);
		V_1 = L_19;
		t1644 * L_20 = V_1;
		uint8_t L_21 = m8261(L_20, &m8261_MI);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_008b;
		}
	}
	{
		t563 * L_22 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_22, (t2*) &_stringLiteral802, &m2910_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		t1644 * L_23 = V_1;
		t2* L_24 = m8275(NULL, L_23, &m8275_MI);
		t1656 * L_25 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8290(L_25, L_24, &m8290_MI);
		__this->f1 = L_25;
		t1644 * L_26 = V_0;
		t1644 * L_27 = m8271(L_26, 1, &m8271_MI);
		V_2 = L_27;
		t1644 * L_28 = V_2;
		uint8_t L_29 = m8261(L_28, &m8261_MI);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)48))))
		{
			goto IL_00b9;
		}
	}
	{
		t563 * L_30 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_30, (t2*) &_stringLiteral803, &m2910_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00b9:
	{
		t1644 * L_31 = V_2;
		t1644 * L_32 = m8271(L_31, 0, &m8271_MI);
		t2* L_33 = m8275(NULL, L_32, &m8275_MI);
		t1656 * L_34 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8290(L_34, L_33, &m8290_MI);
		__this->f2 = L_34;
		t1656 * L_35 = (__this->f2);
		t1644 * L_36 = V_2;
		t1644 * L_37 = m8271(L_36, 1, &m8271_MI);
		m8294(L_35, L_37, &m8294_MI);
		t1644 * L_38 = V_0;
		t1644 * L_39 = m8271(L_38, 2, &m8271_MI);
		V_3 = L_39;
		t1644 * L_40 = V_3;
		uint8_t L_41 = m8261(L_40, &m8261_MI);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)128))))
		{
			goto IL_0102;
		}
	}
	{
		t563 * L_42 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_42, (t2*) &_stringLiteral804, &m2910_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_0102:
	{
		t1644 * L_43 = V_3;
		t730* L_44 = m8263(L_43, &m8263_MI);
		__this->f3 = L_44;
		return;
	}
}
extern "C" t1656 * m8298 (t1648 * __this, MethodInfo* method)
{
	{
		t1656 * L_0 = (__this->f2);
		return L_0;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8299 (t1648 * __this, MethodInfo* method)
{
	static bool m8299_init;
	if (!m8299_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8299_init = true;
	}
	{
		t730* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t730*)NULL;
	}

IL_000a:
	{
		t730* L_1 = (__this->f3);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_1);
		return ((t730*)Castclass(L_2, t730_TI_var));
	}
}
#include "t1657.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1657_TI;
#include "t1657MD.h"



#include "t1658.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1658_TI;
#include "t1658MD.h"

#include "t1629MD.h"
extern MethodInfo m8303_MI;
extern MethodInfo m8058_MI;
extern MethodInfo m8305_MI;
extern MethodInfo m8307_MI;
extern MethodInfo m5897_MI;
extern MethodInfo m8056_MI;
extern MethodInfo m8304_MI;


extern MethodInfo m8300_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8300 (t1658 * __this, t730* p0, MethodInfo* method)
{
	static bool m8300_init;
	if (!m8300_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8300_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		t730* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1348, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t730* L_2 = p0;
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
		t730* L_4 = p0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = L_6;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_7))));
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		t730* L_9 = p0;
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
		t730* L_11 = p0;
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_11);
		__this->f1 = ((t730*)Castclass(L_12, t730_TI_var));
	}

IL_0046:
	{
		goto IL_0067;
	}

IL_0048:
	{
		t730* L_13 = p0;
		t1217 * L_14 = m8056(NULL, L_13, &m8056_MI);
		m8304(__this, L_14, &m8304_MI);
		t1217 * L_15 = (__this->f0);
		if (L_15)
		{
			goto IL_0067;
		}
	}
	{
		t563 * L_16 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_16, (t2*) &_stringLiteral1349, &m2910_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0067:
	{
		return;
	}
}
extern MethodInfo m8301_MI;
extern "C" void m8301 (t1658 * __this, t1217 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1217 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1312, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1217 * L_2 = p0;
		m8304(__this, L_2, &m8304_MI);
		return;
	}
}
extern MethodInfo m8302_MI;
extern "C" void m8302 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1658_SFs*)InitializedTypeInfo(&t1658_TI)->static_fields)->f4 = L_0;
		((t1658_SFs*)InitializedTypeInfo(&t1658_TI)->static_fields)->f5 = 0;
		return;
	}
}
extern "C" void m8303 (t1658 * __this, MethodInfo* method)
{
	{
		__this->f1 = (t730*)NULL;
		__this->f2 = (t730*)NULL;
		return;
	}
}
extern "C" void m8304 (t1658 * __this, t1217 * p0, MethodInfo* method)
{
	{
		t1217 * L_0 = p0;
		__this->f0 = L_0;
		m8303(__this, &m8303_MI);
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m8305 (t1658 * __this, MethodInfo* method)
{
	static bool m8305_init;
	if (!m8305_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8305_init = true;
	}
	t730* V_0 = {0};
	t730* V_1 = {0};
	{
		t730* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_00f6;
		}
	}
	{
		t1217 * L_1 = (__this->f0);
		t730* L_2 = m8058(NULL, L_1, 0, &m8058_MI);
		V_0 = L_2;
		t1217 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5846_MI, L_3);
		__this->f1 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)((int32_t)((int32_t)32)+(int32_t)((int32_t)((int32_t)L_4>>(int32_t)3))))));
		t730* L_5 = (__this->f1);
		t730* L_6 = V_0;
		int32_t L_7 = 4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7));
		t730* L_8 = (__this->f1);
		t730* L_9 = V_0;
		int32_t L_10 = 5;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t730* L_11 = (__this->f1);
		t730* L_12 = V_0;
		int32_t L_13 = 6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13));
		t730* L_14 = (__this->f1);
		t730* L_15 = V_0;
		int32_t L_16 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 3)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t730* L_17 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 4)) = (uint8_t)4;
		t730* L_18 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 5)) = (uint8_t)((int32_t)128);
		t730* L_19 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 6)) = (uint8_t)0;
		t730* L_20 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 7)) = (uint8_t)0;
		t730* L_21 = (__this->f1);
		t730* L_22 = m8279(NULL, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)((int32_t)12))), &m8279_MI);
		V_1 = L_22;
		t730* L_23 = (__this->f1);
		t730* L_24 = V_1;
		int32_t L_25 = 0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 8)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25));
		t730* L_26 = (__this->f1);
		t730* L_27 = V_1;
		int32_t L_28 = 1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)9))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28));
		t730* L_29 = (__this->f1);
		t730* L_30 = V_1;
		int32_t L_31 = 2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, ((int32_t)10))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31));
		t730* L_32 = (__this->f1);
		t730* L_33 = V_1;
		int32_t L_34 = 3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, ((int32_t)11))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_34));
		t730* L_35 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)12))) = (uint8_t)6;
		t730* L_36 = V_0;
		t730* L_37 = (__this->f1);
		t730* L_38 = (__this->f1);
		m5793(NULL, (t121 *)(t121 *)L_36, 1, (t121 *)(t121 *)L_37, ((int32_t)13), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_38)->max_length)))-(int32_t)((int32_t)13))), &m5793_MI);
		t730* L_39 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)23))) = (uint8_t)((int32_t)49);
	}

IL_00f6:
	{
		t730* L_40 = (__this->f1);
		t9 * L_41 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_40);
		return ((t730*)Castclass(L_41, t730_TI_var));
	}
}
extern MethodInfo m8306_MI;
extern TypeInfo* t730_TI_var;
extern "C" t730* m8306 (t1658 * __this, MethodInfo* method)
{
	static bool m8306_init;
	if (!m8306_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8306_init = true;
	}
	t730* V_0 = {0};
	t1368 * V_1 = {0};
	t730* V_2 = {0};
	{
		t730* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		t730* L_1 = m8305(__this, &m8305_MI);
		V_0 = L_1;
		t730* L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (t730*)NULL;
	}

IL_0014:
	{
		t2* L_3 = m8307(__this, &m8307_MI);
		t1368 * L_4 = m6913(NULL, L_3, &m6913_MI);
		V_1 = L_4;
		t1368 * L_5 = V_1;
		t730* L_6 = V_0;
		t730* L_7 = m5897(L_5, L_6, &m5897_MI);
		V_2 = L_7;
		__this->f2 = ((t730*)SZArrayNew(t730_TI_var, 8));
		t730* L_8 = V_2;
		t730* L_9 = V_2;
		t730* L_10 = (__this->f2);
		m5793(NULL, (t121 *)(t121 *)L_8, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_10, 0, 8, &m5793_MI);
		t730* L_11 = (__this->f2);
		m6936(NULL, (t121 *)(t121 *)L_11, 0, 8, &m6936_MI);
	}

IL_0054:
	{
		t730* L_12 = (__this->f2);
		t9 * L_13 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_12);
		return ((t730*)Castclass(L_13, t730_TI_var));
	}
}
extern "C" t2* m8307 (t1658 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->f3 = (t2*) &_stringLiteral883;
	}

IL_0013:
	{
		t2* L_1 = (__this->f3);
		return L_1;
	}
}
#include "t1659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1659_TI;
#include "t1659MD.h"

#include "t877.h"
#include "t1660.h"
#include "t887.h"
#include "t1665.h"
#include "t1661.h"
extern TypeInfo t877_TI;
extern TypeInfo t887_TI;
extern TypeInfo t1660_TI;
extern TypeInfo t1662_TI;
#include "t1661MD.h"
#include "t877MD.h"
#include "t887MD.h"
#include "t1660MD.h"
extern MethodInfo m8324_MI;
extern MethodInfo m4495_MI;
extern MethodInfo m4237_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m8337_MI;
extern MethodInfo m10718_MI;
extern MethodInfo m4669_MI;
extern MethodInfo m10725_MI;
extern MethodInfo m4233_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m11989_MI;
extern MethodInfo m11990_MI;
extern MethodInfo m10726_MI;
extern MethodInfo m10724_MI;
extern MethodInfo m4670_MI;
extern MethodInfo m10723_MI;


extern MethodInfo m8308_MI;
extern "C" void m8308 (t1659 * __this, MethodInfo* method)
{
	{
		m8324(__this, &m8324_MI);
		t877 * L_0 = (t877 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t877_TI));
		m4495(L_0, &m4495_MI);
		__this->f15 = L_0;
		return;
	}
}
extern MethodInfo m8309_MI;
extern "C" void m8309 (t1659 * __this, t2* p0, MethodInfo* method)
{
	{
		__this->f13 = (t1660 *)NULL;
		t877 * L_0 = (__this->f15);
		VirtActionInvoker0::Invoke(&m4237_MI, L_0);
		t2* L_1 = p0;
		t887 * L_2 = (t887 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t887_TI));
		m4278(L_2, L_1, &m4278_MI);
		m8337(__this, L_2, __this, &m8337_MI);
		return;
	}
}
extern MethodInfo m8310_MI;
extern "C" t1660 * m8310 (t1659 * __this, MethodInfo* method)
{
	{
		t1660 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8311_MI;
extern "C" void m8311 (t1659 * __this, t1661 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8312_MI;
extern "C" void m8312 (t1659 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8313_MI;
extern "C" void m8313 (t1659 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8314_MI;
extern "C" void m8314 (t1659 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1660 * V_0 = {0};
	t1660 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1660_TI));
		t1660 * L_1 = (t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1660_TI));
		m10718(L_1, L_0, &m10718_MI);
		V_0 = L_1;
		t1660 * L_2 = (__this->f13);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		t1660 * L_3 = V_0;
		__this->f13 = L_3;
		t1660 * L_4 = V_0;
		__this->f14 = L_4;
		goto IL_0037;
	}

IL_001f:
	{
		t877 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4669_MI, L_5);
		V_1 = ((t1660 *)Castclass(L_6, InitializedTypeInfo(&t1660_TI)));
		t1660 * L_7 = V_1;
		t1660 * L_8 = V_0;
		m10725(L_7, L_8, &m10725_MI);
	}

IL_0037:
	{
		t877 * L_9 = (__this->f15);
		t1660 * L_10 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_9, L_10);
		t1660 * L_11 = V_0;
		__this->f14 = L_11;
		t9 * L_12 = p1;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m11988_MI, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_0077;
	}

IL_0055:
	{
		t1660 * L_14 = (__this->f14);
		t9 * L_15 = p1;
		int32_t L_16 = V_3;
		t2* L_17 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m11989_MI, L_15, L_16);
		t9 * L_18 = p1;
		int32_t L_19 = V_3;
		t2* L_20 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m11990_MI, L_18, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1660_TI));
		t2* L_21 = m10726(NULL, L_20, &m10726_MI);
		m10724(L_14, L_17, L_21, &m10724_MI);
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
extern MethodInfo m8315_MI;
extern "C" void m8315 (t1659 * __this, t2* p0, MethodInfo* method)
{
	{
		t877 * L_0 = (__this->f15);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4670_MI, L_0);
		__this->f14 = ((t1660 *)Castclass(L_1, InitializedTypeInfo(&t1660_TI)));
		return;
	}
}
extern MethodInfo m8316_MI;
extern "C" void m8316 (t1659 * __this, t2* p0, MethodInfo* method)
{
	{
		t1660 * L_0 = (__this->f14);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1660_TI));
		t2* L_2 = m10726(NULL, L_1, &m10726_MI);
		m10723(L_0, L_2, &m10723_MI);
		return;
	}
}
extern MethodInfo m8317_MI;
extern "C" void m8317 (t1659 * __this, t1661 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1663_TI;
#include "t1663MD.h"

extern MethodInfo m5879_MI;


extern MethodInfo m8318_MI;
extern "C" void m8318 (t1663 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_0, &m5727_MI);
		__this->f0 = L_0;
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_1, &m5727_MI);
		__this->f1 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8319_MI;
extern "C" int32_t m8319 (t1663 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8320_MI;
extern "C" t2* m8320 (t1663 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8321_MI;
extern "C" t2* m8321 (t1663 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f1);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8322_MI;
extern "C" void m8322 (t1663 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(&m5879_MI, L_0);
		t1170 * L_1 = (__this->f1);
		VirtActionInvoker0::Invoke(&m5879_MI, L_1);
		return;
	}
}
extern MethodInfo m8323_MI;
extern "C" void m8323 (t1663 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f0);
		t2* L_1 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_0, L_1);
		t1170 * L_2 = (__this->f1);
		t2* L_3 = p1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_2, L_3);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1661_TI;

#include "t1666.h"
#include "t1285.h"
extern TypeInfo t1666_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1665_TI;
extern TypeInfo t1664_TI;
#include "t1666MD.h"
#include "t303MD.h"
#include "t1665MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m4355_MI;
extern MethodInfo m8347_MI;
extern MethodInfo m4665_MI;
extern MethodInfo m4668_MI;
extern MethodInfo m7381_MI;
extern MethodInfo m8325_MI;
extern MethodInfo m5928_MI;
extern MethodInfo m8331_MI;
extern MethodInfo m8333_MI;
extern MethodInfo m8332_MI;
extern MethodInfo m8328_MI;
extern MethodInfo m9045_MI;
extern MethodInfo m9046_MI;
extern MethodInfo m8326_MI;
extern MethodInfo m1214_MI;
extern MethodInfo m8342_MI;
extern MethodInfo m5990_MI;
extern MethodInfo m8327_MI;
extern MethodInfo m5941_MI;
extern MethodInfo m4358_MI;
extern MethodInfo m11991_MI;
extern MethodInfo m8339_MI;
extern MethodInfo m8340_MI;
extern MethodInfo m11992_MI;
extern MethodInfo m8338_MI;
extern MethodInfo m5885_MI;
extern MethodInfo m8330_MI;
extern MethodInfo m8336_MI;
extern MethodInfo m8334_MI;
extern MethodInfo m8345_MI;
extern MethodInfo m8346_MI;
extern MethodInfo m8329_MI;
extern MethodInfo m8335_MI;
extern MethodInfo m11993_MI;
extern MethodInfo m11994_MI;
extern MethodInfo m8344_MI;
extern MethodInfo m11995_MI;
extern MethodInfo m8341_MI;
extern MethodInfo m11996_MI;
extern MethodInfo m11997_MI;
extern MethodInfo m8343_MI;
extern MethodInfo m331_MI;


extern TypeInfo* t312_TI_var;
extern "C" void m8324 (t1661 * __this, MethodInfo* method)
{
	static bool m8324_init;
	if (!m8324_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8324_init = true;
	}
	{
		t877 * L_0 = (t877 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t877_TI));
		m4495(L_0, &m4495_MI);
		__this->f2 = L_0;
		t877 * L_1 = (t877 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t877_TI));
		m4495(L_1, &m4495_MI);
		__this->f3 = L_1;
		t322 * L_2 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_2, ((int32_t)200), &m4355_MI);
		__this->f5 = L_2;
		__this->f6 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)30)));
		t1663 * L_3 = (t1663 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1663_TI));
		m8318(L_3, &m8318_MI);
		__this->f8 = L_3;
		__this->f9 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" t138 * m8325 (t1661 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = (__this->f9);
		int32_t L_2 = (__this->f10);
		t1666 * L_3 = (t1666 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1666_TI));
		m8347(L_3, L_0, L_1, L_2, &m8347_MI);
		return L_3;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t138 * m8326 (t1661 * __this, MethodInfo* method)
{
	static bool m8326_init;
	if (!m8326_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8326_init = true;
	}
	t221* V_0 = {0};
	{
		t877 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4665_MI, L_0);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, L_1));
		t877 * L_2 = (__this->f2);
		t221* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m4668_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t221* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m7381(NULL, (t2*) &_stringLiteral337, L_4, &m7381_MI);
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral1350, L_5, &m590_MI);
		t138 * L_7 = m8325(__this, L_6, &m8325_MI);
		return L_7;
	}
}
extern "C" bool m8327 (t1661 * __this, uint16_t p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		int32_t L_14 = m5928(NULL, L_13, &m5928_MI);
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
extern "C" bool m8328 (t1661 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m8329 (t1661 * __this, MethodInfo* method)
{
	{
		m8331(__this, 0, &m8331_MI);
		return;
	}
}
extern "C" void m8330 (t1661 * __this, MethodInfo* method)
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		t322 * L_0 = (__this->f5);
		int32_t L_1 = m8333(__this, &m8333_MI);
		m2758(L_0, (((uint16_t)L_1)), &m2758_MI);
	}

IL_0015:
	{
		int32_t L_2 = m8332(__this, &m8332_MI);
		bool L_3 = m8328(__this, L_2, &m8328_MI);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = m8332(__this, &m8332_MI);
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
extern "C" void m8331 (t1661 * __this, bool p0, MethodInfo* method)
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0 = m8332(__this, &m8332_MI);
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
		m8333(__this, &m8333_MI);
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
		t138 * L_5 = m8325(__this, (t2*) &_stringLiteral1351, &m8325_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004b:
	{
		return;
	}
	// Dead block : IL_004c: br.s IL_0000
}
extern "C" int32_t m8332 (t1661 * __this, MethodInfo* method)
{
	{
		t1665 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9045_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m8333 (t1661 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1665 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9046_MI, L_0);
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
extern "C" void m8334 (t1661 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = m8333(__this, &m8333_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_2 = m8326(__this, &m8326_MI);
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
		t9 * L_7 = Box(InitializedTypeInfo(&t303_TI), &L_6);
		int32_t L_8 = V_0;
		uint16_t L_9 = (((uint16_t)L_8));
		t9 * L_10 = Box(InitializedTypeInfo(&t303_TI), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m1214(NULL, (t2*) &_stringLiteral1352, L_7, L_10, &m1214_MI);
		t138 * L_12 = m8325(__this, L_11, &m8325_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0035:
	{
		return;
	}
}
extern "C" t2* m8335 (t1661 * __this, uint16_t p0, bool p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	t2* V_1 = {0};

IL_0000:
	{
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t138 * L_1 = m8326(__this, &m8326_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int32_t L_2 = m8333(__this, &m8333_MI);
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
		m8342(__this, &m8342_MI);
		goto IL_003b;
	}

IL_002e:
	{
		t322 * L_7 = (__this->f5);
		uint16_t L_8 = V_0;
		m2758(L_7, L_8, &m2758_MI);
	}

IL_003b:
	{
		goto IL_0000;
	}

IL_003d:
	{
		t322 * L_9 = (__this->f5);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_9);
		V_1 = L_10;
		t322 * L_11 = (__this->f5);
		m5990(L_11, 0, &m5990_MI);
		t2* L_12 = V_1;
		return L_12;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" t2* m8336 (t1661 * __this, MethodInfo* method)
{
	static bool m8336_init;
	if (!m8336_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8336_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	t312* V_3 = {0};
	{
		V_0 = 0;
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8332(__this, &m8332_MI);
		bool L_2 = m8327(__this, (((uint16_t)L_1)), 1, &m8327_MI);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		t138 * L_3 = m8325(__this, (t2*) &_stringLiteral1353, &m8325_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m8332(__this, &m8332_MI);
		V_1 = L_4;
		goto IL_0082;
	}

IL_0030:
	{
		int32_t L_5 = V_1;
		V_2 = (((uint16_t)L_5));
		uint16_t L_6 = V_2;
		bool L_7 = m8327(__this, L_6, 0, &m8327_MI);
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
		t312* L_9 = (__this->f6);
		if ((!(((uint32_t)L_8) == ((uint32_t)(((int32_t)(((t121 *)L_9)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = V_0;
		V_3 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)((int32_t)L_10*(int32_t)2))));
		t312* L_11 = (__this->f6);
		t312* L_12 = V_3;
		int32_t L_13 = V_0;
		m5941(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, L_13, &m5941_MI);
		t312* L_14 = V_3;
		__this->f6 = L_14;
	}

IL_0067:
	{
		t312* L_15 = (__this->f6);
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
		uint16_t L_18 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_17)) = (uint16_t)L_18;
		m8333(__this, &m8333_MI);
		int32_t L_19 = m8332(__this, &m8332_MI);
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
		t138 * L_22 = m8325(__this, (t2*) &_stringLiteral1354, &m8325_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0095:
	{
		t312* L_23 = (__this->f6);
		int32_t L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_25 = m4378(L_25, L_23, 0, L_24, &m4358_MI);
		return L_25;
	}
}
extern "C" void m8337 (t1661 * __this, t1665 * p0, t9 * p1, MethodInfo* method)
{
	{
		t1665 * L_0 = p0;
		__this->f1 = L_0;
		t9 * L_1 = p1;
		__this->f0 = L_1;
		t9 * L_2 = p1;
		InterfaceActionInvoker1< t1661 * >::Invoke(&m11991_MI, L_2, __this);
		goto IL_001d;
	}

IL_0017:
	{
		m8339(__this, &m8339_MI);
	}

IL_001d:
	{
		int32_t L_3 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		m8340(__this, &m8340_MI);
		t877 * L_4 = (__this->f2);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4665_MI, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t877 * L_6 = (__this->f2);
		t9 * L_7 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4669_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m590(NULL, (t2*) &_stringLiteral1355, L_7, &m590_MI);
		t138 * L_9 = m8325(__this, L_8, &m8325_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0056:
	{
		t9 * L_10 = p1;
		InterfaceActionInvoker1< t1661 * >::Invoke(&m11992_MI, L_10, __this);
		m8338(__this, &m8338_MI);
		return;
	}
}
extern "C" void m8338 (t1661 * __this, MethodInfo* method)
{
	{
		__this->f9 = 1;
		__this->f10 = 0;
		__this->f0 = (t9 *)NULL;
		__this->f1 = (t1665 *)NULL;
		t877 * L_0 = (__this->f2);
		VirtActionInvoker0::Invoke(&m4237_MI, L_0);
		t877 * L_1 = (__this->f3);
		VirtActionInvoker0::Invoke(&m4237_MI, L_1);
		t1663 * L_2 = (__this->f8);
		m8322(L_2, &m8322_MI);
		t322 * L_3 = (__this->f5);
		m5990(L_3, 0, &m5990_MI);
		__this->f4 = (t2*)NULL;
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8339 (t1661 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8332(__this, &m8332_MI);
		bool L_1 = m8328(__this, L_0, &m8328_MI);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		t322 * L_2 = (__this->f5);
		int32_t L_3 = m5885(L_2, &m5885_MI);
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
		m8330(__this, &m8330_MI);
	}

IL_0028:
	{
		int32_t L_4 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0287;
		}
	}
	{
		m8333(__this, &m8333_MI);
		int32_t L_5 = m8332(__this, &m8332_MI);
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
		m8333(__this, &m8333_MI);
		int32_t L_9 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a2;
		}
	}
	{
		m8333(__this, &m8333_MI);
		t2* L_10 = m8336(__this, &m8336_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_11 = m2738(NULL, L_10, (t2*) &_stringLiteral1356, &m2738_MI);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		t138 * L_12 = m8325(__this, (t2*) &_stringLiteral1357, &m8325_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0093:
	{
		m8334(__this, ((int32_t)91), &m8334_MI);
		m8345(__this, &m8345_MI);
		return;
	}

IL_00a2:
	{
		int32_t L_13 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00b3;
		}
	}
	{
		m8346(__this, &m8346_MI);
		return;
	}

IL_00b3:
	{
		t2* L_14 = m8336(__this, &m8336_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2738(NULL, L_14, (t2*) &_stringLiteral1358, &m2738_MI);
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		t138 * L_16 = m8325(__this, (t2*) &_stringLiteral1359, &m8325_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00d1:
	{
		t138 * L_17 = m8325(__this, (t2*) &_stringLiteral1360, &m8325_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00dd:
	{
		m8340(__this, &m8340_MI);
		m8333(__this, &m8333_MI);
		t2* L_18 = m8336(__this, &m8336_MI);
		V_0 = L_18;
		m8329(__this, &m8329_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_1 = L_19;
		int32_t L_20 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)63))))
		{
			goto IL_0131;
		}
	}

IL_0107:
	{
		t2* L_21 = V_1;
		t2* L_22 = m8335(__this, ((int32_t)63), 0, &m8335_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, L_21, L_22, &m610_MI);
		V_1 = L_23;
		int32_t L_24 = m8332(__this, &m8332_MI);
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
		t2* L_26 = m610(NULL, L_25, (t2*) &_stringLiteral1361, &m610_MI);
		V_1 = L_26;
		goto IL_0107;
	}

IL_0131:
	{
		t9 * L_27 = (__this->f0);
		t2* L_28 = V_0;
		t2* L_29 = V_1;
		InterfaceActionInvoker2< t2*, t2* >::Invoke(&m11993_MI, L_27, L_28, L_29);
		m8334(__this, ((int32_t)62), &m8334_MI);
		return;
	}

IL_0147:
	{
		m8340(__this, &m8340_MI);
		t877 * L_30 = (__this->f2);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4665_MI, L_30);
		if (L_31)
		{
			goto IL_0161;
		}
	}
	{
		t138 * L_32 = m8326(__this, &m8326_MI);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_0161:
	{
		m8333(__this, &m8333_MI);
		t2* L_33 = m8336(__this, &m8336_MI);
		V_0 = L_33;
		m8329(__this, &m8329_MI);
		t877 * L_34 = (__this->f2);
		t9 * L_35 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4670_MI, L_34);
		V_2 = ((t2*)Castclass(L_35, (&t2_TI)));
		t877 * L_36 = (__this->f3);
		VirtFuncInvoker0< t9 * >::Invoke(&m4670_MI, L_36);
		t877 * L_37 = (__this->f3);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4665_MI, L_37);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01b8;
		}
	}
	{
		t877 * L_39 = (__this->f3);
		t9 * L_40 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4669_MI, L_39);
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
		bool L_43 = m2738(NULL, L_41, L_42, &m2738_MI);
		if (!L_43)
		{
			goto IL_01db;
		}
	}
	{
		t2* L_44 = V_2;
		t2* L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_46 = m1214(NULL, (t2*) &_stringLiteral1362, L_44, L_45, &m1214_MI);
		t138 * L_47 = m8325(__this, L_46, &m8325_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_01db:
	{
		t9 * L_48 = (__this->f0);
		t2* L_49 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m11994_MI, L_48, L_49);
		m8334(__this, ((int32_t)62), &m8334_MI);
		return;
	}

IL_01f0:
	{
		m8340(__this, &m8340_MI);
		t2* L_50 = m8336(__this, &m8336_MI);
		V_0 = L_50;
		goto IL_020b;
	}

IL_01ff:
	{
		t1663 * L_51 = (__this->f8);
		m8344(__this, L_51, &m8344_MI);
	}

IL_020b:
	{
		int32_t L_52 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_52) == ((int32_t)((int32_t)62))))
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_53 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01ff;
		}
	}

IL_021f:
	{
		t9 * L_54 = (__this->f0);
		t2* L_55 = V_0;
		t1663 * L_56 = (__this->f8);
		InterfaceActionInvoker2< t2*, t9 * >::Invoke(&m11995_MI, L_54, L_55, L_56);
		t1663 * L_57 = (__this->f8);
		m8322(L_57, &m8322_MI);
		m8329(__this, &m8329_MI);
		int32_t L_58 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0261;
		}
	}
	{
		m8333(__this, &m8333_MI);
		t9 * L_59 = (__this->f0);
		t2* L_60 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m11994_MI, L_59, L_60);
		goto IL_027e;
	}

IL_0261:
	{
		t877 * L_61 = (__this->f2);
		t2* L_62 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_61, L_62);
		t877 * L_63 = (__this->f3);
		t2* L_64 = (__this->f4);
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_63, L_64);
	}

IL_027e:
	{
		m8334(__this, ((int32_t)62), &m8334_MI);
		return;
	}

IL_0287:
	{
		m8341(__this, &m8341_MI);
		return;
	}
}
extern "C" void m8340 (t1661 * __this, MethodInfo* method)
{
	{
		t322 * L_0 = (__this->f5);
		int32_t L_1 = m5885(L_0, &m5885_MI);
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
		t322 * L_4 = (__this->f5);
		t2* L_5 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_4);
		InterfaceActionInvoker1< t2* >::Invoke(&m11996_MI, L_3, L_5);
		goto IL_0044;
	}

IL_002e:
	{
		t9 * L_6 = (__this->f0);
		t322 * L_7 = (__this->f5);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_7);
		InterfaceActionInvoker1< t2* >::Invoke(&m11997_MI, L_6, L_8);
	}

IL_0044:
	{
		t322 * L_9 = (__this->f5);
		m5990(L_9, 0, &m5990_MI);
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8341 (t1661 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->f7 = 0;
	}

IL_0007:
	{
		int32_t L_0 = m8332(__this, &m8332_MI);
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
		m8333(__this, &m8333_MI);
		m8342(__this, &m8342_MI);
		goto IL_0007;
	}

IL_0031:
	{
		t322 * L_5 = (__this->f5);
		int32_t L_6 = m8333(__this, &m8333_MI);
		m2758(L_5, (((uint16_t)L_6)), &m2758_MI);
		goto IL_0007;
	}
	// Dead block : IL_0046: br.s IL_0007
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern MethodInfo* m5778_MI_var;
extern "C" void m8342 (t1661 * __this, MethodInfo* method)
{
	static bool m8342_init;
	if (!m8342_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m5778_MI_var = il2cpp_codegen_genericmethod_get_method(&m5778_GM);
		m8342_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t720 * V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_001d;
		}
	}
	{
		m8333(__this, &m8333_MI);
		m8343(__this, &m8343_MI);
		goto IL_010b;
	}

IL_001d:
	{
		t2* L_1 = m8336(__this, &m8336_MI);
		V_0 = L_1;
		m8334(__this, ((int32_t)59), &m8334_MI);
		t2* L_2 = V_0;
		V_1 = L_2;
		t2* L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		t720 * L_4 = ((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f12;
		if (L_4)
		{
			goto IL_0084;
		}
	}
	{
		t720 * L_5 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_5, 5, m5776_MI_var);
		V_2 = L_5;
		t720 * L_6 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_6, (t2*) &_stringLiteral1363, 0);
		t720 * L_7 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_7, (t2*) &_stringLiteral1364, 1);
		t720 * L_8 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_8, (t2*) &_stringLiteral1365, 2);
		t720 * L_9 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_9, (t2*) &_stringLiteral1366, 3);
		t720 * L_10 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_10, (t2*) &_stringLiteral1367, 4);
		t720 * L_11 = V_2;
		((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f12 = L_11;
	}

IL_0084:
	{
		t720 * L_12 = ((t1661_SFs*)InitializedTypeInfo(&t1661_TI)->static_fields)->f12;
		t2* L_13 = V_1;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_12, L_13, (&V_3));
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
		t322 * L_16 = (__this->f5);
		m2758(L_16, ((int32_t)38), &m2758_MI);
		goto IL_010b;
	}

IL_00bf:
	{
		t322 * L_17 = (__this->f5);
		m2758(L_17, ((int32_t)34), &m2758_MI);
		goto IL_010b;
	}

IL_00cf:
	{
		t322 * L_18 = (__this->f5);
		m2758(L_18, ((int32_t)39), &m2758_MI);
		goto IL_010b;
	}

IL_00df:
	{
		t322 * L_19 = (__this->f5);
		m2758(L_19, ((int32_t)60), &m2758_MI);
		goto IL_010b;
	}

IL_00ef:
	{
		t322 * L_20 = (__this->f5);
		m2758(L_20, ((int32_t)62), &m2758_MI);
		goto IL_010b;
	}

IL_00ff:
	{
		t138 * L_21 = m8325(__this, (t2*) &_stringLiteral1368, &m8325_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_010b:
	{
		return;
	}
}
extern "C" int32_t m8343 (t1661 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_0083;
		}
	}
	{
		m8333(__this, &m8333_MI);
		int32_t L_1 = m8332(__this, &m8332_MI);
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
		m8333(__this, &m8333_MI);
		int32_t L_14 = m8332(__this, &m8332_MI);
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
		int32_t L_16 = m8332(__this, &m8332_MI);
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
		m8333(__this, &m8333_MI);
		int32_t L_21 = m8332(__this, &m8332_MI);
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
extern "C" void m8344 (t1661 * __this, t1663 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	{
		m8331(__this, 1, &m8331_MI);
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)47))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8332(__this, &m8332_MI);
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
		t2* L_2 = m8336(__this, &m8336_MI);
		V_0 = L_2;
		m8329(__this, &m8329_MI);
		m8334(__this, ((int32_t)61), &m8334_MI);
		m8329(__this, &m8329_MI);
		int32_t L_3 = m8333(__this, &m8333_MI);
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
		t2* L_6 = m8335(__this, ((int32_t)39), 1, &m8335_MI);
		V_1 = L_6;
		goto IL_006e;
	}

IL_0056:
	{
		t2* L_7 = m8335(__this, ((int32_t)34), 1, &m8335_MI);
		V_1 = L_7;
		goto IL_006e;
	}

IL_0062:
	{
		t138 * L_8 = m8325(__this, (t2*) &_stringLiteral1369, &m8325_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_006e:
	{
		t2* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_10 = m331(NULL, L_9, (t2*) &_stringLiteral1370, &m331_MI);
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
		t1663 * L_12 = p0;
		t2* L_13 = V_0;
		t2* L_14 = V_1;
		m8323(L_12, L_13, L_14, &m8323_MI);
		return;
	}
}
extern "C" void m8345 (t1661 * __this, MethodInfo* method)
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
		int32_t L_0 = m8332(__this, &m8332_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_1 = m8326(__this, &m8326_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = m8333(__this, &m8333_MI);
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
		t322 * L_8 = (__this->f5);
		m2758(L_8, ((int32_t)93), &m2758_MI);
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
		t322 * L_11 = (__this->f5);
		m2758(L_11, ((int32_t)93), &m2758_MI);
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
		t322 * L_15 = (__this->f5);
		uint16_t L_16 = V_1;
		m2758(L_15, L_16, &m2758_MI);
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
extern "C" void m8346 (t1661 * __this, MethodInfo* method)
{
	{
		m8334(__this, ((int32_t)45), &m8334_MI);
		m8334(__this, ((int32_t)45), &m8334_MI);
	}

IL_0010:
	{
		int32_t L_0 = m8333(__this, &m8333_MI);
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
		int32_t L_1 = m8333(__this, &m8333_MI);
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
		int32_t L_2 = m8333(__this, &m8333_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_003e;
		}
	}
	{
		t138 * L_3 = m8325(__this, (t2*) &_stringLiteral1371, &m8325_MI);
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

#include "t1369MD.h"
extern MethodInfo m7378_MI;
extern MethodInfo m5901_MI;


extern "C" void m8347 (t1666 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t2* L_7 = m7378(NULL, (t2*) &_stringLiteral1372, L_0, L_3, L_6, &m7378_MI);
		m5901(__this, L_7, &m5901_MI);
		int32_t L_8 = p1;
		__this->f11 = L_8;
		int32_t L_9 = p2;
		__this->f12 = L_9;
		return;
	}
}
#include "t1667.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1667_TI;
#include "t1667MD.h"



extern MethodInfo m8348_MI;
extern "C" t2* m8348 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m8348_ftn) ();
	static m8348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8348_ftn)il2cpp_codegen_resolve_icall ("Mono.Runtime::GetDisplayName()");
	return _il2cpp_icall_func();
}
#include "t1668.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1668_TI;
#include "t1668MD.h"



#include "t1669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1669_TI;
#include "t1669MD.h"

extern MethodInfo m11809_MI;


extern MethodInfo m8349_MI;
extern "C" void m8349 (t1669 * __this, MethodInfo* method)
{
	{
		m5901(__this, (t2*) &_stringLiteral1382, &m5901_MI);
		return;
	}
}
extern MethodInfo m8350_MI;
extern "C" void m8350 (t1669 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11809(__this, L_0, L_1, &m11809_MI);
		return;
	}
}
#include "t1670.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1670_TI;
#include "t1670MD.h"

#include "t1341.h"
extern TypeInfo t1341_TI;
#include "t1341MD.h"
extern MethodInfo m5714_MI;


extern MethodInfo m8351_MI;
extern "C" void m8351 (t1670 * __this, t1170 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1170 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t1170 * L_1 = p0;
		int32_t L_2 = (L_1->f3);
		__this->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t9 * L_3 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f4;
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m8352_MI;
extern "C" void m8352 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f4 = L_0;
		return;
	}
}
extern MethodInfo m8353_MI;
extern "C" bool m8353 (t1670 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t1170 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_3, (t2*) &_stringLiteral1399, &m5714_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		t1170 * L_7 = (__this->f0);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_7);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		t1170 * L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		t9 * L_11 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_9, L_10);
		__this->f3 = L_11;
		return 1;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t9 * L_12 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f4;
		__this->f3 = L_12;
		return 0;
	}
}
extern MethodInfo m8354_MI;
extern "C" t9 * m8354 (t1670 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t9 * L_1 = ((t1670_SFs*)InitializedTypeInfo(&t1670_TI)->static_fields)->f4;
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
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_3, (t2*) &_stringLiteral1397, &m5714_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_4, (t2*) &_stringLiteral1398, &m5714_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		t9 * L_5 = (__this->f3);
		return L_5;
	}
}
#include "t1671.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1671_TI;
#include "t1671MD.h"

#include "t126.h"
extern TypeInfo t998_TI;
extern TypeInfo t1165_TI;
extern TypeInfo t126_TI;
extern MethodInfo m5933_MI;
extern MethodInfo m8436_MI;
extern MethodInfo m8437_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m5876_MI;
extern MethodInfo m5877_MI;
extern MethodInfo m6968_MI;
extern MethodInfo m6969_MI;
extern MethodInfo m8440_MI;
extern MethodInfo m8441_MI;
extern MethodInfo m5857_MI;
extern MethodInfo m8442_MI;
extern MethodInfo m6944_MI;
extern MethodInfo m5938_MI;
extern MethodInfo m5929_MI;
extern MethodInfo m5878_MI;
extern MethodInfo m8443_MI;
extern MethodInfo m5849_MI;
extern MethodInfo m8446_MI;
extern MethodInfo m5937_MI;
extern MethodInfo m8444_MI;
extern MethodInfo m8445_MI;
extern MethodInfo m5858_MI;


extern MethodInfo m8355_MI;
extern "C" void m8355 (t1671 * __this, t1170 * p0, MethodInfo* method)
{
	{
		m5727(__this, &m5727_MI);
		t1170 * L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m8356_MI;
extern "C" t9 * m8356 (t1671 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8357_MI;
extern "C" void m8357 (t1671 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5933_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8358_MI;
extern "C" int32_t m8358 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8359_MI;
extern "C" int32_t m8359 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8436_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8360_MI;
extern "C" void m8360 (t1671 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8437_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8361_MI;
extern "C" bool m8361 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6966_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8362_MI;
extern "C" bool m8362 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6967_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8363_MI;
extern "C" bool m8363 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5876_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8364_MI;
extern "C" t9 * m8364 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5877_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8365_MI;
extern "C" int32_t m8365 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8366_MI;
extern "C" void m8366 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5879_MI, L_0);
		return;
	}
}
extern MethodInfo m8367_MI;
extern "C" bool m8367 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6968_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8368_MI;
extern "C" int32_t m8368 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6969_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8369_MI;
extern "C" int32_t m8369 (t1671 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8440_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m8370_MI;
extern "C" int32_t m8370 (t1671 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8441_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m8371_MI;
extern "C" void m8371 (t1671 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5857_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8372_MI;
extern "C" void m8372 (t1671 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8442_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8373_MI;
extern "C" void m8373 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6944_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8374_MI;
extern "C" void m8374 (t1671 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8375_MI;
extern "C" void m8375 (t1671 * __this, t121 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5929_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8376_MI;
extern "C" void m8376 (t1671 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5878_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8377_MI;
extern "C" void m8377 (t1671 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t121 * L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8443_MI, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
extern MethodInfo m8378_MI;
extern "C" t9 * m8378 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8379_MI;
extern "C" void m8379 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8380_MI;
extern "C" t9 * m8380 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8446_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8381_MI;
extern "C" void m8381 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5937_MI, L_0);
		return;
	}
}
extern MethodInfo m8382_MI;
extern "C" void m8382 (t1671 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8444_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8383_MI;
extern "C" t158* m8383 (t1671 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t158* L_1 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8445_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8384_MI;
extern "C" t121 * m8384 (t1671 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		t126 * L_1 = p0;
		t121 * L_2 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5858_MI, L_0, L_1);
		return L_2;
	}
}
#include "t1672.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1672_TI;
#include "t1672MD.h"

#include "t301MD.h"
extern MethodInfo m1083_MI;
extern MethodInfo m1085_MI;


extern MethodInfo m8385_MI;
extern "C" void m8385 (t1672 * __this, t1170 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = p0;
		m8355(__this, L_0, &m8355_MI);
		t1170 * L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5877_MI, L_1);
		__this->f6 = L_2;
		return;
	}
}
extern MethodInfo m8386_MI;
extern "C" t9 * m8386 (t1672 * __this, int32_t p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			int32_t L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_2, L_3);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8387_MI;
extern "C" void m8387 (t1672 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5933_MI, L_2, L_3, L_4);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8388_MI;
extern "C" int32_t m8388 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8389_MI;
extern "C" int32_t m8389 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8436_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8390_MI;
extern "C" void m8390 (t1672 * __this, int32_t p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8437_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8391_MI;
extern "C" bool m8391 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6966_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8392_MI;
extern "C" bool m8392 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6967_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8393_MI;
extern "C" bool m8393 (t1672 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8394_MI;
extern "C" t9 * m8394 (t1672 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8395_MI;
extern "C" int32_t m8395 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_2, L_3);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8396_MI;
extern "C" void m8396 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5879_MI, L_2);
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
		m1085(NULL, L_3, &m1085_MI);
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
extern MethodInfo m8397_MI;
extern "C" bool m8397 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			bool L_4 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6968_MI, L_2, L_3);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8398_MI;
extern "C" int32_t m8398 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6969_MI, L_2, L_3);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8399_MI;
extern "C" int32_t m8399 (t1672 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8440_MI, L_2, L_3, L_4);
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
		m1085(NULL, L_6, &m1085_MI);
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
extern MethodInfo m8400_MI;
extern "C" int32_t m8400 (t1672 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = p2;
			int32_t L_6 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8441_MI, L_2, L_3, L_4, L_5);
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
		m1085(NULL, L_7, &m1085_MI);
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
extern MethodInfo m8401_MI;
extern "C" void m8401 (t1672 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5857_MI, L_2, L_3, L_4);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8402_MI;
extern "C" void m8402 (t1672 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8442_MI, L_2, L_3, L_4);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8403_MI;
extern "C" void m8403 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6944_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8404_MI;
extern "C" void m8404 (t1672 * __this, int32_t p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8405_MI;
extern "C" void m8405 (t1672 * __this, t121 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5929_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8406_MI;
extern "C" void m8406 (t1672 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		int32_t L_4 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5878_MI, L_2, L_3, L_4);
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
		m1085(NULL, L_5, &m1085_MI);
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
extern MethodInfo m8407_MI;
extern "C" void m8407 (t1672 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t121 * L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8443_MI, L_2, L_3, L_4, L_5, L_6);
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
		m1085(NULL, L_7, &m1085_MI);
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
extern MethodInfo m8408_MI;
extern "C" t9 * m8408 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8409_MI;
extern "C" void m8409 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8410_MI;
extern "C" t9 * m8410 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8446_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8411_MI;
extern "C" void m8411 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5937_MI, L_2);
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
		m1085(NULL, L_3, &m1085_MI);
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
extern MethodInfo m8412_MI;
extern "C" void m8412 (t1672 * __this, t9 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1170 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8444_MI, L_2, L_3);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8413_MI;
extern "C" t158* m8413 (t1672 * __this, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t158* L_3 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8445_MI, L_2);
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
		m1085(NULL, L_4, &m1085_MI);
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
extern MethodInfo m8414_MI;
extern "C" t121 * m8414 (t1672 * __this, t126 * p0, MethodInfo* method)
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
		m1083(NULL, L_1, &m1083_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_2 = (__this->f5);
			t126 * L_3 = p0;
			t121 * L_4 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5858_MI, L_2, L_3);
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
		m1085(NULL, L_5, &m1085_MI);
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
#include "t1673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1673_TI;
#include "t1673MD.h"

extern MethodInfo m8416_MI;


extern MethodInfo m8415_MI;
extern "C" void m8415 (t1673 * __this, t1170 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = p0;
		m8355(__this, L_0, &m8355_MI);
		return;
	}
}
extern "C" t2* m8416 (t1673 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1400;
	}
}
extern MethodInfo m8417_MI;
extern "C" int32_t m8417 (t1673 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8359(__this, &m8359_MI);
		return L_0;
	}
}
extern MethodInfo m8418_MI;
extern "C" void m8418 (t1673 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8419_MI;
extern "C" bool m8419 (t1673 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8420_MI;
extern "C" int32_t m8420 (t1673 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8421_MI;
extern "C" void m8421 (t1673 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8422_MI;
extern "C" void m8422 (t1673 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8423_MI;
extern "C" void m8423 (t1673 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8424_MI;
extern "C" void m8424 (t1673 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8425_MI;
extern "C" void m8425 (t1673 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8426_MI;
extern "C" void m8426 (t1673 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8416_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#include "t1674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;
#include "t1674MD.h"

extern MethodInfo m8428_MI;


extern MethodInfo m8427_MI;
extern "C" void m8427 (t1674 * __this, t1170 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = p0;
		m8415(__this, L_0, &m8415_MI);
		return;
	}
}
extern "C" t2* m8428 (t1674 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1401;
	}
}
extern MethodInfo m8429_MI;
extern "C" bool m8429 (t1674 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8430_MI;
extern "C" t9 * m8430 (t1674 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8431_MI;
extern "C" void m8431 (t1674 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8428_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8432_MI;
extern "C" void m8432 (t1674 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8428_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8433_MI;
extern "C" void m8433 (t1674 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8428_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_1, L_0, &m5735_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2140.h"
extern TypeInfo t2140_TI;
#include "t2140MD.h"
extern MethodInfo m8447_MI;
extern MethodInfo m7711_MI;
extern MethodInfo m5724_MI;
extern MethodInfo m11786_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m8438_MI;
extern MethodInfo m8439_MI;
extern MethodInfo m11998_MI;
extern MethodInfo m5710_MI;
extern MethodInfo m7728_MI;
extern MethodInfo m7696_MI;
extern MethodInfo m8434_MI;
extern MethodInfo m11146_MI;
struct t121;
#include "t2175.h"
extern "C" int32_t m11999_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11999(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m11999_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
extern "C" void m12000_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m12000(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, int32_t, MethodInfo*))m12000_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m11999_GM;
extern Il2CppGenericMethod m12000_GM;


extern "C" void m5727 (t1170 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t158* L_0 = ((t1170_SFs*)InitializedTypeInfo(&t1170_TI)->static_fields)->f4;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m5769_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5769 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	static bool m5769_init;
	if (!m5769_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5769_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1389, &m339_MI);
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
		int32_t L_5 = m5724(L_4, &m5724_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t2140 * L_6 = (t2140 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2140_TI));
		m11786(L_6, &m11786_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t9 * L_7 = p0;
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5702_MI, L_7);
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, L_8));
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, __this, L_9);
		return;
	}
}
extern MethodInfo m5882_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5882 (t1170 * __this, int32_t p0, MethodInfo* method)
{
	static bool m5882_init;
	if (!m5882_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5882_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral395, L_3, (t2*) &_stringLiteral1390, &m8447_MI);
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
extern "C" void m8434 (t1170 * __this, t158* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8434_init;
	if (!m8434_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8434_init = true;
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
		m7711(NULL, (t121 *)(t121 *)L_2, L_3, (t121 *)(t121 *)L_4, 0, L_5, &m7711_MI);
		int32_t L_6 = p2;
		__this->f1 = L_6;
		return;
	}
}
extern MethodInfo m8435_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8435 (t9 * __this , MethodInfo* method)
{
	static bool m8435_init;
	if (!m8435_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8435_init = true;
	}
	{
		((t1170_SFs*)InitializedTypeInfo(&t1170_TI)->static_fields)->f4 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern "C" t9 * m5725 (t1170 * __this, int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral396, L_5, (t2*) &_stringLiteral1386, &m8447_MI);
	}

IL_0022:
	{
		t158* L_6 = (__this->f2);
		int32_t L_7 = p0;
		int32_t L_8 = L_7;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_6, L_8));
	}
}
extern "C" void m5933 (t1170 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral396, L_5, (t2*) &_stringLiteral1386, &m8447_MI);
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
extern "C" int32_t m5723 (t1170 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m8436 (t1170 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8437 (t1170 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8437_init;
	if (!m8437_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8437_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral1387, L_4, (t2*) &_stringLiteral1388, &m8447_MI);
	}

IL_001e:
	{
		int32_t L_5 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		t158* L_6 = (__this->f2);
		t158* L_7 = V_0;
		int32_t L_8 = (__this->f1);
		m7711(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, 0, L_8, &m7711_MI);
		t158* L_9 = V_0;
		__this->f2 = L_9;
		return;
	}
}
extern "C" bool m6966 (t1170 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m6967 (t1170 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5876 (t1170 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m5877 (t1170 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8438 (t1170 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8438_init;
	if (!m8438_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8438_init = true;
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
		m7711(NULL, (t121 *)(t121 *)L_8, 0, (t121 *)(t121 *)L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))), &m7711_MI);
		t158* L_11 = V_1;
		__this->f2 = L_11;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8439 (t1170 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8439_init;
	if (!m8439_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8439_init = true;
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
		m7711(NULL, (t121 *)(t121 *)L_11, 0, (t121 *)(t121 *)L_12, 0, L_13, &m7711_MI);
		t158* L_14 = (__this->f2);
		int32_t L_15 = p0;
		t158* L_16 = V_1;
		int32_t L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = (__this->f1);
		int32_t L_20 = p0;
		m7711(NULL, (t121 *)(t121 *)L_14, L_15, (t121 *)(t121 *)L_16, ((int32_t)((int32_t)L_17+(int32_t)L_18)), ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m7711_MI);
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
		m7711(NULL, (t121 *)(t121 *)L_22, L_23, (t121 *)(t121 *)L_24, ((int32_t)((int32_t)L_25+(int32_t)L_26)), ((int32_t)((int32_t)L_27-(int32_t)L_28)), &m7711_MI);
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
		m7711(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, L_35, ((int32_t)((int32_t)L_36-(int32_t)L_37)), &m7711_MI);
		t158* L_38 = (__this->f2);
		int32_t L_39 = (__this->f1);
		int32_t L_40 = p1;
		int32_t L_41 = p1;
		m1162(NULL, (t121 *)(t121 *)L_38, ((int32_t)((int32_t)L_39+(int32_t)L_40)), ((-L_41)), &m1162_MI);
	}

IL_00d1:
	{
		return;
	}
}
extern "C" int32_t m5738 (t1170 * __this, t9 * p0, MethodInfo* method)
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
		m8438(__this, ((int32_t)((int32_t)L_2+(int32_t)1)), &m8438_MI);
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
extern "C" void m5879 (t1170 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m1162(NULL, (t121 *)(t121 *)L_0, 0, L_1, &m1162_MI);
		__this->f1 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" bool m6968 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8441_MI, __this, L_0, 0, L_1);
		return ((((int32_t)L_2) > ((int32_t)(-1)))? 1 : 0);
	}
}
extern "C" int32_t m6969 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8440_MI, __this, L_0, 0);
		return L_1;
	}
}
extern "C" int32_t m8440 (t1170 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8441_MI, __this, L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)));
		return L_4;
	}
}
extern MethodInfo* m11999_MI_var;
extern "C" int32_t m8441 (t1170 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8441_init;
	if (!m8441_init)
	{
		m11999_MI_var = il2cpp_codegen_genericmethod_get_method(&m11999_GM);
		m8441_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral1112, L_5, (t2*) &_stringLiteral1391, &m8447_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral488, L_9, (t2*) &_stringLiteral1392, &m8447_MI);
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
		t903 * L_13 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_13, (t2*) &_stringLiteral488, (t2*) &_stringLiteral1393, &m4361_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0056:
	{
		t158* L_14 = (__this->f2);
		t9 * L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = m11999(NULL, L_14, L_15, L_16, L_17, m11999_MI_var);
		return L_18;
	}
}
extern "C" void m5857 (t1170 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral396, L_5, (t2*) &_stringLiteral1394, &m8447_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8439(__this, L_6, 1, &m8439_MI);
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
extern "C" void m8442 (t1170 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1389, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral396, L_7, (t2*) &_stringLiteral1394, &m8447_MI);
	}

IL_0030:
	{
		t9 * L_8 = p1;
		int32_t L_9 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5702_MI, L_8);
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
		m8438(__this, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m8438_MI);
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
		m7711(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, ((int32_t)((int32_t)L_20+(int32_t)L_21)), ((int32_t)((int32_t)L_22-(int32_t)L_23)), &m7711_MI);
	}

IL_007d:
	{
		t9 * L_24 = p1;
		t9 * L_25 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11998_MI, L_24);
		if ((!(((t9*)(t1170 *)__this) == ((t9*)(t9 *)L_25))))
		{
			goto IL_00bb;
		}
	}
	{
		t158* L_26 = (__this->f2);
		t158* L_27 = (__this->f2);
		int32_t L_28 = p0;
		int32_t L_29 = p0;
		m7711(NULL, (t121 *)(t121 *)L_26, 0, (t121 *)(t121 *)L_27, L_28, L_29, &m7711_MI);
		t158* L_30 = (__this->f2);
		int32_t L_31 = p0;
		int32_t L_32 = V_0;
		t158* L_33 = (__this->f2);
		int32_t L_34 = p0;
		int32_t L_35 = (__this->f1);
		int32_t L_36 = p0;
		m7711(NULL, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)L_32)), (t121 *)(t121 *)L_33, ((int32_t)((int32_t)L_34<<(int32_t)1)), ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m7711_MI);
		goto IL_00c8;
	}

IL_00bb:
	{
		t9 * L_37 = p1;
		t158* L_38 = (__this->f2);
		int32_t L_39 = p0;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5710_MI, L_37, (t121 *)(t121 *)L_38, L_39);
	}

IL_00c8:
	{
		int32_t L_40 = (__this->f1);
		t9 * L_41 = p1;
		int32_t L_42 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5702_MI, L_41);
		__this->f1 = ((int32_t)((int32_t)L_40+(int32_t)L_42));
		int32_t L_43 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_43+(int32_t)1));
		return;
	}
}
extern "C" void m6944 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6969_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_4+(int32_t)1));
		return;
	}
}
extern "C" void m5938 (t1170 * __this, int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		m8447(NULL, (t2*) &_stringLiteral396, L_5, (t2*) &_stringLiteral1395, &m8447_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8439(__this, L_6, (-1), &m8439_MI);
		int32_t L_7 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern "C" void m5929 (t1170 * __this, t121 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		t121 * L_1 = p0;
		int32_t L_2 = (__this->f1);
		m5941(NULL, (t121 *)(t121 *)L_0, L_1, L_2, &m5941_MI);
		return;
	}
}
extern "C" void m5878 (t1170 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8443_MI, __this, 0, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m8443 (t1170 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p1;
		int32_t L_3 = m5724(L_2, &m5724_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_4, (t2*) &_stringLiteral1396, (t2*) &_stringLiteral325, &m5720_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t158* L_5 = (__this->f2);
		int32_t L_6 = p0;
		t121 * L_7 = p1;
		int32_t L_8 = p2;
		int32_t L_9 = p3;
		m7711(NULL, (t121 *)(t121 *)L_5, L_6, L_7, L_8, L_9, &m7711_MI);
		return;
	}
}
extern "C" t9 * m5728 (t1170 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1670_TI));
		t1670 * L_0 = (t1670 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1670_TI));
		m8351(L_0, __this, &m8351_MI);
		return L_0;
	}
}
extern "C" void m5849 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t9 * L_1 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8442_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo* m12000_MI_var;
extern "C" void m5937 (t1170 * __this, MethodInfo* method)
{
	static bool m5937_init;
	if (!m5937_init)
	{
		m12000_MI_var = il2cpp_codegen_genericmethod_get_method(&m12000_GM);
		m5937_init = true;
	}
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m12000(NULL, L_0, 0, L_1, m12000_MI_var);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" void m8444 (t1170 * __this, t9 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		t9 * L_2 = p0;
		m7728(NULL, (t121 *)(t121 *)L_0, 0, L_1, L_2, &m7728_MI);
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m8445 (t1170 * __this, MethodInfo* method)
{
	static bool m8445_init;
	if (!m8445_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8445_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_0));
		t158* L_1 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5929_MI, __this, (t121 *)(t121 *)L_1);
		t158* L_2 = V_0;
		return L_2;
	}
}
extern "C" t121 * m5858 (t1170 * __this, t126 * p0, MethodInfo* method)
{
	t121 * V_0 = {0};
	{
		t126 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		t121 * L_2 = m7696(NULL, L_0, L_1, &m7696_MI);
		V_0 = L_2;
		t121 * L_3 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5929_MI, __this, L_3);
		t121 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t9 * m8446 (t1170 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_2 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m8434(L_2, L_0, 0, L_1, &m8434_MI);
		return L_2;
	}
}
extern "C" void m8447 (t9 * __this , t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		t2* L_2 = p2;
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m11146(L_3, L_0, L_1, L_2, &m11146_MI);
		il2cpp_codegen_raise_exception(L_3);
	}
}
extern MethodInfo m8448_MI;
extern "C" t1170 * m8448 (t9 * __this , t1170 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1385, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1170 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5876_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1170 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1170 * L_5 = p0;
		t1672 * L_6 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8385(L_6, L_5, &m8385_MI);
		return L_6;
	}
}
extern MethodInfo m6921_MI;
extern "C" t1170 * m6921 (t9 * __this , t1170 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1385, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1170 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6967_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1170 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1170 * L_5 = p0;
		t1674 * L_6 = (t1674 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1674_TI));
		m8427(L_6, L_5, &m8427_MI);
		return L_6;
	}
}
#include "t1675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1675_TI;
#include "t1675MD.h"

#include "t1292.h"
extern TypeInfo t1292_TI;
#include "t1292MD.h"
extern MethodInfo m8454_MI;
extern MethodInfo m8452_MI;
extern MethodInfo m5931_MI;
extern MethodInfo m5721_MI;


extern MethodInfo m8449_MI;
extern "C" void m8449 (t1675 * __this, t1292 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f2 = (-1);
		t1292 * L_0 = p0;
		__this->f0 = L_0;
		t1292 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f3 = L_2;
		return;
	}
}
extern MethodInfo m8450_MI;
extern "C" t9 * m8450 (t1675 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_1, (t2*) &_stringLiteral1405, &m5714_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = (__this->f2);
		t1292 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8454_MI, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, (t2*) &_stringLiteral1406, &m5714_MI);
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
extern MethodInfo m8451_MI;
extern "C" bool m8451 (t1675 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8452(__this, &m8452_MI);
		int32_t L_0 = (__this->f2);
		t1292 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8454_MI, L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)L_2-(int32_t)1)))))
		{
			goto IL_003f;
		}
	}
	{
		t1292 * L_3 = (__this->f0);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f2 = L_5;
		int32_t L_6 = V_0;
		bool L_7 = m5931(L_3, L_6, &m5931_MI);
		__this->f1 = L_7;
		return 1;
	}

IL_003f:
	{
		t1292 * L_8 = (__this->f0);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8454_MI, L_8);
		__this->f2 = L_9;
		return 0;
	}
}
extern "C" void m8452 (t1675 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		t1292 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f2);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_3, &m5721_MI);
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

extern TypeInfo t1095_TI;
extern TypeInfo t1206_TI;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t1206_0_0_0;
extern MethodInfo m8458_MI;
extern MethodInfo m8459_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m5718_MI;
extern MethodInfo m11138_MI;
extern MethodInfo m8453_MI;
extern MethodInfo m5899_MI;


extern MethodInfo m5974_MI;
extern TypeInfo* t1095_TI_var;
extern "C" void m5974 (t1292 * __this, int32_t p0, MethodInfo* method)
{
	static bool m5974_init;
	if (!m5974_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m5974_init = true;
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
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_1, (t2*) &_stringLiteral1113, &m5722_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = p0;
		__this->f1 = L_2;
		int32_t L_3 = (__this->f1);
		__this->f0 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32)))));
		return;
	}
}
extern "C" uint8_t m8453 (t1292 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)4));
		int32_t L_1 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1%(int32_t)4))*(int32_t)8));
		t1095* L_2 = (__this->f0);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))&(int32_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))))));
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		return (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)255)))));
	}
}
extern "C" int32_t m8454 (t1292 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8455_MI;
extern "C" bool m8455 (t1292 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5931 (t1292 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8458(__this, L_0, &m8458_MI);
		return L_1;
	}
}
extern MethodInfo m5975_MI;
extern "C" void m5975 (t1292 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8459(__this, L_0, L_1, &m8459_MI);
		return;
	}
}
extern MethodInfo m5930_MI;
extern "C" int32_t m5930 (t1292 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8456_MI;
extern "C" t9 * m8456 (t1292 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m8457_MI;
extern TypeInfo* t1206_TI_var;
extern TypeInfo* t730_TI_var;
extern TypeInfo* t1095_TI_var;
extern "C" void m8457 (t1292 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8457_init;
	if (!m8457_init)
	{
		t1206_TI_var = il2cpp_codegen_class_from_type(&t1206_0_0_0);
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8457_init = true;
	}
	t1206* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t730* V_3 = {0};
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_3, (t2*) &_stringLiteral396, &m5722_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5724(L_4, &m5724_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_6, (t2*) &_stringLiteral325, (t2*) &_stringLiteral1402, &m5720_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5718(L_8, &m5718_MI);
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
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_11, (t2*) &_stringLiteral396, (t2*) &_stringLiteral1403, &m5720_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0058:
	{
		t121 * L_12 = p0;
		if (!((t1206*)IsInst(L_12, t1206_TI_var)))
		{
			goto IL_009f;
		}
	}
	{
		t121 * L_13 = p0;
		int32_t L_14 = m5718(L_13, &m5718_MI);
		int32_t L_15 = p1;
		int32_t L_16 = (__this->f1);
		if ((((int32_t)((int32_t)((int32_t)L_14-(int32_t)L_15))) >= ((int32_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_17, &m11138_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0076:
	{
		t121 * L_18 = p0;
		V_0 = ((t1206*)Castclass(L_18, t1206_TI_var));
		V_1 = 0;
		goto IL_0091;
	}

IL_0081:
	{
		t1206* L_19 = V_0;
		int32_t L_20 = p1;
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		bool L_23 = m5931(__this, L_22, &m5931_MI);
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
		if (!((t730*)IsInst(L_27, t730_TI_var)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_28 = (__this->f1);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)7))/(int32_t)8));
		t121 * L_29 = p0;
		int32_t L_30 = m5718(L_29, &m5718_MI);
		int32_t L_31 = p1;
		int32_t L_32 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))) >= ((int32_t)L_32)))
		{
			goto IL_00c3;
		}
	}
	{
		t563 * L_33 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_33, &m11138_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00c3:
	{
		t121 * L_34 = p0;
		V_3 = ((t730*)Castclass(L_34, t730_TI_var));
		V_4 = 0;
		goto IL_00e3;
	}

IL_00cf:
	{
		t730* L_35 = V_3;
		int32_t L_36 = p1;
		int32_t L_37 = V_4;
		int32_t L_38 = V_4;
		uint8_t L_39 = m8453(__this, L_38, &m8453_MI);
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
		if (!((t1095*)IsInst(L_43, t1095_TI_var)))
		{
			goto IL_010e;
		}
	}
	{
		t1095* L_44 = (__this->f0);
		t121 * L_45 = p0;
		int32_t L_46 = p1;
		int32_t L_47 = (__this->f1);
		m7711(NULL, (t121 *)(t121 *)L_44, 0, L_45, L_46, ((int32_t)((int32_t)((int32_t)((int32_t)L_47+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32))), &m7711_MI);
		goto IL_011e;
	}

IL_010e:
	{
		t563 * L_48 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_48, (t2*) &_stringLiteral325, (t2*) &_stringLiteral1404, &m5720_MI);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_011e:
	{
		return;
	}
}
extern "C" bool m8458 (t1292 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_3, &m5899_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t1095* L_4 = (__this->f0);
		int32_t L_5 = p0;
		int32_t L_6 = ((int32_t)((int32_t)L_5>>(int32_t)5));
		int32_t L_7 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8459 (t1292 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_3, &m5899_MI);
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
		t1095* L_5 = (__this->f0);
		int32_t L_6 = p0;
		int32_t* L_7 = ((int32_t*)(int32_t*)SZArrayLdElema(L_5, ((int32_t)((int32_t)L_6>>(int32_t)5))));
		int32_t L_8 = p0;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_7))|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		goto IL_0055;
	}

IL_0036:
	{
		t1095* L_9 = (__this->f0);
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
extern MethodInfo m8460_MI;
extern "C" t9 * m8460 (t1292 * __this, MethodInfo* method)
{
	{
		t1675 * L_0 = (t1675 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1675_TI));
		m8449(L_0, __this, &m8449_MI);
		return L_0;
	}
}
#include "t1339.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1339_TI;
#include "t1339MD.h"

#include "t1546.h"
#include "t1547.h"
#include "t1677.h"
extern TypeInfo t1546_TI;
extern TypeInfo t1547_TI;
extern TypeInfo t1677_TI;
#include "t1546MD.h"
#include "t1677MD.h"
extern MethodInfo m6970_MI;
extern MethodInfo m8461_MI;
extern MethodInfo m8462_MI;
extern MethodInfo m6971_MI;
extern MethodInfo m6972_MI;
extern MethodInfo m8474_MI;


extern "C" void m8461 (t1339 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = m6970(NULL, &m6970_MI);
		__this->f2 = L_0;
		return;
	}
}
extern "C" void m8462 (t1339 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8463_MI;
extern "C" void m8463 (t9 * __this , MethodInfo* method)
{
	{
		t1339 * L_0 = (t1339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1339_TI));
		m8461(L_0, &m8461_MI);
		((t1339_SFs*)InitializedTypeInfo(&t1339_TI)->static_fields)->f0 = L_0;
		t1339 * L_1 = (t1339 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1339_TI));
		m8462(L_1, 1, &m8462_MI);
		((t1339_SFs*)InitializedTypeInfo(&t1339_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern MethodInfo m5705_MI;
extern "C" t1339 * m5705 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1339_TI));
		t1339 * L_0 = ((t1339_SFs*)InitializedTypeInfo(&t1339_TI)->static_fields)->f1;
		return L_0;
	}
}
extern MethodInfo m8464_MI;
extern "C" int32_t m8464 (t1339 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		t901 * L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		t901 * L_5 = (__this->f2);
		t1546 * L_6 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m6971_MI, L_5);
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6972_MI, L_6, L_7, L_8, 1);
		return L_9;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_10 = m4359(NULL, &m4359_MI);
		t1546 * L_11 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m6971_MI, L_10);
		t2* L_12 = V_0;
		t2* L_13 = V_1;
		int32_t L_14 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6972_MI, L_11, L_12, L_13, 1);
		return L_14;
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1677_TI));
		t1677 * L_15 = ((t1677_SFs*)InitializedTypeInfo(&t1677_TI)->static_fields)->f0;
		t9 * L_16 = p0;
		t9 * L_17 = p1;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m8474_MI, L_15, L_16, L_17);
		return L_18;
	}
}
#include "t1340.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1340_TI;
#include "t1340MD.h"

#include "t1616.h"
extern TypeInfo t1616_TI;
#include "t1616MD.h"
extern MethodInfo m8468_MI;
extern MethodInfo m8657_MI;
extern MethodInfo m8466_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m8771_MI;
extern MethodInfo m8469_MI;
extern MethodInfo m8777_MI;
extern MethodInfo m7322_MI;


extern MethodInfo m8465_MI;
extern "C" void m8465 (t1340 * __this, MethodInfo* method)
{
	t901 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = m6970(NULL, &m6970_MI);
		V_0 = L_0;
		t901 * L_1 = V_0;
		t901 * L_2 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1340_TI));
		bool L_3 = m8468(NULL, L_1, L_2, &m8468_MI);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_4 = m6970(NULL, &m6970_MI);
		t1616 * L_5 = (t1616 *)VirtFuncInvoker0< t1616 * >::Invoke(&m8657_MI, L_4);
		__this->f2 = L_5;
	}

IL_0029:
	{
		return;
	}
}
extern "C" void m8466 (t1340 * __this, t901 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t901 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1102, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t901 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_3 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1340_TI));
		bool L_4 = m8468(NULL, L_2, L_3, &m8468_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t901 * L_5 = p0;
		t1616 * L_6 = (t1616 *)VirtFuncInvoker0< t1616 * >::Invoke(&m8657_MI, L_5);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m8467_MI;
extern "C" void m8467 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = m4359(NULL, &m4359_MI);
		t1340 * L_1 = (t1340 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1340_TI));
		m8466(L_1, L_0, &m8466_MI);
		((t1340_SFs*)InitializedTypeInfo(&t1340_TI)->static_fields)->f0 = L_1;
		t9 * L_2 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_2, &m336_MI);
		((t1340_SFs*)InitializedTypeInfo(&t1340_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" bool m8468 (t9 * __this , t901 * p0, t901 * p1, MethodInfo* method)
{
	{
		t901 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8655_MI, L_0);
		t901 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8655_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern "C" bool m8469 (t9 * __this , t1616 * p0, t901 * p1, MethodInfo* method)
{
	{
		t1616 * L_0 = p0;
		t2* L_1 = m8771(L_0, &m8771_MI);
		t901 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8655_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m5706_MI;
extern "C" t1340 * m5706 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1340_TI));
		t1340 * L_0 = ((t1340_SFs*)InitializedTypeInfo(&t1340_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m8470_MI;
extern "C" int32_t m8470 (t1340 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1407, &m339_MI);
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
		t1616 * L_6 = (__this->f2);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		t1616 * L_7 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_8 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1340_TI));
		bool L_9 = m8469(NULL, L_7, L_8, &m8469_MI);
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		t1616 * L_10 = (__this->f2);
		t2* L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker1< t2*, t2* >::Invoke(&m8777_MI, L_10, L_11);
		V_0 = L_12;
		V_3 = 0;
		goto IL_005f;
	}

IL_004c:
	{
		t2* L_13 = V_0;
		int32_t L_14 = V_3;
		uint16_t L_15 = m2739(L_13, L_14, &m2739_MI);
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
		int32_t L_21 = m2724(L_20, &m2724_MI);
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
		uint16_t L_24 = m2739(L_22, L_23, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_25 = m4359(NULL, &m4359_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_26 = m7322(NULL, L_24, L_25, &m7322_MI);
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
		int32_t L_32 = m2724(L_31, &m2724_MI);
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

extern MethodInfo m6072_MI;
extern MethodInfo m6070_MI;
extern MethodInfo m6071_MI;
extern MethodInfo m6066_MI;
extern MethodInfo m6067_MI;
extern MethodInfo m6068_MI;
extern MethodInfo m6069_MI;
extern MethodInfo m6064_MI;
extern MethodInfo m6065_MI;


extern "C" void m5855 (t1234 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m6053_MI;
extern "C" void m6053 (t1234 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5878_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m6052_MI;
extern "C" t9 * m6052 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5877_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6051_MI;
extern "C" bool m6051 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5876_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6058_MI;
extern "C" int32_t m6058 (t1234 * __this, t9 * p0, MethodInfo* method)
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
		VirtActionInvoker1< t9 * >::Invoke(&m6072_MI, __this, L_0);
		t1170 * L_1 = m5848(__this, &m5848_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		t9 * L_4 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6066_MI, __this, L_3, L_4);
		t1170 * L_5 = m5848(__this, &m5848_MI);
		t9 * L_6 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_5, L_6);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		int32_t L_7 = V_0;
		t9 * L_8 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6067_MI, __this, L_7, L_8);
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
		t1170 * L_9 = m5848(__this, &m5848_MI);
		int32_t L_10 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, L_9, L_10);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0043;
	} // end catch (depth: 1)

IL_0043:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m6059_MI;
extern "C" bool m6059 (t1234 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m6968_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6060_MI;
extern "C" int32_t m6060 (t1234 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6969_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6061_MI;
extern "C" void m6061 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6072_MI, __this, L_0);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6066_MI, __this, L_1, L_2);
		t1170 * L_3 = m5848(__this, &m5848_MI);
		int32_t L_4 = p0;
		t9 * L_5 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5857_MI, L_3, L_4, L_5);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = p0;
		t9 * L_7 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6067_MI, __this, L_6, L_7);
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
		t1170 * L_8 = m5848(__this, &m5848_MI);
		int32_t L_9 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, L_8, L_9);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
extern MethodInfo m6062_MI;
extern "C" void m6062 (t1234 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6072_MI, __this, L_0);
		t1170 * L_1 = m5848(__this, &m5848_MI);
		t9 * L_2 = p0;
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m6969_MI, L_1, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_5, (t2*) &_stringLiteral1408, (t2*) &_stringLiteral606, &m5720_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		t9 * L_7 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6068_MI, __this, L_6, L_7);
		t1170 * L_8 = m5848(__this, &m5848_MI);
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6944_MI, L_8, L_9);
		int32_t L_10 = V_0;
		t9 * L_11 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6069_MI, __this, L_10, L_11);
		return;
	}
}
extern MethodInfo m6054_MI;
extern "C" bool m6054 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6966_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6055_MI;
extern "C" bool m6055 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m6967_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6056_MI;
extern "C" t9 * m6056 (t1234 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6057_MI;
extern "C" void m6057 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		t1170 * L_2 = m5848(__this, &m5848_MI);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_4, (t2*) &_stringLiteral396, &m5722_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t9 * L_5 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6072_MI, __this, L_5);
		t1170 * L_6 = m5848(__this, &m5848_MI);
		int32_t L_7 = p0;
		t9 * L_8 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_6, L_7);
		V_0 = L_8;
		int32_t L_9 = p0;
		t9 * L_10 = V_0;
		t9 * L_11 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6070_MI, __this, L_9, L_10, L_11);
		t1170 * L_12 = m5848(__this, &m5848_MI);
		int32_t L_13 = p0;
		t9 * L_14 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5933_MI, L_12, L_13, L_14);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		int32_t L_15 = p0;
		t9 * L_16 = V_0;
		t9 * L_17 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6071_MI, __this, L_15, L_16, L_17);
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
		t1170 * L_18 = m5848(__this, &m5848_MI);
		int32_t L_19 = p0;
		t9 * L_20 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5933_MI, L_18, L_19, L_20);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0064;
	} // end catch (depth: 1)

IL_0064:
	{
		return;
	}
}
extern MethodInfo m5833_MI;
extern "C" int32_t m5833 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5723_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m5872_MI;
extern "C" t9 * m5872 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5728_MI, L_0);
		return L_1;
	}
}
extern "C" void m5886 (t1234 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m6064_MI, __this);
		t1170 * L_0 = m5848(__this, &m5848_MI);
		VirtActionInvoker0::Invoke(&m5879_MI, L_0);
		VirtActionInvoker0::Invoke(&m6065_MI, __this);
		return;
	}
}
extern MethodInfo m6063_MI;
extern "C" void m6063 (t1234 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1170 * L_0 = m5848(__this, &m5848_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5725_MI, L_0, L_1);
		V_0 = L_2;
		t9 * L_3 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m6072_MI, __this, L_3);
		int32_t L_4 = p0;
		t9 * L_5 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6068_MI, __this, L_4, L_5);
		t1170 * L_6 = m5848(__this, &m5848_MI);
		int32_t L_7 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5938_MI, L_6, L_7);
		int32_t L_8 = p0;
		t9 * L_9 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6069_MI, __this, L_8, L_9);
		return;
	}
}
extern "C" t1170 * m5848 (t1234 * __this, MethodInfo* method)
{
	{
		t1170 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_1, &m5727_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1170 * L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m5942_MI;
extern "C" t9 * m5942 (t1234 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m6064 (t1234 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6065 (t1234 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6066 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6067 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6068 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6069 (t1234 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6070 (t1234 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6071 (t1234 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6072 (t1234 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1409, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
#include "t1676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;
#include "t1676MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t127.h"
extern TypeInfo t185_TI;
#include "t126MD.h"
extern Il2CppType t1546_0_0_0;
extern MethodInfo m8471_MI;
extern MethodInfo m8472_MI;
extern MethodInfo m8631_MI;
extern MethodInfo m11969_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5729_MI;


extern "C" void m8471 (t1677 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" void m8472 (t1677 * __this, t901 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t901 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1102, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t901 * L_2 = p0;
		t1546 * L_3 = (t1546 *)VirtFuncInvoker0< t1546 * >::Invoke(&m6971_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m8473_MI;
extern "C" void m8473 (t9 * __this , MethodInfo* method)
{
	{
		t1677 * L_0 = (t1677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1677_TI));
		m8471(L_0, &m8471_MI);
		((t1677_SFs*)InitializedTypeInfo(&t1677_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_1 = m4359(NULL, &m4359_MI);
		t1677 * L_2 = (t1677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1677_TI));
		m8472(L_2, L_1, &m8472_MI);
		((t1677_SFs*)InitializedTypeInfo(&t1677_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" int32_t m8474 (t1677 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		t1546 * L_4 = (__this->f2);
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
		t1546 * L_9 = (__this->f2);
		t2* L_10 = V_0;
		t2* L_11 = V_1;
		int32_t L_12 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m8631_MI, L_9, L_10, L_11);
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
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11969_MI, ((t9 *)IsInst(L_14, InitializedTypeInfo(&t185_TI))), L_15);
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
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11969_MI, ((t9 *)IsInst(L_18, InitializedTypeInfo(&t185_TI))), L_19);
		return ((-L_20));
	}

IL_0065:
	{
		t2* L_21 = m7847(NULL, (t2*) &_stringLiteral1410, &m7847_MI);
		t563 * L_22 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_22, L_21, &m2910_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern MethodInfo m8475_MI;
extern "C" void m8475 (t1677 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		t1546 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1546_0_0_0), &m329_MI);
		m5729(L_2, (t2*) &_stringLiteral1411, L_3, L_4, &m5729_MI);
		return;
	}
}
#include "t1164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1164_TI;
#include "t1164MD.h"



extern MethodInfo m5715_MI;
extern "C" void m5715 (t1164 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f0 = L_0;
		t9 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8476_MI;
extern "C" t9 * m8476 (t1164 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8477_MI;
extern "C" t9 * m8477 (t1164 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
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

extern MethodInfo m8478_MI;


extern "C" void m8478 (t1679 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8479_MI;
extern "C" void m8479 (t9 * __this , MethodInfo* method)
{
	{
		t1679 * L_0 = (t1679 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1679_TI));
		m8478(L_0, &m8478_MI);
		((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1680_TI;
#include "t1680MD.h"



#include "t1681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1681_TI;
#include "t1681MD.h"

#include "t1158.h"
extern TypeInfo t1158_TI;
extern MethodInfo m8482_MI;
extern MethodInfo m8483_MI;


extern MethodInfo m8480_MI;
extern "C" void m8480 (t1681 * __this, t1158 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1158 * L_0 = p0;
		__this->f0 = L_0;
		t1158 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1158 * L_3 = p0;
		t1684* L_4 = (L_3->f4);
		__this->f3 = (((int32_t)(((t121 *)L_4)->max_length)));
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8483_MI, __this);
		return;
	}
}
extern MethodInfo m8481_MI;
extern "C" void m8481 (t9 * __this , MethodInfo* method)
{
	{
		((t1681_SFs*)InitializedTypeInfo(&t1681_TI)->static_fields)->f7 = (t2*) &_stringLiteral1425;
		return;
	}
}
extern "C" void m8482 (t1681 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		int32_t L_1 = (L_0->f2);
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t2* L_3 = ((t1681_SFs*)InitializedTypeInfo(&t1681_TI)->static_fields)->f7;
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_4, L_3, &m5714_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		return;
	}
}
extern "C" void m8483 (t1681 * __this, MethodInfo* method)
{
	{
		m8482(__this, &m8482_MI);
		__this->f2 = (-1);
		__this->f5 = NULL;
		__this->f6 = NULL;
		return;
	}
}
extern MethodInfo m8484_MI;
extern "C" bool m8484 (t1681 * __this, MethodInfo* method)
{
	t1678  V_0 = {0};
	int32_t V_1 = 0;
	{
		m8482(__this, &m8482_MI);
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
		t1158 * L_2 = (__this->f0);
		t1684* L_3 = (L_2->f4);
		int32_t L_4 = (__this->f2);
		V_0 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_3, L_4)));
		t9 * L_5 = ((&V_0)->f0);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t9 * L_6 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1679_TI));
		t1679 * L_7 = ((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0;
		if ((((t9*)(t9 *)L_6) == ((t9*)(t1679 *)L_7)))
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
extern MethodInfo m8485_MI;
extern "C" t1164  m8485 (t1681 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8482(__this, &m8482_MI);
		t9 * L_2 = (__this->f5);
		t9 * L_3 = (__this->f6);
		t1164  L_4 = {0};
		m5715(&L_4, L_2, L_3, &m5715_MI);
		return L_4;
	}
}
extern MethodInfo m8486_MI;
extern "C" t9 * m8486 (t1681 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8482(__this, &m8482_MI);
		t9 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m8487_MI;
extern "C" t9 * m8487 (t1681 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8482(__this, &m8482_MI);
		t9 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m8488_MI;
extern "C" t9 * m8488 (t1681 * __this, MethodInfo* method)
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
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
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
		t1164  L_8 = {0};
		m5715(&L_8, L_6, L_7, &m5715_MI);
		t1164  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t1164_TI), &L_9);
		return L_10;
	}

IL_004e:
	{
		t138 * L_11 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_11, (t2*) &_stringLiteral1424, &m379_MI);
		il2cpp_codegen_raise_exception(L_11);
	}
}
#include "t1682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;
#include "t1682MD.h"

#include "t1158MD.h"
extern MethodInfo m5922_MI;
extern MethodInfo m8511_MI;
extern MethodInfo m8512_MI;
extern MethodInfo m11144_MI;
extern MethodInfo m8490_MI;
extern MethodInfo m8525_MI;


extern MethodInfo m8489_MI;
extern "C" void m8489 (t1682 * __this, t1158 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1158 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1158 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8490 (t1682 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5922_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8491_MI;
extern "C" bool m8491 (t1682 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8511_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8492_MI;
extern "C" t9 * m8492 (t1682 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8512_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8493_MI;
extern "C" void m8493 (t1682 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5724(L_2, &m5724_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral325, &m2910_MI);
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
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_6, (t2*) &_stringLiteral426, &m5722_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5718(L_7, &m5718_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8490_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_11, (t2*) &_stringLiteral1426, &m2910_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1158 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8525(L_12, L_13, L_14, 0, &m8525_MI);
		return;
	}
}
extern MethodInfo m8494_MI;
extern "C" t9 * m8494 (t1682 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t1681 * L_1 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8480(L_1, L_0, 0, &m8480_MI);
		return L_1;
	}
}
#include "t1683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1683_TI;
#include "t1683MD.h"

extern MethodInfo m8496_MI;


extern MethodInfo m8495_MI;
extern "C" void m8495 (t1683 * __this, t1158 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1158 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1158 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8496 (t1683 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5922_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8497_MI;
extern "C" bool m8497 (t1683 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8511_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8498_MI;
extern "C" t9 * m8498 (t1683 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8512_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8499_MI;
extern "C" void m8499 (t1683 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5724(L_2, &m5724_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral325, &m2910_MI);
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
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_6, (t2*) &_stringLiteral426, &m5722_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5718(L_7, &m5718_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8496_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_11, (t2*) &_stringLiteral1426, &m2910_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1158 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8525(L_12, L_13, L_14, 1, &m8525_MI);
		return;
	}
}
extern MethodInfo m8500_MI;
extern "C" t9 * m8500 (t1683 * __this, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t1681 * L_1 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8480(L_1, L_0, 1, &m8480_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2162.h"
#include "t1342.h"
extern TypeInfo t1684_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1172_TI;
extern TypeInfo t1171_TI;
extern TypeInfo t1342_TI;
#include "t123MD.h"
#include "t1342MD.h"
extern Il2CppType t1684_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t9_0_0_0;
extern MethodInfo m5716_MI;
extern MethodInfo m8518_MI;
extern MethodInfo m8519_MI;
extern MethodInfo m8524_MI;
extern MethodInfo m8502_MI;
extern MethodInfo m7423_MI;
extern MethodInfo m8528_MI;
extern MethodInfo m8521_MI;
extern MethodInfo m8510_MI;
extern MethodInfo m8509_MI;
extern MethodInfo m8501_MI;
extern MethodInfo m5711_MI;
extern MethodInfo m5758_MI;
extern MethodInfo m5757_MI;
extern MethodInfo m5737_MI;
extern MethodInfo m8504_MI;
extern MethodInfo m8506_MI;
extern MethodInfo m8514_MI;
extern MethodInfo m12001_MI;
extern MethodInfo m5719_MI;
extern MethodInfo m8522_MI;
extern MethodInfo m5923_MI;
extern MethodInfo m8503_MI;
extern MethodInfo m10331_MI;
extern MethodInfo m5731_MI;
extern MethodInfo m5732_MI;
extern MethodInfo m5733_MI;
extern MethodInfo m8520_MI;
extern MethodInfo m12002_MI;
extern MethodInfo m12003_MI;
extern MethodInfo m12004_MI;
extern MethodInfo m671_MI;
extern MethodInfo m5717_MI;
extern MethodInfo m8523_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4258_MI;
extern MethodInfo m8526_MI;
extern MethodInfo m8527_MI;
extern FieldInfo t2172_f19_FieldInfo;


extern MethodInfo m5912_MI;
extern "C" void m5912 (t1158 * __this, MethodInfo* method)
{
	{
		m8502(__this, 0, (1.0f), &m8502_MI);
		return;
	}
}
extern TypeInfo* t1684_TI_var;
extern TypeInfo* t1095_TI_var;
extern "C" void m8501 (t1158 * __this, int32_t p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	static bool m8501_init;
	if (!m8501_init)
	{
		t1684_TI_var = il2cpp_codegen_class_from_type(&t1684_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8501_init = true;
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
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_1, (t2*) &_stringLiteral395, (t2*) &_stringLiteral1413, &m4361_MI);
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
		bool L_5 = m7423(NULL, L_4, &m7423_MI);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_6, (t2*) &_stringLiteral1414, (t2*) &_stringLiteral1415, &m4361_MI);
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
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_13, (t2*) &_stringLiteral1416, &m2910_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007b:
	{
		double L_14 = V_0;
		V_1 = (((int32_t)L_14));
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		int32_t L_16 = m8528(NULL, L_15, &m8528_MI);
		V_1 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		m8521(__this, ((t1684*)SZArrayNew(t1684_TI_var, L_17)), ((t1095*)SZArrayNew(t1095_TI_var, L_18)), &m8521_MI);
		t9 * L_19 = p2;
		m8510(__this, L_19, &m8510_MI);
		t9 * L_20 = p3;
		m8509(__this, L_20, &m8509_MI);
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" void m8502 (t1158 * __this, int32_t p0, float p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8501(__this, L_0, L_1, (t9 *)NULL, (t9 *)NULL, &m8501_MI);
		return;
	}
}
extern MethodInfo m5919_MI;
extern "C" void m5919 (t1158 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8502(__this, L_0, (1.0f), &m8502_MI);
		return;
	}
}
extern TypeInfo* t1684_TI_var;
extern TypeInfo* t1095_TI_var;
extern "C" void m8503 (t1158 * __this, t1158 * p0, MethodInfo* method)
{
	static bool m8503_init;
	if (!m8503_init)
	{
		t1684_TI_var = il2cpp_codegen_class_from_type(&t1684_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8503_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1158 * L_0 = p0;
		int32_t L_1 = (L_0->f1);
		__this->f1 = L_1;
		t1158 * L_2 = p0;
		float L_3 = (L_2->f3);
		__this->f3 = L_3;
		t1158 * L_4 = p0;
		t1684* L_5 = (L_4->f4);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_5);
		__this->f4 = ((t1684*)Castclass(L_6, t1684_TI_var));
		t1158 * L_7 = p0;
		t1095* L_8 = (L_7->f5);
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_8);
		__this->f5 = ((t1095*)Castclass(L_9, t1095_TI_var));
		t1158 * L_10 = p0;
		int32_t L_11 = (L_10->f6);
		__this->f6 = L_11;
		t1158 * L_12 = p0;
		t9 * L_13 = (L_12->f9);
		__this->f9 = L_13;
		t1158 * L_14 = p0;
		t9 * L_15 = (L_14->f10);
		__this->f10 = L_15;
		t1158 * L_16 = p0;
		t9 * L_17 = (L_16->f12);
		__this->f12 = L_17;
		return;
	}
}
extern MethodInfo m5707_MI;
extern "C" void m5707 (t1158 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8501(__this, L_0, (1.0f), L_1, L_2, &m8501_MI);
		return;
	}
}
extern "C" void m8504 (t1158 * __this, t9 * p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1158 * G_B2_0 = {0};
	t1158 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1158 * G_B3_1 = {0};
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5702_MI, L_1);
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
		m8501(G_B3_1, G_B3_0, L_3, L_4, L_5, &m8501_MI);
		t9 * L_6 = p0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral1374, &m339_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0024:
	{
		t9 * L_8 = p0;
		t9 * L_9 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5711_MI, L_8);
		V_0 = L_9;
		goto IL_003f;
	}

IL_002d:
	{
		t9 * L_10 = V_0;
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5758_MI, L_10);
		t9 * L_12 = V_0;
		t9 * L_13 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5757_MI, L_12);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5737_MI, __this, L_11, L_13);
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
extern MethodInfo m5713_MI;
extern "C" void m5713 (t1158 * __this, t9 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8504(__this, L_0, (1.0f), L_1, L_2, &m8504_MI);
		return;
	}
}
extern MethodInfo m5764_MI;
extern "C" void m5764 (t1158 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8501(__this, 1, (1.0f), L_0, L_1, &m8501_MI);
		return;
	}
}
extern MethodInfo m8505_MI;
extern "C" void m8505 (t1158 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m5726_MI;
extern "C" void m5726 (t1158 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		m8506(__this, L_0, (1.0f), L_1, &m8506_MI);
		return;
	}
}
extern "C" void m8506 (t1158 * __this, int32_t p0, float p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8502(__this, L_0, L_1, &m8502_MI);
		t9 * L_2 = p2;
		__this->f12 = L_2;
		return;
	}
}
extern MethodInfo m8507_MI;
extern TypeInfo* t1095_TI_var;
extern "C" void m8507 (t9 * __this , MethodInfo* method)
{
	static bool m8507_init;
	if (!m8507_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8507_init = true;
	}
	{
		t1095* L_0 = ((t1095*)SZArrayNew(t1095_TI_var, ((int32_t)34)));
		m1123(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2172_f19_FieldInfo), &m1123_MI);
		((t1158_SFs*)InitializedTypeInfo(&t1158_TI)->static_fields)->f13 = L_0;
		return;
	}
}
extern MethodInfo m8508_MI;
extern "C" t9 * m8508 (t1158 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t1681 * L_0 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8480(L_0, __this, 2, &m8480_MI);
		return L_0;
	}
}
extern "C" void m8509 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f10 = L_0;
		return;
	}
}
extern "C" void m8510 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" int32_t m5922 (t1158 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" bool m8511 (t1158 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m8512 (t1158 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m5940_MI;
extern "C" t9 * m5940 (t1158 * __this, MethodInfo* method)
{
	{
		t1682 * L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1682 * L_1 = (t1682 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1682_TI));
		m8489(L_1, __this, &m8489_MI);
		__this->f7 = L_1;
	}

IL_0014:
	{
		t1682 * L_2 = (__this->f7);
		return L_2;
	}
}
extern MethodInfo m6979_MI;
extern "C" t9 * m6979 (t1158 * __this, MethodInfo* method)
{
	{
		t1683 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1683 * L_1 = (t1683 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1683_TI));
		m8495(L_1, __this, &m8495_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1683 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m5736_MI;
extern "C" t9 * m5736 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	t1684* V_0 = {0};
	t1095* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1678  V_7 = {0};
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
		m5716(L_1, (t2*) &_stringLiteral404, (t2*) &_stringLiteral1412, &m5716_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1684* L_2 = (__this->f4);
		V_0 = L_2;
		t1095* L_3 = (__this->f5);
		V_1 = L_3;
		t1684* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8518_MI, __this, L_5);
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
		t1684* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1095* L_15 = V_1;
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
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8519_MI, __this, L_24, L_25);
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
extern MethodInfo m5920_MI;
extern "C" void m5920 (t1158 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8524(__this, L_0, L_1, 1, &m8524_MI);
		return;
	}
}
extern MethodInfo m8513_MI;
extern "C" void m8513 (t1158 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_3, (t2*) &_stringLiteral426, &m5722_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5724(L_4, &m5724_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_6, (t2*) &_stringLiteral429, &m2910_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5718(L_7, &m5718_MI);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = p1;
		t121 * L_10 = p0;
		int32_t L_11 = m5718(L_10, &m5718_MI);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_004e;
		}
	}
	{
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_12, (t2*) &_stringLiteral427, &m2910_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = p1;
		int32_t L_14 = (__this->f1);
		t121 * L_15 = p0;
		int32_t L_16 = m5718(L_15, &m5718_MI);
		if ((((int32_t)((int32_t)((int32_t)L_13+(int32_t)L_14))) <= ((int32_t)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_17, (t2*) &_stringLiteral1417, &m2910_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0069:
	{
		t9 * L_18 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8514_MI, __this);
		V_0 = L_18;
		int32_t L_19 = p1;
		V_1 = L_19;
		goto IL_008a;
	}

IL_0074:
	{
		t121 * L_20 = p0;
		t9 * L_21 = V_0;
		t1164  L_22 = (t1164 )InterfaceFuncInvoker0< t1164  >::Invoke(&m12001_MI, L_21);
		t1164  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t1164_TI), &L_23);
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		m5719(L_20, L_24, L_26, &m5719_MI);
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
extern "C" void m5737 (t1158 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8524(__this, L_0, L_1, 0, &m8524_MI);
		return;
	}
}
extern MethodInfo m5939_MI;
extern "C" void m5939 (t1158 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		t1684* L_0 = (__this->f4);
		int32_t L_1 = V_0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_0, L_1))->f0 = NULL;
		t1684* L_2 = (__this->f4);
		int32_t L_3 = V_0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_2, L_3))->f1 = NULL;
		t1095* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		t1684* L_8 = (__this->f4);
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
extern "C" bool m5923 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8522(__this, L_0, &m8522_MI);
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t9 * m8514 (t1158 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t1681 * L_0 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8480(L_0, __this, 2, &m8480_MI);
		return L_0;
	}
}
extern MethodInfo m5921_MI;
extern "C" void m5921 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1684* V_1 = {0};
	int32_t V_2 = 0;
	t1678 * G_B3_0 = {0};
	t1678 * G_B2_0 = {0};
	t1679 * G_B4_0 = {0};
	t1678 * G_B4_1 = {0};
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8522(__this, L_0, &m8522_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		t1684* L_3 = (__this->f4);
		V_1 = L_3;
		t1095* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648)));
		t1095* L_8 = (__this->f5);
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		t1684* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		G_B2_0 = ((t1678 *)(t1678 *)SZArrayLdElema(L_11, L_12));
		if (!L_13)
		{
			G_B3_0 = ((t1678 *)(t1678 *)SZArrayLdElema(L_11, L_12));
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1679_TI));
		t1679 * L_14 = ((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0;
		G_B4_0 = L_14;
		G_B4_1 = G_B2_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = ((t1679 *)(NULL));
		G_B4_1 = G_B3_0;
	}

IL_003f:
	{
		G_B4_1->f0 = G_B4_0;
		t1684* L_15 = V_1;
		int32_t L_16 = V_0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
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
extern MethodInfo m5768_MI;
extern "C" bool m5768 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5923_MI, __this, L_0);
		return L_1;
	}
}
extern MethodInfo m8515_MI;
extern "C" t9 * m8515 (t1158 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m8503(L_0, __this, &m8503_MI);
		return L_0;
	}
}
extern MethodInfo m8516_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8516 (t1158 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m8516_init;
	if (!m8516_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8516_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
	{
		t1100 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1100 * L_2 = p0;
		float L_3 = (__this->f3);
		m10331(L_2, (t2*) &_stringLiteral1418, L_3, &m10331_MI);
		t1100 * L_4 = p0;
		int32_t L_5 = (__this->f2);
		m5731(L_4, (t2*) &_stringLiteral415, L_5, &m5731_MI);
		t9 * L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		t1100 * L_7 = p0;
		t9 * L_8 = (__this->f12);
		m5744(L_7, (t2*) &_stringLiteral414, L_8, &m5744_MI);
		goto IL_005c;
	}

IL_004b:
	{
		t1100 * L_9 = p0;
		t9 * L_10 = (__this->f10);
		m5744(L_9, (t2*) &_stringLiteral417, L_10, &m5744_MI);
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
		t1100 * L_12 = p0;
		t9 * L_13 = (__this->f9);
		m5744(L_12, (t2*) &_stringLiteral1419, L_13, &m5744_MI);
	}

IL_0075:
	{
		t1100 * L_14 = p0;
		t1684* L_15 = (__this->f4);
		m5731(L_14, (t2*) &_stringLiteral1377, (((int32_t)(((t121 *)L_15)->max_length))), &m5731_MI);
		int32_t L_16 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_16));
		t158* L_17 = V_0;
		m8525(__this, (t121 *)(t121 *)L_17, 0, 0, &m8525_MI);
		int32_t L_18 = (__this->f1);
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_18));
		t158* L_19 = V_1;
		m8525(__this, (t121 *)(t121 *)L_19, 0, 1, &m8525_MI);
		t1100 * L_20 = p0;
		t158* L_21 = V_0;
		m5744(L_20, (t2*) &_stringLiteral420, (t9 *)(t9 *)L_21, &m5744_MI);
		t1100 * L_22 = p0;
		t158* L_23 = V_1;
		m5744(L_22, (t2*) &_stringLiteral421, (t9 *)(t9 *)L_23, &m5744_MI);
		t1100 * L_24 = p0;
		t9 * L_25 = (__this->f12);
		m5744(L_24, (t2*) &_stringLiteral1420, L_25, &m5744_MI);
		return;
	}
}
extern MethodInfo m8517_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1684_TI_var;
extern TypeInfo* t1095_TI_var;
extern "C" void m8517 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	static bool m8517_init;
	if (!m8517_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1684_TI_var = il2cpp_codegen_class_from_type(&t1684_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8517_init = true;
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
		t1100 * L_0 = (__this->f11);
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
		t1100 * L_1 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t123_0_0_0), &m329_MI);
		t9 * L_3 = m5732(L_1, (t2*) &_stringLiteral1418, L_2, &m5732_MI);
		__this->f3 = ((*(float*)((float*)UnBox (L_3, InitializedTypeInfo(&t123_TI)))));
		t1100 * L_4 = (__this->f11);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_6 = m5732(L_4, (t2*) &_stringLiteral415, L_5, &m5732_MI);
		__this->f2 = ((*(int32_t*)((int32_t*)UnBox (L_6, InitializedTypeInfo(&t125_TI)))));
	}

IL_0053:
	try
	{ // begin try (depth: 1)
		t1100 * L_7 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_9 = m5732(L_7, (t2*) &_stringLiteral414, L_8, &m5732_MI);
		__this->f12 = ((t9 *)Castclass(L_9, InitializedTypeInfo(&t1172_TI)));
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
		t1100 * L_11 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_13 = m5732(L_11, (t2*) &_stringLiteral417, L_12, &m5732_MI);
		__this->f10 = ((t9 *)Castclass(L_13, InitializedTypeInfo(&t1165_TI)));
	}

IL_00aa:
	try
	{ // begin try (depth: 1)
		t1100 * L_14 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_16 = m5732(L_14, (t2*) &_stringLiteral1419, L_15, &m5732_MI);
		__this->f9 = ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1171_TI)));
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
		t1100 * L_17 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_18 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_19 = m5732(L_17, (t2*) &_stringLiteral1377, L_18, &m5732_MI);
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_19, InitializedTypeInfo(&t125_TI)))));
		t1100 * L_20 = (__this->f11);
		t126 * L_21 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_22 = m5732(L_20, (t2*) &_stringLiteral420, L_21, &m5732_MI);
		V_1 = ((t158*)Castclass(L_22, t158_TI_var));
		t1100 * L_23 = (__this->f11);
		t126 * L_24 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_25 = m5732(L_23, (t2*) &_stringLiteral421, L_24, &m5732_MI);
		V_2 = ((t158*)Castclass(L_25, t158_TI_var));
		t158* L_26 = V_1;
		t158* L_27 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_27)->max_length))))))
		{
			goto IL_0147;
		}
	}
	{
		t1342 * L_28 = (t1342 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1342_TI));
		m5733(L_28, (t2*) &_stringLiteral1421, &m5733_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_0147:
	{
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		int32_t L_30 = m8528(NULL, L_29, &m8528_MI);
		V_0 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		m8521(__this, ((t1684*)SZArrayNew(t1684_TI_var, L_31)), ((t1095*)SZArrayNew(t1095_TI_var, L_32)), &m8521_MI);
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
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5737_MI, __this, (*(t9 **)(t9 **)SZArrayLdElema(L_33, L_35)), (*(t9 **)(t9 **)SZArrayLdElema(L_36, L_38)));
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
		m8520(__this, &m8520_MI);
		__this->f11 = (t1100 *)NULL;
		return;
	}
}
extern "C" int32_t m8518 (t1158 * __this, t9 * p0, MethodInfo* method)
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12002_MI, L_1, L_2);
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
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12003_MI, L_7, L_8);
		return L_9;
	}
}
extern "C" bool m8519 (t1158 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1679_TI));
		t1679 * L_1 = ((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t1679 *)L_1))))
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
		bool L_6 = (bool)InterfaceFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m12004_MI, L_3, L_4, L_5);
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
		int32_t L_14 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5717_MI, L_11, L_12, L_13);
		return ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8520 (t1158 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1684* L_0 = (__this->f4);
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
extern "C" void m8521 (t1158 * __this, t1684* p0, t1095* p1, MethodInfo* method)
{
	{
		t1684* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1422, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1684* L_2 = p0;
		__this->f4 = L_2;
		t1095* L_3 = p1;
		__this->f5 = L_3;
		m8520(__this, &m8520_MI);
		return;
	}
}
extern "C" int32_t m8522 (t1158 * __this, t9 * p0, MethodInfo* method)
{
	t1684* V_0 = {0};
	t1095* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1678  V_7 = {0};
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
		m5716(L_1, (t2*) &_stringLiteral404, (t2*) &_stringLiteral1412, &m5716_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1684* L_2 = (__this->f4);
		V_0 = L_2;
		t1095* L_3 = (__this->f5);
		V_1 = L_3;
		t1684* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8518_MI, __this, L_5);
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
		t1684* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1095* L_15 = V_1;
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
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8519_MI, __this, L_24, L_25);
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
extern TypeInfo* t1684_TI_var;
extern TypeInfo* t1095_TI_var;
extern "C" void m8523 (t1158 * __this, MethodInfo* method)
{
	static bool m8523_init;
	if (!m8523_init)
	{
		t1684_TI_var = il2cpp_codegen_class_from_type(&t1684_0_0_0);
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8523_init = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	t1684* V_2 = {0};
	t1684* V_3 = {0};
	t1095* V_4 = {0};
	t1095* V_5 = {0};
	int32_t V_6 = 0;
	t1678  V_7 = {0};
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		t1684* L_0 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		int32_t L_2 = m8528(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1<<(int32_t)1))|(int32_t)1)), &m8528_MI);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((t1684*)SZArrayNew(t1684_TI_var, (((uintptr_t)L_3))));
		t1684* L_4 = (__this->f4);
		V_3 = L_4;
		uint32_t L_5 = V_1;
		V_4 = ((t1095*)SZArrayNew(t1095_TI_var, (((uintptr_t)L_5))));
		t1095* L_6 = (__this->f5);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00f2;
	}

IL_003c:
	{
		t1684* L_7 = V_3;
		int32_t L_8 = V_6;
		V_7 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_7, L_8)));
		t9 * L_9 = ((&V_7)->f0);
		if (!L_9)
		{
			goto IL_00ec;
		}
	}
	{
		t1095* L_10 = V_5;
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
		t1684* L_18 = V_2;
		uint32_t L_19 = V_11;
		t9 * L_20 = (((t1678 *)(t1678 *)SZArrayLdElema(L_18, (((uintptr_t)L_19))))->f0);
		if (L_20)
		{
			goto IL_00ca;
		}
	}
	{
		t1684* L_21 = V_2;
		uint32_t L_22 = V_11;
		t9 * L_23 = ((&V_7)->f0);
		((t1678 *)(t1678 *)SZArrayLdElema(L_21, (((uintptr_t)L_22))))->f0 = L_23;
		t1684* L_24 = V_2;
		uint32_t L_25 = V_11;
		t9 * L_26 = ((&V_7)->f1);
		((t1678 *)(t1678 *)SZArrayLdElema(L_24, (((uintptr_t)L_25))))->f1 = L_26;
		t1095* L_27 = V_4;
		uint32_t L_28 = V_11;
		int32_t* L_29 = ((int32_t*)(int32_t*)SZArrayLdElema(L_27, (((uintptr_t)L_28))));
		int32_t L_30 = V_8;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_29))|(int32_t)L_30));
		goto IL_00ec;
	}

IL_00ca:
	{
		t1095* L_31 = V_4;
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
		t1684* L_42 = V_2;
		t1095* L_43 = V_4;
		m8521(__this, L_42, L_43, &m8521_MI);
		return;
	}
}
extern "C" void m8524 (t1158 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	t1684* V_4 = {0};
	t1095* V_5 = {0};
	t1678  V_6 = {0};
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
		m5716(L_1, (t2*) &_stringLiteral404, (t2*) &_stringLiteral1412, &m5716_MI);
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
		m8523(__this, &m8523_MI);
	}

IL_0027:
	{
		t1684* L_4 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8518_MI, __this, L_5);
		V_1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)));
		int32_t L_7 = V_1;
		V_2 = L_7;
		uint32_t L_8 = V_2;
		uint32_t L_9 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_8>>5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_9-(int32_t)1))))+(int32_t)1));
		t1684* L_10 = (__this->f4);
		V_4 = L_10;
		t1095* L_11 = (__this->f5);
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
		t1684* L_14 = V_4;
		int32_t L_15 = V_9;
		V_6 = (*(t1678 *)((t1678 *)(t1678 *)SZArrayLdElema(L_14, L_15)));
		t1095* L_16 = V_5;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1679_TI));
		t1679 * L_21 = ((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_20) == ((t9*)(t1679 *)L_21))))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1679_TI));
		t1679 * L_26 = ((t1679_SFs*)InitializedTypeInfo(&t1679_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_25) == ((t9*)(t1679 *)L_26))))
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
		bool L_34 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8519_MI, __this, L_32, L_33);
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
		t1684* L_36 = V_4;
		int32_t L_37 = V_9;
		t9 * L_38 = p1;
		((t1678 *)(t1678 *)SZArrayLdElema(L_36, L_37))->f1 = L_38;
		int32_t L_39 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_39+(int32_t)1));
		goto IL_0121;
	}

IL_0110:
	{
		t9 * L_40 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m511(NULL, (t2*) &_stringLiteral1423, L_40, &m511_MI);
		t563 * L_42 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_42, L_41, &m2910_MI);
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
		t1095* L_44 = V_5;
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
		t1684* L_53 = V_4;
		int32_t L_54 = V_7;
		t9 * L_55 = p0;
		((t1678 *)(t1678 *)SZArrayLdElema(L_53, L_54))->f0 = L_55;
		t1684* L_56 = V_4;
		int32_t L_57 = V_7;
		t9 * L_58 = p1;
		((t1678 *)(t1678 *)SZArrayLdElema(L_56, L_57))->f1 = L_58;
		t1095* L_59 = V_5;
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
extern "C" void m8525 (t1158 * __this, t121 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		int32_t L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1681_TI));
		t1681 * L_1 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8480(L_1, __this, L_0, &m8480_MI);
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
		m5719(L_2, L_4, L_6, &m5719_MI);
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
extern "C" bool m8526 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern "C" int32_t m8527 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		bool L_2 = m8526(NULL, L_1, &m8526_MI);
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
extern "C" int32_t m8528 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1095* L_1 = ((t1158_SFs*)InitializedTypeInfo(&t1158_TI)->static_fields)->f13;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		if ((((int32_t)L_0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1095* L_4 = ((t1158_SFs*)InitializedTypeInfo(&t1158_TI)->static_fields)->f13;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1095* L_9 = ((t1158_SFs*)InitializedTypeInfo(&t1158_TI)->static_fields)->f13;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		int32_t L_11 = m8527(NULL, L_10, &m8527_MI);
		return L_11;
	}
}
#include "t1685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1685_TI;
#include "t1685MD.h"

#include "t1686.h"
extern TypeInfo t1686_TI;


extern MethodInfo m8529_MI;
extern "C" void m8529 (t1685 * __this, t1686 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1686 * L_0 = p0;
		__this->f0 = L_0;
		t1686 * L_1 = p0;
		int32_t L_2 = (L_1->f5);
		__this->f1 = L_2;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m8530_MI;
extern "C" t9 * m8530 (t1685 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1686 * L_1 = (__this->f0);
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
		t1686 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t1341 * L_7 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_7, &m5721_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t1686 * L_8 = (__this->f0);
		t158* L_9 = (L_8->f0);
		t1686 * L_10 = (__this->f0);
		int32_t L_11 = (L_10->f1);
		int32_t L_12 = (__this->f2);
		t1686 * L_13 = (__this->f0);
		t158* L_14 = (L_13->f0);
		int32_t L_15 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))%(int32_t)(((int32_t)(((t121 *)L_14)->max_length)))));
		return (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_15));
	}
}
extern MethodInfo m8531_MI;
extern "C" bool m8531 (t1685 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1686 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f5);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_3, &m5721_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		t1686 * L_5 = (__this->f0);
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
#include "t1686MD.h"

extern MethodInfo m8535_MI;
extern MethodInfo m8533_MI;
extern MethodInfo m8543_MI;
extern MethodInfo m8545_MI;
extern MethodInfo m8539_MI;


extern MethodInfo m8532_MI;
extern "C" void m8532 (t1686 * __this, MethodInfo* method)
{
	{
		m8535(__this, ((int32_t)32), (2.0f), &m8535_MI);
		return;
	}
}
extern "C" void m8533 (t1686 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8535(__this, L_0, (2.0f), &m8535_MI);
		return;
	}
}
extern MethodInfo m8534_MI;
extern "C" void m8534 (t1686 * __this, t9 * p0, MethodInfo* method)
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
	t1686 * G_B2_0 = {0};
	t1686 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1686 * G_B3_1 = {0};
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5702_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		m8533(G_B3_1, G_B3_0, &m8533_MI);
		t9 * L_3 = p0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1427, &m339_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t9 * L_5 = p0;
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4369_MI, L_5);
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
			VirtActionInvoker1< t9 * >::Invoke(&m8543_MI, __this, L_9);
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
extern "C" void m8535 (t1686 * __this, int32_t p0, float p1, MethodInfo* method)
{
	static bool m8535_init;
	if (!m8535_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8535_init = true;
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
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_1, (t2*) &_stringLiteral395, (t2*) &_stringLiteral1428, &m4361_MI);
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
		t903 * L_4 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_4, (t2*) &_stringLiteral1429, (t2*) &_stringLiteral1430, &m4361_MI);
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
extern MethodInfo m8536_MI;
extern "C" int32_t m8536 (t1686 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8537_MI;
extern "C" bool m8537 (t1686 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8538_MI;
extern "C" t9 * m8538 (t1686 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m8539 (t1686 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_3, (t2*) &_stringLiteral396, &m5722_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5724(L_4, &m5724_MI);
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
		int32_t L_9 = m5718(L_8, &m5718_MI);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		int32_t L_10 = (__this->f2);
		t121 * L_11 = p0;
		int32_t L_12 = m5718(L_11, &m5718_MI);
		int32_t L_13 = p1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13)))))
		{
			goto IL_0048;
		}
	}

IL_0042:
	{
		t563 * L_14 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_14, &m11138_MI);
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
		int32_t L_24 = m11572(NULL, L_22, L_23, &m11572_MI);
		m7711(NULL, (t121 *)(t121 *)L_18, L_19, L_20, L_21, L_24, &m7711_MI);
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
		m7711(NULL, (t121 *)(t121 *)L_27, 0, L_28, ((int32_t)((int32_t)L_29+(int32_t)L_30)), ((int32_t)((int32_t)L_31-(int32_t)L_32)), &m7711_MI);
	}

IL_009a:
	{
		return;
	}
}
extern MethodInfo m8540_MI;
extern "C" t9 * m8540 (t1686 * __this, MethodInfo* method)
{
	{
		t1685 * L_0 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8529(L_0, __this, &m8529_MI);
		return L_0;
	}
}
extern MethodInfo m8541_MI;
extern "C" void m8541 (t1686 * __this, MethodInfo* method)
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
extern MethodInfo m8542_MI;
extern "C" t9 * m8542 (t1686 * __this, MethodInfo* method)
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
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_2, &m5721_MI);
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
extern "C" void m8543 (t1686 * __this, t9 * p0, MethodInfo* method)
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
		m8545(__this, &m8545_MI);
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
extern MethodInfo m8544_MI;
extern "C" t9 * m8544 (t1686 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
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
extern "C" void m8545 (t1686 * __this, MethodInfo* method)
{
	static bool m8545_init;
	if (!m8545_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8545_init = true;
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m8539_MI, __this, (t121 *)(t121 *)L_6, 0);
		t158* L_7 = V_1;
		__this->f0 = L_7;
		__this->f1 = 0;
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f2);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		return;
	}
}
#include "t1687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1687_TI;
#include "t1687MD.h"



#include "t1688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1688_TI;
#include "t1688MD.h"



#include "t1689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1689_TI;
#include "t1689MD.h"

#include "t1344.h"
extern TypeInfo t1344_TI;
#include "t1344MD.h"
extern MethodInfo m8550_MI;
extern MethodInfo m5763_MI;
extern MethodInfo m8548_MI;


extern MethodInfo m8546_MI;
extern "C" void m8546 (t1689 * __this, t1344 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1344 * L_0 = p0;
		__this->f0 = L_0;
		t1344 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1344 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, L_3);
		__this->f3 = L_4;
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8548_MI, __this);
		return;
	}
}
extern MethodInfo m8547_MI;
extern "C" void m8547 (t9 * __this , MethodInfo* method)
{
	{
		((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8 = (t2*) &_stringLiteral1442;
		return;
	}
}
extern "C" void m8548 (t1689 * __this, MethodInfo* method)
{
	{
		t1344 * L_0 = (__this->f0);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
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
extern MethodInfo m8549_MI;
extern "C" bool m8549 (t1689 * __this, MethodInfo* method)
{
	t1690* V_0 = {0};
	t1687  V_1 = {0};
	int32_t V_2 = 0;
	{
		t1344 * L_0 = (__this->f0);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1344 * L_6 = (__this->f0);
		t1690* L_7 = (L_6->f3);
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
		t1690* L_12 = V_0;
		int32_t L_13 = (__this->f2);
		V_1 = (*(t1687 *)((t1687 *)(t1687 *)SZArrayLdElema(L_12, L_13)));
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
extern "C" t1164  m8550 (t1689 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		t9 * L_7 = (__this->f6);
		t1164  L_8 = {0};
		m5715(&L_8, L_6, L_7, &m5715_MI);
		return L_8;
	}
}
extern MethodInfo m8551_MI;
extern "C" t9 * m8551 (t1689 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		return L_6;
	}
}
extern MethodInfo m8552_MI;
extern "C" t9 * m8552 (t1689 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f6);
		return L_6;
	}
}
extern MethodInfo m8553_MI;
extern "C" t9 * m8553 (t1689 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t2* L_4 = ((t1689_SFs*)InitializedTypeInfo(&t1689_TI)->static_fields)->f8;
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_5, L_4, &m5714_MI);
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
		t1164  L_10 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(&m8550_MI, __this);
		t1164  L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t1164_TI), &L_11);
		return L_12;
	}

IL_005f:
	{
		int32_t L_13 = (__this->f4);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t1688_TI), &L_14);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m511(NULL, L_15, (t2*) &_stringLiteral1441, &m511_MI);
		t169 * L_17 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_17, L_16, &m5735_MI);
		il2cpp_codegen_raise_exception(L_17);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1690_TI;
extern Il2CppType t1690_0_0_0;
extern MethodInfo m8574_MI;
extern MethodInfo m8561_MI;
extern MethodInfo m8576_MI;
extern MethodInfo m8560_MI;
extern MethodInfo m8573_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m8575_MI;
extern MethodInfo m8571_MI;
extern MethodInfo m8570_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m8566_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m515_MI;
extern MethodInfo m8572_MI;


extern MethodInfo m8554_MI;
extern "C" void m8554 (t1344 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1344_TI));
		int32_t L_0 = ((t1344_SFs*)InitializedTypeInfo(&t1344_TI)->static_fields)->f0;
		m8555(__this, (t9 *)NULL, L_0, &m8555_MI);
		return;
	}
}
extern MethodInfo m5759_MI;
extern "C" void m5759 (t1344 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8555(__this, (t9 *)NULL, L_0, &m8555_MI);
		return;
	}
}
extern "C" void m8555 (t1344 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_1, (t2*) &_stringLiteral395, &m5722_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1344_TI));
		int32_t L_3 = ((t1344_SFs*)InitializedTypeInfo(&t1344_TI)->static_fields)->f0;
		__this->f5 = L_3;
	}

IL_002c:
	{
		t9 * L_4 = p0;
		__this->f4 = L_4;
		int32_t L_5 = p1;
		m8575(__this, L_5, 1, &m8575_MI);
		return;
	}
}
extern MethodInfo m8556_MI;
extern "C" void m8556 (t9 * __this , MethodInfo* method)
{
	{
		((t1344_SFs*)InitializedTypeInfo(&t1344_TI)->static_fields)->f0 = ((int32_t)16);
		return;
	}
}
extern MethodInfo m8557_MI;
extern "C" t9 * m8557 (t1344 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t1689 * L_0 = (t1689 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1689_TI));
		m8546(L_0, __this, 2, &m8546_MI);
		return L_0;
	}
}
extern "C" int32_t m5763 (t1344 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8558_MI;
extern "C" bool m8558 (t1344 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8559_MI;
extern "C" t9 * m8559 (t1344 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m8560 (t1344 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m8561 (t1344 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8562_MI;
extern "C" t9 * m8562 (t1344 * __this, t9 * p0, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = m8574(__this, L_2, &m8574_MI);
		return L_3;
	}
}
extern MethodInfo m8563_MI;
extern "C" void m8563 (t1344 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8561_MI, __this);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_3, (t2*) &_stringLiteral1431, &m5735_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m8576(__this, L_4, &m8576_MI);
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8560_MI, __this);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_7, (t2*) &_stringLiteral1432, &m5735_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0039:
	{
		t9 * L_8 = p0;
		t9 * L_9 = p1;
		m8573(__this, L_8, L_9, 1, &m8573_MI);
		return;
	}
}
extern "C" int32_t m8564 (t1344 * __this, MethodInfo* method)
{
	{
		t1690* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m8565_MI;
extern TypeInfo* t1690_TI_var;
extern "C" void m8565 (t1344 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8565_init;
	if (!m8565_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		m8565_init = true;
	}
	int32_t V_0 = 0;
	t1690* V_1 = {0};
	t1690* V_2 = {0};
	t1690* V_3 = {0};
	{
		t1690* L_0 = (__this->f3);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = (__this->f1);
		int32_t L_2 = p0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_3, (t2*) &_stringLiteral1433, &m5722_MI);
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
		V_1 = ((t1690*)SZArrayNew(t1690_TI_var, L_5));
		t1690* L_6 = (__this->f3);
		t1690* L_7 = V_1;
		int32_t L_8 = (__this->f1);
		m5941(NULL, (t121 *)(t121 *)L_6, (t121 *)(t121 *)L_7, L_8, &m5941_MI);
		t1690* L_9 = V_1;
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
		V_2 = ((t1690*)SZArrayNew(t1690_TI_var, L_12));
		t1690* L_13 = (__this->f3);
		t1690* L_14 = V_2;
		int32_t L_15 = (__this->f1);
		m5941(NULL, (t121 *)(t121 *)L_13, (t121 *)(t121 *)L_14, L_15, &m5941_MI);
		t1690* L_16 = V_2;
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
		V_3 = ((t1690*)SZArrayNew(t1690_TI_var, L_19));
		t1690* L_20 = (__this->f3);
		t1690* L_21 = V_3;
		int32_t L_22 = V_0;
		m5941(NULL, (t121 *)(t121 *)L_20, (t121 *)(t121 *)L_21, L_22, &m5941_MI);
		t1690* L_23 = V_3;
		__this->f3 = L_23;
	}

IL_0091:
	{
		return;
	}
}
extern MethodInfo m5761_MI;
extern "C" void m5761 (t1344 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8573(__this, L_0, L_1, 0, &m8573_MI);
		return;
	}
}
extern "C" bool m8566 (t1344 * __this, t9 * p0, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			int32_t L_3 = m8576(__this, L_2, &m8576_MI);
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
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_4, &m5721_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0024;
	} // end catch (depth: 1)

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C" t9 * m8567 (t1344 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1689_TI));
		t1689 * L_0 = (t1689 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1689_TI));
		m8546(L_0, __this, 2, &m8546_MI);
		return L_0;
	}
}
extern MethodInfo m8568_MI;
extern "C" void m8568 (t1344 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8571_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m8570_MI, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8569_MI;
extern "C" void m8569 (t1344 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_3, &m5899_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5724(L_4, &m5724_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_6, (t2*) &_stringLiteral1434, &m2910_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0027:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5718(L_8, &m5718_MI);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_003b;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_10, (t2*) &_stringLiteral1435, &m339_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003b:
	{
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		t121 * L_12 = p0;
		int32_t L_13 = m5718(L_12, &m5718_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_15 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_15, (t2*) &_stringLiteral1436, &m339_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0056:
	{
		t9 * L_16 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8567_MI, __this);
		V_0 = L_16;
		int32_t L_17 = p1;
		V_1 = L_17;
		goto IL_0077;
	}

IL_0061:
	{
		t121 * L_18 = p0;
		t9 * L_19 = V_0;
		t1164  L_20 = (t1164 )InterfaceFuncInvoker0< t1164  >::Invoke(&m12001_MI, L_19);
		t1164  L_21 = L_20;
		t9 * L_22 = Box(InitializedTypeInfo(&t1164_TI), &L_21);
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		m5719(L_18, L_22, L_24, &m5719_MI);
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
extern "C" void m8570 (t1344 * __this, int32_t p0, MethodInfo* method)
{
	t1690* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1690* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
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
		t1690* L_7 = V_0;
		int32_t L_8 = p0;
		t1690* L_9 = V_0;
		int32_t L_10 = p0;
		int32_t L_11 = V_1;
		int32_t L_12 = p0;
		m7711(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8+(int32_t)1)), (t121 *)(t121 *)L_9, L_10, ((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)1))-(int32_t)L_12)), &m7711_MI);
		goto IL_0048;
	}

IL_002e:
	{
		t1690* L_13 = V_0;
		int32_t L_14 = p0;
		((t1687 *)(t1687 *)SZArrayLdElema(L_13, L_14))->f0 = NULL;
		t1690* L_15 = V_0;
		int32_t L_16 = p0;
		((t1687 *)(t1687 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
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
		t903 * L_19 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_19, (t2*) &_stringLiteral1437, &m5722_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0071:
	{
		return;
	}
}
extern "C" int32_t m8571 (t1344 * __this, t9 * p0, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
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
		int32_t L_3 = m8576(__this, L_2, &m8576_MI);
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
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_4, &m5721_MI);
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
extern MethodInfo m5760_MI;
extern "C" bool m5760 (t1344 * __this, t9 * p0, MethodInfo* method)
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
		m11144(L_1, &m11144_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			bool L_3 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m8566_MI, __this, L_2);
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
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_4, &m5721_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m5762_MI;
extern "C" t9 * m5762 (t1344 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		t1690* L_3 = (__this->f3);
		int32_t L_4 = p0;
		t9 * L_5 = (((t1687 *)(t1687 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001f:
	{
		t903 * L_6 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_6, (t2*) &_stringLiteral1437, &m5722_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern TypeInfo* t1690_TI_var;
extern "C" void m8572 (t1344 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8572_init;
	if (!m8572_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		m8572_init = true;
	}
	t1690* V_0 = {0};
	t1690* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		t1690* L_0 = (__this->f3);
		V_0 = L_0;
		V_1 = (t1690*)NULL;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8564_MI, __this);
		V_2 = L_1;
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
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
		V_1 = ((t1690*)SZArrayNew(t1690_TI_var, ((int32_t)((int32_t)L_7<<(int32_t)1))));
	}

IL_002e:
	{
		t1690* L_8 = V_1;
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
		t1690* L_12 = V_0;
		t1690* L_13 = V_1;
		int32_t L_14 = V_4;
		m7711(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m7711_MI);
	}

IL_0047:
	{
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		int32_t L_16 = p1;
		V_4 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		t1690* L_18 = V_0;
		int32_t L_19 = p1;
		t1690* L_20 = V_1;
		int32_t L_21 = p1;
		int32_t L_22 = V_4;
		m7711(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, ((int32_t)((int32_t)L_21+(int32_t)1)), L_22, &m7711_MI);
	}

IL_0063:
	{
		goto IL_0072;
	}

IL_0065:
	{
		t1690* L_23 = V_0;
		t1690* L_24 = V_1;
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		m5941(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, L_25, &m5941_MI);
	}

IL_0072:
	{
		t1690* L_26 = V_1;
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
		t1690* L_28 = V_0;
		int32_t L_29 = p1;
		t1690* L_30 = V_0;
		int32_t L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		int32_t L_33 = p1;
		m7711(NULL, (t121 *)(t121 *)L_28, L_29, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)1)), ((int32_t)((int32_t)L_32-(int32_t)L_33)), &m7711_MI);
	}

IL_0091:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8573 (t1344 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	static bool m8573_init;
	if (!m8573_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8573_init = true;
	}
	t1690* V_0 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1412, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1690* L_2 = (__this->f3);
		V_0 = L_2;
		V_1 = (-1);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t9 * L_3 = p0;
		int32_t L_4 = m8576(__this, L_3, &m8576_MI);
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
		t1341 * L_5 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_5, &m5721_MI);
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
		t2* L_10 = m7848(NULL, (t2*) &_stringLiteral1438, L_8, &m7848_MI);
		V_2 = L_10;
		t2* L_11 = V_2;
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_12, L_11, &m2910_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004d:
	{
		t1690* L_13 = V_0;
		int32_t L_14 = V_1;
		t9 * L_15 = p1;
		((t1687 *)(t1687 *)SZArrayLdElema(L_13, L_14))->f1 = L_15;
		int32_t L_16 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_16+(int32_t)1));
		return;
	}

IL_0069:
	{
		int32_t L_17 = V_1;
		V_1 = ((~L_17));
		int32_t L_18 = V_1;
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8564_MI, __this);
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)((int32_t)L_19+(int32_t)1)))))
		{
			goto IL_00b9;
		}
	}
	{
		t158* L_20 = ((t158*)SZArrayNew(t158_TI_var, 7));
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1439);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 0)) = (t9 *)(t2*) &_stringLiteral1439;
		t158* L_21 = L_20;
		t9 * L_22 = p0;
		ArrayElementTypeCheck (L_21, L_22);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 1)) = (t9 *)L_22;
		t158* L_23 = L_21;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral383);
		*((t9 **)(t9 **)SZArrayLdElema(L_23, 2)) = (t9 *)(t2*) &_stringLiteral383;
		t158* L_24 = L_23;
		t9 * L_25 = p1;
		ArrayElementTypeCheck (L_24, L_25);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 3)) = (t9 *)L_25;
		t158* L_26 = L_24;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1440);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 4)) = (t9 *)(t2*) &_stringLiteral1440;
		t158* L_27 = L_26;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		t9 * L_30 = Box(InitializedTypeInfo(&t125_TI), &L_29);
		ArrayElementTypeCheck (L_27, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 5)) = (t9 *)L_30;
		t158* L_31 = L_27;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral340);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 6)) = (t9 *)(t2*) &_stringLiteral340;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m515(NULL, L_31, &m515_MI);
		t138 * L_33 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_33, L_32, &m379_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00b9:
	{
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
		int32_t L_35 = V_1;
		m8572(__this, ((int32_t)((int32_t)L_34+(int32_t)1)), L_35, &m8572_MI);
		t1690* L_36 = (__this->f3);
		V_0 = L_36;
		t1690* L_37 = V_0;
		int32_t L_38 = V_1;
		t9 * L_39 = p0;
		((t1687 *)(t1687 *)SZArrayLdElema(L_37, L_38))->f0 = L_39;
		t1690* L_40 = V_0;
		int32_t L_41 = V_1;
		t9 * L_42 = p1;
		((t1687 *)(t1687 *)SZArrayLdElema(L_40, L_41))->f1 = L_42;
		int32_t L_43 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_44+(int32_t)1));
		return;
	}
}
extern "C" t9 * m8574 (t1344 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8576(__this, L_0, &m8576_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		t1690* L_3 = (__this->f3);
		int32_t L_4 = V_0;
		t9 * L_5 = (((t1687 *)(t1687 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001e:
	{
		return NULL;
	}
}
extern TypeInfo* t1690_TI_var;
extern "C" void m8575 (t1344 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8575_init;
	if (!m8575_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		m8575_init = true;
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
		__this->f3 = ((t1690*)SZArrayNew(t1690_TI_var, L_4));
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" int32_t m8576 (t1344 * __this, t9 * p0, MethodInfo* method)
{
	t1690* V_0 = {0};
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t9 * V_7 = {0};
	t9 * G_B5_0 = {0};
	{
		t1690* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5763_MI, __this);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1677_TI));
		t1677 * L_4 = ((t1677_SFs*)InitializedTypeInfo(&t1677_TI)->static_fields)->f0;
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
		t1690* L_11 = V_0;
		int32_t L_12 = V_5;
		t9 * L_13 = (((t1687 *)(t1687 *)SZArrayLdElema(L_11, L_12))->f0);
		t9 * L_14 = p0;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5717_MI, L_10, L_13, L_14);
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
#include "t1691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1691_TI;
#include "t1691MD.h"



extern MethodInfo m8577_MI;
extern "C" void m8577 (t1691 * __this, t877 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t877 * L_0 = p0;
		__this->f0 = L_0;
		t877 * L_1 = p0;
		int32_t L_2 = (L_1->f4);
		__this->f1 = L_2;
		__this->f2 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8578_MI;
extern "C" t9 * m8578 (t1691 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t877 * L_1 = (__this->f0);
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
		t877 * L_6 = (__this->f0);
		int32_t L_7 = (L_6->f2);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_0039:
	{
		t1341 * L_8 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_8, &m5721_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003f:
	{
		t877 * L_9 = (__this->f0);
		t158* L_10 = (L_9->f0);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m8579_MI;
extern "C" bool m8579 (t1691 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		t877 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_3, &m5721_MI);
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
		t877 * L_7 = (__this->f0);
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

extern MethodInfo m6904_MI;
extern MethodInfo m8580_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m4495 (t877 * __this, MethodInfo* method)
{
	static bool m4495_init;
	if (!m4495_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4495_init = true;
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
extern "C" void m8580 (t877 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8580_init;
	if (!m8580_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8580_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m6904(NULL, L_0, ((int32_t)16), &m6904_MI);
		p0 = L_1;
		int32_t L_2 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		t158* L_3 = (__this->f0);
		t158* L_4 = V_0;
		int32_t L_5 = (__this->f2);
		m5941(NULL, (t121 *)(t121 *)L_3, (t121 *)(t121 *)L_4, L_5, &m5941_MI);
		int32_t L_6 = p0;
		__this->f3 = L_6;
		t158* L_7 = V_0;
		__this->f0 = L_7;
		return;
	}
}
extern "C" int32_t m4665 (t877 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m4666_MI;
extern "C" bool m4666 (t877 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m4667_MI;
extern "C" t9 * m4667 (t877 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m4237 (t877 * __this, MethodInfo* method)
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
extern "C" void m4668 (t877 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_3, (t2*) &_stringLiteral396, &m5722_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5724(L_4, &m5724_MI);
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		t121 * L_6 = p0;
		int32_t L_7 = m5718(L_6, &m5718_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = p1;
		t121 * L_9 = p0;
		int32_t L_10 = m5718(L_9, &m5718_MI);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		int32_t L_11 = (__this->f2);
		t121 * L_12 = p0;
		int32_t L_13 = m5718(L_12, &m5718_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_004e;
		}
	}

IL_0048:
	{
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m11138(L_15, &m11138_MI);
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
		m5719(L_17, (*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), ((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)((int32_t)((int32_t)L_22+(int32_t)1))))+(int32_t)L_23)), &m5719_MI);
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
extern MethodInfo m4664_MI;
extern "C" t9 * m4664 (t877 * __this, MethodInfo* method)
{
	{
		t1691 * L_0 = (t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1691_TI));
		m8577(L_0, __this, &m8577_MI);
		return L_0;
	}
}
extern "C" t9 * m4669 (t877 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
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
extern "C" t9 * m4670 (t877 * __this, MethodInfo* method)
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
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5721(L_1, &m5721_MI);
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
		m8580(__this, ((int32_t)((int32_t)L_13/(int32_t)2)), &m8580_MI);
	}

IL_007d:
	{
		t9 * L_14 = V_0;
		return L_14;
	}
}
extern "C" void m4233 (t877 * __this, t9 * p0, MethodInfo* method)
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
		m8580(__this, ((int32_t)((int32_t)L_3*(int32_t)2)), &m8580_MI);
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
#include "t1692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1692_TI;
#include "t1692MD.h"



#include "t1693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1693_TI;
#include "t1693MD.h"



#include "t1006.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1006_TI;
#include "t1006MD.h"

#include "t725MD.h"
extern MethodInfo m4265_MI;


extern MethodInfo m4569_MI;
extern "C" void m4569 (t1006 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t2* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m4570_MI;
extern "C" void m4570 (t1006 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1694_TI;
#include "t1694MD.h"



#include "t1148.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1148_TI;
#include "t1148MD.h"



extern MethodInfo m4798_MI;
extern "C" void m4798 (t1148 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		int32_t L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = (__this->f2);
		__this->f0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_2 = (__this->f2);
		__this->f1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
#include "t1695.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1695_TI;
#include "t1695MD.h"



extern MethodInfo m8581_MI;
extern "C" void m8581 (t1695 * __this, t2* p0, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
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
extern MethodInfo m8582_MI;
extern "C" void m8582 (t1695 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1696_TI;
#include "t1696MD.h"



extern MethodInfo m8583_MI;
extern "C" void m8583 (t1696 * __this, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		return;
	}
}
#include "t1697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1697_TI;
#include "t1697MD.h"

#include "t560.h"
extern TypeInfo t560_TI;
#include "t560MD.h"
extern MethodInfo m4392_MI;


extern MethodInfo m8584_MI;
extern "C" void m8584 (t1697 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t936.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t936_TI;
#include "t936MD.h"

#include "t914.h"
extern TypeInfo t2033_TI;
extern MethodInfo m8587_MI;
extern MethodInfo m4455_MI;
extern MethodInfo m5815_MI;
extern MethodInfo m8588_MI;


extern MethodInfo m8585_MI;
extern "C" void m8585 (t936 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		t914 ** L_0 = &(__this->f3);
		int32_t* L_1 = &(__this->f1);
		int32_t* L_2 = &(__this->f2);
		t2** L_3 = &(__this->f4);
		int32_t* L_4 = &(__this->f5);
		int32_t* L_5 = &(__this->f6);
		m8587(NULL, 2, 0, L_0, L_1, L_2, L_3, L_4, L_5, &m8587_MI);
		return;
	}
}
extern MethodInfo m8586_MI;
extern "C" void m8586 (t936 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		t914 ** L_2 = &(__this->f3);
		int32_t* L_3 = &(__this->f1);
		int32_t* L_4 = &(__this->f2);
		t2** L_5 = &(__this->f4);
		int32_t* L_6 = &(__this->f5);
		int32_t* L_7 = &(__this->f6);
		m8587(NULL, ((int32_t)((int32_t)L_0+(int32_t)2)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8587_MI);
		return;
	}
}
extern "C" bool m8587 (t9 * __this , int32_t p0, bool p1, t914 ** p2, int32_t* p3, int32_t* p4, t2** p5, int32_t* p6, int32_t* p7, MethodInfo* method)
{
	typedef bool (*m8587_ftn) (int32_t, bool, t914 **, int32_t*, int32_t*, t2**, int32_t*, int32_t*);
	static m8587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8587_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7);
}
extern MethodInfo m4456_MI;
extern "C" int32_t m4456 (t936 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t2* m4455 (t936 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m8588 (t936 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*) &_stringLiteral1443;
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4455_MI, __this);
		V_0 = L_2;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2033_TI, e.ex->object.klass))
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
extern MethodInfo m8589_MI;
extern "C" int32_t m8589 (t936 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4452_MI;
extern "C" t914 * m4452 (t936 * __this, MethodInfo* method)
{
	{
		t914 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8590_MI;
extern "C" int32_t m8590 (t936 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8591_MI;
extern "C" t2* m8591 (t936 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8592_MI;
extern "C" t2* m8592 (t936 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_0, &m1166_MI);
		V_0 = L_0;
		t914 * L_1 = (__this->f3);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t322 * L_2 = V_0;
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral1259, &m7847_MI);
		m1170(L_2, L_3, &m1170_MI);
		goto IL_0033;
	}

IL_0021:
	{
		t322 * L_4 = V_0;
		t914 * L_5 = (__this->f3);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_5);
		m1170(L_4, L_6, &m1170_MI);
	}

IL_0033:
	{
		t322 * L_7 = V_0;
		t2* L_8 = m7847(NULL, (t2*) &_stringLiteral1444, &m7847_MI);
		m1170(L_7, L_8, &m1170_MI);
		int32_t L_9 = (__this->f1);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		t322 * L_10 = V_0;
		t2* L_11 = m7847(NULL, (t2*) &_stringLiteral1445, &m7847_MI);
		m1170(L_10, L_11, &m1170_MI);
		goto IL_007e;
	}

IL_0060:
	{
		t322 * L_12 = V_0;
		t2* L_13 = m7847(NULL, (t2*) &_stringLiteral1446, &m7847_MI);
		m1170(L_12, L_13, &m1170_MI);
		t322 * L_14 = V_0;
		int32_t L_15 = (__this->f1);
		m5815(L_14, L_15, &m5815_MI);
	}

IL_007e:
	{
		t322 * L_16 = V_0;
		t2* L_17 = m7847(NULL, (t2*) &_stringLiteral1447, &m7847_MI);
		m1170(L_16, L_17, &m1170_MI);
		t322 * L_18 = V_0;
		t2* L_19 = m8588(__this, &m8588_MI);
		m1170(L_18, L_19, &m1170_MI);
		t322 * L_20 = V_0;
		int32_t L_21 = (__this->f5);
		int32_t L_22 = L_21;
		t9 * L_23 = Box(InitializedTypeInfo(&t125_TI), &L_22);
		int32_t L_24 = (__this->f6);
		int32_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t125_TI), &L_25);
		m5842(L_20, (t2*) &_stringLiteral1448, L_23, L_26, &m5842_MI);
		t322 * L_27 = V_0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_27);
		return L_28;
	}
}
#include "t855.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t855_TI;
#include "t855MD.h"

#include "t924.h"
extern TypeInfo t914_TI;
extern TypeInfo t1698_TI;
extern TypeInfo t928_TI;
extern TypeInfo t924_TI;
#include "t914MD.h"
#include "t924MD.h"
extern Il2CppType t936_0_0_0;
extern Il2CppType t1698_0_0_0;
extern MethodInfo m8597_MI;
extern MethodInfo m8595_MI;
extern MethodInfo m8596_MI;
extern MethodInfo m8598_MI;
extern MethodInfo m4457_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m4453_MI;
extern MethodInfo m4410_MI;
extern MethodInfo m4424_MI;
extern MethodInfo m4425_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m11968_MI;
extern MethodInfo m7753_MI;
extern MethodInfo m4454_MI;
extern MethodInfo m9707_MI;


extern MethodInfo m8593_MI;
extern "C" void m8593 (t855 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m8597(__this, 0, 0, &m8597_MI);
		return;
	}
}
extern MethodInfo m4441_MI;
extern "C" void m4441 (t855 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8597(__this, L_0, L_1, &m8597_MI);
		return;
	}
}
extern MethodInfo m8594_MI;
extern "C" void m8594 (t855 * __this, t138 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		bool L_1 = p1;
		m8595(__this, L_0, 0, L_1, &m8595_MI);
		return;
	}
}
extern "C" void m8595 (t855 * __this, t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		int32_t L_1 = p1;
		bool L_2 = p2;
		m8596(__this, L_0, L_1, L_2, 0, &m8596_MI);
		return;
	}
}
extern TypeInfo* t1698_TI_var;
extern "C" void m8596 (t855 * __this, t138 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m8596_init;
	if (!m8596_init)
	{
		t1698_TI_var = il2cpp_codegen_class_from_type(&t1698_0_0_0);
		m8596_init = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	t1170 * V_2 = {0};
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
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_3, (t2*) &_stringLiteral807, (t2*) &_stringLiteral1449, &m4361_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		t138 * L_4 = p0;
		int32_t L_5 = p1;
		bool L_6 = p2;
		t1698* L_7 = m8598(NULL, L_4, L_5, L_6, &m8598_MI);
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
		t1698* L_9 = (__this->f1);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		t914 * L_12 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m4452_MI, (*(t936 **)(t936 **)SZArrayLdElema(L_9, L_11)));
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
		t1698* L_15 = (__this->f1);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_17 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_17, &m5727_MI);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0092;
	}

IL_0070:
	{
		t1698* L_18 = (__this->f1);
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t914 * L_21 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m4452_MI, (*(t936 **)(t936 **)SZArrayLdElema(L_18, L_20)));
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t1170 * L_22 = V_2;
		t1698* L_23 = (__this->f1);
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_22, (*(t936 **)(t936 **)SZArrayLdElema(L_23, L_25)));
	}

IL_008e:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_27 = V_3;
		t1698* L_28 = (__this->f1);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		t1170 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t936_0_0_0), &m329_MI);
		t121 * L_31 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5858_MI, L_29, L_30);
		__this->f1 = ((t1698*)Castclass(L_31, t1698_TI_var));
	}

IL_00b8:
	{
		return;
	}
}
extern TypeInfo* t1698_TI_var;
extern "C" void m8597 (t855 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8597_init;
	if (!m8597_init)
	{
		t1698_TI_var = il2cpp_codegen_class_from_type(&t1698_0_0_0);
		m8597_init = true;
	}
	t936 * V_0 = {0};
	t1170 * V_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_1, (t2*) &_stringLiteral807, (t2*) &_stringLiteral1449, &m4361_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_2 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_2, &m5727_MI);
		V_1 = L_2;
		int32_t L_3 = p0;
		p0 = ((int32_t)((int32_t)L_3+(int32_t)2));
		goto IL_0032;
	}

IL_0023:
	{
		t1170 * L_4 = V_1;
		t936 * L_5 = V_0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5738_MI, L_4, L_5);
		int32_t L_6 = p0;
		p0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_7 = p0;
		bool L_8 = p1;
		t936 * L_9 = (t936 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t936_TI));
		m8586(L_9, L_7, L_8, &m8586_MI);
		t936 * L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		t936 * L_11 = V_0;
		t914 * L_12 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m4452_MI, L_11);
		if (L_12)
		{
			goto IL_0023;
		}
	}

IL_0045:
	{
		bool L_13 = p1;
		__this->f2 = L_13;
		t1170 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t936_0_0_0), &m329_MI);
		t121 * L_16 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5858_MI, L_14, L_15);
		__this->f1 = ((t1698*)Castclass(L_16, t1698_TI_var));
		return;
	}
}
extern "C" t1698* m8598 (t9 * __this , t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef t1698* (*m8598_ftn) (t138 *, int32_t, bool);
	static m8598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8598_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" int32_t m4457 (t855 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1698* L_0 = (__this->f1);
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
		t1698* L_1 = (__this->f1);
		G_B3_0 = (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern "C" t936 * m4451 (t855 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4457_MI, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (t936 *)NULL;
	}

IL_000f:
	{
		t1698* L_3 = (__this->f1);
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		return (*(t936 **)(t936 **)SZArrayLdElema(L_3, L_5));
	}
}
extern MethodInfo m8599_MI;
extern "C" t2* m8599 (t855 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	t322 * V_3 = {0};
	int32_t V_4 = 0;
	t936 * V_5 = {0};
	t914 * V_6 = {0};
	t928* V_7 = {0};
	int32_t V_8 = 0;
	t126 * V_9 = {0};
	bool V_10 = false;
	t2* V_11 = {0};
	{
		t2* L_0 = m5804(NULL, &m5804_MI);
		t2* L_1 = m7847(NULL, (t2*) &_stringLiteral1258, &m7847_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1214(NULL, (t2*) &_stringLiteral1450, L_0, L_1, &m1214_MI);
		V_0 = L_2;
		t2* L_3 = m7847(NULL, (t2*) &_stringLiteral1259, &m7847_MI);
		V_1 = L_3;
		t2* L_4 = m7847(NULL, (t2*) &_stringLiteral1451, &m7847_MI);
		V_2 = L_4;
		t322 * L_5 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m1166(L_5, &m1166_MI);
		V_3 = L_5;
		V_4 = 0;
		goto IL_01b8;
	}

IL_003e:
	{
		int32_t L_6 = V_4;
		t936 * L_7 = (t936 *)VirtFuncInvoker1< t936 *, int32_t >::Invoke(&m4451_MI, __this, L_6);
		V_5 = L_7;
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t322 * L_9 = V_3;
		t2* L_10 = V_0;
		m1170(L_9, L_10, &m1170_MI);
		goto IL_006d;
	}

IL_0057:
	{
		t322 * L_11 = V_3;
		t2* L_12 = m7847(NULL, (t2*) &_stringLiteral1258, &m7847_MI);
		m5751(L_11, (t2*) &_stringLiteral1452, L_12, &m5751_MI);
	}

IL_006d:
	{
		t936 * L_13 = V_5;
		t914 * L_14 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m4452_MI, L_13);
		V_6 = L_14;
		t914 * L_15 = V_6;
		if (!L_15)
		{
			goto IL_0175;
		}
	}
	{
		t322 * L_16 = V_3;
		t914 * L_17 = V_6;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4453_MI, L_17);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_18);
		t914 * L_20 = V_6;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_20);
		m5842(L_16, (t2*) &_stringLiteral1453, L_19, L_21, &m5842_MI);
		t322 * L_22 = V_3;
		m1170(L_22, (t2*) &_stringLiteral382, &m1170_MI);
		t914 * L_23 = V_6;
		t928* L_24 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4424_MI, L_23);
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
		t322 * L_26 = V_3;
		m1170(L_26, (t2*) &_stringLiteral383, &m1170_MI);
	}

IL_00ca:
	{
		t928* L_27 = V_7;
		int32_t L_28 = V_8;
		int32_t L_29 = L_28;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4425_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_27, L_29)));
		V_9 = L_30;
		t126 * L_31 = V_9;
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7752_MI, L_31);
		V_10 = L_32;
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_00ec;
		}
	}
	{
		t126 * L_34 = V_9;
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11968_MI, L_34);
		V_9 = L_35;
	}

IL_00ec:
	{
		t126 * L_36 = V_9;
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7753_MI, L_36);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		t126 * L_38 = V_9;
		t2* L_39 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4454_MI, L_38);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_41 = m2738(NULL, L_39, L_40, &m2738_MI);
		if (!L_41)
		{
			goto IL_0122;
		}
	}
	{
		t322 * L_42 = V_3;
		t126 * L_43 = V_9;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4454_MI, L_43);
		m1170(L_42, L_44, &m1170_MI);
		t322 * L_45 = V_3;
		m1170(L_45, (t2*) &_stringLiteral135, &m1170_MI);
	}

IL_0122:
	{
		t322 * L_46 = V_3;
		t126 * L_47 = V_9;
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4392_MI, L_47);
		m1170(L_46, L_48, &m1170_MI);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_0140;
		}
	}
	{
		t322 * L_50 = V_3;
		m1170(L_50, (t2*) &_stringLiteral1454, &m1170_MI);
	}

IL_0140:
	{
		t322 * L_51 = V_3;
		t928* L_52 = V_7;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		t2* L_55 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9707_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_52, L_54)));
		m5751(L_51, (t2*) &_stringLiteral1455, L_55, &m5751_MI);
		int32_t L_56 = V_8;
		V_8 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_015c:
	{
		int32_t L_57 = V_8;
		t928* L_58 = V_7;
		if ((((int32_t)L_57) < ((int32_t)(((int32_t)(((t121 *)L_58)->max_length))))))
		{
			goto IL_00b9;
		}
	}
	{
		t322 * L_59 = V_3;
		m1170(L_59, (t2*) &_stringLiteral143, &m1170_MI);
		goto IL_017d;
	}

IL_0175:
	{
		t322 * L_60 = V_3;
		t2* L_61 = V_1;
		m1170(L_60, L_61, &m1170_MI);
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
		t936 * L_63 = V_5;
		t2* L_64 = m8588(L_63, &m8588_MI);
		V_11 = L_64;
		t2* L_65 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_66 = m2738(NULL, L_65, (t2*) &_stringLiteral1443, &m2738_MI);
		if (!L_66)
		{
			goto IL_01b2;
		}
	}
	{
		t322 * L_67 = V_3;
		t2* L_68 = V_2;
		t2* L_69 = V_11;
		t936 * L_70 = V_5;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4456_MI, L_70);
		int32_t L_72 = L_71;
		t9 * L_73 = Box(InitializedTypeInfo(&t125_TI), &L_72);
		m5842(L_67, L_68, L_69, L_73, &m5842_MI);
	}

IL_01b2:
	{
		int32_t L_74 = V_4;
		V_4 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_01b8:
	{
		int32_t L_75 = V_4;
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4457_MI, __this);
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_003e;
		}
	}
	{
		t322 * L_77 = V_3;
		t2* L_78 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_77);
		return L_78;
	}
}
#include "t1699.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1699_TI;
#include "t1699MD.h"

#include "t1700.h"
extern MethodInfo m12005_MI;


extern MethodInfo m8600_MI;
extern "C" void m8600 (t1699 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f1 = ((int32_t)99);
		return;
	}
}
extern MethodInfo m8601_MI;
extern "C" void m8601 (t1699 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_1, (t2*) &_stringLiteral1457, &m5714_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8602_MI;
extern TypeInfo* t221_TI_var;
extern "C" t221* m8602 (t1699 * __this, MethodInfo* method)
{
	static bool m8602_init;
	if (!m8602_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8602_init = true;
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
		t1095* L_2 = (t1095*)VirtFuncInvoker0< t1095* >::Invoke(&m12005_MI, __this);
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral1456, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		t221* L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5747_MI, L_4);
		return ((t221*)Castclass(L_5, t221_TI_var));
	}
}
#include "t1701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1701_TI;
#include "t1701MD.h"

extern MethodInfo m4262_MI;
extern MethodInfo m8603_MI;


extern "C" int32_t m8603 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		double L_2 = floor(((double)((double)(((double)L_0))/(double)(((double)L_1)))));
		return (((int32_t)L_2));
	}
}
extern MethodInfo m8604_MI;
extern "C" int32_t m8604 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = m8603(NULL, L_2, L_3, &m8603_MI);
		return ((int32_t)((int32_t)L_0-(int32_t)((int32_t)((int32_t)L_1*(int32_t)L_4))));
	}
}
extern MethodInfo m8605_MI;
extern "C" int32_t m8605 (t9 * __this , int32_t* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8603(NULL, L_0, L_1, &m8603_MI);
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
#include "t1702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1702_TI;
#include "t1702MD.h"

#include "t299.h"
extern MethodInfo m6980_MI;


extern MethodInfo m8606_MI;
extern "C" int32_t m8606 (t9 * __this , t270  p0, MethodInfo* method)
{
	{
		int64_t L_0 = m6980((&p0), &m6980_MI);
		return ((int32_t)((int32_t)1+(int32_t)(((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))))));
	}
}
extern MethodInfo m8607_MI;
extern "C" int32_t m8607 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8604(NULL, L_0, 7, &m8604_MI);
		return (int32_t)(L_1);
	}
}
#include "t1703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1703_TI;
#include "t1703MD.h"

extern MethodInfo m8608_MI;
extern MethodInfo m8610_MI;
extern MethodInfo m8609_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8614_MI;
extern MethodInfo m8613_MI;


extern "C" bool m8608 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8604(NULL, L_0, 4, &m8604_MI);
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
		int32_t L_3 = m8604(NULL, L_2, ((int32_t)400), &m8604_MI);
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
extern "C" int32_t m8609 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		int32_t L_4 = m8603(NULL, ((int32_t)((int32_t)L_3-(int32_t)1)), 4, &m8603_MI);
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)L_4));
		int32_t L_5 = V_0;
		int32_t L_6 = p2;
		int32_t L_7 = m8603(NULL, ((int32_t)((int32_t)L_6-(int32_t)1)), ((int32_t)100), &m8603_MI);
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = p2;
		int32_t L_10 = m8603(NULL, ((int32_t)((int32_t)L_9-(int32_t)1)), ((int32_t)400), &m8603_MI);
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		int32_t L_13 = m8603(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)367)*(int32_t)L_12))-(int32_t)((int32_t)362))), ((int32_t)12), &m8603_MI);
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
		bool L_17 = m8608(NULL, L_16, &m8608_MI);
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
extern "C" int32_t m8610 (t9 * __this , int32_t p0, MethodInfo* method)
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
		int32_t L_2 = m8605(NULL, (&V_0), L_1, ((int32_t)146097), &m8605_MI);
		V_1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = m8605(NULL, (&V_0), L_3, ((int32_t)36524), &m8605_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = m8605(NULL, (&V_0), L_5, ((int32_t)1461), &m8605_MI);
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = m8603(NULL, L_7, ((int32_t)365), &m8603_MI);
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
extern "C" void m8611 (t9 * __this , int32_t* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8610(NULL, L_1, &m8610_MI);
		*((int32_t*)(L_0)) = (int32_t)L_2;
		int32_t L_3 = p2;
		int32_t* L_4 = p1;
		int32_t L_5 = m8609(NULL, 1, 1, (*((int32_t*)L_4)), &m8609_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)L_5));
		int32_t L_6 = p2;
		int32_t* L_7 = p1;
		int32_t L_8 = m8609(NULL, 1, 3, (*((int32_t*)L_7)), &m8609_MI);
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
		bool L_10 = m8608(NULL, (*((int32_t*)L_9)), &m8608_MI);
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
		int32_t L_14 = m8603(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)12)*(int32_t)((int32_t)((int32_t)L_12+(int32_t)L_13))))+(int32_t)((int32_t)373))), ((int32_t)367), &m8603_MI);
		*((int32_t*)(L_11)) = (int32_t)L_14;
		return;
	}
}
extern "C" void m8612 (t9 * __this , int32_t* p0, int32_t* p1, int32_t* p2, int32_t p3, MethodInfo* method)
{
	{
		int32_t* L_0 = p1;
		int32_t* L_1 = p2;
		int32_t L_2 = p3;
		m8611(NULL, L_0, L_1, L_2, &m8611_MI);
		int32_t* L_3 = p0;
		int32_t L_4 = p3;
		int32_t* L_5 = p1;
		int32_t* L_6 = p2;
		int32_t L_7 = m8609(NULL, 1, (*((int32_t*)L_5)), (*((int32_t*)L_6)), &m8609_MI);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_7))+(int32_t)1));
		return;
	}
}
extern "C" int32_t m8613 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		m8611(NULL, (&V_0), (&V_1), L_0, &m8611_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C" int32_t m8614 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		m8612(NULL, (&V_0), (&V_1), (&V_2), L_0, &m8612_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m8615_MI;
extern "C" int32_t m8615 (t9 * __this , t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8606(NULL, L_0, &m8606_MI);
		int32_t L_2 = m8614(NULL, L_1, &m8614_MI);
		return L_2;
	}
}
extern MethodInfo m8616_MI;
extern "C" int32_t m8616 (t9 * __this , t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8606(NULL, L_0, &m8606_MI);
		int32_t L_2 = m8613(NULL, L_1, &m8613_MI);
		return L_2;
	}
}
extern MethodInfo m8617_MI;
extern "C" int32_t m8617 (t9 * __this , t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8606(NULL, L_0, &m8606_MI);
		int32_t L_2 = m8610(NULL, L_1, &m8610_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1615.h"
#include "t1617.h"
extern TypeInfo t1615_TI;
extern TypeInfo t1617_TI;
#include "t1615MD.h"
#include "t1400MD.h"
#include "t1617MD.h"
extern MethodInfo m8654_MI;
extern MethodInfo m8622_MI;
extern MethodInfo m7892_MI;
extern MethodInfo m8658_MI;
extern MethodInfo m8623_MI;
extern MethodInfo m11527_MI;
extern MethodInfo m6074_MI;
extern MethodInfo m8646_MI;
extern MethodInfo m8624_MI;
extern MethodInfo m7918_MI;
extern MethodInfo m8629_MI;
extern MethodInfo m8625_MI;
extern MethodInfo m8630_MI;
extern MethodInfo m8645_MI;
extern MethodInfo m7910_MI;
extern MethodInfo m7944_MI;
extern MethodInfo m8626_MI;
extern MethodInfo m8639_MI;
extern MethodInfo m7929_MI;
extern MethodInfo m7934_MI;
extern MethodInfo m8637_MI;
extern MethodInfo m8627_MI;
extern MethodInfo m8638_MI;
extern MethodInfo m7923_MI;
extern MethodInfo m8632_MI;
extern MethodInfo m7926_MI;
extern MethodInfo m8643_MI;


extern MethodInfo m8618_MI;
extern "C" void m8618 (t1546 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8619_MI;
extern "C" void m8619 (t1546 * __this, t901 * p0, MethodInfo* method)
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
		t901 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_0);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_2 = m8622(NULL, &m8622_MI);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		t9 * L_3 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f5;
		V_0 = L_3;
		t9 * L_4 = V_0;
		m1083(NULL, L_4, &m1083_MI);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			t1158 * L_5 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f4;
			if (L_5)
			{
				goto IL_0039;
			}
		}

IL_002f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
			t1158 * L_6 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
			m5912(L_6, &m5912_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f4 = L_6;
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			t1158 * L_7 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f4;
			t901 * L_8 = p0;
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_8);
			int32_t L_10 = L_9;
			t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
			t9 * L_12 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5736_MI, L_7, L_11);
			__this->f3 = ((t1615 *)Castclass(L_12, InitializedTypeInfo(&t1615_TI)));
			t1615 * L_13 = (__this->f3);
			if (L_13)
			{
				goto IL_0088;
			}
		}

IL_0061:
		{
			t901 * L_14 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1615_TI));
			t1615 * L_15 = (t1615 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1615_TI));
			m7892(L_15, L_14, &m7892_MI);
			__this->f3 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			t1158 * L_16 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f4;
			t901 * L_17 = p0;
			int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_17);
			int32_t L_19 = L_18;
			t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
			t1615 * L_21 = (__this->f3);
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5920_MI, L_16, L_20, L_21);
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
		m1085(NULL, L_22, &m1085_MI);
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
		t901 * L_23 = p0;
		t2* L_24 = m8658(L_23, &m8658_MI);
		__this->f2 = L_24;
		t2* L_25 = (__this->f2);
		m8623(__this, L_25, &m8623_MI);
	}

IL_00ab:
	{
		return;
	}
}
extern MethodInfo m8620_MI;
extern "C" void m8620 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = m11527(NULL, (t2*) &_stringLiteral1458, &m11527_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m2738(NULL, L_0, (t2*) &_stringLiteral1300, &m2738_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m6074(NULL, &m6074_MI);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f0 = G_B3_0;
		t9 * L_3 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_3, &m336_MI);
		((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f5 = L_3;
		return;
	}
}
extern MethodInfo m8621_MI;
extern "C" void m8621 (t1546 * __this, t9 * p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_0 = m8622(NULL, &m8622_MI);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_2 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8646(L_2, L_1, &m8646_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1615_TI));
		t1615 * L_3 = (t1615 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1615_TI));
		m7892(L_3, L_2, &m7892_MI);
		__this->f3 = L_3;
		goto IL_0030;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t2* L_4 = (__this->f2);
		m8623(__this, L_4, &m8623_MI);
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
extern "C" bool m8622 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_0 = ((t1546_SFs*)InitializedTypeInfo(&t1546_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m8623 (t1546 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m8623_ftn) (t1546 *, t2*);
	static m8623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8623_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::construct_compareinfo(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m8624 (t1546 * __this, MethodInfo* method)
{
	typedef void (*m8624_ftn) (t1546 *);
	static m8624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8624_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::free_internal_collator()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m8625 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	typedef int32_t (*m8625_ftn) (t1546 *, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t);
	static m8625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8625_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5, p6);
}
extern "C" void m8626 (t1546 * __this, t9 * p0, t2* p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m8626_ftn) (t1546 *, t9 *, t2*, int32_t);
	static m8626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8626_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" int32_t m8627 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	typedef int32_t (*m8627_ftn) (t1546 *, t2*, int32_t, int32_t, t2*, int32_t, bool);
	static m8627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8627_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8628_MI;
extern "C" void m8628 (t1546 * __this, MethodInfo* method)
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
		m8624(__this, &m8624_MI);
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
extern "C" int32_t m8629 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	{
		t1615 * L_0 = (__this->f3);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		t2* L_4 = p3;
		int32_t L_5 = p4;
		int32_t L_6 = p5;
		int32_t L_7 = p6;
		int32_t L_8 = m7918(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m7918_MI);
		return L_8;
	}
}
extern "C" int32_t m8630 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_0 = m8622(NULL, &m8622_MI);
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
		int32_t L_8 = m8629(__this, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8629_MI);
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
		int32_t L_16 = m8625(__this, L_9, L_10, L_11, L_12, L_13, L_14, L_15, &m8625_MI);
		G_B3_0 = L_16;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8631 (t1546 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m6972_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" int32_t m6972 (t1546 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_2, (t2*) &_stringLiteral680, &m2910_MI);
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
		int32_t L_7 = m2724(L_6, &m2724_MI);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_8 = p1;
		int32_t L_9 = m2724(L_8, &m2724_MI);
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
		int32_t L_12 = m2724(L_11, &m2724_MI);
		t2* L_13 = p1;
		t2* L_14 = p1;
		int32_t L_15 = m2724(L_14, &m2724_MI);
		int32_t L_16 = p2;
		int32_t L_17 = m8630(__this, L_10, 0, L_12, L_13, 0, L_15, L_16, &m8630_MI);
		return L_17;
	}
}
extern "C" int32_t m8632 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
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
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_2, (t2*) &_stringLiteral680, &m2910_MI);
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
		int32_t L_7 = m2724(L_6, &m2724_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = p1;
		t2* L_9 = p0;
		int32_t L_10 = m2724(L_9, &m2724_MI);
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
		int32_t L_13 = m2724(L_12, &m2724_MI);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14 = p4;
		t2* L_15 = p3;
		int32_t L_16 = m2724(L_15, &m2724_MI);
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
		t903 * L_22 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_22, (t2*) &_stringLiteral1459, &m5722_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0073:
	{
		int32_t L_23 = p1;
		t2* L_24 = p0;
		int32_t L_25 = m2724(L_24, &m2724_MI);
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0087;
		}
	}
	{
		t903 * L_26 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_26, (t2*) &_stringLiteral1460, &m5722_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_0087:
	{
		int32_t L_27 = p4;
		t2* L_28 = p3;
		int32_t L_29 = m2724(L_28, &m2724_MI);
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		t903 * L_30 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_30, (t2*) &_stringLiteral1461, &m5722_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009d:
	{
		int32_t L_31 = p2;
		t2* L_32 = p0;
		int32_t L_33 = m2724(L_32, &m2724_MI);
		int32_t L_34 = p1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34)))))
		{
			goto IL_00b3;
		}
	}
	{
		t903 * L_35 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_35, (t2*) &_stringLiteral1462, &m5722_MI);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_00b3:
	{
		int32_t L_36 = p5;
		t2* L_37 = p3;
		int32_t L_38 = m2724(L_37, &m2724_MI);
		int32_t L_39 = p4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_39)))))
		{
			goto IL_00cc;
		}
	}
	{
		t903 * L_40 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_40, (t2*) &_stringLiteral1463, &m5722_MI);
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
		int32_t L_48 = m8630(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, &m8630_MI);
		return L_48;
	}
}
extern MethodInfo m8633_MI;
extern "C" bool m8633 (t1546 * __this, t9 * p0, MethodInfo* method)
{
	t1546 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1546 *)IsInst(L_0, InitializedTypeInfo(&t1546_TI)));
		t1546 * L_1 = V_0;
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
		t1546 * L_2 = V_0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m8634_MI;
extern "C" int32_t m8634 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8645(__this, &m8645_MI);
		return L_0;
	}
}
extern MethodInfo m8635_MI;
extern "C" t1617 * m8635 (t1546 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	t1617 * V_0 = {0};
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
		t563 * L_3 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_3, (t2*) &_stringLiteral1464, (t2*) &_stringLiteral680, &m5720_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_4 = m8622(NULL, &m8622_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t1615 * L_5 = (__this->f3);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t1617 * L_8 = m7910(L_5, L_6, L_7, &m7910_MI);
		return L_8;
	}

IL_0039:
	{
		int32_t L_9 = (__this->f1);
		t2* L_10 = p0;
		int32_t L_11 = p1;
		t1617 * L_12 = (t1617 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1617_TI));
		m7944(L_12, L_9, L_10, L_11, &m7944_MI);
		V_0 = L_12;
		t1617 * L_13 = V_0;
		t2* L_14 = p0;
		int32_t L_15 = p1;
		m8626(__this, L_13, L_14, L_15, &m8626_MI);
		t1617 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m8636_MI;
extern "C" int32_t m8636 (t1546 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8639_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8637 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
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
		t1615 * L_1 = (__this->f3);
		t2* L_2 = p0;
		t2* L_3 = p3;
		int32_t L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p4;
		int32_t L_7 = m7929(L_1, L_2, L_3, L_4, L_5, L_6, &m7929_MI);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0018:
	{
		t1615 * L_8 = (__this->f3);
		t2* L_9 = p0;
		t2* L_10 = p3;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		int32_t L_13 = p4;
		int32_t L_14 = m7934(L_8, L_9, L_10, L_11, L_12, L_13, &m7934_MI);
		G_B3_0 = L_14;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8638 (t1546 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_0 = m8622(NULL, &m8622_MI);
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
		int32_t L_9 = m8637(__this, L_3, L_4, L_5, L_6, L_7, L_8, &m8637_MI);
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
		int32_t L_16 = m8627(__this, L_10, L_11, L_12, L_13, L_14, L_15, &m8627_MI);
		G_B5_0 = L_16;
	}

IL_0034:
	{
		return G_B5_0;
	}
}
extern "C" int32_t m8639 (t1546 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral401, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral606, &m339_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_5, (t2*) &_stringLiteral1112, &m5722_MI);
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
		int32_t L_8 = m2724(L_7, &m2724_MI);
		int32_t L_9 = p2;
		int32_t L_10 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		t903 * L_11 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_11, (t2*) &_stringLiteral488, &m5722_MI);
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
		t563 * L_14 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_14, (t2*) &_stringLiteral680, &m2910_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005e:
	{
		t2* L_15 = p1;
		int32_t L_16 = m2724(L_15, &m2724_MI);
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
		int32_t L_24 = m8638(__this, L_19, L_20, L_21, L_22, L_23, 1, &m8638_MI);
		return L_24;
	}
}
extern MethodInfo m8640_MI;
extern "C" bool m8640 (t1546 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral401, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1465, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_4 = m8622(NULL, &m8622_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1615 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7923(L_5, L_6, L_7, L_8, &m7923_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2724(L_10, &m2724_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2724(L_12, &m2724_MI);
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
		int32_t L_16 = m2724(L_15, &m2724_MI);
		t2* L_17 = p1;
		t2* L_18 = p1;
		int32_t L_19 = m2724(L_18, &m2724_MI);
		int32_t L_20 = p2;
		int32_t L_21 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8632_MI, __this, L_14, 0, L_16, L_17, 0, L_19, L_20);
		return ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8641_MI;
extern "C" bool m8641 (t1546 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral401, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1466, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
		bool L_4 = m8622(NULL, &m8622_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1615 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7926(L_5, L_6, L_7, L_8, &m7926_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2724(L_10, &m2724_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2724(L_12, &m2724_MI);
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
		int32_t L_16 = m2724(L_15, &m2724_MI);
		t2* L_17 = p1;
		int32_t L_18 = m2724(L_17, &m2724_MI);
		t2* L_19 = p1;
		int32_t L_20 = m2724(L_19, &m2724_MI);
		t2* L_21 = p1;
		t2* L_22 = p1;
		int32_t L_23 = m2724(L_22, &m2724_MI);
		int32_t L_24 = p2;
		int32_t L_25 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8632_MI, __this, L_14, ((int32_t)((int32_t)L_16-(int32_t)L_18)), L_20, L_21, 0, L_23, L_24);
		return ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8642_MI;
extern "C" int32_t m8642 (t1546 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8643_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8643 (t1546 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral401, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral606, &m339_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_5, (t2*) &_stringLiteral1112, &m5722_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_9, (t2*) &_stringLiteral488, &m5722_MI);
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
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_12, (t2*) &_stringLiteral680, &m2910_MI);
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
		int32_t L_15 = m2724(L_14, &m2724_MI);
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
		int32_t L_22 = m8638(__this, L_17, L_18, L_19, L_20, L_21, 0, &m8638_MI);
		return L_22;
	}
}
extern MethodInfo m8644_MI;
extern "C" t2* m8644 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1467, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" int32_t m8645 (t1546 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1547MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1872.h"
#include "t1555.h"
#include "t1704.h"
extern TypeInfo t1872_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t1704_TI;
#include "t1872MD.h"
#include "t1555MD.h"
#include "t1704MD.h"
extern Il2CppType t1555_0_0_0;
extern Il2CppType t1704_0_0_0;
extern MethodInfo m11042_MI;
extern MethodInfo m11053_MI;
extern MethodInfo m11054_MI;
extern MethodInfo m8668_MI;
extern MethodInfo m8678_MI;
extern MethodInfo m8663_MI;
extern MethodInfo m8735_MI;
extern MethodInfo m8676_MI;
extern MethodInfo m8680_MI;
extern MethodInfo m8675_MI;
extern MethodInfo m8709_MI;
extern MethodInfo m8647_MI;
extern MethodInfo m8648_MI;
extern MethodInfo m8677_MI;
extern MethodInfo m8670_MI;
extern MethodInfo m7374_MI;
extern MethodInfo m8669_MI;
extern MethodInfo m8650_MI;
extern MethodInfo m8671_MI;
extern MethodInfo m8652_MI;
extern MethodInfo m8662_MI;
extern MethodInfo m8664_MI;
extern MethodInfo m8665_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m8674_MI;
extern MethodInfo m8746_MI;
extern MethodInfo m8707_MI;
extern MethodInfo m8767_MI;
extern MethodInfo m8686_MI;
extern MethodInfo m8769_MI;
extern MethodInfo m8649_MI;


extern "C" void m8646 (t901 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8647(__this, L_0, 1, &m8647_MI);
		return;
	}
}
extern "C" void m8647 (t901 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8648(__this, L_0, L_1, 0, &m8648_MI);
		return;
	}
}
extern "C" void m8648 (t901 * __this, int32_t p0, bool p1, bool p2, MethodInfo* method)
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
		t903 * L_1 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_1, (t2*) &_stringLiteral1102, (t2*) &_stringLiteral1468, &m4361_MI);
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
		m8677(__this, L_5, &m8677_MI);
		return;
	}

IL_003c:
	{
		int32_t L_6 = p0;
		bool L_7 = m8670(__this, L_6, &m8670_MI);
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
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1469, L_10, &m590_MI);
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_12, L_11, (t2*) &_stringLiteral1102, &m5720_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0060:
	{
		return;
	}
}
extern "C" void m8649 (t901 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		int32_t L_5 = m2724(L_4, &m2724_MI);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = p2;
		m8677(__this, L_6, &m8677_MI);
		return;
	}

IL_0039:
	{
		t2* L_7 = p0;
		t2* L_8 = m7374(L_7, &m7374_MI);
		bool L_9 = m8669(__this, L_8, &m8669_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m399(NULL, (t2*) &_stringLiteral1470, L_10, (t2*) &_stringLiteral1471, &m399_MI);
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_12, L_11, (t2*) &_stringLiteral2, &m5720_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0062:
	{
		return;
	}
}
extern "C" void m8650 (t901 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f33 = 1;
		return;
	}
}
extern MethodInfo m8651_MI;
extern "C" void m8651 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f5 = L_0;
		((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f35 = (t2*) &_stringLiteral1472;
		t901 * L_1 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8648(L_1, ((int32_t)127), 0, 1, &m8648_MI);
		((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f4 = L_1;
		return;
	}
}
extern "C" t901 * m4359 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = ((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f4;
		return L_0;
	}
}
extern "C" t901 * m6970 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1872 * L_0 = m11042(NULL, &m11042_MI);
		t901 * L_1 = m11053(L_0, &m11053_MI);
		return L_1;
	}
}
extern MethodInfo m6974_MI;
extern "C" t901 * m6974 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1872 * L_0 = m11042(NULL, &m11042_MI);
		t901 * L_1 = m11054(L_0, &m11054_MI);
		return L_1;
	}
}
extern "C" t901 * m8652 (t9 * __this , MethodInfo* method)
{
	t901 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8650(L_0, &m8650_MI);
		V_0 = L_0;
		t901 * L_1 = V_0;
		bool L_2 = m8671(NULL, L_1, &m8671_MI);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_3 = m4359(NULL, &m4359_MI);
		V_0 = L_3;
	}

IL_0014:
	{
		t901 * L_4 = V_0;
		int32_t L_5 = (L_4->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f6 = L_5;
		t901 * L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m8653_MI;
extern "C" t901 * m8653 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_0 = m8652(NULL, &m8652_MI);
		return L_0;
	}
}
extern "C" int32_t m8654 (t901 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m8655 (t901 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8656_MI;
extern "C" t901 * m8656 (t901 * __this, MethodInfo* method)
{
	{
		t901 * L_0 = (__this->f30);
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
		m8668(__this, &m8668_MI);
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
		return (t901 *)NULL;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_5 = m4359(NULL, &m4359_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_8 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8646(L_8, L_7, &m8646_MI);
		__this->f30 = L_8;
	}

IL_0061:
	{
		t901 * L_9 = (__this->f30);
		return L_9;
	}
}
extern "C" t1616 * m8657 (t901 * __this, MethodInfo* method)
{
	t901 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1616 * L_0 = (__this->f16);
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
		m8668(__this, &m8668_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t901 * L_2 = V_0;
		m1083(NULL, L_2, &m1083_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1616 * L_3 = (__this->f16);
			if (L_3)
			{
				goto IL_003e;
			}
		}

IL_002a:
		{
			bool L_4 = (__this->f7);
			t1616 * L_5 = m8678(__this, L_4, &m8678_MI);
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
		t901 * L_6 = V_0;
		m1085(NULL, L_6, &m1085_MI);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0047:
	{
		t1616 * L_7 = (__this->f16);
		return L_7;
	}
}
extern "C" t2* m8658 (t901 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8668(__this, &m8668_MI);
	}

IL_000e:
	{
		t2* L_1 = (__this->f23);
		return L_1;
	}
}
extern MethodInfo m8659_MI;
extern "C" bool m8659 (t901 * __this, t9 * p0, MethodInfo* method)
{
	t901 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t901 *)IsInst(L_0, InitializedTypeInfo(&t901_TI)));
		t901 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t901 * L_2 = V_0;
		int32_t L_3 = (L_2->f8);
		int32_t L_4 = (__this->f8);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0019:
	{
		return 0;
	}
}
extern MethodInfo m8660_MI;
extern "C" int32_t m8660 (t901 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8661_MI;
extern "C" t2* m8661 (t901 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t1546 * m6971 (t901 * __this, MethodInfo* method)
{
	t901 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1546 * L_0 = (__this->f26);
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
		m8668(__this, &m8668_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t901 * L_2 = V_0;
		m1083(NULL, L_2, &m1083_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1546 * L_3 = (__this->f26);
			if (L_3)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1546_TI));
			t1546 * L_4 = (t1546 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1546_TI));
			m8619(L_4, __this, &m8619_MI);
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
		t901 * L_5 = V_0;
		m1085(NULL, L_5, &m1085_MI);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0041:
	{
		t1546 * L_6 = (__this->f26);
		return L_6;
	}
}
extern "C" bool m8662 (t901 * __this, MethodInfo* method)
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
		m8668(__this, &m8668_MI);
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
extern "C" void m8663 (t901 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8662_MI, __this);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2* L_1 = (__this->f17);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1473, L_1, (t2*) &_stringLiteral1474, &m399_MI);
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_3, L_2, &m5735_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		return;
	}
}
extern "C" t1555 * m8664 (t901 * __this, MethodInfo* method)
{
	t901 * V_0 = {0};
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
		m8668(__this, &m8668_MI);
	}

IL_000e:
	{
		m8663(__this, &m8663_MI);
		t1555 * L_1 = (__this->f14);
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		V_0 = __this;
		t901 * L_2 = V_0;
		m1083(NULL, L_2, &m1083_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1555 * L_3 = (__this->f14);
			if (L_3)
			{
				goto IL_0049;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
			t1555 * L_5 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
			m8735(L_5, L_4, &m8735_MI);
			__this->f14 = L_5;
			m8676(__this, &m8676_MI);
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
		t901 * L_6 = V_0;
		m1085(NULL, L_6, &m1085_MI);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0052:
	{
		t1555 * L_7 = (__this->f14);
		return L_7;
	}
}
extern "C" t1704 * m8665 (t901 * __this, MethodInfo* method)
{
	t901 * V_0 = {0};
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
		m8668(__this, &m8668_MI);
	}

IL_000e:
	{
		m8663(__this, &m8663_MI);
		t1704 * L_1 = (__this->f15);
		if (L_1)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = __this;
		t901 * L_2 = V_0;
		m1083(NULL, L_2, &m1083_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1704 * L_3 = (__this->f15);
			if (L_3)
			{
				goto IL_0066;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
			t1704 * L_5 = (t1704 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1704_TI));
			m8680(L_5, L_4, &m8680_MI);
			__this->f15 = L_5;
			m8675(__this, &m8675_MI);
			t1705* L_6 = (__this->f29);
			if (!L_6)
			{
				goto IL_0066;
			}
		}

IL_0051:
		{
			t1704 * L_7 = (__this->f15);
			t1705* L_8 = (__this->f29);
			int32_t L_9 = 0;
			m8709(L_7, (*(t1699 **)(t1699 **)SZArrayLdElema(L_8, L_9)), &m8709_MI);
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
		t901 * L_10 = V_0;
		m1085(NULL, L_10, &m1085_MI);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006f:
	{
		t1704 * L_11 = (__this->f15);
		return L_11;
	}
}
extern MethodInfo m8666_MI;
extern "C" bool m8666 (t901 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8667_MI;
extern "C" t9 * m8667 (t901 * __this, t126 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		V_0 = NULL;
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1555_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		t1555 * L_2 = (t1555 *)VirtFuncInvoker0< t1555 * >::Invoke(&m8664_MI, __this);
		V_0 = L_2;
		goto IL_002c;
	}

IL_0018:
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1704_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		t1704 * L_5 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m8665_MI, __this);
		V_0 = L_5;
	}

IL_002c:
	{
		t9 * L_6 = V_0;
		return L_6;
	}
}
extern "C" void m8668 (t901 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		m8672(__this, L_0, &m8672_MI);
		__this->f33 = 1;
		return;
	}
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern MethodInfo* m5778_MI_var;
extern "C" bool m8669 (t901 * __this, t2* p0, MethodInfo* method)
{
	static bool m8669_init;
	if (!m8669_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m5778_MI_var = il2cpp_codegen_genericmethod_get_method(&m5778_GM);
		m8669_init = true;
	}
	t2* V_0 = {0};
	t720 * V_1 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t720 * L_2 = ((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f38;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5776(L_3, 2, m5776_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_4, (t2*) &_stringLiteral1475, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5777_MI_var, L_5, (t2*) &_stringLiteral1476, 1);
		t720 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f38 = L_6;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t720 * L_7 = ((t901_SFs*)InitializedTypeInfo(&t901_TI)->static_fields)->f38;
		t2* L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5778_MI_var, L_7, L_8, (&V_2));
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
		p0 = (t2*) &_stringLiteral1477;
		goto IL_005f;
	}

IL_0054:
	{
		p0 = (t2*) &_stringLiteral1478;
		goto IL_005f;
	}

IL_005f:
	{
		t2* L_12 = p0;
		bool L_13 = m8673(__this, L_12, &m8673_MI);
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
extern "C" bool m8670 (t901 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8672(__this, L_0, &m8672_MI);
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
extern "C" bool m8671 (t9 * __this , t901 * p0, MethodInfo* method)
{
	{
		t901 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		bool L_1 = m8674(NULL, L_0, &m8674_MI);
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
extern "C" bool m8672 (t901 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m8672_ftn) (t901 *, int32_t);
	static m8672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8672_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8673 (t901 * __this, t2* p0, MethodInfo* method)
{
	typedef bool (*m8673_ftn) (t901 *, t2*);
	static m8673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8673_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8674 (t9 * __this , t901 * p0, MethodInfo* method)
{
	typedef bool (*m8674_ftn) (t901 *);
	static m8674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8674_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m8675 (t901 * __this, MethodInfo* method)
{
	typedef void (*m8675_ftn) (t901 *);
	static m8675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8675_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_datetime_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8676 (t901 * __this, MethodInfo* method)
{
	typedef void (*m8676_ftn) (t901 *);
	static m8676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8676_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_number_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8677 (t901 * __this, bool p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		__this->f8 = ((int32_t)127);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
		t1555 * L_0 = m8746(NULL, &m8746_MI);
		__this->f14 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_1 = m8707(NULL, &m8707_MI);
		__this->f15 = L_1;
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		t1555 * L_3 = (__this->f14);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8767_MI, L_3);
		__this->f14 = ((t1555 *)Castclass(L_4, InitializedTypeInfo(&t1555_TI)));
		t1704 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8686_MI, L_5);
		__this->f15 = ((t1704 *)Castclass(L_6, InitializedTypeInfo(&t1704_TI)));
	}

IL_0059:
	{
		bool L_7 = p0;
		t1616 * L_8 = m8678(__this, L_7, &m8678_MI);
		__this->f16 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f17 = L_9;
		t2* L_10 = (t2*) &_stringLiteral1479;
		V_0 = L_10;
		__this->f20 = L_10;
		t2* L_11 = V_0;
		t2* L_12 = L_11;
		V_0 = L_12;
		__this->f19 = L_12;
		t2* L_13 = V_0;
		__this->f18 = L_13;
		__this->f21 = (t2*) &_stringLiteral1480;
		__this->f22 = (t2*) &_stringLiteral1481;
		__this->f23 = (t2*) &_stringLiteral1482;
		__this->f24 = (t2*) &_stringLiteral1480;
		return;
	}
}
extern "C" t1616 * m8678 (t901 * __this, bool p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		void* L_1 = (__this->f28);
		bool L_2 = p0;
		t1616 * L_3 = (t1616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1616_TI));
		m8769(L_3, __this, L_0, (void*)(void*)L_1, L_2, &m8769_MI);
		return L_3;
	}
}
extern MethodInfo m8679_MI;
extern "C" t901 * m8679 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2724(L_0, &m2724_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_8 = (t901 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t901_TI));
		m8649(L_8, L_5, L_6, L_7, &m8649_MI);
		return L_8;
	}
}
#include "t1706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1706_TI;
#include "t1706MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1708.h"
extern TypeInfo t1708_TI;
#include "t1708MD.h"
#include "t125MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m8681_MI;
extern MethodInfo m8685_MI;
extern MethodInfo m8719_MI;
extern MethodInfo m8684_MI;
extern MethodInfo m8726_MI;
extern MethodInfo m11962_MI;
extern MethodInfo m8706_MI;
extern MethodInfo m7059_MI;
extern MethodInfo m2511_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m8715_MI;
extern MethodInfo m8716_MI;
extern MethodInfo m8699_MI;
extern MethodInfo m8700_MI;
extern MethodInfo m8702_MI;
extern MethodInfo m8701_MI;
extern MethodInfo m8720_MI;
extern MethodInfo m8703_MI;
extern MethodInfo m8704_MI;
extern MethodInfo m8710_MI;
extern MethodInfo m8712_MI;
extern MethodInfo m8713_MI;


extern "C" void m8680 (t1704 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p0;
		__this->f10 = L_0;
		__this->f11 = (t2*) &_stringLiteral1484;
		__this->f12 = (t2*) &_stringLiteral1485;
		__this->f13 = (t2*) &_stringLiteral745;
		__this->f14 = (t2*) &_stringLiteral338;
		__this->f15 = (t2*) &_stringLiteral1486;
		__this->f16 = (t2*) &_stringLiteral1487;
		__this->f17 = (t2*) &_stringLiteral1488;
		__this->f18 = (t2*) &_stringLiteral1489;
		__this->f19 = (t2*) &_stringLiteral1490;
		__this->f20 = (t2*) &_stringLiteral1491;
		__this->f21 = (t2*) &_stringLiteral1492;
		__this->f22 = (t2*) &_stringLiteral1493;
		__this->f23 = (t2*) &_stringLiteral1494;
		__this->f24 = (t2*) &_stringLiteral1495;
		__this->f25 = 0;
		t1708 * L_1 = (t1708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1708_TI));
		m8726(L_1, &m8726_MI);
		__this->f26 = L_1;
		__this->f27 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t221* L_2 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f4;
		__this->f28 = L_2;
		t221* L_3 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f5;
		__this->f29 = L_3;
		t221* L_4 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f6;
		__this->f31 = L_4;
		t221* L_5 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f7;
		__this->f30 = L_5;
		t221* L_6 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f6;
		__this->f53 = L_6;
		t221* L_7 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f7;
		__this->f52 = L_7;
		t221* L_8 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f8;
		__this->f38 = L_8;
		return;
	}
}
extern "C" void m8681 (t1704 * __this, MethodInfo* method)
{
	{
		m8680(__this, 0, &m8680_MI);
		return;
	}
}
extern MethodInfo m8682_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8682 (t9 * __this , MethodInfo* method)
{
	static bool m8682_init;
	if (!m8682_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8682_init = true;
	}
	{
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f1 = (t2*) &_stringLiteral1472;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f2 = (t2*) &_stringLiteral1496;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f3 = (t2*) &_stringLiteral1497;
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1498);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1498;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1499);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1499;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1500);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1500;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1501);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1501;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1502);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1502;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1503);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1503;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1504);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1504;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f4 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1505);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1505;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1506);
		*((t2**)(t2**)SZArrayLdElema(L_8, 1)) = (t2*)(t2*) &_stringLiteral1506;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1507);
		*((t2**)(t2**)SZArrayLdElema(L_9, 2)) = (t2*)(t2*) &_stringLiteral1507;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1508);
		*((t2**)(t2**)SZArrayLdElema(L_10, 3)) = (t2*)(t2*) &_stringLiteral1508;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1509);
		*((t2**)(t2**)SZArrayLdElema(L_11, 4)) = (t2*)(t2*) &_stringLiteral1509;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1510);
		*((t2**)(t2**)SZArrayLdElema(L_12, 5)) = (t2*)(t2*) &_stringLiteral1510;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1511);
		*((t2**)(t2**)SZArrayLdElema(L_13, 6)) = (t2*)(t2*) &_stringLiteral1511;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f5 = L_13;
		t221* L_14 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1512);
		*((t2**)(t2**)SZArrayLdElema(L_14, 0)) = (t2*)(t2*) &_stringLiteral1512;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1513);
		*((t2**)(t2**)SZArrayLdElema(L_15, 1)) = (t2*)(t2*) &_stringLiteral1513;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1514);
		*((t2**)(t2**)SZArrayLdElema(L_16, 2)) = (t2*)(t2*) &_stringLiteral1514;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1515);
		*((t2**)(t2**)SZArrayLdElema(L_17, 3)) = (t2*)(t2*) &_stringLiteral1515;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1516);
		*((t2**)(t2**)SZArrayLdElema(L_18, 4)) = (t2*)(t2*) &_stringLiteral1516;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1517);
		*((t2**)(t2**)SZArrayLdElema(L_19, 5)) = (t2*)(t2*) &_stringLiteral1517;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1518);
		*((t2**)(t2**)SZArrayLdElema(L_20, 6)) = (t2*)(t2*) &_stringLiteral1518;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1519);
		*((t2**)(t2**)SZArrayLdElema(L_21, 7)) = (t2*)(t2*) &_stringLiteral1519;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1520);
		*((t2**)(t2**)SZArrayLdElema(L_22, 8)) = (t2*)(t2*) &_stringLiteral1520;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1521);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1521;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1522);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1522;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1523);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1523;
		t221* L_26 = L_25;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)12))) = (t2*)L_27;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f6 = L_26;
		t221* L_28 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1524);
		*((t2**)(t2**)SZArrayLdElema(L_28, 0)) = (t2*)(t2*) &_stringLiteral1524;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1525);
		*((t2**)(t2**)SZArrayLdElema(L_29, 1)) = (t2*)(t2*) &_stringLiteral1525;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1526);
		*((t2**)(t2**)SZArrayLdElema(L_30, 2)) = (t2*)(t2*) &_stringLiteral1526;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1527);
		*((t2**)(t2**)SZArrayLdElema(L_31, 3)) = (t2*)(t2*) &_stringLiteral1527;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1516);
		*((t2**)(t2**)SZArrayLdElema(L_32, 4)) = (t2*)(t2*) &_stringLiteral1516;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1528);
		*((t2**)(t2**)SZArrayLdElema(L_33, 5)) = (t2*)(t2*) &_stringLiteral1528;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1529);
		*((t2**)(t2**)SZArrayLdElema(L_34, 6)) = (t2*)(t2*) &_stringLiteral1529;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1530);
		*((t2**)(t2**)SZArrayLdElema(L_35, 7)) = (t2*)(t2*) &_stringLiteral1530;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1531);
		*((t2**)(t2**)SZArrayLdElema(L_36, 8)) = (t2*)(t2*) &_stringLiteral1531;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1532);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1532;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1533);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1533;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1534);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1534;
		t221* L_40 = L_39;
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_40, L_41);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)12))) = (t2*)L_41;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f7 = L_40;
		t221* L_42 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1535);
		*((t2**)(t2**)SZArrayLdElema(L_42, 0)) = (t2*)(t2*) &_stringLiteral1535;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1536);
		*((t2**)(t2**)SZArrayLdElema(L_43, 1)) = (t2*)(t2*) &_stringLiteral1536;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1537);
		*((t2**)(t2**)SZArrayLdElema(L_44, 2)) = (t2*)(t2*) &_stringLiteral1537;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1538);
		*((t2**)(t2**)SZArrayLdElema(L_45, 3)) = (t2*)(t2*) &_stringLiteral1538;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1539);
		*((t2**)(t2**)SZArrayLdElema(L_46, 4)) = (t2*)(t2*) &_stringLiteral1539;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1540);
		*((t2**)(t2**)SZArrayLdElema(L_47, 5)) = (t2*)(t2*) &_stringLiteral1540;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1541);
		*((t2**)(t2**)SZArrayLdElema(L_48, 6)) = (t2*)(t2*) &_stringLiteral1541;
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f8 = L_48;
		return;
	}
}
extern MethodInfo m8683_MI;
extern "C" t1704 * m8683 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1704 * V_0 = {0};
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
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1704_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m11962_MI, L_1, L_2);
		V_0 = ((t1704 *)Castclass(L_3, InitializedTypeInfo(&t1704_TI)));
		t1704 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1704 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_6 = m8706(NULL, &m8706_MI);
		return L_6;
	}
}
extern "C" bool m8684 (t1704 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1704 * m8685 (t9 * __this , t1704 * p0, MethodInfo* method)
{
	t1704 * V_0 = {0};
	{
		t1704 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8686_MI, L_0);
		V_0 = ((t1704 *)Castclass(L_1, InitializedTypeInfo(&t1704_TI)));
		t1704 * L_2 = V_0;
		L_2->f10 = 1;
		t1704 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t9 * m8686 (t1704 * __this, MethodInfo* method)
{
	t1704 * V_0 = {0};
	{
		t9 * L_0 = m7059(__this, &m7059_MI);
		V_0 = ((t1704 *)Castclass(L_0, InitializedTypeInfo(&t1704_TI)));
		t1704 * L_1 = V_0;
		L_1->f10 = 0;
		t1704 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8687_MI;
extern "C" t9 * m8687 (t1704 * __this, t126 * p0, MethodInfo* method)
{
	t1704 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		t126 * L_1 = m2511(__this, &m2511_MI);
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
		G_B3_0 = ((t1704 *)(NULL));
	}

IL_000d:
	{
		return G_B3_0;
	}
}
extern MethodInfo m8688_MI;
extern "C" t2* m8688 (t1704 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_2, &m5899_MI);
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
extern MethodInfo m8689_MI;
extern "C" t2* m8689 (t1704 * __this, int32_t p0, MethodInfo* method)
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
		t1699 * L_2 = (__this->f26);
		t221* L_3 = m8602(L_2, &m8602_MI);
		if ((((int32_t)L_1) <= ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0014:
	{
		t2* L_4 = m4301((&p0), &m4301_MI);
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_5, (t2*) &_stringLiteral1542, L_4, &m4361_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1699 * L_6 = (__this->f26);
		t221* L_7 = m8602(L_6, &m8602_MI);
		int32_t L_8 = p0;
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		return (*(t2**)(t2**)SZArrayLdElema(L_7, L_9));
	}
}
extern MethodInfo m8690_MI;
extern "C" t2* m8690 (t1704 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_2, &m5899_MI);
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
extern MethodInfo m8691_MI;
extern "C" t221* m8691 (t1704 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8692_MI;
extern "C" t221* m8692 (t1704 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f31);
		return L_0;
	}
}
extern MethodInfo m8693_MI;
extern "C" t221* m8693 (t1704 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8694_MI;
extern "C" t221* m8694 (t1704 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8695_MI;
extern "C" t2* m8695 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8696_MI;
extern "C" t2* m8696 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m8697_MI;
extern "C" t2* m8697 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8698_MI;
extern "C" t2* m8698 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern "C" t2* m8699 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" t2* m8700 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern "C" t2* m8701 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t2* m8702 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern "C" t2* m8703 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" t2* m8704 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m8705_MI;
extern "C" t2* m8705 (t1704 * __this, MethodInfo* method)
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
		t2* L_4 = m399(NULL, L_2, (t2*) &_stringLiteral163, L_3, &m399_MI);
		return L_4;
	}
}
extern "C" t1704 * m8706 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1872 * L_0 = m11042(NULL, &m11042_MI);
		t901 * L_1 = m11053(L_0, &m11053_MI);
		t1704 * L_2 = (t1704 *)VirtFuncInvoker0< t1704 * >::Invoke(&m8665_MI, L_1);
		return L_2;
	}
}
extern "C" t1704 * m8707 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_0 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f9;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_1 = (t1704 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1704_TI));
		m8681(L_1, &m8681_MI);
		t1704 * L_2 = m8685(NULL, L_1, &m8685_MI);
		((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f9 = L_2;
		t1704 * L_3 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f9;
		m8719(L_3, &m8719_MI);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t1704 * L_4 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f9;
		return L_4;
	}
}
extern MethodInfo m8708_MI;
extern "C" t1699 * m8708 (t1704 * __this, MethodInfo* method)
{
	{
		t1699 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m8709 (t1704 * __this, t1699 * p0, MethodInfo* method)
{
	{
		bool L_0 = m8684(__this, &m8684_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1704_TI));
		t2* L_1 = ((t1704_SFs*)InitializedTypeInfo(&t1704_TI)->static_fields)->f1;
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_2, L_1, &m5714_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t1699 * L_3 = p0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11144(L_4, &m11144_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1699 * L_5 = p0;
		__this->f26 = L_5;
		return;
	}
}
extern "C" t2* m8710 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8711_MI;
extern "C" t2* m8711 (t1704 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1483;
	}
}
extern "C" t2* m8712 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern "C" t2* m8713 (t1704 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8714_MI;
extern "C" t221* m8714 (t1704 * __this, MethodInfo* method)
{
	{
		m8715(__this, &m8715_MI);
		t221* L_0 = (__this->f57);
		return (t221*)L_0;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m8715 (t1704 * __this, MethodInfo* method)
{
	static bool m8715_init;
	if (!m8715_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8715_init = true;
	}
	t1170 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5727(L_1, &m5727_MI);
		V_0 = L_1;
		t1170 * L_2 = V_0;
		t221* L_3 = m8716(__this, ((int32_t)100), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_2, (t9 *)(t9 *)L_3);
		t1170 * L_4 = V_0;
		t221* L_5 = m8716(__this, ((int32_t)68), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_4, (t9 *)(t9 *)L_5);
		t1170 * L_6 = V_0;
		t221* L_7 = m8716(__this, ((int32_t)103), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_6, (t9 *)(t9 *)L_7);
		t1170 * L_8 = V_0;
		t221* L_9 = m8716(__this, ((int32_t)71), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_8, (t9 *)(t9 *)L_9);
		t1170 * L_10 = V_0;
		t221* L_11 = m8716(__this, ((int32_t)102), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_10, (t9 *)(t9 *)L_11);
		t1170 * L_12 = V_0;
		t221* L_13 = m8716(__this, ((int32_t)70), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_12, (t9 *)(t9 *)L_13);
		t1170 * L_14 = V_0;
		t221* L_15 = m8716(__this, ((int32_t)109), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_14, (t9 *)(t9 *)L_15);
		t1170 * L_16 = V_0;
		t221* L_17 = m8716(__this, ((int32_t)77), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_16, (t9 *)(t9 *)L_17);
		t1170 * L_18 = V_0;
		t221* L_19 = m8716(__this, ((int32_t)114), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_18, (t9 *)(t9 *)L_19);
		t1170 * L_20 = V_0;
		t221* L_21 = m8716(__this, ((int32_t)82), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_20, (t9 *)(t9 *)L_21);
		t1170 * L_22 = V_0;
		t221* L_23 = m8716(__this, ((int32_t)115), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_22, (t9 *)(t9 *)L_23);
		t1170 * L_24 = V_0;
		t221* L_25 = m8716(__this, ((int32_t)116), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_24, (t9 *)(t9 *)L_25);
		t1170 * L_26 = V_0;
		t221* L_27 = m8716(__this, ((int32_t)84), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_26, (t9 *)(t9 *)L_27);
		t1170 * L_28 = V_0;
		t221* L_29 = m8716(__this, ((int32_t)117), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_28, (t9 *)(t9 *)L_29);
		t1170 * L_30 = V_0;
		t221* L_31 = m8716(__this, ((int32_t)85), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_30, (t9 *)(t9 *)L_31);
		t1170 * L_32 = V_0;
		t221* L_33 = m8716(__this, ((int32_t)121), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_32, (t9 *)(t9 *)L_33);
		t1170 * L_34 = V_0;
		t221* L_35 = m8716(__this, ((int32_t)89), &m8716_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5849_MI, L_34, (t9 *)(t9 *)L_35);
		t1170 * L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_37 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		t121 * L_38 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5858_MI, L_36, L_37);
		__this->f57 = (t221*)((t221*)Castclass(L_38, t221_TI_var));
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8716 (t1704 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8716_init;
	if (!m8716_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8716_init = true;
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
		t2* L_11 = m8699(__this, &m8699_MI);
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
		t2* L_16 = m8700(__this, &m8700_MI);
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
		t2* L_21 = m8702(__this, &m8702_MI);
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
		t2* L_26 = m8701(__this, &m8701_MI);
		ArrayElementTypeCheck (L_25, L_26);
		*((t2**)(t2**)SZArrayLdElema(L_25, 0)) = (t2*)L_26;
		return L_25;
	}

IL_0143:
	{
		t221* L_27 = (__this->f32);
		t221* L_28 = (__this->f35);
		t221* L_29 = m8720(__this, L_27, L_28, &m8720_MI);
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
		t2* L_34 = m8700(__this, &m8700_MI);
		t2* L_35 = m8702(__this, &m8702_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_36 = m399(NULL, L_34, (t2*) &_stringLiteral163, L_35, &m399_MI);
		ArrayElementTypeCheck (L_33, L_36);
		*((t2**)(t2**)SZArrayLdElema(L_33, 0)) = (t2*)L_36;
		return L_33;
	}

IL_0181:
	{
		t221* L_37 = (__this->f32);
		t221* L_38 = (__this->f34);
		t221* L_39 = m8720(__this, L_37, L_38, &m8720_MI);
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
		t2* L_44 = m8700(__this, &m8700_MI);
		t2* L_45 = m8701(__this, &m8701_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_46 = m399(NULL, L_44, (t2*) &_stringLiteral163, L_45, &m399_MI);
		ArrayElementTypeCheck (L_43, L_46);
		*((t2**)(t2**)SZArrayLdElema(L_43, 0)) = (t2*)L_46;
		return L_43;
	}

IL_01bf:
	{
		t221* L_47 = (__this->f33);
		t221* L_48 = (__this->f35);
		t221* L_49 = m8720(__this, L_47, L_48, &m8720_MI);
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
		t2* L_54 = m8699(__this, &m8699_MI);
		t2* L_55 = m8702(__this, &m8702_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_56 = m399(NULL, L_54, (t2*) &_stringLiteral163, L_55, &m399_MI);
		ArrayElementTypeCheck (L_53, L_56);
		*((t2**)(t2**)SZArrayLdElema(L_53, 0)) = (t2*)L_56;
		return L_53;
	}

IL_01fd:
	{
		t221* L_57 = (__this->f33);
		t221* L_58 = (__this->f34);
		t221* L_59 = m8720(__this, L_57, L_58, &m8720_MI);
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
		t2* L_64 = m8699(__this, &m8699_MI);
		t2* L_65 = m8701(__this, &m8701_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_66 = m399(NULL, L_64, (t2*) &_stringLiteral163, L_65, &m399_MI);
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
		t2* L_71 = m8703(__this, &m8703_MI);
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
		t2* L_76 = m8704(__this, &m8704_MI);
		ArrayElementTypeCheck (L_75, L_76);
		*((t2**)(t2**)SZArrayLdElema(L_75, 0)) = (t2*)L_76;
		return L_75;
	}

IL_028f:
	{
		t221* L_77 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_78 = m8710(__this, &m8710_MI);
		ArrayElementTypeCheck (L_77, L_78);
		*((t2**)(t2**)SZArrayLdElema(L_77, 0)) = (t2*)L_78;
		return L_77;
	}

IL_029f:
	{
		t221* L_79 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_80 = m8712(__this, &m8712_MI);
		ArrayElementTypeCheck (L_79, L_80);
		*((t2**)(t2**)SZArrayLdElema(L_79, 0)) = (t2*)L_80;
		return L_79;
	}

IL_02af:
	{
		t221* L_81 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_82 = m8713(__this, &m8713_MI);
		ArrayElementTypeCheck (L_81, L_82);
		*((t2**)(t2**)SZArrayLdElema(L_81, 0)) = (t2*)L_82;
		return L_81;
	}

IL_02bf:
	{
		t563 * L_83 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_83, (t2*) &_stringLiteral1543, &m2910_MI);
		il2cpp_codegen_raise_exception(L_83);
	}
}
extern MethodInfo m8717_MI;
extern "C" t2* m8717 (t1704 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_3, &m5899_MI);
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
extern MethodInfo m8718_MI;
extern "C" t2* m8718 (t1704 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_3 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5899(L_3, &m5899_MI);
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
extern "C" void m8719 (t1704 * __this, MethodInfo* method)
{
	static bool m8719_init;
	if (!m8719_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8719_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1486);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1486;
		__this->f32 = L_0;
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1487);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1487;
		__this->f33 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1489);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1489;
		__this->f35 = L_2;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 4));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1488);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral1488;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1544);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral1544;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1545);
		*((t2**)(t2**)SZArrayLdElema(L_5, 2)) = (t2*)(t2*) &_stringLiteral1545;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1546);
		*((t2**)(t2**)SZArrayLdElema(L_6, 3)) = (t2*)(t2*) &_stringLiteral1546;
		__this->f34 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1490);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1490;
		__this->f36 = L_7;
		t221* L_8 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1491);
		*((t2**)(t2**)SZArrayLdElema(L_8, 0)) = (t2*)(t2*) &_stringLiteral1491;
		__this->f37 = L_8;
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8720 (t1704 * __this, t221* p0, t221* p1, MethodInfo* method)
{
	static bool m8720_init;
	if (!m8720_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8720_init = true;
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
		t2* L_17 = m399(NULL, L_15, (t2*) &_stringLiteral163, L_16, &m399_MI);
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
extern TypeInfo t1525_TI;
#include "t1525MD.h"



#include "t1707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1707_TI;
#include "t1707MD.h"

#include "t304.h"


extern MethodInfo m8721_MI;
extern "C" void m8721 (t1707 * __this, t270  p0, t270  p1, t304  p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t270  L_0 = p0;
		__this->f0 = L_0;
		t270  L_1 = p1;
		__this->f1 = L_1;
		t304  L_2 = p2;
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m8722_MI;
extern "C" t270  m8722 (t1707 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8723_MI;
extern "C" t270  m8723 (t1707 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8724_MI;
extern "C" t304  m8724 (t1707 * __this, MethodInfo* method)
{
	{
		t304  L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1709.h"
extern TypeInfo t1709_TI;
extern MethodInfo m8728_MI;
extern MethodInfo m8725_MI;


extern TypeInfo* t221_TI_var;
extern "C" void m8725 (t1708 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8725_init;
	if (!m8725_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8725_init = true;
	}
	{
		m8600(__this, &m8600_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8728_MI, __this, L_0);
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1547);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1547;
		__this->f2 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1548);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1548;
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
extern "C" void m8726 (t1708 * __this, MethodInfo* method)
{
	{
		m8725(__this, 1, &m8725_MI);
		return;
	}
}
extern MethodInfo m8727_MI;
extern TypeInfo* t1095_TI_var;
extern "C" t1095* m8727 (t1708 * __this, MethodInfo* method)
{
	static bool m8727_init;
	if (!m8727_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8727_init = true;
	}
	{
		t1095* L_0 = ((t1095*)SZArrayNew(t1095_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 0)) = (int32_t)1;
		return L_0;
	}
}
extern "C" void m8728 (t1708 * __this, int32_t p0, MethodInfo* method)
{
	{
		m8601(__this, &m8601_MI);
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8729_MI;
extern "C" int32_t m8729 (t1708 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8615(NULL, L_0, &m8615_MI);
		return L_1;
	}
}
extern MethodInfo m8730_MI;
extern "C" int32_t m8730 (t1708 * __this, t270  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t270  L_0 = p0;
		int32_t L_1 = m8606(NULL, L_0, &m8606_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = m8607(NULL, L_2, &m8607_MI);
		return L_3;
	}
}
extern MethodInfo m8731_MI;
extern "C" int32_t m8731 (t1708 * __this, t270  p0, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8732_MI;
extern "C" int32_t m8732 (t1708 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8616(NULL, L_0, &m8616_MI);
		return L_1;
	}
}
extern MethodInfo m8733_MI;
extern "C" int32_t m8733 (t1708 * __this, t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		int32_t L_1 = m8617(NULL, L_0, &m8617_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1709MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8736_MI;
extern MethodInfo m8755_MI;
extern MethodInfo m8734_MI;
extern MethodInfo m8745_MI;


extern TypeInfo* t1095_TI_var;
extern "C" void m8734 (t1555 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8734_init;
	if (!m8734_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m8734_init = true;
	}
	int32_t V_0 = 0;
	{
		__this->f4 = (t2*) &_stringLiteral731;
		__this->f5 = (t2*) &_stringLiteral690;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
		t221* L_0 = ((t1555_SFs*)InitializedTypeInfo(&t1555_TI)->static_fields)->f38;
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
		__this->f7 = (t2*) &_stringLiteral135;
		__this->f8 = (t2*) &_stringLiteral337;
		t1095* L_5 = ((t1095*)SZArrayNew(t1095_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 0)) = (int32_t)3;
		__this->f9 = L_5;
		__this->f10 = 0;
		__this->f11 = 0;
		__this->f12 = (t2*) &_stringLiteral1551;
		__this->f13 = (t2*) &_stringLiteral1552;
		__this->f14 = (t2*) &_stringLiteral1553;
		__this->f15 = (t2*) &_stringLiteral167;
		__this->f16 = 2;
		__this->f17 = (t2*) &_stringLiteral135;
		__this->f18 = (t2*) &_stringLiteral337;
		t1095* L_6 = ((t1095*)SZArrayNew(t1095_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, 0)) = (int32_t)3;
		__this->f19 = L_6;
		__this->f20 = 1;
		__this->f21 = 2;
		__this->f22 = (t2*) &_stringLiteral135;
		__this->f23 = (t2*) &_stringLiteral337;
		t1095* L_7 = ((t1095*)SZArrayNew(t1095_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, 0)) = (int32_t)3;
		__this->f24 = L_7;
		__this->f25 = 0;
		__this->f26 = 0;
		__this->f27 = (t2*) &_stringLiteral738;
		__this->f28 = (t2*) &_stringLiteral1554;
		__this->f29 = (t2*) &_stringLiteral1555;
		__this->f30 = (t2*) &_stringLiteral168;
		goto IL_0157;
	}

IL_0157:
	{
		return;
	}
}
extern "C" void m8735 (t1555 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		m8734(__this, ((int32_t)127), L_0, &m8734_MI);
		return;
	}
}
extern "C" void m8736 (t1555 * __this, MethodInfo* method)
{
	{
		m8735(__this, 0, &m8735_MI);
		return;
	}
}
extern MethodInfo m8737_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8737 (t9 * __this , MethodInfo* method)
{
	static bool m8737_init;
	if (!m8737_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8737_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral690);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral690;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral774);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral774;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1556);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1556;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1557);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1557;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1558);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1558;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1559);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1559;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1560);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1560;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1561);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1561;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1562);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1562;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1563);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1563;
		((t1555_SFs*)InitializedTypeInfo(&t1555_TI)->static_fields)->f38 = L_9;
		return;
	}
}
extern MethodInfo m8738_MI;
extern "C" int32_t m8738 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8739_MI;
extern "C" t2* m8739 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8740_MI;
extern "C" t2* m8740 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8741_MI;
extern "C" t1095* m8741 (t1555 * __this, MethodInfo* method)
{
	{
		t1095* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8742_MI;
extern "C" int32_t m8742 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m8743_MI;
extern "C" int32_t m8743 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8744_MI;
extern "C" t2* m8744 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t1555 * m8745 (t9 * __this , MethodInfo* method)
{
	t1555 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1872 * L_0 = m11042(NULL, &m11042_MI);
		t901 * L_1 = m11053(L_0, &m11053_MI);
		t1555 * L_2 = (t1555 *)VirtFuncInvoker0< t1555 * >::Invoke(&m8664_MI, L_1);
		V_0 = L_2;
		t1555 * L_3 = V_0;
		L_3->f0 = 1;
		t1555 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t1555 * m8746 (t9 * __this , MethodInfo* method)
{
	t1555 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
		t1555 * L_0 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8736(L_0, &m8736_MI);
		V_0 = L_0;
		t1555 * L_1 = V_0;
		m8755(L_1, 1, &m8755_MI);
		t1555 * L_2 = V_0;
		L_2->f0 = 1;
		t1555 * L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m8747_MI;
extern "C" t2* m8747 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8748_MI;
extern "C" t2* m8748 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m8749_MI;
extern "C" t2* m8749 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m8750_MI;
extern "C" int32_t m8750 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m8751_MI;
extern "C" t2* m8751 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8752_MI;
extern "C" t2* m8752 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m8753_MI;
extern "C" t1095* m8753 (t1555 * __this, MethodInfo* method)
{
	{
		t1095* L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m8754_MI;
extern "C" int32_t m8754 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f20);
		return L_0;
	}
}
extern "C" void m8755 (t1555 * __this, int32_t p0, MethodInfo* method)
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_2, (t2*) &_stringLiteral1549, &m5722_MI);
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
		t1341 * L_4 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_4, (t2*) &_stringLiteral1550, &m5714_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		int32_t L_5 = p0;
		__this->f20 = L_5;
		return;
	}
}
extern MethodInfo m8756_MI;
extern "C" int32_t m8756 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m8757_MI;
extern "C" t2* m8757 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8758_MI;
extern "C" t2* m8758 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m8759_MI;
extern "C" t1095* m8759 (t1555 * __this, MethodInfo* method)
{
	{
		t1095* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8760_MI;
extern "C" int32_t m8760 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f25);
		return L_0;
	}
}
extern MethodInfo m8761_MI;
extern "C" int32_t m8761 (t1555 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f26);
		return L_0;
	}
}
extern MethodInfo m8762_MI;
extern "C" t2* m8762 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f27);
		return L_0;
	}
}
extern MethodInfo m8763_MI;
extern "C" t2* m8763 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8764_MI;
extern "C" t2* m8764 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8765_MI;
extern "C" t2* m8765 (t1555 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8766_MI;
extern "C" t9 * m8766 (t1555 * __this, t126 * p0, MethodInfo* method)
{
	t1555 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1555_0_0_0), &m329_MI);
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
		G_B3_0 = ((t1555 *)(NULL));
	}

IL_0011:
	{
		return G_B3_0;
	}
}
extern "C" t9 * m8767 (t1555 * __this, MethodInfo* method)
{
	t1555 * V_0 = {0};
	{
		t9 * L_0 = m7059(__this, &m7059_MI);
		V_0 = ((t1555 *)Castclass(L_0, InitializedTypeInfo(&t1555_TI)));
		t1555 * L_1 = V_0;
		L_1->f0 = 0;
		t1555 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8768_MI;
extern "C" t1555 * m8768 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1555 * V_0 = {0};
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
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1555_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m11962_MI, L_1, L_2);
		V_0 = ((t1555 *)Castclass(L_3, InitializedTypeInfo(&t1555_TI)));
		t1555 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1555 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1555_TI));
		t1555 * L_6 = m8745(NULL, &m8745_MI);
		return L_6;
	}
}
#include "t902.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t902_TI;
#include "t902MD.h"



#include "t1710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1710_TI;
#include "t1710MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7321_MI;
extern MethodInfo m5807_MI;
extern MethodInfo m7404_MI;
extern MethodInfo m7846_MI;
extern MethodInfo m8775_MI;
extern MethodInfo m8776_MI;


extern "C" void m8769 (t1616 * __this, t901 * p0, int32_t p1, void* p2, bool p3, MethodInfo* method)
{
	t901 * V_0 = {0};
	t1710  V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		bool L_0 = p3;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f2 = L_1;
		t901 * L_2 = p0;
		__this->f3 = L_2;
		void* L_3 = p2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		void* L_4 = p2;
		__this->f5 = (*(t1710 *)L_4);
		goto IL_0049;
	}

IL_002d:
	{
		Initobj (InitializedTypeInfo(&t1710_TI), (&V_1));
		t1710  L_5 = V_1;
		__this->f5 = L_5;
		t1710 * L_6 = &(__this->f5);
		L_6->f4 = ((int32_t)44);
	}

IL_0049:
	{
		t901 * L_7 = p0;
		V_0 = L_7;
		goto IL_0054;
	}

IL_004d:
	{
		t901 * L_8 = V_0;
		t901 * L_9 = (t901 *)VirtFuncInvoker0< t901 * >::Invoke(&m8656_MI, L_8);
		V_0 = L_9;
	}

IL_0054:
	{
		t901 * L_10 = V_0;
		t901 * L_11 = (t901 *)VirtFuncInvoker0< t901 * >::Invoke(&m8656_MI, L_10);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		t901 * L_12 = V_0;
		t901 * L_13 = (t901 *)VirtFuncInvoker0< t901 * >::Invoke(&m8656_MI, L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)127))))
		{
			goto IL_0074;
		}
	}
	{
		t901 * L_15 = V_0;
		t901 * L_16 = (t901 *)VirtFuncInvoker0< t901 * >::Invoke(&m8656_MI, L_15);
		t901 * L_17 = V_0;
		if ((!(((t9*)(t901 *)L_16) == ((t9*)(t901 *)L_17))))
		{
			goto IL_004d;
		}
	}

IL_0074:
	{
		t901 * L_18 = V_0;
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		t901 * L_19 = V_0;
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_19);
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
extern MethodInfo m8770_MI;
extern "C" void m8770 (t1616 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t2* m8771 (t1616 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t901 * L_1 = (__this->f3);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8655_MI, L_1);
		__this->f1 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f1);
		return L_3;
	}
}
extern MethodInfo m8772_MI;
extern "C" bool m8772 (t1616 * __this, t9 * p0, MethodInfo* method)
{
	t1616 * V_0 = {0};
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
		V_0 = ((t1616 *)IsInst(L_1, InitializedTypeInfo(&t1616_TI)));
		t1616 * L_2 = V_0;
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
		t1616 * L_3 = V_0;
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
		t1616 * L_6 = V_0;
		t901 * L_7 = (L_6->f3);
		t901 * L_8 = (__this->f3);
		if ((((t9*)(t901 *)L_7) == ((t9*)(t901 *)L_8)))
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
extern MethodInfo m8773_MI;
extern "C" int32_t m8773 (t1616 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8774_MI;
extern "C" t2* m8774 (t1616 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1564, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" uint16_t m8775 (t1616 * __this, uint16_t p0, MethodInfo* method)
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
		t901 * L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		t901 * L_10 = (__this->f3);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_004f;
		}
	}

IL_0048:
	{
		uint16_t L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_13 = m7321(NULL, L_12, &m7321_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_23 = m7321(NULL, L_22, &m7321_MI);
		return L_23;
	}
}
extern "C" uint16_t m8776 (t1616 * __this, uint16_t p0, MethodInfo* method)
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
		t901 * L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t901 * L_8 = (__this->f3);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8654_MI, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		uint16_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_11 = m5807(NULL, L_10, &m5807_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		uint16_t L_25 = m5807(NULL, L_24, &m5807_MI);
		return L_25;
	}
}
extern "C" t2* m8777 (t1616 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1565, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
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
		int32_t L_6 = m2724(L_5, &m2724_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7404(NULL, L_6, &m7404_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7846(NULL, &m7846_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7846(NULL, &m7846_MI);
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
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8775_MI, __this, (*((uint16_t*)L_17)));
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
		int32_t L_24 = m2724(L_23, &m2724_MI);
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
extern MethodInfo m8778_MI;
extern "C" t2* m8778 (t1616 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1565, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
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
		int32_t L_6 = m2724(L_5, &m2724_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7404(NULL, L_6, &m7404_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7846(NULL, &m7846_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7846(NULL, &m7846_MI);
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
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8776_MI, __this, (*((uint16_t*)L_17)));
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
		int32_t L_24 = m2724(L_23, &m2724_MI);
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
extern TypeInfo t1285_TI;
#include "t1285MD.h"



#include "t1711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1711_TI;
#include "t1711MD.h"

extern MethodInfo m7029_MI;


extern MethodInfo m8779_MI;
extern "C" void m8779 (t1711 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral1566, &m7847_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8780_MI;
extern "C" void m8780 (t1711 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8781_MI;
extern "C" void m8781 (t1711 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7029(__this, L_0, L_1, &m7029_MI);
		return;
	}
}
#include "t1712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1712_TI;
#include "t1712MD.h"

#include "t298.h"
#include "t1713.h"
#include "t1549.h"
#include "t1718.h"
#include "t904.h"
#include "t186.h"
#include "t309.h"
extern TypeInfo t298_TI;
extern TypeInfo t1713_TI;
extern TypeInfo t1549_TI;
extern TypeInfo t1718_TI;
#include "t298MD.h"
#include "t1549MD.h"
#include "t1718MD.h"
#include "t1713MD.h"
extern MethodInfo m10864_MI;
extern MethodInfo m8783_MI;
extern MethodInfo m7008_MI;
extern MethodInfo m10855_MI;
extern MethodInfo m8785_MI;
extern MethodInfo m1097_MI;
extern MethodInfo m11772_MI;
extern MethodInfo m8911_MI;
extern MethodInfo m8806_MI;
extern MethodInfo m6998_MI;
extern MethodInfo m8846_MI;
extern MethodInfo m8789_MI;
extern MethodInfo m8790_MI;
extern MethodInfo m6996_MI;
extern MethodInfo m12006_MI;
extern MethodInfo m8793_MI;
extern MethodInfo m8787_MI;
extern MethodInfo m8786_MI;
extern MethodInfo m8791_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m10898_MI;
extern MethodInfo m11169_MI;


extern MethodInfo m8782_MI;
extern "C" void m8782 (t1712 * __this, t298 * p0, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10864(NULL, &m10864_MI);
		m8783(__this, L_0, L_1, &m8783_MI);
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8783 (t1712 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	static bool m8783_init;
	if (!m8783_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8783_init = true;
	}
	{
		m336(__this, &m336_MI);
		t298 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t729 * L_1 = p1;
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7847(NULL, (t2*) &_stringLiteral1567, &m7847_MI);
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, L_2, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t298 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral1568, &m7847_MI);
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_7, L_6, &m2910_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t298 * L_8 = p0;
		__this->f0 = L_8;
		t729 * L_9 = p1;
		__this->f1 = L_9;
		t729 * L_10 = p1;
		t1713 * L_11 = (t1713 *)VirtFuncInvoker0< t1713 * >::Invoke(&m10855_MI, L_10);
		__this->f3 = L_11;
		__this->f2 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)32)));
		return;
	}
}
extern MethodInfo m8784_MI;
extern "C" void m8784 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8785_MI, __this, 1);
		return;
	}
}
extern "C" void m8785 (t1712 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_1 = (__this->f0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_2 = (__this->f0);
		VirtActionInvoker0::Invoke(&m1097_MI, L_2);
	}

IL_0016:
	{
		__this->f5 = 1;
		__this->f2 = (t730*)NULL;
		__this->f1 = (t729 *)NULL;
		__this->f0 = (t298 *)NULL;
		__this->f4 = (t312*)NULL;
		return;
	}
}
extern "C" void m8786 (t1712 * __this, int32_t p0, MethodInfo* method)
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1569, (t2*) &_stringLiteral1570, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t298 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1549 * L_3 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_3, (t2*) &_stringLiteral1571, &m8911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		int32_t L_4 = p0;
		m8806(__this, L_4, &m8806_MI);
		V_0 = 0;
		goto IL_0059;
	}

IL_0036:
	{
		t298 * L_5 = (__this->f0);
		t730* L_6 = (__this->f2);
		int32_t L_7 = V_0;
		int32_t L_8 = p0;
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t730*, int32_t, int32_t >::Invoke(&m6998_MI, L_5, L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)));
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1718 * L_12 = (t1718 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1718_TI));
		m8846(L_12, &m8846_MI);
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
extern TypeInfo* t312_TI_var;
extern "C" int32_t m8787 (t1712 * __this, MethodInfo* method)
{
	static bool m8787_init;
	if (!m8787_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8787_init = true;
	}
	int32_t V_0 = 0;
	{
		t312* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->f4 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)128)));
	}

IL_0018:
	{
		t312* L_1 = (__this->f4);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t312*, int32_t, int32_t >::Invoke(&m8789_MI, __this, L_1, 0, 1);
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
		t312* L_4 = (__this->f4);
		int32_t L_5 = 0;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_5));
	}
}
extern MethodInfo m8788_MI;
extern "C" int32_t m8788 (t1712 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t298 * L_0 = (__this->f0);
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
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_2, (t2*) &_stringLiteral1569, (t2*) &_stringLiteral1570, &m11772_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1549 * L_3 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_3, (t2*) &_stringLiteral1571, &m8911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t730* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1572, &m339_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_7, (t2*) &_stringLiteral407, &m5722_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_9, (t2*) &_stringLiteral1573, &m5722_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t730* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_13, (t2*) &_stringLiteral1574, &m2910_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t298 * L_14 = (__this->f0);
		t730* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = (int32_t)VirtFuncInvoker3< int32_t, t730*, int32_t, int32_t >::Invoke(&m6998_MI, L_14, L_15, L_16, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		return L_19;
	}
}
extern "C" int32_t m8789 (t1712 * __this, t312* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t298 * L_0 = (__this->f0);
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
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_2, (t2*) &_stringLiteral1569, (t2*) &_stringLiteral1570, &m11772_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1549 * L_3 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_3, (t2*) &_stringLiteral1571, &m8911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t312* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1572, &m339_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_7, (t2*) &_stringLiteral407, &m5722_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_9, (t2*) &_stringLiteral1573, &m5722_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t312* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_13, (t2*) &_stringLiteral1574, &m2910_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t312* L_14 = p0;
		int32_t L_15 = p1;
		int32_t L_16 = p2;
		int32_t L_17 = m8790(__this, L_14, L_15, L_16, (&V_0), &m8790_MI);
		return L_17;
	}
}
extern "C" int32_t m8790 (t1712 * __this, t312* p0, int32_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
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
		m8806(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m8806_MI);
		t298 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6996_MI, L_2);
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
		t730* L_6 = (__this->f2);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)) = (uint8_t)(((uint8_t)L_9));
		int32_t* L_10 = p3;
		int32_t* L_11 = p3;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)1));
		t729 * L_12 = (__this->f1);
		t730* L_13 = (__this->f2);
		int32_t L_14 = V_1;
		t312* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)VirtFuncInvoker5< int32_t, t730*, int32_t, int32_t, t312*, int32_t >::Invoke(&m12006_MI, L_12, L_13, 0, L_14, L_15, ((int32_t)((int32_t)L_16+(int32_t)L_17)));
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
extern "C" int32_t m8791 (t1712 * __this, MethodInfo* method)
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
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8793_MI, __this);
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
		t890 * L_10 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4313(L_10, (t2*) &_stringLiteral1575, &m4313_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m8792_MI;
extern "C" bool m8792 (t1712 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8793_MI, __this);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" uint8_t m8793 (t1712 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t298 * L_0 = (__this->f0);
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
		t1530 * L_2 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_2, (t2*) &_stringLiteral1569, (t2*) &_stringLiteral1570, &m11772_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1549 * L_3 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_3, (t2*) &_stringLiteral1571, &m8911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t298 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6996_MI, L_4);
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
		t1718 * L_8 = (t1718 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1718_TI));
		m8846(L_8, &m8846_MI);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern MethodInfo m8794_MI;
extern "C" uint16_t m8794 (t1712 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8787_MI, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		t1718 * L_2 = (t1718 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1718_TI));
		m8846(L_2, &m8846_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m8795_MI;
extern "C" t904  m8795 (t1712 * __this, MethodInfo* method)
{
	t904  V_0 = {0};
	uint8_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, ((int32_t)16));
		V_1 = (uint8_t*)(&V_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_0 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
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
		t730* L_4 = (__this->f2);
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
		t730* L_10 = (__this->f2);
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
		t730* L_16 = (__this->f2);
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
		t730* L_22 = (__this->f2);
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
		t730* L_30 = (__this->f2);
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
		t730* L_36 = (__this->f2);
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
		t730* L_42 = (__this->f2);
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
		t730* L_48 = (__this->f2);
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
		t904  L_53 = V_0;
		return L_53;
	}
}
extern MethodInfo m8796_MI;
extern "C" double m8796 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 8);
		t730* L_0 = (__this->f2);
		double L_1 = m8288(NULL, L_0, 0, &m8288_MI);
		return L_1;
	}
}
extern MethodInfo m8797_MI;
extern "C" int16_t m8797 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 2);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((int16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8798_MI;
extern "C" int32_t m8798 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 4);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t730* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t730* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8799_MI;
extern "C" int64_t m8799 (t1712 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 8);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t730* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t730* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t730* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t730* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t730* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t730* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern MethodInfo m8800_MI;
extern "C" int8_t m8800 (t1712 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8793_MI, __this);
		return (((int8_t)L_0));
	}
}
extern MethodInfo m8801_MI;
extern TypeInfo* t312_TI_var;
extern "C" t2* m8801 (t1712 * __this, MethodInfo* method)
{
	static bool m8801_init;
	if (!m8801_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8801_init = true;
	}
	int32_t V_0 = 0;
	t322 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = m8791(__this, &m8791_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t1549 * L_2 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_2, (t2*) &_stringLiteral1576, &m8911_MI);
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
		t312* L_5 = (__this->f4);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		__this->f4 = ((t312*)SZArrayNew(t312_TI_var, ((int32_t)128)));
	}

IL_0037:
	{
		V_1 = (t322 *)NULL;
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
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, L_8);
		t1713 * L_9 = (__this->f3);
		t730* L_10 = (__this->f2);
		int32_t L_11 = V_2;
		t312* L_12 = (__this->f4);
		int32_t L_13 = (int32_t)VirtFuncInvoker5< int32_t, t730*, int32_t, int32_t, t312*, int32_t >::Invoke(&m12007_MI, L_9, L_10, 0, L_11, L_12, 0);
		V_3 = L_13;
		t322 * L_14 = V_1;
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
		t312* L_17 = (__this->f4);
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4378(L_19, L_17, 0, L_18, &m4358_MI);
		return L_19;
	}

IL_0081:
	{
		t322 * L_20 = V_1;
		if (L_20)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = V_0;
		t322 * L_22 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4355(L_22, L_21, &m4355_MI);
		V_1 = L_22;
	}

IL_008b:
	{
		t322 * L_23 = V_1;
		t312* L_24 = (__this->f4);
		int32_t L_25 = V_3;
		m10898(L_23, L_24, 0, L_25, &m10898_MI);
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
		t322 * L_29 = V_1;
		t2* L_30 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_29);
		return L_30;
	}
}
extern MethodInfo m8802_MI;
extern "C" float m8802 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 4);
		t730* L_0 = (__this->f2);
		float L_1 = m8287(NULL, L_0, 0, &m8287_MI);
		return L_1;
	}
}
extern MethodInfo m8803_MI;
extern "C" uint16_t m8803 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 2);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((uint16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8804_MI;
extern "C" uint32_t m8804 (t1712 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 4);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t730* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t730* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8805_MI;
extern "C" uint64_t m8805 (t1712 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8786_MI, __this, 8);
		t730* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t730* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t730* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t730* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t730* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t730* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t730* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t730* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8806 (t1712 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8806_init;
	if (!m8806_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8806_init = true;
	}
	t730* V_0 = {0};
	{
		t730* L_0 = (__this->f2);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) > ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = p0;
		V_0 = ((t730*)SZArrayNew(t730_TI_var, L_2));
		t730* L_3 = (__this->f2);
		t730* L_4 = V_0;
		t730* L_5 = (__this->f2);
		m11169(NULL, (t121 *)(t121 *)L_3, 0, (t121 *)(t121 *)L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))), &m11169_MI);
		t730* L_6 = V_0;
		__this->f2 = L_6;
	}

IL_0030:
	{
		return;
	}
}
#include "t1714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1714_TI;
#include "t1714MD.h"

extern MethodInfo m8809_MI;
extern MethodInfo m7009_MI;
extern MethodInfo m8807_MI;
extern MethodInfo m8812_MI;
extern MethodInfo m7027_MI;
extern MethodInfo m6982_MI;
extern MethodInfo m6973_MI;
extern MethodInfo m10853_MI;
extern MethodInfo m10851_MI;
extern MethodInfo m8831_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m8815_MI;


extern "C" void m8807 (t1714 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t298_TI));
		t298 * L_0 = ((t298_SFs*)InitializedTypeInfo(&t298_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10864(NULL, &m10864_MI);
		m8809(__this, L_0, L_1, &m8809_MI);
		return;
	}
}
extern MethodInfo m8808_MI;
extern "C" void m8808 (t1714 * __this, t298 * p0, MethodInfo* method)
{
	{
		t298 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_1 = m10864(NULL, &m10864_MI);
		m8809(__this, L_0, L_1, &m8809_MI);
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8809 (t1714 * __this, t298 * p0, t729 * p1, MethodInfo* method)
{
	static bool m8809_init;
	if (!m8809_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8809_init = true;
	}
	{
		m336(__this, &m336_MI);
		t298 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1577, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1578, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		t298 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7009_MI, L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_6 = m7847(NULL, (t2*) &_stringLiteral1579, &m7847_MI);
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_7, L_6, &m2910_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		t298 * L_8 = p0;
		__this->f1 = L_8;
		t729 * L_9 = p1;
		__this->f2 = L_9;
		__this->f3 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)16)));
		return;
	}
}
extern MethodInfo m8810_MI;
extern "C" void m8810 (t9 * __this , MethodInfo* method)
{
	{
		t1714 * L_0 = (t1714 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1714_TI));
		m8807(L_0, &m8807_MI);
		((t1714_SFs*)InitializedTypeInfo(&t1714_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m8811_MI;
extern "C" void m8811 (t1714 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8812_MI, __this, 1);
		return;
	}
}
extern "C" void m8812 (t1714 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t298 * L_2 = (__this->f1);
		VirtActionInvoker0::Invoke(&m1097_MI, L_2);
	}

IL_0016:
	{
		__this->f3 = (t730*)NULL;
		__this->f2 = (t729 *)NULL;
		__this->f4 = 1;
		return;
	}
}
extern MethodInfo m8813_MI;
extern "C" void m8813 (t1714 * __this, MethodInfo* method)
{
	{
		t298 * L_0 = (__this->f1);
		VirtActionInvoker0::Invoke(&m7027_MI, L_0);
		return;
	}
}
extern MethodInfo m8814_MI;
extern "C" void m8814 (t1714 * __this, bool p0, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	t730* G_B4_1 = {0};
	int32_t G_B3_0 = 0;
	t730* G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	t730* G_B5_2 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
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
		t298 * L_4 = (__this->f1);
		t730* L_5 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern "C" void m8815 (t1714 * __this, uint8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t298 * L_2 = (__this->f1);
		uint8_t L_3 = p0;
		VirtActionInvoker1< uint8_t >::Invoke(&m6973_MI, L_2, L_3);
		return;
	}
}
extern MethodInfo m8816_MI;
extern "C" void m8816 (t1714 * __this, t730* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = p0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1049, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		t298 * L_4 = (__this->f1);
		t730* L_5 = p0;
		t730* L_6 = p0;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		return;
	}
}
extern MethodInfo m8817_MI;
extern "C" void m8817 (t1714 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = p0;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral1049, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		t298 * L_4 = (__this->f1);
		t730* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_4, L_5, L_6, L_7);
		return;
	}
}
extern MethodInfo m8818_MI;
extern TypeInfo* t312_TI_var;
extern "C" void m8818 (t1714 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8818_init;
	if (!m8818_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m8818_init = true;
	}
	t312* V_0 = {0};
	t730* V_1 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = ((t312*)SZArrayNew(t312_TI_var, 1));
		t312* L_2 = V_0;
		uint16_t L_3 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t729 * L_4 = (__this->f2);
		t312* L_5 = V_0;
		t730* L_6 = (t730*)VirtFuncInvoker3< t730*, t312*, int32_t, int32_t >::Invoke(&m10853_MI, L_4, L_5, 0, 1);
		V_1 = L_6;
		t298 * L_7 = (__this->f1);
		t730* L_8 = V_1;
		t730* L_9 = V_1;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return;
	}
}
extern MethodInfo m8819_MI;
extern "C" void m8819 (t1714 * __this, t312* p0, MethodInfo* method)
{
	t730* V_0 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
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
		m339(L_3, (t2*) &_stringLiteral1582, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		t729 * L_4 = (__this->f2);
		t312* L_5 = p0;
		t312* L_6 = p0;
		t730* L_7 = (t730*)VirtFuncInvoker3< t730*, t312*, int32_t, int32_t >::Invoke(&m10853_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		V_0 = L_7;
		t298 * L_8 = (__this->f1);
		t730* L_9 = V_0;
		t730* L_10 = V_0;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_8, L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))));
		return;
	}
}
extern MethodInfo m8820_MI;
extern "C" void m8820 (t1714 * __this, t904  p0, MethodInfo* method)
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = (uint8_t*)(&p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1343_TI));
		bool L_2 = ((t1343_SFs*)InitializedTypeInfo(&t1343_TI)->static_fields)->f1;
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
		t730* L_4 = (__this->f3);
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
		t730* L_9 = (__this->f3);
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
		t730* L_14 = (__this->f3);
		int32_t L_15 = V_1;
		uint8_t* L_16 = V_0;
		int32_t L_17 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15-(int32_t)8)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)L_17))));
		goto IL_0072;
	}

IL_0064:
	{
		t730* L_18 = (__this->f3);
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
		t730* L_25 = (__this->f3);
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
		t730* L_30 = (__this->f3);
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
		t730* L_35 = (__this->f3);
		int32_t L_36 = V_2;
		uint8_t* L_37 = V_0;
		int32_t L_38 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)((int32_t)((int32_t)11)-(int32_t)L_36)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_37+(int32_t)L_38))));
		goto IL_00d0;
	}

IL_00c1:
	{
		t730* L_39 = (__this->f3);
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
		t298 * L_45 = (__this->f1);
		t730* L_46 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_45, L_46, 0, ((int32_t)16));
		return;
	}
}
extern MethodInfo m8821_MI;
extern "C" void m8821 (t1714 * __this, double p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t298 * L_2 = (__this->f1);
		double L_3 = p0;
		t730* L_4 = m8281(NULL, L_3, &m8281_MI);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_2, L_4, 0, 8);
		return;
	}
}
extern MethodInfo m8822_MI;
extern "C" void m8822 (t1714 * __this, int16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
		int16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t730* L_4 = (__this->f3);
		int16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t298 * L_6 = (__this->f1);
		t730* L_7 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8823_MI;
extern "C" void m8823 (t1714 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
		int32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t730* L_4 = (__this->f3);
		int32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t730* L_6 = (__this->f3);
		int32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16)))));
		t730* L_8 = (__this->f3);
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_9>>(int32_t)((int32_t)24)))));
		t298 * L_10 = (__this->f1);
		t730* L_11 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8824_MI;
extern "C" void m8824 (t1714 * __this, int64_t p0, MethodInfo* method)
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
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
		t730* L_2 = (__this->f3);
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
		t298 * L_9 = (__this->f1);
		t730* L_10 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern MethodInfo m8825_MI;
extern "C" void m8825 (t1714 * __this, int8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
		int8_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t298 * L_4 = (__this->f1);
		t730* L_5 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern MethodInfo m8826_MI;
extern "C" void m8826 (t1714 * __this, float p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t298 * L_2 = (__this->f1);
		float L_3 = p0;
		t730* L_4 = m8280(NULL, L_3, &m8280_MI);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_2, L_4, 0, 4);
		return;
	}
}
extern MethodInfo m8827_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m8827 (t1714 * __this, t2* p0, MethodInfo* method)
{
	static bool m8827_init;
	if (!m8827_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8827_init = true;
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t729 * L_2 = (__this->f2);
		t2* L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m10851_MI, L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		m8831(__this, L_5, &m8831_MI);
		t730* L_6 = (__this->f5);
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		__this->f5 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)512)));
		t729 * L_7 = (__this->f2);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12008_MI, L_7, 1);
		__this->f6 = ((int32_t)((int32_t)((int32_t)512)/(int32_t)L_8));
	}

IL_005c:
	{
		V_1 = 0;
		t2* L_9 = p0;
		int32_t L_10 = m2724(L_9, &m2724_MI);
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
		t729 * L_15 = (__this->f2);
		t2* L_16 = p0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		t730* L_19 = (__this->f5);
		int32_t L_20 = (int32_t)VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t730*, int32_t >::Invoke(&m6920_MI, L_15, L_16, L_17, L_18, L_19, 0);
		V_4 = L_20;
		t298 * L_21 = (__this->f1);
		t730* L_22 = (__this->f5);
		int32_t L_23 = V_4;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_21, L_22, 0, L_23);
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
extern MethodInfo m8828_MI;
extern "C" void m8828 (t1714 * __this, uint16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
		uint16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t730* L_4 = (__this->f3);
		uint16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t298 * L_6 = (__this->f1);
		t730* L_7 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8829_MI;
extern "C" void m8829 (t1714 * __this, uint32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t730* L_2 = (__this->f3);
		uint32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t730* L_4 = (__this->f3);
		uint32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_5>>8))));
		t730* L_6 = (__this->f3);
		uint32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		t730* L_8 = (__this->f3);
		uint32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		t298 * L_10 = (__this->f1);
		t730* L_11 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8830_MI;
extern "C" void m8830 (t1714 * __this, uint64_t p0, MethodInfo* method)
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
		t1530 * L_1 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m11772(L_1, (t2*) &_stringLiteral1580, (t2*) &_stringLiteral1581, &m11772_MI);
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
		t730* L_2 = (__this->f3);
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
		t298 * L_9 = (__this->f1);
		t730* L_10 = (__this->f3);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern "C" void m8831 (t1714 * __this, int32_t p0, MethodInfo* method)
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
		VirtActionInvoker1< uint8_t >::Invoke(&m8815_MI, __this, L_4);
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
#include "t1538.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1538_TI;
#include "t1538MD.h"

#include "t1537.h"
#include "t300.h"
#include "t1729.h"
#include "t1715.h"
#include "t1731.h"
#include "t1717.h"
extern TypeInfo t300_TI;
extern TypeInfo t1537_TI;
extern TypeInfo t1728_TI;
extern TypeInfo t1731_TI;
extern TypeInfo t1717_TI;
#include "t300MD.h"
#include "t302MD.h"
#include "t1537MD.h"
#include "t1728MD.h"
#include "t1731MD.h"
#include "t1717MD.h"
extern MethodInfo m5981_MI;
extern MethodInfo m4271_MI;
extern MethodInfo m1093_MI;
extern MethodInfo m8832_MI;
extern MethodInfo m8836_MI;
extern MethodInfo m8840_MI;
extern MethodInfo m8839_MI;
extern MethodInfo m8841_MI;
extern MethodInfo m8926_MI;
extern MethodInfo m8925_MI;
extern MethodInfo m8933_MI;
extern MethodInfo m8928_MI;
extern MethodInfo m8924_MI;
extern MethodInfo m8834_MI;
extern MethodInfo m1092_MI;
extern MethodInfo m8951_MI;
extern MethodInfo m8932_MI;
extern MethodInfo m8844_MI;
extern MethodInfo m8927_MI;


extern MethodInfo m6950_MI;
extern "C" t1537 * m6950 (t9 * __this , t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1583, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral1584, &m2910_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_6 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_7 = m5981(L_5, L_6, &m5981_MI);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_003a;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_8, (t2*) &_stringLiteral1585, &m2910_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		t2* L_9 = p0;
		t2* L_10 = m4271(L_9, &m4271_MI);
		int32_t L_11 = m2724(L_10, &m2724_MI);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		t563 * L_12 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_12, (t2*) &_stringLiteral1586, &m2910_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0052:
	{
		t2* L_13 = p0;
		bool L_14 = m1093(NULL, L_13, &m1093_MI);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, (t2*) &_stringLiteral1587, L_15, (t2*) &_stringLiteral1588, &m399_MI);
		t1549 * L_17 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_17, L_16, &m8911_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0070:
	{
		t2* L_18 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_18, (t2*) &_stringLiteral338, &m331_MI);
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		t563 * L_20 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_20, (t2*) &_stringLiteral1589, &m2910_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0088:
	{
		t2* L_21 = p0;
		t1537 * L_22 = m8832(NULL, L_21, &m8832_MI);
		return L_22;
	}
}
extern "C" t1537 * m8832 (t9 * __this , t2* p0, MethodInfo* method)
{
	t1537 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2* L_0 = p0;
		t1537 * L_1 = (t1537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1537_TI));
		m8836(L_1, L_0, 1, &m8836_MI);
		V_0 = L_1;
		t1537 * L_2 = V_0;
		t1537 * L_3 = m8840(L_2, &m8840_MI);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t1537 * L_4 = V_0;
		t1537 * L_5 = m8840(L_4, &m8840_MI);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8839_MI, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		t1537 * L_7 = V_0;
		t1537 * L_8 = m8840(L_7, &m8840_MI);
		m8841(L_8, &m8841_MI);
	}

IL_0028:
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_10 = m8926(NULL, L_9, (&V_1), &m8926_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_15 = m8925(NULL, L_13, L_14, &m8925_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0047:
	{
		t1537 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m6949_MI;
extern "C" bool m6949 (t9 * __this , t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_2 = m8933(NULL, L_1, (&V_0), &m8933_MI);
		V_1 = L_2;
		bool L_3 = V_1;
		return L_3;
	}
}
extern MethodInfo m8833_MI;
extern "C" t2* m8833 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t2* L_0 = m8928(NULL, (&V_0), &m8928_MI);
		V_1 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_3 = m8924(NULL, L_2, &m8924_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m6951_MI;
extern "C" t221* m6951 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		t221* L_2 = m8834(NULL, L_0, L_1, ((int32_t)16), 0, &m8834_MI);
		return L_2;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8834 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	static bool m8834_init;
	if (!m8834_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8834_init = true;
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
		m11144(L_2, &m11144_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		t2* L_3 = p1;
		int32_t L_4 = m2724(L_3, &m2724_MI);
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
		t2* L_6 = m4271(L_5, &m4271_MI);
		int32_t L_7 = m2724(L_6, &m2724_MI);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_8, (t2*) &_stringLiteral1590, &m2910_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0033:
	{
		t2* L_9 = p0;
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_11 = m1092(NULL, L_9, L_10, &m1092_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t2* L_13 = m8951(NULL, L_12, &m8951_MI);
		V_1 = L_13;
		t2* L_14 = V_1;
		t312* L_15 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_16 = m5981(L_14, L_15, &m5981_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_17, (t2*) &_stringLiteral1591, &m2910_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005b:
	{
		t2* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_19 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_20 = m5981(L_18, L_19, &m5981_MI);
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_0097;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t312* L_22 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f1;
		int32_t L_23 = m5981(L_21, L_22, &m5981_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0087;
		}
	}
	{
		t563 * L_24 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_24, (t2*) &_stringLiteral1591, (t2*) &_stringLiteral1583, &m5720_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0087:
	{
		t563 * L_25 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_25, (t2*) &_stringLiteral1592, (t2*) &_stringLiteral679, &m5720_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0097:
	{
		t2* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_27 = m8933(NULL, L_26, (&V_2), &m8933_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_30 = m8932(NULL, L_29, (&V_3), &m8932_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_36 = m8925(NULL, L_34, L_35, &m8925_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00c8:
	{
		t2* L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t312* L_38 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f0;
		int32_t L_39 = m5981(L_37, L_38, &m5981_MI);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m399(NULL, (t2*) &_stringLiteral1593, L_40, (t2*) &_stringLiteral1594, &m399_MI);
		t1717 * L_42 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8844(L_42, L_41, &m8844_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_00ec:
	{
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1731_TI));
		t312* L_44 = ((t1731_SFs*)InitializedTypeInfo(&t1731_TI)->static_fields)->f0;
		int32_t L_45 = m5981(L_43, L_44, &m5981_MI);
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_010a;
		}
	}
	{
		t563 * L_46 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_46, (t2*) &_stringLiteral1595, (t2*) &_stringLiteral1596, &m5720_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_010a:
	{
		t563 * L_47 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_47, (t2*) &_stringLiteral1597, (t2*) &_stringLiteral1583, &m5720_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_011a:
	{
		t2* L_48 = V_1;
		t2* L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_50 = m1092(NULL, L_48, L_49, &m1092_MI);
		V_4 = L_50;
		t2* L_51 = p0;
		t2* L_52 = V_4;
		int32_t L_53 = p3;
		int32_t L_54 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t221* L_55 = m8927(NULL, L_51, L_52, L_53, L_54, (&V_2), &m8927_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_59 = m8925(NULL, L_57, L_58, &m8925_MI);
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

#include "t1716.h"
#include "t1726.h"
#include "t1728.h"
extern TypeInfo t1716_TI;
extern TypeInfo t1726_TI;
#include "t1716MD.h"
extern MethodInfo m8907_MI;
extern MethodInfo m8835_MI;
extern MethodInfo m8903_MI;
extern MethodInfo m8909_MI;
extern MethodInfo m8954_MI;
extern MethodInfo m8953_MI;
extern MethodInfo m8838_MI;
extern MethodInfo m8904_MI;
extern MethodInfo m5983_MI;
extern MethodInfo m11531_MI;
extern MethodInfo m2790_MI;


extern "C" void m8835 (t1537 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8836(__this, L_0, 0, &m8836_MI);
		return;
	}
}
extern "C" void m8836 (t1537 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		m8903(__this, &m8903_MI);
		t2* L_0 = p0;
		m8909(__this, L_0, &m8909_MI);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_2 = m8954(NULL, L_1, &m8954_MI);
		__this->f1 = L_2;
		bool L_3 = p1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_5 = m8953(NULL, L_4, &m8953_MI);
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
		m8838(__this, &m8838_MI);
		return;
	}
}
extern MethodInfo m8837_MI;
extern "C" void m8837 (t1537 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m8904(__this, L_0, L_1, &m8904_MI);
		m8838(__this, &m8838_MI);
		return;
	}
}
extern "C" void m8838 (t1537 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = m2724(L_0, &m2724_MI);
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
		uint16_t L_5 = m2739(L_3, L_4, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_6 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_9 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		int32_t L_10 = V_0;
		int32_t L_11 = m5983(L_8, L_9, L_10, &m5983_MI);
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
		t2* L_20 = m2740(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2740_MI);
		__this->f5 = L_20;
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_008b;
		}
	}
	{
		bool L_22 = m11531(NULL, &m11531_MI);
		if (L_22)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_23 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f4;
		__this->f6 = L_23;
		goto IL_009e;
	}

IL_008b:
	{
		t2* L_24 = (__this->f1);
		int32_t L_25 = V_1;
		t2* L_26 = m2740(L_24, 0, L_25, &m2740_MI);
		__this->f6 = L_26;
	}

IL_009e:
	{
		bool L_27 = m11531(NULL, &m11531_MI);
		if (!L_27)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_28 = (__this->f6);
		int32_t L_29 = m2724(L_28, &m2724_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_30 = (__this->f6);
		uint16_t L_31 = m2739(L_30, 1, &m2739_MI);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_32 = (__this->f6);
		uint16_t L_33 = m2739(L_32, 0, &m2739_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t303_TI));
		bool L_34 = m2790(NULL, L_33, &m2790_MI);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_35 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_36 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t303_TI), &L_37);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_39 = m511(NULL, L_35, L_38, &m511_MI);
		__this->f6 = L_39;
	}

IL_00f1:
	{
		return;
	}
}
extern "C" bool m8839 (t1537 * __this, MethodInfo* method)
{
	{
		m8907(__this, 0, &m8907_MI);
		t1726 * L_0 = &(__this->f3);
		int32_t L_1 = (L_0->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_2 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f0;
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
		t1726 * L_3 = &(__this->f3);
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
extern "C" t1537 * m8840 (t1537 * __this, MethodInfo* method)
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
		int32_t L_2 = m2724(L_1, &m2724_MI);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (t1537 *)NULL;
	}

IL_0017:
	{
		t2* L_3 = (__this->f6);
		t1537 * L_4 = (t1537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1537_TI));
		m8835(L_4, L_3, &m8835_MI);
		return L_4;
	}
}
extern "C" void m8841 (t1537 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		m6950(NULL, L_0, &m6950_MI);
		return;
	}
}
extern MethodInfo m8842_MI;
extern "C" t2* m8842 (t1537 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8912_MI;


extern MethodInfo m8843_MI;
extern "C" void m8843 (t1717 * __this, MethodInfo* method)
{
	{
		m8911(__this, (t2*) &_stringLiteral1598, &m8911_MI);
		return;
	}
}
extern "C" void m8844 (t1717 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8911(__this, L_0, &m8911_MI);
		return;
	}
}
extern MethodInfo m8845_MI;
extern "C" void m8845 (t1717 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m8912(__this, L_0, L_1, &m8912_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m8846 (t1718 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral1599, &m7847_MI);
		m8911(__this, L_0, &m8911_MI);
		return;
	}
}
extern MethodInfo m8847_MI;
extern "C" void m8847 (t1718 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m8912(__this, L_0, L_1, &m8912_MI);
		return;
	}
}
#include "t302.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t302_TI;

#include "t2148.h"
#include "t296.h"
#include "t297.h"
#include "t1187.h"
#include "t1722.h"
#include "t1719.h"
extern TypeInfo t2148_TI;
extern TypeInfo t296_TI;
extern TypeInfo t1719_TI;
#include "t2148MD.h"
#include "t296MD.h"
#include "t1719MD.h"
extern MethodInfo m11874_MI;
extern MethodInfo m8929_MI;
extern MethodInfo m8867_MI;
extern MethodInfo m9003_MI;


extern MethodInfo m8848_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8848 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8848_init;
	if (!m8848_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8848_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1583, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t2* L_3 = m4271(L_2, &m4271_MI);
		int32_t L_4 = m2724(L_3, &m2724_MI);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_6 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_7 = m5981(L_5, L_6, &m5981_MI);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t563 * L_8 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_8, (t2*) &_stringLiteral1583, &m2910_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t2* L_9 = p0;
		bool L_10 = m6949(NULL, L_9, &m6949_MI);
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
		t2* L_13 = m7848(NULL, (t2*) &_stringLiteral1600, L_11, &m7848_MI);
		t2148 * L_14 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11874(L_14, L_13, &m11874_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0056:
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_16 = m8951(NULL, L_15, &m8951_MI);
		V_0 = L_16;
		t2* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_19 = m2738(NULL, L_17, L_18, &m2738_MI);
		if (!L_19)
		{
			goto IL_008c;
		}
	}
	{
		t2* L_20 = V_0;
		bool L_21 = m6949(NULL, L_20, &m6949_MI);
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
		t2* L_24 = m7848(NULL, (t2*) &_stringLiteral1601, L_22, &m7848_MI);
		t1717 * L_25 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8844(L_25, L_24, &m8844_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_008c:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_27 = m8929(NULL, L_26, (&V_1), &m8929_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_31 = m8925(NULL, L_29, L_30, &m8925_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a2:
	{
		return;
	}
}
extern "C" bool m1093 (t9 * __this , t2* p0, MethodInfo* method)
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
		t2* L_2 = m4271(L_1, &m4271_MI);
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_5 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_6 = m5981(L_4, L_5, &m5981_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		bool L_8 = m8932(NULL, L_7, (&V_0), &m8932_MI);
		return L_8;
	}
}
extern MethodInfo m1095_MI;
extern "C" t296 * m1095 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
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
		t296 * L_3 = (t296 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t296_TI));
		m8867(L_3, G_B3_2, G_B3_1, G_B3_0, 0, &m8867_MI);
		return L_3;
	}
}
extern MethodInfo m6946_MI;
extern "C" t296 * m6946 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t296 * L_1 = (t296 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t296_TI));
		m8867(L_1, L_0, 3, 1, 1, &m8867_MI);
		return L_1;
	}
}
extern MethodInfo m8849_MI;
extern "C" t1719 * m8849 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1719_TI));
		t1719 * L_1 = (t1719 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1719_TI));
		m9003(L_1, L_0, &m9003_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1187_TI;
#include "t1187MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1715_TI;
#include "t1715MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t297_TI;
#include "t297MD.h"



#include "t1720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1720_TI;
#include "t1720MD.h"

extern TypeInfo t1100_TI;
extern TypeInfo t1101_TI;
extern MethodInfo m6975_MI;
extern MethodInfo m4458_MI;
extern MethodInfo m5741_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4443_MI;
extern MethodInfo m2512_MI;
extern MethodInfo m8854_MI;
extern MethodInfo m4244_MI;
extern MethodInfo m4442_MI;


extern MethodInfo m8850_MI;
extern "C" void m8850 (t1720 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7847(NULL, (t2*) &_stringLiteral1603, &m7847_MI);
		m8911(__this, L_0, &m8911_MI);
		m4458(__this, ((int32_t)-2146232799), &m4458_MI);
		return;
	}
}
extern MethodInfo m8851_MI;
extern "C" void m8851 (t1720 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8911(__this, L_0, &m8911_MI);
		m4458(__this, ((int32_t)-2146232799), &m4458_MI);
		return;
	}
}
extern MethodInfo m8852_MI;
extern "C" void m8852 (t1720 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8911(__this, L_0, &m8911_MI);
		m4458(__this, ((int32_t)-2146232799), &m4458_MI);
		t2* L_1 = p1;
		__this->f11 = L_1;
		return;
	}
}
extern MethodInfo m8853_MI;
extern "C" void m8853 (t1720 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m8912(__this, L_0, L_1, &m8912_MI);
		t1100 * L_2 = p0;
		t2* L_3 = m5741(L_2, (t2*) &_stringLiteral1604, &m5741_MI);
		__this->f11 = L_3;
		t1100 * L_4 = p0;
		t2* L_5 = m5741(L_4, (t2*) &_stringLiteral1605, &m5741_MI);
		__this->f12 = L_5;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t2* m8854 (t1720 * __this, MethodInfo* method)
{
	static bool m8854_init;
	if (!m8854_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8854_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_2 = m6970(NULL, &m6970_MI);
		t158* L_3 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_4 = (__this->f11);
		ArrayElementTypeCheck (L_3, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_3, 0)) = (t9 *)L_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m6975(NULL, L_2, (t2*) &_stringLiteral1602, L_3, &m6975_MI);
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
extern MethodInfo m8855_MI;
extern "C" void m8855 (t1720 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m4498(__this, L_0, L_1, &m4498_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5744(L_2, (t2*) &_stringLiteral1604, L_3, &m5744_MI);
		t1100 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5744(L_4, (t2*) &_stringLiteral1605, L_5, &m5744_MI);
		return;
	}
}
extern MethodInfo m8856_MI;
extern "C" t2* m8856 (t1720 * __this, MethodInfo* method)
{
	t322 * V_0 = {0};
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4443_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4410_MI, L_0);
		t322 * L_2 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m2512(L_2, L_1, &m2512_MI);
		V_0 = L_2;
		t322 * L_3 = V_0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8854_MI, __this);
		m5751(L_3, (t2*) &_stringLiteral1606, L_4, &m5751_MI);
		t2* L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		t2* L_6 = (__this->f11);
		int32_t L_7 = m2724(L_6, &m2724_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t322 * L_8 = V_0;
		t2* L_9 = m5804(NULL, &m5804_MI);
		m1170(L_8, L_9, &m1170_MI);
		t322 * L_10 = V_0;
		t2* L_11 = (__this->f11);
		m5751(L_10, (t2*) &_stringLiteral1607, L_11, &m5751_MI);
	}

IL_0057:
	{
		t138 * L_12 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4244_MI, __this);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		t322 * L_13 = V_0;
		t138 * L_14 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4244_MI, __this);
		m5751(L_13, (t2*) &_stringLiteral1608, L_14, &m5751_MI);
	}

IL_0071:
	{
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4442_MI, __this);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		t322 * L_16 = V_0;
		t2* L_17 = m5804(NULL, &m5804_MI);
		m1170(L_16, L_17, &m1170_MI);
		t322 * L_18 = V_0;
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4442_MI, __this);
		m1170(L_18, L_19, &m1170_MI);
	}

IL_0092:
	{
		t322 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1172_MI, L_20);
		return L_21;
	}
}
#include "t1721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1721_TI;
#include "t1721MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1722_TI;
#include "t1722MD.h"



#include "t1723.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1723_TI;
#include "t1723MD.h"



extern MethodInfo m8857_MI;
extern "C" void m8857 (t1723 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8858_MI;
extern "C" int32_t m8858 (t1723 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8858((t1723 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 *, t9 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_t1723(Il2CppObject* delegate, t730* p0, int32_t p1, int32_t p2)
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
extern MethodInfo m8859_MI;
extern "C" t9 * m8859 (t1723 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8860_MI;
extern "C" int32_t m8860 (t1723 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1724.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1724_TI;
#include "t1724MD.h"



extern MethodInfo m8861_MI;
extern "C" void m8861 (t1724 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8862_MI;
extern "C" void m8862 (t1724 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8862((t1724 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1724(Il2CppObject* delegate, t730* p0, int32_t p1, int32_t p2)
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
extern MethodInfo m8863_MI;
extern "C" t9 * m8863 (t1724 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8864_MI;
extern "C" void m8864 (t1724 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

#include "t1499.h"
#include "t1727.h"
#include "t1883.h"
#include "t1725.h"
#include "t888.h"
extern TypeInfo t299_TI;
extern TypeInfo t1499_TI;
extern TypeInfo t469_TI;
extern TypeInfo t470_TI;
extern TypeInfo t1883_TI;
extern TypeInfo t1725_TI;
extern TypeInfo t888_TI;
#include "t58MD.h"
#include "t1883MD.h"
#include "t1725MD.h"
#include "t888MD.h"
extern MethodInfo m4461_MI;
extern MethodInfo m8872_MI;
extern MethodInfo m8892_MI;
extern MethodInfo m8940_MI;
extern MethodInfo m8896_MI;
extern MethodInfo m8884_MI;
extern MethodInfo m7011_MI;
extern MethodInfo m8931_MI;
extern MethodInfo m8895_MI;
extern MethodInfo m8939_MI;
extern MethodInfo m8868_MI;
extern MethodInfo m8869_MI;
extern MethodInfo m8897_MI;
extern MethodInfo m2795_MI;
extern MethodInfo m8935_MI;
extern MethodInfo m6947_MI;
extern MethodInfo m8873_MI;
extern MethodInfo m8870_MI;
extern MethodInfo m8894_MI;
extern MethodInfo m8893_MI;
extern MethodInfo m8871_MI;
extern MethodInfo m8891_MI;
extern MethodInfo m8878_MI;
extern MethodInfo m8879_MI;
extern MethodInfo m8877_MI;
extern MethodInfo m8888_MI;
extern MethodInfo m6988_MI;
extern MethodInfo m6990_MI;
extern MethodInfo m9892_MI;
extern MethodInfo m8882_MI;
extern MethodInfo m8883_MI;
extern MethodInfo m8881_MI;
extern MethodInfo m8938_MI;
extern MethodInfo m8889_MI;
extern MethodInfo m6999_MI;
extern MethodInfo m8898_MI;
extern MethodInfo m7010_MI;
extern MethodInfo m8890_MI;
extern MethodInfo m4291_MI;
extern MethodInfo m7019_MI;
extern MethodInfo m7000_MI;
extern MethodInfo m8885_MI;
extern MethodInfo m8941_MI;
extern MethodInfo m8874_MI;
extern MethodInfo m8887_MI;
extern MethodInfo m4305_MI;
extern MethodInfo m8936_MI;
extern MethodInfo m8937_MI;
extern MethodInfo m8910_MI;


extern MethodInfo m8865_MI;
extern "C" void m8865 (t296 * __this, t58 p0, int32_t p1, bool p2, int32_t p3, bool p4, bool p5, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		__this->f13 = (t2*) &_stringLiteral1612;
		m7011(__this, &m7011_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_0 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		__this->f14 = L_0;
		t58 L_1 = p0;
		t58 L_2 = (__this->f14);
		bool L_3 = m4461(NULL, L_1, L_2, &m4461_MI);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		t2* L_4 = m7847(NULL, (t2*) &_stringLiteral1614, &m7847_MI);
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_5, (t2*) &_stringLiteral1613, L_4, &m5720_MI);
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
		t903 * L_8 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_8, (t2*) &_stringLiteral1615, &m5722_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0052:
	{
		t58 L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_10 = m8931(NULL, L_9, (&V_0), &m8931_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_14 = m8925(NULL, L_12, L_13, &m8925_MI);
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
		t1549 * L_16 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_16, (t2*) &_stringLiteral1616, &m8911_MI);
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
		m8895(__this, L_22, L_23, &m8895_MI);
		bool L_24 = (__this->f4);
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		t58 L_25 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int64_t L_26 = m8939(NULL, L_25, (((int64_t)0)), 1, (&V_0), &m8939_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_30 = m8925(NULL, L_28, L_29, &m8925_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00e4:
	{
		__this->f5 = (((int64_t)0));
		return;
	}
}
extern MethodInfo m8866_MI;
extern "C" void m8866 (t296 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	int32_t G_B2_1 = {0};
	t2* G_B2_2 = {0};
	t296 * G_B2_3 = {0};
	int32_t G_B1_0 = {0};
	int32_t G_B1_1 = {0};
	t2* G_B1_2 = {0};
	t296 * G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	int32_t G_B3_2 = {0};
	t2* G_B3_3 = {0};
	t296 * G_B3_4 = {0};
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
		m8868(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, ((int32_t)8192), 0, 0, &m8868_MI);
		return;
	}
}
extern "C" void m8867 (t296 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m8869(__this, L_0, L_1, L_2, L_3, ((int32_t)8192), 0, 0, &m8869_MI);
		return;
	}
}
extern "C" void m8868 (t296 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, bool p6, MethodInfo* method)
{
	bool G_B2_0 = false;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = {0};
	int32_t G_B2_3 = {0};
	int32_t G_B2_4 = {0};
	t2* G_B2_5 = {0};
	t296 * G_B2_6 = {0};
	bool G_B1_0 = false;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = {0};
	int32_t G_B1_3 = {0};
	int32_t G_B1_4 = {0};
	t2* G_B1_5 = {0};
	t296 * G_B1_6 = {0};
	int32_t G_B3_0 = 0;
	bool G_B3_1 = false;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = {0};
	int32_t G_B3_4 = {0};
	int32_t G_B3_5 = {0};
	t2* G_B3_6 = {0};
	t296 * G_B3_7 = {0};
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
		m8869(G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, &m8869_MI);
		return;
	}
}
extern "C" void m8869 (t296 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, int32_t p6, MethodInfo* method)
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
		__this->f13 = (t2*) &_stringLiteral1612;
		m7011(__this, &m7011_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1583, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001f:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral1584, &m2910_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_7, (t2*) &_stringLiteral1617, (t2*) &_stringLiteral1468, &m4361_MI);
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
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_11, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1619, &m5720_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_006c:
	{
		t903 * L_12 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_12, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1619, &m4361_MI);
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
		t1711 * L_16 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8780(L_16, (t2*) &_stringLiteral1620, &m8780_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0093:
	{
		t903 * L_17 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_17, (t2*) &_stringLiteral1615, (t2*) &_stringLiteral1619, &m4361_MI);
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
		t1711 * L_21 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8780(L_21, (t2*) &_stringLiteral1621, &m8780_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t903 * L_22 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_22, (t2*) &_stringLiteral1622, (t2*) &_stringLiteral1619, &m4361_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00cc:
	{
		t2* L_23 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t312* L_24 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f0;
		int32_t L_25 = m5981(L_23, L_24, &m5981_MI);
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_00e5;
		}
	}
	{
		t563 * L_26 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_26, (t2*) &_stringLiteral1623, &m2910_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00e5:
	{
		t2* L_27 = p0;
		bool L_28 = m6949(NULL, L_27, &m6949_MI);
		if (!L_28)
		{
			goto IL_010c;
		}
	}
	{
		t2* L_29 = m7847(NULL, (t2*) &_stringLiteral1624, &m7847_MI);
		V_0 = L_29;
		t2* L_30 = V_0;
		t2* L_31 = p0;
		t2* L_32 = m8897(__this, L_31, 0, &m8897_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = m590(NULL, L_30, L_32, &m590_MI);
		t2148 * L_34 = (t2148 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2148_TI));
		m11874(L_34, L_33, &m11874_MI);
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
		t563 * L_37 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_37, (t2*) &_stringLiteral1625, &m2910_MI);
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
		t2* L_41 = m7847(NULL, (t2*) &_stringLiteral1626, &m7847_MI);
		V_1 = L_41;
		t2* L_42 = V_1;
		int32_t L_43 = p2;
		int32_t L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t1187_TI), &L_44);
		int32_t L_46 = p1;
		int32_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t297_TI), &L_47);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_49 = m1214(NULL, L_42, L_45, L_48, &m1214_MI);
		t563 * L_50 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_50, L_49, &m2910_MI);
		il2cpp_codegen_raise_exception(L_50);
	}

IL_0151:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		uint16_t L_51 = ((t300_SFs*)InitializedTypeInfo(&t300_TI)->static_fields)->f2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)47))))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_52 = p0;
		int32_t L_53 = m2795(L_52, ((int32_t)47), &m2795_MI);
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_54 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_55 = m8954(NULL, L_54, &m8954_MI);
		t2* L_56 = m8951(NULL, L_55, &m8951_MI);
		V_2 = L_56;
		goto IL_017a;
	}

IL_0173:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_58 = m8951(NULL, L_57, &m8951_MI);
		V_2 = L_58;
	}

IL_017a:
	{
		t2* L_59 = V_2;
		int32_t L_60 = m2724(L_59, &m2724_MI);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_61 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_62 = m8954(NULL, L_61, &m8954_MI);
		V_3 = L_62;
		t2* L_63 = V_3;
		bool L_64 = m6949(NULL, L_63, &m6949_MI);
		if (L_64)
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_65 = m7847(NULL, (t2*) &_stringLiteral1601, &m7847_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_69 = m8954(NULL, L_68, &m8954_MI);
		G_B41_0 = L_69;
	}

IL_01ab:
	{
		V_5 = G_B41_0;
		t2* L_70 = V_4;
		t2* L_71 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_72 = m590(NULL, L_70, L_71, &m590_MI);
		t1711 * L_73 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8780(L_73, L_72, &m8780_MI);
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
		bool L_79 = m1093(NULL, L_78, &m1093_MI);
		if (L_79)
		{
			goto IL_01f8;
		}
	}
	{
		t2* L_80 = m7847(NULL, (t2*) &_stringLiteral1627, &m7847_MI);
		V_6 = L_80;
		t2* L_81 = p0;
		t2* L_82 = m8896(__this, L_81, &m8896_MI);
		V_7 = L_82;
		t2* L_83 = V_6;
		t2* L_84 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m590(NULL, L_83, L_84, &m590_MI);
		t1711 * L_86 = (t1711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1711_TI));
		m8780(L_86, L_85, &m8780_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_94 = m8935(NULL, L_89, L_90, L_91, L_92, L_93, (&V_8), &m8935_MI);
		__this->f14 = L_94;
		t58 L_95 = (__this->f14);
		t58 L_96 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_97 = m4461(NULL, L_95, L_96, &m4461_MI);
		if (!L_97)
		{
			goto IL_0238;
		}
	}
	{
		t2* L_98 = p0;
		t2* L_99 = m8896(__this, L_98, &m8896_MI);
		int32_t L_100 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_101 = m8925(NULL, L_99, L_100, &m8925_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_105 = m8931(NULL, L_104, (&V_8), &m8931_MI);
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
		int64_t L_110 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6947_MI, __this);
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
		m8895(__this, L_115, 0, &m8895_MI);
		int32_t L_116 = p1;
		if ((!(((uint32_t)L_116) == ((uint32_t)6))))
		{
			goto IL_02eb;
		}
	}
	{
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8884_MI, __this, (((int64_t)0)), 2);
		int64_t L_117 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8873_MI, __this);
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
extern "C" bool m8870 (t296 * __this, MethodInfo* method)
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
extern "C" bool m8871 (t296 * __this, MethodInfo* method)
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
extern "C" bool m8872 (t296 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int64_t m6947 (t296 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int64_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1610, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		m8892(__this, &m8892_MI);
		t58 L_6 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int64_t L_7 = m8940(NULL, L_6, (&V_0), &m8940_MI);
		V_1 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8896(__this, L_9, &m8896_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_12 = m8925(NULL, L_10, L_11, &m8925_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005a:
	{
		int64_t L_13 = V_1;
		return L_13;
	}
}
extern "C" int64_t m8873 (t296 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1610, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int64_t L_6 = (__this->f12);
		int32_t L_7 = (__this->f10);
		return ((int64_t)((int64_t)L_6+(int64_t)(((int64_t)L_7))));
	}
}
extern "C" void m8874 (t296 * __this, int64_t p0, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1610, &m5735_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_7, (t2*) &_stringLiteral1611, &m5722_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int64_t L_8 = p0;
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8884_MI, __this, L_8, 0);
		return;
	}
}
extern MethodInfo m8875_MI;
extern "C" int32_t m8875 (t296 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8870_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1628, &m5735_MI);
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
		t730* L_8 = (__this->f7);
		int32_t L_9 = m8894(__this, L_7, L_8, 0, 1, &m8894_MI);
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
		t730* L_11 = (__this->f7);
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
		m8893(__this, &m8893_MI);
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
		t730* L_16 = (__this->f7);
		int32_t L_17 = (__this->f10);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->f10 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_20));
	}
}
extern MethodInfo m8876_MI;
extern "C" void m8876 (t296 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8871_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1629, &m5735_MI);
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
		m8891(__this, &m8891_MI);
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
		t730* L_9 = (__this->f7);
		uint8_t L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)L_10;
		__this->f11 = 1;
		__this->f9 = 1;
		m8891(__this, &m8891_MI);
		return;
	}

IL_006a:
	{
		t730* L_11 = (__this->f7);
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
extern MethodInfo m6948_MI;
extern "C" int32_t m6948 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t9 * V_1 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t730* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral325, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8870_MI, __this);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_7, (t2*) &_stringLiteral1628, &m5735_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		t730* L_8 = p0;
		V_0 = (((int32_t)(((t121 *)L_8)->max_length)));
		int32_t L_9 = p1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t903 * L_10 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_10, (t2*) &_stringLiteral981, (t2*) &_stringLiteral807, &m4361_MI);
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
		t903 * L_12 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_12, (t2*) &_stringLiteral488, (t2*) &_stringLiteral807, &m4361_MI);
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
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_15, (t2*) &_stringLiteral1630, &m2910_MI);
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
		t563 * L_19 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_19, (t2*) &_stringLiteral1631, &m2910_MI);
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
		t730* L_21 = p0;
		int32_t L_22 = p1;
		int32_t L_23 = p2;
		t9 * L_24 = (t9 *)VirtFuncInvoker5< t9 *, t730*, int32_t, int32_t, t470 *, t9 * >::Invoke(&m8878_MI, __this, L_21, L_22, L_23, (t470 *)NULL, NULL);
		V_1 = L_24;
		t9 * L_25 = V_1;
		int32_t L_26 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8879_MI, __this, L_25);
		return L_26;
	}

IL_00a6:
	{
		t730* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = p2;
		int32_t L_30 = m8877(__this, L_27, L_28, L_29, &m8877_MI);
		return L_30;
	}
}
extern "C" int32_t m8877 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t730* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = m8888(__this, L_0, L_1, L_2, &m8888_MI);
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
		m8891(__this, &m8891_MI);
		t58 L_12 = (__this->f14);
		t730* L_13 = p0;
		int32_t L_14 = p1;
		int32_t L_15 = V_0;
		int32_t L_16 = p2;
		int32_t L_17 = m8894(__this, L_12, L_13, ((int32_t)((int32_t)L_14+(int32_t)L_15)), L_16, &m8894_MI);
		V_1 = L_17;
		int64_t L_18 = (__this->f12);
		int32_t L_19 = V_1;
		__this->f12 = ((int64_t)((int64_t)L_18+(int64_t)(((int64_t)L_19))));
		goto IL_0060;
	}

IL_004e:
	{
		m8893(__this, &m8893_MI);
		t730* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_0;
		int32_t L_23 = p2;
		int32_t L_24 = m8888(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8888_MI);
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
extern "C" t9 * m8878 (t296 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	t1723 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8870_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1632, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t730* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_9, (t2*) &_stringLiteral1633, (t2*) &_stringLiteral1634, &m4361_MI);
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
		t903 * L_11 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_11, (t2*) &_stringLiteral981, (t2*) &_stringLiteral1634, &m4361_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t730* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_15, (t2*) &_stringLiteral1635, &m2910_MI);
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
		t730* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t470 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m6988(__this, L_17, L_18, L_19, L_20, L_21, &m6988_MI);
		return L_22;
	}

IL_008f:
	{
		t58 L_23 = { &m8877_MI };
		t1723 * L_24 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
		m8857(L_24, __this, L_23, &m8857_MI);
		V_0 = L_24;
		t1723 * L_25 = V_0;
		t730* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = p2;
		t470 * L_29 = p3;
		t9 * L_30 = p4;
		t9 * L_31 = (t9 *)VirtFuncInvoker5< t9 *, t730*, int32_t, int32_t, t470 *, t9 * >::Invoke(&m8859_MI, L_25, L_26, L_27, L_28, L_29, L_30);
		return L_31;
	}
}
extern "C" int32_t m8879 (t296 * __this, t9 * p0, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t1723 * V_1 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1636, &m339_MI);
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
		int32_t L_4 = m6990(__this, L_3, &m6990_MI);
		return L_4;
	}

IL_001e:
	{
		t9 * L_5 = p0;
		V_0 = ((t1883 *)IsInst(L_5, InitializedTypeInfo(&t1883_TI)));
		t1883 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		t563 * L_7 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_7, (t2*) &_stringLiteral1637, (t2*) &_stringLiteral1636, &m5720_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0038:
	{
		t1883 * L_8 = V_0;
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9892_MI, L_8);
		V_1 = ((t1723 *)IsInst(L_9, InitializedTypeInfo(&t1723_TI)));
		t1723 * L_10 = V_1;
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		t563 * L_11 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_11, (t2*) &_stringLiteral1637, (t2*) &_stringLiteral1636, &m5720_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0057:
	{
		t1723 * L_12 = V_1;
		t9 * L_13 = p0;
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8860_MI, L_12, L_13);
		return L_14;
	}
}
extern MethodInfo m8880_MI;
extern "C" void m8880 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t730* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_7 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_7, (t2*) &_stringLiteral981, (t2*) &_stringLiteral807, &m4361_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_9, (t2*) &_stringLiteral488, (t2*) &_stringLiteral807, &m4361_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		int32_t L_10 = p1;
		t730* L_11 = p0;
		int32_t L_12 = p2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0066;
		}
	}
	{
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_13, (t2*) &_stringLiteral1631, &m2910_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0066:
	{
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8871_MI, __this);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_15, (t2*) &_stringLiteral1629, &m5735_MI);
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
		t730* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t9 * L_20 = (t9 *)VirtFuncInvoker5< t9 *, t730*, int32_t, int32_t, t470 *, t9 * >::Invoke(&m8882_MI, __this, L_17, L_18, L_19, (t470 *)NULL, NULL);
		V_0 = L_20;
		t9 * L_21 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m8883_MI, __this, L_21);
		return;
	}

IL_0095:
	{
		t730* L_22 = p0;
		int32_t L_23 = p1;
		int32_t L_24 = p2;
		m8881(__this, L_22, L_23, L_24, &m8881_MI);
		return;
	}
}
extern "C" void m8881 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m8891(__this, &m8891_MI);
		int32_t L_2 = p2;
		V_1 = L_2;
		goto IL_0045;
	}

IL_0013:
	{
		t58 L_3 = (__this->f14);
		t730* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_7 = m8938(NULL, L_3, L_4, L_5, L_6, (&V_0), &m8938_MI);
		V_2 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8896(__this, L_9, &m8896_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_12 = m8925(NULL, L_10, L_11, &m8925_MI);
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
		t730* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_3;
		int32_t L_23 = p2;
		int32_t L_24 = m8889(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8889_MI);
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
		m8891(__this, &m8891_MI);
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
extern "C" t9 * m8882 (t296 * __this, t730* p0, int32_t p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	t1725 * V_0 = {0};
	t888 * V_1 = {0};
	t1724 * V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8871_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1638, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t730* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral325, &m339_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_9, (t2*) &_stringLiteral1633, (t2*) &_stringLiteral1634, &m4361_MI);
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
		t903 * L_11 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_11, (t2*) &_stringLiteral981, (t2*) &_stringLiteral1634, &m4361_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t730* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t563 * L_15 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_15, (t2*) &_stringLiteral1639, &m2910_MI);
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
		t730* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t470 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m6999(__this, L_17, L_18, L_19, L_20, L_21, &m6999_MI);
		return L_22;
	}

IL_008f:
	{
		t470 * L_23 = p3;
		t9 * L_24 = p4;
		t1725 * L_25 = (t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1725_TI));
		m8898(L_25, L_23, L_24, &m8898_MI);
		V_0 = L_25;
		t1725 * L_26 = V_0;
		L_26->f6 = (-1);
		t1725 * L_27 = V_0;
		int32_t L_28 = p2;
		L_27->f4 = L_28;
		t1725 * L_29 = V_0;
		int32_t L_30 = p2;
		L_29->f5 = L_30;
		bool L_31 = (__this->f11);
		if (!L_31)
		{
			goto IL_00dc;
		}
	}
	{
		t888 * L_32 = (t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t888_TI));
		m7010(L_32, &m7010_MI);
		V_1 = L_32;
		t888 * L_33 = V_1;
		m8890(__this, L_33, &m8890_MI);
		t888 * L_34 = V_1;
		t730* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = p2;
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_34, L_35, L_36, L_37);
		p1 = 0;
		t888 * L_38 = V_1;
		int64_t L_39 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m7019_MI, L_38);
		p2 = (((int32_t)L_39));
	}

IL_00dc:
	{
		t58 L_40 = { &m8881_MI };
		t1724 * L_41 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8861(L_41, __this, L_40, &m8861_MI);
		V_2 = L_41;
		t1724 * L_42 = V_2;
		t730* L_43 = p0;
		int32_t L_44 = p1;
		int32_t L_45 = p2;
		t470 * L_46 = p3;
		t9 * L_47 = p4;
		t9 * L_48 = (t9 *)VirtFuncInvoker5< t9 *, t730*, int32_t, int32_t, t470 *, t9 * >::Invoke(&m8863_MI, L_42, L_43, L_44, L_45, L_46, L_47);
		return L_48;
	}
}
extern "C" void m8883 (t296 * __this, t9 * p0, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t1724 * V_1 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1636, &m339_MI);
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
		m7000(__this, L_3, &m7000_MI);
		return;
	}

IL_001e:
	{
		t9 * L_4 = p0;
		V_0 = ((t1883 *)IsInst(L_4, InitializedTypeInfo(&t1883_TI)));
		t1883 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_6, (t2*) &_stringLiteral1637, (t2*) &_stringLiteral1636, &m5720_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t1883 * L_7 = V_0;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9892_MI, L_7);
		V_1 = ((t1724 *)IsInst(L_8, InitializedTypeInfo(&t1724_TI)));
		t1724 * L_9 = V_1;
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		t563 * L_10 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_10, (t2*) &_stringLiteral1637, (t2*) &_stringLiteral1636, &m5720_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0057:
	{
		t1724 * L_11 = V_1;
		t9 * L_12 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8864_MI, L_11, L_12);
		return;
	}
}
extern "C" int64_t m8884 (t296 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1610, &m5735_MI);
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
		int64_t L_8 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6947_MI, __this);
		int64_t L_9 = p0;
		V_0 = ((int64_t)((int64_t)L_8+(int64_t)L_9));
		goto IL_0070;
	}

IL_0051:
	{
		int64_t L_10 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8873_MI, __this);
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
		t563 * L_13 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m5720(L_13, (t2*) &_stringLiteral1640, (t2*) &_stringLiteral1641, &m5720_MI);
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
		t1549 * L_15 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_15, (t2*) &_stringLiteral1642, &m8911_MI);
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
		t1549 * L_18 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8911(L_18, (t2*) &_stringLiteral1643, &m8911_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0094:
	{
		m8891(__this, &m8891_MI);
		t58 L_19 = (__this->f14);
		int64_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int64_t L_21 = m8939(NULL, L_19, L_20, 0, (&V_1), &m8939_MI);
		__this->f12 = L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_23 = (__this->f13);
		t2* L_24 = m8896(__this, L_23, &m8896_MI);
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_26 = m8925(NULL, L_24, L_25, &m8925_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00c5:
	{
		int64_t L_27 = (__this->f12);
		return L_27;
	}
}
extern MethodInfo m1101_MI;
extern "C" void m1101 (t296 * __this, int64_t p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_5, (t2*) &_stringLiteral1610, &m5735_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8871_MI, __this);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5735(L_7, (t2*) &_stringLiteral1644, &m5735_MI);
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
		t903 * L_9 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m5722(L_9, (t2*) &_stringLiteral1645, &m5722_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		VirtActionInvoker0::Invoke(&m8885_MI, __this);
		t58 L_10 = (__this->f14);
		int64_t L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		m8941(NULL, L_10, L_11, (&V_0), &m8941_MI);
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		t2* L_13 = (__this->f13);
		t2* L_14 = m8896(__this, L_13, &m8896_MI);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_16 = m8925(NULL, L_14, L_15, &m8925_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_007e:
	{
		int64_t L_17 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8873_MI, __this);
		int64_t L_18 = p0;
		if ((((int64_t)L_17) <= ((int64_t)L_18)))
		{
			goto IL_008e;
		}
	}
	{
		int64_t L_19 = p0;
		VirtActionInvoker1< int64_t >::Invoke(&m8874_MI, __this, L_19);
	}

IL_008e:
	{
		return;
	}
}
extern "C" void m8885 (t296 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4461(NULL, L_0, L_1, &m4461_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6912(L_3, (t2*) &_stringLiteral1609, &m6912_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8891(__this, &m8891_MI);
		return;
	}
}
extern MethodInfo m8886_MI;
extern "C" void m8886 (t296 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8887_MI, __this, 0);
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
extern "C" void m8887 (t296 * __this, bool p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_1 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
		bool L_2 = m4305(NULL, L_0, L_1, &m4305_MI);
		if (!L_2)
		{
			goto IL_0058;
		}
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		m8891(__this, &m8891_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		m8936(NULL, L_5, (&V_2), &m8936_MI);
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t2* L_7 = (__this->f13);
		t2* L_8 = m8896(__this, L_7, &m8896_MI);
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_10 = m8925(NULL, L_8, L_9, &m8925_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t58 L_11 = ((t1728_SFs*)InitializedTypeInfo(&t1728_TI)->static_fields)->f1;
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
		__this->f7 = (t730*)NULL;
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
		m6896(NULL, __this, &m6896_MI);
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
extern "C" int32_t m8888 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t730* L_6 = (__this->f7);
		int32_t L_7 = (__this->f10);
		t730* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = p2;
		m5793(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5793_MI);
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
extern "C" int32_t m8889 (t296 * __this, t730* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t730* L_6 = p0;
		int32_t L_7 = p1;
		t730* L_8 = (__this->f7);
		int32_t L_9 = (__this->f10);
		int32_t L_10 = p2;
		m5793(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5793_MI);
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
extern "C" void m8890 (t296 * __this, t298 * p0, MethodInfo* method)
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
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8872_MI, __this);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		t58 L_2 = (__this->f14);
		int64_t L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		m8939(NULL, L_2, L_3, 0, (&V_0), &m8939_MI);
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_5 = (__this->f13);
		t2* L_6 = m8896(__this, L_5, &m8896_MI);
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_8 = m8925(NULL, L_6, L_7, &m8925_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t298 * L_9 = p0;
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		t58 L_10 = (__this->f14);
		t730* L_11 = (__this->f7);
		int32_t L_12 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		m8938(NULL, L_10, L_11, 0, L_12, (&V_0), &m8938_MI);
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_14 = (__this->f13);
		t2* L_15 = m8896(__this, L_14, &m8896_MI);
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_17 = m8925(NULL, L_15, L_16, &m8925_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0072:
	{
		goto IL_0087;
	}

IL_0074:
	{
		t298 * L_18 = p0;
		t730* L_19 = (__this->f7);
		int32_t L_20 = (__this->f9);
		VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m6982_MI, L_18, L_19, 0, L_20);
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
extern "C" void m8891 (t296 * __this, MethodInfo* method)
{
	{
		m8890(__this, (t298 *)NULL, &m8890_MI);
		return;
	}
}
extern "C" void m8892 (t296 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		m8890(__this, (t298 *)NULL, &m8890_MI);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m8893 (t296 * __this, MethodInfo* method)
{
	{
		m8890(__this, (t298 *)NULL, &m8890_MI);
		t58 L_0 = (__this->f14);
		t730* L_1 = (__this->f7);
		int32_t L_2 = (__this->f8);
		int32_t L_3 = m8894(__this, L_0, L_1, 0, L_2, &m8894_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" int32_t m8894 (t296 * __this, t58 p0, t730* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
		t58 L_0 = p0;
		t730* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		int32_t L_4 = m8937(NULL, L_0, L_1, L_2, L_3, (&V_0), &m8937_MI);
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
		t2* L_8 = m8896(__this, L_7, &m8896_MI);
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1728_TI));
		t138 * L_10 = m8925(NULL, L_8, L_9, &m8925_MI);
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
		t1549 * L_12 = (t1549 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1549_TI));
		m8910(L_12, &m8910_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0038:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" void m8895 (t296 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8895_init;
	if (!m8895_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m8895_init = true;
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
		__this->f7 = ((t730*)SZArrayNew(t730_TI_var, 1));
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4361(L_2, (t2*) &_stringLiteral1617, (t2*) &_stringLiteral1468, &m4361_MI);
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
		__this->f7 = ((t730*)SZArrayNew(t730_TI_var, L_4));
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
extern "C" t2* m8896 (t296 * __this, t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_2 = m8953(NULL, L_1, &m8953_MI);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_4 = m8954(NULL, L_3, &m8954_MI);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern "C" t2* m8897 (t296 * __this, t2* p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_2 = m8953(NULL, L_1, &m8953_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t300_TI));
		t2* L_5 = m8954(NULL, L_4, &m8954_MI);
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
