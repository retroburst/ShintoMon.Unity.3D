#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1646.h"
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
extern TypeInfo t1646_TI;
#include "t1646MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t1442.h"
#include "t477.h"

#include "t121.h"

extern MethodInfo m8189_MI;
extern "C" void m8189 (t1646 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8190_MI;
extern "C" void m8190 (t1646 * __this, t9 * p0, t1442 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8190((t1646 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1646(Il2CppObject* delegate, t9 * p0, t1442 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m8191_MI;
extern "C" t9 * m8191 (t1646 * __this, t9 * p0, t1442 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m8192_MI;
extern "C" void m8192 (t1646 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1647.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1647_TI;
#include "t1647MD.h"

#include "t125.h"
#include "t124.h"
#include "t1627.h"
#include "t1218.h"
#include "mscorlib_ArrayTypes.h"
#include "t1535.h"
#include "t297.h"
#include "t168.h"
#include "t582.h"
#include "t2.h"
#include "t1536.h"
#include "t1359.h"
#include "t1356.h"
#include "t328.h"
extern TypeInfo t1218_TI;
extern TypeInfo t125_TI;
extern TypeInfo t1627_TI;
extern TypeInfo t1439_TI;
extern TypeInfo t1535_TI;
extern TypeInfo t122_TI;
extern TypeInfo t124_TI;
extern TypeInfo t9_TI;
extern TypeInfo t1442_TI;
extern TypeInfo t1536_TI;
extern TypeInfo t1359_TI;
extern TypeInfo t1356_TI;
extern TypeInfo t737_TI;
extern TypeInfo t582_TI;
extern TypeInfo t328_TI;
extern TypeInfo t305_TI;
extern TypeInfo t2_TI;
#include "t1627MD.h"
#include "t1218MD.h"
#include "t1223MD.h"
#include "t1535MD.h"
#include "t297MD.h"
#include "t9MD.h"
#include "t1536MD.h"
#include "t1597MD.h"
#include "t1359MD.h"
#include "t1360MD.h"
#include "t328MD.h"
#include "t305MD.h"
#include "t121MD.h"
extern Il2CppType t1439_0_0_0;
extern Il2CppType t737_0_0_0;
extern MethodInfo m8050_MI;
extern MethodInfo m5887_MI;
extern MethodInfo m8082_MI;
extern MethodInfo m6951_MI;
extern MethodInfo m6950_MI;
extern MethodInfo m6952_MI;
extern MethodInfo m1106_MI;
extern MethodInfo m1107_MI;
extern MethodInfo m8204_MI;
extern MethodInfo m646_MI;
extern MethodInfo m8198_MI;
extern MethodInfo m8069_MI;
extern MethodInfo m8067_MI;
extern MethodInfo m8073_MI;
extern MethodInfo m8083_MI;
extern MethodInfo m8076_MI;
extern MethodInfo m8085_MI;
extern MethodInfo m8070_MI;
extern MethodInfo m8072_MI;
extern MethodInfo m8064_MI;
extern MethodInfo m8074_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m8197_MI;
extern MethodInfo m8042_MI;
extern MethodInfo m8047_MI;
extern MethodInfo m8065_MI;
extern MethodInfo m8084_MI;
extern MethodInfo m8071_MI;
extern MethodInfo m8199_MI;
extern MethodInfo m7888_MI;
extern MethodInfo m5837_MI;
extern MethodInfo m8060_MI;
extern MethodInfo m8207_MI;
extern MethodInfo m8056_MI;
extern MethodInfo m5834_MI;
extern MethodInfo m1203_MI;
extern MethodInfo m8202_MI;
extern MethodInfo m1207_MI;
extern MethodInfo m4364_MI;
extern MethodInfo m1199_MI;
extern MethodInfo m1209_MI;


extern MethodInfo m8193_MI;
extern TypeInfo* t1439_TI_var;
extern "C" void m8193 (t1647 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8193_init;
	if (!m8193_init)
	{
		t1439_TI_var = il2cpp_codegen_class_from_type(&t1439_0_0_0);
		m8193_init = true;
	}
	{
		__this->f3 = 1;
		m6951(__this, &m6951_MI);
		__this->f1 = ((t1439*)SZArrayNew(t1439_TI_var, 1));
		t1439* L_0 = (__this->f1);
		t1535 * L_1 = (t1535 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1535_TI));
		m6950(L_1, ((int32_t)384), ((int32_t)16384), 8, &m6950_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t1535 **)(t1535 **)SZArrayLdElema(L_0, 0)) = (t1535 *)L_1;
		int32_t L_2 = p0;
		m6952(__this, L_2, &m6952_MI);
		return;
	}
}
extern MethodInfo m8194_MI;
extern "C" void m8194 (t1647 * __this, t1646 * p0, MethodInfo* method)
{
	{
		t1646 * L_0 = (__this->f14);
		t1646 * L_1 = p0;
		t297 * L_2 = m1106(NULL, L_0, L_1, &m1106_MI);
		__this->f14 = ((t1646 *)Castclass(L_2, InitializedTypeInfo(&t1646_TI)));
		return;
	}
}
extern MethodInfo m8195_MI;
extern "C" void m8195 (t1647 * __this, t1646 * p0, MethodInfo* method)
{
	{
		t1646 * L_0 = (__this->f14);
		t1646 * L_1 = p0;
		t297 * L_2 = m1107(NULL, L_0, L_1, &m1107_MI);
		__this->f14 = ((t1646 *)Castclass(L_2, InitializedTypeInfo(&t1646_TI)));
		return;
	}
}
extern MethodInfo m8196_MI;
extern "C" void m8196 (t1647 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8204_MI, __this, 0);
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
extern "C" void m8197 (t1647 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	t1627 * V_3 = {0};
	t1627 * V_4 = {0};
	t1627 * V_5 = {0};
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))>>(int32_t)1));
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_1-(int32_t)L_2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_3 = m8069(NULL, ((int32_t)17), &m8069_MI);
		__this->f13 = L_3;
		goto IL_0041;
	}

IL_0023:
	{
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_5 = m8067(NULL, L_4, &m8067_MI);
		__this->f7 = L_5;
		t1627 * L_6 = (__this->f7);
		uint32_t L_7 = m8073(NULL, L_6, ((int32_t)17), &m8073_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_9 = m8067(NULL, L_8, &m8067_MI);
		__this->f8 = L_9;
		t1627 * L_10 = (__this->f8);
		uint32_t L_11 = m8073(NULL, L_10, ((int32_t)17), &m8073_MI);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		t1627 * L_12 = (__this->f7);
		t1627 * L_13 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_14 = m8083(NULL, L_12, L_13, &m8083_MI);
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
		t1627 * L_15 = (__this->f7);
		t1627 * L_16 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_17 = m8076(NULL, L_15, L_16, &m8076_MI);
		__this->f12 = L_17;
		t1627 * L_18 = (__this->f12);
		int32_t L_19 = m8050(L_18, &m8050_MI);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
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
		t1627 * L_21 = (__this->f7);
		t1627 * L_22 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_23 = m8085(NULL, L_21, L_22, &m8085_MI);
		if (!L_23)
		{
			goto IL_00c8;
		}
	}
	{
		t1627 * L_24 = (__this->f8);
		__this->f7 = L_24;
	}

IL_00c8:
	{
		goto IL_0048;
	}

IL_00cd:
	{
		t1627 * L_25 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_26 = m8070(NULL, 1, &m8070_MI);
		t1627 * L_27 = m8072(NULL, L_25, L_26, &m8072_MI);
		V_3 = L_27;
		t1627 * L_28 = (__this->f8);
		t1627 * L_29 = m8070(NULL, 1, &m8070_MI);
		t1627 * L_30 = m8072(NULL, L_28, L_29, &m8072_MI);
		V_4 = L_30;
		t1627 * L_31 = V_3;
		t1627 * L_32 = V_4;
		t1627 * L_33 = m8076(NULL, L_31, L_32, &m8076_MI);
		V_5 = L_33;
		t1627 * L_34 = (__this->f13);
		t1627 * L_35 = V_5;
		t1627 * L_36 = m8064(L_34, L_35, &m8064_MI);
		__this->f6 = L_36;
		t1627 * L_37 = (__this->f6);
		t1627 * L_38 = V_3;
		t1627 * L_39 = m8074(NULL, L_37, L_38, &m8074_MI);
		__this->f9 = L_39;
		t1627 * L_40 = (__this->f6);
		t1627 * L_41 = V_4;
		t1627 * L_42 = m8074(NULL, L_40, L_41, &m8074_MI);
		__this->f10 = L_42;
		t1627 * L_43 = (__this->f8);
		t1627 * L_44 = (__this->f7);
		t1627 * L_45 = m8064(L_43, L_44, &m8064_MI);
		__this->f11 = L_45;
		__this->f4 = 1;
		__this->f2 = 1;
		t1646 * L_46 = (__this->f14);
		if (!L_46)
		{
			goto IL_016e;
		}
	}
	{
		t1646 * L_47 = (__this->f14);
		VirtActionInvoker2< t9 *, t1442 * >::Invoke(&m8190_MI, L_47, __this, (t1442 *)NULL);
	}

IL_016e:
	{
		return;
	}
}
extern "C" int32_t m8198 (t1647 * __this, MethodInfo* method)
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
		t1627 * L_1 = (__this->f12);
		int32_t L_2 = m8050(L_1, &m8050_MI);
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
		int32_t L_7 = m5887(__this, &m5887_MI);
		return L_7;
	}
}
extern "C" bool m8199 (t1647 * __this, MethodInfo* method)
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
		t1627 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_2 = m8082(NULL, L_1, (t1627 *)NULL, &m8082_MI);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		t1627 * L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_4 = m8082(NULL, L_3, (t1627 *)NULL, &m8082_MI);
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
extern MethodInfo m8200_MI;
extern "C" t737* m8200 (t1647 * __this, t737* p0, MethodInfo* method)
{
	t1627 * V_0 = {0};
	t1627 * V_1 = {0};
	t1627 * V_2 = {0};
	t1627 * V_3 = {0};
	t1627 * V_4 = {0};
	t1627 * V_5 = {0};
	t737* V_6 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral828, &m6953_MI);
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
		m8197(__this, &m8197_MI);
	}

IL_0021:
	{
		t737* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_4 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_4, L_3, &m8042_MI);
		V_0 = L_4;
		V_1 = (t1627 *)NULL;
		bool L_5 = (__this->f3);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		t1627 * L_6 = (__this->f12);
		int32_t L_7 = m8050(L_6, &m8050_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_8 = m8047(NULL, L_7, &m8047_MI);
		V_1 = L_8;
		t1627 * L_9 = V_1;
		t1627 * L_10 = (__this->f13);
		t1627 * L_11 = (__this->f12);
		t1627 * L_12 = m8065(L_9, L_10, L_11, &m8065_MI);
		t1627 * L_13 = V_0;
		t1627 * L_14 = m8076(NULL, L_12, L_13, &m8076_MI);
		t1627 * L_15 = (__this->f12);
		t1627 * L_16 = m8074(NULL, L_14, L_15, &m8074_MI);
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
		t1627 * L_18 = V_0;
		t1627 * L_19 = (__this->f9);
		t1627 * L_20 = (__this->f7);
		t1627 * L_21 = m8065(L_18, L_19, L_20, &m8065_MI);
		V_3 = L_21;
		t1627 * L_22 = V_0;
		t1627 * L_23 = (__this->f10);
		t1627 * L_24 = (__this->f8);
		t1627 * L_25 = m8065(L_22, L_23, L_24, &m8065_MI);
		V_4 = L_25;
		t1627 * L_26 = V_4;
		t1627 * L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_28 = m8084(NULL, L_26, L_27, &m8084_MI);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		t1627 * L_29 = (__this->f7);
		t1627 * L_30 = V_4;
		t1627 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_32 = m8072(NULL, L_30, L_31, &m8072_MI);
		t1627 * L_33 = (__this->f11);
		t1627 * L_34 = m8076(NULL, L_32, L_33, &m8076_MI);
		t1627 * L_35 = (__this->f7);
		t1627 * L_36 = m8074(NULL, L_34, L_35, &m8074_MI);
		t1627 * L_37 = m8072(NULL, L_29, L_36, &m8072_MI);
		V_5 = L_37;
		t1627 * L_38 = V_4;
		t1627 * L_39 = (__this->f8);
		t1627 * L_40 = V_5;
		t1627 * L_41 = m8076(NULL, L_39, L_40, &m8076_MI);
		t1627 * L_42 = m8071(NULL, L_38, L_41, &m8071_MI);
		V_2 = L_42;
		goto IL_011a;
	}

IL_00e5:
	{
		t1627 * L_43 = V_3;
		t1627 * L_44 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_45 = m8072(NULL, L_43, L_44, &m8072_MI);
		t1627 * L_46 = (__this->f11);
		t1627 * L_47 = m8076(NULL, L_45, L_46, &m8076_MI);
		t1627 * L_48 = (__this->f7);
		t1627 * L_49 = m8074(NULL, L_47, L_48, &m8074_MI);
		V_5 = L_49;
		t1627 * L_50 = V_4;
		t1627 * L_51 = (__this->f8);
		t1627 * L_52 = V_5;
		t1627 * L_53 = m8076(NULL, L_51, L_52, &m8076_MI);
		t1627 * L_54 = m8071(NULL, L_50, L_53, &m8071_MI);
		V_2 = L_54;
	}

IL_011a:
	{
		goto IL_0149;
	}

IL_011c:
	{
		bool L_55 = m8199(__this, &m8199_MI);
		if (L_55)
		{
			goto IL_0139;
		}
	}
	{
		t1627 * L_56 = V_0;
		t1627 * L_57 = (__this->f6);
		t1627 * L_58 = (__this->f12);
		t1627 * L_59 = m8065(L_56, L_57, L_58, &m8065_MI);
		V_2 = L_59;
		goto IL_0149;
	}

IL_0139:
	{
		t2* L_60 = m7888(NULL, (t2*) &_stringLiteral829, &m7888_MI);
		t1359 * L_61 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_61, L_60, &m5837_MI);
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
		t1627 * L_63 = V_2;
		t1627 * L_64 = V_1;
		t1627 * L_65 = (__this->f12);
		t1627 * L_66 = m8064(L_64, L_65, &m8064_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_67 = m8076(NULL, L_63, L_66, &m8076_MI);
		t1627 * L_68 = (__this->f12);
		t1627 * L_69 = m8074(NULL, L_67, L_68, &m8074_MI);
		V_2 = L_69;
		t1627 * L_70 = V_1;
		m8060(L_70, &m8060_MI);
	}

IL_0175:
	{
		t1627 * L_71 = V_2;
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
		t737* L_73 = m8207(__this, L_71, ((int32_t)((int32_t)L_72>>(int32_t)3)), &m8207_MI);
		V_6 = L_73;
		t1627 * L_74 = V_0;
		m8060(L_74, &m8060_MI);
		t1627 * L_75 = V_2;
		m8060(L_75, &m8060_MI);
		t737* L_76 = V_6;
		return L_76;
	}
}
extern MethodInfo m8201_MI;
extern "C" t737* m8201 (t1647 * __this, t737* p0, MethodInfo* method)
{
	t1627 * V_0 = {0};
	t1627 * V_1 = {0};
	t737* V_2 = {0};
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_1, (t2*) &_stringLiteral830, &m6953_MI);
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
		m8197(__this, &m8197_MI);
	}

IL_0021:
	{
		t737* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_4 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_4, L_3, &m8042_MI);
		V_0 = L_4;
		t1627 * L_5 = V_0;
		t1627 * L_6 = (__this->f13);
		t1627 * L_7 = (__this->f12);
		t1627 * L_8 = m8065(L_5, L_6, L_7, &m8065_MI);
		V_1 = L_8;
		t1627 * L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
		t737* L_11 = m8207(__this, L_9, ((int32_t)((int32_t)L_10>>(int32_t)3)), &m8207_MI);
		V_2 = L_11;
		t1627 * L_12 = V_0;
		m8060(L_12, &m8060_MI);
		t1627 * L_13 = V_1;
		m8060(L_13, &m8060_MI);
		t737* L_14 = V_2;
		return L_14;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t1356  m8202 (t1647 * __this, bool p0, MethodInfo* method)
{
	static bool m8202_init;
	if (!m8202_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8202_init = true;
	}
	t1356  V_0 = {0};
	t737* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral831, &m7888_MI);
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_2, L_1, &m6953_MI);
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
		m8197(__this, &m8197_MI);
	}

IL_0026:
	{
		Initobj (InitializedTypeInfo(&t1356_TI), (&V_0));
		t1627 * L_4 = (__this->f13);
		t737* L_5 = m8056(L_4, &m8056_MI);
		(&V_0)->f7 = L_5;
		t1627 * L_6 = (__this->f12);
		t737* L_7 = m8056(L_6, &m8056_MI);
		(&V_0)->f6 = L_7;
		bool L_8 = p0;
		if (!L_8)
		{
			goto IL_018e;
		}
	}
	{
		t1627 * L_9 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_10 = m8082(NULL, L_9, (t1627 *)NULL, &m8082_MI);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		t1359 * L_11 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_11, (t2*) &_stringLiteral832, &m5837_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0071:
	{
		t1627 * L_12 = (__this->f6);
		t737* L_13 = m8056(L_12, &m8056_MI);
		(&V_0)->f2 = L_13;
		t737* L_14 = ((&V_0)->f2);
		t737* L_15 = ((&V_0)->f6);
		if ((((int32_t)(((int32_t)(((t121 *)L_14)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_00d2;
		}
	}
	{
		t737* L_16 = ((&V_0)->f6);
		V_1 = ((t737*)SZArrayNew(t737_TI_var, (((int32_t)(((t121 *)L_16)->max_length)))));
		t737* L_17 = ((&V_0)->f2);
		t737* L_18 = V_1;
		t737* L_19 = V_1;
		t737* L_20 = ((&V_0)->f2);
		t737* L_21 = ((&V_0)->f2);
		m5834(NULL, (t121 *)(t121 *)L_17, 0, (t121 *)(t121 *)L_18, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_19)->max_length)))-(int32_t)(((int32_t)(((t121 *)L_20)->max_length))))), (((int32_t)(((t121 *)L_21)->max_length))), &m5834_MI);
		t737* L_22 = V_1;
		(&V_0)->f2 = L_22;
	}

IL_00d2:
	{
		t1627 * L_23 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_24 = m8083(NULL, L_23, (t1627 *)NULL, &m8083_MI);
		if (!L_24)
		{
			goto IL_018e;
		}
	}
	{
		t1627 * L_25 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_26 = m8083(NULL, L_25, (t1627 *)NULL, &m8083_MI);
		if (!L_26)
		{
			goto IL_018e;
		}
	}
	{
		t1627 * L_27 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_28 = m8083(NULL, L_27, (t1627 *)NULL, &m8083_MI);
		if (!L_28)
		{
			goto IL_018e;
		}
	}
	{
		t1627 * L_29 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_30 = m8083(NULL, L_29, (t1627 *)NULL, &m8083_MI);
		if (!L_30)
		{
			goto IL_018e;
		}
	}
	{
		t1627 * L_31 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_32 = m8083(NULL, L_31, (t1627 *)NULL, &m8083_MI);
		if (!L_32)
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8198_MI, __this);
		V_2 = ((int32_t)((int32_t)L_33>>(int32_t)4));
		t1627 * L_34 = (__this->f7);
		int32_t L_35 = V_2;
		t737* L_36 = m8207(__this, L_34, L_35, &m8207_MI);
		(&V_0)->f0 = L_36;
		t1627 * L_37 = (__this->f8);
		int32_t L_38 = V_2;
		t737* L_39 = m8207(__this, L_37, L_38, &m8207_MI);
		(&V_0)->f1 = L_39;
		t1627 * L_40 = (__this->f9);
		int32_t L_41 = V_2;
		t737* L_42 = m8207(__this, L_40, L_41, &m8207_MI);
		(&V_0)->f3 = L_42;
		t1627 * L_43 = (__this->f10);
		int32_t L_44 = V_2;
		t737* L_45 = m8207(__this, L_43, L_44, &m8207_MI);
		(&V_0)->f4 = L_45;
		t1627 * L_46 = (__this->f11);
		int32_t L_47 = V_2;
		t737* L_48 = m8207(__this, L_46, L_47, &m8207_MI);
		(&V_0)->f5 = L_48;
	}

IL_018e:
	{
		t1356  L_49 = V_0;
		return L_49;
	}
}
extern MethodInfo m8203_MI;
extern "C" void m8203 (t1647 * __this, t1356  p0, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	t1627 * V_2 = {0};
	t1627 * V_3 = {0};
	t1627 * V_4 = {0};
	t1627 * V_5 = {0};
	int32_t G_B22_0 = 0;
	t1647 * G_B25_0 = {0};
	t1647 * G_B23_0 = {0};
	t1647 * G_B24_0 = {0};
	int32_t G_B26_0 = 0;
	t1647 * G_B26_1 = {0};
	int32_t G_B35_0 = 0;
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral831, &m7888_MI);
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_2, L_1, &m6953_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		t737* L_3 = ((&p0)->f7);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		t2* L_4 = m7888(NULL, (t2*) &_stringLiteral833, &m7888_MI);
		t1359 * L_5 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_5, L_4, &m5837_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		t737* L_6 = ((&p0)->f6);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		t2* L_7 = m7888(NULL, (t2*) &_stringLiteral834, &m7888_MI);
		t1359 * L_8 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_8, L_7, &m5837_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t737* L_9 = ((&p0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_10 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_10, L_9, &m8042_MI);
		__this->f13 = L_10;
		t737* L_11 = ((&p0)->f6);
		t1627 * L_12 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_12, L_11, &m8042_MI);
		__this->f12 = L_12;
		t737* L_13 = ((&p0)->f2);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		t737* L_14 = ((&p0)->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_15 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_15, L_14, &m8042_MI);
		__this->f6 = L_15;
	}

IL_0089:
	{
		t737* L_16 = ((&p0)->f3);
		if (!L_16)
		{
			goto IL_00a4;
		}
	}
	{
		t737* L_17 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_18 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_18, L_17, &m8042_MI);
		__this->f9 = L_18;
	}

IL_00a4:
	{
		t737* L_19 = ((&p0)->f4);
		if (!L_19)
		{
			goto IL_00bf;
		}
	}
	{
		t737* L_20 = ((&p0)->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_21 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_21, L_20, &m8042_MI);
		__this->f10 = L_21;
	}

IL_00bf:
	{
		t737* L_22 = ((&p0)->f5);
		if (!L_22)
		{
			goto IL_00da;
		}
	}
	{
		t737* L_23 = ((&p0)->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_24 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_24, L_23, &m8042_MI);
		__this->f11 = L_24;
	}

IL_00da:
	{
		t737* L_25 = ((&p0)->f0);
		if (!L_25)
		{
			goto IL_00f5;
		}
	}
	{
		t737* L_26 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_27 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_27, L_26, &m8042_MI);
		__this->f7 = L_27;
	}

IL_00f5:
	{
		t737* L_28 = ((&p0)->f1);
		if (!L_28)
		{
			goto IL_0110;
		}
	}
	{
		t737* L_29 = ((&p0)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_30 = (t1627 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1627_TI));
		m8042(L_30, L_29, &m8042_MI);
		__this->f8 = L_30;
	}

IL_0110:
	{
		__this->f4 = 1;
		t1627 * L_31 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_32 = m8083(NULL, L_31, (t1627 *)NULL, &m8083_MI);
		if (!L_32)
		{
			goto IL_0141;
		}
	}
	{
		t1627 * L_33 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_34 = m8083(NULL, L_33, (t1627 *)NULL, &m8083_MI);
		if (!L_34)
		{
			goto IL_0141;
		}
	}
	{
		t1627 * L_35 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_36 = m8083(NULL, L_35, (t1627 *)NULL, &m8083_MI);
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
		t1627 * L_38 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_39 = m8083(NULL, L_38, (t1627 *)NULL, &m8083_MI);
		G_B24_0 = G_B23_0;
		if (!L_39)
		{
			G_B25_0 = G_B23_0;
			goto IL_0163;
		}
	}
	{
		t1627 * L_40 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_41 = m8083(NULL, L_40, (t1627 *)NULL, &m8083_MI);
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
		t1627 * L_43 = (__this->f12);
		t1627 * L_44 = (__this->f7);
		t1627 * L_45 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_46 = m8076(NULL, L_44, L_45, &m8076_MI);
		bool L_47 = m8082(NULL, L_43, L_46, &m8082_MI);
		V_1 = L_47;
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_022f;
		}
	}
	{
		t1627 * L_49 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_50 = m8070(NULL, 1, &m8070_MI);
		t1627 * L_51 = m8072(NULL, L_49, L_50, &m8072_MI);
		V_2 = L_51;
		t1627 * L_52 = (__this->f8);
		t1627 * L_53 = m8070(NULL, 1, &m8070_MI);
		t1627 * L_54 = m8072(NULL, L_52, L_53, &m8072_MI);
		V_3 = L_54;
		t1627 * L_55 = V_2;
		t1627 * L_56 = V_3;
		t1627 * L_57 = m8076(NULL, L_55, L_56, &m8076_MI);
		V_4 = L_57;
		t1627 * L_58 = (__this->f13);
		t1627 * L_59 = V_4;
		t1627 * L_60 = m8064(L_58, L_59, &m8064_MI);
		V_5 = L_60;
		t1627 * L_61 = (__this->f6);
		t1627 * L_62 = V_5;
		bool L_63 = m8082(NULL, L_61, L_62, &m8082_MI);
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
		t1627 * L_66 = (__this->f9);
		t1627 * L_67 = V_5;
		t1627 * L_68 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_69 = m8074(NULL, L_67, L_68, &m8074_MI);
		bool L_70 = m8082(NULL, L_66, L_69, &m8082_MI);
		if (!L_70)
		{
			goto IL_022d;
		}
	}
	{
		t1627 * L_71 = (__this->f10);
		t1627 * L_72 = V_5;
		t1627 * L_73 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		t1627 * L_74 = m8074(NULL, L_72, L_73, &m8074_MI);
		bool L_75 = m8082(NULL, L_71, L_74, &m8082_MI);
		if (!L_75)
		{
			goto IL_022d;
		}
	}
	{
		t1627 * L_76 = (__this->f11);
		t1627 * L_77 = (__this->f8);
		t1627 * L_78 = (__this->f7);
		t1627 * L_79 = m8064(L_77, L_78, &m8064_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_80 = m8082(NULL, L_76, L_79, &m8082_MI);
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
		t2* L_82 = m7888(NULL, (t2*) &_stringLiteral835, &m7888_MI);
		t1359 * L_83 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_83, L_82, &m5837_MI);
		il2cpp_codegen_raise_exception(L_83);
	}

IL_0242:
	{
		return;
	}
}
extern "C" void m8204 (t1647 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_010e;
		}
	}
	{
		t1627 * L_1 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_2 = m8083(NULL, L_1, (t1627 *)NULL, &m8083_MI);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1627 * L_3 = (__this->f6);
		m8060(L_3, &m8060_MI);
		__this->f6 = (t1627 *)NULL;
	}

IL_002b:
	{
		t1627 * L_4 = (__this->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_5 = m8083(NULL, L_4, (t1627 *)NULL, &m8083_MI);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		t1627 * L_6 = (__this->f7);
		m8060(L_6, &m8060_MI);
		__this->f7 = (t1627 *)NULL;
	}

IL_004b:
	{
		t1627 * L_7 = (__this->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_8 = m8083(NULL, L_7, (t1627 *)NULL, &m8083_MI);
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		t1627 * L_9 = (__this->f8);
		m8060(L_9, &m8060_MI);
		__this->f8 = (t1627 *)NULL;
	}

IL_006b:
	{
		t1627 * L_10 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_11 = m8083(NULL, L_10, (t1627 *)NULL, &m8083_MI);
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		t1627 * L_12 = (__this->f9);
		m8060(L_12, &m8060_MI);
		__this->f9 = (t1627 *)NULL;
	}

IL_008b:
	{
		t1627 * L_13 = (__this->f10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_14 = m8083(NULL, L_13, (t1627 *)NULL, &m8083_MI);
		if (!L_14)
		{
			goto IL_00ab;
		}
	}
	{
		t1627 * L_15 = (__this->f10);
		m8060(L_15, &m8060_MI);
		__this->f10 = (t1627 *)NULL;
	}

IL_00ab:
	{
		t1627 * L_16 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_17 = m8083(NULL, L_16, (t1627 *)NULL, &m8083_MI);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		t1627 * L_18 = (__this->f11);
		m8060(L_18, &m8060_MI);
		__this->f11 = (t1627 *)NULL;
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
		t1627 * L_20 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_21 = m8083(NULL, L_20, (t1627 *)NULL, &m8083_MI);
		if (!L_21)
		{
			goto IL_00ee;
		}
	}
	{
		t1627 * L_22 = (__this->f13);
		m8060(L_22, &m8060_MI);
		__this->f13 = (t1627 *)NULL;
	}

IL_00ee:
	{
		t1627 * L_23 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1627_TI));
		bool L_24 = m8083(NULL, L_23, (t1627 *)NULL, &m8083_MI);
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		t1627 * L_25 = (__this->f12);
		m8060(L_25, &m8060_MI);
		__this->f12 = (t1627 *)NULL;
	}

IL_010e:
	{
		__this->f5 = 1;
		return;
	}
}
extern MethodInfo m8205_MI;
extern "C" t2* m8205 (t1647 * __this, bool p0, MethodInfo* method)
{
	t328 * V_0 = {0};
	t1356  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		bool L_1 = p0;
		t1356  L_2 = (t1356 )VirtFuncInvoker1< t1356 , bool >::Invoke(&m8202_MI, __this, L_1);
		V_1 = L_2;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			t328 * L_3 = V_0;
			m1207(L_3, (t2*) &_stringLiteral836, &m1207_MI);
			t328 * L_4 = V_0;
			m1207(L_4, (t2*) &_stringLiteral837, &m1207_MI);
			t328 * L_5 = V_0;
			t737* L_6 = ((&V_1)->f6);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_7 = m4364(NULL, L_6, &m4364_MI);
			m1207(L_5, L_7, &m1207_MI);
			t328 * L_8 = V_0;
			m1207(L_8, (t2*) &_stringLiteral838, &m1207_MI);
			t328 * L_9 = V_0;
			m1207(L_9, (t2*) &_stringLiteral839, &m1207_MI);
			t328 * L_10 = V_0;
			t737* L_11 = ((&V_1)->f7);
			t2* L_12 = m4364(NULL, L_11, &m4364_MI);
			m1207(L_10, L_12, &m1207_MI);
			t328 * L_13 = V_0;
			m1207(L_13, (t2*) &_stringLiteral840, &m1207_MI);
			bool L_14 = p0;
			if (!L_14)
			{
				goto IL_01a5;
			}
		}

IL_0076:
		{
			t737* L_15 = ((&V_1)->f0);
			if (!L_15)
			{
				goto IL_00aa;
			}
		}

IL_007f:
		{
			t328 * L_16 = V_0;
			m1207(L_16, (t2*) &_stringLiteral841, &m1207_MI);
			t328 * L_17 = V_0;
			t737* L_18 = ((&V_1)->f0);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_19 = m4364(NULL, L_18, &m4364_MI);
			m1207(L_17, L_19, &m1207_MI);
			t328 * L_20 = V_0;
			m1207(L_20, (t2*) &_stringLiteral842, &m1207_MI);
		}

IL_00aa:
		{
			t737* L_21 = ((&V_1)->f1);
			if (!L_21)
			{
				goto IL_00de;
			}
		}

IL_00b3:
		{
			t328 * L_22 = V_0;
			m1207(L_22, (t2*) &_stringLiteral843, &m1207_MI);
			t328 * L_23 = V_0;
			t737* L_24 = ((&V_1)->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_25 = m4364(NULL, L_24, &m4364_MI);
			m1207(L_23, L_25, &m1207_MI);
			t328 * L_26 = V_0;
			m1207(L_26, (t2*) &_stringLiteral844, &m1207_MI);
		}

IL_00de:
		{
			t737* L_27 = ((&V_1)->f3);
			if (!L_27)
			{
				goto IL_0112;
			}
		}

IL_00e7:
		{
			t328 * L_28 = V_0;
			m1207(L_28, (t2*) &_stringLiteral845, &m1207_MI);
			t328 * L_29 = V_0;
			t737* L_30 = ((&V_1)->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_31 = m4364(NULL, L_30, &m4364_MI);
			m1207(L_29, L_31, &m1207_MI);
			t328 * L_32 = V_0;
			m1207(L_32, (t2*) &_stringLiteral846, &m1207_MI);
		}

IL_0112:
		{
			t737* L_33 = ((&V_1)->f4);
			if (!L_33)
			{
				goto IL_0146;
			}
		}

IL_011b:
		{
			t328 * L_34 = V_0;
			m1207(L_34, (t2*) &_stringLiteral847, &m1207_MI);
			t328 * L_35 = V_0;
			t737* L_36 = ((&V_1)->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_37 = m4364(NULL, L_36, &m4364_MI);
			m1207(L_35, L_37, &m1207_MI);
			t328 * L_38 = V_0;
			m1207(L_38, (t2*) &_stringLiteral848, &m1207_MI);
		}

IL_0146:
		{
			t737* L_39 = ((&V_1)->f5);
			if (!L_39)
			{
				goto IL_017a;
			}
		}

IL_014f:
		{
			t328 * L_40 = V_0;
			m1207(L_40, (t2*) &_stringLiteral849, &m1207_MI);
			t328 * L_41 = V_0;
			t737* L_42 = ((&V_1)->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_43 = m4364(NULL, L_42, &m4364_MI);
			m1207(L_41, L_43, &m1207_MI);
			t328 * L_44 = V_0;
			m1207(L_44, (t2*) &_stringLiteral850, &m1207_MI);
		}

IL_017a:
		{
			t328 * L_45 = V_0;
			m1207(L_45, (t2*) &_stringLiteral851, &m1207_MI);
			t328 * L_46 = V_0;
			t737* L_47 = ((&V_1)->f2);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
			t2* L_48 = m4364(NULL, L_47, &m4364_MI);
			m1207(L_46, L_48, &m1207_MI);
			t328 * L_49 = V_0;
			m1207(L_49, (t2*) &_stringLiteral852, &m1207_MI);
		}

IL_01a5:
		{
			t328 * L_50 = V_0;
			m1207(L_50, (t2*) &_stringLiteral853, &m1207_MI);
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
			t737* L_51 = ((&V_1)->f0);
			if (!L_51)
			{
				goto IL_01d6;
			}
		}

IL_01c0:
		{
			t737* L_52 = ((&V_1)->f0);
			t737* L_53 = ((&V_1)->f0);
			m1199(NULL, (t121 *)(t121 *)L_52, 0, (((int32_t)(((t121 *)L_53)->max_length))), &m1199_MI);
		}

IL_01d6:
		{
			t737* L_54 = ((&V_1)->f1);
			if (!L_54)
			{
				goto IL_01f5;
			}
		}

IL_01df:
		{
			t737* L_55 = ((&V_1)->f1);
			t737* L_56 = ((&V_1)->f1);
			m1199(NULL, (t121 *)(t121 *)L_55, 0, (((int32_t)(((t121 *)L_56)->max_length))), &m1199_MI);
		}

IL_01f5:
		{
			t737* L_57 = ((&V_1)->f3);
			if (!L_57)
			{
				goto IL_0214;
			}
		}

IL_01fe:
		{
			t737* L_58 = ((&V_1)->f3);
			t737* L_59 = ((&V_1)->f3);
			m1199(NULL, (t121 *)(t121 *)L_58, 0, (((int32_t)(((t121 *)L_59)->max_length))), &m1199_MI);
		}

IL_0214:
		{
			t737* L_60 = ((&V_1)->f4);
			if (!L_60)
			{
				goto IL_0233;
			}
		}

IL_021d:
		{
			t737* L_61 = ((&V_1)->f4);
			t737* L_62 = ((&V_1)->f4);
			m1199(NULL, (t121 *)(t121 *)L_61, 0, (((int32_t)(((t121 *)L_62)->max_length))), &m1199_MI);
		}

IL_0233:
		{
			t737* L_63 = ((&V_1)->f5);
			if (!L_63)
			{
				goto IL_0252;
			}
		}

IL_023c:
		{
			t737* L_64 = ((&V_1)->f5);
			t737* L_65 = ((&V_1)->f5);
			m1199(NULL, (t121 *)(t121 *)L_64, 0, (((int32_t)(((t121 *)L_65)->max_length))), &m1199_MI);
		}

IL_0252:
		{
			t737* L_66 = ((&V_1)->f2);
			if (!L_66)
			{
				goto IL_0271;
			}
		}

IL_025b:
		{
			t737* L_67 = ((&V_1)->f2);
			t737* L_68 = ((&V_1)->f2);
			m1199(NULL, (t121 *)(t121 *)L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))), &m1199_MI);
		}

IL_0271:
		{
			il2cpp_codegen_raise_exception(__exception_local);
			goto IL_0275;
		}
	} // end catch (depth: 1)

IL_0275:
	{
		t328 * L_69 = V_0;
		t2* L_70 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_69);
		return L_70;
	}
}
extern MethodInfo m8206_MI;
extern "C" bool m8206 (t1647 * __this, MethodInfo* method)
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
extern TypeInfo* t737_TI_var;
extern "C" t737* m8207 (t1647 * __this, t1627 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8207_init;
	if (!m8207_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8207_init = true;
	}
	t737* V_0 = {0};
	t737* V_1 = {0};
	{
		t1627 * L_0 = p0;
		t737* L_1 = m8056(L_0, &m8056_MI);
		V_0 = L_1;
		t737* L_2 = V_0;
		int32_t L_3 = p1;
		if ((((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}
	{
		t737* L_4 = V_0;
		return L_4;
	}

IL_000f:
	{
		int32_t L_5 = p1;
		V_1 = ((t737*)SZArrayNew(t737_TI_var, L_5));
		t737* L_6 = V_0;
		t737* L_7 = V_1;
		int32_t L_8 = p1;
		t737* L_9 = V_0;
		t737* L_10 = V_0;
		m5834(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8-(int32_t)(((int32_t)(((t121 *)L_9)->max_length))))), (((int32_t)(((t121 *)L_10)->max_length))), &m5834_MI);
		t737* L_11 = V_0;
		t737* L_12 = V_0;
		m1199(NULL, (t121 *)(t121 *)L_11, 0, (((int32_t)(((t121 *)L_12)->max_length))), &m1199_MI);
		t737* L_13 = V_1;
		return L_13;
	}
}
#include "t1648.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1648_TI;
#include "t1648MD.h"

#include "t1440.h"
#include "t1550.h"
#include "t1466.h"
#include "t8.h"
#include "t1352.h"
#include "t132.h"
#include "t909.h"
#include "t570.h"
#include "t1419.h"
extern TypeInfo t1440_TI;
extern TypeInfo t1550_TI;
extern TypeInfo t121_TI;
extern TypeInfo t158_TI;
extern TypeInfo t1466_TI;
extern TypeInfo t8_TI;
extern TypeInfo t1352_TI;
extern TypeInfo t132_TI;
extern TypeInfo t909_TI;
extern TypeInfo t570_TI;
extern TypeInfo t1419_TI;
#include "t1440MD.h"
#include "t1636MD.h"
#include "t160MD.h"
#include "t1532MD.h"
#include "t8MD.h"
#include "t2MD.h"
#include "t1352MD.h"
#include "t132MD.h"
#include "t909MD.h"
#include "t570MD.h"
#include "t1419MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m7088_MI;
extern MethodInfo m336_MI;
extern MethodInfo m7083_MI;
extern MethodInfo m8102_MI;
extern MethodInfo m5788_MI;
extern MethodInfo m7889_MI;
extern MethodInfo m11611_MI;
extern MethodInfo m7084_MI;
extern MethodInfo m8211_MI;
extern MethodInfo m6937_MI;
extern MethodInfo m7087_MI;
extern MethodInfo m12026_MI;
extern MethodInfo m8214_MI;
extern MethodInfo m8215_MI;
extern MethodInfo m8216_MI;
extern MethodInfo m8217_MI;
extern MethodInfo m651_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5815_MI;
extern MethodInfo m339_MI;
extern MethodInfo m4402_MI;
extern MethodInfo m5761_MI;
extern MethodInfo m8218_MI;
extern MethodInfo m10405_MI;
extern MethodInfo m8220_MI;
extern MethodInfo m8221_MI;
extern MethodInfo m8213_MI;
extern MethodInfo m6929_MI;
extern MethodInfo m6930_MI;
extern MethodInfo m590_MI;
extern MethodInfo m8222_MI;
extern MethodInfo m8223_MI;
extern MethodInfo m8224_MI;
extern MethodInfo m8225_MI;


extern MethodInfo m8208_MI;
extern TypeInfo* t737_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m8208 (t1648 * __this, t1440 * p0, bool p1, t737* p2, MethodInfo* method)
{
	static bool m8208_init;
	if (!m8208_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8208_init = true;
	}
	t2* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t1440 * L_0 = p0;
		__this->f0 = L_0;
		bool L_1 = p1;
		__this->f1 = L_1;
		t1440 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7083_MI, L_2);
		__this->f2 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		t737* L_4 = p2;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = (__this->f2);
		t737* L_6 = m8102(NULL, L_5, &m8102_MI);
		p2 = L_6;
		goto IL_004a;
	}

IL_003b:
	{
		t737* L_7 = p2;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_7);
		p2 = ((t737*)Castclass(L_8, t737_TI_var));
	}

IL_004a:
	{
		t737* L_9 = p2;
		int32_t L_10 = (__this->f2);
		if ((((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))) >= ((int32_t)L_10)))
		{
			goto IL_0086;
		}
	}
	{
		t158* L_11 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t737* L_12 = p2;
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
		t2* L_19 = m7889(NULL, (t2*) &_stringLiteral1339, L_15, &m7889_MI);
		V_0 = L_19;
		t2* L_20 = V_0;
		t1359 * L_21 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_21, L_20, &m5837_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0086:
	{
		int32_t L_22 = (__this->f2);
		__this->f3 = ((t737*)SZArrayNew(t737_TI_var, L_22));
		t737* L_23 = p2;
		t737* L_24 = (__this->f3);
		int32_t L_25 = (__this->f2);
		t737* L_26 = p2;
		int32_t L_27 = m11611(NULL, L_25, (((int32_t)(((t121 *)L_26)->max_length))), &m11611_MI);
		m5834(NULL, (t121 *)(t121 *)L_23, 0, (t121 *)(t121 *)L_24, 0, L_27, &m5834_MI);
		int32_t L_28 = (__this->f2);
		__this->f4 = ((t737*)SZArrayNew(t737_TI_var, L_28));
		t1440 * L_29 = (__this->f0);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7084_MI, L_29);
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
		__this->f5 = ((t737*)SZArrayNew(t737_TI_var, L_34));
		int32_t L_35 = (__this->f2);
		__this->f6 = ((t737*)SZArrayNew(t737_TI_var, L_35));
		return;
	}
}
extern MethodInfo m8209_MI;
extern "C" void m8209 (t1648 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8211_MI, __this, 1);
		m6937(NULL, __this, &m6937_MI);
		return;
	}
}
extern MethodInfo m8210_MI;
extern "C" void m8210 (t1648 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8211_MI, __this, 0);
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
extern "C" void m8211 (t1648 * __this, bool p0, MethodInfo* method)
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
		t737* L_2 = (__this->f3);
		int32_t L_3 = (__this->f2);
		m1199(NULL, (t121 *)(t121 *)L_2, 0, L_3, &m1199_MI);
		__this->f3 = (t737*)NULL;
		t737* L_4 = (__this->f4);
		int32_t L_5 = (__this->f2);
		m1199(NULL, (t121 *)(t121 *)L_4, 0, L_5, &m1199_MI);
		__this->f4 = (t737*)NULL;
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
extern MethodInfo m8212_MI;
extern "C" bool m8212 (t1648 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" void m8213 (t1648 * __this, t737* p0, t737* p1, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t1440 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7087_MI, L_0);
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
		t737* L_3 = p0;
		t737* L_4 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m12026_MI, __this, L_3, L_4);
		goto IL_0081;
	}

IL_0034:
	{
		t737* L_5 = p0;
		t737* L_6 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8214_MI, __this, L_5, L_6);
		goto IL_0081;
	}

IL_003e:
	{
		t737* L_7 = p0;
		t737* L_8 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8215_MI, __this, L_7, L_8);
		goto IL_0081;
	}

IL_0048:
	{
		t737* L_9 = p0;
		t737* L_10 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8216_MI, __this, L_9, L_10);
		goto IL_0081;
	}

IL_0052:
	{
		t737* L_11 = p0;
		t737* L_12 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8217_MI, __this, L_11, L_12);
		goto IL_0081;
	}

IL_005c:
	{
		t1440 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7087_MI, L_13);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t1466_TI), &L_15);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_16);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m610(NULL, (t2*) &_stringLiteral1340, L_17, &m610_MI);
		t1352 * L_19 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m5815(L_19, L_18, &m5815_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0081:
	{
		return;
	}
}
extern "C" void m8214 (t1648 * __this, t737* p0, t737* p1, MethodInfo* method)
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
		t737* L_1 = (__this->f3);
		int32_t L_2 = V_0;
		uint8_t* L_3 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2));
		t737* L_4 = p0;
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
		t737* L_10 = (__this->f3);
		t737* L_11 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m12026_MI, __this, L_10, L_11);
		t737* L_12 = p1;
		t737* L_13 = (__this->f3);
		int32_t L_14 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m5834_MI);
		goto IL_00aa;
	}

IL_0050:
	{
		t737* L_15 = p0;
		t737* L_16 = (__this->f4);
		int32_t L_17 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_15, 0, (t121 *)(t121 *)L_16, 0, L_17, &m5834_MI);
		t737* L_18 = p0;
		t737* L_19 = p1;
		VirtActionInvoker2< t737*, t737* >::Invoke(&m12026_MI, __this, L_18, L_19);
		V_1 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		t737* L_20 = p1;
		int32_t L_21 = V_1;
		uint8_t* L_22 = ((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21));
		t737* L_23 = (__this->f3);
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
		t737* L_29 = (__this->f4);
		t737* L_30 = (__this->f3);
		int32_t L_31 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_29, 0, (t121 *)(t121 *)L_30, 0, L_31, &m5834_MI);
	}

IL_00aa:
	{
		return;
	}
}
extern "C" void m8215 (t1648 * __this, t737* p0, t737* p1, MethodInfo* method)
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
		t737* L_1 = (__this->f3);
		t737* L_2 = (__this->f4);
		VirtActionInvoker2< t737*, t737* >::Invoke(&m12026_MI, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		t737* L_3 = p1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		t737* L_6 = (__this->f4);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t737* L_9 = p0;
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
		t737* L_16 = (__this->f3);
		int32_t L_17 = (__this->f7);
		t737* L_18 = (__this->f3);
		int32_t L_19 = (__this->f2);
		int32_t L_20 = (__this->f7);
		m5834(NULL, (t121 *)(t121 *)L_16, L_17, (t121 *)(t121 *)L_18, 0, ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m5834_MI);
		t737* L_21 = p1;
		int32_t L_22 = V_0;
		t737* L_23 = (__this->f3);
		int32_t L_24 = (__this->f2);
		int32_t L_25 = (__this->f7);
		int32_t L_26 = (__this->f7);
		m5834(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)), L_26, &m5834_MI);
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
		t737* L_30 = (__this->f3);
		t737* L_31 = (__this->f4);
		VirtActionInvoker2< t737*, t737* >::Invoke(&m12026_MI, __this, L_30, L_31);
		__this->f1 = 0;
		t737* L_32 = (__this->f3);
		int32_t L_33 = (__this->f7);
		t737* L_34 = (__this->f3);
		int32_t L_35 = (__this->f2);
		int32_t L_36 = (__this->f7);
		m5834(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, 0, ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m5834_MI);
		t737* L_37 = p0;
		int32_t L_38 = V_2;
		t737* L_39 = (__this->f3);
		int32_t L_40 = (__this->f2);
		int32_t L_41 = (__this->f7);
		int32_t L_42 = (__this->f7);
		m5834(NULL, (t121 *)(t121 *)L_37, L_38, (t121 *)(t121 *)L_39, ((int32_t)((int32_t)L_40-(int32_t)L_41)), L_42, &m5834_MI);
		V_3 = 0;
		goto IL_012b;
	}

IL_0113:
	{
		t737* L_43 = p1;
		int32_t L_44 = V_3;
		int32_t L_45 = V_2;
		t737* L_46 = (__this->f4);
		int32_t L_47 = V_3;
		int32_t L_48 = L_47;
		t737* L_49 = p0;
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
extern "C" void m8216 (t1648 * __this, t737* p0, t737* p1, MethodInfo* method)
{
	{
		t1359 * L_0 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_0, (t2*) &_stringLiteral1341, &m5837_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8217 (t1648 * __this, t737* p0, t737* p1, MethodInfo* method)
{
	{
		t1359 * L_0 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_0, (t2*) &_stringLiteral1342, &m5837_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" void m8218 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral806, &m339_MI);
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
		m4402(L_3, (t2*) &_stringLiteral807, (t2*) &_stringLiteral808, &m4402_MI);
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
		m4402(L_5, (t2*) &_stringLiteral809, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = p1;
		t737* L_7 = p0;
		int32_t L_8 = p2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0053;
		}
	}
	{
		t2* L_9 = m7888(NULL, (t2*) &_stringLiteral810, &m7888_MI);
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_10, (t2*) &_stringLiteral806, L_9, &m5761_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0053:
	{
		return;
	}
}
extern MethodInfo m8219_MI;
extern "C" int32_t m8219 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, t737* p3, int32_t p4, MethodInfo* method)
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
		m6953(L_1, (t2*) &_stringLiteral1343, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t737* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8218(__this, L_2, L_3, L_4, &m8218_MI);
		t737* L_5 = p3;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_6 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_6, (t2*) &_stringLiteral811, &m339_MI);
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
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_8, (t2*) &_stringLiteral812, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0040:
	{
		t737* L_9 = p3;
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
		t1440 * L_14 = (__this->f0);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		t1440 * L_16 = (__this->f0);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0087;
		}
	}

IL_0072:
	{
		t2* L_18 = m7888(NULL, (t2*) &_stringLiteral810, &m7888_MI);
		t1359 * L_19 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m10405(L_19, (t2*) &_stringLiteral811, L_18, &m10405_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0087:
	{
		bool L_20 = m8220(__this, &m8220_MI);
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
		t2* L_23 = m7888(NULL, (t2*) &_stringLiteral810, &m7888_MI);
		t1359 * L_24 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m10405(L_24, (t2*) &_stringLiteral811, L_23, &m10405_MI);
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
		t737* L_26 = p0;
		int32_t L_27 = p1;
		t737* L_28 = p3;
		int32_t L_29 = (__this->f2);
		if ((!(((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))-(int32_t)L_27))-(int32_t)(((int32_t)(((t121 *)L_28)->max_length)))))) == ((uint32_t)L_29))))
		{
			goto IL_00d4;
		}
	}
	{
		t737* L_30 = p3;
		int32_t L_31 = p4;
		p2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_30)->max_length)))-(int32_t)L_31));
		goto IL_00e9;
	}

IL_00d4:
	{
		t2* L_32 = m7888(NULL, (t2*) &_stringLiteral810, &m7888_MI);
		t1359 * L_33 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m10405(L_33, (t2*) &_stringLiteral811, L_32, &m10405_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00e9:
	{
		t737* L_34 = p0;
		int32_t L_35 = p1;
		int32_t L_36 = p2;
		t737* L_37 = p3;
		int32_t L_38 = p4;
		int32_t L_39 = m8221(__this, L_34, L_35, L_36, L_37, L_38, &m8221_MI);
		return L_39;
	}
}
extern "C" bool m8220 (t1648 * __this, MethodInfo* method)
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
		t1440 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		t1440 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_3);
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
extern "C" int32_t m8221 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, t737* p3, int32_t p4, MethodInfo* method)
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
		t1359 * L_5 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_5, (t2*) &_stringLiteral1344, &m5837_MI);
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
		bool L_8 = m8220(__this, &m8220_MI);
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
		t737* L_11 = (__this->f5);
		t737* L_12 = (__this->f6);
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8213_MI, __this, L_11, L_12);
		t737* L_13 = (__this->f6);
		t737* L_14 = p3;
		int32_t L_15 = p4;
		int32_t L_16 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_13, 0, (t121 *)(t121 *)L_14, L_15, L_16, &m5834_MI);
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
		t737* L_21 = p0;
		int32_t L_22 = V_0;
		t737* L_23 = (__this->f5);
		int32_t L_24 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_21, L_22, (t121 *)(t121 *)L_23, 0, L_24, &m5834_MI);
		t737* L_25 = (__this->f5);
		t737* L_26 = (__this->f6);
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8213_MI, __this, L_25, L_26);
		t737* L_27 = (__this->f6);
		t737* L_28 = p3;
		int32_t L_29 = p4;
		int32_t L_30 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_27, 0, (t121 *)(t121 *)L_28, L_29, L_30, &m5834_MI);
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
		bool L_40 = m8220(__this, &m8220_MI);
		if (!L_40)
		{
			goto IL_0112;
		}
	}
	{
		t737* L_41 = p0;
		int32_t L_42 = V_0;
		t737* L_43 = (__this->f5);
		int32_t L_44 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_41, L_42, (t121 *)(t121 *)L_43, 0, L_44, &m5834_MI);
		__this->f10 = 1;
	}

IL_0112:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8222 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8222_init;
	if (!m8222_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8222_init = true;
	}
	t737* V_0 = {0};
	{
		t1419 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1419 * L_1 = m6929(NULL, &m6929_MI);
		__this->f11 = L_1;
	}

IL_0013:
	{
		int32_t L_2 = p2;
		V_0 = ((t737*)SZArrayNew(t737_TI_var, L_2));
		t1419 * L_3 = (__this->f11);
		t737* L_4 = V_0;
		VirtActionInvoker1< t737* >::Invoke(&m6930_MI, L_3, L_4);
		t737* L_5 = V_0;
		t737* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		m5834(NULL, (t121 *)(t121 *)L_5, 0, (t121 *)(t121 *)L_6, L_7, L_8, &m5834_MI);
		return;
	}
}
extern "C" void m8223 (t1648 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral1345, &m7888_MI);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1550_TI), &L_2);
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
		t2* L_7 = m7888(NULL, (t2*) &_stringLiteral1346, &m7888_MI);
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
		t2* L_15 = m7888(NULL, (t2*) &_stringLiteral1347, &m7888_MI);
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
		t1359 * L_22 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_22, L_21, &m5837_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8224 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8224_init;
	if (!m8224_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8224_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t737* V_3 = {0};
	t737* V_4 = {0};
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
		t1440 * L_6 = (__this->f0);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_6);
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
		return ((t737*)SZArrayNew(t737_TI_var, 0));
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
		t1440 * L_13 = (__this->f0);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		t1359 * L_15 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_15, (t2*) &_stringLiteral1348, &m5837_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_006f:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->f2);
		V_3 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)L_16+(int32_t)L_17))));
		t737* L_18 = p0;
		int32_t L_19 = p1;
		t737* L_20 = V_3;
		int32_t L_21 = p2;
		m5834(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, 0, L_21, &m5834_MI);
		t737* L_22 = V_3;
		p0 = L_22;
		p1 = 0;
		t737* L_23 = V_3;
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
		V_4 = ((t737*)SZArrayNew(t737_TI_var, L_25));
		V_5 = 0;
		goto IL_00dc;
	}

IL_00a9:
	{
		t737* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = (__this->f2);
		t737* L_29 = V_4;
		int32_t L_30 = V_5;
		m8221(__this, L_26, L_27, L_28, L_29, L_30, &m8221_MI);
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
		t1440 * L_41 = (__this->f0);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_41);
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
		t737* L_44 = V_4;
		t737* L_45 = V_4;
		uint8_t L_46 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_45)->max_length)))-(int32_t)1)))) = (uint8_t)L_46;
		t737* L_47 = p0;
		int32_t L_48 = p1;
		t737* L_49 = V_4;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		m5834(NULL, (t121 *)(t121 *)L_47, L_48, (t121 *)(t121 *)L_49, L_50, L_51, &m5834_MI);
		t737* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = (__this->f2);
		t737* L_55 = V_4;
		int32_t L_56 = V_0;
		m8221(__this, L_52, L_53, L_54, L_55, L_56, &m8221_MI);
		goto IL_01db;
	}

IL_0149:
	{
		t737* L_57 = V_4;
		t737* L_58 = V_4;
		uint8_t L_59 = V_6;
		uint8_t L_60 = V_6;
		m8222(__this, L_57, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_58)->max_length)))-(int32_t)L_59)), ((int32_t)((int32_t)L_60-(int32_t)1)), &m8222_MI);
		t737* L_61 = V_4;
		t737* L_62 = V_4;
		uint8_t L_63 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_62)->max_length)))-(int32_t)1)))) = (uint8_t)L_63;
		t737* L_64 = p0;
		int32_t L_65 = p1;
		t737* L_66 = V_4;
		int32_t L_67 = V_0;
		int32_t L_68 = V_1;
		m5834(NULL, (t121 *)(t121 *)L_64, L_65, (t121 *)(t121 *)L_66, L_67, L_68, &m5834_MI);
		t737* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = (__this->f2);
		t737* L_72 = V_4;
		int32_t L_73 = V_0;
		m8221(__this, L_69, L_70, L_71, L_72, L_73, &m8221_MI);
		goto IL_01db;
	}

IL_0187:
	{
		t737* L_74 = V_4;
		V_7 = (((int32_t)(((t121 *)L_74)->max_length)));
		goto IL_0196;
	}

IL_018f:
	{
		t737* L_75 = V_4;
		int32_t L_76 = V_7;
		uint8_t L_77 = V_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_76)) = (uint8_t)L_77;
	}

IL_0196:
	{
		int32_t L_78 = V_7;
		int32_t L_79 = ((int32_t)((int32_t)L_78-(int32_t)1));
		V_7 = L_79;
		t737* L_80 = V_4;
		uint8_t L_81 = V_6;
		if ((((int32_t)L_79) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_80)->max_length)))-(int32_t)L_81)))))
		{
			goto IL_018f;
		}
	}
	{
		t737* L_82 = p0;
		int32_t L_83 = p1;
		t737* L_84 = V_4;
		int32_t L_85 = V_0;
		int32_t L_86 = V_1;
		m5834(NULL, (t121 *)(t121 *)L_82, L_83, (t121 *)(t121 *)L_84, L_85, L_86, &m5834_MI);
		t737* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = (__this->f2);
		t737* L_90 = V_4;
		int32_t L_91 = V_0;
		m8221(__this, L_87, L_88, L_89, L_90, L_91, &m8221_MI);
		goto IL_01db;
	}

IL_01c6:
	{
		t737* L_92 = p0;
		int32_t L_93 = p1;
		int32_t L_94 = (__this->f2);
		t737* L_95 = V_4;
		int32_t L_96 = V_5;
		m8221(__this, L_92, L_93, L_94, L_95, L_96, &m8221_MI);
		goto IL_01db;
	}

IL_01db:
	{
		t737* L_97 = V_4;
		return L_97;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8225 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8225_init;
	if (!m8225_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8225_init = true;
	}
	int32_t V_0 = 0;
	t737* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t737* V_7 = {0};
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
		t1359 * L_2 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_2, (t2*) &_stringLiteral1344, &m5837_MI);
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
		V_1 = ((t737*)SZArrayNew(t737_TI_var, L_7));
		V_2 = 0;
		goto IL_0061;
	}

IL_0034:
	{
		t737* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = (__this->f2);
		t737* L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = m8221(__this, L_8, L_9, L_10, L_11, L_12, &m8221_MI);
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
		t737* L_22 = (__this->f5);
		t737* L_23 = (__this->f6);
		VirtActionInvoker2< t737*, t737* >::Invoke(&m8213_MI, __this, L_22, L_23);
		t737* L_24 = (__this->f6);
		t737* L_25 = V_1;
		int32_t L_26 = V_2;
		int32_t L_27 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_24, 0, (t121 *)(t121 *)L_25, L_26, L_27, &m5834_MI);
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
		t737* L_31 = V_1;
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
		t1440 * L_34 = (__this->f0);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_34);
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
		t1440 * L_40 = (__this->f0);
		int32_t L_41 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_40);
		uint8_t L_42 = V_4;
		m8223(__this, L_41, L_42, (-1), &m8223_MI);
	}

IL_0102:
	{
		uint8_t L_43 = V_4;
		V_5 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_012e;
	}

IL_010a:
	{
		t737* L_44 = V_1;
		int32_t L_45 = V_0;
		int32_t L_46 = V_5;
		int32_t L_47 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45-(int32_t)1))-(int32_t)L_46));
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_44, L_47)))
		{
			goto IL_0128;
		}
	}
	{
		t1440 * L_48 = (__this->f0);
		int32_t L_49 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_48);
		int32_t L_50 = V_5;
		m8223(__this, L_49, (-1), L_50, &m8223_MI);
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
		t1440 * L_58 = (__this->f0);
		int32_t L_59 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_58);
		uint8_t L_60 = V_4;
		m8223(__this, L_59, L_60, (-1), &m8223_MI);
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
		t1440 * L_66 = (__this->f0);
		int32_t L_67 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_66);
		uint8_t L_68 = V_4;
		m8223(__this, L_67, L_68, (-1), &m8223_MI);
	}

IL_0188:
	{
		uint8_t L_69 = V_4;
		V_6 = ((int32_t)((int32_t)L_69-(int32_t)1));
		goto IL_01b6;
	}

IL_0190:
	{
		t737* L_70 = V_1;
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
		t1440 * L_75 = (__this->f0);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7088_MI, L_75);
		int32_t L_77 = V_6;
		m8223(__this, L_76, (-1), L_77, &m8223_MI);
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
		V_7 = ((t737*)SZArrayNew(t737_TI_var, L_83));
		t737* L_84 = V_1;
		t737* L_85 = V_7;
		int32_t L_86 = V_0;
		m5834(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, 0, L_86, &m5834_MI);
		t737* L_87 = V_1;
		t737* L_88 = V_1;
		m1199(NULL, (t121 *)(t121 *)L_87, 0, (((int32_t)(((t121 *)L_88)->max_length))), &m1199_MI);
		t737* L_89 = V_7;
		return L_89;
	}

IL_01e8:
	{
		return ((t737*)SZArrayNew(t737_TI_var, 0));
	}
}
extern MethodInfo m8226_MI;
extern "C" t737* m8226 (t1648 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m6953(L_1, (t2*) &_stringLiteral1343, &m6953_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t737* L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = p2;
		m8218(__this, L_2, L_3, L_4, &m8218_MI);
		bool L_5 = (__this->f1);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t737* L_6 = p0;
		int32_t L_7 = p1;
		int32_t L_8 = p2;
		t737* L_9 = m8224(__this, L_6, L_7, L_8, &m8224_MI);
		return L_9;
	}

IL_002e:
	{
		t737* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		t737* L_13 = m8225(__this, L_10, L_11, L_12, &m8225_MI);
		return L_13;
	}
}
#include "t1649.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1649_TI;
#include "t1649MD.h"

#include "t1650.h"


extern MethodInfo m8227_MI;
extern "C" void m8227 (t1649 * __this, t2* p0, t1650 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t1650 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8228_MI;
extern "C" t2* m8228 (t1649 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8229_MI;
extern "C" t1650 * m8229 (t1649 * __this, MethodInfo* method)
{
	{
		t1650 * L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1651.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1651_TI;
#include "t1651MD.h"

#include "t2178.h"
#include "t2166.h"
#include "t319.h"
#include "t1374.h"
extern TypeInfo t2178_TI;
extern TypeInfo t1374_TI;
#include "t2178MD.h"
#include "t320MD.h"
#include "t1374MD.h"
extern MethodInfo m1160_MI;
extern MethodInfo m6954_MI;
extern MethodInfo m6943_MI;
extern MethodInfo m6955_MI;
extern MethodInfo m6956_MI;
extern MethodInfo m6957_MI;
extern MethodInfo m6958_MI;
extern MethodInfo m6959_MI;
extern MethodInfo m8236_MI;
extern MethodInfo m8237_MI;
extern FieldInfo t2178_f12_FieldInfo;
extern FieldInfo t2178_f13_FieldInfo;
extern FieldInfo t2178_f14_FieldInfo;


extern MethodInfo m8230_MI;
extern "C" void m8230 (t1651 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8231_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8231 (t9 * __this , MethodInfo* method)
{
	static bool m8231_init;
	if (!m8231_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8231_init = true;
	}
	{
		t737* L_0 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)64)));
		m1160(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2178_f12_FieldInfo), &m1160_MI);
		((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f0 = L_0;
		t737* L_1 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)64)));
		m1160(NULL, (t121 *)(t121 *)L_1, LoadFieldToken(&t2178_f13_FieldInfo), &m1160_MI);
		((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f1 = L_1;
		t737* L_2 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)64)));
		m1160(NULL, (t121 *)(t121 *)L_2, LoadFieldToken(&t2178_f14_FieldInfo), &m1160_MI);
		((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m8232_MI;
extern "C" void m8232 (t1651 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m8233_MI;
extern "C" void m8233 (t1651 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8234_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8234 (t1651 * __this, t737* p0, MethodInfo* method)
{
	static bool m8234_init;
	if (!m8234_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8234_init = true;
	}
	{
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		__this->f5 = ((t737*)SZArrayNew(t737_TI_var, 0));
		goto IL_0022;
	}

IL_0011:
	{
		t737* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		__this->f5 = ((t737*)Castclass(L_2, t737_TI_var));
	}

IL_0022:
	{
		return;
	}
}
extern MethodInfo m8235_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8235 (t1651 * __this, t737* p0, MethodInfo* method)
{
	static bool m8235_init;
	if (!m8235_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8235_init = true;
	}
	{
		t737* L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t737* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		__this->f6 = ((t737*)Castclass(L_2, t737_TI_var));
		goto IL_001d;
	}

IL_0016:
	{
		__this->f6 = (t737*)NULL;
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m8236 (t1651 * __this, t737* p0, int32_t p1, t737* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t737* L_0 = p2;
		t737* L_1 = p2;
		int32_t L_2 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))-(int32_t)1));
		t737* L_3 = p0;
		int32_t L_4 = p1;
		t737* L_5 = p2;
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)(((int32_t)(((t121 *)L_5)->max_length)))))-(int32_t)1));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_6))&(int32_t)((int32_t)255)))))+(int32_t)1));
		t737* L_7 = p0;
		int32_t L_8 = p1;
		t737* L_9 = p2;
		int32_t L_10 = V_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))))-(int32_t)1)))) = (uint8_t)(((uint8_t)L_10));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11>>(int32_t)8));
		t737* L_12 = p2;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_12)->max_length)))-(int32_t)2));
		goto IL_005e;
	}

IL_0037:
	{
		int32_t L_13 = V_0;
		t737* L_14 = p2;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		t737* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_20))&(int32_t)((int32_t)255)))))));
		t737* L_21 = p0;
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
extern TypeInfo* t737_TI_var;
extern "C" t737* m8237 (t1651 * __this, t737* p0, int32_t p1, MethodInfo* method)
{
	static bool m8237_init;
	if (!m8237_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8237_init = true;
	}
	t1374 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t737* V_3 = {0};
	t737* V_4 = {0};
	int32_t V_5 = 0;
	t737* V_6 = {0};
	int32_t V_7 = 0;
	t737* V_8 = {0};
	t737* V_9 = {0};
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	t737* V_12 = {0};
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		t2* L_0 = (__this->f3);
		t1374 * L_1 = m6954(NULL, L_0, &m6954_MI);
		V_0 = L_1;
		t1374 * L_2 = V_0;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m6943_MI, L_2);
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		V_2 = ((int32_t)64);
		int32_t L_4 = p1;
		V_3 = ((t737*)SZArrayNew(t737_TI_var, L_4));
		t737* L_5 = (__this->f6);
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		t737* L_6 = (__this->f6);
		if (!(((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_7 = V_2;
		t737* L_8 = (__this->f6);
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		V_4 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)L_7*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_8)->max_length)))+(int32_t)L_9))-(int32_t)1))/(int32_t)L_10))))));
		V_5 = 0;
		goto IL_006a;
	}

IL_004d:
	{
		t737* L_11 = V_4;
		int32_t L_12 = V_5;
		t737* L_13 = (__this->f6);
		int32_t L_14 = V_5;
		t737* L_15 = (__this->f6);
		int32_t L_16 = ((int32_t)((int32_t)L_14%(int32_t)(((int32_t)(((t121 *)L_15)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_16));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_18 = V_5;
		t737* L_19 = V_4;
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
		V_4 = ((t737*)SZArrayNew(t737_TI_var, 0));
	}

IL_007c:
	{
		t737* L_20 = (__this->f5);
		if (!L_20)
		{
			goto IL_00d1;
		}
	}
	{
		t737* L_21 = (__this->f5);
		if (!(((int32_t)(((t121 *)L_21)->max_length))))
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_22 = V_2;
		t737* L_23 = (__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = V_2;
		V_6 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)L_22*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_23)->max_length)))+(int32_t)L_24))-(int32_t)1))/(int32_t)L_25))))));
		V_7 = 0;
		goto IL_00c7;
	}

IL_00aa:
	{
		t737* L_26 = V_6;
		int32_t L_27 = V_7;
		t737* L_28 = (__this->f5);
		int32_t L_29 = V_7;
		t737* L_30 = (__this->f5);
		int32_t L_31 = ((int32_t)((int32_t)L_29%(int32_t)(((int32_t)(((t121 *)L_30)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_31));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_7;
		t737* L_34 = V_6;
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
		V_6 = ((t737*)SZArrayNew(t737_TI_var, 0));
	}

IL_00d9:
	{
		t737* L_35 = V_4;
		t737* L_36 = V_6;
		V_8 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_35)->max_length)))+(int32_t)(((int32_t)(((t121 *)L_36)->max_length)))))));
		t737* L_37 = V_4;
		t737* L_38 = V_8;
		t737* L_39 = V_4;
		m5834(NULL, (t121 *)(t121 *)L_37, 0, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m5834_MI);
		t737* L_40 = V_6;
		t737* L_41 = V_8;
		t737* L_42 = V_4;
		t737* L_43 = V_6;
		m5834(NULL, (t121 *)(t121 *)L_40, 0, (t121 *)(t121 *)L_41, (((int32_t)(((t121 *)L_42)->max_length))), (((int32_t)(((t121 *)L_43)->max_length))), &m5834_MI);
		int32_t L_44 = V_2;
		V_9 = ((t737*)SZArrayNew(t737_TI_var, L_44));
		int32_t L_45 = p1;
		int32_t L_46 = V_1;
		int32_t L_47 = V_1;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45+(int32_t)L_46))-(int32_t)1))/(int32_t)L_47));
		V_11 = 1;
		goto IL_01f0;
	}

IL_0123:
	{
		t1374 * L_48 = V_0;
		t737* L_49 = p0;
		t737* L_50 = p0;
		t737* L_51 = p0;
		VirtFuncInvoker5< int32_t, t737*, int32_t, int32_t, t737*, int32_t >::Invoke(&m6955_MI, L_48, L_49, 0, (((int32_t)(((t121 *)L_50)->max_length))), L_51, 0);
		t1374 * L_52 = V_0;
		t737* L_53 = V_8;
		t737* L_54 = V_8;
		VirtFuncInvoker3< t737*, t737*, int32_t, int32_t >::Invoke(&m6956_MI, L_52, L_53, 0, (((int32_t)(((t121 *)L_54)->max_length))));
		t1374 * L_55 = V_0;
		t737* L_56 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m6957_MI, L_55);
		V_12 = L_56;
		t1374 * L_57 = V_0;
		VirtActionInvoker0::Invoke(&m6958_MI, L_57);
		V_13 = 1;
		goto IL_0167;
	}

IL_0152:
	{
		t1374 * L_58 = V_0;
		t737* L_59 = V_12;
		t737* L_60 = V_12;
		t737* L_61 = m6959(L_58, L_59, 0, (((int32_t)(((t121 *)L_60)->max_length))), &m6959_MI);
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
		t737* L_65 = V_9;
		int32_t L_66 = V_14;
		t737* L_67 = V_12;
		int32_t L_68 = V_14;
		t737* L_69 = V_12;
		int32_t L_70 = ((int32_t)((int32_t)L_68%(int32_t)(((int32_t)(((t121 *)L_69)->max_length)))));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_66)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_70));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_018b:
	{
		int32_t L_72 = V_14;
		t737* L_73 = V_9;
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
		t737* L_74 = V_8;
		int32_t L_75 = V_15;
		int32_t L_76 = V_2;
		t737* L_77 = V_9;
		m8236(__this, L_74, ((int32_t)((int32_t)L_75*(int32_t)L_76)), L_77, &m8236_MI);
		int32_t L_78 = V_15;
		V_15 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01ac:
	{
		int32_t L_79 = V_15;
		t737* L_80 = V_8;
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
		t737* L_84 = V_12;
		t737* L_85 = V_3;
		int32_t L_86 = V_11;
		int32_t L_87 = V_1;
		t737* L_88 = V_3;
		int32_t L_89 = V_11;
		int32_t L_90 = V_1;
		m5834(NULL, (t121 *)(t121 *)L_84, 0, (t121 *)(t121 *)L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)1))*(int32_t)L_87)), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_88)->max_length)))-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_89-(int32_t)1))*(int32_t)L_90)))), &m5834_MI);
		goto IL_01ea;
	}

IL_01d7:
	{
		t737* L_91 = V_12;
		t737* L_92 = V_3;
		int32_t L_93 = V_11;
		int32_t L_94 = V_1;
		t737* L_95 = V_12;
		m5834(NULL, (t121 *)(t121 *)L_91, 0, (t121 *)(t121 *)L_92, ((int32_t)((int32_t)((int32_t)((int32_t)L_93-(int32_t)1))*(int32_t)L_94)), (((int32_t)(((t121 *)L_95)->max_length))), &m5834_MI);
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
		t737* L_99 = V_3;
		return L_99;
	}
}
extern MethodInfo m8238_MI;
extern "C" t737* m8238 (t1651 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t737* L_0 = ((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f0;
		int32_t L_1 = p0;
		t737* L_2 = m8237(__this, L_0, L_1, &m8237_MI);
		return L_2;
	}
}
extern MethodInfo m8239_MI;
extern "C" t737* m8239 (t1651 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t737* L_0 = ((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f1;
		int32_t L_1 = p0;
		t737* L_2 = m8237(__this, L_0, L_1, &m8237_MI);
		return L_2;
	}
}
extern MethodInfo m8240_MI;
extern "C" t737* m8240 (t1651 * __this, int32_t p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t737* L_0 = ((t1651_SFs*)InitializedTypeInfo(&t1651_TI)->static_fields)->f2;
		int32_t L_1 = p0;
		t737* L_2 = m8237(__this, L_0, L_1, &m8237_MI);
		return L_2;
	}
}
#include "t1652.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1652_TI;
#include "t1652MD.h"

#include "t309.h"
#include "t736.h"
#include "t1653.h"
#include "t1662.h"
#include "t1240.h"
#include "t1176.h"
#include "t1656.h"
#include "t1654.h"
#include "t727.h"
#include "t169.h"
#include "t1358.h"
#include "t1658.h"
#include "t1222.h"
#include "t1643.h"
#include "t1223.h"
#include "t1644.h"
#include "t1537.h"
#include "t1538.h"
extern TypeInfo t736_TI;
extern TypeInfo t1240_TI;
extern TypeInfo t1176_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1662_TI;
extern TypeInfo t1656_TI;
extern TypeInfo t137_TI;
extern TypeInfo t1653_TI;
extern TypeInfo t1650_TI;
extern TypeInfo t727_TI;
extern TypeInfo t1654_TI;
extern TypeInfo t169_TI;
extern TypeInfo t1431_TI;
extern TypeInfo t1222_TI;
extern TypeInfo t1358_TI;
extern TypeInfo t1658_TI;
extern TypeInfo t1643_TI;
extern TypeInfo t1644_TI;
extern TypeInfo t1537_TI;
extern TypeInfo t1538_TI;
#include "t736MD.h"
#include "t1240MD.h"
#include "t1176MD.h"
#include "t1650MD.h"
#include "t1662MD.h"
#include "t1656MD.h"
#include "t1653MD.h"
#include "t1660MD.h"
#include "t727MD.h"
#include "t1654MD.h"
#include "t169MD.h"
#include "t1658MD.h"
#include "t1222MD.h"
#include "t1643MD.h"
#include "t1644MD.h"
#include "t1538MD.h"
extern Il2CppType t727_0_0_0;
extern MethodInfo m2763_MI;
extern MethodInfo m8257_MI;
extern MethodInfo m2778_MI;
extern MethodInfo m6960_MI;
extern MethodInfo m6961_MI;
extern MethodInfo m5927_MI;
extern MethodInfo m5769_MI;
extern MethodInfo m361_MI;
extern MethodInfo m5922_MI;
extern MethodInfo m8312_MI;
extern MethodInfo m8304_MI;
extern MethodInfo m8332_MI;
extern MethodInfo m8334_MI;
extern MethodInfo m8262_MI;
extern MethodInfo m8286_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m8283_MI;
extern MethodInfo m8241_MI;
extern MethodInfo m8247_MI;
extern MethodInfo m8245_MI;
extern MethodInfo m8300_MI;
extern MethodInfo m8302_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m8333_MI;
extern MethodInfo m8336_MI;
extern MethodInfo m2777_MI;
extern MethodInfo m8301_MI;
extern MethodInfo m8316_MI;
extern MethodInfo m8315_MI;
extern MethodInfo m8256_MI;
extern MethodInfo m8249_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m5818_MI;
extern MethodInfo m5819_MI;
extern MethodInfo m8255_MI;
extern MethodInfo m8338_MI;
extern MethodInfo m8252_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m6963_MI;
extern MethodInfo m6964_MI;
extern MethodInfo m6965_MI;
extern MethodInfo m6966_MI;
extern MethodInfo m8250_MI;
extern MethodInfo m6967_MI;
extern MethodInfo m6968_MI;
extern MethodInfo m6969_MI;
extern MethodInfo m8339_MI;
extern MethodInfo m8340_MI;
extern MethodInfo m8251_MI;
extern MethodInfo m8248_MI;
extern MethodInfo m8287_MI;
extern MethodInfo m8281_MI;
extern MethodInfo m8268_MI;
extern MethodInfo m8266_MI;
extern MethodInfo m5829_MI;
extern MethodInfo m8282_MI;
extern MethodInfo m8176_MI;
extern MethodInfo m8253_MI;
extern MethodInfo m8181_MI;
extern MethodInfo m5779_MI;
extern MethodInfo m8180_MI;
extern MethodInfo m8175_MI;
extern MethodInfo m8254_MI;
extern MethodInfo m8183_MI;
extern MethodInfo m8184_MI;
extern MethodInfo m8186_MI;
extern MethodInfo m8187_MI;
extern MethodInfo m8185_MI;
extern MethodInfo m6970_MI;
extern MethodInfo m6971_MI;
extern Il2CppGenericMethod m5817_GM;
extern Il2CppGenericMethod m5818_GM;
extern Il2CppGenericMethod m5819_GM;


extern "C" void m8241 (t1652 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		int32_t L_0 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f0;
		__this->f8 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		__this->f2 = L_1;
		t1176 * L_2 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_2, &m5768_MI);
		__this->f3 = L_2;
		t1653 * L_3 = (t1653 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1653_TI));
		m8283(L_3, &m8283_MI);
		__this->f4 = L_3;
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		t1176 * L_4 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_4, &m5768_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m8242_MI;
extern "C" void m8242 (t1652 * __this, t737* p0, MethodInfo* method)
{
	{
		m8241(__this, &m8241_MI);
		m8247(__this, (t2*)NULL, &m8247_MI);
		t737* L_0 = p0;
		m8245(__this, L_0, &m8245_MI);
		return;
	}
}
extern MethodInfo m8243_MI;
extern "C" void m8243 (t1652 * __this, t737* p0, t2* p1, MethodInfo* method)
{
	{
		m8241(__this, &m8241_MI);
		t2* L_0 = p1;
		m8247(__this, L_0, &m8247_MI);
		t737* L_1 = p0;
		m8245(__this, L_1, &m8245_MI);
		return;
	}
}
extern MethodInfo m8244_MI;
extern "C" void m8244 (t9 * __this , MethodInfo* method)
{
	{
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f0 = ((int32_t)2000);
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f10 = ((int32_t)2147483647);
		return;
	}
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m8245 (t1652 * __this, t737* p0, MethodInfo* method)
{
	static bool m8245_init;
	if (!m8245_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m8245_init = true;
	}
	t1650 * V_0 = {0};
	t1650 * V_1 = {0};
	t1662 * V_2 = {0};
	t1650 * V_3 = {0};
	t1650 * V_4 = {0};
	t1650 * V_5 = {0};
	t2* V_6 = {0};
	t737* V_7 = {0};
	t1650 * V_8 = {0};
	t1650 * V_9 = {0};
	t737* V_10 = {0};
	t737* V_11 = {0};
	t1650 * V_12 = {0};
	int32_t V_13 = 0;
	t1662 * V_14 = {0};
	t1650 * V_15 = {0};
	int32_t V_16 = 0;
	t1650 * V_17 = {0};
	t1654 * V_18 = {0};
	t1650 * V_19 = {0};
	int32_t V_20 = 0;
	t1650 * V_21 = {0};
	t2* V_22 = {0};
	t727 * V_23 = {0};
	int32_t V_24 = 0;
	{
		t737* L_0 = p0;
		t1650 * L_1 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_1, L_0, &m8300_MI);
		V_0 = L_1;
		t1650 * L_2 = V_0;
		uint8_t L_3 = m8302(L_2, &m8302_MI);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral857, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1650 * L_5 = V_0;
		t1650 * L_6 = m8312(L_5, 0, &m8312_MI);
		V_1 = L_6;
		t1650 * L_7 = V_1;
		uint8_t L_8 = m8302(L_7, &m8302_MI);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		t570 * L_9 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_9, (t2*) &_stringLiteral858, &m2949_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0038:
	{
		t1650 * L_10 = V_0;
		t1650 * L_11 = m8312(L_10, 1, &m8312_MI);
		t1662 * L_12 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
		m8333(L_12, L_11, &m8333_MI);
		V_2 = L_12;
		t1662 * L_13 = V_2;
		t2* L_14 = m8336(L_13, &m8336_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2777(NULL, L_14, (t2*) &_stringLiteral657, &m2777_MI);
		if (!L_15)
		{
			goto IL_0062;
		}
	}
	{
		t570 * L_16 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_16, (t2*) &_stringLiteral859, &m2949_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0062:
	{
		t1650 * L_17 = V_0;
		int32_t L_18 = m8301(L_17, &m8301_MI);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_018b;
		}
	}
	{
		t1650 * L_19 = V_0;
		t1650 * L_20 = m8312(L_19, 2, &m8312_MI);
		V_3 = L_20;
		t1650 * L_21 = V_3;
		uint8_t L_22 = m8302(L_21, &m8302_MI);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			goto IL_008b;
		}
	}
	{
		t570 * L_23 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_23, (t2*) &_stringLiteral860, &m2949_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008b:
	{
		t1650 * L_24 = V_3;
		t1650 * L_25 = m8312(L_24, 0, &m8312_MI);
		V_4 = L_25;
		t1650 * L_26 = V_4;
		uint8_t L_27 = m8302(L_26, &m8302_MI);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_00aa;
		}
	}
	{
		t570 * L_28 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_28, (t2*) &_stringLiteral860, &m2949_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00aa:
	{
		t1650 * L_29 = V_4;
		t1650 * L_30 = m8312(L_29, 0, &m8312_MI);
		V_5 = L_30;
		t1650 * L_31 = V_5;
		t1650 * L_32 = m8312(L_31, 0, &m8312_MI);
		t2* L_33 = m8316(NULL, L_32, &m8316_MI);
		V_6 = L_33;
		t2* L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_35 = m2777(NULL, L_34, (t2*) &_stringLiteral663, &m2777_MI);
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		t570 * L_36 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_36, (t2*) &_stringLiteral861, &m2949_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00dc:
	{
		t1650 * L_37 = V_4;
		t1650 * L_38 = m8312(L_37, 1, &m8312_MI);
		t737* L_39 = m8304(L_38, &m8304_MI);
		V_7 = L_39;
		t1650 * L_40 = V_3;
		t1650 * L_41 = m8312(L_40, 1, &m8312_MI);
		V_8 = L_41;
		t1650 * L_42 = V_8;
		uint8_t L_43 = m8302(L_42, &m8302_MI);
		if ((((int32_t)L_43) == ((int32_t)4)))
		{
			goto IL_0109;
		}
	}
	{
		t570 * L_44 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_44, (t2*) &_stringLiteral862, &m2949_MI);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0109:
	{
		__this->f8 = 1;
		t1650 * L_45 = V_3;
		int32_t L_46 = m8301(L_45, &m8301_MI);
		if ((((int32_t)L_46) <= ((int32_t)2)))
		{
			goto IL_0144;
		}
	}
	{
		t1650 * L_47 = V_3;
		t1650 * L_48 = m8312(L_47, 2, &m8312_MI);
		V_9 = L_48;
		t1650 * L_49 = V_9;
		uint8_t L_50 = m8302(L_49, &m8302_MI);
		if ((((int32_t)L_50) == ((int32_t)2)))
		{
			goto IL_0137;
		}
	}
	{
		t570 * L_51 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_51, (t2*) &_stringLiteral863, &m2949_MI);
		il2cpp_codegen_raise_exception(L_51);
	}

IL_0137:
	{
		t1650 * L_52 = V_9;
		int32_t L_53 = m8315(NULL, L_52, &m8315_MI);
		__this->f8 = L_53;
	}

IL_0144:
	{
		t1662 * L_54 = V_2;
		t1650 * L_55 = m8334(L_54, &m8334_MI);
		t1650 * L_56 = m8312(L_55, 0, &m8312_MI);
		t737* L_57 = m8304(L_56, &m8304_MI);
		V_10 = L_57;
		t737* L_58 = (__this->f1);
		t1650 * L_59 = V_8;
		t737* L_60 = m8304(L_59, &m8304_MI);
		int32_t L_61 = (__this->f8);
		t737* L_62 = V_10;
		t737* L_63 = m8256(__this, L_58, L_60, L_61, L_62, &m8256_MI);
		V_11 = L_63;
		t737* L_64 = V_7;
		t737* L_65 = V_11;
		bool L_66 = m8249(__this, L_64, L_65, &m8249_MI);
		if (L_66)
		{
			goto IL_018b;
		}
	}
	{
		t1359 * L_67 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_67, (t2*) &_stringLiteral864, &m5837_MI);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_018b:
	{
		t1662 * L_68 = V_2;
		t1650 * L_69 = m8334(L_68, &m8334_MI);
		t1650 * L_70 = m8312(L_69, 0, &m8312_MI);
		t737* L_71 = m8304(L_70, &m8304_MI);
		t1650 * L_72 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_72, L_71, &m8300_MI);
		V_12 = L_72;
		V_13 = 0;
		goto IL_02e1;
	}

IL_01ab:
	{
		t1650 * L_73 = V_12;
		int32_t L_74 = V_13;
		t1650 * L_75 = m8312(L_73, L_74, &m8312_MI);
		t1662 * L_76 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
		m8333(L_76, L_75, &m8333_MI);
		V_14 = L_76;
		t1662 * L_77 = V_14;
		t2* L_78 = m8336(L_77, &m8336_MI);
		V_22 = L_78;
		t2* L_79 = V_22;
		if (!L_79)
		{
			goto IL_02d0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_80 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f11;
		if (L_80)
		{
			goto IL_0208;
		}
	}
	{
		t727 * L_81 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_81, 3, m5817_MI_var);
		V_23 = L_81;
		t727 * L_82 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_82, (t2*) &_stringLiteral657, 0);
		t727 * L_83 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_83, (t2*) &_stringLiteral865, 1);
		t727 * L_84 = V_23;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_84, (t2*) &_stringLiteral866, 2);
		t727 * L_85 = V_23;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f11 = L_85;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_86 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f11;
		t2* L_87 = V_22;
		bool L_88 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_86, L_87, (&V_24));
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
		t1662 * L_90 = V_14;
		t1650 * L_91 = m8334(L_90, &m8334_MI);
		t1650 * L_92 = m8312(L_91, 0, &m8312_MI);
		t737* L_93 = m8304(L_92, &m8304_MI);
		t1650 * L_94 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_94, L_93, &m8300_MI);
		V_15 = L_94;
		V_16 = 0;
		goto IL_026a;
	}

IL_0251:
	{
		t1650 * L_95 = V_15;
		int32_t L_96 = V_16;
		t1650 * L_97 = m8312(L_95, L_96, &m8312_MI);
		V_17 = L_97;
		t1650 * L_98 = V_17;
		m8255(__this, L_98, &m8255_MI);
		int32_t L_99 = V_16;
		V_16 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_026a:
	{
		int32_t L_100 = V_16;
		t1650 * L_101 = V_15;
		int32_t L_102 = m8301(L_101, &m8301_MI);
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
		t1662 * L_103 = V_14;
		t1650 * L_104 = m8334(L_103, &m8334_MI);
		t1650 * L_105 = m8312(L_104, 0, &m8312_MI);
		t1654 * L_106 = (t1654 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1654_TI));
		m8338(L_106, L_105, &m8338_MI);
		V_18 = L_106;
		t1654 * L_107 = V_18;
		t737* L_108 = m8252(__this, L_107, &m8252_MI);
		t1650 * L_109 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_109, L_108, &m8300_MI);
		V_19 = L_109;
		V_20 = 0;
		goto IL_02b8;
	}

IL_029f:
	{
		t1650 * L_110 = V_19;
		int32_t L_111 = V_20;
		t1650 * L_112 = m8312(L_110, L_111, &m8312_MI);
		V_21 = L_112;
		t1650 * L_113 = V_21;
		m8255(__this, L_113, &m8255_MI);
		int32_t L_114 = V_20;
		V_20 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_02b8:
	{
		int32_t L_115 = V_20;
		t1650 * L_116 = V_19;
		int32_t L_117 = m8301(L_116, &m8301_MI);
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
		t1352 * L_118 = (t1352 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1352_TI));
		m5815(L_118, (t2*) &_stringLiteral867, &m5815_MI);
		il2cpp_codegen_raise_exception(L_118);
	}

IL_02d0:
	{
		t570 * L_119 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_119, (t2*) &_stringLiteral868, &m2949_MI);
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
		t1650 * L_122 = V_12;
		int32_t L_123 = m8301(L_122, &m8301_MI);
		if ((((int32_t)L_121) < ((int32_t)L_123)))
		{
			goto IL_01ab;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8246_MI;
extern "C" void m8246 (t1652 * __this, MethodInfo* method)
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
			t737* L_0 = (__this->f1);
			if (!L_0)
			{
				goto IL_001c;
			}
		}

IL_0008:
		{
			t737* L_1 = (__this->f1);
			t737* L_2 = (__this->f1);
			m1199(NULL, (t121 *)(t121 *)L_1, 0, (((int32_t)(((t121 *)L_2)->max_length))), &m1199_MI);
		}

IL_001c:
		{
			__this->f1 = (t737*)NULL;
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
extern TypeInfo* t737_TI_var;
extern "C" void m8247 (t1652 * __this, t2* p0, MethodInfo* method)
{
	static bool m8247_init;
	if (!m8247_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8247_init = true;
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
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m2763(L_3, &m2763_MI);
		V_0 = L_4;
		V_1 = 0;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		int32_t L_6 = m8257(NULL, &m8257_MI);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = V_0;
		uint16_t L_9 = m2778(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)), &m2778_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		int32_t L_10 = m8257(NULL, &m8257_MI);
		V_0 = L_10;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))<<(int32_t)1))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_13 = m6960(NULL, &m6960_MI);
		t2* L_14 = p0;
		int32_t L_15 = V_0;
		t737* L_16 = (__this->f1);
		VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t737*, int32_t >::Invoke(&m6961_MI, L_13, L_14, 0, L_15, L_16, 0);
		goto IL_0065;
	}

IL_0059:
	{
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, 2));
	}

IL_0065:
	{
		goto IL_006e;
	}

IL_0067:
	{
		__this->f1 = (t737*)NULL;
	}

IL_006e:
	{
		return;
	}
}
extern "C" t1653 * m8248 (t1652 * __this, MethodInfo* method)
{
	t1649 * V_0 = {0};
	t9 * V_1 = {0};
	t1650 * V_2 = {0};
	t1650 * V_3 = {0};
	t1662 * V_4 = {0};
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
		t1653 * L_1 = (__this->f4);
		VirtActionInvoker0::Invoke(&m5927_MI, L_1);
		t1176 * L_2 = (__this->f9);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_2);
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
			V_0 = ((t1649 *)Castclass(L_5, InitializedTypeInfo(&t1649_TI)));
			t1649 * L_6 = V_0;
			t2* L_7 = m8228(L_6, &m8228_MI);
			bool L_8 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(&m5922_MI, L_7, (t2*) &_stringLiteral856);
			if (!L_8)
			{
				goto IL_0081;
			}
		}

IL_0042:
		{
			t1649 * L_9 = V_0;
			t1650 * L_10 = m8229(L_9, &m8229_MI);
			V_2 = L_10;
			t1650 * L_11 = V_2;
			t1650 * L_12 = m8312(L_11, 1, &m8312_MI);
			V_3 = L_12;
			t1650 * L_13 = V_3;
			t737* L_14 = m8304(L_13, &m8304_MI);
			t1662 * L_15 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
			m8332(L_15, L_14, &m8332_MI);
			V_4 = L_15;
			t1653 * L_16 = (__this->f4);
			t1662 * L_17 = V_4;
			t1650 * L_18 = m8334(L_17, &m8334_MI);
			t1650 * L_19 = m8312(L_18, 0, &m8312_MI);
			t737* L_20 = m8304(L_19, &m8304_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
			t1656 * L_21 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
			m8262(L_21, L_20, &m8262_MI);
			m8286(L_16, L_21, &m8286_MI);
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
		t1653 * L_27 = (__this->f4);
		return L_27;
	}
}
extern "C" bool m8249 (t1652 * __this, t737* p0, t737* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t737* L_0 = p0;
		t737* L_1 = p1;
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
		t737* L_2 = p0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t737* L_5 = p1;
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
		t737* L_10 = p0;
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
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" t1440 * m8250 (t1652 * __this, t2* p0, t737* p1, int32_t p2, MethodInfo* method)
{
	static bool m8250_init;
	if (!m8250_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m8250_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t1651 * V_3 = {0};
	t1440 * V_4 = {0};
	t2* V_5 = {0};
	t727 * V_6 = {0};
	int32_t V_7 = 0;
	{
		V_0 = (t2*)NULL;
		V_1 = 8;
		V_2 = 8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t1651 * L_0 = (t1651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1651_TI));
		m8230(L_0, &m8230_MI);
		V_3 = L_0;
		t1651 * L_1 = V_3;
		t737* L_2 = (__this->f1);
		m8234(L_1, L_2, &m8234_MI);
		t1651 * L_3 = V_3;
		t737* L_4 = p1;
		m8235(L_3, L_4, &m8235_MI);
		t1651 * L_5 = V_3;
		int32_t L_6 = p2;
		m8233(L_5, L_6, &m8233_MI);
		t2* L_7 = p0;
		V_5 = L_7;
		t2* L_8 = V_5;
		if (!L_8)
		{
			goto IL_024b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_9 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12;
		if (L_9)
		{
			goto IL_00e9;
		}
	}
	{
		t727 * L_10 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_10, ((int32_t)12), m5817_MI_var);
		V_6 = L_10;
		t727 * L_11 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_11, (t2*) &_stringLiteral869, 0);
		t727 * L_12 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_12, (t2*) &_stringLiteral870, 1);
		t727 * L_13 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_13, (t2*) &_stringLiteral871, 2);
		t727 * L_14 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_14, (t2*) &_stringLiteral872, 3);
		t727 * L_15 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_15, (t2*) &_stringLiteral873, 4);
		t727 * L_16 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_16, (t2*) &_stringLiteral874, 5);
		t727 * L_17 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_17, (t2*) &_stringLiteral875, 6);
		t727 * L_18 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_18, (t2*) &_stringLiteral876, 7);
		t727 * L_19 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_19, (t2*) &_stringLiteral877, 8);
		t727 * L_20 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_20, (t2*) &_stringLiteral878, ((int32_t)9));
		t727 * L_21 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_21, (t2*) &_stringLiteral879, ((int32_t)10));
		t727 * L_22 = V_6;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_22, (t2*) &_stringLiteral880, ((int32_t)11));
		t727 * L_23 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12 = L_23;
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_24 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f12;
		t2* L_25 = V_5;
		bool L_26 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_24, L_25, (&V_7));
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
		t1651 * L_28 = V_3;
		m8232(L_28, (t2*) &_stringLiteral813, &m8232_MI);
		V_0 = (t2*) &_stringLiteral881;
		goto IL_025c;
	}

IL_014e:
	{
		t1651 * L_29 = V_3;
		m8232(L_29, (t2*) &_stringLiteral882, &m8232_MI);
		V_0 = (t2*) &_stringLiteral881;
		goto IL_025c;
	}

IL_0164:
	{
		t1651 * L_30 = V_3;
		m8232(L_30, (t2*) &_stringLiteral813, &m8232_MI);
		V_0 = (t2*) &_stringLiteral883;
		V_1 = 4;
		goto IL_025c;
	}

IL_017c:
	{
		t1651 * L_31 = V_3;
		m8232(L_31, (t2*) &_stringLiteral882, &m8232_MI);
		V_0 = (t2*) &_stringLiteral883;
		V_1 = 4;
		goto IL_025c;
	}

IL_0194:
	{
		t1651 * L_32 = V_3;
		m8232(L_32, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral881;
		goto IL_025c;
	}

IL_01aa:
	{
		t1651 * L_33 = V_3;
		m8232(L_33, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral883;
		V_1 = 4;
		goto IL_025c;
	}

IL_01c2:
	{
		t1651 * L_34 = V_3;
		m8232(L_34, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral885;
		V_1 = ((int32_t)16);
		V_2 = 0;
		goto IL_025c;
	}

IL_01dd:
	{
		t1651 * L_35 = V_3;
		m8232(L_35, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral885;
		V_1 = 5;
		V_2 = 0;
		goto IL_025c;
	}

IL_01f4:
	{
		t1651 * L_36 = V_3;
		m8232(L_36, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral886;
		V_1 = ((int32_t)24);
		goto IL_025c;
	}

IL_020a:
	{
		t1651 * L_37 = V_3;
		m8232(L_37, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral886;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0220:
	{
		t1651 * L_38 = V_3;
		m8232(L_38, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral883;
		V_1 = ((int32_t)16);
		goto IL_025c;
	}

IL_0236:
	{
		t1651 * L_39 = V_3;
		m8232(L_39, (t2*) &_stringLiteral884, &m8232_MI);
		V_0 = (t2*) &_stringLiteral883;
		V_1 = 5;
		goto IL_025c;
	}

IL_024b:
	{
		t2* L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m610(NULL, (t2*) &_stringLiteral887, L_40, &m610_MI);
		t169 * L_42 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_42, L_41, &m5776_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_025c:
	{
		t2* L_43 = V_0;
		t1440 * L_44 = m6963(NULL, L_43, &m6963_MI);
		V_4 = L_44;
		t1440 * L_45 = V_4;
		t1651 * L_46 = V_3;
		int32_t L_47 = V_1;
		t737* L_48 = m8238(L_46, L_47, &m8238_MI);
		VirtActionInvoker1< t737* >::Invoke(&m6964_MI, L_45, L_48);
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		t1440 * L_50 = V_4;
		t1651 * L_51 = V_3;
		int32_t L_52 = V_2;
		t737* L_53 = m8239(L_51, L_52, &m8239_MI);
		VirtActionInvoker1< t737* >::Invoke(&m6965_MI, L_50, L_53);
		t1440 * L_54 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(&m6966_MI, L_54, 1);
	}

IL_028c:
	{
		t1440 * L_55 = V_4;
		return L_55;
	}
}
extern "C" t737* m8251 (t1652 * __this, t2* p0, t737* p1, int32_t p2, t737* p3, MethodInfo* method)
{
	t1440 * V_0 = {0};
	t737* V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t1440 *)NULL;
		V_1 = (t737*)NULL;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		t2* L_0 = p0;
		t737* L_1 = p1;
		int32_t L_2 = p2;
		t1440 * L_3 = m8250(__this, L_0, L_1, L_2, &m8250_MI);
		V_0 = L_3;
		t1440 * L_4 = V_0;
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m6967_MI, L_4);
		V_2 = L_5;
		t9 * L_6 = V_2;
		t737* L_7 = p3;
		t737* L_8 = p3;
		t737* L_9 = (t737*)InterfaceFuncInvoker3< t737*, t737*, int32_t, int32_t >::Invoke(&m6968_MI, L_6, L_7, 0, (((int32_t)(((t121 *)L_8)->max_length))));
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
			t1440 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_002e;
			}
		}

IL_0028:
		{
			t1440 * L_11 = V_0;
			m6969(L_11, &m6969_MI);
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
		t737* L_12 = V_1;
		return L_12;
	}
}
extern "C" t737* m8252 (t1652 * __this, t1654 * p0, MethodInfo* method)
{
	{
		t1654 * L_0 = p0;
		t1662 * L_1 = m8339(L_0, &m8339_MI);
		t2* L_2 = m8336(L_1, &m8336_MI);
		t1654 * L_3 = p0;
		t1662 * L_4 = m8339(L_3, &m8339_MI);
		t1650 * L_5 = m8334(L_4, &m8334_MI);
		t1650 * L_6 = m8312(L_5, 0, &m8312_MI);
		t737* L_7 = m8304(L_6, &m8304_MI);
		t1654 * L_8 = p0;
		t1662 * L_9 = m8339(L_8, &m8339_MI);
		t1650 * L_10 = m8334(L_9, &m8334_MI);
		t1650 * L_11 = m8312(L_10, 1, &m8312_MI);
		int32_t L_12 = m8315(NULL, L_11, &m8315_MI);
		t1654 * L_13 = p0;
		t737* L_14 = m8340(L_13, &m8340_MI);
		t737* L_15 = m8251(__this, L_2, L_7, L_12, L_14, &m8251_MI);
		return L_15;
	}
}
extern "C" t1358  m8253 (t1652 * __this, bool* p0, MethodInfo* method)
{
	t1656 * V_0 = {0};
	t1658 * V_1 = {0};
	t1222 * V_2 = {0};
	t1358  V_3 = {0};
	t9 * V_4 = {0};
	t1358  V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1653 * L_0 = m8248(__this, &m8248_MI);
		t1658 * L_1 = m8287(L_0, &m8287_MI);
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
			t1658 * L_2 = V_1;
			t1656 * L_3 = m8281(L_2, &m8281_MI);
			V_0 = L_3;
			t1656 * L_4 = V_0;
			t737* L_5 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m8268_MI, L_4);
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_001d:
		{
			t1656 * L_6 = V_0;
			t1222 * L_7 = m8266(L_6, &m8266_MI);
			V_2 = L_7;
			t1222 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0034;
			}
		}

IL_0027:
		{
			bool* L_9 = p0;
			*((int8_t*)(L_9)) = (int8_t)1;
			t1222 * L_10 = V_2;
			t1358  L_11 = (t1358 )VirtFuncInvoker1< t1358 , bool >::Invoke(&m5829_MI, L_10, 0);
			V_3 = L_11;
			IL2CPP_LEAVE(0x61, FINALLY_003e);
		}

IL_0034:
		{
			t1658 * L_12 = V_1;
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8282_MI, L_12);
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
			t1658 * L_14 = V_1;
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
		Initobj (InitializedTypeInfo(&t1358_TI), (&V_5));
		t1358  L_18 = V_5;
		return L_18;
	}

IL_0061:
	{
		t1358  L_19 = V_3;
		return L_19;
	}
}
extern "C" void m8254 (t1652 * __this, t1643 * p0, MethodInfo* method)
{
	t737* V_0 = {0};
	bool V_1 = false;
	t1358  V_2 = {0};
	uint8_t V_3 = 0x0;
	{
		t1643 * L_0 = p0;
		t737* L_1 = m8176(L_0, &m8176_MI);
		V_0 = L_1;
		t737* L_2 = V_0;
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
		t1358  L_6 = m8253(__this, (&V_1), &m8253_MI);
		V_2 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		t1176 * L_8 = (__this->f2);
		t737* L_9 = V_0;
		t1358  L_10 = V_2;
		t1222 * L_11 = m8181(NULL, L_9, L_10, &m8181_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_8, L_11);
	}

IL_0035:
	{
		goto IL_0060;
	}

IL_0037:
	{
		t1176 * L_12 = (__this->f2);
		t737* L_13 = V_0;
		t1223 * L_14 = m8180(NULL, L_13, &m8180_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_12, L_14);
		goto IL_0060;
	}

IL_004b:
	{
		t737* L_15 = V_0;
		t737* L_16 = V_0;
		m1199(NULL, (t121 *)(t121 *)L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))), &m1199_MI);
		t1359 * L_17 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_17, (t2*) &_stringLiteral888, &m5837_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0060:
	{
		t737* L_18 = V_0;
		t737* L_19 = V_0;
		m1199(NULL, (t121 *)(t121 *)L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))), &m1199_MI);
		return;
	}
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m8255 (t1652 * __this, t1650 * p0, MethodInfo* method)
{
	static bool m8255_init;
	if (!m8255_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m8255_init = true;
	}
	t1650 * V_0 = {0};
	t1650 * V_1 = {0};
	t2* V_2 = {0};
	t1644 * V_3 = {0};
	t737* V_4 = {0};
	t1662 * V_5 = {0};
	t1656 * V_6 = {0};
	t737* V_7 = {0};
	t1650 * V_8 = {0};
	int32_t V_9 = 0;
	t1650 * V_10 = {0};
	t1650 * V_11 = {0};
	t2* V_12 = {0};
	t1650 * V_13 = {0};
	int32_t V_14 = 0;
	t1650 * V_15 = {0};
	t2* V_16 = {0};
	t727 * V_17 = {0};
	int32_t V_18 = 0;
	{
		t1650 * L_0 = p0;
		uint8_t L_1 = m8302(L_0, &m8302_MI);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)48))))
		{
			goto IL_0015;
		}
	}
	{
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_2, (t2*) &_stringLiteral889, &m2949_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0015:
	{
		t1650 * L_3 = p0;
		t1650 * L_4 = m8312(L_3, 0, &m8312_MI);
		V_0 = L_4;
		t1650 * L_5 = V_0;
		uint8_t L_6 = m8302(L_5, &m8302_MI);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0031;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, (t2*) &_stringLiteral890, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t1650 * L_8 = p0;
		t1650 * L_9 = m8312(L_8, 1, &m8312_MI);
		V_1 = L_9;
		t1650 * L_10 = V_0;
		t2* L_11 = m8316(NULL, L_10, &m8316_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_14 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f13;
		if (L_14)
		{
			goto IL_00ae;
		}
	}
	{
		t727 * L_15 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_15, 6, m5817_MI_var);
		V_17 = L_15;
		t727 * L_16 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_16, (t2*) &_stringLiteral854, 0);
		t727 * L_17 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_17, (t2*) &_stringLiteral855, 1);
		t727 * L_18 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_18, (t2*) &_stringLiteral856, 2);
		t727 * L_19 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_19, (t2*) &_stringLiteral891, 3);
		t727 * L_20 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_20, (t2*) &_stringLiteral892, 4);
		t727 * L_21 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_21, (t2*) &_stringLiteral893, 5);
		t727 * L_22 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f13 = L_22;
	}

IL_00ae:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_23 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f13;
		t2* L_24 = V_16;
		bool L_25 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_23, L_24, (&V_18));
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
		t1650 * L_27 = V_1;
		t737* L_28 = m8304(L_27, &m8304_MI);
		t1643 * L_29 = (t1643 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1643_TI));
		m8175(L_29, L_28, &m8175_MI);
		m8254(__this, L_29, &m8254_MI);
		goto IL_01c0;
	}

IL_00fb:
	{
		t1650 * L_30 = V_1;
		t737* L_31 = m8304(L_30, &m8304_MI);
		t1644 * L_32 = (t1644 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1644_TI));
		m8183(L_32, L_31, &m8183_MI);
		V_3 = L_32;
		t1644 * L_33 = V_3;
		t2* L_34 = m8184(L_33, &m8184_MI);
		t1644 * L_35 = V_3;
		t737* L_36 = m8186(L_35, &m8186_MI);
		t1644 * L_37 = V_3;
		int32_t L_38 = m8187(L_37, &m8187_MI);
		t1644 * L_39 = V_3;
		t737* L_40 = m8185(L_39, &m8185_MI);
		t737* L_41 = m8251(__this, L_34, L_36, L_38, L_40, &m8251_MI);
		V_4 = L_41;
		t737* L_42 = V_4;
		t1643 * L_43 = (t1643 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1643_TI));
		m8175(L_43, L_42, &m8175_MI);
		m8254(__this, L_43, &m8254_MI);
		t737* L_44 = V_4;
		t737* L_45 = V_4;
		m1199(NULL, (t121 *)(t121 *)L_44, 0, (((int32_t)(((t121 *)L_45)->max_length))), &m1199_MI);
		goto IL_01c0;
	}

IL_0145:
	{
		t1650 * L_46 = V_1;
		t737* L_47 = m8304(L_46, &m8304_MI);
		t1662 * L_48 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
		m8332(L_48, L_47, &m8332_MI);
		V_5 = L_48;
		t1662 * L_49 = V_5;
		t2* L_50 = m8336(L_49, &m8336_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_51 = m2777(NULL, L_50, (t2*) &_stringLiteral894, &m2777_MI);
		if (!L_51)
		{
			goto IL_0170;
		}
	}
	{
		t169 * L_52 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_52, (t2*) &_stringLiteral895, &m5776_MI);
		il2cpp_codegen_raise_exception(L_52);
	}

IL_0170:
	{
		t1662 * L_53 = V_5;
		t1650 * L_54 = m8334(L_53, &m8334_MI);
		t1650 * L_55 = m8312(L_54, 0, &m8312_MI);
		t737* L_56 = m8304(L_55, &m8304_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
		t1656 * L_57 = (t1656 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1656_TI));
		m8262(L_57, L_56, &m8262_MI);
		V_6 = L_57;
		t1653 * L_58 = (__this->f4);
		t1656 * L_59 = V_6;
		m8286(L_58, L_59, &m8286_MI);
		goto IL_01c0;
	}

IL_0199:
	{
		goto IL_01c0;
	}

IL_019b:
	{
		t1650 * L_60 = V_1;
		t737* L_61 = m8304(L_60, &m8304_MI);
		V_7 = L_61;
		t1176 * L_62 = (__this->f3);
		t737* L_63 = V_7;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_62, (t9 *)(t9 *)L_63);
		goto IL_01c0;
	}

IL_01b3:
	{
		goto IL_01c0;
	}

IL_01b5:
	{
		t570 * L_64 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_64, (t2*) &_stringLiteral896, &m2949_MI);
		il2cpp_codegen_raise_exception(L_64);
	}

IL_01c0:
	{
		t1650 * L_65 = p0;
		int32_t L_66 = m8301(L_65, &m8301_MI);
		if ((((int32_t)L_66) <= ((int32_t)2)))
		{
			goto IL_0308;
		}
	}
	{
		t1650 * L_67 = p0;
		t1650 * L_68 = m8312(L_67, 2, &m8312_MI);
		V_8 = L_68;
		t1650 * L_69 = V_8;
		uint8_t L_70 = m8302(L_69, &m8302_MI);
		if ((((int32_t)L_70) == ((int32_t)((int32_t)49))))
		{
			goto IL_01eb;
		}
	}
	{
		t570 * L_71 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_71, (t2*) &_stringLiteral897, &m2949_MI);
		il2cpp_codegen_raise_exception(L_71);
	}

IL_01eb:
	{
		V_9 = 0;
		goto IL_02fa;
	}

IL_01f3:
	{
		t1650 * L_72 = V_8;
		int32_t L_73 = V_9;
		t1650 * L_74 = m8312(L_72, L_73, &m8312_MI);
		V_10 = L_74;
		t1650 * L_75 = V_10;
		uint8_t L_76 = m8302(L_75, &m8302_MI);
		if ((((int32_t)L_76) == ((int32_t)((int32_t)48))))
		{
			goto IL_0214;
		}
	}
	{
		t570 * L_77 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_77, (t2*) &_stringLiteral898, &m2949_MI);
		il2cpp_codegen_raise_exception(L_77);
	}

IL_0214:
	{
		t1650 * L_78 = V_10;
		t1650 * L_79 = m8312(L_78, 0, &m8312_MI);
		V_11 = L_79;
		t1650 * L_80 = V_11;
		uint8_t L_81 = m8302(L_80, &m8302_MI);
		if ((((int32_t)L_81) == ((int32_t)6)))
		{
			goto IL_0233;
		}
	}
	{
		t570 * L_82 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_82, (t2*) &_stringLiteral899, &m2949_MI);
		il2cpp_codegen_raise_exception(L_82);
	}

IL_0233:
	{
		t1650 * L_83 = V_11;
		t2* L_84 = m8316(NULL, L_83, &m8316_MI);
		V_12 = L_84;
		t1650 * L_85 = V_10;
		t1650 * L_86 = m8312(L_85, 1, &m8312_MI);
		V_13 = L_86;
		V_14 = 0;
		goto IL_02e6;
	}

IL_024e:
	{
		t1650 * L_87 = V_13;
		int32_t L_88 = V_14;
		t1650 * L_89 = m8312(L_87, L_88, &m8312_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_92 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f14;
		if (L_92)
		{
			goto IL_0294;
		}
	}
	{
		t727 * L_93 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_93, 2, m5817_MI_var);
		V_17 = L_93;
		t727 * L_94 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_94, (t2*) &_stringLiteral900, 0);
		t727 * L_95 = V_17;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_95, (t2*) &_stringLiteral901, 1);
		t727 * L_96 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f14 = L_96;
	}

IL_0294:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		t727 * L_97 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f14;
		t2* L_98 = V_16;
		bool L_99 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_97, L_98, (&V_18));
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
		t1650 * L_102 = V_15;
		uint8_t L_103 = m8302(L_102, &m8302_MI);
		if ((((int32_t)L_103) == ((int32_t)((int32_t)30))))
		{
			goto IL_02c5;
		}
	}
	{
		t570 * L_104 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_104, (t2*) &_stringLiteral902, &m2949_MI);
		il2cpp_codegen_raise_exception(L_104);
	}

IL_02c5:
	{
		goto IL_02e0;
	}

IL_02c7:
	{
		t1650 * L_105 = V_15;
		uint8_t L_106 = m8302(L_105, &m8302_MI);
		if ((((int32_t)L_106) == ((int32_t)4)))
		{
			goto IL_02dc;
		}
	}
	{
		t570 * L_107 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_107, (t2*) &_stringLiteral902, &m2949_MI);
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
		t1650 * L_110 = V_13;
		int32_t L_111 = m8301(L_110, &m8301_MI);
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
		t1650 * L_114 = V_8;
		int32_t L_115 = m8301(L_114, &m8301_MI);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_01f3;
		}
	}

IL_0308:
	{
		t1176 * L_116 = (__this->f9);
		t2* L_117 = V_2;
		t1650 * L_118 = p0;
		t1649 * L_119 = (t1649 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1649_TI));
		m8227(L_119, L_117, L_118, &m8227_MI);
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_116, L_119);
		return;
	}
}
extern "C" t737* m8256 (t1652 * __this, t737* p0, t737* p1, int32_t p2, t737* p3, MethodInfo* method)
{
	t1651 * V_0 = {0};
	t1537 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1651_TI));
		t1651 * L_0 = (t1651 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1651_TI));
		m8230(L_0, &m8230_MI);
		V_0 = L_0;
		t1651 * L_1 = V_0;
		m8232(L_1, (t2*) &_stringLiteral884, &m8232_MI);
		t1651 * L_2 = V_0;
		t737* L_3 = p0;
		m8234(L_2, L_3, &m8234_MI);
		t1651 * L_4 = V_0;
		t737* L_5 = p1;
		m8235(L_4, L_5, &m8235_MI);
		t1651 * L_6 = V_0;
		int32_t L_7 = p2;
		m8233(L_6, L_7, &m8233_MI);
		t1538 * L_8 = m6970(NULL, &m6970_MI);
		V_1 = ((t1537 *)Castclass(L_8, InitializedTypeInfo(&t1537_TI)));
		t1537 * L_9 = V_1;
		t1651 * L_10 = V_0;
		t737* L_11 = m8240(L_10, ((int32_t)20), &m8240_MI);
		VirtActionInvoker1< t737* >::Invoke(&m6971_MI, L_9, L_11);
		t1537 * L_12 = V_1;
		t737* L_13 = p3;
		t737* L_14 = p3;
		t737* L_15 = m6959(L_12, L_13, 0, (((int32_t)(((t121 *)L_14)->max_length))), &m6959_MI);
		return L_15;
	}
}
extern "C" int32_t m8257 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1652_TI));
		int32_t L_0 = ((t1652_SFs*)InitializedTypeInfo(&t1652_TI)->static_fields)->f10;
		return L_0;
	}
}
#include "t1655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1655_TI;
#include "t1655MD.h"

#include "t2167.h"
#include "t2160.h"
extern TypeInfo t318_TI;
extern TypeInfo t309_TI;
extern Il2CppType t318_0_0_0;
extern MethodInfo m8261_MI;
extern MethodInfo m8307_MI;
extern MethodInfo m2797_MI;
extern MethodInfo m6972_MI;
extern MethodInfo m5870_MI;
extern MethodInfo m4315_MI;
extern MethodInfo m6973_MI;
extern MethodInfo m4321_MI;
extern MethodInfo m4487_MI;
extern MethodInfo m399_MI;
extern FieldInfo t2178_f15_FieldInfo;
extern FieldInfo t2178_f16_FieldInfo;
extern FieldInfo t2178_f17_FieldInfo;
extern FieldInfo t2178_f18_FieldInfo;


extern MethodInfo m8258_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8258 (t9 * __this , MethodInfo* method)
{
	static bool m8258_init;
	if (!m8258_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8258_init = true;
	}
	{
		t737* L_0 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)((int32_t)85);
		t737* L_1 = L_0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 1)) = (uint8_t)4;
		t737* L_2 = L_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 2)) = (uint8_t)6;
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f0 = L_2;
		t737* L_3 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 0)) = (uint8_t)((int32_t)85);
		t737* L_4 = L_3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)4;
		t737* L_5 = L_4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)((int32_t)10);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f1 = L_5;
		t737* L_6 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 0)) = (uint8_t)((int32_t)85);
		t737* L_7 = L_6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 1)) = (uint8_t)4;
		t737* L_8 = L_7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 2)) = (uint8_t)((int32_t)11);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f2 = L_8;
		t737* L_9 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)((int32_t)85);
		t737* L_10 = L_9;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 1)) = (uint8_t)4;
		t737* L_11 = L_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)3;
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f3 = L_11;
		t737* L_12 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, 0)) = (uint8_t)((int32_t)85);
		t737* L_13 = L_12;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 1)) = (uint8_t)4;
		t737* L_14 = L_13;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 2)) = (uint8_t)7;
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f4 = L_14;
		t737* L_15 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 0)) = (uint8_t)((int32_t)85);
		t737* L_16 = L_15;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, 1)) = (uint8_t)4;
		t737* L_17 = L_16;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 2)) = (uint8_t)8;
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f5 = L_17;
		t737* L_18 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 0)) = (uint8_t)((int32_t)85);
		t737* L_19 = L_18;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)4;
		t737* L_20 = L_19;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 2)) = (uint8_t)((int32_t)9);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f6 = L_20;
		t737* L_21 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)10)));
		m1160(NULL, (t121 *)(t121 *)L_21, LoadFieldToken(&t2178_f15_FieldInfo), &m1160_MI);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f7 = L_21;
		t737* L_22 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)10)));
		m1160(NULL, (t121 *)(t121 *)L_22, LoadFieldToken(&t2178_f16_FieldInfo), &m1160_MI);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f8 = L_22;
		t737* L_23 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)9)));
		m1160(NULL, (t121 *)(t121 *)L_23, LoadFieldToken(&t2178_f17_FieldInfo), &m1160_MI);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f9 = L_23;
		t737* L_24 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_24, 0)) = (uint8_t)((int32_t)85);
		t737* L_25 = L_24;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 1)) = (uint8_t)4;
		t737* L_26 = L_25;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, 2)) = (uint8_t)((int32_t)46);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f10 = L_26;
		t737* L_27 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 0)) = (uint8_t)((int32_t)85);
		t737* L_28 = L_27;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_28, 1)) = (uint8_t)4;
		t737* L_29 = L_28;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 2)) = (uint8_t)((int32_t)12);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f11 = L_29;
		t737* L_30 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_30, 0)) = (uint8_t)((int32_t)85);
		t737* L_31 = L_30;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 1)) = (uint8_t)4;
		t737* L_32 = L_31;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, 2)) = (uint8_t)4;
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f12 = L_32;
		t737* L_33 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, 0)) = (uint8_t)((int32_t)85);
		t737* L_34 = L_33;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 1)) = (uint8_t)4;
		t737* L_35 = L_34;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 2)) = (uint8_t)((int32_t)42);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f13 = L_35;
		t737* L_36 = ((t737*)SZArrayNew(t737_TI_var, 3));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 0)) = (uint8_t)((int32_t)85);
		t737* L_37 = L_36;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, 1)) = (uint8_t)4;
		t737* L_38 = L_37;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, 2)) = (uint8_t)((int32_t)43);
		((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f14 = L_38;
		return;
	}
}
extern MethodInfo m8259_MI;
extern "C" t2* m8259 (t9 * __this , t1650 * p0, MethodInfo* method)
{
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	t1650 * V_2 = {0};
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0035;
	}

IL_000a:
	{
		t1650 * L_1 = p0;
		int32_t L_2 = V_1;
		t1650 * L_3 = m8312(L_1, L_2, &m8312_MI);
		V_2 = L_3;
		t328 * L_4 = V_0;
		t1650 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		m8261(NULL, L_4, L_5, 1, &m8261_MI);
		int32_t L_6 = V_1;
		t1650 * L_7 = p0;
		int32_t L_8 = m8301(L_7, &m8301_MI);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0031;
		}
	}
	{
		t328 * L_9 = V_0;
		m1207(L_9, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		t1650 * L_12 = p0;
		int32_t L_13 = m8301(L_12, &m8301_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		t328 * L_14 = V_0;
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_14);
		return L_15;
	}
}
extern MethodInfo m8260_MI;
extern "C" t2* m8260 (t9 * __this , t1650 * p0, bool p1, t2* p2, bool p3, MethodInfo* method)
{
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	t1650 * V_2 = {0};
	int32_t V_3 = 0;
	t1650 * V_4 = {0};
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		bool L_1 = p1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		t1650 * L_2 = p0;
		int32_t L_3 = m8301(L_2, &m8301_MI);
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_0034;
	}

IL_0014:
	{
		t1650 * L_4 = p0;
		int32_t L_5 = V_1;
		t1650 * L_6 = m8312(L_4, L_5, &m8312_MI);
		V_2 = L_6;
		t328 * L_7 = V_0;
		t1650 * L_8 = V_2;
		bool L_9 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		m8261(NULL, L_7, L_8, L_9, &m8261_MI);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		t328 * L_11 = V_0;
		t2* L_12 = p2;
		m1207(L_11, L_12, &m1207_MI);
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
		t1650 * L_15 = p0;
		int32_t L_16 = V_3;
		t1650 * L_17 = m8312(L_15, L_16, &m8312_MI);
		V_4 = L_17;
		t328 * L_18 = V_0;
		t1650 * L_19 = V_4;
		bool L_20 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		m8261(NULL, L_18, L_19, L_20, &m8261_MI);
		int32_t L_21 = V_3;
		t1650 * L_22 = p0;
		int32_t L_23 = m8301(L_22, &m8301_MI);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)((int32_t)L_23-(int32_t)1)))))
		{
			goto IL_0063;
		}
	}
	{
		t328 * L_24 = V_0;
		t2* L_25 = p2;
		m1207(L_24, L_25, &m1207_MI);
	}

IL_0063:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0067:
	{
		int32_t L_27 = V_3;
		t1650 * L_28 = p0;
		int32_t L_29 = m8301(L_28, &m8301_MI);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_003e;
		}
	}

IL_0070:
	{
		t328 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_30);
		return L_31;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" void m8261 (t9 * __this , t328 * p0, t1650 * p1, bool p2, MethodInfo* method)
{
	static bool m8261_init;
	if (!m8261_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8261_init = true;
	}
	int32_t V_0 = 0;
	t1650 * V_1 = {0};
	t1650 * V_2 = {0};
	t1650 * V_3 = {0};
	t2* V_4 = {0};
	t328 * V_5 = {0};
	int32_t V_6 = 0;
	t318* V_7 = {0};
	{
		V_0 = 0;
		goto IL_0305;
	}

IL_0007:
	{
		t1650 * L_0 = p1;
		int32_t L_1 = V_0;
		t1650 * L_2 = m8312(L_0, L_1, &m8312_MI);
		V_1 = L_2;
		t1650 * L_3 = V_1;
		t1650 * L_4 = m8312(L_3, 1, &m8312_MI);
		V_2 = L_4;
		t1650 * L_5 = V_2;
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
		t1650 * L_6 = V_1;
		t1650 * L_7 = m8312(L_6, 0, &m8312_MI);
		V_3 = L_7;
		t1650 * L_8 = V_3;
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
		t1650 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_10 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f0;
		bool L_11 = m8307(L_9, L_10, &m8307_MI);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		t328 * L_12 = p0;
		m1207(L_12, (t2*) &_stringLiteral903, &m1207_MI);
		goto IL_020d;
	}

IL_004d:
	{
		t1650 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_14 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f1;
		bool L_15 = m8307(L_13, L_14, &m8307_MI);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		t328 * L_16 = p0;
		m1207(L_16, (t2*) &_stringLiteral904, &m1207_MI);
		goto IL_020d;
	}

IL_006b:
	{
		t1650 * L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_18 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f2;
		bool L_19 = m8307(L_17, L_18, &m8307_MI);
		if (!L_19)
		{
			goto IL_0089;
		}
	}
	{
		t328 * L_20 = p0;
		m1207(L_20, (t2*) &_stringLiteral905, &m1207_MI);
		goto IL_020d;
	}

IL_0089:
	{
		t1650 * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_22 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f3;
		bool L_23 = m8307(L_21, L_22, &m8307_MI);
		if (!L_23)
		{
			goto IL_00a7;
		}
	}
	{
		t328 * L_24 = p0;
		m1207(L_24, (t2*) &_stringLiteral906, &m1207_MI);
		goto IL_020d;
	}

IL_00a7:
	{
		t1650 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_26 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f4;
		bool L_27 = m8307(L_25, L_26, &m8307_MI);
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		t328 * L_28 = p0;
		m1207(L_28, (t2*) &_stringLiteral907, &m1207_MI);
		goto IL_020d;
	}

IL_00c5:
	{
		t1650 * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_30 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f5;
		bool L_31 = m8307(L_29, L_30, &m8307_MI);
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		t328 * L_32 = p0;
		m1207(L_32, (t2*) &_stringLiteral908, &m1207_MI);
		goto IL_020d;
	}

IL_00e3:
	{
		t1650 * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_34 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f6;
		bool L_35 = m8307(L_33, L_34, &m8307_MI);
		if (!L_35)
		{
			goto IL_0101;
		}
	}
	{
		t328 * L_36 = p0;
		m1207(L_36, (t2*) &_stringLiteral909, &m1207_MI);
		goto IL_020d;
	}

IL_0101:
	{
		t1650 * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_38 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f7;
		bool L_39 = m8307(L_37, L_38, &m8307_MI);
		if (!L_39)
		{
			goto IL_011f;
		}
	}
	{
		t328 * L_40 = p0;
		m1207(L_40, (t2*) &_stringLiteral910, &m1207_MI);
		goto IL_020d;
	}

IL_011f:
	{
		t1650 * L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_42 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f8;
		bool L_43 = m8307(L_41, L_42, &m8307_MI);
		if (!L_43)
		{
			goto IL_013d;
		}
	}
	{
		t328 * L_44 = p0;
		m1207(L_44, (t2*) &_stringLiteral911, &m1207_MI);
		goto IL_020d;
	}

IL_013d:
	{
		t1650 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_46 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f9;
		bool L_47 = m8307(L_45, L_46, &m8307_MI);
		if (!L_47)
		{
			goto IL_015b;
		}
	}
	{
		t328 * L_48 = p0;
		m1207(L_48, (t2*) &_stringLiteral912, &m1207_MI);
		goto IL_020d;
	}

IL_015b:
	{
		t1650 * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_50 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f10;
		bool L_51 = m8307(L_49, L_50, &m8307_MI);
		if (!L_51)
		{
			goto IL_0179;
		}
	}
	{
		t328 * L_52 = p0;
		m1207(L_52, (t2*) &_stringLiteral913, &m1207_MI);
		goto IL_020d;
	}

IL_0179:
	{
		t1650 * L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_54 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f11;
		bool L_55 = m8307(L_53, L_54, &m8307_MI);
		if (!L_55)
		{
			goto IL_0197;
		}
	}
	{
		t328 * L_56 = p0;
		m1207(L_56, (t2*) &_stringLiteral914, &m1207_MI);
		goto IL_020d;
	}

IL_0197:
	{
		t1650 * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_58 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f12;
		bool L_59 = m8307(L_57, L_58, &m8307_MI);
		if (!L_59)
		{
			goto IL_01b2;
		}
	}
	{
		t328 * L_60 = p0;
		m1207(L_60, (t2*) &_stringLiteral915, &m1207_MI);
		goto IL_020d;
	}

IL_01b2:
	{
		t1650 * L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_62 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f13;
		bool L_63 = m8307(L_61, L_62, &m8307_MI);
		if (!L_63)
		{
			goto IL_01cd;
		}
	}
	{
		t328 * L_64 = p0;
		m1207(L_64, (t2*) &_stringLiteral916, &m1207_MI);
		goto IL_020d;
	}

IL_01cd:
	{
		t1650 * L_65 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
		t737* L_66 = ((t1655_SFs*)InitializedTypeInfo(&t1655_TI)->static_fields)->f14;
		bool L_67 = m8307(L_65, L_66, &m8307_MI);
		if (!L_67)
		{
			goto IL_01e8;
		}
	}
	{
		t328 * L_68 = p0;
		m1207(L_68, (t2*) &_stringLiteral917, &m1207_MI);
		goto IL_020d;
	}

IL_01e8:
	{
		t328 * L_69 = p0;
		m1207(L_69, (t2*) &_stringLiteral918, &m1207_MI);
		t328 * L_70 = p0;
		t1650 * L_71 = V_3;
		t2* L_72 = m8316(NULL, L_71, &m8316_MI);
		m1207(L_70, L_72, &m1207_MI);
		t328 * L_73 = p0;
		m1207(L_73, (t2*) &_stringLiteral250, &m1207_MI);
	}

IL_020d:
	{
		V_4 = (t2*)NULL;
		t1650 * L_74 = V_2;
		uint8_t L_75 = m8302(L_74, &m8302_MI);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0258;
		}
	}
	{
		t328 * L_76 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_76, &m1203_MI);
		V_5 = L_76;
		V_6 = 1;
		goto IL_023e;
	}

IL_0226:
	{
		t328 * L_77 = V_5;
		t1650 * L_78 = V_2;
		t737* L_79 = m8304(L_78, &m8304_MI);
		int32_t L_80 = V_6;
		int32_t L_81 = L_80;
		m2797(L_77, (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_79, L_81)))), &m2797_MI);
		int32_t L_82 = V_6;
		V_6 = ((int32_t)((int32_t)L_82+(int32_t)2));
	}

IL_023e:
	{
		int32_t L_83 = V_6;
		t1650 * L_84 = V_2;
		t737* L_85 = m8304(L_84, &m8304_MI);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)(((t121 *)L_85)->max_length))))))
		{
			goto IL_0226;
		}
	}
	{
		t328 * L_86 = V_5;
		t2* L_87 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_86);
		V_4 = L_87;
		goto IL_02e1;
	}

IL_0258:
	{
		t1650 * L_88 = V_2;
		uint8_t L_89 = m8302(L_88, &m8302_MI);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0276;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_90 = m6972(NULL, &m6972_MI);
		t1650 * L_91 = V_2;
		t737* L_92 = m8304(L_91, &m8304_MI);
		t2* L_93 = (t2*)VirtFuncInvoker1< t2*, t737* >::Invoke(&m5870_MI, L_90, L_92);
		V_4 = L_93;
		goto IL_0288;
	}

IL_0276:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_94 = m4315(NULL, &m4315_MI);
		t1650 * L_95 = V_2;
		t737* L_96 = m8304(L_95, &m8304_MI);
		t2* L_97 = (t2*)VirtFuncInvoker1< t2*, t737* >::Invoke(&m5870_MI, L_94, L_96);
		V_4 = L_97;
	}

IL_0288:
	{
		t318* L_98 = ((t318*)SZArrayNew(t318_TI_var, 7));
		m1160(NULL, (t121 *)(t121 *)L_98, LoadFieldToken(&t2178_f18_FieldInfo), &m1160_MI);
		V_7 = L_98;
		bool L_99 = p2;
		if (!L_99)
		{
			goto IL_02e1;
		}
	}
	{
		t2* L_100 = V_4;
		t318* L_101 = V_7;
		t2* L_102 = V_4;
		int32_t L_103 = m2763(L_102, &m2763_MI);
		int32_t L_104 = m6973(L_100, L_101, 0, L_103, &m6973_MI);
		if ((((int32_t)L_104) > ((int32_t)0)))
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_105 = V_4;
		bool L_106 = m4321(L_105, (t2*) &_stringLiteral163, &m4321_MI);
		if (L_106)
		{
			goto IL_02ce;
		}
	}
	{
		t2* L_107 = V_4;
		bool L_108 = m4487(L_107, (t2*) &_stringLiteral163, &m4487_MI);
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
		t328 * L_111 = p0;
		t2* L_112 = V_4;
		m1207(L_111, L_112, &m1207_MI);
		int32_t L_113 = V_0;
		t1650 * L_114 = p1;
		int32_t L_115 = m8301(L_114, &m8301_MI);
		if ((((int32_t)L_113) >= ((int32_t)((int32_t)((int32_t)L_115-(int32_t)1)))))
		{
			goto IL_0301;
		}
	}
	{
		t328 * L_116 = p0;
		m1207(L_116, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_0301:
	{
		int32_t L_117 = V_0;
		V_0 = ((int32_t)((int32_t)L_117+(int32_t)1));
	}

IL_0305:
	{
		int32_t L_118 = V_0;
		t1650 * L_119 = p1;
		int32_t L_120 = m8301(L_119, &m8301_MI);
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

#include "t1357.h"
#include "t272.h"
#include "t138.h"
#include "t1657.h"
#include "t1106.h"
#include "t1107.h"
extern TypeInfo t1357_TI;
extern TypeInfo t138_TI;
extern TypeInfo t1657_TI;
#include "t1357MD.h"
#include "t1657MD.h"
#include "t1106MD.h"
extern MethodInfo m8265_MI;
extern MethodInfo m5842_MI;
extern MethodInfo m5831_MI;
extern MethodInfo m8277_MI;
extern MethodInfo m5841_MI;
extern MethodInfo m8264_MI;
extern MethodInfo m6977_MI;
extern MethodInfo m8313_MI;
extern MethodInfo m8317_MI;
extern MethodInfo m8309_MI;
extern MethodInfo m8303_MI;
extern MethodInfo m8296_MI;
extern MethodInfo m5785_MI;
extern MethodInfo m4308_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m4488_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m6984_MI;


extern "C" void m8262 (t1656 * __this, t737* p0, MethodInfo* method)
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
		t737* L_0 = p0;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		t737* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		t737* L_2 = p0;
		int32_t L_3 = 0;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))) == ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		t737* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
		t737* L_5 = m8277(NULL, (t2*) &_stringLiteral927, L_4, &m8277_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
		t2* L_6 = ((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20;
		t138 * L_7 = V_0;
		t1359 * L_8 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5841(L_8, L_6, L_7, &m5841_MI);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		t737* L_9 = p0;
		m8264(__this, L_9, &m8264_MI);
	}

IL_003d:
	{
		return;
	}
}
extern MethodInfo m8263_MI;
extern "C" void m8263 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral928, &m7888_MI);
		((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20 = L_0;
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8264 (t1656 * __this, t737* p0, MethodInfo* method)
{
	static bool m8264_init;
	if (!m8264_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8264_init = true;
	}
	t1650 * V_0 = {0};
	int32_t V_1 = 0;
	t1650 * V_2 = {0};
	t1650 * V_3 = {0};
	t1650 * V_4 = {0};
	t1650 * V_5 = {0};
	t1650 * V_6 = {0};
	t1650 * V_7 = {0};
	t1650 * V_8 = {0};
	t1650 * V_9 = {0};
	t1650 * V_10 = {0};
	t1650 * V_11 = {0};
	int32_t V_12 = 0;
	t737* V_13 = {0};
	t1650 * V_14 = {0};
	t1650 * V_15 = {0};
	t1650 * V_16 = {0};
	t138 * V_17 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1656 * G_B11_0 = {0};
	t1656 * G_B10_0 = {0};
	t737* G_B12_0 = {0};
	t1656 * G_B12_1 = {0};

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			t737* L_0 = p0;
			t1650 * L_1 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
			m8300(L_1, L_0, &m8300_MI);
			__this->f0 = L_1;
			t1650 * L_2 = (__this->f0);
			uint8_t L_3 = m8302(L_2, &m8302_MI);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0026;
			}
		}

IL_001b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
			t2* L_4 = ((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20;
			t1359 * L_5 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
			m5837(L_5, L_4, &m5837_MI);
			il2cpp_codegen_raise_exception(L_5);
		}

IL_0026:
		{
			t1650 * L_6 = (__this->f0);
			t1650 * L_7 = m8312(L_6, 0, &m8312_MI);
			uint8_t L_8 = m8302(L_7, &m8302_MI);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
			t2* L_9 = ((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20;
			t1359 * L_10 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
			m5837(L_10, L_9, &m5837_MI);
			il2cpp_codegen_raise_exception(L_10);
		}

IL_0046:
		{
			t1650 * L_11 = (__this->f0);
			t1650 * L_12 = m8312(L_11, 0, &m8312_MI);
			V_0 = L_12;
			V_1 = 0;
			t1650 * L_13 = (__this->f0);
			t1650 * L_14 = m8312(L_13, 0, &m8312_MI);
			int32_t L_15 = V_1;
			t1650 * L_16 = m8312(L_14, L_15, &m8312_MI);
			V_2 = L_16;
			__this->f15 = 1;
			t1650 * L_17 = V_2;
			uint8_t L_18 = m8302(L_17, &m8302_MI);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00a4;
			}
		}

IL_007c:
		{
			t1650 * L_19 = V_2;
			int32_t L_20 = m8301(L_19, &m8301_MI);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00a4;
			}
		}

IL_0085:
		{
			int32_t L_21 = (__this->f15);
			t1650 * L_22 = V_2;
			t1650 * L_23 = m8312(L_22, 0, &m8312_MI);
			t737* L_24 = m8304(L_23, &m8304_MI);
			int32_t L_25 = 0;
			__this->f15 = ((int32_t)((int32_t)L_21+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25))));
			int32_t L_26 = V_1;
			V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_00a4:
		{
			t1650 * L_27 = (__this->f0);
			t1650 * L_28 = m8312(L_27, 0, &m8312_MI);
			int32_t L_29 = V_1;
			int32_t L_30 = L_29;
			V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
			t1650 * L_31 = m8312(L_28, L_30, &m8312_MI);
			V_3 = L_31;
			t1650 * L_32 = V_3;
			uint8_t L_33 = m8302(L_32, &m8302_MI);
			if ((((int32_t)L_33) == ((int32_t)2)))
			{
				goto IL_00cf;
			}
		}

IL_00c4:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
			t2* L_34 = ((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20;
			t1359 * L_35 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
			m5837(L_35, L_34, &m5837_MI);
			il2cpp_codegen_raise_exception(L_35);
		}

IL_00cf:
		{
			t1650 * L_36 = V_3;
			t737* L_37 = m8304(L_36, &m8304_MI);
			__this->f16 = L_37;
			t737* L_38 = (__this->f16);
			t737* L_39 = (__this->f16);
			m6977(NULL, (t121 *)(t121 *)L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))), &m6977_MI);
			int32_t L_40 = V_1;
			V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
			t1650 * L_41 = V_0;
			int32_t L_42 = V_1;
			int32_t L_43 = L_42;
			V_1 = ((int32_t)((int32_t)L_43+(int32_t)1));
			t1650 * L_44 = m8313(L_41, L_43, ((int32_t)48), &m8313_MI);
			__this->f4 = L_44;
			t1650 * L_45 = (__this->f4);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1655_TI));
			t2* L_46 = m8259(NULL, L_45, &m8259_MI);
			__this->f5 = L_46;
			t1650 * L_47 = V_0;
			int32_t L_48 = V_1;
			int32_t L_49 = L_48;
			V_1 = ((int32_t)((int32_t)L_49+(int32_t)1));
			t1650 * L_50 = m8313(L_47, L_49, ((int32_t)48), &m8313_MI);
			V_4 = L_50;
			t1650 * L_51 = V_4;
			t1650 * L_52 = m8312(L_51, 0, &m8312_MI);
			V_5 = L_52;
			t1650 * L_53 = V_5;
			t272  L_54 = m8317(NULL, L_53, &m8317_MI);
			__this->f2 = L_54;
			t1650 * L_55 = V_4;
			t1650 * L_56 = m8312(L_55, 1, &m8312_MI);
			V_6 = L_56;
			t1650 * L_57 = V_6;
			t272  L_58 = m8317(NULL, L_57, &m8317_MI);
			__this->f3 = L_58;
			t1650 * L_59 = V_0;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			V_1 = ((int32_t)((int32_t)L_61+(int32_t)1));
			t1650 * L_62 = m8313(L_59, L_61, ((int32_t)48), &m8313_MI);
			__this->f8 = L_62;
			t1650 * L_63 = (__this->f8);
			t2* L_64 = m8259(NULL, L_63, &m8259_MI);
			__this->f9 = L_64;
			t1650 * L_65 = V_0;
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			V_1 = ((int32_t)((int32_t)L_67+(int32_t)1));
			t1650 * L_68 = m8313(L_65, L_67, ((int32_t)48), &m8313_MI);
			V_7 = L_68;
			t1650 * L_69 = V_7;
			t1650 * L_70 = m8313(L_69, 0, ((int32_t)48), &m8313_MI);
			V_8 = L_70;
			t1650 * L_71 = V_8;
			t1650 * L_72 = m8313(L_71, 0, 6, &m8313_MI);
			V_9 = L_72;
			t1650 * L_73 = V_9;
			t2* L_74 = m8316(NULL, L_73, &m8316_MI);
			__this->f6 = L_74;
			t1650 * L_75 = V_8;
			t1650 * L_76 = m8312(L_75, 1, &m8312_MI);
			V_10 = L_76;
			t1650 * L_77 = V_8;
			int32_t L_78 = m8301(L_77, &m8301_MI);
			G_B10_0 = __this;
			if ((((int32_t)L_78) <= ((int32_t)1)))
			{
				G_B11_0 = __this;
				goto IL_01c9;
			}
		}

IL_01c0:
		{
			t1650 * L_79 = V_10;
			t737* L_80 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m8309_MI, L_79);
			G_B12_0 = L_80;
			G_B12_1 = G_B10_0;
			goto IL_01ca;
		}

IL_01c9:
		{
			G_B12_0 = ((t737*)(NULL));
			G_B12_1 = G_B11_0;
		}

IL_01ca:
		{
			G_B12_1->f7 = G_B12_0;
			t1650 * L_81 = V_7;
			t1650 * L_82 = m8313(L_81, 1, 3, &m8313_MI);
			V_11 = L_82;
			t1650 * L_83 = V_11;
			int32_t L_84 = m8303(L_83, &m8303_MI);
			V_12 = ((int32_t)((int32_t)L_84-(int32_t)1));
			int32_t L_85 = V_12;
			__this->f10 = ((t737*)SZArrayNew(t737_TI_var, L_85));
			t1650 * L_86 = V_11;
			t737* L_87 = m8304(L_86, &m8304_MI);
			t737* L_88 = (__this->f10);
			int32_t L_89 = V_12;
			m5834(NULL, (t121 *)(t121 *)L_87, 1, (t121 *)(t121 *)L_88, 0, L_89, &m5834_MI);
			t1650 * L_90 = (__this->f0);
			t1650 * L_91 = m8312(L_90, 2, &m8312_MI);
			t737* L_92 = m8304(L_91, &m8304_MI);
			V_13 = L_92;
			t737* L_93 = V_13;
			__this->f11 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_93)->max_length)))-(int32_t)1))));
			t737* L_94 = V_13;
			t737* L_95 = (__this->f11);
			t737* L_96 = (__this->f11);
			m5834(NULL, (t121 *)(t121 *)L_94, 1, (t121 *)(t121 *)L_95, 0, (((int32_t)(((t121 *)L_96)->max_length))), &m5834_MI);
			t1650 * L_97 = (__this->f0);
			t1650 * L_98 = m8312(L_97, 1, &m8312_MI);
			V_8 = L_98;
			t1650 * L_99 = V_8;
			t1650 * L_100 = m8313(L_99, 0, 6, &m8313_MI);
			V_9 = L_100;
			t1650 * L_101 = V_9;
			t2* L_102 = m8316(NULL, L_101, &m8316_MI);
			__this->f12 = L_102;
			t1650 * L_103 = V_8;
			t1650 * L_104 = m8312(L_103, 1, &m8312_MI);
			V_10 = L_104;
			t1650 * L_105 = V_10;
			if (!L_105)
			{
				goto IL_0286;
			}
		}

IL_0277:
		{
			t1650 * L_106 = V_10;
			t737* L_107 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m8309_MI, L_106);
			__this->f13 = L_107;
			goto IL_028d;
		}

IL_0286:
		{
			__this->f13 = (t737*)NULL;
		}

IL_028d:
		{
			t1650 * L_108 = V_0;
			int32_t L_109 = V_1;
			t1650 * L_110 = m8313(L_108, L_109, ((int32_t)129), &m8313_MI);
			V_14 = L_110;
			t1650 * L_111 = V_14;
			if (!L_111)
			{
				goto IL_02b0;
			}
		}

IL_029f:
		{
			int32_t L_112 = V_1;
			V_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
			t1650 * L_113 = V_14;
			t737* L_114 = m8304(L_113, &m8304_MI);
			__this->f17 = L_114;
		}

IL_02b0:
		{
			t1650 * L_115 = V_0;
			int32_t L_116 = V_1;
			t1650 * L_117 = m8313(L_115, L_116, ((int32_t)130), &m8313_MI);
			V_15 = L_117;
			t1650 * L_118 = V_15;
			if (!L_118)
			{
				goto IL_02d3;
			}
		}

IL_02c2:
		{
			int32_t L_119 = V_1;
			V_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
			t1650 * L_120 = V_15;
			t737* L_121 = m8304(L_120, &m8304_MI);
			__this->f18 = L_121;
		}

IL_02d3:
		{
			t1650 * L_122 = V_0;
			int32_t L_123 = V_1;
			t1650 * L_124 = m8313(L_122, L_123, ((int32_t)163), &m8313_MI);
			V_16 = L_124;
			t1650 * L_125 = V_16;
			if (!L_125)
			{
				goto IL_0304;
			}
		}

IL_02e5:
		{
			t1650 * L_126 = V_16;
			int32_t L_127 = m8301(L_126, &m8301_MI);
			if ((!(((uint32_t)L_127) == ((uint32_t)1))))
			{
				goto IL_0304;
			}
		}

IL_02ef:
		{
			t1650 * L_128 = V_16;
			t1650 * L_129 = m8312(L_128, 0, &m8312_MI);
			t1657 * L_130 = (t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1657_TI));
			m8296(L_130, L_129, &m8296_MI);
			__this->f19 = L_130;
			goto IL_0310;
		}

IL_0304:
		{
			t1657 * L_131 = (t1657 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1657_TI));
			m8296(L_131, (t1650 *)NULL, &m8296_MI);
			__this->f19 = L_131;
		}

IL_0310:
		{
			t737* L_132 = p0;
			t9 * L_133 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_132);
			__this->f1 = ((t737*)Castclass(L_133, t737_TI_var));
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1656_TI));
		t2* L_134 = ((t1656_SFs*)InitializedTypeInfo(&t1656_TI)->static_fields)->f20;
		t138 * L_135 = V_17;
		t1359 * L_136 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5841(L_136, L_134, L_135, &m5841_MI);
		il2cpp_codegen_raise_exception(L_136);
		goto IL_0334;
	} // end catch (depth: 1)

IL_0334:
	{
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8265 (t1656 * __this, t737* p0, MethodInfo* method)
{
	static bool m8265_init;
	if (!m8265_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8265_init = true;
	}
	int32_t V_0 = 0;
	t737* V_1 = {0};
	{
		t737* L_0 = p0;
		int32_t L_1 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)))
		{
			goto IL_001e;
		}
	}
	{
		t737* L_2 = p0;
		V_0 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))-(int32_t)1));
		int32_t L_3 = V_0;
		V_1 = ((t737*)SZArrayNew(t737_TI_var, L_3));
		t737* L_4 = p0;
		t737* L_5 = V_1;
		int32_t L_6 = V_0;
		m5834(NULL, (t121 *)(t121 *)L_4, 1, (t121 *)(t121 *)L_5, 0, L_6, &m5834_MI);
		t737* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		t737* L_8 = p0;
		return L_8;
	}
}
extern "C" t1222 * m8266 (t1656 * __this, MethodInfo* method)
{
	t1358  V_0 = {0};
	t1650 * V_1 = {0};
	t1650 * V_2 = {0};
	{
		t737* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1359 * L_1 = (t1359 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1359_TI));
		m5837(L_1, (t2*) &_stringLiteral919, &m5837_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1222 * L_2 = (__this->f14);
		if (L_2)
		{
			goto IL_0113;
		}
	}
	{
		Initobj (InitializedTypeInfo(&t1358_TI), (&V_0));
		t737* L_3 = (__this->f10);
		t1650 * L_4 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_4, L_3, &m8300_MI);
		V_1 = L_4;
		t1650 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		t1650 * L_6 = V_1;
		uint8_t L_7 = m8302(L_6, &m8302_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return (t1222 *)NULL;
	}

IL_0040:
	{
		t1650 * L_8 = V_1;
		t737* L_9 = m8304(L_8, &m8304_MI);
		t737* L_10 = m8265(__this, L_9, &m8265_MI);
		(&V_0)->f7 = L_10;
		t737* L_11 = (__this->f7);
		t1650 * L_12 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_12, L_11, &m8300_MI);
		V_2 = L_12;
		t1650 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		t1650 * L_14 = V_2;
		uint8_t L_15 = m8302(L_14, &m8302_MI);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0075;
		}
	}
	{
		t1650 * L_16 = V_2;
		int32_t L_17 = m8301(L_16, &m8301_MI);
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0077;
		}
	}

IL_0075:
	{
		return (t1222 *)NULL;
	}

IL_0077:
	{
		t1650 * L_18 = V_2;
		t1650 * L_19 = m8312(L_18, 0, &m8312_MI);
		uint8_t L_20 = m8302(L_19, &m8302_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1650 * L_21 = V_2;
		t1650 * L_22 = m8312(L_21, 1, &m8312_MI);
		uint8_t L_23 = m8302(L_22, &m8302_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		t1650 * L_24 = V_2;
		t1650 * L_25 = m8312(L_24, 2, &m8312_MI);
		uint8_t L_26 = m8302(L_25, &m8302_MI);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00a6;
		}
	}

IL_00a4:
	{
		return (t1222 *)NULL;
	}

IL_00a6:
	{
		t1650 * L_27 = V_2;
		t1650 * L_28 = m8312(L_27, 0, &m8312_MI);
		t737* L_29 = m8304(L_28, &m8304_MI);
		t737* L_30 = m8265(__this, L_29, &m8265_MI);
		(&V_0)->f3 = L_30;
		t1650 * L_31 = V_2;
		t1650 * L_32 = m8312(L_31, 1, &m8312_MI);
		t737* L_33 = m8304(L_32, &m8304_MI);
		t737* L_34 = m8265(__this, L_33, &m8265_MI);
		(&V_0)->f4 = L_34;
		t1650 * L_35 = V_2;
		t1650 * L_36 = m8312(L_35, 2, &m8312_MI);
		t737* L_37 = m8304(L_36, &m8304_MI);
		t737* L_38 = m8265(__this, L_37, &m8265_MI);
		(&V_0)->f1 = L_38;
		t737* L_39 = ((&V_0)->f7);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1357_TI));
		t1357 * L_40 = (t1357 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1357_TI));
		m5842(L_40, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_39)->max_length)))<<(int32_t)3)), &m5842_MI);
		__this->f14 = L_40;
		t1222 * L_41 = (__this->f14);
		t1358  L_42 = V_0;
		VirtActionInvoker1< t1358  >::Invoke(&m5831_MI, L_41, L_42);
	}

IL_0113:
	{
		t1222 * L_43 = (__this->f14);
		return L_43;
	}
}
extern MethodInfo m8267_MI;
extern "C" t2* m8267 (t1656 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8268 (t1656 * __this, MethodInfo* method)
{
	static bool m8268_init;
	if (!m8268_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8268_init = true;
	}
	{
		t737* L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t737*)NULL;
	}

IL_000a:
	{
		t737* L_1 = (__this->f7);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t737*)Castclass(L_2, t737_TI_var));
	}
}
extern MethodInfo m8269_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m8269 (t1656 * __this, MethodInfo* method)
{
	static bool m8269_init;
	if (!m8269_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8269_init = true;
	}
	{
		t737* L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t737*)NULL;
	}

IL_000a:
	{
		t737* L_1 = (__this->f10);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t737*)Castclass(L_2, t737_TI_var));
	}
}
extern MethodInfo m8270_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m8270 (t1656 * __this, MethodInfo* method)
{
	static bool m8270_init;
	if (!m8270_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8270_init = true;
	}
	{
		t737* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t737*)NULL;
	}

IL_000a:
	{
		t737* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t737*)Castclass(L_2, t737_TI_var));
	}
}
extern MethodInfo m8271_MI;
extern "C" t2* m8271 (t1656 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8272_MI;
extern "C" t272  m8272 (t1656 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8273_MI;
extern "C" t272  m8273 (t1656 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8274_MI;
extern "C" t1650 * m8274 (t1656 * __this, MethodInfo* method)
{
	{
		t1650 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m8275_MI;
extern "C" t1650 * m8275 (t1656 * __this, MethodInfo* method)
{
	{
		t1650 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8276_MI;
extern "C" void m8276 (t1656 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t737* L_1 = (__this->f1);
		m5785(L_0, (t2*) &_stringLiteral932, (t9 *)(t9 *)L_1, &m5785_MI);
		return;
	}
}
extern "C" t737* m8277 (t9 * __this , t2* p0, t737* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t2* V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_0 = m4308(NULL, &m4308_MI);
		t737* L_1 = p1;
		t2* L_2 = (t2*)VirtFuncInvoker1< t2*, t737* >::Invoke(&m5870_MI, L_0, L_1);
		V_0 = L_2;
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m590(NULL, (t2*) &_stringLiteral933, L_3, &m590_MI);
		V_1 = L_4;
		t2* L_5 = p0;
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral934, L_5, &m590_MI);
		V_2 = L_6;
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = m4323(L_7, L_8, &m4323_MI);
		t2* L_10 = V_1;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)L_11));
		t2* L_12 = V_0;
		t2* L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = m4488(L_12, L_13, L_14, &m4488_MI);
		V_4 = L_15;
		t2* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		t2* L_20 = m2779(L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2779_MI);
		V_5 = L_20;
		t2* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t737* L_22 = m6984(NULL, L_21, &m6984_MI);
		return L_22;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t672_TI;
extern MethodInfo m4410_MI;


extern MethodInfo m8278_MI;
extern "C" void m8278 (t1658 * __this, t1653 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1653 * L_0 = p0;
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4410_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m8279_MI;
extern "C" t9 * m8279 (t1658 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8280_MI;
extern "C" bool m8280 (t1658 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_0);
		return L_1;
	}
}
extern "C" t1656 * m8281 (t1658 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_0);
		return ((t1656 *)Castclass(L_1, InitializedTypeInfo(&t1656_TI)));
	}
}
extern "C" bool m8282 (t1658 * __this, MethodInfo* method)
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

extern MethodInfo m5889_MI;
extern MethodInfo m5766_MI;
extern MethodInfo m5896_MI;
extern MethodInfo m672_MI;


extern "C" void m8283 (t1653 * __this, MethodInfo* method)
{
	{
		m5896(__this, &m5896_MI);
		return;
	}
}
extern MethodInfo m8284_MI;
extern "C" t9 * m8284 (t1653 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8285_MI;
extern "C" t1656 * m8285 (t1653 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return ((t1656 *)Castclass(L_2, InitializedTypeInfo(&t1656_TI)));
	}
}
extern "C" int32_t m8286 (t1653 * __this, t1656 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral607, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1176 * L_2 = m5889(__this, &m5889_MI);
		t1656 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_2, L_3);
		return L_4;
	}
}
extern "C" t1658 * m8287 (t1653 * __this, MethodInfo* method)
{
	{
		t1658 * L_0 = (t1658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1658_TI));
		m8278(L_0, __this, &m8278_MI);
		return L_0;
	}
}
extern MethodInfo m8288_MI;
extern "C" int32_t m8288 (t1653 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, L_0);
		return L_1;
	}
}
#include "t1659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1659_TI;
#include "t1659MD.h"

#include "t907.h"
extern TypeInfo t907_TI;
extern TypeInfo t912_TI;
#include "t907MD.h"
#include "t582MD.h"
#include "t899MD.h"
extern MethodInfo m8305_MI;
extern MethodInfo m8308_MI;
extern MethodInfo m8290_MI;
extern MethodInfo m4273_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m6939_MI;
extern MethodInfo m6986_MI;
extern MethodInfo m5845_MI;
extern MethodInfo m8293_MI;


extern MethodInfo m8289_MI;
extern "C" void m8289 (t1659 * __this, t1650 * p0, MethodInfo* method)
{
	t1650 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	t1659 * G_B7_0 = {0};
	t1659 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t1659 * G_B8_1 = {0};
	{
		m336(__this, &m336_MI);
		t1650 * L_0 = p0;
		uint8_t L_1 = m8302(L_0, &m8302_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1650 * L_2 = p0;
		int32_t L_3 = m8301(L_2, &m8301_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0019:
	{
		t2* L_4 = m7888(NULL, (t2*) &_stringLiteral940, &m7888_MI);
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, L_4, &m2949_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t1650 * L_6 = p0;
		t1650 * L_7 = m8312(L_6, 0, &m8312_MI);
		uint8_t L_8 = m8302(L_7, &m8302_MI);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0048;
		}
	}
	{
		t2* L_9 = m7888(NULL, (t2*) &_stringLiteral940, &m7888_MI);
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_10, L_9, &m2949_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0048:
	{
		t1650 * L_11 = p0;
		t1650 * L_12 = m8312(L_11, 0, &m8312_MI);
		t2* L_13 = m8316(NULL, L_12, &m8316_MI);
		__this->f0 = L_13;
		t1650 * L_14 = p0;
		t1650 * L_15 = m8312(L_14, 1, &m8312_MI);
		uint8_t L_16 = m8302(L_15, &m8302_MI);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_0081;
		}
	}
	{
		t1650 * L_17 = p0;
		t1650 * L_18 = m8312(L_17, 1, &m8312_MI);
		t737* L_19 = m8304(L_18, &m8304_MI);
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
		t1650 * L_21 = p0;
		t1650 * L_22 = p0;
		int32_t L_23 = m8301(L_22, &m8301_MI);
		t1650 * L_24 = m8312(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), &m8312_MI);
		__this->f2 = L_24;
		t1650 * L_25 = (__this->f2);
		uint8_t L_26 = m8302(L_25, &m8302_MI);
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		t1650 * L_27 = (__this->f2);
		int32_t L_28 = m8303(L_27, &m8303_MI);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		t1650 * L_29 = (__this->f2);
		int32_t L_30 = m8301(L_29, &m8301_MI);
		if (L_30)
		{
			goto IL_00f3;
		}
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		t1650 * L_31 = (__this->f2);
		t737* L_32 = m8304(L_31, &m8304_MI);
		t1650 * L_33 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_33, L_32, &m8300_MI);
		V_0 = L_33;
		t1650 * L_34 = (__this->f2);
		m8305(L_34, (t737*)(t737*)NULL, &m8305_MI);
		t1650 * L_35 = (__this->f2);
		t1650 * L_36 = V_0;
		m8308(L_35, L_36, &m8308_MI);
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
		VirtActionInvoker0::Invoke(&m8290_MI, __this);
		return;
	}
}
extern "C" void m8290 (t1659 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8291_MI;
extern "C" bool m8291 (t1659 * __this, t9 * p0, MethodInfo* method)
{
	t1659 * V_0 = {0};
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
		V_0 = ((t1659 *)IsInst(L_1, InitializedTypeInfo(&t1659_TI)));
		t1659 * L_2 = V_0;
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
		t1659 * L_4 = V_0;
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
		t1659 * L_7 = V_0;
		t2* L_8 = (L_7->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_9 = m2777(NULL, L_6, L_8, &m2777_MI);
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
		t1650 * L_10 = (__this->f2);
		int32_t L_11 = m8303(L_10, &m8303_MI);
		t1659 * L_12 = V_0;
		t1650 * L_13 = (L_12->f2);
		int32_t L_14 = m8303(L_13, &m8303_MI);
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
		t1650 * L_15 = (__this->f2);
		int32_t L_16 = V_1;
		t1650 * L_17 = m8312(L_15, L_16, &m8312_MI);
		t1659 * L_18 = V_0;
		t1650 * L_19 = (L_18->f2);
		int32_t L_20 = V_1;
		t1650 * L_21 = m8312(L_19, L_20, &m8312_MI);
		if ((((t9*)(t1650 *)L_17) == ((t9*)(t1650 *)L_21)))
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
		t1650 * L_24 = (__this->f2);
		int32_t L_25 = m8303(L_24, &m8303_MI);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		return 1;
	}
}
extern MethodInfo m8292_MI;
extern "C" int32_t m8292 (t1659 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_0);
		return L_1;
	}
}
extern "C" void m8293 (t1659 * __this, t328 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t737* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		t1650 * L_0 = (__this->f2);
		t737* L_1 = m8304(L_0, &m8304_MI);
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
		t328 * L_5 = p0;
		t737* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_9 = m4400(NULL, &m4400_MI);
		t2* L_10 = m6939(((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)), (t2*) &_stringLiteral575, L_9, &m6939_MI);
		m1207(L_5, L_10, &m1207_MI);
		t328 * L_11 = p0;
		m1207(L_11, (t2*) &_stringLiteral163, &m1207_MI);
		goto IL_0051;
	}

IL_0045:
	{
		t328 * L_12 = p0;
		m1207(L_12, (t2*) &_stringLiteral942, &m1207_MI);
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
		t328 * L_15 = p0;
		m1207(L_15, (t2*) &_stringLiteral943, &m1207_MI);
		int32_t L_16 = p2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		t737* L_17 = V_0;
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
		t328 * L_22 = p0;
		m1207(L_22, (t2*) &_stringLiteral135, &m1207_MI);
		goto IL_0096;
	}

IL_0088:
	{
		t328 * L_23 = p0;
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		uint16_t L_25 = m6986(NULL, L_24, &m6986_MI);
		m2797(L_23, L_25, &m2797_MI);
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
		t328 * L_29 = p0;
		t2* L_30 = m5845(NULL, &m5845_MI);
		m1207(L_29, L_30, &m1207_MI);
		return;
	}
}
extern MethodInfo m8294_MI;
extern "C" t2* m8294 (t1659 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		t1650 * L_1 = (__this->f2);
		int32_t L_2 = m8303(L_1, &m8303_MI);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		t1650 * L_3 = (__this->f2);
		int32_t L_4 = m8303(L_3, &m8303_MI);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		t328 * L_6 = V_0;
		int32_t L_7 = V_3;
		m8293(__this, L_6, 8, L_7, &m8293_MI);
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
		t328 * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		m8293(__this, L_12, L_13, L_14, &m8293_MI);
		t328 * L_15 = V_0;
		t2* L_16 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_15);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t138MD.h"
extern MethodInfo m8295_MI;
extern MethodInfo m379_MI;


extern "C" void m8295 (t1657 * __this, MethodInfo* method)
{
	{
		m5896(__this, &m5896_MI);
		return;
	}
}
extern "C" void m8296 (t1657 * __this, t1650 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1659 * V_1 = {0};
	{
		m8295(__this, &m8295_MI);
		__this->f1 = 1;
		t1650 * L_0 = p0;
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
		t1650 * L_1 = p0;
		uint8_t L_2 = m8302(L_1, &m8302_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral944, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		t1650 * L_4 = p0;
		int32_t L_5 = V_0;
		t1650 * L_6 = m8312(L_4, L_5, &m8312_MI);
		t1659 * L_7 = (t1659 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1659_TI));
		m8289(L_7, L_6, &m8289_MI);
		V_1 = L_7;
		t1176 * L_8 = m5889(__this, &m5889_MI);
		t1659 * L_9 = V_1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		t1650 * L_12 = p0;
		int32_t L_13 = m8301(L_12, &m8301_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m8297_MI;
extern "C" t9 * m8297 (t1657 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5764_MI;
extern MethodInfo m8299_MI;
extern MethodInfo m8310_MI;
extern MethodInfo m8306_MI;
extern MethodInfo m8311_MI;
extern MethodInfo m5862_MI;
extern MethodInfo m5883_MI;
extern MethodInfo m5792_MI;
extern MethodInfo m6931_MI;


extern MethodInfo m8298_MI;
extern "C" void m8298 (t1650 * __this, uint8_t p0, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		m8299(__this, L_0, (t737*)(t737*)NULL, &m8299_MI);
		return;
	}
}
extern "C" void m8299 (t1650 * __this, uint8_t p0, t737* p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		t737* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8300 (t1650 * __this, t737* p0, MethodInfo* method)
{
	static bool m8300_init;
	if (!m8300_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8300_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t737* L_0 = p0;
		int32_t L_1 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1));
		V_0 = 0;
		t737* L_2 = p0;
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
		t737* L_8 = p0;
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
		m5776(L_15, (t2*) &_stringLiteral783, &m5776_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0058:
	{
		int32_t L_16 = V_1;
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, L_16));
		t737* L_17 = p0;
		int32_t L_18 = V_0;
		t737* L_19 = (__this->f1);
		int32_t L_20 = V_1;
		m5834(NULL, (t121 *)(t121 *)L_17, ((int32_t)((int32_t)2+(int32_t)L_18)), (t121 *)(t121 *)L_19, 0, L_20, &m5834_MI);
		uint8_t L_21 = (__this->f0);
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_0;
		V_3 = ((int32_t)((int32_t)2+(int32_t)L_22));
		t737* L_23 = p0;
		t737* L_24 = p0;
		m8310(__this, L_23, (&V_3), (((int32_t)(((t121 *)L_24)->max_length))), &m8310_MI);
	}

IL_0092:
	{
		return;
	}
}
extern "C" int32_t m8301 (t1650 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f2);
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
		t1176 * L_1 = (__this->f2);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_1);
		return L_2;
	}
}
extern "C" uint8_t m8302 (t1650 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m8303 (t1650 * __this, MethodInfo* method)
{
	{
		t737* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		t737* L_1 = (__this->f1);
		return (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0011:
	{
		return 0;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8304 (t1650 * __this, MethodInfo* method)
{
	static bool m8304_init;
	if (!m8304_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8304_init = true;
	}
	{
		t737* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		VirtFuncInvoker0< t737* >::Invoke(&m8309_MI, __this);
	}

IL_000f:
	{
		t737* L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t737*)Castclass(L_2, t737_TI_var));
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8305 (t1650 * __this, t737* p0, MethodInfo* method)
{
	static bool m8305_init;
	if (!m8305_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8305_init = true;
	}
	{
		t737* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t737* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		__this->f1 = ((t737*)Castclass(L_2, t737_TI_var));
	}

IL_0014:
	{
		return;
	}
}
extern "C" bool m8306 (t1650 * __this, t737* p0, t737* p1, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		t737* L_0 = p0;
		t737* L_1 = p1;
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
		t737* L_3 = p0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		t737* L_6 = p1;
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
		t737* L_11 = p0;
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
extern "C" bool m8307 (t1650 * __this, t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = (__this->f1);
		t737* L_1 = p0;
		bool L_2 = m8306(__this, L_0, L_1, &m8306_MI);
		return L_2;
	}
}
extern "C" t1650 * m8308 (t1650 * __this, t1650 * p0, MethodInfo* method)
{
	{
		t1650 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t1176 * L_1 = (__this->f2);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_2 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_2, &m5768_MI);
		__this->f2 = L_2;
	}

IL_0016:
	{
		t1176 * L_3 = (__this->f2);
		t1650 * L_4 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_3, L_4);
	}

IL_0023:
	{
		t1650 * L_5 = p0;
		return L_5;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8309 (t1650 * __this, MethodInfo* method)
{
	static bool m8309_init;
	if (!m8309_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8309_init = true;
	}
	t737* V_0 = {0};
	int32_t V_1 = 0;
	t1176 * V_2 = {0};
	t1650 * V_3 = {0};
	t9 * V_4 = {0};
	t737* V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	t737* V_8 = {0};
	t737* V_9 = {0};
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
		V_0 = (t737*)NULL;
		int32_t L_0 = m8301(__this, &m8301_MI);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		V_2 = L_1;
		t1176 * L_2 = (__this->f2);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_2);
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
			V_3 = ((t1650 *)Castclass(L_5, InitializedTypeInfo(&t1650_TI)));
			t1650 * L_6 = V_3;
			t737* L_7 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m8309_MI, L_6);
			V_5 = L_7;
			t1176 * L_8 = V_2;
			t737* L_9 = V_5;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_8, (t9 *)(t9 *)L_9);
			int32_t L_10 = V_1;
			t737* L_11 = V_5;
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
		V_0 = ((t737*)SZArrayNew(t737_TI_var, L_17));
		V_6 = 0;
		V_7 = 0;
		goto IL_00a7;
	}

IL_007a:
	{
		t1176 * L_18 = V_2;
		int32_t L_19 = V_7;
		t9 * L_20 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_18, L_19);
		V_8 = ((t737*)Castclass(L_20, t737_TI_var));
		t737* L_21 = V_8;
		t737* L_22 = V_0;
		int32_t L_23 = V_6;
		t737* L_24 = V_8;
		m5834(NULL, (t121 *)(t121 *)L_21, 0, (t121 *)(t121 *)L_22, L_23, (((int32_t)(((t121 *)L_24)->max_length))), &m5834_MI);
		int32_t L_25 = V_6;
		t737* L_26 = V_8;
		V_6 = ((int32_t)((int32_t)L_25+(int32_t)(((int32_t)(((t121 *)L_26)->max_length)))));
		int32_t L_27 = V_7;
		V_7 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_7;
		t1176 * L_29 = (__this->f2);
		int32_t L_30 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_29);
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
		t737* L_31 = (__this->f1);
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		t737* L_32 = (__this->f1);
		V_0 = L_32;
	}

IL_00c7:
	{
		V_10 = 0;
		t737* L_33 = V_0;
		if (!L_33)
		{
			goto IL_0200;
		}
	}
	{
		t737* L_34 = V_0;
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
		V_9 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)3+(int32_t)L_37))));
		t737* L_38 = V_0;
		t737* L_39 = V_9;
		int32_t L_40 = V_11;
		m5834(NULL, (t121 *)(t121 *)L_38, 0, (t121 *)(t121 *)L_39, 3, L_40, &m5834_MI);
		V_10 = ((int32_t)129);
		t737* L_41 = V_9;
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
		V_9 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)4+(int32_t)L_44))));
		t737* L_45 = V_0;
		t737* L_46 = V_9;
		int32_t L_47 = V_11;
		m5834(NULL, (t121 *)(t121 *)L_45, 0, (t121 *)(t121 *)L_46, 4, L_47, &m5834_MI);
		V_10 = ((int32_t)130);
		t737* L_48 = V_9;
		int32_t L_49 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_49>>(int32_t)8))));
		t737* L_50 = V_9;
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
		V_9 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)5+(int32_t)L_53))));
		t737* L_54 = V_0;
		t737* L_55 = V_9;
		int32_t L_56 = V_11;
		m5834(NULL, (t121 *)(t121 *)L_54, 0, (t121 *)(t121 *)L_55, 5, L_56, &m5834_MI);
		V_10 = ((int32_t)131);
		t737* L_57 = V_9;
		int32_t L_58 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_58>>(int32_t)((int32_t)16)))));
		t737* L_59 = V_9;
		int32_t L_60 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_59, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_60>>(int32_t)8))));
		t737* L_61 = V_9;
		int32_t L_62 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_61, 4)) = (uint8_t)(((uint8_t)L_62));
		goto IL_01d2;
	}

IL_0190:
	{
		int32_t L_63 = V_11;
		V_9 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)6+(int32_t)L_63))));
		t737* L_64 = V_0;
		t737* L_65 = V_9;
		int32_t L_66 = V_11;
		m5834(NULL, (t121 *)(t121 *)L_64, 0, (t121 *)(t121 *)L_65, 6, L_66, &m5834_MI);
		V_10 = ((int32_t)132);
		t737* L_67 = V_9;
		int32_t L_68 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_68>>(int32_t)((int32_t)24)))));
		t737* L_69 = V_9;
		int32_t L_70 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_69, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_70>>(int32_t)((int32_t)16)))));
		t737* L_71 = V_9;
		int32_t L_72 = V_11;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, 4)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72>>(int32_t)8))));
		t737* L_73 = V_9;
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
		V_9 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)2+(int32_t)L_75))));
		t737* L_76 = V_0;
		t737* L_77 = V_9;
		int32_t L_78 = V_11;
		m5834(NULL, (t121 *)(t121 *)L_76, 0, (t121 *)(t121 *)L_77, 2, L_78, &m5834_MI);
		int32_t L_79 = V_11;
		V_10 = L_79;
	}

IL_01ef:
	{
		t737* L_80 = (__this->f1);
		if (L_80)
		{
			goto IL_01fe;
		}
	}
	{
		t737* L_81 = V_0;
		__this->f1 = L_81;
	}

IL_01fe:
	{
		goto IL_0208;
	}

IL_0200:
	{
		V_9 = ((t737*)SZArrayNew(t737_TI_var, 2));
	}

IL_0208:
	{
		t737* L_82 = V_9;
		uint8_t L_83 = (__this->f0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_82, 0)) = (uint8_t)L_83;
		t737* L_84 = V_9;
		int32_t L_85 = V_10;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_84, 1)) = (uint8_t)(((uint8_t)L_85));
		t737* L_86 = V_9;
		return L_86;
	}
}
extern "C" void m8310 (t1650 * __this, t737* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	t737* V_2 = {0};
	t1650 * V_3 = {0};
	int32_t V_4 = 0;
	{
		goto IL_0042;
	}

IL_0002:
	{
		t737* L_0 = p0;
		int32_t* L_1 = p1;
		m8311(__this, L_0, L_1, (&V_0), (&V_1), (&V_2), &m8311_MI);
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
		t737* L_4 = V_2;
		t1650 * L_5 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8299(L_5, L_3, L_4, &m8299_MI);
		t1650 * L_6 = m8308(__this, L_5, &m8308_MI);
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
		t1650 * L_9 = V_3;
		t737* L_10 = p0;
		int32_t L_11 = V_4;
		int32_t L_12 = V_1;
		m8310(L_9, L_10, (&V_4), ((int32_t)((int32_t)L_11+(int32_t)L_12)), &m8310_MI);
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
extern TypeInfo* t737_TI_var;
extern "C" void m8311 (t1650 * __this, t737* p0, int32_t* p1, uint8_t* p2, int32_t* p3, t737** p4, MethodInfo* method)
{
	static bool m8311_init;
	if (!m8311_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8311_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint8_t* L_0 = p2;
		t737* L_1 = p0;
		int32_t* L_2 = p1;
		int32_t* L_3 = p1;
		int32_t L_4 = (*((int32_t*)L_3));
		V_2 = L_4;
		*((int32_t*)(L_2)) = (int32_t)((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		*((int8_t*)(L_0)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_6));
		int32_t* L_7 = p3;
		t737* L_8 = p0;
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
		t737* L_19 = p0;
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
		t737** L_28 = p4;
		int32_t* L_29 = p3;
		*((t9 **)(L_28)) = (t9 *)((t737*)SZArrayNew(t737_TI_var, (*((int32_t*)L_29))));
		t737* L_30 = p0;
		int32_t* L_31 = p1;
		t737** L_32 = p4;
		int32_t* L_33 = p3;
		m5834(NULL, (t121 *)(t121 *)L_30, (*((int32_t*)L_31)), (t121 *)(t121 *)(*((t737**)L_32)), 0, (*((int32_t*)L_33)), &m5834_MI);
		return;
	}
}
extern "C" t1650 * m8312 (t1650 * __this, int32_t p0, MethodInfo* method)
{
	t1650 * V_0 = {0};
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
			t1176 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1176 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_0 = (t1650 *)NULL;
			goto IL_0037;
		}

IL_001a:
		{
			t1176 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_4, L_5);
			V_0 = ((t1650 *)Castclass(L_6, InitializedTypeInfo(&t1650_TI)));
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
		if(il2cpp_codegen_class_is_assignable_from (&t909_TI, e.ex->object.klass))
			goto CATCH_0030;
		throw e;
	}

CATCH_0030:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_0 = (t1650 *)NULL;
			goto IL_0037;
		}

IL_0035:
		{
			goto IL_0037;
		}
	} // end catch (depth: 1)

IL_0037:
	{
		t1650 * L_7 = V_0;
		return L_7;
	}
}
extern "C" t1650 * m8313 (t1650 * __this, int32_t p0, uint8_t p1, MethodInfo* method)
{
	t1650 * V_0 = {0};
	t1650 * V_1 = {0};
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
			t1176 * L_0 = (__this->f2);
			if (!L_0)
			{
				goto IL_0016;
			}
		}

IL_0008:
		{
			int32_t L_1 = p0;
			t1176 * L_2 = (__this->f2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_2);
			if ((((int32_t)L_1) < ((int32_t)L_3)))
			{
				goto IL_001a;
			}
		}

IL_0016:
		{
			V_1 = (t1650 *)NULL;
			goto IL_0046;
		}

IL_001a:
		{
			t1176 * L_4 = (__this->f2);
			int32_t L_5 = p0;
			t9 * L_6 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_4, L_5);
			V_0 = ((t1650 *)Castclass(L_6, InitializedTypeInfo(&t1650_TI)));
			t1650 * L_7 = V_0;
			uint8_t L_8 = m8302(L_7, &m8302_MI);
			uint8_t L_9 = p1;
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0039;
			}
		}

IL_0035:
		{
			t1650 * L_10 = V_0;
			V_1 = L_10;
			goto IL_0046;
		}

IL_0039:
		{
			V_1 = (t1650 *)NULL;
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
		if(il2cpp_codegen_class_is_assignable_from (&t909_TI, e.ex->object.klass))
			goto CATCH_003f;
		throw e;
	}

CATCH_003f:
	{ // begin catch(System.ArgumentOutOfRangeException)
		{
			V_1 = (t1650 *)NULL;
			goto IL_0046;
		}

IL_0044:
		{
			goto IL_0046;
		}
	} // end catch (depth: 1)

IL_0046:
	{
		t1650 * L_11 = V_1;
		return L_11;
	}
}
extern MethodInfo m8314_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m8314 (t1650 * __this, MethodInfo* method)
{
	static bool m8314_init;
	if (!m8314_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8314_init = true;
	}
	t328 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		t328 * L_1 = V_0;
		uint8_t* L_2 = &(__this->f0);
		t2* L_3 = m5862(L_2, (t2*) &_stringLiteral575, &m5862_MI);
		t2* L_4 = m5845(NULL, &m5845_MI);
		m5883(L_1, (t2*) &_stringLiteral784, L_3, L_4, &m5883_MI);
		t328 * L_5 = V_0;
		t737* L_6 = m8304(__this, &m8304_MI);
		int32_t L_7 = (((int32_t)(((t121 *)L_6)->max_length)));
		t9 * L_8 = Box(InitializedTypeInfo(&t125_TI), &L_7);
		t2* L_9 = m5845(NULL, &m5845_MI);
		m5883(L_5, (t2*) &_stringLiteral785, L_8, L_9, &m5883_MI);
		t328 * L_10 = V_0;
		m1207(L_10, (t2*) &_stringLiteral786, &m1207_MI);
		t328 * L_11 = V_0;
		t2* L_12 = m5845(NULL, &m5845_MI);
		m1207(L_11, L_12, &m1207_MI);
		V_1 = 0;
		goto IL_00a1;
	}

IL_0061:
	{
		t328 * L_13 = V_0;
		t737* L_14 = m8304(__this, &m8304_MI);
		int32_t L_15 = V_1;
		t2* L_16 = m5862(((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15)), (t2*) &_stringLiteral575, &m5862_MI);
		m5792(L_13, (t2*) &_stringLiteral787, L_16, &m5792_MI);
		int32_t L_17 = V_1;
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_17+(int32_t)1))%(int32_t)((int32_t)16))))
		{
			goto IL_009d;
		}
	}
	{
		t328 * L_18 = V_0;
		t2* L_19 = m5845(NULL, &m5845_MI);
		m6931(L_18, L_19, ((t158*)SZArrayNew(t158_TI_var, 0)), &m6931_MI);
	}

IL_009d:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_21 = V_1;
		t737* L_22 = m8304(__this, &m8304_MI);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t121 *)L_22)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		t328 * L_23 = V_0;
		t2* L_24 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_23);
		return L_24;
	}
}
#include "t1660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1660_TI;

#include "t897.h"
#include "t896.h"
#include "t341.h"
#include "t1531.h"
extern TypeInfo t897_TI;
extern TypeInfo t896_TI;
extern TypeInfo t272_TI;
#include "t897MD.h"
#include "t896MD.h"
#include "t272MD.h"
extern MethodInfo m4354_MI;
extern MethodInfo m6933_MI;
extern MethodInfo m4412_MI;
extern MethodInfo m6934_MI;
extern MethodInfo m2948_MI;
extern MethodInfo m6935_MI;


extern "C" int32_t m8315 (t9 * __this , t1650 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t1650 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral788, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1650 * L_2 = p0;
		uint8_t L_3 = m8302(L_2, &m8302_MI);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		t897 * L_4 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_4, (t2*) &_stringLiteral789, &m4354_MI);
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
		t1650 * L_6 = p0;
		t737* L_7 = m8304(L_6, &m8304_MI);
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)8))+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_11 = V_1;
		t1650 * L_12 = p0;
		t737* L_13 = m8304(L_12, &m8304_MI);
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
extern "C" t2* m8316 (t9 * __this , t1650 * p0, MethodInfo* method)
{
	t737* V_0 = {0};
	t328 * V_1 = {0};
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint64_t V_4 = 0;
	{
		t1650 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral788, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1650 * L_2 = p0;
		t737* L_3 = m8304(L_2, &m8304_MI);
		V_0 = L_3;
		t328 * L_4 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_4, &m1203_MI);
		V_1 = L_4;
		t737* L_5 = V_0;
		int32_t L_6 = 0;
		V_2 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6))/(int32_t)((int32_t)40)))));
		t737* L_7 = V_0;
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
		t328 * L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_13 = m4400(NULL, &m4400_MI);
		t2* L_14 = m6933((&V_2), L_13, &m6933_MI);
		m1207(L_12, L_14, &m1207_MI);
		t328 * L_15 = V_1;
		m1207(L_15, (t2*) &_stringLiteral135, &m1207_MI);
		t328 * L_16 = V_1;
		t907 * L_17 = m4400(NULL, &m4400_MI);
		t2* L_18 = m6933((&V_3), L_17, &m6933_MI);
		m1207(L_16, L_18, &m1207_MI);
		V_4 = (((int64_t)0));
		V_2 = 1;
		goto IL_00bd;
	}

IL_0076:
	{
		uint64_t L_19 = V_4;
		t737* L_20 = V_0;
		uint8_t L_21 = V_2;
		uint8_t L_22 = L_21;
		V_4 = ((int64_t)((int64_t)((int64_t)((int64_t)L_19<<(int32_t)7))|(int64_t)(((uint64_t)(((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))&(int32_t)((int32_t)127)))))))));
		t737* L_23 = V_0;
		uint8_t L_24 = V_2;
		uint8_t L_25 = L_24;
		if ((((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25))&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128))))
		{
			goto IL_00b8;
		}
	}
	{
		t328 * L_26 = V_1;
		m1207(L_26, (t2*) &_stringLiteral135, &m1207_MI);
		t328 * L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_28 = m4400(NULL, &m4400_MI);
		t2* L_29 = m4412((&V_4), L_28, &m4412_MI);
		m1207(L_27, L_29, &m1207_MI);
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
		t737* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_0076;
		}
	}
	{
		t328 * L_33 = V_1;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_33);
		return L_34;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t272  m8317 (t9 * __this , t1650 * p0, MethodInfo* method)
{
	static bool m8317_init;
	if (!m8317_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8317_init = true;
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
		t1650 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral790, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_2 = m4308(NULL, &m4308_MI);
		t1650 * L_3 = p0;
		t737* L_4 = m8304(L_3, &m8304_MI);
		t2* L_5 = (t2*)VirtFuncInvoker1< t2*, t737* >::Invoke(&m5870_MI, L_2, L_4);
		V_0 = L_5;
		V_1 = (t2*)NULL;
		t2* L_6 = V_0;
		int32_t L_7 = m2763(L_6, &m2763_MI);
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
		V_1 = (t2*) &_stringLiteral791;
		goto IL_0153;
	}

IL_005f:
	{
		t2* L_9 = V_0;
		t2* L_10 = m2779(L_9, 0, 2, &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_11 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int16_t L_12 = m6934(NULL, L_10, L_11, &m6934_MI);
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
		t2* L_15 = m610(NULL, (t2*) &_stringLiteral792, L_14, &m610_MI);
		V_0 = L_15;
		goto IL_0091;
	}

IL_0085:
	{
		t2* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m610(NULL, (t2*) &_stringLiteral793, L_16, &m610_MI);
		V_0 = L_17;
	}

IL_0091:
	{
		V_1 = (t2*) &_stringLiteral794;
		goto IL_0153;
	}

IL_009c:
	{
		V_1 = (t2*) &_stringLiteral794;
		goto IL_0153;
	}

IL_00a7:
	{
		t2* L_18 = V_0;
		t2* L_19 = m2779(L_18, 0, 2, &m2779_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_20 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int16_t L_21 = m6934(NULL, L_19, L_20, &m6934_MI);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)50))))
		{
			goto IL_00c6;
		}
	}
	{
		G_B13_0 = (t2*) &_stringLiteral792;
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B13_0 = (t2*) &_stringLiteral793;
	}

IL_00cb:
	{
		V_3 = G_B13_0;
		t2* L_23 = V_0;
		uint16_t L_24 = m2778(L_23, ((int32_t)12), &m2778_MI);
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
		t2* L_29 = m2779(L_28, 0, ((int32_t)12), &m2779_MI);
		ArrayElementTypeCheck (L_27, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 1)) = (t9 *)L_29;
		t158* L_30 = L_27;
		uint16_t L_31 = V_4;
		uint16_t L_32 = L_31;
		t9 * L_33 = Box(InitializedTypeInfo(&t309_TI), &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 2)) = (t9 *)L_33;
		t158* L_34 = L_30;
		t2* L_35 = V_0;
		uint16_t L_36 = m2778(L_35, ((int32_t)13), &m2778_MI);
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t309_TI), &L_37);
		ArrayElementTypeCheck (L_34, L_38);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 3)) = (t9 *)L_38;
		t158* L_39 = L_34;
		t2* L_40 = V_0;
		uint16_t L_41 = m2778(L_40, ((int32_t)14), &m2778_MI);
		uint16_t L_42 = L_41;
		t9 * L_43 = Box(InitializedTypeInfo(&t309_TI), &L_42);
		ArrayElementTypeCheck (L_39, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_39, 4)) = (t9 *)L_43;
		t158* L_44 = L_39;
		t2* L_45 = V_0;
		uint16_t L_46 = m2778(L_45, ((int32_t)15), &m2778_MI);
		uint16_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t309_TI), &L_47);
		ArrayElementTypeCheck (L_44, L_48);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, 5)) = (t9 *)L_48;
		t158* L_49 = L_44;
		t2* L_50 = V_0;
		uint16_t L_51 = m2778(L_50, ((int32_t)16), &m2778_MI);
		uint16_t L_52 = L_51;
		t9 * L_53 = Box(InitializedTypeInfo(&t309_TI), &L_52);
		ArrayElementTypeCheck (L_49, L_53);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 6)) = (t9 *)L_53;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_54 = m2948(NULL, (t2*) &_stringLiteral795, L_49, &m2948_MI);
		V_0 = L_54;
		V_1 = (t2*) &_stringLiteral796;
		goto IL_0153;
	}

IL_0153:
	{
		t2* L_55 = V_0;
		t2* L_56 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_57 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_58 = m6935(NULL, L_55, L_56, L_57, ((int32_t)16), &m6935_MI);
		return L_58;
	}
}
#include "t1661.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1661_TI;
#include "t1661MD.h"

#include "t1349.h"
#include "t123.h"
#include "t156.h"
extern TypeInfo t1349_TI;
#include "t1349MD.h"
extern MethodInfo m8318_MI;
extern MethodInfo m8319_MI;
extern MethodInfo m8323_MI;
extern MethodInfo m8324_MI;
extern MethodInfo m8325_MI;


extern TypeInfo* t737_TI_var;
extern "C" t737* m8318 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8318_init;
	if (!m8318_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8318_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		t737* L_1 = ((t737*)SZArrayNew(t737_TI_var, 4));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t737* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t737* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t737* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		return L_7;
	}

IL_0028:
	{
		t737* L_9 = ((t737*)SZArrayNew(t737_TI_var, 4));
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)3))));
		t737* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)2))));
		t737* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)1))));
		t737* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 3)) = (uint8_t)(*((uint8_t*)L_16));
		return L_15;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8319 (t9 * __this , uint8_t* p0, MethodInfo* method)
{
	static bool m8319_init;
	if (!m8319_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8319_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		t737* L_1 = ((t737*)SZArrayNew(t737_TI_var, 8));
		uint8_t* L_2 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)(*((uint8_t*)L_2));
		t737* L_3 = L_1;
		uint8_t* L_4 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_4+(int32_t)1))));
		t737* L_5 = L_3;
		uint8_t* L_6 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_6+(int32_t)2))));
		t737* L_7 = L_5;
		uint8_t* L_8 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_8+(int32_t)3))));
		t737* L_9 = L_7;
		uint8_t* L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_10+(int32_t)4))));
		t737* L_11 = L_9;
		uint8_t* L_12 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)5))));
		t737* L_13 = L_11;
		uint8_t* L_14 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_13, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_14+(int32_t)6))));
		t737* L_15 = L_13;
		uint8_t* L_16 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, 7)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)7))));
		return L_15;
	}

IL_0044:
	{
		t737* L_17 = ((t737*)SZArrayNew(t737_TI_var, 8));
		uint8_t* L_18 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_18+(int32_t)7))));
		t737* L_19 = L_17;
		uint8_t* L_20 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 1)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_20+(int32_t)6))));
		t737* L_21 = L_19;
		uint8_t* L_22 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, 2)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_22+(int32_t)5))));
		t737* L_23 = L_21;
		uint8_t* L_24 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 3)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_24+(int32_t)4))));
		t737* L_25 = L_23;
		uint8_t* L_26 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, 4)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_26+(int32_t)3))));
		t737* L_27 = L_25;
		uint8_t* L_28 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, 5)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_28+(int32_t)2))));
		t737* L_29 = L_27;
		uint8_t* L_30 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, 6)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_30+(int32_t)1))));
		t737* L_31 = L_29;
		uint8_t* L_32 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, 7)) = (uint8_t)(*((uint8_t*)L_32));
		return L_31;
	}
}
extern MethodInfo m8320_MI;
extern "C" t737* m8320 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		t737* L_0 = m8318(NULL, (uint8_t*)(uint8_t*)(&p0), &m8318_MI);
		return L_0;
	}
}
extern MethodInfo m8321_MI;
extern "C" t737* m8321 (t9 * __this , float p0, MethodInfo* method)
{
	{
		t737* L_0 = m8318(NULL, (uint8_t*)(uint8_t*)(&p0), &m8318_MI);
		return L_0;
	}
}
extern MethodInfo m8322_MI;
extern "C" t737* m8322 (t9 * __this , double p0, MethodInfo* method)
{
	{
		t737* L_0 = m8319(NULL, (uint8_t*)(uint8_t*)(&p0), &m8319_MI);
		return L_0;
	}
}
extern "C" void m8323 (t9 * __this , uint8_t* p0, t737* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_1 = p0;
		t737* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t737* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		goto IL_0025;
	}

IL_0017:
	{
		uint8_t* L_9 = p0;
		t737* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		*((int8_t*)(L_9)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t737* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = L_15;
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
	}

IL_0025:
	{
		return;
	}
}
extern "C" void m8324 (t9 * __this , uint8_t* p0, t737* p1, int32_t p2, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		uint8_t* L_1 = p0;
		t737* L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = L_3;
		*((int8_t*)(L_1)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t* L_5 = p0;
		t737* L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_5+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		uint8_t* L_9 = p0;
		t737* L_10 = p1;
		int32_t L_11 = p2;
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_9+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12));
		uint8_t* L_13 = p0;
		t737* L_14 = p1;
		int32_t L_15 = p2;
		int32_t L_16 = ((int32_t)((int32_t)L_15+(int32_t)3));
		*((int8_t*)(((intptr_t)((intptr_t)L_13+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16));
		goto IL_0049;
	}

IL_0029:
	{
		uint8_t* L_17 = p0;
		t737* L_18 = p1;
		int32_t L_19 = p2;
		int32_t L_20 = ((int32_t)((int32_t)L_19+(int32_t)3));
		*((int8_t*)(L_17)) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_18, L_20));
		uint8_t* L_21 = p0;
		t737* L_22 = p1;
		int32_t L_23 = p2;
		int32_t L_24 = ((int32_t)((int32_t)L_23+(int32_t)2));
		*((int8_t*)(((intptr_t)((intptr_t)L_21+(int32_t)1)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
		uint8_t* L_25 = p0;
		t737* L_26 = p1;
		int32_t L_27 = p2;
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		*((int8_t*)(((intptr_t)((intptr_t)L_25+(int32_t)2)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_28));
		uint8_t* L_29 = p0;
		t737* L_30 = p1;
		int32_t L_31 = p2;
		int32_t L_32 = L_31;
		*((int8_t*)(((intptr_t)((intptr_t)L_29+(int32_t)3)))) = (int8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32));
	}

IL_0049:
	{
		return;
	}
}
extern "C" void m8325 (t9 * __this , uint8_t* p0, t737* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
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
		t737* L_3 = p1;
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
		t737* L_11 = p1;
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
extern MethodInfo m8326_MI;
extern "C" int16_t m8326 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	int16_t V_0 = 0;
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		m8323(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8323_MI);
		int16_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8327_MI;
extern "C" int32_t m8327 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		m8324(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8324_MI);
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8328_MI;
extern "C" float m8328 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		m8324(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8324_MI);
		float L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8329_MI;
extern "C" double m8329 (t9 * __this , t737* p0, int32_t p1, MethodInfo* method)
{
	double V_0 = 0.0;
	{
		t737* L_0 = p0;
		int32_t L_1 = p1;
		m8325(NULL, (uint8_t*)(uint8_t*)(&V_0), L_0, L_1, &m8325_MI);
		double L_2 = V_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8330_MI;


extern "C" void m8330 (t1662 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1650 * L_0 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8298(L_0, ((int32_t)160), &m8298_MI);
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m8331_MI;
extern "C" void m8331 (t1662 * __this, t2* p0, MethodInfo* method)
{
	{
		m8330(__this, &m8330_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m8332 (t1662 * __this, t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		t1650 * L_1 = (t1650 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1650_TI));
		m8300(L_1, L_0, &m8300_MI);
		m8333(__this, L_1, &m8333_MI);
		return;
	}
}
extern "C" void m8333 (t1662 * __this, t1650 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1650 * L_0 = p0;
		uint8_t L_1 = m8302(L_0, &m8302_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0022;
		}
	}
	{
		t1650 * L_2 = p0;
		int32_t L_3 = m8301(L_2, &m8301_MI);
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t1650 * L_4 = p0;
		int32_t L_5 = m8301(L_4, &m8301_MI);
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral797, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t1650 * L_7 = p0;
		t1650 * L_8 = m8312(L_7, 0, &m8312_MI);
		uint8_t L_9 = m8302(L_8, &m8302_MI);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0047;
		}
	}
	{
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_10, (t2*) &_stringLiteral798, &m2949_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0047:
	{
		t1650 * L_11 = p0;
		t1650 * L_12 = m8312(L_11, 0, &m8312_MI);
		t2* L_13 = m8316(NULL, L_12, &m8316_MI);
		__this->f0 = L_13;
		t1650 * L_14 = p0;
		int32_t L_15 = m8301(L_14, &m8301_MI);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		t1650 * L_16 = p0;
		t1650 * L_17 = m8312(L_16, 1, &m8312_MI);
		uint8_t L_18 = m8302(L_17, &m8302_MI);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)160))))
		{
			goto IL_0080;
		}
	}
	{
		t570 * L_19 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_19, (t2*) &_stringLiteral799, &m2949_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0080:
	{
		t1650 * L_20 = p0;
		t1650 * L_21 = m8312(L_20, 1, &m8312_MI);
		__this->f1 = L_21;
	}

IL_008d:
	{
		return;
	}
}
extern "C" t1650 * m8334 (t1662 * __this, MethodInfo* method)
{
	{
		t1650 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8335_MI;
extern "C" void m8335 (t1662 * __this, t1650 * p0, MethodInfo* method)
{
	{
		t1650 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m8336 (t1662 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8337_MI;


extern "C" void m8337 (t1654 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" void m8338 (t1654 * __this, t1650 * p0, MethodInfo* method)
{
	t1650 * V_0 = {0};
	t1650 * V_1 = {0};
	t1650 * V_2 = {0};
	t1650 * V_3 = {0};
	{
		m8337(__this, &m8337_MI);
		t1650 * L_0 = p0;
		uint8_t L_1 = m8302(L_0, &m8302_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		t1650 * L_2 = p0;
		int32_t L_3 = m8301(L_2, &m8301_MI);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral800, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0024:
	{
		t1650 * L_5 = p0;
		t1650 * L_6 = m8312(L_5, 0, &m8312_MI);
		uint8_t L_7 = m8302(L_6, &m8302_MI);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral801, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t1650 * L_9 = p0;
		t1650 * L_10 = m8312(L_9, 0, &m8312_MI);
		t737* L_11 = m8304(L_10, &m8304_MI);
		int32_t L_12 = 0;
		__this->f0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_12));
		t1650 * L_13 = p0;
		t1650 * L_14 = m8312(L_13, 1, &m8312_MI);
		V_0 = L_14;
		t1650 * L_15 = V_0;
		uint8_t L_16 = m8302(L_15, &m8302_MI);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral802, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_006f:
	{
		t1650 * L_18 = V_0;
		t1650 * L_19 = m8312(L_18, 0, &m8312_MI);
		V_1 = L_19;
		t1650 * L_20 = V_1;
		uint8_t L_21 = m8302(L_20, &m8302_MI);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_008b;
		}
	}
	{
		t570 * L_22 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_22, (t2*) &_stringLiteral803, &m2949_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		t1650 * L_23 = V_1;
		t2* L_24 = m8316(NULL, L_23, &m8316_MI);
		t1662 * L_25 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
		m8331(L_25, L_24, &m8331_MI);
		__this->f1 = L_25;
		t1650 * L_26 = V_0;
		t1650 * L_27 = m8312(L_26, 1, &m8312_MI);
		V_2 = L_27;
		t1650 * L_28 = V_2;
		uint8_t L_29 = m8302(L_28, &m8302_MI);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)48))))
		{
			goto IL_00b9;
		}
	}
	{
		t570 * L_30 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_30, (t2*) &_stringLiteral804, &m2949_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00b9:
	{
		t1650 * L_31 = V_2;
		t1650 * L_32 = m8312(L_31, 0, &m8312_MI);
		t2* L_33 = m8316(NULL, L_32, &m8316_MI);
		t1662 * L_34 = (t1662 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1662_TI));
		m8331(L_34, L_33, &m8331_MI);
		__this->f2 = L_34;
		t1662 * L_35 = (__this->f2);
		t1650 * L_36 = V_2;
		t1650 * L_37 = m8312(L_36, 1, &m8312_MI);
		m8335(L_35, L_37, &m8335_MI);
		t1650 * L_38 = V_0;
		t1650 * L_39 = m8312(L_38, 2, &m8312_MI);
		V_3 = L_39;
		t1650 * L_40 = V_3;
		uint8_t L_41 = m8302(L_40, &m8302_MI);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)128))))
		{
			goto IL_0102;
		}
	}
	{
		t570 * L_42 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_42, (t2*) &_stringLiteral805, &m2949_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_0102:
	{
		t1650 * L_43 = V_3;
		t737* L_44 = m8304(L_43, &m8304_MI);
		__this->f3 = L_44;
		return;
	}
}
extern "C" t1662 * m8339 (t1654 * __this, MethodInfo* method)
{
	{
		t1662 * L_0 = (__this->f2);
		return L_0;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8340 (t1654 * __this, MethodInfo* method)
{
	static bool m8340_init;
	if (!m8340_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8340_init = true;
	}
	{
		t737* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t737*)NULL;
	}

IL_000a:
	{
		t737* L_1 = (__this->f3);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_1);
		return ((t737*)Castclass(L_2, t737_TI_var));
	}
}
#include "t1663.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1663_TI;
#include "t1663MD.h"



#include "t1664.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1664_TI;
#include "t1664MD.h"

#include "t1635MD.h"
extern MethodInfo m8344_MI;
extern MethodInfo m8099_MI;
extern MethodInfo m8346_MI;
extern MethodInfo m8348_MI;
extern MethodInfo m5938_MI;
extern MethodInfo m8097_MI;
extern MethodInfo m8345_MI;


extern MethodInfo m8341_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8341 (t1664 * __this, t737* p0, MethodInfo* method)
{
	static bool m8341_init;
	if (!m8341_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8341_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		t737* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1349, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t737* L_2 = p0;
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
		t737* L_4 = p0;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = L_6;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_7))));
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		t737* L_9 = p0;
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
		t737* L_11 = p0;
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_11);
		__this->f1 = ((t737*)Castclass(L_12, t737_TI_var));
	}

IL_0046:
	{
		goto IL_0067;
	}

IL_0048:
	{
		t737* L_13 = p0;
		t1223 * L_14 = m8097(NULL, L_13, &m8097_MI);
		m8345(__this, L_14, &m8345_MI);
		t1223 * L_15 = (__this->f0);
		if (L_15)
		{
			goto IL_0067;
		}
	}
	{
		t570 * L_16 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_16, (t2*) &_stringLiteral1350, &m2949_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0067:
	{
		return;
	}
}
extern MethodInfo m8342_MI;
extern "C" void m8342 (t1664 * __this, t1223 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1223 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1313, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1223 * L_2 = p0;
		m8345(__this, L_2, &m8345_MI);
		return;
	}
}
extern MethodInfo m8343_MI;
extern "C" void m8343 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1664_SFs*)InitializedTypeInfo(&t1664_TI)->static_fields)->f4 = L_0;
		((t1664_SFs*)InitializedTypeInfo(&t1664_TI)->static_fields)->f5 = 0;
		return;
	}
}
extern "C" void m8344 (t1664 * __this, MethodInfo* method)
{
	{
		__this->f1 = (t737*)NULL;
		__this->f2 = (t737*)NULL;
		return;
	}
}
extern "C" void m8345 (t1664 * __this, t1223 * p0, MethodInfo* method)
{
	{
		t1223 * L_0 = p0;
		__this->f0 = L_0;
		m8344(__this, &m8344_MI);
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m8346 (t1664 * __this, MethodInfo* method)
{
	static bool m8346_init;
	if (!m8346_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8346_init = true;
	}
	t737* V_0 = {0};
	t737* V_1 = {0};
	{
		t737* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_00f6;
		}
	}
	{
		t1223 * L_1 = (__this->f0);
		t737* L_2 = m8099(NULL, L_1, 0, &m8099_MI);
		V_0 = L_2;
		t1223 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5887_MI, L_3);
		__this->f1 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)((int32_t)((int32_t)32)+(int32_t)((int32_t)((int32_t)L_4>>(int32_t)3))))));
		t737* L_5 = (__this->f1);
		t737* L_6 = V_0;
		int32_t L_7 = 4;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7));
		t737* L_8 = (__this->f1);
		t737* L_9 = V_0;
		int32_t L_10 = 5;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		t737* L_11 = (__this->f1);
		t737* L_12 = V_0;
		int32_t L_13 = 6;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, 2)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13));
		t737* L_14 = (__this->f1);
		t737* L_15 = V_0;
		int32_t L_16 = 7;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, 3)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16));
		t737* L_17 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, 4)) = (uint8_t)4;
		t737* L_18 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_18, 5)) = (uint8_t)((int32_t)128);
		t737* L_19 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_19, 6)) = (uint8_t)0;
		t737* L_20 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, 7)) = (uint8_t)0;
		t737* L_21 = (__this->f1);
		t737* L_22 = m8320(NULL, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_21)->max_length)))-(int32_t)((int32_t)12))), &m8320_MI);
		V_1 = L_22;
		t737* L_23 = (__this->f1);
		t737* L_24 = V_1;
		int32_t L_25 = 0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_23, 8)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_25));
		t737* L_26 = (__this->f1);
		t737* L_27 = V_1;
		int32_t L_28 = 1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)9))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28));
		t737* L_29 = (__this->f1);
		t737* L_30 = V_1;
		int32_t L_31 = 2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, ((int32_t)10))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31));
		t737* L_32 = (__this->f1);
		t737* L_33 = V_1;
		int32_t L_34 = 3;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_32, ((int32_t)11))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_34));
		t737* L_35 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)12))) = (uint8_t)6;
		t737* L_36 = V_0;
		t737* L_37 = (__this->f1);
		t737* L_38 = (__this->f1);
		m5834(NULL, (t121 *)(t121 *)L_36, 1, (t121 *)(t121 *)L_37, ((int32_t)13), ((int32_t)((int32_t)(((int32_t)(((t121 *)L_38)->max_length)))-(int32_t)((int32_t)13))), &m5834_MI);
		t737* L_39 = (__this->f1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)23))) = (uint8_t)((int32_t)49);
	}

IL_00f6:
	{
		t737* L_40 = (__this->f1);
		t9 * L_41 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_40);
		return ((t737*)Castclass(L_41, t737_TI_var));
	}
}
extern MethodInfo m8347_MI;
extern TypeInfo* t737_TI_var;
extern "C" t737* m8347 (t1664 * __this, MethodInfo* method)
{
	static bool m8347_init;
	if (!m8347_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8347_init = true;
	}
	t737* V_0 = {0};
	t1374 * V_1 = {0};
	t737* V_2 = {0};
	{
		t737* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		t737* L_1 = m8346(__this, &m8346_MI);
		V_0 = L_1;
		t737* L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (t737*)NULL;
	}

IL_0014:
	{
		t2* L_3 = m8348(__this, &m8348_MI);
		t1374 * L_4 = m6954(NULL, L_3, &m6954_MI);
		V_1 = L_4;
		t1374 * L_5 = V_1;
		t737* L_6 = V_0;
		t737* L_7 = m5938(L_5, L_6, &m5938_MI);
		V_2 = L_7;
		__this->f2 = ((t737*)SZArrayNew(t737_TI_var, 8));
		t737* L_8 = V_2;
		t737* L_9 = V_2;
		t737* L_10 = (__this->f2);
		m5834(NULL, (t121 *)(t121 *)L_8, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)8)), (t121 *)(t121 *)L_10, 0, 8, &m5834_MI);
		t737* L_11 = (__this->f2);
		m6977(NULL, (t121 *)(t121 *)L_11, 0, 8, &m6977_MI);
	}

IL_0054:
	{
		t737* L_12 = (__this->f2);
		t9 * L_13 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_12);
		return ((t737*)Castclass(L_13, t737_TI_var));
	}
}
extern "C" t2* m8348 (t1664 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->f3 = (t2*) &_stringLiteral884;
	}

IL_0013:
	{
		t2* L_1 = (__this->f3);
		return L_1;
	}
}
#include "t1665.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1665_TI;
#include "t1665MD.h"

#include "t884.h"
#include "t1666.h"
#include "t894.h"
#include "t1671.h"
#include "t1667.h"
extern TypeInfo t884_TI;
extern TypeInfo t894_TI;
extern TypeInfo t1666_TI;
extern TypeInfo t1668_TI;
#include "t1667MD.h"
#include "t884MD.h"
#include "t894MD.h"
#include "t1666MD.h"
extern MethodInfo m8365_MI;
extern MethodInfo m4536_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m4319_MI;
extern MethodInfo m8378_MI;
extern MethodInfo m10759_MI;
extern MethodInfo m4710_MI;
extern MethodInfo m10766_MI;
extern MethodInfo m4274_MI;
extern MethodInfo m12027_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m12029_MI;
extern MethodInfo m10767_MI;
extern MethodInfo m10765_MI;
extern MethodInfo m4711_MI;
extern MethodInfo m10764_MI;


extern MethodInfo m8349_MI;
extern "C" void m8349 (t1665 * __this, MethodInfo* method)
{
	{
		m8365(__this, &m8365_MI);
		t884 * L_0 = (t884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t884_TI));
		m4536(L_0, &m4536_MI);
		__this->f15 = L_0;
		return;
	}
}
extern MethodInfo m8350_MI;
extern "C" void m8350 (t1665 * __this, t2* p0, MethodInfo* method)
{
	{
		__this->f13 = (t1666 *)NULL;
		t884 * L_0 = (__this->f15);
		VirtActionInvoker0::Invoke(&m4278_MI, L_0);
		t2* L_1 = p0;
		t894 * L_2 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m4319(L_2, L_1, &m4319_MI);
		m8378(__this, L_2, __this, &m8378_MI);
		return;
	}
}
extern MethodInfo m8351_MI;
extern "C" t1666 * m8351 (t1665 * __this, MethodInfo* method)
{
	{
		t1666 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8352_MI;
extern "C" void m8352 (t1665 * __this, t1667 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8353_MI;
extern "C" void m8353 (t1665 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8354_MI;
extern "C" void m8354 (t1665 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m8355_MI;
extern "C" void m8355 (t1665 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	t1666 * V_0 = {0};
	t1666 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1666_TI));
		t1666 * L_1 = (t1666 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1666_TI));
		m10759(L_1, L_0, &m10759_MI);
		V_0 = L_1;
		t1666 * L_2 = (__this->f13);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		t1666 * L_3 = V_0;
		__this->f13 = L_3;
		t1666 * L_4 = V_0;
		__this->f14 = L_4;
		goto IL_0037;
	}

IL_001f:
	{
		t884 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4710_MI, L_5);
		V_1 = ((t1666 *)Castclass(L_6, InitializedTypeInfo(&t1666_TI)));
		t1666 * L_7 = V_1;
		t1666 * L_8 = V_0;
		m10766(L_7, L_8, &m10766_MI);
	}

IL_0037:
	{
		t884 * L_9 = (__this->f15);
		t1666 * L_10 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_9, L_10);
		t1666 * L_11 = V_0;
		__this->f14 = L_11;
		t9 * L_12 = p1;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12027_MI, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_0077;
	}

IL_0055:
	{
		t1666 * L_14 = (__this->f14);
		t9 * L_15 = p1;
		int32_t L_16 = V_3;
		t2* L_17 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m12028_MI, L_15, L_16);
		t9 * L_18 = p1;
		int32_t L_19 = V_3;
		t2* L_20 = (t2*)InterfaceFuncInvoker1< t2*, int32_t >::Invoke(&m12029_MI, L_18, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1666_TI));
		t2* L_21 = m10767(NULL, L_20, &m10767_MI);
		m10765(L_14, L_17, L_21, &m10765_MI);
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
extern MethodInfo m8356_MI;
extern "C" void m8356 (t1665 * __this, t2* p0, MethodInfo* method)
{
	{
		t884 * L_0 = (__this->f15);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4711_MI, L_0);
		__this->f14 = ((t1666 *)Castclass(L_1, InitializedTypeInfo(&t1666_TI)));
		return;
	}
}
extern MethodInfo m8357_MI;
extern "C" void m8357 (t1665 * __this, t2* p0, MethodInfo* method)
{
	{
		t1666 * L_0 = (__this->f14);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1666_TI));
		t2* L_2 = m10767(NULL, L_1, &m10767_MI);
		m10764(L_0, L_2, &m10764_MI);
		return;
	}
}
extern MethodInfo m8358_MI;
extern "C" void m8358 (t1665 * __this, t1667 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1669.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1669_TI;
#include "t1669MD.h"

extern MethodInfo m5920_MI;


extern MethodInfo m8359_MI;
extern "C" void m8359 (t1669 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		__this->f0 = L_0;
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		__this->f1 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8360_MI;
extern "C" int32_t m8360 (t1669 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8361_MI;
extern "C" t2* m8361 (t1669 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8362_MI;
extern "C" t2* m8362 (t1669 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f1);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return ((t2*)Castclass(L_2, (&t2_TI)));
	}
}
extern MethodInfo m8363_MI;
extern "C" void m8363 (t1669 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(&m5920_MI, L_0);
		t1176 * L_1 = (__this->f1);
		VirtActionInvoker0::Invoke(&m5920_MI, L_1);
		return;
	}
}
extern MethodInfo m8364_MI;
extern "C" void m8364 (t1669 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f0);
		t2* L_1 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_0, L_1);
		t1176 * L_2 = (__this->f1);
		t2* L_3 = p1;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_2, L_3);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1667_TI;

#include "t1672.h"
#include "t1291.h"
extern TypeInfo t1672_TI;
extern TypeInfo t221_TI;
extern TypeInfo t1671_TI;
extern TypeInfo t1670_TI;
#include "t1672MD.h"
#include "t309MD.h"
#include "t1671MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m4396_MI;
extern MethodInfo m8388_MI;
extern MethodInfo m4706_MI;
extern MethodInfo m4709_MI;
extern MethodInfo m7422_MI;
extern MethodInfo m8366_MI;
extern MethodInfo m5969_MI;
extern MethodInfo m8372_MI;
extern MethodInfo m8374_MI;
extern MethodInfo m8373_MI;
extern MethodInfo m8369_MI;
extern MethodInfo m9086_MI;
extern MethodInfo m9087_MI;
extern MethodInfo m8367_MI;
extern MethodInfo m1251_MI;
extern MethodInfo m8383_MI;
extern MethodInfo m6031_MI;
extern MethodInfo m8368_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m12030_MI;
extern MethodInfo m8380_MI;
extern MethodInfo m8381_MI;
extern MethodInfo m12031_MI;
extern MethodInfo m8379_MI;
extern MethodInfo m5926_MI;
extern MethodInfo m8371_MI;
extern MethodInfo m8377_MI;
extern MethodInfo m8375_MI;
extern MethodInfo m8386_MI;
extern MethodInfo m8387_MI;
extern MethodInfo m8370_MI;
extern MethodInfo m8376_MI;
extern MethodInfo m12032_MI;
extern MethodInfo m12033_MI;
extern MethodInfo m8385_MI;
extern MethodInfo m12034_MI;
extern MethodInfo m8382_MI;
extern MethodInfo m12035_MI;
extern MethodInfo m12036_MI;
extern MethodInfo m8384_MI;
extern MethodInfo m331_MI;


extern TypeInfo* t318_TI_var;
extern "C" void m8365 (t1667 * __this, MethodInfo* method)
{
	static bool m8365_init;
	if (!m8365_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8365_init = true;
	}
	{
		t884 * L_0 = (t884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t884_TI));
		m4536(L_0, &m4536_MI);
		__this->f2 = L_0;
		t884 * L_1 = (t884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t884_TI));
		m4536(L_1, &m4536_MI);
		__this->f3 = L_1;
		t328 * L_2 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_2, ((int32_t)200), &m4396_MI);
		__this->f5 = L_2;
		__this->f6 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)30)));
		t1669 * L_3 = (t1669 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1669_TI));
		m8359(L_3, &m8359_MI);
		__this->f8 = L_3;
		__this->f9 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" t138 * m8366 (t1667 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = (__this->f9);
		int32_t L_2 = (__this->f10);
		t1672 * L_3 = (t1672 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1672_TI));
		m8388(L_3, L_0, L_1, L_2, &m8388_MI);
		return L_3;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t138 * m8367 (t1667 * __this, MethodInfo* method)
{
	static bool m8367_init;
	if (!m8367_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8367_init = true;
	}
	t221* V_0 = {0};
	{
		t884 * L_0 = (__this->f2);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4706_MI, L_0);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, L_1));
		t884 * L_2 = (__this->f2);
		t221* L_3 = V_0;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m4709_MI, L_2, (t121 *)(t121 *)L_3, 0);
		t221* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m7422(NULL, (t2*) &_stringLiteral338, L_4, &m7422_MI);
		t2* L_6 = m590(NULL, (t2*) &_stringLiteral1351, L_5, &m590_MI);
		t138 * L_7 = m8366(__this, L_6, &m8366_MI);
		return L_7;
	}
}
extern "C" bool m8368 (t1667 * __this, uint16_t p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		int32_t L_14 = m5969(NULL, L_13, &m5969_MI);
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
extern "C" bool m8369 (t1667 * __this, int32_t p0, MethodInfo* method)
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
extern "C" void m8370 (t1667 * __this, MethodInfo* method)
{
	{
		m8372(__this, 0, &m8372_MI);
		return;
	}
}
extern "C" void m8371 (t1667 * __this, MethodInfo* method)
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		t328 * L_0 = (__this->f5);
		int32_t L_1 = m8374(__this, &m8374_MI);
		m2797(L_0, (((uint16_t)L_1)), &m2797_MI);
	}

IL_0015:
	{
		int32_t L_2 = m8373(__this, &m8373_MI);
		bool L_3 = m8369(__this, L_2, &m8369_MI);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)60))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = m8373(__this, &m8373_MI);
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
extern "C" void m8372 (t1667 * __this, bool p0, MethodInfo* method)
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0 = m8373(__this, &m8373_MI);
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
		m8374(__this, &m8374_MI);
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
		t138 * L_5 = m8366(__this, (t2*) &_stringLiteral1352, &m8366_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_004b:
	{
		return;
	}
	// Dead block : IL_004c: br.s IL_0000
}
extern "C" int32_t m8373 (t1667 * __this, MethodInfo* method)
{
	{
		t1671 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9086_MI, L_0);
		return L_1;
	}
}
extern "C" int32_t m8374 (t1667 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1671 * L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9087_MI, L_0);
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
extern "C" void m8375 (t1667 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = m8374(__this, &m8374_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_2 = m8367(__this, &m8367_MI);
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
		t9 * L_7 = Box(InitializedTypeInfo(&t309_TI), &L_6);
		int32_t L_8 = V_0;
		uint16_t L_9 = (((uint16_t)L_8));
		t9 * L_10 = Box(InitializedTypeInfo(&t309_TI), &L_9);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m1251(NULL, (t2*) &_stringLiteral1353, L_7, L_10, &m1251_MI);
		t138 * L_12 = m8366(__this, L_11, &m8366_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0035:
	{
		return;
	}
}
extern "C" t2* m8376 (t1667 * __this, uint16_t p0, bool p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	t2* V_1 = {0};

IL_0000:
	{
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		t138 * L_1 = m8367(__this, &m8367_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0010:
	{
		int32_t L_2 = m8374(__this, &m8374_MI);
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
		m8383(__this, &m8383_MI);
		goto IL_003b;
	}

IL_002e:
	{
		t328 * L_7 = (__this->f5);
		uint16_t L_8 = V_0;
		m2797(L_7, L_8, &m2797_MI);
	}

IL_003b:
	{
		goto IL_0000;
	}

IL_003d:
	{
		t328 * L_9 = (__this->f5);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_9);
		V_1 = L_10;
		t328 * L_11 = (__this->f5);
		m6031(L_11, 0, &m6031_MI);
		t2* L_12 = V_1;
		return L_12;
	}
}
extern TypeInfo* t318_TI_var;
extern "C" t2* m8377 (t1667 * __this, MethodInfo* method)
{
	static bool m8377_init;
	if (!m8377_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8377_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	t318* V_3 = {0};
	{
		V_0 = 0;
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8373(__this, &m8373_MI);
		bool L_2 = m8368(__this, (((uint16_t)L_1)), 1, &m8368_MI);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		t138 * L_3 = m8366(__this, (t2*) &_stringLiteral1354, &m8366_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0027:
	{
		int32_t L_4 = m8373(__this, &m8373_MI);
		V_1 = L_4;
		goto IL_0082;
	}

IL_0030:
	{
		int32_t L_5 = V_1;
		V_2 = (((uint16_t)L_5));
		uint16_t L_6 = V_2;
		bool L_7 = m8368(__this, L_6, 0, &m8368_MI);
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
		t318* L_9 = (__this->f6);
		if ((!(((uint32_t)L_8) == ((uint32_t)(((int32_t)(((t121 *)L_9)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = V_0;
		V_3 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)((int32_t)L_10*(int32_t)2))));
		t318* L_11 = (__this->f6);
		t318* L_12 = V_3;
		int32_t L_13 = V_0;
		m5982(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, L_13, &m5982_MI);
		t318* L_14 = V_3;
		__this->f6 = L_14;
	}

IL_0067:
	{
		t318* L_15 = (__this->f6);
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)((int32_t)L_17+(int32_t)1));
		uint16_t L_18 = V_2;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_17)) = (uint16_t)L_18;
		m8374(__this, &m8374_MI);
		int32_t L_19 = m8373(__this, &m8373_MI);
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
		t138 * L_22 = m8366(__this, (t2*) &_stringLiteral1355, &m8366_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0095:
	{
		t318* L_23 = (__this->f6);
		int32_t L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_25 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_25 = m4419(L_25, L_23, 0, L_24, &m4399_MI);
		return L_25;
	}
}
extern "C" void m8378 (t1667 * __this, t1671 * p0, t9 * p1, MethodInfo* method)
{
	{
		t1671 * L_0 = p0;
		__this->f1 = L_0;
		t9 * L_1 = p1;
		__this->f0 = L_1;
		t9 * L_2 = p1;
		InterfaceActionInvoker1< t1667 * >::Invoke(&m12030_MI, L_2, __this);
		goto IL_001d;
	}

IL_0017:
	{
		m8380(__this, &m8380_MI);
	}

IL_001d:
	{
		int32_t L_3 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		m8381(__this, &m8381_MI);
		t884 * L_4 = (__this->f2);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4706_MI, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t884 * L_6 = (__this->f2);
		t9 * L_7 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4710_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m590(NULL, (t2*) &_stringLiteral1356, L_7, &m590_MI);
		t138 * L_9 = m8366(__this, L_8, &m8366_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0056:
	{
		t9 * L_10 = p1;
		InterfaceActionInvoker1< t1667 * >::Invoke(&m12031_MI, L_10, __this);
		m8379(__this, &m8379_MI);
		return;
	}
}
extern "C" void m8379 (t1667 * __this, MethodInfo* method)
{
	{
		__this->f9 = 1;
		__this->f10 = 0;
		__this->f0 = (t9 *)NULL;
		__this->f1 = (t1671 *)NULL;
		t884 * L_0 = (__this->f2);
		VirtActionInvoker0::Invoke(&m4278_MI, L_0);
		t884 * L_1 = (__this->f3);
		VirtActionInvoker0::Invoke(&m4278_MI, L_1);
		t1669 * L_2 = (__this->f8);
		m8363(L_2, &m8363_MI);
		t328 * L_3 = (__this->f5);
		m6031(L_3, 0, &m6031_MI);
		__this->f4 = (t2*)NULL;
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8380 (t1667 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8373(__this, &m8373_MI);
		bool L_1 = m8369(__this, L_0, &m8369_MI);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		t328 * L_2 = (__this->f5);
		int32_t L_3 = m5926(L_2, &m5926_MI);
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
		m8371(__this, &m8371_MI);
	}

IL_0028:
	{
		int32_t L_4 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0287;
		}
	}
	{
		m8374(__this, &m8374_MI);
		int32_t L_5 = m8373(__this, &m8373_MI);
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
		m8374(__this, &m8374_MI);
		int32_t L_9 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a2;
		}
	}
	{
		m8374(__this, &m8374_MI);
		t2* L_10 = m8377(__this, &m8377_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_11 = m2777(NULL, L_10, (t2*) &_stringLiteral1357, &m2777_MI);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		t138 * L_12 = m8366(__this, (t2*) &_stringLiteral1358, &m8366_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0093:
	{
		m8375(__this, ((int32_t)91), &m8375_MI);
		m8386(__this, &m8386_MI);
		return;
	}

IL_00a2:
	{
		int32_t L_13 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00b3;
		}
	}
	{
		m8387(__this, &m8387_MI);
		return;
	}

IL_00b3:
	{
		t2* L_14 = m8377(__this, &m8377_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_15 = m2777(NULL, L_14, (t2*) &_stringLiteral1359, &m2777_MI);
		if (!L_15)
		{
			goto IL_00d1;
		}
	}
	{
		t138 * L_16 = m8366(__this, (t2*) &_stringLiteral1360, &m8366_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_00d1:
	{
		t138 * L_17 = m8366(__this, (t2*) &_stringLiteral1361, &m8366_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00dd:
	{
		m8381(__this, &m8381_MI);
		m8374(__this, &m8374_MI);
		t2* L_18 = m8377(__this, &m8377_MI);
		V_0 = L_18;
		m8370(__this, &m8370_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_1 = L_19;
		int32_t L_20 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)63))))
		{
			goto IL_0131;
		}
	}

IL_0107:
	{
		t2* L_21 = V_1;
		t2* L_22 = m8376(__this, ((int32_t)63), 0, &m8376_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, L_21, L_22, &m610_MI);
		V_1 = L_23;
		int32_t L_24 = m8373(__this, &m8373_MI);
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
		t2* L_26 = m610(NULL, L_25, (t2*) &_stringLiteral1362, &m610_MI);
		V_1 = L_26;
		goto IL_0107;
	}

IL_0131:
	{
		t9 * L_27 = (__this->f0);
		t2* L_28 = V_0;
		t2* L_29 = V_1;
		InterfaceActionInvoker2< t2*, t2* >::Invoke(&m12032_MI, L_27, L_28, L_29);
		m8375(__this, ((int32_t)62), &m8375_MI);
		return;
	}

IL_0147:
	{
		m8381(__this, &m8381_MI);
		t884 * L_30 = (__this->f2);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4706_MI, L_30);
		if (L_31)
		{
			goto IL_0161;
		}
	}
	{
		t138 * L_32 = m8367(__this, &m8367_MI);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_0161:
	{
		m8374(__this, &m8374_MI);
		t2* L_33 = m8377(__this, &m8377_MI);
		V_0 = L_33;
		m8370(__this, &m8370_MI);
		t884 * L_34 = (__this->f2);
		t9 * L_35 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4711_MI, L_34);
		V_2 = ((t2*)Castclass(L_35, (&t2_TI)));
		t884 * L_36 = (__this->f3);
		VirtFuncInvoker0< t9 * >::Invoke(&m4711_MI, L_36);
		t884 * L_37 = (__this->f3);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4706_MI, L_37);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01b8;
		}
	}
	{
		t884 * L_39 = (__this->f3);
		t9 * L_40 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m4710_MI, L_39);
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
		bool L_43 = m2777(NULL, L_41, L_42, &m2777_MI);
		if (!L_43)
		{
			goto IL_01db;
		}
	}
	{
		t2* L_44 = V_2;
		t2* L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_46 = m1251(NULL, (t2*) &_stringLiteral1363, L_44, L_45, &m1251_MI);
		t138 * L_47 = m8366(__this, L_46, &m8366_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_01db:
	{
		t9 * L_48 = (__this->f0);
		t2* L_49 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m12033_MI, L_48, L_49);
		m8375(__this, ((int32_t)62), &m8375_MI);
		return;
	}

IL_01f0:
	{
		m8381(__this, &m8381_MI);
		t2* L_50 = m8377(__this, &m8377_MI);
		V_0 = L_50;
		goto IL_020b;
	}

IL_01ff:
	{
		t1669 * L_51 = (__this->f8);
		m8385(__this, L_51, &m8385_MI);
	}

IL_020b:
	{
		int32_t L_52 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_52) == ((int32_t)((int32_t)62))))
		{
			goto IL_021f;
		}
	}
	{
		int32_t L_53 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01ff;
		}
	}

IL_021f:
	{
		t9 * L_54 = (__this->f0);
		t2* L_55 = V_0;
		t1669 * L_56 = (__this->f8);
		InterfaceActionInvoker2< t2*, t9 * >::Invoke(&m12034_MI, L_54, L_55, L_56);
		t1669 * L_57 = (__this->f8);
		m8363(L_57, &m8363_MI);
		m8370(__this, &m8370_MI);
		int32_t L_58 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0261;
		}
	}
	{
		m8374(__this, &m8374_MI);
		t9 * L_59 = (__this->f0);
		t2* L_60 = V_0;
		InterfaceActionInvoker1< t2* >::Invoke(&m12033_MI, L_59, L_60);
		goto IL_027e;
	}

IL_0261:
	{
		t884 * L_61 = (__this->f2);
		t2* L_62 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_61, L_62);
		t884 * L_63 = (__this->f3);
		t2* L_64 = (__this->f4);
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_63, L_64);
	}

IL_027e:
	{
		m8375(__this, ((int32_t)62), &m8375_MI);
		return;
	}

IL_0287:
	{
		m8382(__this, &m8382_MI);
		return;
	}
}
extern "C" void m8381 (t1667 * __this, MethodInfo* method)
{
	{
		t328 * L_0 = (__this->f5);
		int32_t L_1 = m5926(L_0, &m5926_MI);
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
		t328 * L_4 = (__this->f5);
		t2* L_5 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_4);
		InterfaceActionInvoker1< t2* >::Invoke(&m12035_MI, L_3, L_5);
		goto IL_0044;
	}

IL_002e:
	{
		t9 * L_6 = (__this->f0);
		t328 * L_7 = (__this->f5);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_7);
		InterfaceActionInvoker1< t2* >::Invoke(&m12036_MI, L_6, L_8);
	}

IL_0044:
	{
		t328 * L_9 = (__this->f5);
		m6031(L_9, 0, &m6031_MI);
		__this->f7 = 0;
		return;
	}
}
extern "C" void m8382 (t1667 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->f7 = 0;
	}

IL_0007:
	{
		int32_t L_0 = m8373(__this, &m8373_MI);
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
		m8374(__this, &m8374_MI);
		m8383(__this, &m8383_MI);
		goto IL_0007;
	}

IL_0031:
	{
		t328 * L_5 = (__this->f5);
		int32_t L_6 = m8374(__this, &m8374_MI);
		m2797(L_5, (((uint16_t)L_6)), &m2797_MI);
		goto IL_0007;
	}
	// Dead block : IL_0046: br.s IL_0007
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m8383 (t1667 * __this, MethodInfo* method)
{
	static bool m8383_init;
	if (!m8383_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m8383_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	t727 * V_2 = {0};
	int32_t V_3 = 0;
	{
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_001d;
		}
	}
	{
		m8374(__this, &m8374_MI);
		m8384(__this, &m8384_MI);
		goto IL_010b;
	}

IL_001d:
	{
		t2* L_1 = m8377(__this, &m8377_MI);
		V_0 = L_1;
		m8375(__this, ((int32_t)59), &m8375_MI);
		t2* L_2 = V_0;
		V_1 = L_2;
		t2* L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ff;
		}
	}
	{
		t727 * L_4 = ((t1667_SFs*)InitializedTypeInfo(&t1667_TI)->static_fields)->f12;
		if (L_4)
		{
			goto IL_0084;
		}
	}
	{
		t727 * L_5 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_5, 5, m5817_MI_var);
		V_2 = L_5;
		t727 * L_6 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral1364, 0);
		t727 * L_7 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral1365, 1);
		t727 * L_8 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral1366, 2);
		t727 * L_9 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_9, (t2*) &_stringLiteral1367, 3);
		t727 * L_10 = V_2;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_10, (t2*) &_stringLiteral1368, 4);
		t727 * L_11 = V_2;
		((t1667_SFs*)InitializedTypeInfo(&t1667_TI)->static_fields)->f12 = L_11;
	}

IL_0084:
	{
		t727 * L_12 = ((t1667_SFs*)InitializedTypeInfo(&t1667_TI)->static_fields)->f12;
		t2* L_13 = V_1;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_12, L_13, (&V_3));
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
		t328 * L_16 = (__this->f5);
		m2797(L_16, ((int32_t)38), &m2797_MI);
		goto IL_010b;
	}

IL_00bf:
	{
		t328 * L_17 = (__this->f5);
		m2797(L_17, ((int32_t)34), &m2797_MI);
		goto IL_010b;
	}

IL_00cf:
	{
		t328 * L_18 = (__this->f5);
		m2797(L_18, ((int32_t)39), &m2797_MI);
		goto IL_010b;
	}

IL_00df:
	{
		t328 * L_19 = (__this->f5);
		m2797(L_19, ((int32_t)60), &m2797_MI);
		goto IL_010b;
	}

IL_00ef:
	{
		t328 * L_20 = (__this->f5);
		m2797(L_20, ((int32_t)62), &m2797_MI);
		goto IL_010b;
	}

IL_00ff:
	{
		t138 * L_21 = m8366(__this, (t2*) &_stringLiteral1369, &m8366_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_010b:
	{
		return;
	}
}
extern "C" int32_t m8384 (t1667 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_0083;
		}
	}
	{
		m8374(__this, &m8374_MI);
		int32_t L_1 = m8373(__this, &m8373_MI);
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
		m8374(__this, &m8374_MI);
		int32_t L_14 = m8373(__this, &m8373_MI);
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
		int32_t L_16 = m8373(__this, &m8373_MI);
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
		m8374(__this, &m8374_MI);
		int32_t L_21 = m8373(__this, &m8373_MI);
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
extern "C" void m8385 (t1667 * __this, t1669 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	{
		m8372(__this, 1, &m8372_MI);
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)47))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = m8373(__this, &m8373_MI);
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
		t2* L_2 = m8377(__this, &m8377_MI);
		V_0 = L_2;
		m8370(__this, &m8370_MI);
		m8375(__this, ((int32_t)61), &m8375_MI);
		m8370(__this, &m8370_MI);
		int32_t L_3 = m8374(__this, &m8374_MI);
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
		t2* L_6 = m8376(__this, ((int32_t)39), 1, &m8376_MI);
		V_1 = L_6;
		goto IL_006e;
	}

IL_0056:
	{
		t2* L_7 = m8376(__this, ((int32_t)34), 1, &m8376_MI);
		V_1 = L_7;
		goto IL_006e;
	}

IL_0062:
	{
		t138 * L_8 = m8366(__this, (t2*) &_stringLiteral1370, &m8366_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_006e:
	{
		t2* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_10 = m331(NULL, L_9, (t2*) &_stringLiteral1371, &m331_MI);
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
		t1669 * L_12 = p0;
		t2* L_13 = V_0;
		t2* L_14 = V_1;
		m8364(L_12, L_13, L_14, &m8364_MI);
		return;
	}
}
extern "C" void m8386 (t1667 * __this, MethodInfo* method)
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
		int32_t L_0 = m8373(__this, &m8373_MI);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		t138 * L_1 = m8367(__this, &m8367_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = m8374(__this, &m8374_MI);
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
		t328 * L_8 = (__this->f5);
		m2797(L_8, ((int32_t)93), &m2797_MI);
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
		t328 * L_11 = (__this->f5);
		m2797(L_11, ((int32_t)93), &m2797_MI);
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
		t328 * L_15 = (__this->f5);
		uint16_t L_16 = V_1;
		m2797(L_15, L_16, &m2797_MI);
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
extern "C" void m8387 (t1667 * __this, MethodInfo* method)
{
	{
		m8375(__this, ((int32_t)45), &m8375_MI);
		m8375(__this, ((int32_t)45), &m8375_MI);
	}

IL_0010:
	{
		int32_t L_0 = m8374(__this, &m8374_MI);
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
		int32_t L_1 = m8374(__this, &m8374_MI);
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
		int32_t L_2 = m8374(__this, &m8374_MI);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_003e;
		}
	}
	{
		t138 * L_3 = m8366(__this, (t2*) &_stringLiteral1372, &m8366_MI);
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

#include "t1375MD.h"
extern MethodInfo m7419_MI;
extern MethodInfo m5942_MI;


extern "C" void m8388 (t1672 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t2* L_7 = m7419(NULL, (t2*) &_stringLiteral1373, L_0, L_3, L_6, &m7419_MI);
		m5942(__this, L_7, &m5942_MI);
		int32_t L_8 = p1;
		__this->f11 = L_8;
		int32_t L_9 = p2;
		__this->f12 = L_9;
		return;
	}
}
#include "t1673.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1673_TI;
#include "t1673MD.h"



extern MethodInfo m8389_MI;
extern "C" t2* m8389 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m8389_ftn) ();
	static m8389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8389_ftn)il2cpp_codegen_resolve_icall ("Mono.Runtime::GetDisplayName()");
	return _il2cpp_icall_func();
}
#include "t1674.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1674_TI;
#include "t1674MD.h"



#include "t1675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1675_TI;
#include "t1675MD.h"

extern MethodInfo m11848_MI;


extern MethodInfo m8390_MI;
extern "C" void m8390 (t1675 * __this, MethodInfo* method)
{
	{
		m5942(__this, (t2*) &_stringLiteral1383, &m5942_MI);
		return;
	}
}
extern MethodInfo m8391_MI;
extern "C" void m8391 (t1675 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t1676.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1676_TI;
#include "t1676MD.h"

#include "t1347.h"
extern TypeInfo t1347_TI;
#include "t1347MD.h"
extern MethodInfo m5755_MI;


extern MethodInfo m8392_MI;
extern "C" void m8392 (t1676 * __this, t1176 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1176 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = (-1);
		t1176 * L_1 = p0;
		int32_t L_2 = (L_1->f3);
		__this->f2 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1676_TI));
		t9 * L_3 = ((t1676_SFs*)InitializedTypeInfo(&t1676_TI)->static_fields)->f4;
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m8393_MI;
extern "C" void m8393 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1676_SFs*)InitializedTypeInfo(&t1676_TI)->static_fields)->f4 = L_0;
		return;
	}
}
extern MethodInfo m8394_MI;
extern "C" bool m8394 (t1676 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f2);
		t1176 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f3);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_3, (t2*) &_stringLiteral1400, &m5755_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		t1176 * L_7 = (__this->f0);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_7);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		t1176 * L_9 = (__this->f0);
		int32_t L_10 = (__this->f1);
		t9 * L_11 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_9, L_10);
		__this->f3 = L_11;
		return 1;
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1676_TI));
		t9 * L_12 = ((t1676_SFs*)InitializedTypeInfo(&t1676_TI)->static_fields)->f4;
		__this->f3 = L_12;
		return 0;
	}
}
extern MethodInfo m8395_MI;
extern "C" t9 * m8395 (t1676 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1676_TI));
		t9 * L_1 = ((t1676_SFs*)InitializedTypeInfo(&t1676_TI)->static_fields)->f4;
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
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_3, (t2*) &_stringLiteral1398, &m5755_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_4, (t2*) &_stringLiteral1399, &m5755_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		t9 * L_5 = (__this->f3);
		return L_5;
	}
}
#include "t1677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1677_TI;
#include "t1677MD.h"

#include "t126.h"
extern TypeInfo t1004_TI;
extern TypeInfo t1171_TI;
extern TypeInfo t126_TI;
extern MethodInfo m5974_MI;
extern MethodInfo m8477_MI;
extern MethodInfo m8478_MI;
extern MethodInfo m7007_MI;
extern MethodInfo m7008_MI;
extern MethodInfo m5917_MI;
extern MethodInfo m5918_MI;
extern MethodInfo m7009_MI;
extern MethodInfo m7010_MI;
extern MethodInfo m8481_MI;
extern MethodInfo m8482_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m8483_MI;
extern MethodInfo m6985_MI;
extern MethodInfo m5979_MI;
extern MethodInfo m5970_MI;
extern MethodInfo m5919_MI;
extern MethodInfo m8484_MI;
extern MethodInfo m5890_MI;
extern MethodInfo m8487_MI;
extern MethodInfo m5978_MI;
extern MethodInfo m8485_MI;
extern MethodInfo m8486_MI;
extern MethodInfo m5899_MI;


extern MethodInfo m8396_MI;
extern "C" void m8396 (t1677 * __this, t1176 * p0, MethodInfo* method)
{
	{
		m5768(__this, &m5768_MI);
		t1176 * L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m8397_MI;
extern "C" t9 * m8397 (t1677 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8398_MI;
extern "C" void m8398 (t1677 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5974_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8399_MI;
extern "C" int32_t m8399 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8400_MI;
extern "C" int32_t m8400 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8477_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8401_MI;
extern "C" void m8401 (t1677 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8478_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8402_MI;
extern "C" bool m8402 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7007_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8403_MI;
extern "C" bool m8403 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8404_MI;
extern "C" bool m8404 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5917_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8405_MI;
extern "C" t9 * m8405 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8406_MI;
extern "C" int32_t m8406 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8407_MI;
extern "C" void m8407 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5920_MI, L_0);
		return;
	}
}
extern MethodInfo m8408_MI;
extern "C" bool m8408 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7009_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8409_MI;
extern "C" int32_t m8409 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m7010_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8410_MI;
extern "C" int32_t m8410 (t1677 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8481_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m8411_MI;
extern "C" int32_t m8411 (t1677 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8482_MI, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
extern MethodInfo m8412_MI;
extern "C" void m8412 (t1677 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5898_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8413_MI;
extern "C" void m8413 (t1677 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8483_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8414_MI;
extern "C" void m8414 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6985_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8415_MI;
extern "C" void m8415 (t1677 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8416_MI;
extern "C" void m8416 (t1677 * __this, t121 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8417_MI;
extern "C" void m8417 (t1677 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5919_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m8418_MI;
extern "C" void m8418 (t1677 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t121 * L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8484_MI, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
extern MethodInfo m8419_MI;
extern "C" t9 * m8419 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8420_MI;
extern "C" void m8420 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8421_MI;
extern "C" t9 * m8421 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8487_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8422_MI;
extern "C" void m8422 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5978_MI, L_0);
		return;
	}
}
extern MethodInfo m8423_MI;
extern "C" void m8423 (t1677 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t9 * L_1 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8485_MI, L_0, L_1);
		return;
	}
}
extern MethodInfo m8424_MI;
extern "C" t158* m8424 (t1677 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t158* L_1 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8486_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8425_MI;
extern "C" t121 * m8425 (t1677 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		t126 * L_1 = p0;
		t121 * L_2 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_0, L_1);
		return L_2;
	}
}
#include "t1678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1678_TI;
#include "t1678MD.h"

#include "t306MD.h"
extern MethodInfo m1115_MI;
extern MethodInfo m1117_MI;


extern MethodInfo m8426_MI;
extern "C" void m8426 (t1678 * __this, t1176 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = p0;
		m8396(__this, L_0, &m8396_MI);
		t1176 * L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_1);
		__this->f6 = L_2;
		return;
	}
}
extern MethodInfo m8427_MI;
extern "C" t9 * m8427 (t1678 * __this, int32_t p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			int32_t L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_2, L_3);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8428_MI;
extern "C" void m8428 (t1678 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5974_MI, L_2, L_3, L_4);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8429_MI;
extern "C" int32_t m8429 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8430_MI;
extern "C" int32_t m8430 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8477_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8431_MI;
extern "C" void m8431 (t1678 * __this, int32_t p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8478_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8432_MI;
extern "C" bool m8432 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7007_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8433_MI;
extern "C" bool m8433 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8434_MI;
extern "C" bool m8434 (t1678 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8435_MI;
extern "C" t9 * m8435 (t1678 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8436_MI;
extern "C" int32_t m8436 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_2, L_3);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8437_MI;
extern "C" void m8437 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5920_MI, L_2);
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
		m1117(NULL, L_3, &m1117_MI);
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
extern MethodInfo m8438_MI;
extern "C" bool m8438 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			bool L_4 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7009_MI, L_2, L_3);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8439_MI;
extern "C" int32_t m8439 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m7010_MI, L_2, L_3);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8440_MI;
extern "C" int32_t m8440 (t1678 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8481_MI, L_2, L_3, L_4);
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
		m1117(NULL, L_6, &m1117_MI);
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
extern MethodInfo m8441_MI;
extern "C" int32_t m8441 (t1678 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = p0;
			int32_t L_4 = p1;
			int32_t L_5 = p2;
			int32_t L_6 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8482_MI, L_2, L_3, L_4, L_5);
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
		m1117(NULL, L_7, &m1117_MI);
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
extern MethodInfo m8442_MI;
extern "C" void m8442 (t1678 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5898_MI, L_2, L_3, L_4);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8443_MI;
extern "C" void m8443 (t1678 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8483_MI, L_2, L_3, L_4);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8444_MI;
extern "C" void m8444 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6985_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8445_MI;
extern "C" void m8445 (t1678 * __this, int32_t p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8446_MI;
extern "C" void m8446 (t1678 * __this, t121 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8447_MI;
extern "C" void m8447 (t1678 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		t121 * L_3 = p0;
		int32_t L_4 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5919_MI, L_2, L_3, L_4);
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
		m1117(NULL, L_5, &m1117_MI);
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
extern MethodInfo m8448_MI;
extern "C" void m8448 (t1678 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		int32_t L_3 = p0;
		t121 * L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p3;
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8484_MI, L_2, L_3, L_4, L_5, L_6);
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
		m1117(NULL, L_7, &m1117_MI);
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
extern MethodInfo m8449_MI;
extern "C" t9 * m8449 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8450_MI;
extern "C" void m8450 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8451_MI;
extern "C" t9 * m8451 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8487_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8452_MI;
extern "C" void m8452 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		VirtActionInvoker0::Invoke(&m5978_MI, L_2);
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
		m1117(NULL, L_3, &m1117_MI);
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
extern MethodInfo m8453_MI;
extern "C" void m8453 (t1678 * __this, t9 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		t1176 * L_2 = (__this->f5);
		t9 * L_3 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8485_MI, L_2, L_3);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8454_MI;
extern "C" t158* m8454 (t1678 * __this, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t158* L_3 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8486_MI, L_2);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m8455_MI;
extern "C" t121 * m8455 (t1678 * __this, t126 * p0, MethodInfo* method)
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
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_2 = (__this->f5);
			t126 * L_3 = p0;
			t121 * L_4 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_2, L_3);
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
		m1117(NULL, L_5, &m1117_MI);
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
#include "t1679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1679_TI;
#include "t1679MD.h"

extern MethodInfo m8457_MI;


extern MethodInfo m8456_MI;
extern "C" void m8456 (t1679 * __this, t1176 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = p0;
		m8396(__this, L_0, &m8396_MI);
		return;
	}
}
extern "C" t2* m8457 (t1679 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1401;
	}
}
extern MethodInfo m8458_MI;
extern "C" int32_t m8458 (t1679 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8400(__this, &m8400_MI);
		return L_0;
	}
}
extern MethodInfo m8459_MI;
extern "C" void m8459 (t1679 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8460_MI;
extern "C" bool m8460 (t1679 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8461_MI;
extern "C" int32_t m8461 (t1679 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8462_MI;
extern "C" void m8462 (t1679 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8463_MI;
extern "C" void m8463 (t1679 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8464_MI;
extern "C" void m8464 (t1679 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8465_MI;
extern "C" void m8465 (t1679 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8466_MI;
extern "C" void m8466 (t1679 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8467_MI;
extern "C" void m8467 (t1679 * __this, int32_t p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8457_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#include "t1680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1680_TI;
#include "t1680MD.h"

extern MethodInfo m8469_MI;


extern MethodInfo m8468_MI;
extern "C" void m8468 (t1680 * __this, t1176 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = p0;
		m8456(__this, L_0, &m8456_MI);
		return;
	}
}
extern "C" t2* m8469 (t1680 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1402;
	}
}
extern MethodInfo m8470_MI;
extern "C" bool m8470 (t1680 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8471_MI;
extern "C" t9 * m8471 (t1680 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f5);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m8472_MI;
extern "C" void m8472 (t1680 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8469_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8473_MI;
extern "C" void m8473 (t1680 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8469_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
extern MethodInfo m8474_MI;
extern "C" void m8474 (t1680 * __this, t9 * p0, MethodInfo* method)
{
	{
		t2* L_0 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8469_MI, __this);
		t169 * L_1 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_1, L_0, &m5776_MI);
		il2cpp_codegen_raise_exception(L_1);
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2146.h"
extern TypeInfo t2146_TI;
#include "t2146MD.h"
extern MethodInfo m8488_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m5765_MI;
extern MethodInfo m11825_MI;
extern MethodInfo m5743_MI;
extern MethodInfo m8479_MI;
extern MethodInfo m8480_MI;
extern MethodInfo m12037_MI;
extern MethodInfo m5751_MI;
extern MethodInfo m7769_MI;
extern MethodInfo m7737_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m11187_MI;
struct t121;
#include "t2181.h"
extern "C" int32_t m12038_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m12038(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m12038_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
extern "C" void m12039_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, MethodInfo* method);
#define m12039(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, int32_t, MethodInfo*))m12039_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m12038_GM;
extern Il2CppGenericMethod m12039_GM;


extern "C" void m5768 (t1176 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t158* L_0 = ((t1176_SFs*)InitializedTypeInfo(&t1176_TI)->static_fields)->f4;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m5810_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5810 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	static bool m5810_init;
	if (!m5810_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5810_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1390, &m339_MI);
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
		int32_t L_5 = m5765(L_4, &m5765_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		t2146 * L_6 = (t2146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2146_TI));
		m11825(L_6, &m11825_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		t9 * L_7 = p0;
		int32_t L_8 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_7);
		__this->f2 = ((t158*)SZArrayNew(t158_TI_var, L_8));
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, __this, L_9);
		return;
	}
}
extern MethodInfo m5923_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m5923 (t1176 * __this, int32_t p0, MethodInfo* method)
{
	static bool m5923_init;
	if (!m5923_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5923_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral396, L_3, (t2*) &_stringLiteral1391, &m8488_MI);
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
extern "C" void m8475 (t1176 * __this, t158* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8475_init;
	if (!m8475_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8475_init = true;
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
		m7752(NULL, (t121 *)(t121 *)L_2, L_3, (t121 *)(t121 *)L_4, 0, L_5, &m7752_MI);
		int32_t L_6 = p2;
		__this->f1 = L_6;
		return;
	}
}
extern MethodInfo m8476_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8476 (t9 * __this , MethodInfo* method)
{
	static bool m8476_init;
	if (!m8476_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8476_init = true;
	}
	{
		((t1176_SFs*)InitializedTypeInfo(&t1176_TI)->static_fields)->f4 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern "C" t9 * m5766 (t1176 * __this, int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral397, L_5, (t2*) &_stringLiteral1387, &m8488_MI);
	}

IL_0022:
	{
		t158* L_6 = (__this->f2);
		int32_t L_7 = p0;
		int32_t L_8 = L_7;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_6, L_8));
	}
}
extern "C" void m5974 (t1176 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral397, L_5, (t2*) &_stringLiteral1387, &m8488_MI);
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
extern "C" int32_t m5764 (t1176 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" int32_t m8477 (t1176 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8478 (t1176 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8478_init;
	if (!m8478_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8478_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral1388, L_4, (t2*) &_stringLiteral1389, &m8488_MI);
	}

IL_001e:
	{
		int32_t L_5 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_5));
		t158* L_6 = (__this->f2);
		t158* L_7 = V_0;
		int32_t L_8 = (__this->f1);
		m7752(NULL, (t121 *)(t121 *)L_6, 0, (t121 *)(t121 *)L_7, 0, L_8, &m7752_MI);
		t158* L_9 = V_0;
		__this->f2 = L_9;
		return;
	}
}
extern "C" bool m7007 (t1176 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m7008 (t1176 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5917 (t1176 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m5918 (t1176 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8479 (t1176 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8479_init;
	if (!m8479_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8479_init = true;
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
		m7752(NULL, (t121 *)(t121 *)L_8, 0, (t121 *)(t121 *)L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))), &m7752_MI);
		t158* L_11 = V_1;
		__this->f2 = L_11;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8480 (t1176 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8480_init;
	if (!m8480_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8480_init = true;
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
		m7752(NULL, (t121 *)(t121 *)L_11, 0, (t121 *)(t121 *)L_12, 0, L_13, &m7752_MI);
		t158* L_14 = (__this->f2);
		int32_t L_15 = p0;
		t158* L_16 = V_1;
		int32_t L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = (__this->f1);
		int32_t L_20 = p0;
		m7752(NULL, (t121 *)(t121 *)L_14, L_15, (t121 *)(t121 *)L_16, ((int32_t)((int32_t)L_17+(int32_t)L_18)), ((int32_t)((int32_t)L_19-(int32_t)L_20)), &m7752_MI);
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
		m7752(NULL, (t121 *)(t121 *)L_22, L_23, (t121 *)(t121 *)L_24, ((int32_t)((int32_t)L_25+(int32_t)L_26)), ((int32_t)((int32_t)L_27-(int32_t)L_28)), &m7752_MI);
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
		m7752(NULL, (t121 *)(t121 *)L_32, L_33, (t121 *)(t121 *)L_34, L_35, ((int32_t)((int32_t)L_36-(int32_t)L_37)), &m7752_MI);
		t158* L_38 = (__this->f2);
		int32_t L_39 = (__this->f1);
		int32_t L_40 = p1;
		int32_t L_41 = p1;
		m1199(NULL, (t121 *)(t121 *)L_38, ((int32_t)((int32_t)L_39+(int32_t)L_40)), ((-L_41)), &m1199_MI);
	}

IL_00d1:
	{
		return;
	}
}
extern "C" int32_t m5779 (t1176 * __this, t9 * p0, MethodInfo* method)
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
		m8479(__this, ((int32_t)((int32_t)L_2+(int32_t)1)), &m8479_MI);
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
extern "C" void m5920 (t1176 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m1199(NULL, (t121 *)(t121 *)L_0, 0, L_1, &m1199_MI);
		__this->f1 = 0;
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" bool m7009 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8482_MI, __this, L_0, 0, L_1);
		return ((((int32_t)L_2) > ((int32_t)(-1)))? 1 : 0);
	}
}
extern "C" int32_t m7010 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, int32_t >::Invoke(&m8481_MI, __this, L_0, 0);
		return L_1;
	}
}
extern "C" int32_t m8481 (t1176 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, t9 *, int32_t, int32_t >::Invoke(&m8482_MI, __this, L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)));
		return L_4;
	}
}
extern MethodInfo* m12038_MI_var;
extern "C" int32_t m8482 (t1176 * __this, t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	static bool m8482_init;
	if (!m8482_init)
	{
		m12038_MI_var = il2cpp_codegen_genericmethod_get_method(&m12038_GM);
		m8482_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral1113, L_5, (t2*) &_stringLiteral1392, &m8488_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral489, L_9, (t2*) &_stringLiteral1393, &m8488_MI);
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
		t909 * L_13 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_13, (t2*) &_stringLiteral489, (t2*) &_stringLiteral1394, &m4402_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0056:
	{
		t158* L_14 = (__this->f2);
		t9 * L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = m12038(NULL, L_14, L_15, L_16, L_17, m12038_MI_var);
		return L_18;
	}
}
extern "C" void m5898 (t1176 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral397, L_5, (t2*) &_stringLiteral1395, &m8488_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8480(__this, L_6, 1, &m8480_MI);
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
extern "C" void m8483 (t1176 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1390, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral397, L_7, (t2*) &_stringLiteral1395, &m8488_MI);
	}

IL_0030:
	{
		t9 * L_8 = p1;
		int32_t L_9 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_8);
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
		m8479(__this, ((int32_t)((int32_t)L_13+(int32_t)L_14)), &m8479_MI);
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
		m7752(NULL, (t121 *)(t121 *)L_17, L_18, (t121 *)(t121 *)L_19, ((int32_t)((int32_t)L_20+(int32_t)L_21)), ((int32_t)((int32_t)L_22-(int32_t)L_23)), &m7752_MI);
	}

IL_007d:
	{
		t9 * L_24 = p1;
		t9 * L_25 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12037_MI, L_24);
		if ((!(((t9*)(t1176 *)__this) == ((t9*)(t9 *)L_25))))
		{
			goto IL_00bb;
		}
	}
	{
		t158* L_26 = (__this->f2);
		t158* L_27 = (__this->f2);
		int32_t L_28 = p0;
		int32_t L_29 = p0;
		m7752(NULL, (t121 *)(t121 *)L_26, 0, (t121 *)(t121 *)L_27, L_28, L_29, &m7752_MI);
		t158* L_30 = (__this->f2);
		int32_t L_31 = p0;
		int32_t L_32 = V_0;
		t158* L_33 = (__this->f2);
		int32_t L_34 = p0;
		int32_t L_35 = (__this->f1);
		int32_t L_36 = p0;
		m7752(NULL, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)L_32)), (t121 *)(t121 *)L_33, ((int32_t)((int32_t)L_34<<(int32_t)1)), ((int32_t)((int32_t)L_35-(int32_t)L_36)), &m7752_MI);
		goto IL_00c8;
	}

IL_00bb:
	{
		t9 * L_37 = p1;
		t158* L_38 = (__this->f2);
		int32_t L_39 = p0;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5751_MI, L_37, (t121 *)(t121 *)L_38, L_39);
	}

IL_00c8:
	{
		int32_t L_40 = (__this->f1);
		t9 * L_41 = p1;
		int32_t L_42 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_41);
		__this->f1 = ((int32_t)((int32_t)L_40+(int32_t)L_42));
		int32_t L_43 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_43+(int32_t)1));
		return;
	}
}
extern "C" void m6985 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m7010_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_4+(int32_t)1));
		return;
	}
}
extern "C" void m5979 (t1176 * __this, int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		m8488(NULL, (t2*) &_stringLiteral397, L_5, (t2*) &_stringLiteral1396, &m8488_MI);
	}

IL_0022:
	{
		int32_t L_6 = p0;
		m8480(__this, L_6, (-1), &m8480_MI);
		int32_t L_7 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern "C" void m5970 (t1176 * __this, t121 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		t121 * L_1 = p0;
		int32_t L_2 = (__this->f1);
		m5982(NULL, (t121 *)(t121 *)L_0, L_1, L_2, &m5982_MI);
		return;
	}
}
extern "C" void m5919 (t1176 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = (__this->f1);
		VirtActionInvoker4< int32_t, t121 *, int32_t, int32_t >::Invoke(&m8484_MI, __this, 0, L_0, L_1, L_2);
		return;
	}
}
extern "C" void m8484 (t1176 * __this, int32_t p0, t121 * p1, int32_t p2, int32_t p3, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p1;
		int32_t L_3 = m5765(L_2, &m5765_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_4, (t2*) &_stringLiteral1397, (t2*) &_stringLiteral326, &m5761_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t158* L_5 = (__this->f2);
		int32_t L_6 = p0;
		t121 * L_7 = p1;
		int32_t L_8 = p2;
		int32_t L_9 = p3;
		m7752(NULL, (t121 *)(t121 *)L_5, L_6, L_7, L_8, L_9, &m7752_MI);
		return;
	}
}
extern "C" t9 * m5769 (t1176 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1676_TI));
		t1676 * L_0 = (t1676 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1676_TI));
		m8392(L_0, __this, &m8392_MI);
		return L_0;
	}
}
extern "C" void m5890 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t9 * L_1 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m8483_MI, __this, L_0, L_1);
		return;
	}
}
extern MethodInfo* m12039_MI_var;
extern "C" void m5978 (t1176 * __this, MethodInfo* method)
{
	static bool m5978_init;
	if (!m5978_init)
	{
		m12039_MI_var = il2cpp_codegen_genericmethod_get_method(&m12039_GM);
		m5978_init = true;
	}
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		m12039(NULL, L_0, 0, L_1, m12039_MI_var);
		int32_t L_2 = (__this->f3);
		__this->f3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
extern "C" void m8485 (t1176 * __this, t9 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		t9 * L_2 = p0;
		m7769(NULL, (t121 *)(t121 *)L_0, 0, L_1, L_2, &m7769_MI);
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t158* m8486 (t1176 * __this, MethodInfo* method)
{
	static bool m8486_init;
	if (!m8486_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8486_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_0));
		t158* L_1 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, __this, (t121 *)(t121 *)L_1);
		t158* L_2 = V_0;
		return L_2;
	}
}
extern "C" t121 * m5899 (t1176 * __this, t126 * p0, MethodInfo* method)
{
	t121 * V_0 = {0};
	{
		t126 * L_0 = p0;
		int32_t L_1 = (__this->f1);
		t121 * L_2 = m7737(NULL, L_0, L_1, &m7737_MI);
		V_0 = L_2;
		t121 * L_3 = V_0;
		VirtActionInvoker1< t121 * >::Invoke(&m5970_MI, __this, L_3);
		t121 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t9 * m8487 (t1176 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f2);
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_2 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m8475(L_2, L_0, 0, L_1, &m8475_MI);
		return L_2;
	}
}
extern "C" void m8488 (t9 * __this , t2* p0, t9 * p1, t2* p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		t2* L_2 = p2;
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m11187(L_3, L_0, L_1, L_2, &m11187_MI);
		il2cpp_codegen_raise_exception(L_3);
	}
}
extern MethodInfo m8489_MI;
extern "C" t1176 * m8489 (t9 * __this , t1176 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1386, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1176 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5917_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1176 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1176 * L_5 = p0;
		t1678 * L_6 = (t1678 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1678_TI));
		m8426(L_6, L_5, &m8426_MI);
		return L_6;
	}
}
extern MethodInfo m6962_MI;
extern "C" t1176 * m6962 (t9 * __this , t1176 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1386, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1176 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		t1176 * L_4 = p0;
		return L_4;
	}

IL_0018:
	{
		t1176 * L_5 = p0;
		t1680 * L_6 = (t1680 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1680_TI));
		m8468(L_6, L_5, &m8468_MI);
		return L_6;
	}
}
#include "t1681.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1681_TI;
#include "t1681MD.h"

#include "t1298.h"
extern TypeInfo t1298_TI;
#include "t1298MD.h"
extern MethodInfo m8495_MI;
extern MethodInfo m8493_MI;
extern MethodInfo m5972_MI;
extern MethodInfo m5762_MI;


extern MethodInfo m8490_MI;
extern "C" void m8490 (t1681 * __this, t1298 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f2 = (-1);
		t1298 * L_0 = p0;
		__this->f0 = L_0;
		t1298 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f3 = L_2;
		return;
	}
}
extern MethodInfo m8491_MI;
extern "C" t9 * m8491 (t1681 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1406, &m5755_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = (__this->f2);
		t1298 * L_3 = (__this->f0);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8495_MI, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, (t2*) &_stringLiteral1407, &m5755_MI);
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
extern MethodInfo m8492_MI;
extern "C" bool m8492 (t1681 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		m8493(__this, &m8493_MI);
		int32_t L_0 = (__this->f2);
		t1298 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8495_MI, L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)L_2-(int32_t)1)))))
		{
			goto IL_003f;
		}
	}
	{
		t1298 * L_3 = (__this->f0);
		int32_t L_4 = (__this->f2);
		int32_t L_5 = ((int32_t)((int32_t)L_4+(int32_t)1));
		V_0 = L_5;
		__this->f2 = L_5;
		int32_t L_6 = V_0;
		bool L_7 = m5972(L_3, L_6, &m5972_MI);
		__this->f1 = L_7;
		return 1;
	}

IL_003f:
	{
		t1298 * L_8 = (__this->f0);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8495_MI, L_8);
		__this->f2 = L_9;
		return 0;
	}
}
extern "C" void m8493 (t1681 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		t1298 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f2);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_3, &m5762_MI);
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

extern TypeInfo t1101_TI;
extern TypeInfo t1212_TI;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t1212_0_0_0;
extern MethodInfo m8499_MI;
extern MethodInfo m8500_MI;
extern MethodInfo m5763_MI;
extern MethodInfo m5759_MI;
extern MethodInfo m11179_MI;
extern MethodInfo m8494_MI;
extern MethodInfo m5940_MI;


extern MethodInfo m6015_MI;
extern TypeInfo* t1101_TI_var;
extern "C" void m6015 (t1298 * __this, int32_t p0, MethodInfo* method)
{
	static bool m6015_init;
	if (!m6015_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m6015_init = true;
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
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_1, (t2*) &_stringLiteral1114, &m5763_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = p0;
		__this->f1 = L_2;
		int32_t L_3 = (__this->f1);
		__this->f0 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32)))));
		return;
	}
}
extern "C" uint8_t m8494 (t1298 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)4));
		int32_t L_1 = p0;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1%(int32_t)4))*(int32_t)8));
		t1101* L_2 = (__this->f0);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4))&(int32_t)((int32_t)((int32_t)((int32_t)255)<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))))));
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		return (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)255)))));
	}
}
extern "C" int32_t m8495 (t1298 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8496_MI;
extern "C" bool m8496 (t1298 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m5972 (t1298 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8499(__this, L_0, &m8499_MI);
		return L_1;
	}
}
extern MethodInfo m6016_MI;
extern "C" void m6016 (t1298 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8500(__this, L_0, L_1, &m8500_MI);
		return;
	}
}
extern MethodInfo m5971_MI;
extern "C" int32_t m5971 (t1298 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8497_MI;
extern "C" t9 * m8497 (t1298 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m8498_MI;
extern TypeInfo* t1212_TI_var;
extern TypeInfo* t737_TI_var;
extern TypeInfo* t1101_TI_var;
extern "C" void m8498 (t1298 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	static bool m8498_init;
	if (!m8498_init)
	{
		t1212_TI_var = il2cpp_codegen_class_from_type(&t1212_0_0_0);
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8498_init = true;
	}
	t1212* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t737* V_3 = {0};
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_3, (t2*) &_stringLiteral397, &m5763_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5765(L_4, &m5765_MI);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral326, (t2*) &_stringLiteral1403, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5759(L_8, &m5759_MI);
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
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_11, (t2*) &_stringLiteral397, (t2*) &_stringLiteral1404, &m5761_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0058:
	{
		t121 * L_12 = p0;
		if (!((t1212*)IsInst(L_12, t1212_TI_var)))
		{
			goto IL_009f;
		}
	}
	{
		t121 * L_13 = p0;
		int32_t L_14 = m5759(L_13, &m5759_MI);
		int32_t L_15 = p1;
		int32_t L_16 = (__this->f1);
		if ((((int32_t)((int32_t)((int32_t)L_14-(int32_t)L_15))) >= ((int32_t)L_16)))
		{
			goto IL_0076;
		}
	}
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_17, &m11179_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0076:
	{
		t121 * L_18 = p0;
		V_0 = ((t1212*)Castclass(L_18, t1212_TI_var));
		V_1 = 0;
		goto IL_0091;
	}

IL_0081:
	{
		t1212* L_19 = V_0;
		int32_t L_20 = p1;
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		bool L_23 = m5972(__this, L_22, &m5972_MI);
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
		if (!((t737*)IsInst(L_27, t737_TI_var)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_28 = (__this->f1);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_28+(int32_t)7))/(int32_t)8));
		t121 * L_29 = p0;
		int32_t L_30 = m5759(L_29, &m5759_MI);
		int32_t L_31 = p1;
		int32_t L_32 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_30-(int32_t)L_31))) >= ((int32_t)L_32)))
		{
			goto IL_00c3;
		}
	}
	{
		t570 * L_33 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_33, &m11179_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00c3:
	{
		t121 * L_34 = p0;
		V_3 = ((t737*)Castclass(L_34, t737_TI_var));
		V_4 = 0;
		goto IL_00e3;
	}

IL_00cf:
	{
		t737* L_35 = V_3;
		int32_t L_36 = p1;
		int32_t L_37 = V_4;
		int32_t L_38 = V_4;
		uint8_t L_39 = m8494(__this, L_38, &m8494_MI);
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
		if (!((t1101*)IsInst(L_43, t1101_TI_var)))
		{
			goto IL_010e;
		}
	}
	{
		t1101* L_44 = (__this->f0);
		t121 * L_45 = p0;
		int32_t L_46 = p1;
		int32_t L_47 = (__this->f1);
		m7752(NULL, (t121 *)(t121 *)L_44, 0, L_45, L_46, ((int32_t)((int32_t)((int32_t)((int32_t)L_47+(int32_t)((int32_t)31)))/(int32_t)((int32_t)32))), &m7752_MI);
		goto IL_011e;
	}

IL_010e:
	{
		t570 * L_48 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_48, (t2*) &_stringLiteral326, (t2*) &_stringLiteral1405, &m5761_MI);
		il2cpp_codegen_raise_exception(L_48);
	}

IL_011e:
	{
		return;
	}
}
extern "C" bool m8499 (t1298 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_3, &m5940_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t1101* L_4 = (__this->f0);
		int32_t L_5 = p0;
		int32_t L_6 = ((int32_t)((int32_t)L_5>>(int32_t)5));
		int32_t L_7 = p0;
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8500 (t1298 * __this, int32_t p0, bool p1, MethodInfo* method)
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_3, &m5940_MI);
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
		t1101* L_5 = (__this->f0);
		int32_t L_6 = p0;
		int32_t* L_7 = ((int32_t*)(int32_t*)SZArrayLdElema(L_5, ((int32_t)((int32_t)L_6>>(int32_t)5))));
		int32_t L_8 = p0;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_7))|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		goto IL_0055;
	}

IL_0036:
	{
		t1101* L_9 = (__this->f0);
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
extern MethodInfo m8501_MI;
extern "C" t9 * m8501 (t1298 * __this, MethodInfo* method)
{
	{
		t1681 * L_0 = (t1681 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1681_TI));
		m8490(L_0, __this, &m8490_MI);
		return L_0;
	}
}
#include "t1345.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1345_TI;
#include "t1345MD.h"

#include "t1552.h"
#include "t1553.h"
#include "t1683.h"
extern TypeInfo t1552_TI;
extern TypeInfo t1553_TI;
extern TypeInfo t1683_TI;
#include "t1552MD.h"
#include "t1683MD.h"
extern MethodInfo m7011_MI;
extern MethodInfo m8502_MI;
extern MethodInfo m8503_MI;
extern MethodInfo m7012_MI;
extern MethodInfo m7013_MI;
extern MethodInfo m8515_MI;


extern "C" void m8502 (t1345 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = m7011(NULL, &m7011_MI);
		__this->f2 = L_0;
		return;
	}
}
extern "C" void m8503 (t1345 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8504_MI;
extern "C" void m8504 (t9 * __this , MethodInfo* method)
{
	{
		t1345 * L_0 = (t1345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1345_TI));
		m8502(L_0, &m8502_MI);
		((t1345_SFs*)InitializedTypeInfo(&t1345_TI)->static_fields)->f0 = L_0;
		t1345 * L_1 = (t1345 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1345_TI));
		m8503(L_1, 1, &m8503_MI);
		((t1345_SFs*)InitializedTypeInfo(&t1345_TI)->static_fields)->f1 = L_1;
		return;
	}
}
extern MethodInfo m5746_MI;
extern "C" t1345 * m5746 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1345_TI));
		t1345 * L_0 = ((t1345_SFs*)InitializedTypeInfo(&t1345_TI)->static_fields)->f1;
		return L_0;
	}
}
extern MethodInfo m8505_MI;
extern "C" int32_t m8505 (t1345 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		t907 * L_4 = (__this->f2);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		t907 * L_5 = (__this->f2);
		t1552 * L_6 = (t1552 *)VirtFuncInvoker0< t1552 * >::Invoke(&m7012_MI, L_5);
		t2* L_7 = V_0;
		t2* L_8 = V_1;
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m7013_MI, L_6, L_7, L_8, 1);
		return L_9;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_10 = m4400(NULL, &m4400_MI);
		t1552 * L_11 = (t1552 *)VirtFuncInvoker0< t1552 * >::Invoke(&m7012_MI, L_10);
		t2* L_12 = V_0;
		t2* L_13 = V_1;
		int32_t L_14 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m7013_MI, L_11, L_12, L_13, 1);
		return L_14;
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1683_TI));
		t1683 * L_15 = ((t1683_SFs*)InitializedTypeInfo(&t1683_TI)->static_fields)->f0;
		t9 * L_16 = p0;
		t9 * L_17 = p1;
		int32_t L_18 = (int32_t)VirtFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m8515_MI, L_15, L_16, L_17);
		return L_18;
	}
}
#include "t1346.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1346_TI;
#include "t1346MD.h"

#include "t1622.h"
extern TypeInfo t1622_TI;
#include "t1622MD.h"
extern MethodInfo m8509_MI;
extern MethodInfo m8698_MI;
extern MethodInfo m8507_MI;
extern MethodInfo m8696_MI;
extern MethodInfo m8812_MI;
extern MethodInfo m8510_MI;
extern MethodInfo m8818_MI;
extern MethodInfo m7363_MI;


extern MethodInfo m8506_MI;
extern "C" void m8506 (t1346 * __this, MethodInfo* method)
{
	t907 * V_0 = {0};
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = m7011(NULL, &m7011_MI);
		V_0 = L_0;
		t907 * L_1 = V_0;
		t907 * L_2 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1346_TI));
		bool L_3 = m8509(NULL, L_1, L_2, &m8509_MI);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_4 = m7011(NULL, &m7011_MI);
		t1622 * L_5 = (t1622 *)VirtFuncInvoker0< t1622 * >::Invoke(&m8698_MI, L_4);
		__this->f2 = L_5;
	}

IL_0029:
	{
		return;
	}
}
extern "C" void m8507 (t1346 * __this, t907 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t907 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1103, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t907 * L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_3 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1346_TI));
		bool L_4 = m8509(NULL, L_2, L_3, &m8509_MI);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		t907 * L_5 = p0;
		t1622 * L_6 = (t1622 *)VirtFuncInvoker0< t1622 * >::Invoke(&m8698_MI, L_5);
		__this->f2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m8508_MI;
extern "C" void m8508 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = m4400(NULL, &m4400_MI);
		t1346 * L_1 = (t1346 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1346_TI));
		m8507(L_1, L_0, &m8507_MI);
		((t1346_SFs*)InitializedTypeInfo(&t1346_TI)->static_fields)->f0 = L_1;
		t9 * L_2 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_2, &m336_MI);
		((t1346_SFs*)InitializedTypeInfo(&t1346_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" bool m8509 (t9 * __this , t907 * p0, t907 * p1, MethodInfo* method)
{
	{
		t907 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_0);
		t907 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern "C" bool m8510 (t9 * __this , t1622 * p0, t907 * p1, MethodInfo* method)
{
	{
		t1622 * L_0 = p0;
		t2* L_1 = m8812(L_0, &m8812_MI);
		t907 * L_2 = p1;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_1, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m5747_MI;
extern "C" t1346 * m5747 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1346_TI));
		t1346 * L_0 = ((t1346_SFs*)InitializedTypeInfo(&t1346_TI)->static_fields)->f0;
		return L_0;
	}
}
extern MethodInfo m8511_MI;
extern "C" int32_t m8511 (t1346 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1408, &m339_MI);
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
		t1622 * L_6 = (__this->f2);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		t1622 * L_7 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_8 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1346_TI));
		bool L_9 = m8510(NULL, L_7, L_8, &m8510_MI);
		if (L_9)
		{
			goto IL_006a;
		}
	}
	{
		t1622 * L_10 = (__this->f2);
		t2* L_11 = V_0;
		t2* L_12 = (t2*)VirtFuncInvoker1< t2*, t2* >::Invoke(&m8818_MI, L_10, L_11);
		V_0 = L_12;
		V_3 = 0;
		goto IL_005f;
	}

IL_004c:
	{
		t2* L_13 = V_0;
		int32_t L_14 = V_3;
		uint16_t L_15 = m2778(L_13, L_14, &m2778_MI);
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
		int32_t L_21 = m2763(L_20, &m2763_MI);
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
		uint16_t L_24 = m2778(L_22, L_23, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_25 = m4400(NULL, &m4400_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_26 = m7363(NULL, L_24, L_25, &m7363_MI);
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
		int32_t L_32 = m2763(L_31, &m2763_MI);
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

extern MethodInfo m6113_MI;
extern MethodInfo m6111_MI;
extern MethodInfo m6112_MI;
extern MethodInfo m6107_MI;
extern MethodInfo m6108_MI;
extern MethodInfo m6109_MI;
extern MethodInfo m6110_MI;
extern MethodInfo m6105_MI;
extern MethodInfo m6106_MI;


extern "C" void m5896 (t1240 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m6094_MI;
extern "C" void m6094 (t1240 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5919_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m6093_MI;
extern "C" t9 * m6093 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6092_MI;
extern "C" bool m6092 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m5917_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6099_MI;
extern "C" int32_t m6099 (t1240 * __this, t9 * p0, MethodInfo* method)
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
		VirtActionInvoker1< t9 * >::Invoke(&m6113_MI, __this, L_0);
		t1176 * L_1 = m5889(__this, &m5889_MI);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		t9 * L_4 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6107_MI, __this, L_3, L_4);
		t1176 * L_5 = m5889(__this, &m5889_MI);
		t9 * L_6 = p0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_5, L_6);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		int32_t L_7 = V_0;
		t9 * L_8 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6108_MI, __this, L_7, L_8);
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
		t1176 * L_9 = m5889(__this, &m5889_MI);
		int32_t L_10 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_9, L_10);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0043;
	} // end catch (depth: 1)

IL_0043:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
extern MethodInfo m6100_MI;
extern "C" bool m6100 (t1240 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m7009_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6101_MI;
extern "C" int32_t m6101 (t1240 * __this, t9 * p0, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m7010_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6102_MI;
extern "C" void m6102 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6113_MI, __this, L_0);
		int32_t L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6107_MI, __this, L_1, L_2);
		t1176 * L_3 = m5889(__this, &m5889_MI);
		int32_t L_4 = p0;
		t9 * L_5 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5898_MI, L_3, L_4, L_5);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = p0;
		t9 * L_7 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6108_MI, __this, L_6, L_7);
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
		t1176 * L_8 = m5889(__this, &m5889_MI);
		int32_t L_9 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_8, L_9);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
extern MethodInfo m6103_MI;
extern "C" void m6103 (t1240 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6113_MI, __this, L_0);
		t1176 * L_1 = m5889(__this, &m5889_MI);
		t9 * L_2 = p0;
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m7010_MI, L_1, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_5, (t2*) &_stringLiteral1409, (t2*) &_stringLiteral607, &m5761_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		t9 * L_7 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6109_MI, __this, L_6, L_7);
		t1176 * L_8 = m5889(__this, &m5889_MI);
		t9 * L_9 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m6985_MI, L_8, L_9);
		int32_t L_10 = V_0;
		t9 * L_11 = p0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6110_MI, __this, L_10, L_11);
		return;
	}
}
extern MethodInfo m6095_MI;
extern "C" bool m6095 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7007_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6096_MI;
extern "C" bool m6096 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7008_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m6097_MI;
extern "C" t9 * m6097 (t1240 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m6098_MI;
extern "C" void m6098 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
		t1176 * L_2 = m5889(__this, &m5889_MI);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_2);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_4, (t2*) &_stringLiteral397, &m5763_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		t9 * L_5 = p1;
		VirtActionInvoker1< t9 * >::Invoke(&m6113_MI, __this, L_5);
		t1176 * L_6 = m5889(__this, &m5889_MI);
		int32_t L_7 = p0;
		t9 * L_8 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_6, L_7);
		V_0 = L_8;
		int32_t L_9 = p0;
		t9 * L_10 = V_0;
		t9 * L_11 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6111_MI, __this, L_9, L_10, L_11);
		t1176 * L_12 = m5889(__this, &m5889_MI);
		int32_t L_13 = p0;
		t9 * L_14 = p1;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5974_MI, L_12, L_13, L_14);
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		int32_t L_15 = p0;
		t9 * L_16 = V_0;
		t9 * L_17 = p1;
		VirtActionInvoker3< int32_t, t9 *, t9 * >::Invoke(&m6112_MI, __this, L_15, L_16, L_17);
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
		t1176 * L_18 = m5889(__this, &m5889_MI);
		int32_t L_19 = p0;
		t9 * L_20 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5974_MI, L_18, L_19, L_20);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0064;
	} // end catch (depth: 1)

IL_0064:
	{
		return;
	}
}
extern MethodInfo m5874_MI;
extern "C" int32_t m5874 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m5913_MI;
extern "C" t9 * m5913 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_0);
		return L_1;
	}
}
extern "C" void m5927 (t1240 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&m6105_MI, __this);
		t1176 * L_0 = m5889(__this, &m5889_MI);
		VirtActionInvoker0::Invoke(&m5920_MI, L_0);
		VirtActionInvoker0::Invoke(&m6106_MI, __this);
		return;
	}
}
extern MethodInfo m6104_MI;
extern "C" void m6104 (t1240 * __this, int32_t p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1176 * L_0 = m5889(__this, &m5889_MI);
		int32_t L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_0, L_1);
		V_0 = L_2;
		t9 * L_3 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m6113_MI, __this, L_3);
		int32_t L_4 = p0;
		t9 * L_5 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6109_MI, __this, L_4, L_5);
		t1176 * L_6 = m5889(__this, &m5889_MI);
		int32_t L_7 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_6, L_7);
		int32_t L_8 = p0;
		t9 * L_9 = V_0;
		VirtActionInvoker2< int32_t, t9 * >::Invoke(&m6110_MI, __this, L_8, L_9);
		return;
	}
}
extern "C" t1176 * m5889 (t1240 * __this, MethodInfo* method)
{
	{
		t1176 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1176 * L_2 = (__this->f0);
		return L_2;
	}
}
extern MethodInfo m5983_MI;
extern "C" t9 * m5983 (t1240 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m6105 (t1240 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6106 (t1240 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6107 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6108 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6109 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6110 (t1240 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6111 (t1240 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6112 (t1240 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m6113 (t1240 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1410, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
#include "t1682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1682_TI;
#include "t1682MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t127.h"
extern TypeInfo t185_TI;
#include "t126MD.h"
extern Il2CppType t1552_0_0_0;
extern MethodInfo m8512_MI;
extern MethodInfo m8513_MI;
extern MethodInfo m8672_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5770_MI;


extern "C" void m8512 (t1683 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" void m8513 (t1683 * __this, t907 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t907 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1103, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t907 * L_2 = p0;
		t1552 * L_3 = (t1552 *)VirtFuncInvoker0< t1552 * >::Invoke(&m7012_MI, L_2);
		__this->f2 = L_3;
		return;
	}
}
extern MethodInfo m8514_MI;
extern "C" void m8514 (t9 * __this , MethodInfo* method)
{
	{
		t1683 * L_0 = (t1683 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1683_TI));
		m8512(L_0, &m8512_MI);
		((t1683_SFs*)InitializedTypeInfo(&t1683_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_1 = m4400(NULL, &m4400_MI);
		t1683 * L_2 = (t1683 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1683_TI));
		m8513(L_2, L_1, &m8513_MI);
		((t1683_SFs*)InitializedTypeInfo(&t1683_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern "C" int32_t m8515 (t1683 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		t1552 * L_4 = (__this->f2);
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
		t1552 * L_9 = (__this->f2);
		t2* L_10 = V_0;
		t2* L_11 = V_1;
		int32_t L_12 = (int32_t)VirtFuncInvoker2< int32_t, t2*, t2* >::Invoke(&m8672_MI, L_9, L_10, L_11);
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
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12008_MI, ((t9 *)IsInst(L_14, InitializedTypeInfo(&t185_TI))), L_15);
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
		int32_t L_20 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12008_MI, ((t9 *)IsInst(L_18, InitializedTypeInfo(&t185_TI))), L_19);
		return ((-L_20));
	}

IL_0065:
	{
		t2* L_21 = m7888(NULL, (t2*) &_stringLiteral1411, &m7888_MI);
		t570 * L_22 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_22, L_21, &m2949_MI);
		il2cpp_codegen_raise_exception(L_22);
	}
}
extern MethodInfo m8516_MI;
extern "C" void m8516 (t1683 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
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
		t1552 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1552_0_0_0), &m329_MI);
		m5770(L_2, (t2*) &_stringLiteral1412, L_3, L_4, &m5770_MI);
		return;
	}
}
#include "t1170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1170_TI;
#include "t1170MD.h"



extern MethodInfo m5756_MI;
extern "C" void m5756 (t1170 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f0 = L_0;
		t9 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m8517_MI;
extern "C" t9 * m8517 (t1170 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8518_MI;
extern "C" t9 * m8518 (t1170 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
	}
}
#include "t1684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1684_TI;
#include "t1684MD.h"



#include "t1685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1685_TI;
#include "t1685MD.h"

extern MethodInfo m8519_MI;


extern "C" void m8519 (t1685 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8520_MI;
extern "C" void m8520 (t9 * __this , MethodInfo* method)
{
	{
		t1685 * L_0 = (t1685 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1685_TI));
		m8519(L_0, &m8519_MI);
		((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1686_TI;
#include "t1686MD.h"



#include "t1687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1687_TI;
#include "t1687MD.h"

#include "t1164.h"
extern TypeInfo t1164_TI;
extern MethodInfo m8523_MI;
extern MethodInfo m8524_MI;


extern MethodInfo m8521_MI;
extern "C" void m8521 (t1687 * __this, t1164 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1164 * L_0 = p0;
		__this->f0 = L_0;
		t1164 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1164 * L_3 = p0;
		t1690* L_4 = (L_3->f4);
		__this->f3 = (((int32_t)(((t121 *)L_4)->max_length)));
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8524_MI, __this);
		return;
	}
}
extern MethodInfo m8522_MI;
extern "C" void m8522 (t9 * __this , MethodInfo* method)
{
	{
		((t1687_SFs*)InitializedTypeInfo(&t1687_TI)->static_fields)->f7 = (t2*) &_stringLiteral1426;
		return;
	}
}
extern "C" void m8523 (t1687 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		int32_t L_1 = (L_0->f2);
		int32_t L_2 = (__this->f1);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t2* L_3 = ((t1687_SFs*)InitializedTypeInfo(&t1687_TI)->static_fields)->f7;
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_4, L_3, &m5755_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		return;
	}
}
extern "C" void m8524 (t1687 * __this, MethodInfo* method)
{
	{
		m8523(__this, &m8523_MI);
		__this->f2 = (-1);
		__this->f5 = NULL;
		__this->f6 = NULL;
		return;
	}
}
extern MethodInfo m8525_MI;
extern "C" bool m8525 (t1687 * __this, MethodInfo* method)
{
	t1684  V_0 = {0};
	int32_t V_1 = 0;
	{
		m8523(__this, &m8523_MI);
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
		t1164 * L_2 = (__this->f0);
		t1690* L_3 = (L_2->f4);
		int32_t L_4 = (__this->f2);
		V_0 = (*(t1684 *)((t1684 *)(t1684 *)SZArrayLdElema(L_3, L_4)));
		t9 * L_5 = ((&V_0)->f0);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t9 * L_6 = ((&V_0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1685_TI));
		t1685 * L_7 = ((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0;
		if ((((t9*)(t9 *)L_6) == ((t9*)(t1685 *)L_7)))
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
extern MethodInfo m8526_MI;
extern "C" t1170  m8526 (t1687 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8523(__this, &m8523_MI);
		t9 * L_2 = (__this->f5);
		t9 * L_3 = (__this->f6);
		t1170  L_4 = {0};
		m5756(&L_4, L_2, L_3, &m5756_MI);
		return L_4;
	}
}
extern MethodInfo m8527_MI;
extern "C" t9 * m8527 (t1687 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8523(__this, &m8523_MI);
		t9 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m8528_MI;
extern "C" t9 * m8528 (t1687 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		m8523(__this, &m8523_MI);
		t9 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m8529_MI;
extern "C" t9 * m8529 (t1687 * __this, MethodInfo* method)
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
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
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
		t1170  L_8 = {0};
		m5756(&L_8, L_6, L_7, &m5756_MI);
		t1170  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t1170_TI), &L_9);
		return L_10;
	}

IL_004e:
	{
		t138 * L_11 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_11, (t2*) &_stringLiteral1425, &m379_MI);
		il2cpp_codegen_raise_exception(L_11);
	}
}
#include "t1688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1688_TI;
#include "t1688MD.h"

#include "t1164MD.h"
extern MethodInfo m5963_MI;
extern MethodInfo m8552_MI;
extern MethodInfo m8553_MI;
extern MethodInfo m11185_MI;
extern MethodInfo m8531_MI;
extern MethodInfo m8566_MI;


extern MethodInfo m8530_MI;
extern "C" void m8530 (t1688 * __this, t1164 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1164 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1164 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8531 (t1688 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5963_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8532_MI;
extern "C" bool m8532 (t1688 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8552_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8533_MI;
extern "C" t9 * m8533 (t1688 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8553_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8534_MI;
extern "C" void m8534 (t1688 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5765(L_2, &m5765_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral326, &m2949_MI);
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
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_6, (t2*) &_stringLiteral427, &m5763_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5759(L_7, &m5759_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8531_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_11, (t2*) &_stringLiteral1427, &m2949_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1164 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8566(L_12, L_13, L_14, 0, &m8566_MI);
		return;
	}
}
extern MethodInfo m8535_MI;
extern "C" t9 * m8535 (t1688 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t1687 * L_1 = (t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1687_TI));
		m8521(L_1, L_0, 0, &m8521_MI);
		return L_1;
	}
}
#include "t1689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1689_TI;
#include "t1689MD.h"

extern MethodInfo m8537_MI;


extern MethodInfo m8536_MI;
extern "C" void m8536 (t1689 * __this, t1164 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1164 * L_0 = p0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1164 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern "C" int32_t m8537 (t1689 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5963_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8538_MI;
extern "C" bool m8538 (t1689 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8552_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8539_MI;
extern "C" t9 * m8539 (t1689 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8553_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m8540_MI;
extern "C" void m8540 (t1689 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t121 * L_2 = p0;
		int32_t L_3 = m5765(L_2, &m5765_MI);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral326, &m2949_MI);
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
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_6, (t2*) &_stringLiteral427, &m5763_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5759(L_7, &m5759_MI);
		int32_t L_9 = p1;
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8537_MI, __this);
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_11, (t2*) &_stringLiteral1427, &m2949_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_004c:
	{
		t1164 * L_12 = (__this->f0);
		t121 * L_13 = p0;
		int32_t L_14 = p1;
		m8566(L_12, L_13, L_14, 1, &m8566_MI);
		return;
	}
}
extern MethodInfo m8541_MI;
extern "C" t9 * m8541 (t1689 * __this, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t1687 * L_1 = (t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1687_TI));
		m8521(L_1, L_0, 1, &m8521_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t2168.h"
#include "t1348.h"
extern TypeInfo t1690_TI;
extern TypeInfo t1166_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t123_TI;
extern TypeInfo t1178_TI;
extern TypeInfo t1177_TI;
extern TypeInfo t1348_TI;
#include "t123MD.h"
#include "t1348MD.h"
extern Il2CppType t1690_0_0_0;
extern Il2CppType t123_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t9_0_0_0;
extern MethodInfo m5757_MI;
extern MethodInfo m8559_MI;
extern MethodInfo m8560_MI;
extern MethodInfo m8565_MI;
extern MethodInfo m8543_MI;
extern MethodInfo m7464_MI;
extern MethodInfo m8569_MI;
extern MethodInfo m8562_MI;
extern MethodInfo m8551_MI;
extern MethodInfo m8550_MI;
extern MethodInfo m8542_MI;
extern MethodInfo m5752_MI;
extern MethodInfo m5799_MI;
extern MethodInfo m5798_MI;
extern MethodInfo m5778_MI;
extern MethodInfo m8545_MI;
extern MethodInfo m8547_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m12040_MI;
extern MethodInfo m5760_MI;
extern MethodInfo m8563_MI;
extern MethodInfo m5964_MI;
extern MethodInfo m8544_MI;
extern MethodInfo m10372_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m5773_MI;
extern MethodInfo m5774_MI;
extern MethodInfo m8561_MI;
extern MethodInfo m12041_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m12043_MI;
extern MethodInfo m671_MI;
extern MethodInfo m5758_MI;
extern MethodInfo m8564_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4299_MI;
extern MethodInfo m8567_MI;
extern MethodInfo m8568_MI;
extern FieldInfo t2178_f19_FieldInfo;


extern MethodInfo m5953_MI;
extern "C" void m5953 (t1164 * __this, MethodInfo* method)
{
	{
		m8543(__this, 0, (1.0f), &m8543_MI);
		return;
	}
}
extern TypeInfo* t1690_TI_var;
extern TypeInfo* t1101_TI_var;
extern "C" void m8542 (t1164 * __this, int32_t p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	static bool m8542_init;
	if (!m8542_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8542_init = true;
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
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_1, (t2*) &_stringLiteral396, (t2*) &_stringLiteral1414, &m4402_MI);
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
		bool L_5 = m7464(NULL, L_4, &m7464_MI);
		if (!L_5)
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_6, (t2*) &_stringLiteral1415, (t2*) &_stringLiteral1416, &m4402_MI);
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
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral1417, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_007b:
	{
		double L_14 = V_0;
		V_1 = (((int32_t)L_14));
		int32_t L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		int32_t L_16 = m8569(NULL, L_15, &m8569_MI);
		V_1 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		m8562(__this, ((t1690*)SZArrayNew(t1690_TI_var, L_17)), ((t1101*)SZArrayNew(t1101_TI_var, L_18)), &m8562_MI);
		t9 * L_19 = p2;
		m8551(__this, L_19, &m8551_MI);
		t9 * L_20 = p3;
		m8550(__this, L_20, &m8550_MI);
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" void m8543 (t1164 * __this, int32_t p0, float p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8542(__this, L_0, L_1, (t9 *)NULL, (t9 *)NULL, &m8542_MI);
		return;
	}
}
extern MethodInfo m5960_MI;
extern "C" void m5960 (t1164 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8543(__this, L_0, (1.0f), &m8543_MI);
		return;
	}
}
extern TypeInfo* t1690_TI_var;
extern TypeInfo* t1101_TI_var;
extern "C" void m8544 (t1164 * __this, t1164 * p0, MethodInfo* method)
{
	static bool m8544_init;
	if (!m8544_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8544_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1164 * L_0 = p0;
		int32_t L_1 = (L_0->f1);
		__this->f1 = L_1;
		t1164 * L_2 = p0;
		float L_3 = (L_2->f3);
		__this->f3 = L_3;
		t1164 * L_4 = p0;
		t1690* L_5 = (L_4->f4);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_5);
		__this->f4 = ((t1690*)Castclass(L_6, t1690_TI_var));
		t1164 * L_7 = p0;
		t1101* L_8 = (L_7->f5);
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_8);
		__this->f5 = ((t1101*)Castclass(L_9, t1101_TI_var));
		t1164 * L_10 = p0;
		int32_t L_11 = (L_10->f6);
		__this->f6 = L_11;
		t1164 * L_12 = p0;
		t9 * L_13 = (L_12->f9);
		__this->f9 = L_13;
		t1164 * L_14 = p0;
		t9 * L_15 = (L_14->f10);
		__this->f10 = L_15;
		t1164 * L_16 = p0;
		t9 * L_17 = (L_16->f12);
		__this->f12 = L_17;
		return;
	}
}
extern MethodInfo m5748_MI;
extern "C" void m5748 (t1164 * __this, int32_t p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8542(__this, L_0, (1.0f), L_1, L_2, &m8542_MI);
		return;
	}
}
extern "C" void m8545 (t1164 * __this, t9 * p0, float p1, t9 * p2, t9 * p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1164 * G_B2_0 = {0};
	t1164 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1164 * G_B3_1 = {0};
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_1);
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
		m8542(G_B3_1, G_B3_0, L_3, L_4, L_5, &m8542_MI);
		t9 * L_6 = p0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral1375, &m339_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0024:
	{
		t9 * L_8 = p0;
		t9 * L_9 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5752_MI, L_8);
		V_0 = L_9;
		goto IL_003f;
	}

IL_002d:
	{
		t9 * L_10 = V_0;
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5799_MI, L_10);
		t9 * L_12 = V_0;
		t9 * L_13 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5798_MI, L_12);
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, __this, L_11, L_13);
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
extern MethodInfo m5754_MI;
extern "C" void m5754 (t1164 * __this, t9 * p0, t9 * p1, t9 * p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t9 * L_2 = p2;
		m8545(__this, L_0, (1.0f), L_1, L_2, &m8545_MI);
		return;
	}
}
extern MethodInfo m5805_MI;
extern "C" void m5805 (t1164 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8542(__this, 1, (1.0f), L_0, L_1, &m8542_MI);
		return;
	}
}
extern MethodInfo m8546_MI;
extern "C" void m8546 (t1164 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m5767_MI;
extern "C" void m5767 (t1164 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t9 * L_1 = p1;
		m8547(__this, L_0, (1.0f), L_1, &m8547_MI);
		return;
	}
}
extern "C" void m8547 (t1164 * __this, int32_t p0, float p1, t9 * p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = p1;
		m8543(__this, L_0, L_1, &m8543_MI);
		t9 * L_2 = p2;
		__this->f12 = L_2;
		return;
	}
}
extern MethodInfo m8548_MI;
extern TypeInfo* t1101_TI_var;
extern "C" void m8548 (t9 * __this , MethodInfo* method)
{
	static bool m8548_init;
	if (!m8548_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8548_init = true;
	}
	{
		t1101* L_0 = ((t1101*)SZArrayNew(t1101_TI_var, ((int32_t)34)));
		m1160(NULL, (t121 *)(t121 *)L_0, LoadFieldToken(&t2178_f19_FieldInfo), &m1160_MI);
		((t1164_SFs*)InitializedTypeInfo(&t1164_TI)->static_fields)->f13 = L_0;
		return;
	}
}
extern MethodInfo m8549_MI;
extern "C" t9 * m8549 (t1164 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t1687 * L_0 = (t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1687_TI));
		m8521(L_0, __this, 2, &m8521_MI);
		return L_0;
	}
}
extern "C" void m8550 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f10 = L_0;
		return;
	}
}
extern "C" void m8551 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f9 = L_0;
		return;
	}
}
extern "C" int32_t m5963 (t1164 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" bool m8552 (t1164 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" t9 * m8553 (t1164 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m5981_MI;
extern "C" t9 * m5981 (t1164 * __this, MethodInfo* method)
{
	{
		t1688 * L_0 = (__this->f7);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1688 * L_1 = (t1688 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1688_TI));
		m8530(L_1, __this, &m8530_MI);
		__this->f7 = L_1;
	}

IL_0014:
	{
		t1688 * L_2 = (__this->f7);
		return L_2;
	}
}
extern MethodInfo m7020_MI;
extern "C" t9 * m7020 (t1164 * __this, MethodInfo* method)
{
	{
		t1689 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1689 * L_1 = (t1689 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1689_TI));
		m8536(L_1, __this, &m8536_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1689 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m5777_MI;
extern "C" t9 * m5777 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	t1690* V_0 = {0};
	t1101* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1684  V_7 = {0};
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
		m5757(L_1, (t2*) &_stringLiteral405, (t2*) &_stringLiteral1413, &m5757_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1690* L_2 = (__this->f4);
		V_0 = L_2;
		t1101* L_3 = (__this->f5);
		V_1 = L_3;
		t1690* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8559_MI, __this, L_5);
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
		t1690* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1684 *)((t1684 *)(t1684 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1101* L_15 = V_1;
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
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8560_MI, __this, L_24, L_25);
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
extern MethodInfo m5961_MI;
extern "C" void m5961 (t1164 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8565(__this, L_0, L_1, 1, &m8565_MI);
		return;
	}
}
extern MethodInfo m8554_MI;
extern "C" void m8554 (t1164 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_3, (t2*) &_stringLiteral427, &m5763_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5765(L_4, &m5765_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral430, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		t121 * L_7 = p0;
		int32_t L_8 = m5759(L_7, &m5759_MI);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = p1;
		t121 * L_10 = p0;
		int32_t L_11 = m5759(L_10, &m5759_MI);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_004e;
		}
	}
	{
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, (t2*) &_stringLiteral428, &m2949_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = p1;
		int32_t L_14 = (__this->f1);
		t121 * L_15 = p0;
		int32_t L_16 = m5759(L_15, &m5759_MI);
		if ((((int32_t)((int32_t)((int32_t)L_13+(int32_t)L_14))) <= ((int32_t)L_16)))
		{
			goto IL_0069;
		}
	}
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral1418, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0069:
	{
		t9 * L_18 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8555_MI, __this);
		V_0 = L_18;
		int32_t L_19 = p1;
		V_1 = L_19;
		goto IL_008a;
	}

IL_0074:
	{
		t121 * L_20 = p0;
		t9 * L_21 = V_0;
		t1170  L_22 = (t1170 )InterfaceFuncInvoker0< t1170  >::Invoke(&m12040_MI, L_21);
		t1170  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t1170_TI), &L_23);
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		m5760(L_20, L_24, L_26, &m5760_MI);
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
extern "C" void m5778 (t1164 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8565(__this, L_0, L_1, 0, &m8565_MI);
		return;
	}
}
extern MethodInfo m5980_MI;
extern "C" void m5980 (t1164 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		t1690* L_0 = (__this->f4);
		int32_t L_1 = V_0;
		((t1684 *)(t1684 *)SZArrayLdElema(L_0, L_1))->f0 = NULL;
		t1690* L_2 = (__this->f4);
		int32_t L_3 = V_0;
		((t1684 *)(t1684 *)SZArrayLdElema(L_2, L_3))->f1 = NULL;
		t1101* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_4, L_5)) = (int32_t)0;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		t1690* L_8 = (__this->f4);
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
extern "C" bool m5964 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8563(__this, L_0, &m8563_MI);
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t9 * m8555 (t1164 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t1687 * L_0 = (t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1687_TI));
		m8521(L_0, __this, 2, &m8521_MI);
		return L_0;
	}
}
extern MethodInfo m5962_MI;
extern "C" void m5962 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t1690* V_1 = {0};
	int32_t V_2 = 0;
	t1684 * G_B3_0 = {0};
	t1684 * G_B2_0 = {0};
	t1685 * G_B4_0 = {0};
	t1684 * G_B4_1 = {0};
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8563(__this, L_0, &m8563_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		t1690* L_3 = (__this->f4);
		V_1 = L_3;
		t1101* L_4 = (__this->f5);
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648)));
		t1101* L_8 = (__this->f5);
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		t1690* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = V_2;
		G_B2_0 = ((t1684 *)(t1684 *)SZArrayLdElema(L_11, L_12));
		if (!L_13)
		{
			G_B3_0 = ((t1684 *)(t1684 *)SZArrayLdElema(L_11, L_12));
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1685_TI));
		t1685 * L_14 = ((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0;
		G_B4_0 = L_14;
		G_B4_1 = G_B2_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = ((t1685 *)(NULL));
		G_B4_1 = G_B3_0;
	}

IL_003f:
	{
		G_B4_1->f0 = G_B4_0;
		t1690* L_15 = V_1;
		int32_t L_16 = V_0;
		((t1684 *)(t1684 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
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
extern MethodInfo m5809_MI;
extern "C" bool m5809 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m5964_MI, __this, L_0);
		return L_1;
	}
}
extern MethodInfo m8556_MI;
extern "C" t9 * m8556 (t1164 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m8544(L_0, __this, &m8544_MI);
		return L_0;
	}
}
extern MethodInfo m8557_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8557 (t1164 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m8557_init;
	if (!m8557_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8557_init = true;
	}
	t158* V_0 = {0};
	t158* V_1 = {0};
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
		float L_3 = (__this->f3);
		m10372(L_2, (t2*) &_stringLiteral1419, L_3, &m10372_MI);
		t1106 * L_4 = p0;
		int32_t L_5 = (__this->f2);
		m5772(L_4, (t2*) &_stringLiteral416, L_5, &m5772_MI);
		t9 * L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		t1106 * L_7 = p0;
		t9 * L_8 = (__this->f12);
		m5785(L_7, (t2*) &_stringLiteral415, L_8, &m5785_MI);
		goto IL_005c;
	}

IL_004b:
	{
		t1106 * L_9 = p0;
		t9 * L_10 = (__this->f10);
		m5785(L_9, (t2*) &_stringLiteral418, L_10, &m5785_MI);
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
		t1106 * L_12 = p0;
		t9 * L_13 = (__this->f9);
		m5785(L_12, (t2*) &_stringLiteral1420, L_13, &m5785_MI);
	}

IL_0075:
	{
		t1106 * L_14 = p0;
		t1690* L_15 = (__this->f4);
		m5772(L_14, (t2*) &_stringLiteral1378, (((int32_t)(((t121 *)L_15)->max_length))), &m5772_MI);
		int32_t L_16 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_16));
		t158* L_17 = V_0;
		m8566(__this, (t121 *)(t121 *)L_17, 0, 0, &m8566_MI);
		int32_t L_18 = (__this->f1);
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_18));
		t158* L_19 = V_1;
		m8566(__this, (t121 *)(t121 *)L_19, 0, 1, &m8566_MI);
		t1106 * L_20 = p0;
		t158* L_21 = V_0;
		m5785(L_20, (t2*) &_stringLiteral421, (t9 *)(t9 *)L_21, &m5785_MI);
		t1106 * L_22 = p0;
		t158* L_23 = V_1;
		m5785(L_22, (t2*) &_stringLiteral422, (t9 *)(t9 *)L_23, &m5785_MI);
		t1106 * L_24 = p0;
		t9 * L_25 = (__this->f12);
		m5785(L_24, (t2*) &_stringLiteral1421, L_25, &m5785_MI);
		return;
	}
}
extern MethodInfo m8558_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t1690_TI_var;
extern TypeInfo* t1101_TI_var;
extern "C" void m8558 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	static bool m8558_init;
	if (!m8558_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8558_init = true;
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
		t1106 * L_0 = (__this->f11);
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
		t1106 * L_1 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t123_0_0_0), &m329_MI);
		t9 * L_3 = m5773(L_1, (t2*) &_stringLiteral1419, L_2, &m5773_MI);
		__this->f3 = ((*(float*)((float*)UnBox (L_3, InitializedTypeInfo(&t123_TI)))));
		t1106 * L_4 = (__this->f11);
		t126 * L_5 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_6 = m5773(L_4, (t2*) &_stringLiteral416, L_5, &m5773_MI);
		__this->f2 = ((*(int32_t*)((int32_t*)UnBox (L_6, InitializedTypeInfo(&t125_TI)))));
	}

IL_0053:
	try
	{ // begin try (depth: 1)
		t1106 * L_7 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_9 = m5773(L_7, (t2*) &_stringLiteral415, L_8, &m5773_MI);
		__this->f12 = ((t9 *)Castclass(L_9, InitializedTypeInfo(&t1178_TI)));
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
		t1106 * L_11 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_13 = m5773(L_11, (t2*) &_stringLiteral418, L_12, &m5773_MI);
		__this->f10 = ((t9 *)Castclass(L_13, InitializedTypeInfo(&t1171_TI)));
	}

IL_00aa:
	try
	{ // begin try (depth: 1)
		t1106 * L_14 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t9 * L_16 = m5773(L_14, (t2*) &_stringLiteral1420, L_15, &m5773_MI);
		__this->f9 = ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1177_TI)));
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
		t1106 * L_17 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_18 = m329(NULL, LoadTypeToken(&t125_0_0_0), &m329_MI);
		t9 * L_19 = m5773(L_17, (t2*) &_stringLiteral1378, L_18, &m5773_MI);
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_19, InitializedTypeInfo(&t125_TI)))));
		t1106 * L_20 = (__this->f11);
		t126 * L_21 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_22 = m5773(L_20, (t2*) &_stringLiteral421, L_21, &m5773_MI);
		V_1 = ((t158*)Castclass(L_22, t158_TI_var));
		t1106 * L_23 = (__this->f11);
		t126 * L_24 = m329(NULL, LoadTypeToken(&t158_0_0_0), &m329_MI);
		t9 * L_25 = m5773(L_23, (t2*) &_stringLiteral422, L_24, &m5773_MI);
		V_2 = ((t158*)Castclass(L_25, t158_TI_var));
		t158* L_26 = V_1;
		t158* L_27 = V_2;
		if ((((int32_t)(((int32_t)(((t121 *)L_26)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_27)->max_length))))))
		{
			goto IL_0147;
		}
	}
	{
		t1348 * L_28 = (t1348 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1348_TI));
		m5774(L_28, (t2*) &_stringLiteral1422, &m5774_MI);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_0147:
	{
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		int32_t L_30 = m8569(NULL, L_29, &m8569_MI);
		V_0 = L_30;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		m8562(__this, ((t1690*)SZArrayNew(t1690_TI_var, L_31)), ((t1101*)SZArrayNew(t1101_TI_var, L_32)), &m8562_MI);
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
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5778_MI, __this, (*(t9 **)(t9 **)SZArrayLdElema(L_33, L_35)), (*(t9 **)(t9 **)SZArrayLdElema(L_36, L_38)));
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
		m8561(__this, &m8561_MI);
		__this->f11 = (t1106 *)NULL;
		return;
	}
}
extern "C" int32_t m8559 (t1164 * __this, t9 * p0, MethodInfo* method)
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
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12041_MI, L_1, L_2);
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
		int32_t L_9 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12042_MI, L_7, L_8);
		return L_9;
	}
}
extern "C" bool m8560 (t1164 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1685_TI));
		t1685 * L_1 = ((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_0) == ((t9*)(t1685 *)L_1))))
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
		bool L_6 = (bool)InterfaceFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m12043_MI, L_3, L_4, L_5);
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
		int32_t L_14 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5758_MI, L_11, L_12, L_13);
		return ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" void m8561 (t1164 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t1690* L_0 = (__this->f4);
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
extern "C" void m8562 (t1164 * __this, t1690* p0, t1101* p1, MethodInfo* method)
{
	{
		t1690* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1423, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1690* L_2 = p0;
		__this->f4 = L_2;
		t1101* L_3 = p1;
		__this->f5 = L_3;
		m8561(__this, &m8561_MI);
		return;
	}
}
extern "C" int32_t m8563 (t1164 * __this, t9 * p0, MethodInfo* method)
{
	t1690* V_0 = {0};
	t1101* V_1 = {0};
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	t1684  V_7 = {0};
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
		m5757(L_1, (t2*) &_stringLiteral405, (t2*) &_stringLiteral1413, &m5757_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		t1690* L_2 = (__this->f4);
		V_0 = L_2;
		t1101* L_3 = (__this->f5);
		V_1 = L_3;
		t1690* L_4 = V_0;
		V_2 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8559_MI, __this, L_5);
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
		t1690* L_13 = V_0;
		uint32_t L_14 = V_4;
		V_7 = (*(t1684 *)((t1684 *)(t1684 *)SZArrayLdElema(L_13, (((uintptr_t)L_14)))));
		t1101* L_15 = V_1;
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
		bool L_26 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8560_MI, __this, L_24, L_25);
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
extern TypeInfo* t1690_TI_var;
extern TypeInfo* t1101_TI_var;
extern "C" void m8564 (t1164 * __this, MethodInfo* method)
{
	static bool m8564_init;
	if (!m8564_init)
	{
		t1690_TI_var = il2cpp_codegen_class_from_type(&t1690_0_0_0);
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8564_init = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	t1690* V_2 = {0};
	t1690* V_3 = {0};
	t1101* V_4 = {0};
	t1101* V_5 = {0};
	int32_t V_6 = 0;
	t1684  V_7 = {0};
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	{
		t1690* L_0 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		int32_t L_2 = m8569(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)L_1<<(int32_t)1))|(int32_t)1)), &m8569_MI);
		V_1 = L_2;
		uint32_t L_3 = V_1;
		V_2 = ((t1690*)SZArrayNew(t1690_TI_var, (((uintptr_t)L_3))));
		t1690* L_4 = (__this->f4);
		V_3 = L_4;
		uint32_t L_5 = V_1;
		V_4 = ((t1101*)SZArrayNew(t1101_TI_var, (((uintptr_t)L_5))));
		t1101* L_6 = (__this->f5);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00f2;
	}

IL_003c:
	{
		t1690* L_7 = V_3;
		int32_t L_8 = V_6;
		V_7 = (*(t1684 *)((t1684 *)(t1684 *)SZArrayLdElema(L_7, L_8)));
		t9 * L_9 = ((&V_7)->f0);
		if (!L_9)
		{
			goto IL_00ec;
		}
	}
	{
		t1101* L_10 = V_5;
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
		t1690* L_18 = V_2;
		uint32_t L_19 = V_11;
		t9 * L_20 = (((t1684 *)(t1684 *)SZArrayLdElema(L_18, (((uintptr_t)L_19))))->f0);
		if (L_20)
		{
			goto IL_00ca;
		}
	}
	{
		t1690* L_21 = V_2;
		uint32_t L_22 = V_11;
		t9 * L_23 = ((&V_7)->f0);
		((t1684 *)(t1684 *)SZArrayLdElema(L_21, (((uintptr_t)L_22))))->f0 = L_23;
		t1690* L_24 = V_2;
		uint32_t L_25 = V_11;
		t9 * L_26 = ((&V_7)->f1);
		((t1684 *)(t1684 *)SZArrayLdElema(L_24, (((uintptr_t)L_25))))->f1 = L_26;
		t1101* L_27 = V_4;
		uint32_t L_28 = V_11;
		int32_t* L_29 = ((int32_t*)(int32_t*)SZArrayLdElema(L_27, (((uintptr_t)L_28))));
		int32_t L_30 = V_8;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_29))|(int32_t)L_30));
		goto IL_00ec;
	}

IL_00ca:
	{
		t1101* L_31 = V_4;
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
		t1690* L_42 = V_2;
		t1101* L_43 = V_4;
		m8562(__this, L_42, L_43, &m8562_MI);
		return;
	}
}
extern "C" void m8565 (t1164 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	t1690* V_4 = {0};
	t1101* V_5 = {0};
	t1684  V_6 = {0};
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
		m5757(L_1, (t2*) &_stringLiteral405, (t2*) &_stringLiteral1413, &m5757_MI);
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
		m8564(__this, &m8564_MI);
	}

IL_0027:
	{
		t1690* L_4 = (__this->f4);
		V_0 = (((int32_t)(((t121 *)L_4)->max_length)));
		t9 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8559_MI, __this, L_5);
		V_1 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)));
		int32_t L_7 = V_1;
		V_2 = L_7;
		uint32_t L_8 = V_2;
		uint32_t L_9 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((uint32_t)(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_8>>5))+(int32_t)1))%(uint32_t)(int32_t)((int32_t)((int32_t)L_9-(int32_t)1))))+(int32_t)1));
		t1690* L_10 = (__this->f4);
		V_4 = L_10;
		t1101* L_11 = (__this->f5);
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
		t1690* L_14 = V_4;
		int32_t L_15 = V_9;
		V_6 = (*(t1684 *)((t1684 *)(t1684 *)SZArrayLdElema(L_14, L_15)));
		t1101* L_16 = V_5;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1685_TI));
		t1685 * L_21 = ((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_20) == ((t9*)(t1685 *)L_21))))
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1685_TI));
		t1685 * L_26 = ((t1685_SFs*)InitializedTypeInfo(&t1685_TI)->static_fields)->f0;
		if ((!(((t9*)(t9 *)L_25) == ((t9*)(t1685 *)L_26))))
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
		bool L_34 = (bool)VirtFuncInvoker2< bool, t9 *, t9 * >::Invoke(&m8560_MI, __this, L_32, L_33);
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
		t1690* L_36 = V_4;
		int32_t L_37 = V_9;
		t9 * L_38 = p1;
		((t1684 *)(t1684 *)SZArrayLdElema(L_36, L_37))->f1 = L_38;
		int32_t L_39 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_39+(int32_t)1));
		goto IL_0121;
	}

IL_0110:
	{
		t9 * L_40 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m511(NULL, (t2*) &_stringLiteral1424, L_40, &m511_MI);
		t570 * L_42 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_42, L_41, &m2949_MI);
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
		t1101* L_44 = V_5;
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
		t1690* L_53 = V_4;
		int32_t L_54 = V_7;
		t9 * L_55 = p0;
		((t1684 *)(t1684 *)SZArrayLdElema(L_53, L_54))->f0 = L_55;
		t1690* L_56 = V_4;
		int32_t L_57 = V_7;
		t9 * L_58 = p1;
		((t1684 *)(t1684 *)SZArrayLdElema(L_56, L_57))->f1 = L_58;
		t1101* L_59 = V_5;
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
extern "C" void m8566 (t1164 * __this, t121 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		int32_t L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1687_TI));
		t1687 * L_1 = (t1687 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1687_TI));
		m8521(L_1, __this, L_0, &m8521_MI);
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
		m5760(L_2, L_4, L_6, &m5760_MI);
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
extern "C" bool m8567 (t9 * __this , int32_t p0, MethodInfo* method)
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
extern "C" int32_t m8568 (t9 * __this , int32_t p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		bool L_2 = m8567(NULL, L_1, &m8567_MI);
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
extern "C" int32_t m8569 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1101* L_1 = ((t1164_SFs*)InitializedTypeInfo(&t1164_TI)->static_fields)->f13;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		if ((((int32_t)L_0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1101* L_4 = ((t1164_SFs*)InitializedTypeInfo(&t1164_TI)->static_fields)->f13;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1101* L_9 = ((t1164_SFs*)InitializedTypeInfo(&t1164_TI)->static_fields)->f13;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		int32_t L_11 = m8568(NULL, L_10, &m8568_MI);
		return L_11;
	}
}
#include "t1691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1691_TI;
#include "t1691MD.h"

#include "t1692.h"
extern TypeInfo t1692_TI;


extern MethodInfo m8570_MI;
extern "C" void m8570 (t1691 * __this, t1692 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1692 * L_0 = p0;
		__this->f0 = L_0;
		t1692 * L_1 = p0;
		int32_t L_2 = (L_1->f5);
		__this->f1 = L_2;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m8571_MI;
extern "C" t9 * m8571 (t1691 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1692 * L_1 = (__this->f0);
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
		t1692 * L_5 = (__this->f0);
		int32_t L_6 = (L_5->f2);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0035;
		}
	}

IL_002f:
	{
		t1347 * L_7 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_7, &m5762_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		t1692 * L_8 = (__this->f0);
		t158* L_9 = (L_8->f0);
		t1692 * L_10 = (__this->f0);
		int32_t L_11 = (L_10->f1);
		int32_t L_12 = (__this->f2);
		t1692 * L_13 = (__this->f0);
		t158* L_14 = (L_13->f0);
		int32_t L_15 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))%(int32_t)(((int32_t)(((t121 *)L_14)->max_length)))));
		return (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_15));
	}
}
extern MethodInfo m8572_MI;
extern "C" bool m8572 (t1691 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t1692 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f5);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_3, &m5762_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		t1692 * L_5 = (__this->f0);
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
#include "t1692MD.h"

extern MethodInfo m8576_MI;
extern MethodInfo m8574_MI;
extern MethodInfo m8584_MI;
extern MethodInfo m8586_MI;
extern MethodInfo m8580_MI;


extern MethodInfo m8573_MI;
extern "C" void m8573 (t1692 * __this, MethodInfo* method)
{
	{
		m8576(__this, ((int32_t)32), (2.0f), &m8576_MI);
		return;
	}
}
extern "C" void m8574 (t1692 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8576(__this, L_0, (2.0f), &m8576_MI);
		return;
	}
}
extern MethodInfo m8575_MI;
extern "C" void m8575 (t1692 * __this, t9 * p0, MethodInfo* method)
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
	t1692 * G_B2_0 = {0};
	t1692 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	t1692 * G_B3_1 = {0};
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		m8574(G_B3_1, G_B3_0, &m8574_MI);
		t9 * L_3 = p0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_4, (t2*) &_stringLiteral1428, &m339_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		t9 * L_5 = p0;
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4410_MI, L_5);
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
			VirtActionInvoker1< t9 * >::Invoke(&m8584_MI, __this, L_9);
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
extern "C" void m8576 (t1692 * __this, int32_t p0, float p1, MethodInfo* method)
{
	static bool m8576_init;
	if (!m8576_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8576_init = true;
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
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_1, (t2*) &_stringLiteral396, (t2*) &_stringLiteral1429, &m4402_MI);
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
		t909 * L_4 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_4, (t2*) &_stringLiteral1430, (t2*) &_stringLiteral1431, &m4402_MI);
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
extern MethodInfo m8577_MI;
extern "C" int32_t m8577 (t1692 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8578_MI;
extern "C" bool m8578 (t1692 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8579_MI;
extern "C" t9 * m8579 (t1692 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m8580 (t1692 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_3, (t2*) &_stringLiteral397, &m5763_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5765(L_4, &m5765_MI);
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
		int32_t L_9 = m5759(L_8, &m5759_MI);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}

IL_0032:
	{
		int32_t L_10 = (__this->f2);
		t121 * L_11 = p0;
		int32_t L_12 = m5759(L_11, &m5759_MI);
		int32_t L_13 = p1;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13)))))
		{
			goto IL_0048;
		}
	}

IL_0042:
	{
		t570 * L_14 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_14, &m11179_MI);
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
		int32_t L_24 = m11611(NULL, L_22, L_23, &m11611_MI);
		m7752(NULL, (t121 *)(t121 *)L_18, L_19, L_20, L_21, L_24, &m7752_MI);
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
		m7752(NULL, (t121 *)(t121 *)L_27, 0, L_28, ((int32_t)((int32_t)L_29+(int32_t)L_30)), ((int32_t)((int32_t)L_31-(int32_t)L_32)), &m7752_MI);
	}

IL_009a:
	{
		return;
	}
}
extern MethodInfo m8581_MI;
extern "C" t9 * m8581 (t1692 * __this, MethodInfo* method)
{
	{
		t1691 * L_0 = (t1691 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1691_TI));
		m8570(L_0, __this, &m8570_MI);
		return L_0;
	}
}
extern MethodInfo m8582_MI;
extern "C" void m8582 (t1692 * __this, MethodInfo* method)
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
extern MethodInfo m8583_MI;
extern "C" t9 * m8583 (t1692 * __this, MethodInfo* method)
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
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_2, &m5762_MI);
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
extern "C" void m8584 (t1692 * __this, t9 * p0, MethodInfo* method)
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
		m8586(__this, &m8586_MI);
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
extern MethodInfo m8585_MI;
extern "C" t9 * m8585 (t1692 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
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
extern "C" void m8586 (t1692 * __this, MethodInfo* method)
{
	static bool m8586_init;
	if (!m8586_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8586_init = true;
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m8580_MI, __this, (t121 *)(t121 *)L_6, 0);
		t158* L_7 = V_1;
		__this->f0 = L_7;
		__this->f1 = 0;
		int32_t L_8 = (__this->f1);
		int32_t L_9 = (__this->f2);
		__this->f3 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		return;
	}
}
#include "t1693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1693_TI;
#include "t1693MD.h"



#include "t1694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1694_TI;
#include "t1694MD.h"



#include "t1695.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1695_TI;
#include "t1695MD.h"

#include "t1350.h"
extern TypeInfo t1350_TI;
#include "t1350MD.h"
extern MethodInfo m8591_MI;
extern MethodInfo m5804_MI;
extern MethodInfo m8589_MI;


extern MethodInfo m8587_MI;
extern "C" void m8587 (t1695 * __this, t1350 * p0, int32_t p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1350 * L_0 = p0;
		__this->f0 = L_0;
		t1350 * L_1 = p0;
		int32_t L_2 = (L_1->f2);
		__this->f1 = L_2;
		t1350 * L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, L_3);
		__this->f3 = L_4;
		int32_t L_5 = p1;
		__this->f4 = L_5;
		VirtActionInvoker0::Invoke(&m8589_MI, __this);
		return;
	}
}
extern MethodInfo m8588_MI;
extern "C" void m8588 (t9 * __this , MethodInfo* method)
{
	{
		((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8 = (t2*) &_stringLiteral1443;
		return;
	}
}
extern "C" void m8589 (t1695 * __this, MethodInfo* method)
{
	{
		t1350 * L_0 = (__this->f0);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
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
extern MethodInfo m8590_MI;
extern "C" bool m8590 (t1695 * __this, MethodInfo* method)
{
	t1696* V_0 = {0};
	t1693  V_1 = {0};
	int32_t V_2 = 0;
	{
		t1350 * L_0 = (__this->f0);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1350 * L_6 = (__this->f0);
		t1696* L_7 = (L_6->f3);
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
		t1696* L_12 = V_0;
		int32_t L_13 = (__this->f2);
		V_1 = (*(t1693 *)((t1693 *)(t1693 *)SZArrayLdElema(L_12, L_13)));
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
extern "C" t1170  m8591 (t1695 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		t9 * L_7 = (__this->f6);
		t1170  L_8 = {0};
		m5756(&L_8, L_6, L_7, &m5756_MI);
		return L_8;
	}
}
extern MethodInfo m8592_MI;
extern "C" t9 * m8592 (t1695 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f5);
		return L_6;
	}
}
extern MethodInfo m8593_MI;
extern "C" t9 * m8593 (t1695 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002a:
	{
		t9 * L_6 = (__this->f6);
		return L_6;
	}
}
extern MethodInfo m8594_MI;
extern "C" t9 * m8594 (t1695 * __this, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t2* L_4 = ((t1695_SFs*)InitializedTypeInfo(&t1695_TI)->static_fields)->f8;
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_5, L_4, &m5755_MI);
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
		t1170  L_10 = (t1170 )VirtFuncInvoker0< t1170  >::Invoke(&m8591_MI, __this);
		t1170  L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t1170_TI), &L_11);
		return L_12;
	}

IL_005f:
	{
		int32_t L_13 = (__this->f4);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t1694_TI), &L_14);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m511(NULL, L_15, (t2*) &_stringLiteral1442, &m511_MI);
		t169 * L_17 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_17, L_16, &m5776_MI);
		il2cpp_codegen_raise_exception(L_17);
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1696_TI;
extern Il2CppType t1696_0_0_0;
extern MethodInfo m8615_MI;
extern MethodInfo m8602_MI;
extern MethodInfo m8617_MI;
extern MethodInfo m8601_MI;
extern MethodInfo m8614_MI;
extern MethodInfo m8596_MI;
extern MethodInfo m8616_MI;
extern MethodInfo m8612_MI;
extern MethodInfo m8611_MI;
extern MethodInfo m8608_MI;
extern MethodInfo m8607_MI;
extern MethodInfo m8605_MI;
extern MethodInfo m515_MI;
extern MethodInfo m8613_MI;


extern MethodInfo m8595_MI;
extern "C" void m8595 (t1350 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1350_TI));
		int32_t L_0 = ((t1350_SFs*)InitializedTypeInfo(&t1350_TI)->static_fields)->f0;
		m8596(__this, (t9 *)NULL, L_0, &m8596_MI);
		return;
	}
}
extern MethodInfo m5800_MI;
extern "C" void m5800 (t1350 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8596(__this, (t9 *)NULL, L_0, &m8596_MI);
		return;
	}
}
extern "C" void m8596 (t1350 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_1, (t2*) &_stringLiteral396, &m5763_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1350_TI));
		int32_t L_3 = ((t1350_SFs*)InitializedTypeInfo(&t1350_TI)->static_fields)->f0;
		__this->f5 = L_3;
	}

IL_002c:
	{
		t9 * L_4 = p0;
		__this->f4 = L_4;
		int32_t L_5 = p1;
		m8616(__this, L_5, 1, &m8616_MI);
		return;
	}
}
extern MethodInfo m8597_MI;
extern "C" void m8597 (t9 * __this , MethodInfo* method)
{
	{
		((t1350_SFs*)InitializedTypeInfo(&t1350_TI)->static_fields)->f0 = ((int32_t)16);
		return;
	}
}
extern MethodInfo m8598_MI;
extern "C" t9 * m8598 (t1350 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_0 = (t1695 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1695_TI));
		m8587(L_0, __this, 2, &m8587_MI);
		return L_0;
	}
}
extern "C" int32_t m5804 (t1350 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8599_MI;
extern "C" bool m8599 (t1350 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8600_MI;
extern "C" t9 * m8600 (t1350 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" bool m8601 (t1350 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern "C" bool m8602 (t1350 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m8603_MI;
extern "C" t9 * m8603 (t1350 * __this, t9 * p0, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		t9 * L_2 = p0;
		t9 * L_3 = m8615(__this, L_2, &m8615_MI);
		return L_3;
	}
}
extern MethodInfo m8604_MI;
extern "C" void m8604 (t1350 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	{
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8602_MI, __this);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_3, (t2*) &_stringLiteral1432, &m5776_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p0;
		int32_t L_5 = m8617(__this, L_4, &m8617_MI);
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8601_MI, __this);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_7, (t2*) &_stringLiteral1433, &m5776_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0039:
	{
		t9 * L_8 = p0;
		t9 * L_9 = p1;
		m8614(__this, L_8, L_9, 1, &m8614_MI);
		return;
	}
}
extern "C" int32_t m8605 (t1350 * __this, MethodInfo* method)
{
	{
		t1696* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m8606_MI;
extern TypeInfo* t1696_TI_var;
extern "C" void m8606 (t1350 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8606_init;
	if (!m8606_init)
	{
		t1696_TI_var = il2cpp_codegen_class_from_type(&t1696_0_0_0);
		m8606_init = true;
	}
	int32_t V_0 = 0;
	t1696* V_1 = {0};
	t1696* V_2 = {0};
	t1696* V_3 = {0};
	{
		t1696* L_0 = (__this->f3);
		V_0 = (((int32_t)(((t121 *)L_0)->max_length)));
		int32_t L_1 = (__this->f1);
		int32_t L_2 = p0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_3, (t2*) &_stringLiteral1434, &m5763_MI);
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
		V_1 = ((t1696*)SZArrayNew(t1696_TI_var, L_5));
		t1696* L_6 = (__this->f3);
		t1696* L_7 = V_1;
		int32_t L_8 = (__this->f1);
		m5982(NULL, (t121 *)(t121 *)L_6, (t121 *)(t121 *)L_7, L_8, &m5982_MI);
		t1696* L_9 = V_1;
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
		V_2 = ((t1696*)SZArrayNew(t1696_TI_var, L_12));
		t1696* L_13 = (__this->f3);
		t1696* L_14 = V_2;
		int32_t L_15 = (__this->f1);
		m5982(NULL, (t121 *)(t121 *)L_13, (t121 *)(t121 *)L_14, L_15, &m5982_MI);
		t1696* L_16 = V_2;
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
		V_3 = ((t1696*)SZArrayNew(t1696_TI_var, L_19));
		t1696* L_20 = (__this->f3);
		t1696* L_21 = V_3;
		int32_t L_22 = V_0;
		m5982(NULL, (t121 *)(t121 *)L_20, (t121 *)(t121 *)L_21, L_22, &m5982_MI);
		t1696* L_23 = V_3;
		__this->f3 = L_23;
	}

IL_0091:
	{
		return;
	}
}
extern MethodInfo m5802_MI;
extern "C" void m5802 (t1350 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		m8614(__this, L_0, L_1, 0, &m8614_MI);
		return;
	}
}
extern "C" bool m8607 (t1350 * __this, t9 * p0, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			int32_t L_3 = m8617(__this, L_2, &m8617_MI);
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
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_4, &m5762_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_0024;
	} // end catch (depth: 1)

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C" t9 * m8608 (t1350 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1695_TI));
		t1695 * L_0 = (t1695 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1695_TI));
		m8587(L_0, __this, 2, &m8587_MI);
		return L_0;
	}
}
extern MethodInfo m8609_MI;
extern "C" void m8609 (t1350 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8612_MI, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(&m8611_MI, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8610_MI;
extern "C" void m8610 (t1350 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_3, &m5940_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5765(L_4, &m5765_MI);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral1435, &m2949_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0027:
	{
		int32_t L_7 = p1;
		t121 * L_8 = p0;
		int32_t L_9 = m5759(L_8, &m5759_MI);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_003b;
		}
	}
	{
		t132 * L_10 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_10, (t2*) &_stringLiteral1436, &m339_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003b:
	{
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		t121 * L_12 = p0;
		int32_t L_13 = m5759(L_12, &m5759_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_0056;
		}
	}
	{
		t132 * L_15 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_15, (t2*) &_stringLiteral1437, &m339_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0056:
	{
		t9 * L_16 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8608_MI, __this);
		V_0 = L_16;
		int32_t L_17 = p1;
		V_1 = L_17;
		goto IL_0077;
	}

IL_0061:
	{
		t121 * L_18 = p0;
		t9 * L_19 = V_0;
		t1170  L_20 = (t1170 )InterfaceFuncInvoker0< t1170  >::Invoke(&m12040_MI, L_19);
		t1170  L_21 = L_20;
		t9 * L_22 = Box(InitializedTypeInfo(&t1170_TI), &L_21);
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		m5760(L_18, L_22, L_24, &m5760_MI);
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
extern "C" void m8611 (t1350 * __this, int32_t p0, MethodInfo* method)
{
	t1696* V_0 = {0};
	int32_t V_1 = 0;
	{
		t1696* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
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
		t1696* L_7 = V_0;
		int32_t L_8 = p0;
		t1696* L_9 = V_0;
		int32_t L_10 = p0;
		int32_t L_11 = V_1;
		int32_t L_12 = p0;
		m7752(NULL, (t121 *)(t121 *)L_7, ((int32_t)((int32_t)L_8+(int32_t)1)), (t121 *)(t121 *)L_9, L_10, ((int32_t)((int32_t)((int32_t)((int32_t)L_11-(int32_t)1))-(int32_t)L_12)), &m7752_MI);
		goto IL_0048;
	}

IL_002e:
	{
		t1696* L_13 = V_0;
		int32_t L_14 = p0;
		((t1693 *)(t1693 *)SZArrayLdElema(L_13, L_14))->f0 = NULL;
		t1696* L_15 = V_0;
		int32_t L_16 = p0;
		((t1693 *)(t1693 *)SZArrayLdElema(L_15, L_16))->f1 = NULL;
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
		t909 * L_19 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_19, (t2*) &_stringLiteral1438, &m5763_MI);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_0071:
	{
		return;
	}
}
extern "C" int32_t m8612 (t1350 * __this, t9 * p0, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
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
		int32_t L_3 = m8617(__this, L_2, &m8617_MI);
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
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_4, &m5762_MI);
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
extern MethodInfo m5801_MI;
extern "C" bool m5801 (t1350 * __this, t9 * p0, MethodInfo* method)
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
		m11185(L_1, &m11185_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_2 = p0;
			bool L_3 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m8607_MI, __this, L_2);
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
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_4, &m5762_MI);
		il2cpp_codegen_raise_exception(L_4);
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern MethodInfo m5803_MI;
extern "C" t9 * m5803 (t1350 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		t1696* L_3 = (__this->f3);
		int32_t L_4 = p0;
		t9 * L_5 = (((t1693 *)(t1693 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001f:
	{
		t909 * L_6 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_6, (t2*) &_stringLiteral1438, &m5763_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern TypeInfo* t1696_TI_var;
extern "C" void m8613 (t1350 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	static bool m8613_init;
	if (!m8613_init)
	{
		t1696_TI_var = il2cpp_codegen_class_from_type(&t1696_0_0_0);
		m8613_init = true;
	}
	t1696* V_0 = {0};
	t1696* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		t1696* L_0 = (__this->f3);
		V_0 = L_0;
		V_1 = (t1696*)NULL;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8605_MI, __this);
		V_2 = L_1;
		int32_t L_2 = p1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
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
		V_1 = ((t1696*)SZArrayNew(t1696_TI_var, ((int32_t)((int32_t)L_7<<(int32_t)1))));
	}

IL_002e:
	{
		t1696* L_8 = V_1;
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
		t1696* L_12 = V_0;
		t1696* L_13 = V_1;
		int32_t L_14 = V_4;
		m7752(NULL, (t121 *)(t121 *)L_12, 0, (t121 *)(t121 *)L_13, 0, L_14, &m7752_MI);
	}

IL_0047:
	{
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		int32_t L_16 = p1;
		V_4 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		t1696* L_18 = V_0;
		int32_t L_19 = p1;
		t1696* L_20 = V_1;
		int32_t L_21 = p1;
		int32_t L_22 = V_4;
		m7752(NULL, (t121 *)(t121 *)L_18, L_19, (t121 *)(t121 *)L_20, ((int32_t)((int32_t)L_21+(int32_t)1)), L_22, &m7752_MI);
	}

IL_0063:
	{
		goto IL_0072;
	}

IL_0065:
	{
		t1696* L_23 = V_0;
		t1696* L_24 = V_1;
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		m5982(NULL, (t121 *)(t121 *)L_23, (t121 *)(t121 *)L_24, L_25, &m5982_MI);
	}

IL_0072:
	{
		t1696* L_26 = V_1;
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
		t1696* L_28 = V_0;
		int32_t L_29 = p1;
		t1696* L_30 = V_0;
		int32_t L_31 = p1;
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		int32_t L_33 = p1;
		m7752(NULL, (t121 *)(t121 *)L_28, L_29, (t121 *)(t121 *)L_30, ((int32_t)((int32_t)L_31+(int32_t)1)), ((int32_t)((int32_t)L_32-(int32_t)L_33)), &m7752_MI);
	}

IL_0091:
	{
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" void m8614 (t1350 * __this, t9 * p0, t9 * p1, bool p2, MethodInfo* method)
{
	static bool m8614_init;
	if (!m8614_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8614_init = true;
	}
	t1696* V_0 = {0};
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
		m339(L_1, (t2*) &_stringLiteral1413, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1696* L_2 = (__this->f3);
		V_0 = L_2;
		V_1 = (-1);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t9 * L_3 = p0;
		int32_t L_4 = m8617(__this, L_3, &m8617_MI);
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
		t1347 * L_5 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_5, &m5762_MI);
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
		t2* L_10 = m7889(NULL, (t2*) &_stringLiteral1439, L_8, &m7889_MI);
		V_2 = L_10;
		t2* L_11 = V_2;
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, L_11, &m2949_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004d:
	{
		t1696* L_13 = V_0;
		int32_t L_14 = V_1;
		t9 * L_15 = p1;
		((t1693 *)(t1693 *)SZArrayLdElema(L_13, L_14))->f1 = L_15;
		int32_t L_16 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_16+(int32_t)1));
		return;
	}

IL_0069:
	{
		int32_t L_17 = V_1;
		V_1 = ((~L_17));
		int32_t L_18 = V_1;
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8605_MI, __this);
		if ((((int32_t)L_18) <= ((int32_t)((int32_t)((int32_t)L_19+(int32_t)1)))))
		{
			goto IL_00b9;
		}
	}
	{
		t158* L_20 = ((t158*)SZArrayNew(t158_TI_var, 7));
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1440);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 0)) = (t9 *)(t2*) &_stringLiteral1440;
		t158* L_21 = L_20;
		t9 * L_22 = p0;
		ArrayElementTypeCheck (L_21, L_22);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 1)) = (t9 *)L_22;
		t158* L_23 = L_21;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral384);
		*((t9 **)(t9 **)SZArrayLdElema(L_23, 2)) = (t9 *)(t2*) &_stringLiteral384;
		t158* L_24 = L_23;
		t9 * L_25 = p1;
		ArrayElementTypeCheck (L_24, L_25);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 3)) = (t9 *)L_25;
		t158* L_26 = L_24;
		ArrayElementTypeCheck (L_26, (t2*) &_stringLiteral1441);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 4)) = (t9 *)(t2*) &_stringLiteral1441;
		t158* L_27 = L_26;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		t9 * L_30 = Box(InitializedTypeInfo(&t125_TI), &L_29);
		ArrayElementTypeCheck (L_27, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_27, 5)) = (t9 *)L_30;
		t158* L_31 = L_27;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral341);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 6)) = (t9 *)(t2*) &_stringLiteral341;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_32 = m515(NULL, L_31, &m515_MI);
		t138 * L_33 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_33, L_32, &m379_MI);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00b9:
	{
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
		int32_t L_35 = V_1;
		m8613(__this, ((int32_t)((int32_t)L_34+(int32_t)1)), L_35, &m8613_MI);
		t1696* L_36 = (__this->f3);
		V_0 = L_36;
		t1696* L_37 = V_0;
		int32_t L_38 = V_1;
		t9 * L_39 = p0;
		((t1693 *)(t1693 *)SZArrayLdElema(L_37, L_38))->f0 = L_39;
		t1696* L_40 = V_0;
		int32_t L_41 = V_1;
		t9 * L_42 = p1;
		((t1693 *)(t1693 *)SZArrayLdElema(L_40, L_41))->f1 = L_42;
		int32_t L_43 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_43+(int32_t)1));
		int32_t L_44 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_44+(int32_t)1));
		return;
	}
}
extern "C" t9 * m8615 (t1350 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		int32_t L_1 = m8617(__this, L_0, &m8617_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		t1696* L_3 = (__this->f3);
		int32_t L_4 = V_0;
		t9 * L_5 = (((t1693 *)(t1693 *)SZArrayLdElema(L_3, L_4))->f1);
		return L_5;
	}

IL_001e:
	{
		return NULL;
	}
}
extern TypeInfo* t1696_TI_var;
extern "C" void m8616 (t1350 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8616_init;
	if (!m8616_init)
	{
		t1696_TI_var = il2cpp_codegen_class_from_type(&t1696_0_0_0);
		m8616_init = true;
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
		__this->f3 = ((t1696*)SZArrayNew(t1696_TI_var, L_4));
		__this->f1 = 0;
		__this->f2 = 0;
		return;
	}
}
extern "C" int32_t m8617 (t1350 * __this, t9 * p0, MethodInfo* method)
{
	t1696* V_0 = {0};
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t9 * V_7 = {0};
	t9 * G_B5_0 = {0};
	{
		t1696* L_0 = (__this->f3);
		V_0 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5804_MI, __this);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1683_TI));
		t1683 * L_4 = ((t1683_SFs*)InitializedTypeInfo(&t1683_TI)->static_fields)->f0;
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
		t1696* L_11 = V_0;
		int32_t L_12 = V_5;
		t9 * L_13 = (((t1693 *)(t1693 *)SZArrayLdElema(L_11, L_12))->f0);
		t9 * L_14 = p0;
		int32_t L_15 = (int32_t)InterfaceFuncInvoker2< int32_t, t9 *, t9 * >::Invoke(&m5758_MI, L_10, L_13, L_14);
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
#include "t1697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1697_TI;
#include "t1697MD.h"



extern MethodInfo m8618_MI;
extern "C" void m8618 (t1697 * __this, t884 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t884 * L_0 = p0;
		__this->f0 = L_0;
		t884 * L_1 = p0;
		int32_t L_2 = (L_1->f4);
		__this->f1 = L_2;
		__this->f2 = ((int32_t)-2);
		return;
	}
}
extern MethodInfo m8619_MI;
extern "C" t9 * m8619 (t1697 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		t884 * L_1 = (__this->f0);
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
		t884 * L_6 = (__this->f0);
		int32_t L_7 = (L_6->f2);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_0039:
	{
		t1347 * L_8 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_8, &m5762_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003f:
	{
		t884 * L_9 = (__this->f0);
		t158* L_10 = (L_9->f0);
		int32_t L_11 = (__this->f2);
		int32_t L_12 = L_11;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_10, L_12));
	}
}
extern MethodInfo m8620_MI;
extern "C" bool m8620 (t1697 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		t884 * L_1 = (__this->f0);
		int32_t L_2 = (L_1->f4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_3, &m5762_MI);
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
		t884 * L_7 = (__this->f0);
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

extern MethodInfo m6945_MI;
extern MethodInfo m8621_MI;


extern TypeInfo* t158_TI_var;
extern "C" void m4536 (t884 * __this, MethodInfo* method)
{
	static bool m4536_init;
	if (!m4536_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4536_init = true;
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
extern "C" void m8621 (t884 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8621_init;
	if (!m8621_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8621_init = true;
	}
	t158* V_0 = {0};
	{
		int32_t L_0 = p0;
		int32_t L_1 = m6945(NULL, L_0, ((int32_t)16), &m6945_MI);
		p0 = L_1;
		int32_t L_2 = p0;
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		t158* L_3 = (__this->f0);
		t158* L_4 = V_0;
		int32_t L_5 = (__this->f2);
		m5982(NULL, (t121 *)(t121 *)L_3, (t121 *)(t121 *)L_4, L_5, &m5982_MI);
		int32_t L_6 = p0;
		__this->f3 = L_6;
		t158* L_7 = V_0;
		__this->f0 = L_7;
		return;
	}
}
extern "C" int32_t m4706 (t884 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m4707_MI;
extern "C" bool m4707 (t884 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m4708_MI;
extern "C" t9 * m4708 (t884 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern "C" void m4278 (t884 * __this, MethodInfo* method)
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
extern "C" void m4709 (t884 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_3, (t2*) &_stringLiteral397, &m5763_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t121 * L_4 = p0;
		int32_t L_5 = m5765(L_4, &m5765_MI);
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		t121 * L_6 = p0;
		int32_t L_7 = m5759(L_6, &m5759_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = p1;
		t121 * L_9 = p0;
		int32_t L_10 = m5759(L_9, &m5759_MI);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		int32_t L_11 = (__this->f2);
		t121 * L_12 = p0;
		int32_t L_13 = m5759(L_12, &m5759_MI);
		int32_t L_14 = p1;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_004e;
		}
	}

IL_0048:
	{
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m11179(L_15, &m11179_MI);
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
		m5760(L_17, (*(t9 **)(t9 **)SZArrayLdElema(L_18, L_20)), ((int32_t)((int32_t)((int32_t)((int32_t)L_21-(int32_t)((int32_t)((int32_t)L_22+(int32_t)1))))+(int32_t)L_23)), &m5760_MI);
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
extern MethodInfo m4705_MI;
extern "C" t9 * m4705 (t884 * __this, MethodInfo* method)
{
	{
		t1697 * L_0 = (t1697 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1697_TI));
		m8618(L_0, __this, &m8618_MI);
		return L_0;
	}
}
extern "C" t9 * m4710 (t884 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
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
extern "C" t9 * m4711 (t884 * __this, MethodInfo* method)
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
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5762(L_1, &m5762_MI);
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
		m8621(__this, ((int32_t)((int32_t)L_13/(int32_t)2)), &m8621_MI);
	}

IL_007d:
	{
		t9 * L_14 = V_0;
		return L_14;
	}
}
extern "C" void m4274 (t884 * __this, t9 * p0, MethodInfo* method)
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
		m8621(__this, ((int32_t)((int32_t)L_3*(int32_t)2)), &m8621_MI);
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
#include "t1698.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1698_TI;
#include "t1698MD.h"



#include "t1699.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1699_TI;
#include "t1699MD.h"



#include "t1012.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1012_TI;
#include "t1012MD.h"

#include "t732MD.h"
extern MethodInfo m4306_MI;


extern MethodInfo m4610_MI;
extern "C" void m4610 (t1012 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t2* L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m4611_MI;
extern "C" void m4611 (t1012 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1700_TI;
#include "t1700MD.h"



#include "t1154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1154_TI;
#include "t1154MD.h"



extern MethodInfo m4839_MI;
extern "C" void m4839 (t1154 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f2 = L_0;
		int32_t L_1 = (__this->f2);
		__this->f0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_2 = (__this->f2);
		__this->f1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
#include "t1701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1701_TI;
#include "t1701MD.h"



extern MethodInfo m8622_MI;
extern "C" void m8622 (t1701 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
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
extern MethodInfo m8623_MI;
extern "C" void m8623 (t1701 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
#include "t1702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1702_TI;
#include "t1702MD.h"



extern MethodInfo m8624_MI;
extern "C" void m8624 (t1702 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1703_TI;
#include "t1703MD.h"

#include "t567.h"
extern TypeInfo t567_TI;
#include "t567MD.h"
extern MethodInfo m4433_MI;


extern MethodInfo m8625_MI;
extern "C" void m8625 (t1703 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t942.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t942_TI;
#include "t942MD.h"

#include "t920.h"
extern TypeInfo t2039_TI;
extern MethodInfo m8628_MI;
extern MethodInfo m4496_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m8629_MI;


extern MethodInfo m8626_MI;
extern "C" void m8626 (t942 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		t920 ** L_0 = &(__this->f3);
		int32_t* L_1 = &(__this->f1);
		int32_t* L_2 = &(__this->f2);
		t2** L_3 = &(__this->f4);
		int32_t* L_4 = &(__this->f5);
		int32_t* L_5 = &(__this->f6);
		m8628(NULL, 2, 0, L_0, L_1, L_2, L_3, L_4, L_5, &m8628_MI);
		return;
	}
}
extern MethodInfo m8627_MI;
extern "C" void m8627 (t942 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		__this->f2 = (-1);
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		t920 ** L_2 = &(__this->f3);
		int32_t* L_3 = &(__this->f1);
		int32_t* L_4 = &(__this->f2);
		t2** L_5 = &(__this->f4);
		int32_t* L_6 = &(__this->f5);
		int32_t* L_7 = &(__this->f6);
		m8628(NULL, ((int32_t)((int32_t)L_0+(int32_t)2)), L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8628_MI);
		return;
	}
}
extern "C" bool m8628 (t9 * __this , int32_t p0, bool p1, t920 ** p2, int32_t* p3, int32_t* p4, t2** p5, int32_t* p6, int32_t* p7, MethodInfo* method)
{
	typedef bool (*m8628_ftn) (int32_t, bool, t920 **, int32_t*, int32_t*, t2**, int32_t*, int32_t*);
	static m8628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8628_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7);
}
extern MethodInfo m4497_MI;
extern "C" int32_t m4497 (t942 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t2* m4496 (t942 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t2* m8629 (t942 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*) &_stringLiteral1444;
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
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4496_MI, __this);
		V_0 = L_2;
		goto IL_001c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2039_TI, e.ex->object.klass))
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
extern MethodInfo m8630_MI;
extern "C" int32_t m8630 (t942 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m4493_MI;
extern "C" t920 * m4493 (t942 * __this, MethodInfo* method)
{
	{
		t920 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m8631_MI;
extern "C" int32_t m8631 (t942 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8632_MI;
extern "C" t2* m8632 (t942 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8633_MI;
extern "C" t2* m8633 (t942 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	{
		t328 * L_0 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_0, &m1203_MI);
		V_0 = L_0;
		t920 * L_1 = (__this->f3);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t328 * L_2 = V_0;
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral1260, &m7888_MI);
		m1207(L_2, L_3, &m1207_MI);
		goto IL_0033;
	}

IL_0021:
	{
		t328 * L_4 = V_0;
		t920 * L_5 = (__this->f3);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_5);
		m1207(L_4, L_6, &m1207_MI);
	}

IL_0033:
	{
		t328 * L_7 = V_0;
		t2* L_8 = m7888(NULL, (t2*) &_stringLiteral1445, &m7888_MI);
		m1207(L_7, L_8, &m1207_MI);
		int32_t L_9 = (__this->f1);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		t328 * L_10 = V_0;
		t2* L_11 = m7888(NULL, (t2*) &_stringLiteral1446, &m7888_MI);
		m1207(L_10, L_11, &m1207_MI);
		goto IL_007e;
	}

IL_0060:
	{
		t328 * L_12 = V_0;
		t2* L_13 = m7888(NULL, (t2*) &_stringLiteral1447, &m7888_MI);
		m1207(L_12, L_13, &m1207_MI);
		t328 * L_14 = V_0;
		int32_t L_15 = (__this->f1);
		m5856(L_14, L_15, &m5856_MI);
	}

IL_007e:
	{
		t328 * L_16 = V_0;
		t2* L_17 = m7888(NULL, (t2*) &_stringLiteral1448, &m7888_MI);
		m1207(L_16, L_17, &m1207_MI);
		t328 * L_18 = V_0;
		t2* L_19 = m8629(__this, &m8629_MI);
		m1207(L_18, L_19, &m1207_MI);
		t328 * L_20 = V_0;
		int32_t L_21 = (__this->f5);
		int32_t L_22 = L_21;
		t9 * L_23 = Box(InitializedTypeInfo(&t125_TI), &L_22);
		int32_t L_24 = (__this->f6);
		int32_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t125_TI), &L_25);
		m5883(L_20, (t2*) &_stringLiteral1449, L_23, L_26, &m5883_MI);
		t328 * L_27 = V_0;
		t2* L_28 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_27);
		return L_28;
	}
}
#include "t862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t862_TI;
#include "t862MD.h"

#include "t930.h"
extern TypeInfo t920_TI;
extern TypeInfo t1704_TI;
extern TypeInfo t934_TI;
extern TypeInfo t930_TI;
#include "t920MD.h"
#include "t930MD.h"
extern Il2CppType t942_0_0_0;
extern Il2CppType t1704_0_0_0;
extern MethodInfo m8638_MI;
extern MethodInfo m8636_MI;
extern MethodInfo m8637_MI;
extern MethodInfo m8639_MI;
extern MethodInfo m4498_MI;
extern MethodInfo m4492_MI;
extern MethodInfo m4494_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m4465_MI;
extern MethodInfo m4466_MI;
extern MethodInfo m7793_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m7794_MI;
extern MethodInfo m4495_MI;
extern MethodInfo m9748_MI;


extern MethodInfo m8634_MI;
extern "C" void m8634 (t862 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m8638(__this, 0, 0, &m8638_MI);
		return;
	}
}
extern MethodInfo m4482_MI;
extern "C" void m4482 (t862 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8638(__this, L_0, L_1, &m8638_MI);
		return;
	}
}
extern MethodInfo m8635_MI;
extern "C" void m8635 (t862 * __this, t138 * p0, bool p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		bool L_1 = p1;
		m8636(__this, L_0, 0, L_1, &m8636_MI);
		return;
	}
}
extern "C" void m8636 (t862 * __this, t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		int32_t L_1 = p1;
		bool L_2 = p2;
		m8637(__this, L_0, L_1, L_2, 0, &m8637_MI);
		return;
	}
}
extern TypeInfo* t1704_TI_var;
extern "C" void m8637 (t862 * __this, t138 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	static bool m8637_init;
	if (!m8637_init)
	{
		t1704_TI_var = il2cpp_codegen_class_from_type(&t1704_0_0_0);
		m8637_init = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	t1176 * V_2 = {0};
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
		m339(L_1, (t2*) &_stringLiteral331, &m339_MI);
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_3, (t2*) &_stringLiteral808, (t2*) &_stringLiteral1450, &m4402_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		t138 * L_4 = p0;
		int32_t L_5 = p1;
		bool L_6 = p2;
		t1704* L_7 = m8639(NULL, L_4, L_5, L_6, &m8639_MI);
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
		t1704* L_9 = (__this->f1);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		t920 * L_12 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m4493_MI, (*(t942 **)(t942 **)SZArrayLdElema(L_9, L_11)));
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
		t1704* L_15 = (__this->f1);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_17 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_17, &m5768_MI);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0092;
	}

IL_0070:
	{
		t1704* L_18 = (__this->f1);
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		t920 * L_21 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m4493_MI, (*(t942 **)(t942 **)SZArrayLdElema(L_18, L_20)));
		if (!L_21)
		{
			goto IL_008e;
		}
	}
	{
		t1176 * L_22 = V_2;
		t1704* L_23 = (__this->f1);
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_22, (*(t942 **)(t942 **)SZArrayLdElema(L_23, L_25)));
	}

IL_008e:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_27 = V_3;
		t1704* L_28 = (__this->f1);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((t121 *)L_28)->max_length))))))
		{
			goto IL_0070;
		}
	}
	{
		t1176 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_30 = m329(NULL, LoadTypeToken(&t942_0_0_0), &m329_MI);
		t121 * L_31 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_29, L_30);
		__this->f1 = ((t1704*)Castclass(L_31, t1704_TI_var));
	}

IL_00b8:
	{
		return;
	}
}
extern TypeInfo* t1704_TI_var;
extern "C" void m8638 (t862 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8638_init;
	if (!m8638_init)
	{
		t1704_TI_var = il2cpp_codegen_class_from_type(&t1704_0_0_0);
		m8638_init = true;
	}
	t942 * V_0 = {0};
	t1176 * V_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_1, (t2*) &_stringLiteral808, (t2*) &_stringLiteral1450, &m4402_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_2 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_2, &m5768_MI);
		V_1 = L_2;
		int32_t L_3 = p0;
		p0 = ((int32_t)((int32_t)L_3+(int32_t)2));
		goto IL_0032;
	}

IL_0023:
	{
		t1176 * L_4 = V_1;
		t942 * L_5 = V_0;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_4, L_5);
		int32_t L_6 = p0;
		p0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_7 = p0;
		bool L_8 = p1;
		t942 * L_9 = (t942 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t942_TI));
		m8627(L_9, L_7, L_8, &m8627_MI);
		t942 * L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		t942 * L_11 = V_0;
		t920 * L_12 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m4493_MI, L_11);
		if (L_12)
		{
			goto IL_0023;
		}
	}

IL_0045:
	{
		bool L_13 = p1;
		__this->f2 = L_13;
		t1176 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_15 = m329(NULL, LoadTypeToken(&t942_0_0_0), &m329_MI);
		t121 * L_16 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_14, L_15);
		__this->f1 = ((t1704*)Castclass(L_16, t1704_TI_var));
		return;
	}
}
extern "C" t1704* m8639 (t9 * __this , t138 * p0, int32_t p1, bool p2, MethodInfo* method)
{
	typedef t1704* (*m8639_ftn) (t138 *, int32_t, bool);
	static m8639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8639_ftn)il2cpp_codegen_resolve_icall ("System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" int32_t m4498 (t862 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1704* L_0 = (__this->f1);
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
		t1704* L_1 = (__this->f1);
		G_B3_0 = (((int32_t)(((t121 *)L_1)->max_length)));
	}

IL_0013:
	{
		return G_B3_0;
	}
}
extern "C" t942 * m4492 (t862 * __this, int32_t p0, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4498_MI, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (t942 *)NULL;
	}

IL_000f:
	{
		t1704* L_3 = (__this->f1);
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		return (*(t942 **)(t942 **)SZArrayLdElema(L_3, L_5));
	}
}
extern MethodInfo m8640_MI;
extern "C" t2* m8640 (t862 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t2* V_1 = {0};
	t2* V_2 = {0};
	t328 * V_3 = {0};
	int32_t V_4 = 0;
	t942 * V_5 = {0};
	t920 * V_6 = {0};
	t934* V_7 = {0};
	int32_t V_8 = 0;
	t126 * V_9 = {0};
	bool V_10 = false;
	t2* V_11 = {0};
	{
		t2* L_0 = m5845(NULL, &m5845_MI);
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral1259, &m7888_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m1251(NULL, (t2*) &_stringLiteral1451, L_0, L_1, &m1251_MI);
		V_0 = L_2;
		t2* L_3 = m7888(NULL, (t2*) &_stringLiteral1260, &m7888_MI);
		V_1 = L_3;
		t2* L_4 = m7888(NULL, (t2*) &_stringLiteral1452, &m7888_MI);
		V_2 = L_4;
		t328 * L_5 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m1203(L_5, &m1203_MI);
		V_3 = L_5;
		V_4 = 0;
		goto IL_01b8;
	}

IL_003e:
	{
		int32_t L_6 = V_4;
		t942 * L_7 = (t942 *)VirtFuncInvoker1< t942 *, int32_t >::Invoke(&m4492_MI, __this, L_6);
		V_5 = L_7;
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t328 * L_9 = V_3;
		t2* L_10 = V_0;
		m1207(L_9, L_10, &m1207_MI);
		goto IL_006d;
	}

IL_0057:
	{
		t328 * L_11 = V_3;
		t2* L_12 = m7888(NULL, (t2*) &_stringLiteral1259, &m7888_MI);
		m5792(L_11, (t2*) &_stringLiteral1453, L_12, &m5792_MI);
	}

IL_006d:
	{
		t942 * L_13 = V_5;
		t920 * L_14 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m4493_MI, L_13);
		V_6 = L_14;
		t920 * L_15 = V_6;
		if (!L_15)
		{
			goto IL_0175;
		}
	}
	{
		t328 * L_16 = V_3;
		t920 * L_17 = V_6;
		t126 * L_18 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_17);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_18);
		t920 * L_20 = V_6;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_20);
		m5883(L_16, (t2*) &_stringLiteral1454, L_19, L_21, &m5883_MI);
		t328 * L_22 = V_3;
		m1207(L_22, (t2*) &_stringLiteral383, &m1207_MI);
		t920 * L_23 = V_6;
		t934* L_24 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_23);
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
		t328 * L_26 = V_3;
		m1207(L_26, (t2*) &_stringLiteral384, &m1207_MI);
	}

IL_00ca:
	{
		t934* L_27 = V_7;
		int32_t L_28 = V_8;
		int32_t L_29 = L_28;
		t126 * L_30 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_27, L_29)));
		V_9 = L_30;
		t126 * L_31 = V_9;
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_31);
		V_10 = L_32;
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_00ec;
		}
	}
	{
		t126 * L_34 = V_9;
		t126 * L_35 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_34);
		V_9 = L_35;
	}

IL_00ec:
	{
		t126 * L_36 = V_9;
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7794_MI, L_36);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		t126 * L_38 = V_9;
		t2* L_39 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4495_MI, L_38);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_40 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_41 = m2777(NULL, L_39, L_40, &m2777_MI);
		if (!L_41)
		{
			goto IL_0122;
		}
	}
	{
		t328 * L_42 = V_3;
		t126 * L_43 = V_9;
		t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4495_MI, L_43);
		m1207(L_42, L_44, &m1207_MI);
		t328 * L_45 = V_3;
		m1207(L_45, (t2*) &_stringLiteral135, &m1207_MI);
	}

IL_0122:
	{
		t328 * L_46 = V_3;
		t126 * L_47 = V_9;
		t2* L_48 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_47);
		m1207(L_46, L_48, &m1207_MI);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_0140;
		}
	}
	{
		t328 * L_50 = V_3;
		m1207(L_50, (t2*) &_stringLiteral1455, &m1207_MI);
	}

IL_0140:
	{
		t328 * L_51 = V_3;
		t934* L_52 = V_7;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		t2* L_55 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9748_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_52, L_54)));
		m5792(L_51, (t2*) &_stringLiteral1456, L_55, &m5792_MI);
		int32_t L_56 = V_8;
		V_8 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_015c:
	{
		int32_t L_57 = V_8;
		t934* L_58 = V_7;
		if ((((int32_t)L_57) < ((int32_t)(((int32_t)(((t121 *)L_58)->max_length))))))
		{
			goto IL_00b9;
		}
	}
	{
		t328 * L_59 = V_3;
		m1207(L_59, (t2*) &_stringLiteral143, &m1207_MI);
		goto IL_017d;
	}

IL_0175:
	{
		t328 * L_60 = V_3;
		t2* L_61 = V_1;
		m1207(L_60, L_61, &m1207_MI);
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
		t942 * L_63 = V_5;
		t2* L_64 = m8629(L_63, &m8629_MI);
		V_11 = L_64;
		t2* L_65 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_66 = m2777(NULL, L_65, (t2*) &_stringLiteral1444, &m2777_MI);
		if (!L_66)
		{
			goto IL_01b2;
		}
	}
	{
		t328 * L_67 = V_3;
		t2* L_68 = V_2;
		t2* L_69 = V_11;
		t942 * L_70 = V_5;
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4497_MI, L_70);
		int32_t L_72 = L_71;
		t9 * L_73 = Box(InitializedTypeInfo(&t125_TI), &L_72);
		m5883(L_67, L_68, L_69, L_73, &m5883_MI);
	}

IL_01b2:
	{
		int32_t L_74 = V_4;
		V_4 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_01b8:
	{
		int32_t L_75 = V_4;
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4498_MI, __this);
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_003e;
		}
	}
	{
		t328 * L_77 = V_3;
		t2* L_78 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_77);
		return L_78;
	}
}
#include "t1705.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1705_TI;
#include "t1705MD.h"

#include "t1706.h"
extern MethodInfo m12044_MI;


extern MethodInfo m8641_MI;
extern "C" void m8641 (t1705 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f1 = ((int32_t)99);
		return;
	}
}
extern MethodInfo m8642_MI;
extern "C" void m8642 (t1705 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1458, &m5755_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
extern MethodInfo m8643_MI;
extern TypeInfo* t221_TI_var;
extern "C" t221* m8643 (t1705 * __this, MethodInfo* method)
{
	static bool m8643_init;
	if (!m8643_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8643_init = true;
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
		t1101* L_2 = (t1101*)VirtFuncInvoker0< t1101* >::Invoke(&m12044_MI, __this);
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) == ((int32_t)(((int32_t)(((t121 *)L_2)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		t138 * L_3 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_3, (t2*) &_stringLiteral1457, &m379_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0025:
	{
		t221* L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5788_MI, L_4);
		return ((t221*)Castclass(L_5, t221_TI_var));
	}
}
#include "t1707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1707_TI;
#include "t1707MD.h"

extern MethodInfo m4303_MI;
extern MethodInfo m8644_MI;


extern "C" int32_t m8644 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		double L_2 = floor(((double)((double)(((double)L_0))/(double)(((double)L_1)))));
		return (((int32_t)L_2));
	}
}
extern MethodInfo m8645_MI;
extern "C" int32_t m8645 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = m8644(NULL, L_2, L_3, &m8644_MI);
		return ((int32_t)((int32_t)L_0-(int32_t)((int32_t)((int32_t)L_1*(int32_t)L_4))));
	}
}
extern MethodInfo m8646_MI;
extern "C" int32_t m8646 (t9 * __this , int32_t* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8644(NULL, L_0, L_1, &m8644_MI);
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
#include "t1708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1708_TI;
#include "t1708MD.h"

#include "t303.h"
extern MethodInfo m7021_MI;


extern MethodInfo m8647_MI;
extern "C" int32_t m8647 (t9 * __this , t272  p0, MethodInfo* method)
{
	{
		int64_t L_0 = m7021((&p0), &m7021_MI);
		return ((int32_t)((int32_t)1+(int32_t)(((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL)))))));
	}
}
extern MethodInfo m8648_MI;
extern "C" int32_t m8648 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8645(NULL, L_0, 7, &m8645_MI);
		return (int32_t)(L_1);
	}
}
#include "t1709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1709_TI;
#include "t1709MD.h"

extern MethodInfo m8649_MI;
extern MethodInfo m8651_MI;
extern MethodInfo m8650_MI;
extern MethodInfo m8652_MI;
extern MethodInfo m8653_MI;
extern MethodInfo m8655_MI;
extern MethodInfo m8654_MI;


extern "C" bool m8649 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = m8645(NULL, L_0, 4, &m8645_MI);
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
		int32_t L_3 = m8645(NULL, L_2, ((int32_t)400), &m8645_MI);
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
extern "C" int32_t m8650 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		int32_t L_4 = m8644(NULL, ((int32_t)((int32_t)L_3-(int32_t)1)), 4, &m8644_MI);
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)L_4));
		int32_t L_5 = V_0;
		int32_t L_6 = p2;
		int32_t L_7 = m8644(NULL, ((int32_t)((int32_t)L_6-(int32_t)1)), ((int32_t)100), &m8644_MI);
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t L_9 = p2;
		int32_t L_10 = m8644(NULL, ((int32_t)((int32_t)L_9-(int32_t)1)), ((int32_t)400), &m8644_MI);
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)L_10));
		int32_t L_11 = V_0;
		int32_t L_12 = p1;
		int32_t L_13 = m8644(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)367)*(int32_t)L_12))-(int32_t)((int32_t)362))), ((int32_t)12), &m8644_MI);
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
		bool L_17 = m8649(NULL, L_16, &m8649_MI);
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
extern "C" int32_t m8651 (t9 * __this , int32_t p0, MethodInfo* method)
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
		int32_t L_2 = m8646(NULL, (&V_0), L_1, ((int32_t)146097), &m8646_MI);
		V_1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = m8646(NULL, (&V_0), L_3, ((int32_t)36524), &m8646_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = m8646(NULL, (&V_0), L_5, ((int32_t)1461), &m8646_MI);
		V_3 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = m8644(NULL, L_7, ((int32_t)365), &m8644_MI);
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
extern "C" void m8652 (t9 * __this , int32_t* p0, int32_t* p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = p1;
		int32_t L_1 = p2;
		int32_t L_2 = m8651(NULL, L_1, &m8651_MI);
		*((int32_t*)(L_0)) = (int32_t)L_2;
		int32_t L_3 = p2;
		int32_t* L_4 = p1;
		int32_t L_5 = m8650(NULL, 1, 1, (*((int32_t*)L_4)), &m8650_MI);
		V_0 = ((int32_t)((int32_t)L_3-(int32_t)L_5));
		int32_t L_6 = p2;
		int32_t* L_7 = p1;
		int32_t L_8 = m8650(NULL, 1, 3, (*((int32_t*)L_7)), &m8650_MI);
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
		bool L_10 = m8649(NULL, (*((int32_t*)L_9)), &m8649_MI);
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
		int32_t L_14 = m8644(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)12)*(int32_t)((int32_t)((int32_t)L_12+(int32_t)L_13))))+(int32_t)((int32_t)373))), ((int32_t)367), &m8644_MI);
		*((int32_t*)(L_11)) = (int32_t)L_14;
		return;
	}
}
extern "C" void m8653 (t9 * __this , int32_t* p0, int32_t* p1, int32_t* p2, int32_t p3, MethodInfo* method)
{
	{
		int32_t* L_0 = p1;
		int32_t* L_1 = p2;
		int32_t L_2 = p3;
		m8652(NULL, L_0, L_1, L_2, &m8652_MI);
		int32_t* L_3 = p0;
		int32_t L_4 = p3;
		int32_t* L_5 = p1;
		int32_t* L_6 = p2;
		int32_t L_7 = m8650(NULL, 1, (*((int32_t*)L_5)), (*((int32_t*)L_6)), &m8650_MI);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_7))+(int32_t)1));
		return;
	}
}
extern "C" int32_t m8654 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		m8652(NULL, (&V_0), (&V_1), L_0, &m8652_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C" int32_t m8655 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		m8653(NULL, (&V_0), (&V_1), (&V_2), L_0, &m8653_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m8656_MI;
extern "C" int32_t m8656 (t9 * __this , t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8647(NULL, L_0, &m8647_MI);
		int32_t L_2 = m8655(NULL, L_1, &m8655_MI);
		return L_2;
	}
}
extern MethodInfo m8657_MI;
extern "C" int32_t m8657 (t9 * __this , t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8647(NULL, L_0, &m8647_MI);
		int32_t L_2 = m8654(NULL, L_1, &m8654_MI);
		return L_2;
	}
}
extern MethodInfo m8658_MI;
extern "C" int32_t m8658 (t9 * __this , t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8647(NULL, L_0, &m8647_MI);
		int32_t L_2 = m8651(NULL, L_1, &m8651_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1621.h"
#include "t1623.h"
extern TypeInfo t1621_TI;
extern TypeInfo t1623_TI;
#include "t1621MD.h"
#include "t1406MD.h"
#include "t1623MD.h"
extern MethodInfo m8695_MI;
extern MethodInfo m8663_MI;
extern MethodInfo m7933_MI;
extern MethodInfo m8699_MI;
extern MethodInfo m8664_MI;
extern MethodInfo m11566_MI;
extern MethodInfo m6115_MI;
extern MethodInfo m8687_MI;
extern MethodInfo m8665_MI;
extern MethodInfo m7959_MI;
extern MethodInfo m8670_MI;
extern MethodInfo m8666_MI;
extern MethodInfo m8671_MI;
extern MethodInfo m8686_MI;
extern MethodInfo m7951_MI;
extern MethodInfo m7985_MI;
extern MethodInfo m8667_MI;
extern MethodInfo m8680_MI;
extern MethodInfo m7970_MI;
extern MethodInfo m7975_MI;
extern MethodInfo m8678_MI;
extern MethodInfo m8668_MI;
extern MethodInfo m8679_MI;
extern MethodInfo m7964_MI;
extern MethodInfo m8673_MI;
extern MethodInfo m7967_MI;
extern MethodInfo m8684_MI;


extern MethodInfo m8659_MI;
extern "C" void m8659 (t1552 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m8660_MI;
extern "C" void m8660 (t1552 * __this, t907 * p0, MethodInfo* method)
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
		t907 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_0);
		__this->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_2 = m8663(NULL, &m8663_MI);
		if (!L_2)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		t9 * L_3 = ((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f5;
		V_0 = L_3;
		t9 * L_4 = V_0;
		m1115(NULL, L_4, &m1115_MI);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
			t1164 * L_5 = ((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f4;
			if (L_5)
			{
				goto IL_0039;
			}
		}

IL_002f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
			t1164 * L_6 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
			m5953(L_6, &m5953_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
			((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f4 = L_6;
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
			t1164 * L_7 = ((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f4;
			t907 * L_8 = p0;
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_8);
			int32_t L_10 = L_9;
			t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
			t9 * L_12 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_7, L_11);
			__this->f3 = ((t1621 *)Castclass(L_12, InitializedTypeInfo(&t1621_TI)));
			t1621 * L_13 = (__this->f3);
			if (L_13)
			{
				goto IL_0088;
			}
		}

IL_0061:
		{
			t907 * L_14 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
			t1621 * L_15 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
			m7933(L_15, L_14, &m7933_MI);
			__this->f3 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
			t1164 * L_16 = ((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f4;
			t907 * L_17 = p0;
			int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_17);
			int32_t L_19 = L_18;
			t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
			t1621 * L_21 = (__this->f3);
			VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_16, L_20, L_21);
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
		m1117(NULL, L_22, &m1117_MI);
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
		t907 * L_23 = p0;
		t2* L_24 = m8699(L_23, &m8699_MI);
		__this->f2 = L_24;
		t2* L_25 = (__this->f2);
		m8664(__this, L_25, &m8664_MI);
	}

IL_00ab:
	{
		return;
	}
}
extern MethodInfo m8661_MI;
extern "C" void m8661 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = m11566(NULL, (t2*) &_stringLiteral1459, &m11566_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m2777(NULL, L_0, (t2*) &_stringLiteral1301, &m2777_MI);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = m6115(NULL, &m6115_MI);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f0 = G_B3_0;
		t9 * L_3 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_3, &m336_MI);
		((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f5 = L_3;
		return;
	}
}
extern MethodInfo m8662_MI;
extern "C" void m8662 (t1552 * __this, t9 * p0, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_0 = m8663(NULL, &m8663_MI);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_2 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8687(L_2, L_1, &m8687_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1621_TI));
		t1621 * L_3 = (t1621 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1621_TI));
		m7933(L_3, L_2, &m7933_MI);
		__this->f3 = L_3;
		goto IL_0030;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		t2* L_4 = (__this->f2);
		m8664(__this, L_4, &m8664_MI);
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
extern "C" bool m8663 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_0 = ((t1552_SFs*)InitializedTypeInfo(&t1552_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" void m8664 (t1552 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m8664_ftn) (t1552 *, t2*);
	static m8664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8664_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::construct_compareinfo(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m8665 (t1552 * __this, MethodInfo* method)
{
	typedef void (*m8665_ftn) (t1552 *);
	static m8665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8665_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::free_internal_collator()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m8666 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	typedef int32_t (*m8666_ftn) (t1552 *, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t);
	static m8666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8666_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5, p6);
}
extern "C" void m8667 (t1552 * __this, t9 * p0, t2* p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m8667_ftn) (t1552 *, t9 *, t2*, int32_t);
	static m8667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8667_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" int32_t m8668 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	typedef int32_t (*m8668_ftn) (t1552 *, t2*, int32_t, int32_t, t2*, int32_t, bool);
	static m8668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8668_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m8669_MI;
extern "C" void m8669 (t1552 * __this, MethodInfo* method)
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
		m8665(__this, &m8665_MI);
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
extern "C" int32_t m8670 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	{
		t1621 * L_0 = (__this->f3);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		t2* L_4 = p3;
		int32_t L_5 = p4;
		int32_t L_6 = p5;
		int32_t L_7 = p6;
		int32_t L_8 = m7959(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m7959_MI);
		return L_8;
	}
}
extern "C" int32_t m8671 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_0 = m8663(NULL, &m8663_MI);
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
		int32_t L_8 = m8670(__this, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m8670_MI);
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
		int32_t L_16 = m8666(__this, L_9, L_10, L_11, L_12, L_13, L_14, L_15, &m8666_MI);
		G_B3_0 = L_16;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8672 (t1552 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t2*, t2*, int32_t >::Invoke(&m7013_MI, __this, L_0, L_1, 0);
		return L_2;
	}
}
extern "C" int32_t m7013 (t1552 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_2, (t2*) &_stringLiteral681, &m2949_MI);
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
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		t2* L_8 = p1;
		int32_t L_9 = m2763(L_8, &m2763_MI);
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
		int32_t L_12 = m2763(L_11, &m2763_MI);
		t2* L_13 = p1;
		t2* L_14 = p1;
		int32_t L_15 = m2763(L_14, &m2763_MI);
		int32_t L_16 = p2;
		int32_t L_17 = m8671(__this, L_10, 0, L_12, L_13, 0, L_15, L_16, &m8671_MI);
		return L_17;
	}
}
extern "C" int32_t m8673 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, int32_t p5, int32_t p6, MethodInfo* method)
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
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_2, (t2*) &_stringLiteral681, &m2949_MI);
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
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = p1;
		t2* L_9 = p0;
		int32_t L_10 = m2763(L_9, &m2763_MI);
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
		int32_t L_13 = m2763(L_12, &m2763_MI);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_14 = p4;
		t2* L_15 = p3;
		int32_t L_16 = m2763(L_15, &m2763_MI);
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
		t909 * L_22 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_22, (t2*) &_stringLiteral1460, &m5763_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0073:
	{
		int32_t L_23 = p1;
		t2* L_24 = p0;
		int32_t L_25 = m2763(L_24, &m2763_MI);
		if ((((int32_t)L_23) <= ((int32_t)L_25)))
		{
			goto IL_0087;
		}
	}
	{
		t909 * L_26 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_26, (t2*) &_stringLiteral1461, &m5763_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_0087:
	{
		int32_t L_27 = p4;
		t2* L_28 = p3;
		int32_t L_29 = m2763(L_28, &m2763_MI);
		if ((((int32_t)L_27) <= ((int32_t)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		t909 * L_30 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_30, (t2*) &_stringLiteral1462, &m5763_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009d:
	{
		int32_t L_31 = p2;
		t2* L_32 = p0;
		int32_t L_33 = m2763(L_32, &m2763_MI);
		int32_t L_34 = p1;
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)((int32_t)L_33-(int32_t)L_34)))))
		{
			goto IL_00b3;
		}
	}
	{
		t909 * L_35 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_35, (t2*) &_stringLiteral1463, &m5763_MI);
		il2cpp_codegen_raise_exception(L_35);
	}

IL_00b3:
	{
		int32_t L_36 = p5;
		t2* L_37 = p3;
		int32_t L_38 = m2763(L_37, &m2763_MI);
		int32_t L_39 = p4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_39)))))
		{
			goto IL_00cc;
		}
	}
	{
		t909 * L_40 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_40, (t2*) &_stringLiteral1464, &m5763_MI);
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
		int32_t L_48 = m8671(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, &m8671_MI);
		return L_48;
	}
}
extern MethodInfo m8674_MI;
extern "C" bool m8674 (t1552 * __this, t9 * p0, MethodInfo* method)
{
	t1552 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t1552 *)IsInst(L_0, InitializedTypeInfo(&t1552_TI)));
		t1552 * L_1 = V_0;
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
		t1552 * L_2 = V_0;
		int32_t L_3 = (L_2->f1);
		int32_t L_4 = (__this->f1);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m8675_MI;
extern "C" int32_t m8675 (t1552 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m8686(__this, &m8686_MI);
		return L_0;
	}
}
extern MethodInfo m8676_MI;
extern "C" t1623 * m8676 (t1552 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	t1623 * V_0 = {0};
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
		t570 * L_3 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_3, (t2*) &_stringLiteral1465, (t2*) &_stringLiteral681, &m5761_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_4 = m8663(NULL, &m8663_MI);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t1621 * L_5 = (__this->f3);
		t2* L_6 = p0;
		int32_t L_7 = p1;
		t1623 * L_8 = m7951(L_5, L_6, L_7, &m7951_MI);
		return L_8;
	}

IL_0039:
	{
		int32_t L_9 = (__this->f1);
		t2* L_10 = p0;
		int32_t L_11 = p1;
		t1623 * L_12 = (t1623 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1623_TI));
		m7985(L_12, L_9, L_10, L_11, &m7985_MI);
		V_0 = L_12;
		t1623 * L_13 = V_0;
		t2* L_14 = p0;
		int32_t L_15 = p1;
		m8667(__this, L_13, L_14, L_15, &m8667_MI);
		t1623 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m8677_MI;
extern "C" int32_t m8677 (t1552 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8680_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8678 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
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
		t1621 * L_1 = (__this->f3);
		t2* L_2 = p0;
		t2* L_3 = p3;
		int32_t L_4 = p1;
		int32_t L_5 = p2;
		int32_t L_6 = p4;
		int32_t L_7 = m7970(L_1, L_2, L_3, L_4, L_5, L_6, &m7970_MI);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0018:
	{
		t1621 * L_8 = (__this->f3);
		t2* L_9 = p0;
		t2* L_10 = p3;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		int32_t L_13 = p4;
		int32_t L_14 = m7975(L_8, L_9, L_10, L_11, L_12, L_13, &m7975_MI);
		G_B3_0 = L_14;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m8679 (t1552 * __this, t2* p0, int32_t p1, int32_t p2, t2* p3, int32_t p4, bool p5, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_0 = m8663(NULL, &m8663_MI);
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
		int32_t L_9 = m8678(__this, L_3, L_4, L_5, L_6, L_7, L_8, &m8678_MI);
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
		int32_t L_16 = m8668(__this, L_10, L_11, L_12, L_13, L_14, L_15, &m8668_MI);
		G_B5_0 = L_16;
	}

IL_0034:
	{
		return G_B5_0;
	}
}
extern "C" int32_t m8680 (t1552 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral607, &m339_MI);
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
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_5, (t2*) &_stringLiteral1113, &m5763_MI);
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
		int32_t L_8 = m2763(L_7, &m2763_MI);
		int32_t L_9 = p2;
		int32_t L_10 = p3;
		if ((((int32_t)((int32_t)((int32_t)L_8-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}

IL_003c:
	{
		t909 * L_11 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_11, (t2*) &_stringLiteral489, &m5763_MI);
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
		t570 * L_14 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_14, (t2*) &_stringLiteral681, &m2949_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005e:
	{
		t2* L_15 = p1;
		int32_t L_16 = m2763(L_15, &m2763_MI);
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
		int32_t L_24 = m8679(__this, L_19, L_20, L_21, L_22, L_23, 1, &m8679_MI);
		return L_24;
	}
}
extern MethodInfo m8681_MI;
extern "C" bool m8681 (t1552 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_4 = m8663(NULL, &m8663_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1621 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7964(L_5, L_6, L_7, L_8, &m7964_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2763(L_12, &m2763_MI);
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
		int32_t L_16 = m2763(L_15, &m2763_MI);
		t2* L_17 = p1;
		t2* L_18 = p1;
		int32_t L_19 = m2763(L_18, &m2763_MI);
		int32_t L_20 = p2;
		int32_t L_21 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8673_MI, __this, L_14, 0, L_16, L_17, 0, L_19, L_20);
		return ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8682_MI;
extern "C" bool m8682 (t1552 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral1467, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
		bool L_4 = m8663(NULL, &m8663_MI);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		t1621 * L_5 = (__this->f3);
		t2* L_6 = p0;
		t2* L_7 = p1;
		int32_t L_8 = p2;
		bool L_9 = m7967(L_5, L_6, L_7, L_8, &m7967_MI);
		return L_9;
	}

IL_0032:
	{
		t2* L_10 = p0;
		int32_t L_11 = m2763(L_10, &m2763_MI);
		t2* L_12 = p1;
		int32_t L_13 = m2763(L_12, &m2763_MI);
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
		int32_t L_16 = m2763(L_15, &m2763_MI);
		t2* L_17 = p1;
		int32_t L_18 = m2763(L_17, &m2763_MI);
		t2* L_19 = p1;
		int32_t L_20 = m2763(L_19, &m2763_MI);
		t2* L_21 = p1;
		t2* L_22 = p1;
		int32_t L_23 = m2763(L_22, &m2763_MI);
		int32_t L_24 = p2;
		int32_t L_25 = (int32_t)VirtFuncInvoker7< int32_t, t2*, int32_t, int32_t, t2*, int32_t, int32_t, int32_t >::Invoke(&m8673_MI, __this, L_14, ((int32_t)((int32_t)L_16-(int32_t)L_18)), L_20, L_21, 0, L_23, L_24);
		return ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m8683_MI;
extern "C" int32_t m8683 (t1552 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		int32_t L_4 = (int32_t)VirtFuncInvoker5< int32_t, t2*, t2*, int32_t, int32_t, int32_t >::Invoke(&m8684_MI, __this, L_0, L_1, L_2, L_3, 0);
		return L_4;
	}
}
extern "C" int32_t m8684 (t1552 * __this, t2* p0, t2* p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral607, &m339_MI);
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
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_5, (t2*) &_stringLiteral1113, &m5763_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_9, (t2*) &_stringLiteral489, &m5763_MI);
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
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, (t2*) &_stringLiteral681, &m2949_MI);
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
		int32_t L_15 = m2763(L_14, &m2763_MI);
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
		int32_t L_22 = m8679(__this, L_17, L_18, L_19, L_20, L_21, 0, &m8679_MI);
		return L_22;
	}
}
extern MethodInfo m8685_MI;
extern "C" t2* m8685 (t1552 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1468, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" int32_t m8686 (t1552 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1553MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1878.h"
#include "t1561.h"
#include "t1710.h"
extern TypeInfo t1878_TI;
extern TypeInfo t1561_TI;
extern TypeInfo t1710_TI;
#include "t1878MD.h"
#include "t1561MD.h"
#include "t1710MD.h"
extern Il2CppType t1561_0_0_0;
extern Il2CppType t1710_0_0_0;
extern MethodInfo m11083_MI;
extern MethodInfo m11094_MI;
extern MethodInfo m11095_MI;
extern MethodInfo m8709_MI;
extern MethodInfo m8719_MI;
extern MethodInfo m8704_MI;
extern MethodInfo m8776_MI;
extern MethodInfo m8717_MI;
extern MethodInfo m8721_MI;
extern MethodInfo m8716_MI;
extern MethodInfo m8750_MI;
extern MethodInfo m8688_MI;
extern MethodInfo m8689_MI;
extern MethodInfo m8718_MI;
extern MethodInfo m8711_MI;
extern MethodInfo m7415_MI;
extern MethodInfo m8710_MI;
extern MethodInfo m8691_MI;
extern MethodInfo m8712_MI;
extern MethodInfo m8693_MI;
extern MethodInfo m8703_MI;
extern MethodInfo m8705_MI;
extern MethodInfo m8706_MI;
extern MethodInfo m8713_MI;
extern MethodInfo m8714_MI;
extern MethodInfo m8715_MI;
extern MethodInfo m8787_MI;
extern MethodInfo m8748_MI;
extern MethodInfo m8808_MI;
extern MethodInfo m8727_MI;
extern MethodInfo m8810_MI;
extern MethodInfo m8690_MI;


extern "C" void m8687 (t907 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m8688(__this, L_0, 1, &m8688_MI);
		return;
	}
}
extern "C" void m8688 (t907 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = p1;
		m8689(__this, L_0, L_1, 0, &m8689_MI);
		return;
	}
}
extern "C" void m8689 (t907 * __this, int32_t p0, bool p1, bool p2, MethodInfo* method)
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
		t909 * L_1 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_1, (t2*) &_stringLiteral1103, (t2*) &_stringLiteral1469, &m4402_MI);
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
		m8718(__this, L_5, &m8718_MI);
		return;
	}

IL_003c:
	{
		int32_t L_6 = p0;
		bool L_7 = m8711(__this, L_6, &m8711_MI);
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
		t2* L_11 = m590(NULL, (t2*) &_stringLiteral1470, L_10, &m590_MI);
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_12, L_11, (t2*) &_stringLiteral1103, &m5761_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0060:
	{
		return;
	}
}
extern "C" void m8690 (t907 * __this, t2* p0, bool p1, bool p2, MethodInfo* method)
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
		int32_t L_5 = m2763(L_4, &m2763_MI);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = p2;
		m8718(__this, L_6, &m8718_MI);
		return;
	}

IL_0039:
	{
		t2* L_7 = p0;
		t2* L_8 = m7415(L_7, &m7415_MI);
		bool L_9 = m8710(__this, L_8, &m8710_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		t2* L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_11 = m399(NULL, (t2*) &_stringLiteral1471, L_10, (t2*) &_stringLiteral1472, &m399_MI);
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_12, L_11, (t2*) &_stringLiteral2, &m5761_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0062:
	{
		return;
	}
}
extern "C" void m8691 (t907 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f33 = 1;
		return;
	}
}
extern MethodInfo m8692_MI;
extern "C" void m8692 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f5 = L_0;
		((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f35 = (t2*) &_stringLiteral1473;
		t907 * L_1 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8689(L_1, ((int32_t)127), 0, 1, &m8689_MI);
		((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f4 = L_1;
		return;
	}
}
extern "C" t907 * m4400 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = ((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f4;
		return L_0;
	}
}
extern "C" t907 * m7011 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1878 * L_0 = m11083(NULL, &m11083_MI);
		t907 * L_1 = m11094(L_0, &m11094_MI);
		return L_1;
	}
}
extern MethodInfo m7015_MI;
extern "C" t907 * m7015 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1878 * L_0 = m11083(NULL, &m11083_MI);
		t907 * L_1 = m11095(L_0, &m11095_MI);
		return L_1;
	}
}
extern "C" t907 * m8693 (t9 * __this , MethodInfo* method)
{
	t907 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8691(L_0, &m8691_MI);
		V_0 = L_0;
		t907 * L_1 = V_0;
		bool L_2 = m8712(NULL, L_1, &m8712_MI);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_3 = m4400(NULL, &m4400_MI);
		V_0 = L_3;
	}

IL_0014:
	{
		t907 * L_4 = V_0;
		int32_t L_5 = (L_4->f8);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f6 = L_5;
		t907 * L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m8694_MI;
extern "C" t907 * m8694 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_0 = m8693(NULL, &m8693_MI);
		return L_0;
	}
}
extern "C" int32_t m8695 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" t2* m8696 (t907 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8697_MI;
extern "C" t907 * m8697 (t907 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f30);
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
		m8709(__this, &m8709_MI);
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
		return (t907 *)NULL;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_5 = m4400(NULL, &m4400_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_8 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8687(L_8, L_7, &m8687_MI);
		__this->f30 = L_8;
	}

IL_0061:
	{
		t907 * L_9 = (__this->f30);
		return L_9;
	}
}
extern "C" t1622 * m8698 (t907 * __this, MethodInfo* method)
{
	t907 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1622 * L_0 = (__this->f16);
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
		m8709(__this, &m8709_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t907 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1622 * L_3 = (__this->f16);
			if (L_3)
			{
				goto IL_003e;
			}
		}

IL_002a:
		{
			bool L_4 = (__this->f7);
			t1622 * L_5 = m8719(__this, L_4, &m8719_MI);
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
		t907 * L_6 = V_0;
		m1117(NULL, L_6, &m1117_MI);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0047:
	{
		t1622 * L_7 = (__this->f16);
		return L_7;
	}
}
extern "C" t2* m8699 (t907 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f33);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m8709(__this, &m8709_MI);
	}

IL_000e:
	{
		t2* L_1 = (__this->f23);
		return L_1;
	}
}
extern MethodInfo m8700_MI;
extern "C" bool m8700 (t907 * __this, t9 * p0, MethodInfo* method)
{
	t907 * V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t907 *)IsInst(L_0, InitializedTypeInfo(&t907_TI)));
		t907 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t907 * L_2 = V_0;
		int32_t L_3 = (L_2->f8);
		int32_t L_4 = (__this->f8);
		return ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0019:
	{
		return 0;
	}
}
extern MethodInfo m8701_MI;
extern "C" int32_t m8701 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8702_MI;
extern "C" t2* m8702 (t907 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t1552 * m7012 (t907 * __this, MethodInfo* method)
{
	t907 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1552 * L_0 = (__this->f26);
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
		m8709(__this, &m8709_MI);
	}

IL_0018:
	{
		V_0 = __this;
		t907 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			t1552 * L_3 = (__this->f26);
			if (L_3)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1552_TI));
			t1552 * L_4 = (t1552 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1552_TI));
			m8660(L_4, __this, &m8660_MI);
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
		t907 * L_5 = V_0;
		m1117(NULL, L_5, &m1117_MI);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0041:
	{
		t1552 * L_6 = (__this->f26);
		return L_6;
	}
}
extern "C" bool m8703 (t907 * __this, MethodInfo* method)
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
		m8709(__this, &m8709_MI);
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
extern "C" void m8704 (t907 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8703_MI, __this);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		t2* L_1 = (__this->f17);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m399(NULL, (t2*) &_stringLiteral1474, L_1, (t2*) &_stringLiteral1475, &m399_MI);
		t169 * L_3 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_3, L_2, &m5776_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		return;
	}
}
extern "C" t1561 * m8705 (t907 * __this, MethodInfo* method)
{
	t907 * V_0 = {0};
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
		m8709(__this, &m8709_MI);
	}

IL_000e:
	{
		m8704(__this, &m8704_MI);
		t1561 * L_1 = (__this->f14);
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		V_0 = __this;
		t907 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1561 * L_3 = (__this->f14);
			if (L_3)
			{
				goto IL_0049;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
			t1561 * L_5 = (t1561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1561_TI));
			m8776(L_5, L_4, &m8776_MI);
			__this->f14 = L_5;
			m8717(__this, &m8717_MI);
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
		t907 * L_6 = V_0;
		m1117(NULL, L_6, &m1117_MI);
		IL2CPP_END_FINALLY(75)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0052:
	{
		t1561 * L_7 = (__this->f14);
		return L_7;
	}
}
extern "C" t1710 * m8706 (t907 * __this, MethodInfo* method)
{
	t907 * V_0 = {0};
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
		m8709(__this, &m8709_MI);
	}

IL_000e:
	{
		m8704(__this, &m8704_MI);
		t1710 * L_1 = (__this->f15);
		if (L_1)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = __this;
		t907 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			t1710 * L_3 = (__this->f15);
			if (L_3)
			{
				goto IL_0066;
			}
		}

IL_0030:
		{
			bool L_4 = (__this->f7);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
			t1710 * L_5 = (t1710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1710_TI));
			m8721(L_5, L_4, &m8721_MI);
			__this->f15 = L_5;
			m8716(__this, &m8716_MI);
			t1711* L_6 = (__this->f29);
			if (!L_6)
			{
				goto IL_0066;
			}
		}

IL_0051:
		{
			t1710 * L_7 = (__this->f15);
			t1711* L_8 = (__this->f29);
			int32_t L_9 = 0;
			m8750(L_7, (*(t1705 **)(t1705 **)SZArrayLdElema(L_8, L_9)), &m8750_MI);
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
		t907 * L_10 = V_0;
		m1117(NULL, L_10, &m1117_MI);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006f:
	{
		t1710 * L_11 = (__this->f15);
		return L_11;
	}
}
extern MethodInfo m8707_MI;
extern "C" bool m8707 (t907 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8708_MI;
extern "C" t9 * m8708 (t907 * __this, t126 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		V_0 = NULL;
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1561_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_0) == ((t9*)(t126 *)L_1))))
		{
			goto IL_0018;
		}
	}
	{
		t1561 * L_2 = (t1561 *)VirtFuncInvoker0< t1561 * >::Invoke(&m8705_MI, __this);
		V_0 = L_2;
		goto IL_002c;
	}

IL_0018:
	{
		t126 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(&t1710_0_0_0), &m329_MI);
		if ((!(((t9*)(t126 *)L_3) == ((t9*)(t126 *)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		t1710 * L_5 = (t1710 *)VirtFuncInvoker0< t1710 * >::Invoke(&m8706_MI, __this);
		V_0 = L_5;
	}

IL_002c:
	{
		t9 * L_6 = V_0;
		return L_6;
	}
}
extern "C" void m8709 (t907 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		m8713(__this, L_0, &m8713_MI);
		__this->f33 = 1;
		return;
	}
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" bool m8710 (t907 * __this, t2* p0, MethodInfo* method)
{
	static bool m8710_init;
	if (!m8710_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m8710_init = true;
	}
	t2* V_0 = {0};
	t727 * V_1 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t727 * L_2 = ((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f38;
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 2, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral1476, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral1477, 1);
		t727 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f38 = L_6;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t727 * L_7 = ((t907_SFs*)InitializedTypeInfo(&t907_TI)->static_fields)->f38;
		t2* L_8 = V_0;
		bool L_9 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_7, L_8, (&V_2));
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
		p0 = (t2*) &_stringLiteral1478;
		goto IL_005f;
	}

IL_0054:
	{
		p0 = (t2*) &_stringLiteral1479;
		goto IL_005f;
	}

IL_005f:
	{
		t2* L_12 = p0;
		bool L_13 = m8714(__this, L_12, &m8714_MI);
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
extern "C" bool m8711 (t907 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m8713(__this, L_0, &m8713_MI);
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
extern "C" bool m8712 (t9 * __this , t907 * p0, MethodInfo* method)
{
	{
		t907 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		bool L_1 = m8715(NULL, L_0, &m8715_MI);
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
extern "C" bool m8713 (t907 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m8713_ftn) (t907 *, int32_t);
	static m8713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8713_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8714 (t907 * __this, t2* p0, MethodInfo* method)
{
	typedef bool (*m8714_ftn) (t907 *, t2*);
	static m8714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8714_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" bool m8715 (t9 * __this , t907 * p0, MethodInfo* method)
{
	typedef bool (*m8715_ftn) (t907 *);
	static m8715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8715_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m8716 (t907 * __this, MethodInfo* method)
{
	typedef void (*m8716_ftn) (t907 *);
	static m8716_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8716_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_datetime_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8717 (t907 * __this, MethodInfo* method)
{
	typedef void (*m8717_ftn) (t907 *);
	static m8717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m8717_ftn)il2cpp_codegen_resolve_icall ("System.Globalization.CultureInfo::construct_number_format()");
	_il2cpp_icall_func(__this);
}
extern "C" void m8718 (t907 * __this, bool p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		__this->f8 = ((int32_t)127);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
		t1561 * L_0 = m8787(NULL, &m8787_MI);
		__this->f14 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = m8748(NULL, &m8748_MI);
		__this->f15 = L_1;
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		t1561 * L_3 = (__this->f14);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8808_MI, L_3);
		__this->f14 = ((t1561 *)Castclass(L_4, InitializedTypeInfo(&t1561_TI)));
		t1710 * L_5 = (__this->f15);
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8727_MI, L_5);
		__this->f15 = ((t1710 *)Castclass(L_6, InitializedTypeInfo(&t1710_TI)));
	}

IL_0059:
	{
		bool L_7 = p0;
		t1622 * L_8 = m8719(__this, L_7, &m8719_MI);
		__this->f16 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f17 = L_9;
		t2* L_10 = (t2*) &_stringLiteral1480;
		V_0 = L_10;
		__this->f20 = L_10;
		t2* L_11 = V_0;
		t2* L_12 = L_11;
		V_0 = L_12;
		__this->f19 = L_12;
		t2* L_13 = V_0;
		__this->f18 = L_13;
		__this->f21 = (t2*) &_stringLiteral1481;
		__this->f22 = (t2*) &_stringLiteral1482;
		__this->f23 = (t2*) &_stringLiteral1483;
		__this->f24 = (t2*) &_stringLiteral1481;
		return;
	}
}
extern "C" t1622 * m8719 (t907 * __this, bool p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f8);
		void* L_1 = (__this->f28);
		bool L_2 = p0;
		t1622 * L_3 = (t1622 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1622_TI));
		m8810(L_3, __this, L_0, (void*)(void*)L_1, L_2, &m8810_MI);
		return L_3;
	}
}
extern MethodInfo m8720_MI;
extern "C" t907 * m8720 (t9 * __this , t2* p0, bool p1, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m2763(L_0, &m2763_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_8 = (t907 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t907_TI));
		m8690(L_8, L_5, L_6, L_7, &m8690_MI);
		return L_8;
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

#include "t1714.h"
extern TypeInfo t1714_TI;
#include "t1714MD.h"
#include "t125MD.h"
extern Il2CppType t2_0_0_0;
extern MethodInfo m8722_MI;
extern MethodInfo m8726_MI;
extern MethodInfo m8760_MI;
extern MethodInfo m8725_MI;
extern MethodInfo m8767_MI;
extern MethodInfo m12001_MI;
extern MethodInfo m8747_MI;
extern MethodInfo m7100_MI;
extern MethodInfo m2550_MI;
extern MethodInfo m4342_MI;
extern MethodInfo m8756_MI;
extern MethodInfo m8757_MI;
extern MethodInfo m8740_MI;
extern MethodInfo m8741_MI;
extern MethodInfo m8743_MI;
extern MethodInfo m8742_MI;
extern MethodInfo m8761_MI;
extern MethodInfo m8744_MI;
extern MethodInfo m8745_MI;
extern MethodInfo m8751_MI;
extern MethodInfo m8753_MI;
extern MethodInfo m8754_MI;


extern "C" void m8721 (t1710 * __this, bool p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		bool L_0 = p0;
		__this->f10 = L_0;
		__this->f11 = (t2*) &_stringLiteral1485;
		__this->f12 = (t2*) &_stringLiteral1486;
		__this->f13 = (t2*) &_stringLiteral746;
		__this->f14 = (t2*) &_stringLiteral339;
		__this->f15 = (t2*) &_stringLiteral1487;
		__this->f16 = (t2*) &_stringLiteral1488;
		__this->f17 = (t2*) &_stringLiteral1489;
		__this->f18 = (t2*) &_stringLiteral1490;
		__this->f19 = (t2*) &_stringLiteral1491;
		__this->f20 = (t2*) &_stringLiteral1492;
		__this->f21 = (t2*) &_stringLiteral1493;
		__this->f22 = (t2*) &_stringLiteral1494;
		__this->f23 = (t2*) &_stringLiteral1495;
		__this->f24 = (t2*) &_stringLiteral1496;
		__this->f25 = 0;
		t1714 * L_1 = (t1714 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1714_TI));
		m8767(L_1, &m8767_MI);
		__this->f26 = L_1;
		__this->f27 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t221* L_2 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f4;
		__this->f28 = L_2;
		t221* L_3 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f5;
		__this->f29 = L_3;
		t221* L_4 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f6;
		__this->f31 = L_4;
		t221* L_5 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f7;
		__this->f30 = L_5;
		t221* L_6 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f6;
		__this->f53 = L_6;
		t221* L_7 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f7;
		__this->f52 = L_7;
		t221* L_8 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f8;
		__this->f38 = L_8;
		return;
	}
}
extern "C" void m8722 (t1710 * __this, MethodInfo* method)
{
	{
		m8721(__this, 0, &m8721_MI);
		return;
	}
}
extern MethodInfo m8723_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8723 (t9 * __this , MethodInfo* method)
{
	static bool m8723_init;
	if (!m8723_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8723_init = true;
	}
	{
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f1 = (t2*) &_stringLiteral1473;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f2 = (t2*) &_stringLiteral1497;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f3 = (t2*) &_stringLiteral1498;
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1499);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1499;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1500);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral1500;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1501);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1501;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1502);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1502;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1503);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1503;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1504);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1504;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1505);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1505;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f4 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1506);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1506;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1507);
		*((t2**)(t2**)SZArrayLdElema(L_8, 1)) = (t2*)(t2*) &_stringLiteral1507;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1508);
		*((t2**)(t2**)SZArrayLdElema(L_9, 2)) = (t2*)(t2*) &_stringLiteral1508;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral1509);
		*((t2**)(t2**)SZArrayLdElema(L_10, 3)) = (t2*)(t2*) &_stringLiteral1509;
		t221* L_11 = L_10;
		ArrayElementTypeCheck (L_11, (t2*) &_stringLiteral1510);
		*((t2**)(t2**)SZArrayLdElema(L_11, 4)) = (t2*)(t2*) &_stringLiteral1510;
		t221* L_12 = L_11;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral1511);
		*((t2**)(t2**)SZArrayLdElema(L_12, 5)) = (t2*)(t2*) &_stringLiteral1511;
		t221* L_13 = L_12;
		ArrayElementTypeCheck (L_13, (t2*) &_stringLiteral1512);
		*((t2**)(t2**)SZArrayLdElema(L_13, 6)) = (t2*)(t2*) &_stringLiteral1512;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f5 = L_13;
		t221* L_14 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_14, (t2*) &_stringLiteral1513);
		*((t2**)(t2**)SZArrayLdElema(L_14, 0)) = (t2*)(t2*) &_stringLiteral1513;
		t221* L_15 = L_14;
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral1514);
		*((t2**)(t2**)SZArrayLdElema(L_15, 1)) = (t2*)(t2*) &_stringLiteral1514;
		t221* L_16 = L_15;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral1515);
		*((t2**)(t2**)SZArrayLdElema(L_16, 2)) = (t2*)(t2*) &_stringLiteral1515;
		t221* L_17 = L_16;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral1516);
		*((t2**)(t2**)SZArrayLdElema(L_17, 3)) = (t2*)(t2*) &_stringLiteral1516;
		t221* L_18 = L_17;
		ArrayElementTypeCheck (L_18, (t2*) &_stringLiteral1517);
		*((t2**)(t2**)SZArrayLdElema(L_18, 4)) = (t2*)(t2*) &_stringLiteral1517;
		t221* L_19 = L_18;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral1518);
		*((t2**)(t2**)SZArrayLdElema(L_19, 5)) = (t2*)(t2*) &_stringLiteral1518;
		t221* L_20 = L_19;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral1519);
		*((t2**)(t2**)SZArrayLdElema(L_20, 6)) = (t2*)(t2*) &_stringLiteral1519;
		t221* L_21 = L_20;
		ArrayElementTypeCheck (L_21, (t2*) &_stringLiteral1520);
		*((t2**)(t2**)SZArrayLdElema(L_21, 7)) = (t2*)(t2*) &_stringLiteral1520;
		t221* L_22 = L_21;
		ArrayElementTypeCheck (L_22, (t2*) &_stringLiteral1521);
		*((t2**)(t2**)SZArrayLdElema(L_22, 8)) = (t2*)(t2*) &_stringLiteral1521;
		t221* L_23 = L_22;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral1522);
		*((t2**)(t2**)SZArrayLdElema(L_23, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1522;
		t221* L_24 = L_23;
		ArrayElementTypeCheck (L_24, (t2*) &_stringLiteral1523);
		*((t2**)(t2**)SZArrayLdElema(L_24, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1523;
		t221* L_25 = L_24;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral1524);
		*((t2**)(t2**)SZArrayLdElema(L_25, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1524;
		t221* L_26 = L_25;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_27 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_26, L_27);
		*((t2**)(t2**)SZArrayLdElema(L_26, ((int32_t)12))) = (t2*)L_27;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f6 = L_26;
		t221* L_28 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)13)));
		ArrayElementTypeCheck (L_28, (t2*) &_stringLiteral1525);
		*((t2**)(t2**)SZArrayLdElema(L_28, 0)) = (t2*)(t2*) &_stringLiteral1525;
		t221* L_29 = L_28;
		ArrayElementTypeCheck (L_29, (t2*) &_stringLiteral1526);
		*((t2**)(t2**)SZArrayLdElema(L_29, 1)) = (t2*)(t2*) &_stringLiteral1526;
		t221* L_30 = L_29;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral1527);
		*((t2**)(t2**)SZArrayLdElema(L_30, 2)) = (t2*)(t2*) &_stringLiteral1527;
		t221* L_31 = L_30;
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral1528);
		*((t2**)(t2**)SZArrayLdElema(L_31, 3)) = (t2*)(t2*) &_stringLiteral1528;
		t221* L_32 = L_31;
		ArrayElementTypeCheck (L_32, (t2*) &_stringLiteral1517);
		*((t2**)(t2**)SZArrayLdElema(L_32, 4)) = (t2*)(t2*) &_stringLiteral1517;
		t221* L_33 = L_32;
		ArrayElementTypeCheck (L_33, (t2*) &_stringLiteral1529);
		*((t2**)(t2**)SZArrayLdElema(L_33, 5)) = (t2*)(t2*) &_stringLiteral1529;
		t221* L_34 = L_33;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral1530);
		*((t2**)(t2**)SZArrayLdElema(L_34, 6)) = (t2*)(t2*) &_stringLiteral1530;
		t221* L_35 = L_34;
		ArrayElementTypeCheck (L_35, (t2*) &_stringLiteral1531);
		*((t2**)(t2**)SZArrayLdElema(L_35, 7)) = (t2*)(t2*) &_stringLiteral1531;
		t221* L_36 = L_35;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral1532);
		*((t2**)(t2**)SZArrayLdElema(L_36, 8)) = (t2*)(t2*) &_stringLiteral1532;
		t221* L_37 = L_36;
		ArrayElementTypeCheck (L_37, (t2*) &_stringLiteral1533);
		*((t2**)(t2**)SZArrayLdElema(L_37, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1533;
		t221* L_38 = L_37;
		ArrayElementTypeCheck (L_38, (t2*) &_stringLiteral1534);
		*((t2**)(t2**)SZArrayLdElema(L_38, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral1534;
		t221* L_39 = L_38;
		ArrayElementTypeCheck (L_39, (t2*) &_stringLiteral1535);
		*((t2**)(t2**)SZArrayLdElema(L_39, ((int32_t)11))) = (t2*)(t2*) &_stringLiteral1535;
		t221* L_40 = L_39;
		t2* L_41 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		ArrayElementTypeCheck (L_40, L_41);
		*((t2**)(t2**)SZArrayLdElema(L_40, ((int32_t)12))) = (t2*)L_41;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f7 = L_40;
		t221* L_42 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_42, (t2*) &_stringLiteral1536);
		*((t2**)(t2**)SZArrayLdElema(L_42, 0)) = (t2*)(t2*) &_stringLiteral1536;
		t221* L_43 = L_42;
		ArrayElementTypeCheck (L_43, (t2*) &_stringLiteral1537);
		*((t2**)(t2**)SZArrayLdElema(L_43, 1)) = (t2*)(t2*) &_stringLiteral1537;
		t221* L_44 = L_43;
		ArrayElementTypeCheck (L_44, (t2*) &_stringLiteral1538);
		*((t2**)(t2**)SZArrayLdElema(L_44, 2)) = (t2*)(t2*) &_stringLiteral1538;
		t221* L_45 = L_44;
		ArrayElementTypeCheck (L_45, (t2*) &_stringLiteral1539);
		*((t2**)(t2**)SZArrayLdElema(L_45, 3)) = (t2*)(t2*) &_stringLiteral1539;
		t221* L_46 = L_45;
		ArrayElementTypeCheck (L_46, (t2*) &_stringLiteral1540);
		*((t2**)(t2**)SZArrayLdElema(L_46, 4)) = (t2*)(t2*) &_stringLiteral1540;
		t221* L_47 = L_46;
		ArrayElementTypeCheck (L_47, (t2*) &_stringLiteral1541);
		*((t2**)(t2**)SZArrayLdElema(L_47, 5)) = (t2*)(t2*) &_stringLiteral1541;
		t221* L_48 = L_47;
		ArrayElementTypeCheck (L_48, (t2*) &_stringLiteral1542);
		*((t2**)(t2**)SZArrayLdElema(L_48, 6)) = (t2*)(t2*) &_stringLiteral1542;
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f8 = L_48;
		return;
	}
}
extern MethodInfo m8724_MI;
extern "C" t1710 * m8724 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1710 * V_0 = {0};
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
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1710_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m12001_MI, L_1, L_2);
		V_0 = ((t1710 *)Castclass(L_3, InitializedTypeInfo(&t1710_TI)));
		t1710 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1710 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_6 = m8747(NULL, &m8747_MI);
		return L_6;
	}
}
extern "C" bool m8725 (t1710 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" t1710 * m8726 (t9 * __this , t1710 * p0, MethodInfo* method)
{
	t1710 * V_0 = {0};
	{
		t1710 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8727_MI, L_0);
		V_0 = ((t1710 *)Castclass(L_1, InitializedTypeInfo(&t1710_TI)));
		t1710 * L_2 = V_0;
		L_2->f10 = 1;
		t1710 * L_3 = V_0;
		return L_3;
	}
}
extern "C" t9 * m8727 (t1710 * __this, MethodInfo* method)
{
	t1710 * V_0 = {0};
	{
		t9 * L_0 = m7100(__this, &m7100_MI);
		V_0 = ((t1710 *)Castclass(L_0, InitializedTypeInfo(&t1710_TI)));
		t1710 * L_1 = V_0;
		L_1->f10 = 0;
		t1710 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8728_MI;
extern "C" t9 * m8728 (t1710 * __this, t126 * p0, MethodInfo* method)
{
	t1710 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		t126 * L_1 = m2550(__this, &m2550_MI);
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
		G_B3_0 = ((t1710 *)(NULL));
	}

IL_000d:
	{
		return G_B3_0;
	}
}
extern MethodInfo m8729_MI;
extern "C" t2* m8729 (t1710 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_2, &m5940_MI);
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
extern MethodInfo m8730_MI;
extern "C" t2* m8730 (t1710 * __this, int32_t p0, MethodInfo* method)
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
		t1705 * L_2 = (__this->f26);
		t221* L_3 = m8643(L_2, &m8643_MI);
		if ((((int32_t)L_1) <= ((int32_t)(((int32_t)(((t121 *)L_3)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0014:
	{
		t2* L_4 = m4342((&p0), &m4342_MI);
		t909 * L_5 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_5, (t2*) &_stringLiteral1543, L_4, &m4402_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		t1705 * L_6 = (__this->f26);
		t221* L_7 = m8643(L_6, &m8643_MI);
		int32_t L_8 = p0;
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		return (*(t2**)(t2**)SZArrayLdElema(L_7, L_9));
	}
}
extern MethodInfo m8731_MI;
extern "C" t2* m8731 (t1710 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_2, &m5940_MI);
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
extern MethodInfo m8732_MI;
extern "C" t221* m8732 (t1710 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8733_MI;
extern "C" t221* m8733 (t1710 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f31);
		return L_0;
	}
}
extern MethodInfo m8734_MI;
extern "C" t221* m8734 (t1710 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8735_MI;
extern "C" t221* m8735 (t1710 * __this, MethodInfo* method)
{
	{
		t221* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8736_MI;
extern "C" t2* m8736 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8737_MI;
extern "C" t2* m8737 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m8738_MI;
extern "C" t2* m8738 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8739_MI;
extern "C" t2* m8739 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern "C" t2* m8740 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f16);
		return L_0;
	}
}
extern "C" t2* m8741 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern "C" t2* m8742 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern "C" t2* m8743 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern "C" t2* m8744 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f19);
		return L_0;
	}
}
extern "C" t2* m8745 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m8746_MI;
extern "C" t2* m8746 (t1710 * __this, MethodInfo* method)
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
extern "C" t1710 * m8747 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1878 * L_0 = m11083(NULL, &m11083_MI);
		t907 * L_1 = m11094(L_0, &m11094_MI);
		t1710 * L_2 = (t1710 *)VirtFuncInvoker0< t1710 * >::Invoke(&m8706_MI, L_1);
		return L_2;
	}
}
extern "C" t1710 * m8748 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_0 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f9;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_1 = (t1710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1710_TI));
		m8722(L_1, &m8722_MI);
		t1710 * L_2 = m8726(NULL, L_1, &m8726_MI);
		((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f9 = L_2;
		t1710 * L_3 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f9;
		m8760(L_3, &m8760_MI);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t1710 * L_4 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f9;
		return L_4;
	}
}
extern MethodInfo m8749_MI;
extern "C" t1705 * m8749 (t1710 * __this, MethodInfo* method)
{
	{
		t1705 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m8750 (t1710 * __this, t1705 * p0, MethodInfo* method)
{
	{
		bool L_0 = m8725(__this, &m8725_MI);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1710_TI));
		t2* L_1 = ((t1710_SFs*)InitializedTypeInfo(&t1710_TI)->static_fields)->f1;
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_2, L_1, &m5755_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		t1705 * L_3 = p0;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_4 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11185(L_4, &m11185_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001c:
	{
		t1705 * L_5 = p0;
		__this->f26 = L_5;
		return;
	}
}
extern "C" t2* m8751 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8752_MI;
extern "C" t2* m8752 (t1710 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral1484;
	}
}
extern "C" t2* m8753 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern "C" t2* m8754 (t1710 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8755_MI;
extern "C" t221* m8755 (t1710 * __this, MethodInfo* method)
{
	{
		m8756(__this, &m8756_MI);
		t221* L_0 = (__this->f57);
		return (t221*)L_0;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" void m8756 (t1710 * __this, MethodInfo* method)
{
	static bool m8756_init;
	if (!m8756_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8756_init = true;
	}
	t1176 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		V_0 = L_1;
		t1176 * L_2 = V_0;
		t221* L_3 = m8757(__this, ((int32_t)100), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_2, (t9 *)(t9 *)L_3);
		t1176 * L_4 = V_0;
		t221* L_5 = m8757(__this, ((int32_t)68), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_4, (t9 *)(t9 *)L_5);
		t1176 * L_6 = V_0;
		t221* L_7 = m8757(__this, ((int32_t)103), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_6, (t9 *)(t9 *)L_7);
		t1176 * L_8 = V_0;
		t221* L_9 = m8757(__this, ((int32_t)71), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_8, (t9 *)(t9 *)L_9);
		t1176 * L_10 = V_0;
		t221* L_11 = m8757(__this, ((int32_t)102), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_10, (t9 *)(t9 *)L_11);
		t1176 * L_12 = V_0;
		t221* L_13 = m8757(__this, ((int32_t)70), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_12, (t9 *)(t9 *)L_13);
		t1176 * L_14 = V_0;
		t221* L_15 = m8757(__this, ((int32_t)109), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_14, (t9 *)(t9 *)L_15);
		t1176 * L_16 = V_0;
		t221* L_17 = m8757(__this, ((int32_t)77), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_16, (t9 *)(t9 *)L_17);
		t1176 * L_18 = V_0;
		t221* L_19 = m8757(__this, ((int32_t)114), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_18, (t9 *)(t9 *)L_19);
		t1176 * L_20 = V_0;
		t221* L_21 = m8757(__this, ((int32_t)82), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_20, (t9 *)(t9 *)L_21);
		t1176 * L_22 = V_0;
		t221* L_23 = m8757(__this, ((int32_t)115), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_22, (t9 *)(t9 *)L_23);
		t1176 * L_24 = V_0;
		t221* L_25 = m8757(__this, ((int32_t)116), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_24, (t9 *)(t9 *)L_25);
		t1176 * L_26 = V_0;
		t221* L_27 = m8757(__this, ((int32_t)84), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_26, (t9 *)(t9 *)L_27);
		t1176 * L_28 = V_0;
		t221* L_29 = m8757(__this, ((int32_t)117), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_28, (t9 *)(t9 *)L_29);
		t1176 * L_30 = V_0;
		t221* L_31 = m8757(__this, ((int32_t)85), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_30, (t9 *)(t9 *)L_31);
		t1176 * L_32 = V_0;
		t221* L_33 = m8757(__this, ((int32_t)121), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_32, (t9 *)(t9 *)L_33);
		t1176 * L_34 = V_0;
		t221* L_35 = m8757(__this, ((int32_t)89), &m8757_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_34, (t9 *)(t9 *)L_35);
		t1176 * L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_37 = m329(NULL, LoadTypeToken(&t2_0_0_0), &m329_MI);
		t121 * L_38 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_36, L_37);
		__this->f57 = (t221*)((t221*)Castclass(L_38, t221_TI_var));
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8757 (t1710 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8757_init;
	if (!m8757_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8757_init = true;
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
		t2* L_11 = m8740(__this, &m8740_MI);
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
		t2* L_16 = m8741(__this, &m8741_MI);
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
		t2* L_21 = m8743(__this, &m8743_MI);
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
		t2* L_26 = m8742(__this, &m8742_MI);
		ArrayElementTypeCheck (L_25, L_26);
		*((t2**)(t2**)SZArrayLdElema(L_25, 0)) = (t2*)L_26;
		return L_25;
	}

IL_0143:
	{
		t221* L_27 = (__this->f32);
		t221* L_28 = (__this->f35);
		t221* L_29 = m8761(__this, L_27, L_28, &m8761_MI);
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
		t2* L_34 = m8741(__this, &m8741_MI);
		t2* L_35 = m8743(__this, &m8743_MI);
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
		t221* L_39 = m8761(__this, L_37, L_38, &m8761_MI);
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
		t2* L_44 = m8741(__this, &m8741_MI);
		t2* L_45 = m8742(__this, &m8742_MI);
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
		t221* L_49 = m8761(__this, L_47, L_48, &m8761_MI);
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
		t2* L_54 = m8740(__this, &m8740_MI);
		t2* L_55 = m8743(__this, &m8743_MI);
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
		t221* L_59 = m8761(__this, L_57, L_58, &m8761_MI);
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
		t2* L_64 = m8740(__this, &m8740_MI);
		t2* L_65 = m8742(__this, &m8742_MI);
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
		t2* L_71 = m8744(__this, &m8744_MI);
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
		t2* L_76 = m8745(__this, &m8745_MI);
		ArrayElementTypeCheck (L_75, L_76);
		*((t2**)(t2**)SZArrayLdElema(L_75, 0)) = (t2*)L_76;
		return L_75;
	}

IL_028f:
	{
		t221* L_77 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_78 = m8751(__this, &m8751_MI);
		ArrayElementTypeCheck (L_77, L_78);
		*((t2**)(t2**)SZArrayLdElema(L_77, 0)) = (t2*)L_78;
		return L_77;
	}

IL_029f:
	{
		t221* L_79 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_80 = m8753(__this, &m8753_MI);
		ArrayElementTypeCheck (L_79, L_80);
		*((t2**)(t2**)SZArrayLdElema(L_79, 0)) = (t2*)L_80;
		return L_79;
	}

IL_02af:
	{
		t221* L_81 = ((t221*)SZArrayNew(t221_TI_var, 1));
		t2* L_82 = m8754(__this, &m8754_MI);
		ArrayElementTypeCheck (L_81, L_82);
		*((t2**)(t2**)SZArrayLdElema(L_81, 0)) = (t2*)L_82;
		return L_81;
	}

IL_02bf:
	{
		t570 * L_83 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_83, (t2*) &_stringLiteral1544, &m2949_MI);
		il2cpp_codegen_raise_exception(L_83);
	}
}
extern MethodInfo m8758_MI;
extern "C" t2* m8758 (t1710 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_3, &m5940_MI);
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
extern MethodInfo m8759_MI;
extern "C" t2* m8759 (t1710 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_3 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5940(L_3, &m5940_MI);
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
extern "C" void m8760 (t1710 * __this, MethodInfo* method)
{
	static bool m8760_init;
	if (!m8760_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8760_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral1487);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral1487;
		__this->f32 = L_0;
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1488);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1488;
		__this->f33 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1490);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1490;
		__this->f35 = L_2;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 4));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1489);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral1489;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1545);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral1545;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1546);
		*((t2**)(t2**)SZArrayLdElema(L_5, 2)) = (t2*)(t2*) &_stringLiteral1546;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1547);
		*((t2**)(t2**)SZArrayLdElema(L_6, 3)) = (t2*)(t2*) &_stringLiteral1547;
		__this->f34 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1491);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral1491;
		__this->f36 = L_7;
		t221* L_8 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1492);
		*((t2**)(t2**)SZArrayLdElema(L_8, 0)) = (t2*)(t2*) &_stringLiteral1492;
		__this->f37 = L_8;
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8761 (t1710 * __this, t221* p0, t221* p1, MethodInfo* method)
{
	static bool m8761_init;
	if (!m8761_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8761_init = true;
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
extern TypeInfo t1531_TI;
#include "t1531MD.h"



#include "t1713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1713_TI;
#include "t1713MD.h"

#include "t310.h"


extern MethodInfo m8762_MI;
extern "C" void m8762 (t1713 * __this, t272  p0, t272  p1, t310  p2, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t272  L_0 = p0;
		__this->f0 = L_0;
		t272  L_1 = p1;
		__this->f1 = L_1;
		t310  L_2 = p2;
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m8763_MI;
extern "C" t272  m8763 (t1713 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m8764_MI;
extern "C" t272  m8764 (t1713 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m8765_MI;
extern "C" t310  m8765 (t1713 * __this, MethodInfo* method)
{
	{
		t310  L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1715.h"
extern TypeInfo t1715_TI;
extern MethodInfo m8769_MI;
extern MethodInfo m8766_MI;


extern TypeInfo* t221_TI_var;
extern "C" void m8766 (t1714 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8766_init;
	if (!m8766_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8766_init = true;
	}
	{
		m8641(__this, &m8641_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m8769_MI, __this, L_0);
		t221* L_1 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral1548);
		*((t2**)(t2**)SZArrayLdElema(L_1, 0)) = (t2*)(t2*) &_stringLiteral1548;
		__this->f2 = L_1;
		t221* L_2 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1549);
		*((t2**)(t2**)SZArrayLdElema(L_2, 0)) = (t2*)(t2*) &_stringLiteral1549;
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
extern "C" void m8767 (t1714 * __this, MethodInfo* method)
{
	{
		m8766(__this, 1, &m8766_MI);
		return;
	}
}
extern MethodInfo m8768_MI;
extern TypeInfo* t1101_TI_var;
extern "C" t1101* m8768 (t1714 * __this, MethodInfo* method)
{
	static bool m8768_init;
	if (!m8768_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8768_init = true;
	}
	{
		t1101* L_0 = ((t1101*)SZArrayNew(t1101_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 0)) = (int32_t)1;
		return L_0;
	}
}
extern "C" void m8769 (t1714 * __this, int32_t p0, MethodInfo* method)
{
	{
		m8642(__this, &m8642_MI);
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m8770_MI;
extern "C" int32_t m8770 (t1714 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8656(NULL, L_0, &m8656_MI);
		return L_1;
	}
}
extern MethodInfo m8771_MI;
extern "C" int32_t m8771 (t1714 * __this, t272  p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t272  L_0 = p0;
		int32_t L_1 = m8647(NULL, L_0, &m8647_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = m8648(NULL, L_2, &m8648_MI);
		return L_3;
	}
}
extern MethodInfo m8772_MI;
extern "C" int32_t m8772 (t1714 * __this, t272  p0, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m8773_MI;
extern "C" int32_t m8773 (t1714 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8657(NULL, L_0, &m8657_MI);
		return L_1;
	}
}
extern MethodInfo m8774_MI;
extern "C" int32_t m8774 (t1714 * __this, t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		int32_t L_1 = m8658(NULL, L_0, &m8658_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1715MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8777_MI;
extern MethodInfo m8796_MI;
extern MethodInfo m8775_MI;
extern MethodInfo m8786_MI;


extern TypeInfo* t1101_TI_var;
extern "C" void m8775 (t1561 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8775_init;
	if (!m8775_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m8775_init = true;
	}
	int32_t V_0 = 0;
	{
		__this->f4 = (t2*) &_stringLiteral732;
		__this->f5 = (t2*) &_stringLiteral691;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
		t221* L_0 = ((t1561_SFs*)InitializedTypeInfo(&t1561_TI)->static_fields)->f38;
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
		__this->f8 = (t2*) &_stringLiteral338;
		t1101* L_5 = ((t1101*)SZArrayNew(t1101_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 0)) = (int32_t)3;
		__this->f9 = L_5;
		__this->f10 = 0;
		__this->f11 = 0;
		__this->f12 = (t2*) &_stringLiteral1552;
		__this->f13 = (t2*) &_stringLiteral1553;
		__this->f14 = (t2*) &_stringLiteral1554;
		__this->f15 = (t2*) &_stringLiteral167;
		__this->f16 = 2;
		__this->f17 = (t2*) &_stringLiteral135;
		__this->f18 = (t2*) &_stringLiteral338;
		t1101* L_6 = ((t1101*)SZArrayNew(t1101_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_6, 0)) = (int32_t)3;
		__this->f19 = L_6;
		__this->f20 = 1;
		__this->f21 = 2;
		__this->f22 = (t2*) &_stringLiteral135;
		__this->f23 = (t2*) &_stringLiteral338;
		t1101* L_7 = ((t1101*)SZArrayNew(t1101_TI_var, 1));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, 0)) = (int32_t)3;
		__this->f24 = L_7;
		__this->f25 = 0;
		__this->f26 = 0;
		__this->f27 = (t2*) &_stringLiteral739;
		__this->f28 = (t2*) &_stringLiteral1555;
		__this->f29 = (t2*) &_stringLiteral1556;
		__this->f30 = (t2*) &_stringLiteral168;
		goto IL_0157;
	}

IL_0157:
	{
		return;
	}
}
extern "C" void m8776 (t1561 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		m8775(__this, ((int32_t)127), L_0, &m8775_MI);
		return;
	}
}
extern "C" void m8777 (t1561 * __this, MethodInfo* method)
{
	{
		m8776(__this, 0, &m8776_MI);
		return;
	}
}
extern MethodInfo m8778_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m8778 (t9 * __this , MethodInfo* method)
{
	static bool m8778_init;
	if (!m8778_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8778_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)10)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral691);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral691;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral775);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral775;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral1557);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral1557;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral1558);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral1558;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral1559);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral1559;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral1560);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral1560;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral1561);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral1561;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral1562);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral1562;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral1563);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral1563;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral1564);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral1564;
		((t1561_SFs*)InitializedTypeInfo(&t1561_TI)->static_fields)->f38 = L_9;
		return;
	}
}
extern MethodInfo m8779_MI;
extern "C" int32_t m8779 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m8780_MI;
extern "C" t2* m8780 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m8781_MI;
extern "C" t2* m8781 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m8782_MI;
extern "C" t1101* m8782 (t1561 * __this, MethodInfo* method)
{
	{
		t1101* L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m8783_MI;
extern "C" int32_t m8783 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m8784_MI;
extern "C" int32_t m8784 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m8785_MI;
extern "C" t2* m8785 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" t1561 * m8786 (t9 * __this , MethodInfo* method)
{
	t1561 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1878 * L_0 = m11083(NULL, &m11083_MI);
		t907 * L_1 = m11094(L_0, &m11094_MI);
		t1561 * L_2 = (t1561 *)VirtFuncInvoker0< t1561 * >::Invoke(&m8705_MI, L_1);
		V_0 = L_2;
		t1561 * L_3 = V_0;
		L_3->f0 = 1;
		t1561 * L_4 = V_0;
		return L_4;
	}
}
extern "C" t1561 * m8787 (t9 * __this , MethodInfo* method)
{
	t1561 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
		t1561 * L_0 = (t1561 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1561_TI));
		m8777(L_0, &m8777_MI);
		V_0 = L_0;
		t1561 * L_1 = V_0;
		m8796(L_1, 1, &m8796_MI);
		t1561 * L_2 = V_0;
		L_2->f0 = 1;
		t1561 * L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m8788_MI;
extern "C" t2* m8788 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m8789_MI;
extern "C" t2* m8789 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m8790_MI;
extern "C" t2* m8790 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m8791_MI;
extern "C" int32_t m8791 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m8792_MI;
extern "C" t2* m8792 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m8793_MI;
extern "C" t2* m8793 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m8794_MI;
extern "C" t1101* m8794 (t1561 * __this, MethodInfo* method)
{
	{
		t1101* L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m8795_MI;
extern "C" int32_t m8795 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f20);
		return L_0;
	}
}
extern "C" void m8796 (t1561 * __this, int32_t p0, MethodInfo* method)
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
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_2, (t2*) &_stringLiteral1550, &m5763_MI);
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
		t1347 * L_4 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_4, (t2*) &_stringLiteral1551, &m5755_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		int32_t L_5 = p0;
		__this->f20 = L_5;
		return;
	}
}
extern MethodInfo m8797_MI;
extern "C" int32_t m8797 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m8798_MI;
extern "C" t2* m8798 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m8799_MI;
extern "C" t2* m8799 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m8800_MI;
extern "C" t1101* m8800 (t1561 * __this, MethodInfo* method)
{
	{
		t1101* L_0 = (__this->f24);
		return L_0;
	}
}
extern MethodInfo m8801_MI;
extern "C" int32_t m8801 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f25);
		return L_0;
	}
}
extern MethodInfo m8802_MI;
extern "C" int32_t m8802 (t1561 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f26);
		return L_0;
	}
}
extern MethodInfo m8803_MI;
extern "C" t2* m8803 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f27);
		return L_0;
	}
}
extern MethodInfo m8804_MI;
extern "C" t2* m8804 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f28);
		return L_0;
	}
}
extern MethodInfo m8805_MI;
extern "C" t2* m8805 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f29);
		return L_0;
	}
}
extern MethodInfo m8806_MI;
extern "C" t2* m8806 (t1561 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f30);
		return L_0;
	}
}
extern MethodInfo m8807_MI;
extern "C" t9 * m8807 (t1561 * __this, t126 * p0, MethodInfo* method)
{
	t1561 * G_B3_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1561_0_0_0), &m329_MI);
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
		G_B3_0 = ((t1561 *)(NULL));
	}

IL_0011:
	{
		return G_B3_0;
	}
}
extern "C" t9 * m8808 (t1561 * __this, MethodInfo* method)
{
	t1561 * V_0 = {0};
	{
		t9 * L_0 = m7100(__this, &m7100_MI);
		V_0 = ((t1561 *)Castclass(L_0, InitializedTypeInfo(&t1561_TI)));
		t1561 * L_1 = V_0;
		L_1->f0 = 0;
		t1561 * L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m8809_MI;
extern "C" t1561 * m8809 (t9 * __this , t9 * p0, MethodInfo* method)
{
	t1561 * V_0 = {0};
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
		t126 * L_2 = m329(NULL, LoadTypeToken(&t1561_0_0_0), &m329_MI);
		t9 * L_3 = (t9 *)InterfaceFuncInvoker1< t9 *, t126 * >::Invoke(&m12001_MI, L_1, L_2);
		V_0 = ((t1561 *)Castclass(L_3, InitializedTypeInfo(&t1561_TI)));
		t1561 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		t1561 * L_5 = V_0;
		return L_5;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1561_TI));
		t1561 * L_6 = m8786(NULL, &m8786_MI);
		return L_6;
	}
}
#include "t908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t908_TI;
#include "t908MD.h"



#include "t1716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1716_TI;
#include "t1716MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m7362_MI;
extern MethodInfo m5848_MI;
extern MethodInfo m7445_MI;
extern MethodInfo m7887_MI;
extern MethodInfo m8816_MI;
extern MethodInfo m8817_MI;


extern "C" void m8810 (t1622 * __this, t907 * p0, int32_t p1, void* p2, bool p3, MethodInfo* method)
{
	t907 * V_0 = {0};
	t1716  V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		bool L_0 = p3;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f2 = L_1;
		t907 * L_2 = p0;
		__this->f3 = L_2;
		void* L_3 = p2;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		void* L_4 = p2;
		__this->f5 = (*(t1716 *)L_4);
		goto IL_0049;
	}

IL_002d:
	{
		Initobj (InitializedTypeInfo(&t1716_TI), (&V_1));
		t1716  L_5 = V_1;
		__this->f5 = L_5;
		t1716 * L_6 = &(__this->f5);
		L_6->f4 = ((int32_t)44);
	}

IL_0049:
	{
		t907 * L_7 = p0;
		V_0 = L_7;
		goto IL_0054;
	}

IL_004d:
	{
		t907 * L_8 = V_0;
		t907 * L_9 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m8697_MI, L_8);
		V_0 = L_9;
	}

IL_0054:
	{
		t907 * L_10 = V_0;
		t907 * L_11 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m8697_MI, L_10);
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		t907 * L_12 = V_0;
		t907 * L_13 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m8697_MI, L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)127))))
		{
			goto IL_0074;
		}
	}
	{
		t907 * L_15 = V_0;
		t907 * L_16 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m8697_MI, L_15);
		t907 * L_17 = V_0;
		if ((!(((t9*)(t907 *)L_16) == ((t9*)(t907 *)L_17))))
		{
			goto IL_004d;
		}
	}

IL_0074:
	{
		t907 * L_18 = V_0;
		if (!L_18)
		{
			goto IL_0093;
		}
	}
	{
		t907 * L_19 = V_0;
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_19);
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
extern MethodInfo m8811_MI;
extern "C" void m8811 (t1622 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t2* m8812 (t1622 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t907 * L_1 = (__this->f3);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8696_MI, L_1);
		__this->f1 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f1);
		return L_3;
	}
}
extern MethodInfo m8813_MI;
extern "C" bool m8813 (t1622 * __this, t9 * p0, MethodInfo* method)
{
	t1622 * V_0 = {0};
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
		V_0 = ((t1622 *)IsInst(L_1, InitializedTypeInfo(&t1622_TI)));
		t1622 * L_2 = V_0;
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
		t1622 * L_3 = V_0;
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
		t1622 * L_6 = V_0;
		t907 * L_7 = (L_6->f3);
		t907 * L_8 = (__this->f3);
		if ((((t9*)(t907 *)L_7) == ((t9*)(t907 *)L_8)))
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
extern MethodInfo m8814_MI;
extern "C" int32_t m8814 (t1622 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m8815_MI;
extern "C" t2* m8815 (t1622 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral1565, L_2, &m511_MI);
		return L_3;
	}
}
extern "C" uint16_t m8816 (t1622 * __this, uint16_t p0, MethodInfo* method)
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
		t907 * L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		t907 * L_10 = (__this->f3);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_10);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_004f;
		}
	}

IL_0048:
	{
		uint16_t L_12 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_13 = m7362(NULL, L_12, &m7362_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_23 = m7362(NULL, L_22, &m7362_MI);
		return L_23;
	}
}
extern "C" uint16_t m8817 (t1622 * __this, uint16_t p0, MethodInfo* method)
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
		t907 * L_7 = (__this->f3);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t907 * L_8 = (__this->f3);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8695_MI, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)127)))))
		{
			goto IL_0042;
		}
	}

IL_003b:
	{
		uint16_t L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_11 = m5848(NULL, L_10, &m5848_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		uint16_t L_25 = m5848(NULL, L_24, &m5848_MI);
		return L_25;
	}
}
extern "C" t2* m8818 (t1622 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1566, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
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
		int32_t L_6 = m2763(L_5, &m2763_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7445(NULL, L_6, &m7445_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7887(NULL, &m7887_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7887(NULL, &m7887_MI);
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
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8816_MI, __this, (*((uint16_t*)L_17)));
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
		int32_t L_24 = m2763(L_23, &m2763_MI);
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
extern MethodInfo m8819_MI;
extern "C" t2* m8819 (t1622 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral1566, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
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
		int32_t L_6 = m2763(L_5, &m2763_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m7445(NULL, L_6, &m7445_MI);
		V_0 = L_7;
		t2* L_8 = p0;
		V_6 = L_8;
		t2* L_9 = V_6;
		int32_t L_10 = m7887(NULL, &m7887_MI);
		V_1 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_9))+(int32_t)L_10));
		t2* L_11 = V_0;
		V_7 = L_11;
		t2* L_12 = V_7;
		int32_t L_13 = m7887(NULL, &m7887_MI);
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
		uint16_t L_18 = (uint16_t)VirtFuncInvoker1< uint16_t, uint16_t >::Invoke(&m8817_MI, __this, (*((uint16_t*)L_17)));
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
		int32_t L_24 = m2763(L_23, &m2763_MI);
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
extern TypeInfo t1291_TI;
#include "t1291MD.h"



#include "t1717.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1717_TI;
#include "t1717MD.h"

extern MethodInfo m7070_MI;


extern MethodInfo m8820_MI;
extern "C" void m8820 (t1717 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral1567, &m7888_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8821_MI;
extern "C" void m8821 (t1717 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m8822_MI;
extern "C" void m8822 (t1717 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
#include "t1718.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1718_TI;
#include "t1718MD.h"

#include "t302.h"
#include "t1719.h"
#include "t1555.h"
#include "t1724.h"
#include "t910.h"
#include "t186.h"
#include "t315.h"
extern TypeInfo t302_TI;
extern TypeInfo t1719_TI;
extern TypeInfo t1555_TI;
extern TypeInfo t1724_TI;
#include "t302MD.h"
#include "t1555MD.h"
#include "t1724MD.h"
#include "t1719MD.h"
extern MethodInfo m10905_MI;
extern MethodInfo m8824_MI;
extern MethodInfo m7049_MI;
extern MethodInfo m10896_MI;
extern MethodInfo m8826_MI;
extern MethodInfo m1129_MI;
extern MethodInfo m11811_MI;
extern MethodInfo m8952_MI;
extern MethodInfo m8847_MI;
extern MethodInfo m7039_MI;
extern MethodInfo m8887_MI;
extern MethodInfo m8830_MI;
extern MethodInfo m8831_MI;
extern MethodInfo m7037_MI;
extern MethodInfo m12045_MI;
extern MethodInfo m8834_MI;
extern MethodInfo m8828_MI;
extern MethodInfo m8827_MI;
extern MethodInfo m8832_MI;
extern MethodInfo m12046_MI;
extern MethodInfo m10939_MI;
extern MethodInfo m11210_MI;


extern MethodInfo m8823_MI;
extern "C" void m8823 (t1718 * __this, t302 * p0, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10905(NULL, &m10905_MI);
		m8824(__this, L_0, L_1, &m8824_MI);
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8824 (t1718 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	static bool m8824_init;
	if (!m8824_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8824_init = true;
	}
	{
		m336(__this, &m336_MI);
		t302 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		t736 * L_1 = p1;
		if (L_1)
		{
			goto IL_001c;
		}
	}

IL_000c:
	{
		t2* L_2 = m7888(NULL, (t2*) &_stringLiteral1568, &m7888_MI);
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, L_2, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t302 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7049_MI, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral1569, &m7888_MI);
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, L_6, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		t302 * L_8 = p0;
		__this->f0 = L_8;
		t736 * L_9 = p1;
		__this->f1 = L_9;
		t736 * L_10 = p1;
		t1719 * L_11 = (t1719 *)VirtFuncInvoker0< t1719 * >::Invoke(&m10896_MI, L_10);
		__this->f3 = L_11;
		__this->f2 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)32)));
		return;
	}
}
extern MethodInfo m8825_MI;
extern "C" void m8825 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8826_MI, __this, 1);
		return;
	}
}
extern "C" void m8826 (t1718 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_1 = (__this->f0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_2 = (__this->f0);
		VirtActionInvoker0::Invoke(&m1129_MI, L_2);
	}

IL_0016:
	{
		__this->f5 = 1;
		__this->f2 = (t737*)NULL;
		__this->f1 = (t736 *)NULL;
		__this->f0 = (t302 *)NULL;
		__this->f4 = (t318*)NULL;
		return;
	}
}
extern "C" void m8827 (t1718 * __this, int32_t p0, MethodInfo* method)
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
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1570, (t2*) &_stringLiteral1571, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t302 * L_2 = (__this->f0);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		t1555 * L_3 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_3, (t2*) &_stringLiteral1572, &m8952_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		int32_t L_4 = p0;
		m8847(__this, L_4, &m8847_MI);
		V_0 = 0;
		goto IL_0059;
	}

IL_0036:
	{
		t302 * L_5 = (__this->f0);
		t737* L_6 = (__this->f2);
		int32_t L_7 = V_0;
		int32_t L_8 = p0;
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, t737*, int32_t, int32_t >::Invoke(&m7039_MI, L_5, L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)));
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		t1724 * L_12 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8887(L_12, &m8887_MI);
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
extern TypeInfo* t318_TI_var;
extern "C" int32_t m8828 (t1718 * __this, MethodInfo* method)
{
	static bool m8828_init;
	if (!m8828_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8828_init = true;
	}
	int32_t V_0 = 0;
	{
		t318* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		__this->f4 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)128)));
	}

IL_0018:
	{
		t318* L_1 = (__this->f4);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, t318*, int32_t, int32_t >::Invoke(&m8830_MI, __this, L_1, 0, 1);
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
		t318* L_4 = (__this->f4);
		int32_t L_5 = 0;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_5));
	}
}
extern MethodInfo m8829_MI;
extern "C" int32_t m8829 (t1718 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t302 * L_0 = (__this->f0);
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
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_2, (t2*) &_stringLiteral1570, (t2*) &_stringLiteral1571, &m11811_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1555 * L_3 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_3, (t2*) &_stringLiteral1572, &m8952_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t737* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1573, &m339_MI);
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
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_7, (t2*) &_stringLiteral408, &m5763_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_9, (t2*) &_stringLiteral1574, &m5763_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t737* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral1575, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t302 * L_14 = (__this->f0);
		t737* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = p2;
		int32_t L_18 = (int32_t)VirtFuncInvoker3< int32_t, t737*, int32_t, int32_t >::Invoke(&m7039_MI, L_14, L_15, L_16, L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		return L_19;
	}
}
extern "C" int32_t m8830 (t1718 * __this, t318* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t302 * L_0 = (__this->f0);
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
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_2, (t2*) &_stringLiteral1570, (t2*) &_stringLiteral1571, &m11811_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1555 * L_3 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_3, (t2*) &_stringLiteral1572, &m8952_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t318* L_4 = p0;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral1573, &m339_MI);
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
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_7, (t2*) &_stringLiteral408, &m5763_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_9, (t2*) &_stringLiteral1574, &m5763_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		t318* L_10 = p0;
		int32_t L_11 = p1;
		int32_t L_12 = p2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)L_11))) >= ((int32_t)L_12)))
		{
			goto IL_006a;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral1575, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_006a:
	{
		t318* L_14 = p0;
		int32_t L_15 = p1;
		int32_t L_16 = p2;
		int32_t L_17 = m8831(__this, L_14, L_15, L_16, (&V_0), &m8831_MI);
		return L_17;
	}
}
extern "C" int32_t m8831 (t1718 * __this, t318* p0, int32_t p1, int32_t p2, int32_t* p3, MethodInfo* method)
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
		m8847(__this, ((int32_t)((int32_t)L_1+(int32_t)1)), &m8847_MI);
		t302 * L_2 = (__this->f0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7037_MI, L_2);
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
		t737* L_6 = (__this->f2);
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8)) = (uint8_t)(((uint8_t)L_9));
		int32_t* L_10 = p3;
		int32_t* L_11 = p3;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)1));
		t736 * L_12 = (__this->f1);
		t737* L_13 = (__this->f2);
		int32_t L_14 = V_1;
		t318* L_15 = p0;
		int32_t L_16 = p1;
		int32_t L_17 = V_0;
		int32_t L_18 = (int32_t)VirtFuncInvoker5< int32_t, t737*, int32_t, int32_t, t318*, int32_t >::Invoke(&m12045_MI, L_12, L_13, 0, L_14, L_15, ((int32_t)((int32_t)L_16+(int32_t)L_17)));
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
extern "C" int32_t m8832 (t1718 * __this, MethodInfo* method)
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
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8834_MI, __this);
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
		t897 * L_10 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_10, (t2*) &_stringLiteral1576, &m4354_MI);
		il2cpp_codegen_raise_exception(L_10);
	}
}
extern MethodInfo m8833_MI;
extern "C" bool m8833 (t1718 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8834_MI, __this);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" uint8_t m8834 (t1718 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t302 * L_0 = (__this->f0);
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
		t1536 * L_2 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_2, (t2*) &_stringLiteral1570, (t2*) &_stringLiteral1571, &m11811_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0020:
	{
		t1555 * L_3 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_3, (t2*) &_stringLiteral1572, &m8952_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002b:
	{
		t302 * L_4 = (__this->f0);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7037_MI, L_4);
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
		t1724 * L_8 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8887(L_8, &m8887_MI);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern MethodInfo m8835_MI;
extern "C" uint16_t m8835 (t1718 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8828_MI, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		t1724 * L_2 = (t1724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1724_TI));
		m8887(L_2, &m8887_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0011:
	{
		int32_t L_3 = V_0;
		return (((uint16_t)L_3));
	}
}
extern MethodInfo m8836_MI;
extern "C" t910  m8836 (t1718 * __this, MethodInfo* method)
{
	t910  V_0 = {0};
	uint8_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, ((int32_t)16));
		V_1 = (uint8_t*)(&V_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_0 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
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
		t737* L_4 = (__this->f2);
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
		t737* L_10 = (__this->f2);
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
		t737* L_16 = (__this->f2);
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
		t737* L_22 = (__this->f2);
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
		t737* L_30 = (__this->f2);
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
		t737* L_36 = (__this->f2);
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
		t737* L_42 = (__this->f2);
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
		t737* L_48 = (__this->f2);
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
		t910  L_53 = V_0;
		return L_53;
	}
}
extern MethodInfo m8837_MI;
extern "C" double m8837 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 8);
		t737* L_0 = (__this->f2);
		double L_1 = m8329(NULL, L_0, 0, &m8329_MI);
		return L_1;
	}
}
extern MethodInfo m8838_MI;
extern "C" int16_t m8838 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 2);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((int16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8839_MI;
extern "C" int32_t m8839 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 4);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t737* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t737* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8840_MI;
extern "C" int64_t m8840 (t1718 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 8);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t737* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t737* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t737* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t737* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t737* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t737* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern MethodInfo m8841_MI;
extern "C" int8_t m8841 (t1718 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(&m8834_MI, __this);
		return (((int8_t)L_0));
	}
}
extern MethodInfo m8842_MI;
extern TypeInfo* t318_TI_var;
extern "C" t2* m8842 (t1718 * __this, MethodInfo* method)
{
	static bool m8842_init;
	if (!m8842_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8842_init = true;
	}
	int32_t V_0 = 0;
	t328 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = m8832(__this, &m8832_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t1555 * L_2 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_2, (t2*) &_stringLiteral1577, &m8952_MI);
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
		t318* L_5 = (__this->f4);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		__this->f4 = ((t318*)SZArrayNew(t318_TI_var, ((int32_t)128)));
	}

IL_0037:
	{
		V_1 = (t328 *)NULL;
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
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, L_8);
		t1719 * L_9 = (__this->f3);
		t737* L_10 = (__this->f2);
		int32_t L_11 = V_2;
		t318* L_12 = (__this->f4);
		int32_t L_13 = (int32_t)VirtFuncInvoker5< int32_t, t737*, int32_t, int32_t, t318*, int32_t >::Invoke(&m12046_MI, L_9, L_10, 0, L_11, L_12, 0);
		V_3 = L_13;
		t328 * L_14 = V_1;
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
		t318* L_17 = (__this->f4);
		int32_t L_18 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4419(L_19, L_17, 0, L_18, &m4399_MI);
		return L_19;
	}

IL_0081:
	{
		t328 * L_20 = V_1;
		if (L_20)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = V_0;
		t328 * L_22 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m4396(L_22, L_21, &m4396_MI);
		V_1 = L_22;
	}

IL_008b:
	{
		t328 * L_23 = V_1;
		t318* L_24 = (__this->f4);
		int32_t L_25 = V_3;
		m10939(L_23, L_24, 0, L_25, &m10939_MI);
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
		t328 * L_29 = V_1;
		t2* L_30 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_29);
		return L_30;
	}
}
extern MethodInfo m8843_MI;
extern "C" float m8843 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 4);
		t737* L_0 = (__this->f2);
		float L_1 = m8328(NULL, L_0, 0, &m8328_MI);
		return L_1;
	}
}
extern MethodInfo m8844_MI;
extern "C" uint16_t m8844 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 2);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		return (((uint16_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))));
	}
}
extern MethodInfo m8845_MI;
extern "C" uint32_t m8845 (t1718 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 4);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t737* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t737* L_6 = (__this->f2);
		int32_t L_7 = 3;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
	}
}
extern MethodInfo m8846_MI;
extern "C" uint64_t m8846 (t1718 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		VirtActionInvoker1< int32_t >::Invoke(&m8827_MI, __this, 8);
		t737* L_0 = (__this->f2);
		int32_t L_1 = 0;
		t737* L_2 = (__this->f2);
		int32_t L_3 = 1;
		t737* L_4 = (__this->f2);
		int32_t L_5 = 2;
		t737* L_6 = (__this->f2);
		int32_t L_7 = 3;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7))<<(int32_t)((int32_t)24)))));
		t737* L_8 = (__this->f2);
		int32_t L_9 = 4;
		t737* L_10 = (__this->f2);
		int32_t L_11 = 5;
		t737* L_12 = (__this->f2);
		int32_t L_13 = 6;
		t737* L_14 = (__this->f2);
		int32_t L_15 = 7;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_11))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_15))<<(int32_t)((int32_t)24)))));
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_0;
		return ((int64_t)((int64_t)((int64_t)((int64_t)(((uint64_t)L_16))<<(int32_t)((int32_t)32)))|(int64_t)(((uint64_t)L_17))));
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8847 (t1718 * __this, int32_t p0, MethodInfo* method)
{
	static bool m8847_init;
	if (!m8847_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8847_init = true;
	}
	t737* V_0 = {0};
	{
		t737* L_0 = (__this->f2);
		int32_t L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))) > ((int32_t)L_1)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = p0;
		V_0 = ((t737*)SZArrayNew(t737_TI_var, L_2));
		t737* L_3 = (__this->f2);
		t737* L_4 = V_0;
		t737* L_5 = (__this->f2);
		m11210(NULL, (t121 *)(t121 *)L_3, 0, (t121 *)(t121 *)L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))), &m11210_MI);
		t737* L_6 = V_0;
		__this->f2 = L_6;
	}

IL_0030:
	{
		return;
	}
}
#include "t1720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1720_TI;
#include "t1720MD.h"

extern MethodInfo m8850_MI;
extern MethodInfo m7050_MI;
extern MethodInfo m8848_MI;
extern MethodInfo m8853_MI;
extern MethodInfo m7068_MI;
extern MethodInfo m7023_MI;
extern MethodInfo m7014_MI;
extern MethodInfo m10894_MI;
extern MethodInfo m10892_MI;
extern MethodInfo m8872_MI;
extern MethodInfo m12047_MI;
extern MethodInfo m8856_MI;


extern "C" void m8848 (t1720 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t302_TI));
		t302 * L_0 = ((t302_SFs*)InitializedTypeInfo(&t302_TI)->static_fields)->f0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10905(NULL, &m10905_MI);
		m8850(__this, L_0, L_1, &m8850_MI);
		return;
	}
}
extern MethodInfo m8849_MI;
extern "C" void m8849 (t1720 * __this, t302 * p0, MethodInfo* method)
{
	{
		t302 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_1 = m10905(NULL, &m10905_MI);
		m8850(__this, L_0, L_1, &m8850_MI);
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8850 (t1720 * __this, t302 * p0, t736 * p1, MethodInfo* method)
{
	static bool m8850_init;
	if (!m8850_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8850_init = true;
	}
	{
		m336(__this, &m336_MI);
		t302 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1578, &m339_MI);
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
		t302 * L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7050_MI, L_4);
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_6 = m7888(NULL, (t2*) &_stringLiteral1580, &m7888_MI);
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_7, L_6, &m2949_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003a:
	{
		t302 * L_8 = p0;
		__this->f1 = L_8;
		t736 * L_9 = p1;
		__this->f2 = L_9;
		__this->f3 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)16)));
		return;
	}
}
extern MethodInfo m8851_MI;
extern "C" void m8851 (t9 * __this , MethodInfo* method)
{
	{
		t1720 * L_0 = (t1720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1720_TI));
		m8848(L_0, &m8848_MI);
		((t1720_SFs*)InitializedTypeInfo(&t1720_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m8852_MI;
extern "C" void m8852 (t1720 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m8853_MI, __this, 1);
		return;
	}
}
extern "C" void m8853 (t1720 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		t302 * L_2 = (__this->f1);
		VirtActionInvoker0::Invoke(&m1129_MI, L_2);
	}

IL_0016:
	{
		__this->f3 = (t737*)NULL;
		__this->f2 = (t736 *)NULL;
		__this->f4 = 1;
		return;
	}
}
extern MethodInfo m8854_MI;
extern "C" void m8854 (t1720 * __this, MethodInfo* method)
{
	{
		t302 * L_0 = (__this->f1);
		VirtActionInvoker0::Invoke(&m7068_MI, L_0);
		return;
	}
}
extern MethodInfo m8855_MI;
extern "C" void m8855 (t1720 * __this, bool p0, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	t737* G_B4_1 = {0};
	int32_t G_B3_0 = 0;
	t737* G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	t737* G_B5_2 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
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
		t302 * L_4 = (__this->f1);
		t737* L_5 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern "C" void m8856 (t1720 * __this, uint8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t302 * L_2 = (__this->f1);
		uint8_t L_3 = p0;
		VirtActionInvoker1< uint8_t >::Invoke(&m7014_MI, L_2, L_3);
		return;
	}
}
extern MethodInfo m8857_MI;
extern "C" void m8857 (t1720 * __this, t737* p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = p0;
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
		t302 * L_4 = (__this->f1);
		t737* L_5 = p0;
		t737* L_6 = p0;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		return;
	}
}
extern MethodInfo m8858_MI;
extern "C" void m8858 (t1720 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = p0;
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
		t302 * L_4 = (__this->f1);
		t737* L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_4, L_5, L_6, L_7);
		return;
	}
}
extern MethodInfo m8859_MI;
extern TypeInfo* t318_TI_var;
extern "C" void m8859 (t1720 * __this, uint16_t p0, MethodInfo* method)
{
	static bool m8859_init;
	if (!m8859_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m8859_init = true;
	}
	t318* V_0 = {0};
	t737* V_1 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = ((t318*)SZArrayNew(t318_TI_var, 1));
		t318* L_2 = V_0;
		uint16_t L_3 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		t736 * L_4 = (__this->f2);
		t318* L_5 = V_0;
		t737* L_6 = (t737*)VirtFuncInvoker3< t737*, t318*, int32_t, int32_t >::Invoke(&m10894_MI, L_4, L_5, 0, 1);
		V_1 = L_6;
		t302 * L_7 = (__this->f1);
		t737* L_8 = V_1;
		t737* L_9 = V_1;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return;
	}
}
extern MethodInfo m8860_MI;
extern "C" void m8860 (t1720 * __this, t318* p0, MethodInfo* method)
{
	t737* V_0 = {0};
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
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
		m339(L_3, (t2*) &_stringLiteral1583, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		t736 * L_4 = (__this->f2);
		t318* L_5 = p0;
		t318* L_6 = p0;
		t737* L_7 = (t737*)VirtFuncInvoker3< t737*, t318*, int32_t, int32_t >::Invoke(&m10894_MI, L_4, L_5, 0, (((int32_t)(((t121 *)L_6)->max_length))));
		V_0 = L_7;
		t302 * L_8 = (__this->f1);
		t737* L_9 = V_0;
		t737* L_10 = V_0;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_8, L_9, 0, (((int32_t)(((t121 *)L_10)->max_length))));
		return;
	}
}
extern MethodInfo m8861_MI;
extern "C" void m8861 (t1720 * __this, t910  p0, MethodInfo* method)
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
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		V_0 = (uint8_t*)(&p0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1349_TI));
		bool L_2 = ((t1349_SFs*)InitializedTypeInfo(&t1349_TI)->static_fields)->f1;
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
		t737* L_4 = (__this->f3);
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
		t737* L_9 = (__this->f3);
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
		t737* L_14 = (__this->f3);
		int32_t L_15 = V_1;
		uint8_t* L_16 = V_0;
		int32_t L_17 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15-(int32_t)8)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_16+(int32_t)L_17))));
		goto IL_0072;
	}

IL_0064:
	{
		t737* L_18 = (__this->f3);
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
		t737* L_25 = (__this->f3);
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
		t737* L_30 = (__this->f3);
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
		t737* L_35 = (__this->f3);
		int32_t L_36 = V_2;
		uint8_t* L_37 = V_0;
		int32_t L_38 = V_2;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, ((int32_t)((int32_t)((int32_t)11)-(int32_t)L_36)))) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_37+(int32_t)L_38))));
		goto IL_00d0;
	}

IL_00c1:
	{
		t737* L_39 = (__this->f3);
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
		t302 * L_45 = (__this->f1);
		t737* L_46 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_45, L_46, 0, ((int32_t)16));
		return;
	}
}
extern MethodInfo m8862_MI;
extern "C" void m8862 (t1720 * __this, double p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t302 * L_2 = (__this->f1);
		double L_3 = p0;
		t737* L_4 = m8322(NULL, L_3, &m8322_MI);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_2, L_4, 0, 8);
		return;
	}
}
extern MethodInfo m8863_MI;
extern "C" void m8863 (t1720 * __this, int16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
		int16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t737* L_4 = (__this->f3);
		int16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t302 * L_6 = (__this->f1);
		t737* L_7 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8864_MI;
extern "C" void m8864 (t1720 * __this, int32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
		int32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t737* L_4 = (__this->f3);
		int32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t737* L_6 = (__this->f3);
		int32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16)))));
		t737* L_8 = (__this->f3);
		int32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_9>>(int32_t)((int32_t)24)))));
		t302 * L_10 = (__this->f1);
		t737* L_11 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8865_MI;
extern "C" void m8865 (t1720 * __this, int64_t p0, MethodInfo* method)
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
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
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
		t737* L_2 = (__this->f3);
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
		t302 * L_9 = (__this->f1);
		t737* L_10 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern MethodInfo m8866_MI;
extern "C" void m8866 (t1720 * __this, int8_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
		int8_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t302 * L_4 = (__this->f1);
		t737* L_5 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_4, L_5, 0, 1);
		return;
	}
}
extern MethodInfo m8867_MI;
extern "C" void m8867 (t1720 * __this, float p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t302 * L_2 = (__this->f1);
		float L_3 = p0;
		t737* L_4 = m8321(NULL, L_3, &m8321_MI);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_2, L_4, 0, 4);
		return;
	}
}
extern MethodInfo m8868_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m8868 (t1720 * __this, t2* p0, MethodInfo* method)
{
	static bool m8868_init;
	if (!m8868_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8868_init = true;
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
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t736 * L_2 = (__this->f2);
		t2* L_3 = p0;
		int32_t L_4 = (int32_t)VirtFuncInvoker1< int32_t, t2* >::Invoke(&m10892_MI, L_2, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		m8872(__this, L_5, &m8872_MI);
		t737* L_6 = (__this->f5);
		if (L_6)
		{
			goto IL_005c;
		}
	}
	{
		__this->f5 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)512)));
		t736 * L_7 = (__this->f2);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&m12047_MI, L_7, 1);
		__this->f6 = ((int32_t)((int32_t)((int32_t)512)/(int32_t)L_8));
	}

IL_005c:
	{
		V_1 = 0;
		t2* L_9 = p0;
		int32_t L_10 = m2763(L_9, &m2763_MI);
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
		t736 * L_15 = (__this->f2);
		t2* L_16 = p0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		t737* L_19 = (__this->f5);
		int32_t L_20 = (int32_t)VirtFuncInvoker5< int32_t, t2*, int32_t, int32_t, t737*, int32_t >::Invoke(&m6961_MI, L_15, L_16, L_17, L_18, L_19, 0);
		V_4 = L_20;
		t302 * L_21 = (__this->f1);
		t737* L_22 = (__this->f5);
		int32_t L_23 = V_4;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_21, L_22, 0, L_23);
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
extern MethodInfo m8869_MI;
extern "C" void m8869 (t1720 * __this, uint16_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
		uint16_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t737* L_4 = (__this->f3);
		uint16_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		t302 * L_6 = (__this->f1);
		t737* L_7 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_6, L_7, 0, 2);
		return;
	}
}
extern MethodInfo m8870_MI;
extern "C" void m8870 (t1720 * __this, uint32_t p0, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		t737* L_2 = (__this->f3);
		uint32_t L_3 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 0)) = (uint8_t)(((uint8_t)L_3));
		t737* L_4 = (__this->f3);
		uint32_t L_5 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_5>>8))));
		t737* L_6 = (__this->f3);
		uint32_t L_7 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 2)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_7>>((int32_t)16)))));
		t737* L_8 = (__this->f3);
		uint32_t L_9 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 3)) = (uint8_t)(((uint8_t)((int32_t)((uint32_t)L_9>>((int32_t)24)))));
		t302 * L_10 = (__this->f1);
		t737* L_11 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_10, L_11, 0, 4);
		return;
	}
}
extern MethodInfo m8871_MI;
extern "C" void m8871 (t1720 * __this, uint64_t p0, MethodInfo* method)
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
		t1536 * L_1 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m11811(L_1, (t2*) &_stringLiteral1581, (t2*) &_stringLiteral1582, &m11811_MI);
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
		t737* L_2 = (__this->f3);
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
		t302 * L_9 = (__this->f1);
		t737* L_10 = (__this->f3);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_9, L_10, 0, 8);
		return;
	}
}
extern "C" void m8872 (t1720 * __this, int32_t p0, MethodInfo* method)
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
		VirtActionInvoker1< uint8_t >::Invoke(&m8856_MI, __this, L_4);
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
#include "t1544.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1544_TI;
#include "t1544MD.h"

#include "t1543.h"
#include "t304.h"
#include "t1735.h"
#include "t1721.h"
#include "t1737.h"
#include "t1723.h"
extern TypeInfo t304_TI;
extern TypeInfo t1543_TI;
extern TypeInfo t1734_TI;
extern TypeInfo t1737_TI;
extern TypeInfo t1723_TI;
#include "t304MD.h"
#include "t307MD.h"
#include "t1543MD.h"
#include "t1734MD.h"
#include "t1737MD.h"
#include "t1723MD.h"
extern MethodInfo m6022_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m1125_MI;
extern MethodInfo m8873_MI;
extern MethodInfo m8877_MI;
extern MethodInfo m8881_MI;
extern MethodInfo m8880_MI;
extern MethodInfo m8882_MI;
extern MethodInfo m8967_MI;
extern MethodInfo m8966_MI;
extern MethodInfo m8974_MI;
extern MethodInfo m8969_MI;
extern MethodInfo m8965_MI;
extern MethodInfo m8875_MI;
extern MethodInfo m1124_MI;
extern MethodInfo m8992_MI;
extern MethodInfo m8973_MI;
extern MethodInfo m8885_MI;
extern MethodInfo m8968_MI;


extern MethodInfo m6991_MI;
extern "C" t1543 * m6991 (t9 * __this , t2* p0, MethodInfo* method)
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
		m2949(L_4, (t2*) &_stringLiteral1585, &m2949_MI);
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
		m2949(L_8, (t2*) &_stringLiteral1586, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003a:
	{
		t2* L_9 = p0;
		t2* L_10 = m4312(L_9, &m4312_MI);
		int32_t L_11 = m2763(L_10, &m2763_MI);
		if (L_11)
		{
			goto IL_0052;
		}
	}
	{
		t570 * L_12 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_12, (t2*) &_stringLiteral1587, &m2949_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0052:
	{
		t2* L_13 = p0;
		bool L_14 = m1125(NULL, L_13, &m1125_MI);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m399(NULL, (t2*) &_stringLiteral1588, L_15, (t2*) &_stringLiteral1589, &m399_MI);
		t1555 * L_17 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_17, L_16, &m8952_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0070:
	{
		t2* L_18 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_18, (t2*) &_stringLiteral339, &m331_MI);
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		t570 * L_20 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_20, (t2*) &_stringLiteral1590, &m2949_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0088:
	{
		t2* L_21 = p0;
		t1543 * L_22 = m8873(NULL, L_21, &m8873_MI);
		return L_22;
	}
}
extern "C" t1543 * m8873 (t9 * __this , t2* p0, MethodInfo* method)
{
	t1543 * V_0 = {0};
	int32_t V_1 = {0};
	{
		t2* L_0 = p0;
		t1543 * L_1 = (t1543 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1543_TI));
		m8877(L_1, L_0, 1, &m8877_MI);
		V_0 = L_1;
		t1543 * L_2 = V_0;
		t1543 * L_3 = m8881(L_2, &m8881_MI);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		t1543 * L_4 = V_0;
		t1543 * L_5 = m8881(L_4, &m8881_MI);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8880_MI, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		t1543 * L_7 = V_0;
		t1543 * L_8 = m8881(L_7, &m8881_MI);
		m8882(L_8, &m8882_MI);
	}

IL_0028:
	{
		t2* L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_10 = m8967(NULL, L_9, (&V_1), &m8967_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_15 = m8966(NULL, L_13, L_14, &m8966_MI);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0047:
	{
		t1543 * L_16 = V_0;
		return L_16;
	}
}
extern MethodInfo m6990_MI;
extern "C" bool m6990 (t9 * __this , t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_2 = m8974(NULL, L_1, (&V_0), &m8974_MI);
		V_1 = L_2;
		bool L_3 = V_1;
		return L_3;
	}
}
extern MethodInfo m8874_MI;
extern "C" t2* m8874 (t9 * __this , MethodInfo* method)
{
	int32_t V_0 = {0};
	t2* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t2* L_0 = m8969(NULL, (&V_0), &m8969_MI);
		V_1 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_3 = m8965(NULL, L_2, &m8965_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0012:
	{
		t2* L_4 = V_1;
		return L_4;
	}
}
extern MethodInfo m6992_MI;
extern "C" t221* m6992 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = p1;
		t221* L_2 = m8875(NULL, L_0, L_1, ((int32_t)16), 0, &m8875_MI);
		return L_2;
	}
}
extern TypeInfo* t221_TI_var;
extern "C" t221* m8875 (t9 * __this , t2* p0, t2* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	static bool m8875_init;
	if (!m8875_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m8875_init = true;
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
		m11185(L_2, &m11185_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		t2* L_3 = p1;
		int32_t L_4 = m2763(L_3, &m2763_MI);
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
		t2* L_6 = m4312(L_5, &m4312_MI);
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if (L_7)
		{
			goto IL_0033;
		}
	}
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral1591, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0033:
	{
		t2* L_9 = p0;
		t2* L_10 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_11 = m1124(NULL, L_9, L_10, &m1124_MI);
		V_0 = L_11;
		t2* L_12 = V_0;
		t2* L_13 = m8992(NULL, L_12, &m8992_MI);
		V_1 = L_13;
		t2* L_14 = V_1;
		t318* L_15 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_16 = m6022(L_14, L_15, &m6022_MI);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_005b;
		}
	}
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral1592, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_005b:
	{
		t2* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_19 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_20 = m6022(L_18, L_19, &m6022_MI);
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_0097;
		}
	}
	{
		t2* L_21 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1737_TI));
		t318* L_22 = ((t1737_SFs*)InitializedTypeInfo(&t1737_TI)->static_fields)->f1;
		int32_t L_23 = m6022(L_21, L_22, &m6022_MI);
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0087;
		}
	}
	{
		t570 * L_24 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_24, (t2*) &_stringLiteral1592, (t2*) &_stringLiteral1584, &m5761_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0087:
	{
		t570 * L_25 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_25, (t2*) &_stringLiteral1593, (t2*) &_stringLiteral680, &m5761_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0097:
	{
		t2* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_27 = m8974(NULL, L_26, (&V_2), &m8974_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_30 = m8973(NULL, L_29, (&V_3), &m8973_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_36 = m8966(NULL, L_34, L_35, &m8966_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00c8:
	{
		t2* L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1737_TI));
		t318* L_38 = ((t1737_SFs*)InitializedTypeInfo(&t1737_TI)->static_fields)->f0;
		int32_t L_39 = m6022(L_37, L_38, &m6022_MI);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_00ec;
		}
	}
	{
		t2* L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_41 = m399(NULL, (t2*) &_stringLiteral1594, L_40, (t2*) &_stringLiteral1595, &m399_MI);
		t1723 * L_42 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
		m8885(L_42, L_41, &m8885_MI);
		il2cpp_codegen_raise_exception(L_42);
	}

IL_00ec:
	{
		t2* L_43 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1737_TI));
		t318* L_44 = ((t1737_SFs*)InitializedTypeInfo(&t1737_TI)->static_fields)->f0;
		int32_t L_45 = m6022(L_43, L_44, &m6022_MI);
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_010a;
		}
	}
	{
		t570 * L_46 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_46, (t2*) &_stringLiteral1596, (t2*) &_stringLiteral1597, &m5761_MI);
		il2cpp_codegen_raise_exception(L_46);
	}

IL_010a:
	{
		t570 * L_47 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_47, (t2*) &_stringLiteral1598, (t2*) &_stringLiteral1584, &m5761_MI);
		il2cpp_codegen_raise_exception(L_47);
	}

IL_011a:
	{
		t2* L_48 = V_1;
		t2* L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_50 = m1124(NULL, L_48, L_49, &m1124_MI);
		V_4 = L_50;
		t2* L_51 = p0;
		t2* L_52 = V_4;
		int32_t L_53 = p3;
		int32_t L_54 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t221* L_55 = m8968(NULL, L_51, L_52, L_53, L_54, (&V_2), &m8968_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_59 = m8966(NULL, L_57, L_58, &m8966_MI);
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

#include "t1722.h"
#include "t1732.h"
#include "t1734.h"
extern TypeInfo t1722_TI;
extern TypeInfo t1732_TI;
#include "t1722MD.h"
extern MethodInfo m8948_MI;
extern MethodInfo m8876_MI;
extern MethodInfo m8944_MI;
extern MethodInfo m8950_MI;
extern MethodInfo m8995_MI;
extern MethodInfo m8994_MI;
extern MethodInfo m8879_MI;
extern MethodInfo m8945_MI;
extern MethodInfo m6024_MI;
extern MethodInfo m11570_MI;
extern MethodInfo m2829_MI;


extern "C" void m8876 (t1543 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8877(__this, L_0, 0, &m8877_MI);
		return;
	}
}
extern "C" void m8877 (t1543 * __this, t2* p0, bool p1, MethodInfo* method)
{
	{
		m8944(__this, &m8944_MI);
		t2* L_0 = p0;
		m8950(__this, L_0, &m8950_MI);
		t2* L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_2 = m8995(NULL, L_1, &m8995_MI);
		__this->f1 = L_2;
		bool L_3 = p1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_5 = m8994(NULL, L_4, &m8994_MI);
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
		m8879(__this, &m8879_MI);
		return;
	}
}
extern MethodInfo m8878_MI;
extern "C" void m8878 (t1543 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m8945(__this, L_0, L_1, &m8945_MI);
		m8879(__this, &m8879_MI);
		return;
	}
}
extern "C" void m8879 (t1543 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = m2763(L_0, &m2763_MI);
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
		uint16_t L_5 = m2778(L_3, L_4, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_6 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_9 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		int32_t L_10 = V_0;
		int32_t L_11 = m6024(L_8, L_9, L_10, &m6024_MI);
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
		t2* L_20 = m2779(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), ((int32_t)((int32_t)L_18-(int32_t)L_19)), &m2779_MI);
		__this->f5 = L_20;
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_008b;
		}
	}
	{
		bool L_22 = m11570(NULL, &m11570_MI);
		if (L_22)
		{
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_23 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f4;
		__this->f6 = L_23;
		goto IL_009e;
	}

IL_008b:
	{
		t2* L_24 = (__this->f1);
		int32_t L_25 = V_1;
		t2* L_26 = m2779(L_24, 0, L_25, &m2779_MI);
		__this->f6 = L_26;
	}

IL_009e:
	{
		bool L_27 = m11570(NULL, &m11570_MI);
		if (!L_27)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_28 = (__this->f6);
		int32_t L_29 = m2763(L_28, &m2763_MI);
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_30 = (__this->f6);
		uint16_t L_31 = m2778(L_30, 1, &m2778_MI);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_32 = (__this->f6);
		uint16_t L_33 = m2778(L_32, 0, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t309_TI));
		bool L_34 = m2829(NULL, L_33, &m2829_MI);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}
	{
		t2* L_35 = (__this->f6);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_36 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		uint16_t L_37 = L_36;
		t9 * L_38 = Box(InitializedTypeInfo(&t309_TI), &L_37);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_39 = m511(NULL, L_35, L_38, &m511_MI);
		__this->f6 = L_39;
	}

IL_00f1:
	{
		return;
	}
}
extern "C" bool m8880 (t1543 * __this, MethodInfo* method)
{
	{
		m8948(__this, 0, &m8948_MI);
		t1732 * L_0 = &(__this->f3);
		int32_t L_1 = (L_0->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_2 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f0;
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
		t1732 * L_3 = &(__this->f3);
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
extern "C" t1543 * m8881 (t1543 * __this, MethodInfo* method)
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
		int32_t L_2 = m2763(L_1, &m2763_MI);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (t1543 *)NULL;
	}

IL_0017:
	{
		t2* L_3 = (__this->f6);
		t1543 * L_4 = (t1543 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1543_TI));
		m8876(L_4, L_3, &m8876_MI);
		return L_4;
	}
}
extern "C" void m8882 (t1543 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		m6991(NULL, L_0, &m6991_MI);
		return;
	}
}
extern MethodInfo m8883_MI;
extern "C" t2* m8883 (t1543 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m8953_MI;


extern MethodInfo m8884_MI;
extern "C" void m8884 (t1723 * __this, MethodInfo* method)
{
	{
		m8952(__this, (t2*) &_stringLiteral1599, &m8952_MI);
		return;
	}
}
extern "C" void m8885 (t1723 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8952(__this, L_0, &m8952_MI);
		return;
	}
}
extern MethodInfo m8886_MI;
extern "C" void m8886 (t1723 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m8953(__this, L_0, L_1, &m8953_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m8887 (t1724 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral1600, &m7888_MI);
		m8952(__this, L_0, &m8952_MI);
		return;
	}
}
extern MethodInfo m8888_MI;
extern "C" void m8888 (t1724 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m8953(__this, L_0, L_1, &m8953_MI);
		return;
	}
}
#include "t307.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t307_TI;

#include "t2154.h"
#include "t300.h"
#include "t301.h"
#include "t1193.h"
#include "t1728.h"
#include "t1725.h"
extern TypeInfo t2154_TI;
extern TypeInfo t300_TI;
extern TypeInfo t1725_TI;
#include "t2154MD.h"
#include "t300MD.h"
#include "t1725MD.h"
extern MethodInfo m11913_MI;
extern MethodInfo m8970_MI;
extern MethodInfo m8908_MI;
extern MethodInfo m9044_MI;


extern MethodInfo m8889_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m8889 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m8889_init;
	if (!m8889_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8889_init = true;
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
		m339(L_1, (t2*) &_stringLiteral1584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t2* L_2 = p0;
		t2* L_3 = m4312(L_2, &m4312_MI);
		int32_t L_4 = m2763(L_3, &m2763_MI);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_6 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_7 = m6022(L_5, L_6, &m6022_MI);
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		t570 * L_8 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_8, (t2*) &_stringLiteral1584, &m2949_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		t2* L_9 = p0;
		bool L_10 = m6990(NULL, L_9, &m6990_MI);
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
		t2* L_13 = m7889(NULL, (t2*) &_stringLiteral1601, L_11, &m7889_MI);
		t2154 * L_14 = (t2154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2154_TI));
		m11913(L_14, L_13, &m11913_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0056:
	{
		t2* L_15 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_16 = m8992(NULL, L_15, &m8992_MI);
		V_0 = L_16;
		t2* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_19 = m2777(NULL, L_17, L_18, &m2777_MI);
		if (!L_19)
		{
			goto IL_008c;
		}
	}
	{
		t2* L_20 = V_0;
		bool L_21 = m6990(NULL, L_20, &m6990_MI);
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
		t2* L_24 = m7889(NULL, (t2*) &_stringLiteral1602, L_22, &m7889_MI);
		t1723 * L_25 = (t1723 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1723_TI));
		m8885(L_25, L_24, &m8885_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_008c:
	{
		t2* L_26 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_27 = m8970(NULL, L_26, (&V_1), &m8970_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_31 = m8966(NULL, L_29, L_30, &m8966_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a2:
	{
		return;
	}
}
extern "C" bool m1125 (t9 * __this , t2* p0, MethodInfo* method)
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
		t2* L_2 = m4312(L_1, &m4312_MI);
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_5 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_6 = m6022(L_4, L_5, &m6022_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		bool L_8 = m8973(NULL, L_7, (&V_0), &m8973_MI);
		return L_8;
	}
}
extern MethodInfo m1127_MI;
extern "C" t300 * m1127 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
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
		t300 * L_3 = (t300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t300_TI));
		m8908(L_3, G_B3_2, G_B3_1, G_B3_0, 0, &m8908_MI);
		return L_3;
	}
}
extern MethodInfo m6987_MI;
extern "C" t300 * m6987 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t300 * L_1 = (t300 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t300_TI));
		m8908(L_1, L_0, 3, 1, 1, &m8908_MI);
		return L_1;
	}
}
extern MethodInfo m8890_MI;
extern "C" t1725 * m8890 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1725_TI));
		t1725 * L_1 = (t1725 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1725_TI));
		m9044(L_1, L_0, &m9044_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1193_TI;
#include "t1193MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1721_TI;
#include "t1721MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t301_TI;
#include "t301MD.h"



#include "t1726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1726_TI;
#include "t1726MD.h"

extern TypeInfo t1106_TI;
extern TypeInfo t1107_TI;
extern MethodInfo m7016_MI;
extern MethodInfo m4499_MI;
extern MethodInfo m5782_MI;
extern MethodInfo m4539_MI;
extern MethodInfo m4484_MI;
extern MethodInfo m2551_MI;
extern MethodInfo m8895_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m4483_MI;


extern MethodInfo m8891_MI;
extern "C" void m8891 (t1726 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral1604, &m7888_MI);
		m8952(__this, L_0, &m8952_MI);
		m4499(__this, ((int32_t)-2146232799), &m4499_MI);
		return;
	}
}
extern MethodInfo m8892_MI;
extern "C" void m8892 (t1726 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8952(__this, L_0, &m8952_MI);
		m4499(__this, ((int32_t)-2146232799), &m4499_MI);
		return;
	}
}
extern MethodInfo m8893_MI;
extern "C" void m8893 (t1726 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m8952(__this, L_0, &m8952_MI);
		m4499(__this, ((int32_t)-2146232799), &m4499_MI);
		t2* L_1 = p1;
		__this->f11 = L_1;
		return;
	}
}
extern MethodInfo m8894_MI;
extern "C" void m8894 (t1726 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m8953(__this, L_0, L_1, &m8953_MI);
		t1106 * L_2 = p0;
		t2* L_3 = m5782(L_2, (t2*) &_stringLiteral1605, &m5782_MI);
		__this->f11 = L_3;
		t1106 * L_4 = p0;
		t2* L_5 = m5782(L_4, (t2*) &_stringLiteral1606, &m5782_MI);
		__this->f12 = L_5;
		return;
	}
}
extern TypeInfo* t158_TI_var;
extern "C" t2* m8895 (t1726 * __this, MethodInfo* method)
{
	static bool m8895_init;
	if (!m8895_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m8895_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t907_TI));
		t907 * L_2 = m7011(NULL, &m7011_MI);
		t158* L_3 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_4 = (__this->f11);
		ArrayElementTypeCheck (L_3, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_3, 0)) = (t9 *)L_4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m7016(NULL, L_2, (t2*) &_stringLiteral1603, L_3, &m7016_MI);
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
extern MethodInfo m8896_MI;
extern "C" void m8896 (t1726 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m4539(__this, L_0, L_1, &m4539_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f11);
		m5785(L_2, (t2*) &_stringLiteral1605, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t2* L_5 = (__this->f12);
		m5785(L_4, (t2*) &_stringLiteral1606, L_5, &m5785_MI);
		return;
	}
}
extern MethodInfo m8897_MI;
extern "C" t2* m8897 (t1726 * __this, MethodInfo* method)
{
	t328 * V_0 = {0};
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4484_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_0);
		t328 * L_2 = (t328 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t328_TI));
		m2551(L_2, L_1, &m2551_MI);
		V_0 = L_2;
		t328 * L_3 = V_0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m8895_MI, __this);
		m5792(L_3, (t2*) &_stringLiteral1607, L_4, &m5792_MI);
		t2* L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		t2* L_6 = (__this->f11);
		int32_t L_7 = m2763(L_6, &m2763_MI);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		t328 * L_8 = V_0;
		t2* L_9 = m5845(NULL, &m5845_MI);
		m1207(L_8, L_9, &m1207_MI);
		t328 * L_10 = V_0;
		t2* L_11 = (__this->f11);
		m5792(L_10, (t2*) &_stringLiteral1608, L_11, &m5792_MI);
	}

IL_0057:
	{
		t138 * L_12 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4285_MI, __this);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		t328 * L_13 = V_0;
		t138 * L_14 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4285_MI, __this);
		m5792(L_13, (t2*) &_stringLiteral1609, L_14, &m5792_MI);
	}

IL_0071:
	{
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4483_MI, __this);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		t328 * L_16 = V_0;
		t2* L_17 = m5845(NULL, &m5845_MI);
		m1207(L_16, L_17, &m1207_MI);
		t328 * L_18 = V_0;
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4483_MI, __this);
		m1207(L_18, L_19, &m1207_MI);
	}

IL_0092:
	{
		t328 * L_20 = V_0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1209_MI, L_20);
		return L_21;
	}
}
#include "t1727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1727_TI;
#include "t1727MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1728_TI;
#include "t1728MD.h"



#include "t1729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1729_TI;
#include "t1729MD.h"



extern MethodInfo m8898_MI;
extern "C" void m8898 (t1729 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8899_MI;
extern "C" int32_t m8899 (t1729 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8899((t1729 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 *, t9 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_t1729(Il2CppObject* delegate, t737* p0, int32_t p1, int32_t p2)
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
extern MethodInfo m8900_MI;
extern "C" t9 * m8900 (t1729 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8901_MI;
extern "C" int32_t m8901 (t1729 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1730_TI;
#include "t1730MD.h"



extern MethodInfo m8902_MI;
extern "C" void m8902 (t1730 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m8903_MI;
extern "C" void m8903 (t1730 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m8903((t1730 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, int32_t p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t1730(Il2CppObject* delegate, t737* p0, int32_t p1, int32_t p2)
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
extern MethodInfo m8904_MI;
extern "C" t9 * m8904 (t1730 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	__d_args[2] = Box(InitializedTypeInfo(&t125_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m8905_MI;
extern "C" void m8905 (t1730 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif

#include "t1505.h"
#include "t1733.h"
#include "t1889.h"
#include "t1731.h"
#include "t895.h"
extern TypeInfo t303_TI;
extern TypeInfo t1505_TI;
extern TypeInfo t476_TI;
extern TypeInfo t477_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t1731_TI;
extern TypeInfo t895_TI;
#include "t58MD.h"
#include "t1889MD.h"
#include "t1731MD.h"
#include "t895MD.h"
extern MethodInfo m4502_MI;
extern MethodInfo m8913_MI;
extern MethodInfo m8933_MI;
extern MethodInfo m8981_MI;
extern MethodInfo m8937_MI;
extern MethodInfo m8925_MI;
extern MethodInfo m7052_MI;
extern MethodInfo m8972_MI;
extern MethodInfo m8936_MI;
extern MethodInfo m8980_MI;
extern MethodInfo m8909_MI;
extern MethodInfo m8910_MI;
extern MethodInfo m8938_MI;
extern MethodInfo m2834_MI;
extern MethodInfo m8976_MI;
extern MethodInfo m6988_MI;
extern MethodInfo m8914_MI;
extern MethodInfo m8911_MI;
extern MethodInfo m8935_MI;
extern MethodInfo m8934_MI;
extern MethodInfo m8912_MI;
extern MethodInfo m8932_MI;
extern MethodInfo m8919_MI;
extern MethodInfo m8920_MI;
extern MethodInfo m8918_MI;
extern MethodInfo m8929_MI;
extern MethodInfo m7029_MI;
extern MethodInfo m7031_MI;
extern MethodInfo m9933_MI;
extern MethodInfo m8923_MI;
extern MethodInfo m8924_MI;
extern MethodInfo m8922_MI;
extern MethodInfo m8979_MI;
extern MethodInfo m8930_MI;
extern MethodInfo m7040_MI;
extern MethodInfo m8939_MI;
extern MethodInfo m7051_MI;
extern MethodInfo m8931_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m7060_MI;
extern MethodInfo m7041_MI;
extern MethodInfo m8926_MI;
extern MethodInfo m8982_MI;
extern MethodInfo m8915_MI;
extern MethodInfo m8928_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m8977_MI;
extern MethodInfo m8978_MI;
extern MethodInfo m8951_MI;


extern MethodInfo m8906_MI;
extern "C" void m8906 (t300 * __this, t58 p0, int32_t p1, bool p2, int32_t p3, bool p4, bool p5, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		__this->f13 = (t2*) &_stringLiteral1613;
		m7052(__this, &m7052_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_0 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		__this->f14 = L_0;
		t58 L_1 = p0;
		t58 L_2 = (__this->f14);
		bool L_3 = m4502(NULL, L_1, L_2, &m4502_MI);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		t2* L_4 = m7888(NULL, (t2*) &_stringLiteral1615, &m7888_MI);
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_5, (t2*) &_stringLiteral1614, L_4, &m5761_MI);
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
		t909 * L_8 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_8, (t2*) &_stringLiteral1616, &m5763_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0052:
	{
		t58 L_9 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_10 = m8972(NULL, L_9, (&V_0), &m8972_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_14 = m8966(NULL, L_12, L_13, &m8966_MI);
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
		t1555 * L_16 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_16, (t2*) &_stringLiteral1617, &m8952_MI);
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
		m8936(__this, L_22, L_23, &m8936_MI);
		bool L_24 = (__this->f4);
		if (!L_24)
		{
			goto IL_00e4;
		}
	}
	{
		t58 L_25 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int64_t L_26 = m8980(NULL, L_25, (((int64_t)0)), 1, (&V_0), &m8980_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_30 = m8966(NULL, L_28, L_29, &m8966_MI);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00e4:
	{
		__this->f5 = (((int64_t)0));
		return;
	}
}
extern MethodInfo m8907_MI;
extern "C" void m8907 (t300 * __this, t2* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t G_B2_0 = {0};
	int32_t G_B2_1 = {0};
	t2* G_B2_2 = {0};
	t300 * G_B2_3 = {0};
	int32_t G_B1_0 = {0};
	int32_t G_B1_1 = {0};
	t2* G_B1_2 = {0};
	t300 * G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = {0};
	int32_t G_B3_2 = {0};
	t2* G_B3_3 = {0};
	t300 * G_B3_4 = {0};
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
		m8909(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, ((int32_t)8192), 0, 0, &m8909_MI);
		return;
	}
}
extern "C" void m8908 (t300 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		m8910(__this, L_0, L_1, L_2, L_3, ((int32_t)8192), 0, 0, &m8910_MI);
		return;
	}
}
extern "C" void m8909 (t300 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, bool p6, MethodInfo* method)
{
	bool G_B2_0 = false;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = {0};
	int32_t G_B2_3 = {0};
	int32_t G_B2_4 = {0};
	t2* G_B2_5 = {0};
	t300 * G_B2_6 = {0};
	bool G_B1_0 = false;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = {0};
	int32_t G_B1_3 = {0};
	int32_t G_B1_4 = {0};
	t2* G_B1_5 = {0};
	t300 * G_B1_6 = {0};
	int32_t G_B3_0 = 0;
	bool G_B3_1 = false;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = {0};
	int32_t G_B3_4 = {0};
	int32_t G_B3_5 = {0};
	t2* G_B3_6 = {0};
	t300 * G_B3_7 = {0};
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
		m8910(G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, &m8910_MI);
		return;
	}
}
extern "C" void m8910 (t300 * __this, t2* p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, bool p5, int32_t p6, MethodInfo* method)
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
		__this->f13 = (t2*) &_stringLiteral1613;
		m7052(__this, &m7052_MI);
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1584, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001f:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral1585, &m2949_MI);
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
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_7, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1469, &m4402_MI);
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
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_11, (t2*) &_stringLiteral1619, (t2*) &_stringLiteral1620, &m5761_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_006c:
	{
		t909 * L_12 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_12, (t2*) &_stringLiteral1619, (t2*) &_stringLiteral1620, &m4402_MI);
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
		t1717 * L_16 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_16, (t2*) &_stringLiteral1621, &m8821_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0093:
	{
		t909 * L_17 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_17, (t2*) &_stringLiteral1616, (t2*) &_stringLiteral1620, &m4402_MI);
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
		t1717 * L_21 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_21, (t2*) &_stringLiteral1622, &m8821_MI);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		t909 * L_22 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_22, (t2*) &_stringLiteral1623, (t2*) &_stringLiteral1620, &m4402_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_00cc:
	{
		t2* L_23 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t318* L_24 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f0;
		int32_t L_25 = m6022(L_23, L_24, &m6022_MI);
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_00e5;
		}
	}
	{
		t570 * L_26 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_26, (t2*) &_stringLiteral1624, &m2949_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00e5:
	{
		t2* L_27 = p0;
		bool L_28 = m6990(NULL, L_27, &m6990_MI);
		if (!L_28)
		{
			goto IL_010c;
		}
	}
	{
		t2* L_29 = m7888(NULL, (t2*) &_stringLiteral1625, &m7888_MI);
		V_0 = L_29;
		t2* L_30 = V_0;
		t2* L_31 = p0;
		t2* L_32 = m8938(__this, L_31, 0, &m8938_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = m590(NULL, L_30, L_32, &m590_MI);
		t2154 * L_34 = (t2154 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2154_TI));
		m11913(L_34, L_33, &m11913_MI);
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
		t570 * L_37 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_37, (t2*) &_stringLiteral1626, &m2949_MI);
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
		t2* L_41 = m7888(NULL, (t2*) &_stringLiteral1627, &m7888_MI);
		V_1 = L_41;
		t2* L_42 = V_1;
		int32_t L_43 = p2;
		int32_t L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t1193_TI), &L_44);
		int32_t L_46 = p1;
		int32_t L_47 = L_46;
		t9 * L_48 = Box(InitializedTypeInfo(&t301_TI), &L_47);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_49 = m1251(NULL, L_42, L_45, L_48, &m1251_MI);
		t570 * L_50 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_50, L_49, &m2949_MI);
		il2cpp_codegen_raise_exception(L_50);
	}

IL_0151:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		uint16_t L_51 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)47))))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_52 = p0;
		int32_t L_53 = m2834(L_52, ((int32_t)47), &m2834_MI);
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		t2* L_54 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_55 = m8995(NULL, L_54, &m8995_MI);
		t2* L_56 = m8992(NULL, L_55, &m8992_MI);
		V_2 = L_56;
		goto IL_017a;
	}

IL_0173:
	{
		t2* L_57 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_58 = m8992(NULL, L_57, &m8992_MI);
		V_2 = L_58;
	}

IL_017a:
	{
		t2* L_59 = V_2;
		int32_t L_60 = m2763(L_59, &m2763_MI);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_61 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_62 = m8995(NULL, L_61, &m8995_MI);
		V_3 = L_62;
		t2* L_63 = V_3;
		bool L_64 = m6990(NULL, L_63, &m6990_MI);
		if (L_64)
		{
			goto IL_01bc;
		}
	}
	{
		t2* L_65 = m7888(NULL, (t2*) &_stringLiteral1602, &m7888_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_69 = m8995(NULL, L_68, &m8995_MI);
		G_B41_0 = L_69;
	}

IL_01ab:
	{
		V_5 = G_B41_0;
		t2* L_70 = V_4;
		t2* L_71 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_72 = m590(NULL, L_70, L_71, &m590_MI);
		t1717 * L_73 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_73, L_72, &m8821_MI);
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
		bool L_79 = m1125(NULL, L_78, &m1125_MI);
		if (L_79)
		{
			goto IL_01f8;
		}
	}
	{
		t2* L_80 = m7888(NULL, (t2*) &_stringLiteral1628, &m7888_MI);
		V_6 = L_80;
		t2* L_81 = p0;
		t2* L_82 = m8937(__this, L_81, &m8937_MI);
		V_7 = L_82;
		t2* L_83 = V_6;
		t2* L_84 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_85 = m590(NULL, L_83, L_84, &m590_MI);
		t1717 * L_86 = (t1717 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1717_TI));
		m8821(L_86, L_85, &m8821_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_94 = m8976(NULL, L_89, L_90, L_91, L_92, L_93, (&V_8), &m8976_MI);
		__this->f14 = L_94;
		t58 L_95 = (__this->f14);
		t58 L_96 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_97 = m4502(NULL, L_95, L_96, &m4502_MI);
		if (!L_97)
		{
			goto IL_0238;
		}
	}
	{
		t2* L_98 = p0;
		t2* L_99 = m8937(__this, L_98, &m8937_MI);
		int32_t L_100 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_101 = m8966(NULL, L_99, L_100, &m8966_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_105 = m8972(NULL, L_104, (&V_8), &m8972_MI);
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
		int64_t L_110 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6988_MI, __this);
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
		m8936(__this, L_115, 0, &m8936_MI);
		int32_t L_116 = p1;
		if ((!(((uint32_t)L_116) == ((uint32_t)6))))
		{
			goto IL_02eb;
		}
	}
	{
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8925_MI, __this, (((int64_t)0)), 2);
		int64_t L_117 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8914_MI, __this);
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
extern "C" bool m8911 (t300 * __this, MethodInfo* method)
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
extern "C" bool m8912 (t300 * __this, MethodInfo* method)
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
extern "C" bool m8913 (t300 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int64_t m6988 (t300 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int64_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1611, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		m8933(__this, &m8933_MI);
		t58 L_6 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int64_t L_7 = m8981(NULL, L_6, (&V_0), &m8981_MI);
		V_1 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8937(__this, L_9, &m8937_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_12 = m8966(NULL, L_10, L_11, &m8966_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_005a:
	{
		int64_t L_13 = V_1;
		return L_13;
	}
}
extern "C" int64_t m8914 (t300 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1611, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		int64_t L_6 = (__this->f12);
		int32_t L_7 = (__this->f10);
		return ((int64_t)((int64_t)L_6+(int64_t)(((int64_t)L_7))));
	}
}
extern "C" void m8915 (t300 * __this, int64_t p0, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1611, &m5776_MI);
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
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_7, (t2*) &_stringLiteral1612, &m5763_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0040:
	{
		int64_t L_8 = p0;
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(&m8925_MI, __this, L_8, 0);
		return;
	}
}
extern MethodInfo m8916_MI;
extern "C" int32_t m8916 (t300 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8911_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1629, &m5776_MI);
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
		t737* L_8 = (__this->f7);
		int32_t L_9 = m8935(__this, L_7, L_8, 0, 1, &m8935_MI);
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
		t737* L_11 = (__this->f7);
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
		m8934(__this, &m8934_MI);
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
		t737* L_16 = (__this->f7);
		int32_t L_17 = (__this->f10);
		int32_t L_18 = L_17;
		V_1 = L_18;
		__this->f10 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_20));
	}
}
extern MethodInfo m8917_MI;
extern "C" void m8917 (t300 * __this, uint8_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8912_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1630, &m5776_MI);
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
		m8932(__this, &m8932_MI);
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
		t737* L_9 = (__this->f7);
		uint8_t L_10 = p0;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, 0)) = (uint8_t)L_10;
		__this->f11 = 1;
		__this->f9 = 1;
		m8932(__this, &m8932_MI);
		return;
	}

IL_006a:
	{
		t737* L_11 = (__this->f7);
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
extern MethodInfo m6989_MI;
extern "C" int32_t m6989 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t9 * V_1 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t737* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral326, &m339_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8911_MI, __this);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_7, (t2*) &_stringLiteral1629, &m5776_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		t737* L_8 = p0;
		V_0 = (((int32_t)(((t121 *)L_8)->max_length)));
		int32_t L_9 = p1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		t909 * L_10 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_10, (t2*) &_stringLiteral982, (t2*) &_stringLiteral808, &m4402_MI);
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
		t909 * L_12 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_12, (t2*) &_stringLiteral489, (t2*) &_stringLiteral808, &m4402_MI);
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
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_15, (t2*) &_stringLiteral1631, &m2949_MI);
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
		t570 * L_19 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_19, (t2*) &_stringLiteral1632, &m2949_MI);
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
		t737* L_21 = p0;
		int32_t L_22 = p1;
		int32_t L_23 = p2;
		t9 * L_24 = (t9 *)VirtFuncInvoker5< t9 *, t737*, int32_t, int32_t, t477 *, t9 * >::Invoke(&m8919_MI, __this, L_21, L_22, L_23, (t477 *)NULL, NULL);
		V_1 = L_24;
		t9 * L_25 = V_1;
		int32_t L_26 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8920_MI, __this, L_25);
		return L_26;
	}

IL_00a6:
	{
		t737* L_27 = p0;
		int32_t L_28 = p1;
		int32_t L_29 = p2;
		int32_t L_30 = m8918(__this, L_27, L_28, L_29, &m8918_MI);
		return L_30;
	}
}
extern "C" int32_t m8918 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		t737* L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = m8929(__this, L_0, L_1, L_2, &m8929_MI);
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
		m8932(__this, &m8932_MI);
		t58 L_12 = (__this->f14);
		t737* L_13 = p0;
		int32_t L_14 = p1;
		int32_t L_15 = V_0;
		int32_t L_16 = p2;
		int32_t L_17 = m8935(__this, L_12, L_13, ((int32_t)((int32_t)L_14+(int32_t)L_15)), L_16, &m8935_MI);
		V_1 = L_17;
		int64_t L_18 = (__this->f12);
		int32_t L_19 = V_1;
		__this->f12 = ((int64_t)((int64_t)L_18+(int64_t)(((int64_t)L_19))));
		goto IL_0060;
	}

IL_004e:
	{
		m8934(__this, &m8934_MI);
		t737* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_0;
		int32_t L_23 = p2;
		int32_t L_24 = m8929(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8929_MI);
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
extern "C" t9 * m8919 (t300 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	t1729 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8911_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1633, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t737* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_9, (t2*) &_stringLiteral1634, (t2*) &_stringLiteral1635, &m4402_MI);
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
		t909 * L_11 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_11, (t2*) &_stringLiteral982, (t2*) &_stringLiteral1635, &m4402_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t737* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_15, (t2*) &_stringLiteral1636, &m2949_MI);
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
		t737* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t477 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m7029(__this, L_17, L_18, L_19, L_20, L_21, &m7029_MI);
		return L_22;
	}

IL_008f:
	{
		t58 L_23 = { &m8918_MI };
		t1729 * L_24 = (t1729 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1729_TI));
		m8898(L_24, __this, L_23, &m8898_MI);
		V_0 = L_24;
		t1729 * L_25 = V_0;
		t737* L_26 = p0;
		int32_t L_27 = p1;
		int32_t L_28 = p2;
		t477 * L_29 = p3;
		t9 * L_30 = p4;
		t9 * L_31 = (t9 *)VirtFuncInvoker5< t9 *, t737*, int32_t, int32_t, t477 *, t9 * >::Invoke(&m8900_MI, L_25, L_26, L_27, L_28, L_29, L_30);
		return L_31;
	}
}
extern "C" int32_t m8920 (t300 * __this, t9 * p0, MethodInfo* method)
{
	t1889 * V_0 = {0};
	t1729 * V_1 = {0};
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
		bool L_2 = (__this->f3);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_3 = p0;
		int32_t L_4 = m7031(__this, L_3, &m7031_MI);
		return L_4;
	}

IL_001e:
	{
		t9 * L_5 = p0;
		V_0 = ((t1889 *)IsInst(L_5, InitializedTypeInfo(&t1889_TI)));
		t1889 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		t570 * L_7 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_7, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0038:
	{
		t1889 * L_8 = V_0;
		t9 * L_9 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9933_MI, L_8);
		V_1 = ((t1729 *)IsInst(L_9, InitializedTypeInfo(&t1729_TI)));
		t1729 * L_10 = V_1;
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		t570 * L_11 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_11, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0057:
	{
		t1729 * L_12 = V_1;
		t9 * L_13 = p0;
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m8901_MI, L_12, L_13);
		return L_14;
	}
}
extern MethodInfo m8921_MI;
extern "C" void m8921 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		t737* L_4 = p0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		t132 * L_5 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_5, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_7 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_7, (t2*) &_stringLiteral982, (t2*) &_stringLiteral808, &m4402_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_9, (t2*) &_stringLiteral489, (t2*) &_stringLiteral808, &m4402_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		int32_t L_10 = p1;
		t737* L_11 = p0;
		int32_t L_12 = p2;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_0066;
		}
	}
	{
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_13, (t2*) &_stringLiteral1632, &m2949_MI);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0066:
	{
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8912_MI, __this);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		t169 * L_15 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_15, (t2*) &_stringLiteral1630, &m5776_MI);
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
		t737* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t9 * L_20 = (t9 *)VirtFuncInvoker5< t9 *, t737*, int32_t, int32_t, t477 *, t9 * >::Invoke(&m8923_MI, __this, L_17, L_18, L_19, (t477 *)NULL, NULL);
		V_0 = L_20;
		t9 * L_21 = V_0;
		VirtActionInvoker1< t9 * >::Invoke(&m8924_MI, __this, L_21);
		return;
	}

IL_0095:
	{
		t737* L_22 = p0;
		int32_t L_23 = p1;
		int32_t L_24 = p2;
		m8922(__this, L_22, L_23, L_24, &m8922_MI);
		return;
	}
}
extern "C" void m8922 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		m8932(__this, &m8932_MI);
		int32_t L_2 = p2;
		V_1 = L_2;
		goto IL_0045;
	}

IL_0013:
	{
		t58 L_3 = (__this->f14);
		t737* L_4 = p0;
		int32_t L_5 = p1;
		int32_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_7 = m8979(NULL, L_3, L_4, L_5, L_6, (&V_0), &m8979_MI);
		V_2 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		t2* L_9 = (__this->f13);
		t2* L_10 = m8937(__this, L_9, &m8937_MI);
		int32_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_12 = m8966(NULL, L_10, L_11, &m8966_MI);
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
		t737* L_20 = p0;
		int32_t L_21 = p1;
		int32_t L_22 = V_3;
		int32_t L_23 = p2;
		int32_t L_24 = m8930(__this, L_20, ((int32_t)((int32_t)L_21+(int32_t)L_22)), L_23, &m8930_MI);
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
		m8932(__this, &m8932_MI);
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
extern "C" t9 * m8923 (t300 * __this, t737* p0, int32_t p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	t1731 * V_0 = {0};
	t895 * V_1 = {0};
	t1730 * V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8912_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1639, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		t737* L_6 = p0;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		t132 * L_7 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_7, (t2*) &_stringLiteral326, &m339_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_9, (t2*) &_stringLiteral1634, (t2*) &_stringLiteral1635, &m4402_MI);
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
		t909 * L_11 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_11, (t2*) &_stringLiteral982, (t2*) &_stringLiteral1635, &m4402_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0066:
	{
		int32_t L_12 = p2;
		t737* L_13 = p0;
		int32_t L_14 = p1;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_13)->max_length)))-(int32_t)L_14)))))
		{
			goto IL_0079;
		}
	}
	{
		t570 * L_15 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_15, (t2*) &_stringLiteral1640, &m2949_MI);
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
		t737* L_17 = p0;
		int32_t L_18 = p1;
		int32_t L_19 = p2;
		t477 * L_20 = p3;
		t9 * L_21 = p4;
		t9 * L_22 = m7040(__this, L_17, L_18, L_19, L_20, L_21, &m7040_MI);
		return L_22;
	}

IL_008f:
	{
		t477 * L_23 = p3;
		t9 * L_24 = p4;
		t1731 * L_25 = (t1731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1731_TI));
		m8939(L_25, L_23, L_24, &m8939_MI);
		V_0 = L_25;
		t1731 * L_26 = V_0;
		L_26->f6 = (-1);
		t1731 * L_27 = V_0;
		int32_t L_28 = p2;
		L_27->f4 = L_28;
		t1731 * L_29 = V_0;
		int32_t L_30 = p2;
		L_29->f5 = L_30;
		bool L_31 = (__this->f11);
		if (!L_31)
		{
			goto IL_00dc;
		}
	}
	{
		t895 * L_32 = (t895 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t895_TI));
		m7051(L_32, &m7051_MI);
		V_1 = L_32;
		t895 * L_33 = V_1;
		m8931(__this, L_33, &m8931_MI);
		t895 * L_34 = V_1;
		t737* L_35 = p0;
		int32_t L_36 = p1;
		int32_t L_37 = p2;
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_34, L_35, L_36, L_37);
		p1 = 0;
		t895 * L_38 = V_1;
		int64_t L_39 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m7060_MI, L_38);
		p2 = (((int32_t)L_39));
	}

IL_00dc:
	{
		t58 L_40 = { &m8922_MI };
		t1730 * L_41 = (t1730 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1730_TI));
		m8902(L_41, __this, L_40, &m8902_MI);
		V_2 = L_41;
		t1730 * L_42 = V_2;
		t737* L_43 = p0;
		int32_t L_44 = p1;
		int32_t L_45 = p2;
		t477 * L_46 = p3;
		t9 * L_47 = p4;
		t9 * L_48 = (t9 *)VirtFuncInvoker5< t9 *, t737*, int32_t, int32_t, t477 *, t9 * >::Invoke(&m8904_MI, L_42, L_43, L_44, L_45, L_46, L_47);
		return L_48;
	}
}
extern "C" void m8924 (t300 * __this, t9 * p0, MethodInfo* method)
{
	t1889 * V_0 = {0};
	t1730 * V_1 = {0};
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
		bool L_2 = (__this->f3);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_3 = p0;
		m7041(__this, L_3, &m7041_MI);
		return;
	}

IL_001e:
	{
		t9 * L_4 = p0;
		V_0 = ((t1889 *)IsInst(L_4, InitializedTypeInfo(&t1889_TI)));
		t1889 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_6, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t1889 * L_7 = V_0;
		t9 * L_8 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9933_MI, L_7);
		V_1 = ((t1730 *)IsInst(L_8, InitializedTypeInfo(&t1730_TI)));
		t1730 * L_9 = V_1;
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		t570 * L_10 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_10, (t2*) &_stringLiteral1638, (t2*) &_stringLiteral1637, &m5761_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0057:
	{
		t1730 * L_11 = V_1;
		t9 * L_12 = p0;
		VirtActionInvoker1< t9 * >::Invoke(&m8905_MI, L_11, L_12);
		return;
	}
}
extern "C" int64_t m8925 (t300 * __this, int64_t p0, int32_t p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1611, &m5776_MI);
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
		int64_t L_8 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m6988_MI, __this);
		int64_t L_9 = p0;
		V_0 = ((int64_t)((int64_t)L_8+(int64_t)L_9));
		goto IL_0070;
	}

IL_0051:
	{
		int64_t L_10 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8914_MI, __this);
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
		t570 * L_13 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m5761(L_13, (t2*) &_stringLiteral1641, (t2*) &_stringLiteral1642, &m5761_MI);
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
		t1555 * L_15 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_15, (t2*) &_stringLiteral1643, &m8952_MI);
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
		t1555 * L_18 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8952(L_18, (t2*) &_stringLiteral1644, &m8952_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0094:
	{
		m8932(__this, &m8932_MI);
		t58 L_19 = (__this->f14);
		int64_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int64_t L_21 = m8980(NULL, L_19, L_20, 0, (&V_1), &m8980_MI);
		__this->f12 = L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_00c5;
		}
	}
	{
		t2* L_23 = (__this->f13);
		t2* L_24 = m8937(__this, L_23, &m8937_MI);
		int32_t L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_26 = m8966(NULL, L_24, L_25, &m8966_MI);
		il2cpp_codegen_raise_exception(L_26);
	}

IL_00c5:
	{
		int64_t L_27 = (__this->f12);
		return L_27;
	}
}
extern MethodInfo m1133_MI;
extern "C" void m1133 (t300 * __this, int64_t p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		t169 * L_5 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_5, (t2*) &_stringLiteral1611, &m5776_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0030:
	{
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8912_MI, __this);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		t169 * L_7 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_7, (t2*) &_stringLiteral1645, &m5776_MI);
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
		t909 * L_9 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m5763(L_9, (t2*) &_stringLiteral1646, &m5763_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0053:
	{
		VirtActionInvoker0::Invoke(&m8926_MI, __this);
		t58 L_10 = (__this->f14);
		int64_t L_11 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		m8982(NULL, L_10, L_11, (&V_0), &m8982_MI);
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		t2* L_13 = (__this->f13);
		t2* L_14 = m8937(__this, L_13, &m8937_MI);
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_16 = m8966(NULL, L_14, L_15, &m8966_MI);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_007e:
	{
		int64_t L_17 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&m8914_MI, __this);
		int64_t L_18 = p0;
		if ((((int64_t)L_17) <= ((int64_t)L_18)))
		{
			goto IL_008e;
		}
	}
	{
		int64_t L_19 = p0;
		VirtActionInvoker1< int64_t >::Invoke(&m8915_MI, __this, L_19);
	}

IL_008e:
	{
		return;
	}
}
extern "C" void m8926 (t300 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4502(NULL, L_0, L_1, &m4502_MI);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, (t2*) &_stringLiteral1610, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		m8932(__this, &m8932_MI);
		return;
	}
}
extern MethodInfo m8927_MI;
extern "C" void m8927 (t300 * __this, MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(&m8928_MI, __this, 0);
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
extern "C" void m8928 (t300 * __this, bool p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_1 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
		bool L_2 = m4346(NULL, L_0, L_1, &m4346_MI);
		if (!L_2)
		{
			goto IL_0058;
		}
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		m8932(__this, &m8932_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		m8977(NULL, L_5, (&V_2), &m8977_MI);
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		t2* L_7 = (__this->f13);
		t2* L_8 = m8937(__this, L_7, &m8937_MI);
		int32_t L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_10 = m8966(NULL, L_8, L_9, &m8966_MI);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t58 L_11 = ((t1734_SFs*)InitializedTypeInfo(&t1734_TI)->static_fields)->f1;
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
		__this->f7 = (t737*)NULL;
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
		m6937(NULL, __this, &m6937_MI);
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
extern "C" int32_t m8929 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t737* L_6 = (__this->f7);
		int32_t L_7 = (__this->f10);
		t737* L_8 = p0;
		int32_t L_9 = p1;
		int32_t L_10 = p2;
		m5834(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5834_MI);
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
extern "C" int32_t m8930 (t300 * __this, t737* p0, int32_t p1, int32_t p2, MethodInfo* method)
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
		t737* L_6 = p0;
		int32_t L_7 = p1;
		t737* L_8 = (__this->f7);
		int32_t L_9 = (__this->f10);
		int32_t L_10 = p2;
		m5834(NULL, (t121 *)(t121 *)L_6, L_7, (t121 *)(t121 *)L_8, L_9, L_10, &m5834_MI);
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
extern "C" void m8931 (t300 * __this, t302 * p0, MethodInfo* method)
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
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m8913_MI, __this);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		t58 L_2 = (__this->f14);
		int64_t L_3 = (__this->f12);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		m8980(NULL, L_2, L_3, 0, (&V_0), &m8980_MI);
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t2* L_5 = (__this->f13);
		t2* L_6 = m8937(__this, L_5, &m8937_MI);
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_8 = m8966(NULL, L_6, L_7, &m8966_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003e:
	{
		t302 * L_9 = p0;
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		t58 L_10 = (__this->f14);
		t737* L_11 = (__this->f7);
		int32_t L_12 = (__this->f9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		m8979(NULL, L_10, L_11, 0, L_12, (&V_0), &m8979_MI);
		int32_t L_13 = V_0;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		t2* L_14 = (__this->f13);
		t2* L_15 = m8937(__this, L_14, &m8937_MI);
		int32_t L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_17 = m8966(NULL, L_15, L_16, &m8966_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0072:
	{
		goto IL_0087;
	}

IL_0074:
	{
		t302 * L_18 = p0;
		t737* L_19 = (__this->f7);
		int32_t L_20 = (__this->f9);
		VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m7023_MI, L_18, L_19, 0, L_20);
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
extern "C" void m8932 (t300 * __this, MethodInfo* method)
{
	{
		m8931(__this, (t302 *)NULL, &m8931_MI);
		return;
	}
}
extern "C" void m8933 (t300 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		m8931(__this, (t302 *)NULL, &m8931_MI);
	}

IL_000f:
	{
		return;
	}
}
extern "C" void m8934 (t300 * __this, MethodInfo* method)
{
	{
		m8931(__this, (t302 *)NULL, &m8931_MI);
		t58 L_0 = (__this->f14);
		t737* L_1 = (__this->f7);
		int32_t L_2 = (__this->f8);
		int32_t L_3 = m8935(__this, L_0, L_1, 0, L_2, &m8935_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" int32_t m8935 (t300 * __this, t58 p0, t737* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	{
		V_1 = 0;
		t58 L_0 = p0;
		t737* L_1 = p1;
		int32_t L_2 = p2;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		int32_t L_4 = m8978(NULL, L_0, L_1, L_2, L_3, (&V_0), &m8978_MI);
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
		t2* L_8 = m8937(__this, L_7, &m8937_MI);
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1734_TI));
		t138 * L_10 = m8966(NULL, L_8, L_9, &m8966_MI);
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
		t1555 * L_12 = (t1555 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1555_TI));
		m8951(L_12, &m8951_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0038:
	{
		int32_t L_13 = V_1;
		return L_13;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" void m8936 (t300 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	static bool m8936_init;
	if (!m8936_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m8936_init = true;
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
		__this->f7 = ((t737*)SZArrayNew(t737_TI_var, 1));
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
		t909 * L_2 = (t909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t909_TI));
		m4402(L_2, (t2*) &_stringLiteral1618, (t2*) &_stringLiteral1469, &m4402_MI);
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
		__this->f7 = ((t737*)SZArrayNew(t737_TI_var, L_4));
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
extern "C" t2* m8937 (t300 * __this, t2* p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_2 = m8994(NULL, L_1, &m8994_MI);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		t2* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_4 = m8995(NULL, L_3, &m8995_MI);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
extern "C" t2* m8938 (t300 * __this, t2* p0, bool p1, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_2 = m8994(NULL, L_1, &m8994_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t2* L_5 = m8995(NULL, L_4, &m8995_MI);
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
