#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1819.h"
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
extern TypeInfo t1819_TI;
#include "t1819MD.h"

#include "t122.h"
#include "t1820.h"
#include "t1821.h"
#include "mscorlib_ArrayTypes.h"
#include "t126.h"
#include "t124.h"

#include "t121.h"

extern MethodInfo m9666_MI;
extern "C" void m9666 (t9 * __this , t1820 * p0, t1819 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m9666_ftn) (t1820 *, t1819 *, int32_t);
	static m9666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9666_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9667_MI;
extern "C" t152* m9667 (t9 * __this , t1820 * p0, bool p1, MethodInfo* method)
{
	typedef t152* (*m9667_ftn) (t1820 *, bool);
	static m9667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9667_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1821_TI;
#include "t1821MD.h"



#include "t1822.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1822_TI;
#include "t1822MD.h"

#include "t9.h"
#include "t58.h"
#include "t470.h"


extern MethodInfo m9668_MI;
extern "C" void m9668 (t1822 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9669_MI;
extern "C" t9 * m9669 (t1822 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9669((t1822 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t9 * pinvoke_delegate_wrapper_t1822(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9670_MI;
extern "C" t9 * m9670 (t1822 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9671_MI;
extern "C" t9 * m9671 (t1822 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1820_TI;
#include "t1820MD.h"

#include "t1793.h"
#include "t828.h"
#include "t924.h"
#include "t914.h"
#include "t2.h"
#include "t125.h"
#include "t560.h"
#include "t127.h"
#include "t293.h"
#include "t2123.h"
#include "t925.h"
#include "t933.h"
#include "t901.h"
#include "t2033.h"
#include "t563.h"
#include "t1825.h"
#include "t138.h"
#include "t1100.h"
#include "t1101.h"
#include "t1572.h"
extern TypeInfo t828_TI;
extern TypeInfo t126_TI;
extern TypeInfo t914_TI;
extern TypeInfo t928_TI;
extern TypeInfo t924_TI;
extern TypeInfo t124_TI;
extern TypeInfo t1570_TI;
extern TypeInfo t2129_TI;
extern TypeInfo t152_TI;
extern TypeInfo t560_TI;
extern TypeInfo t2123_TI;
extern TypeInfo t2_TI;
extern TypeInfo t925_TI;
extern TypeInfo t9_TI;
extern TypeInfo t933_TI;
extern TypeInfo t158_TI;
extern TypeInfo t901_TI;
extern TypeInfo t563_TI;
extern TypeInfo t1825_TI;
extern TypeInfo t2033_TI;
extern TypeInfo t121_TI;
extern TypeInfo t122_TI;
extern TypeInfo t125_TI;
#include "t828MD.h"
#include "t914MD.h"
#include "t924MD.h"
#include "t837MD.h"
#include "t121MD.h"
#include "t2129MD.h"
#include "t126MD.h"
#include "t560MD.h"
#include "t293MD.h"
#include "t2123MD.h"
#include "t2MD.h"
#include "t563MD.h"
#include "t1825MD.h"
#include "t1809MD.h"
extern Il2CppType t1570_0_0_0;
extern Il2CppType t928_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2177_0_0_0;
extern Il2CppType t2178_0_0_0;
extern Il2CppType t1820_0_0_0;
extern Il2CppType t1822_0_0_0;
extern Il2CppType t158_0_0_0;
extern MethodInfo m9673_MI;
extern MethodInfo m9553_MI;
extern MethodInfo m4423_MI;
extern MethodInfo m4424_MI;
extern MethodInfo m9713_MI;
extern MethodInfo m4390_MI;
extern MethodInfo m5940_MI;
extern MethodInfo m9698_MI;
extern MethodInfo m11606_MI;
extern MethodInfo m11605_MI;
extern MethodInfo m11604_MI;
extern MethodInfo m4389_MI;
extern MethodInfo m329_MI;
extern MethodInfo m4452_MI;
extern MethodInfo m4471_MI;
extern MethodInfo m7610_MI;
extern MethodInfo m11577_MI;
extern MethodInfo m7782_MI;
extern MethodInfo m9554_MI;
extern MethodInfo m7609_MI;
extern MethodInfo m9690_MI;
extern MethodInfo m9682_MI;
extern MethodInfo m9680_MI;
extern MethodInfo m399_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m9728_MI;
extern MethodInfo m9684_MI;
extern MethodInfo m5902_MI;
extern MethodInfo m9677_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m9678_MI;
extern MethodInfo m9692_MI;
extern MethodInfo m9534_MI;


extern MethodInfo m9672_MI;
extern "C" void m9672 (t1820 * __this, MethodInfo* method)
{
	{
		m9713(__this, &m9713_MI);
		return;
	}
}
extern "C" void m9673 (t1820 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		int32_t L_1 = p0;
		int32_t L_2 = p0;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		t1819 * L_3 = &(__this->f2);
		int32_t L_4 = p0;
		m9666(NULL, __this, L_3, L_4, &m9666_MI);
		int32_t L_5 = (__this->f3);
		int32_t L_6 = p0;
		__this->f3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m9674_MI;
extern "C" int32_t m9674 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, 1, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		int32_t L_1 = (L_0->f4);
		return L_1;
	}
}
extern MethodInfo m9675_MI;
extern "C" bool m9675 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, 2, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f2);
		return ((((int32_t)((((t9*)(t828 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9676_MI;
extern "C" bool m9676 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, 4, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f3);
		return ((((int32_t)((((t9*)(t828 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t126 * m9677 (t1820 * __this, MethodInfo* method)
{
	t928* V_0 = {0};
	{
		m9673(__this, 6, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t1819 * L_2 = &(__this->f2);
		t828 * L_3 = (L_2->f2);
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9553_MI, L_3);
		return L_4;
	}

IL_0025:
	{
		t1819 * L_5 = &(__this->f2);
		t828 * L_6 = (L_5->f3);
		t928* L_7 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_6);
		V_0 = L_7;
		t928* L_8 = V_0;
		t928* L_9 = V_0;
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1));
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
extern "C" t126 * m9678 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, 8, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m9679_MI;
extern "C" t126 * m9679 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, ((int32_t)16), &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern "C" t2* m9680 (t1820 * __this, MethodInfo* method)
{
	{
		m9673(__this, ((int32_t)32), &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t2* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m9681_MI;
extern TypeInfo* t1570_TI_var;
extern "C" t1570* m9681 (t1820 * __this, bool p0, MethodInfo* method)
{
	static bool m9681_init;
	if (!m9681_init)
	{
		t1570_TI_var = il2cpp_codegen_class_from_type(&t1570_0_0_0);
		m9681_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1570* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		m9673(__this, 6, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		t1819 * L_3 = &(__this->f2);
		t828 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4390_MI, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		t1819 * L_6 = &(__this->f2);
		t828 * L_7 = (L_6->f2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = p0;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		t1819 * L_9 = &(__this->f2);
		t828 * L_10 = (L_9->f2);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4390_MI, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((t1570*)SZArrayNew(t1570_TI_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		t1570* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		t1819 * L_18 = &(__this->f2);
		t828 * L_19 = (L_18->f3);
		ArrayElementTypeCheck (L_15, L_19);
		*((t828 **)(t828 **)SZArrayLdElema(L_15, L_17)) = (t828 *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		t1570* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		t1819 * L_24 = &(__this->f2);
		t828 * L_25 = (L_24->f2);
		ArrayElementTypeCheck (L_21, L_25);
		*((t828 **)(t828 **)SZArrayLdElema(L_21, L_23)) = (t828 *)L_25;
	}

IL_0088:
	{
		t1570* L_26 = V_2;
		return L_26;
	}
}
extern "C" t828 * m9682 (t1820 * __this, bool p0, MethodInfo* method)
{
	{
		m9673(__this, 2, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		t1819 * L_3 = &(__this->f2);
		t828 * L_4 = (L_3->f2);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4390_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1819 * L_6 = &(__this->f2);
		t828 * L_7 = (L_6->f2);
		return L_7;
	}

IL_0035:
	{
		return (t828 *)NULL;
	}
}
extern MethodInfo m9683_MI;
extern TypeInfo* t928_TI_var;
extern "C" t928* m9683 (t1820 * __this, MethodInfo* method)
{
	static bool m9683_init;
	if (!m9683_init)
	{
		t928_TI_var = il2cpp_codegen_class_from_type(&t928_0_0_0);
		m9683_init = true;
	}
	t928* V_0 = {0};
	t928* V_1 = {0};
	int32_t V_2 = 0;
	t924 * V_3 = {0};
	{
		m9673(__this, 6, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		t1819 * L_2 = &(__this->f2);
		t828 * L_3 = (L_2->f2);
		t928* L_4 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		t1819 * L_5 = &(__this->f2);
		t828 * L_6 = (L_5->f3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		t1819 * L_7 = &(__this->f2);
		t828 * L_8 = (L_7->f3);
		t928* L_9 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_8);
		V_1 = L_9;
		t928* L_10 = V_1;
		V_0 = ((t928*)SZArrayNew(t928_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)1))));
		t928* L_11 = V_1;
		t928* L_12 = V_0;
		t928* L_13 = V_0;
		m5940(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5940_MI);
		goto IL_0063;
	}

IL_005c:
	{
		return ((t928*)SZArrayNew(t928_TI_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		t928* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_3 = (*(t924 **)(t924 **)SZArrayLdElema(L_14, L_16));
		t928* L_17 = V_0;
		int32_t L_18 = V_2;
		t924 * L_19 = V_3;
		t924 * L_20 = (t924 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t924_TI));
		m9698(L_20, L_19, __this, &m9698_MI);
		ArrayElementTypeCheck (L_17, L_20);
		*((t924 **)(t924 **)SZArrayLdElema(L_17, L_18)) = (t924 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		t928* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		t928* L_24 = V_0;
		return L_24;
	}
}
extern "C" t828 * m9684 (t1820 * __this, bool p0, MethodInfo* method)
{
	{
		m9673(__this, 4, &m9673_MI);
		t1819 * L_0 = &(__this->f2);
		t828 * L_1 = (L_0->f3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = p0;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		t1819 * L_3 = &(__this->f2);
		t828 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4390_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1819 * L_6 = &(__this->f2);
		t828 * L_7 = (L_6->f3);
		return L_7;
	}

IL_0035:
	{
		return (t828 *)NULL;
	}
}
extern MethodInfo m9685_MI;
extern "C" bool m9685 (t1820 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_1 = m11606(NULL, __this, L_0, 0, &m11606_MI);
		return L_1;
	}
}
extern MethodInfo m9686_MI;
extern "C" t158* m9686 (t1820 * __this, bool p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_0 = m11605(NULL, __this, 0, &m11605_MI);
		return L_0;
	}
}
extern MethodInfo m9687_MI;
extern "C" t158* m9687 (t1820 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_1 = m11604(NULL, __this, L_0, 0, &m11604_MI);
		return L_1;
	}
}
extern MethodInfo m9688_MI;
extern TypeInfo* t152_TI_var;
extern "C" t1822 * m9688 (t9 * __this , t828 * p0, MethodInfo* method)
{
	static bool m9688_init;
	if (!m9688_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9688_init = true;
	}
	t152* V_0 = {0};
	t126 * V_1 = {0};
	t9 * V_2 = {0};
	t828 * V_3 = {0};
	t126 * V_4 = {0};
	t2* V_5 = {0};
	{
		t828 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4389_MI, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		t152* L_2 = ((t152*)SZArrayNew(t152_TI_var, 1));
		t828 * L_3 = p0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9553_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_2, 0)) = (t126 *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2177_0_0_0), &m329_MI);
		V_4 = L_5;
		V_5 = (t2*) &_stringLiteral2059;
		goto IL_0059;
	}

IL_002d:
	{
		t152* L_6 = ((t152*)SZArrayNew(t152_TI_var, 2));
		t828 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_7);
		ArrayElementTypeCheck (L_6, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_6, 0)) = (t126 *)L_8;
		t152* L_9 = L_6;
		t828 * L_10 = p0;
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9553_MI, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 1)) = (t126 *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2178_0_0_0), &m329_MI);
		V_4 = L_12;
		V_5 = (t2*) &_stringLiteral2060;
	}

IL_0059:
	{
		t126 * L_13 = V_4;
		t152* L_14 = V_0;
		t126 * L_15 = (t126 *)VirtFuncInvoker1< t126 *, t152* >::Invoke(&m4471_MI, L_13, L_14);
		V_1 = L_15;
		t126 * L_16 = V_1;
		t828 * L_17 = p0;
		t293 * L_18 = m7610(NULL, L_16, L_17, 0, &m7610_MI);
		V_2 = L_18;
		t9 * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		t2123 * L_20 = (t2123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2123_TI));
		m11577(L_20, &m11577_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_21 = m329(NULL, LoadTypeToken(&t1820_0_0_0), &m329_MI);
		t2* L_22 = V_5;
		t828 * L_23 = (t828 *)VirtFuncInvoker2< t828 *, t2*, int32_t >::Invoke(&m7782_MI, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		t828 * L_24 = V_3;
		t152* L_25 = V_0;
		t828 * L_26 = (t828 *)VirtFuncInvoker1< t828 *, t152* >::Invoke(&m9554_MI, L_24, L_25);
		V_3 = L_26;
		t126 * L_27 = m329(NULL, LoadTypeToken(&t1822_0_0_0), &m329_MI);
		t9 * L_28 = V_2;
		t828 * L_29 = V_3;
		t293 * L_30 = m7609(NULL, L_27, L_28, L_29, 1, &m7609_MI);
		return ((t1822 *)Castclass(L_30, InitializedTypeInfo(&t1822_TI)));
	}
}
extern MethodInfo m9689_MI;
extern "C" t9 * m9689 (t1820 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t158* L_0 = p1;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		t158* L_1 = p1;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		t9 * L_2 = p0;
		t158* L_3 = p1;
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m9690_MI, __this, L_2, 0, (t933 *)NULL, L_3, (t901 *)NULL);
		return L_4;
	}
}
extern "C" t9 * m9690 (t1820 * __this, t9 * p0, int32_t p1, t933 * p2, t158* p3, t901 * p4, MethodInfo* method)
{
	t9 * V_0 = {0};
	t828 * V_1 = {0};
	t2033 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		t828 * L_0 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m9682_MI, __this, 1);
		V_1 = L_0;
		t828 * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9680_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2061, L_2, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, L_3, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			t158* L_5 = p3;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			t158* L_6 = p3;
			if ((((int32_t)(((t121 *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			t828 * L_7 = V_1;
			t9 * L_8 = p0;
			int32_t L_9 = p1;
			t933 * L_10 = p2;
			t901 * L_11 = p4;
			t9 * L_12 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12028_MI, L_7, L_8, L_9, L_10, (t158*)(t158*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			t828 * L_13 = V_1;
			t9 * L_14 = p0;
			int32_t L_15 = p1;
			t933 * L_16 = p2;
			t158* L_17 = p3;
			t901 * L_18 = p4;
			t9 * L_19 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12028_MI, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t2033_TI, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((t2033 *)__exception_local);
		t2033 * L_20 = V_2;
		t1825 * L_21 = (t1825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1825_TI));
		m9728(L_21, L_20, &m9728_MI);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		t9 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9691_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9691 (t1820 * __this, t9 * p0, t9 * p1, int32_t p2, t933 * p3, t158* p4, t901 * p5, MethodInfo* method)
{
	static bool m9691_init;
	if (!m9691_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9691_init = true;
	}
	t828 * V_0 = {0};
	t158* V_1 = {0};
	int32_t V_2 = 0;
	{
		t828 * L_0 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m9684_MI, __this, 1);
		V_0 = L_0;
		t828 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9680_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2062, L_2, (t2*) &_stringLiteral140, &m399_MI);
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, L_3, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		t158* L_5 = p4;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		t158* L_6 = p4;
		if ((((int32_t)(((t121 *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		t158* L_7 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t9 * L_8 = p1;
		ArrayElementTypeCheck (L_7, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 0)) = (t9 *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		t158* L_9 = p4;
		V_2 = (((int32_t)(((t121 *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		t158* L_11 = p4;
		t158* L_12 = V_1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5902_MI, L_11, (t121 *)(t121 *)L_12, 0);
		t158* L_13 = V_1;
		int32_t L_14 = V_2;
		t9 * L_15 = p1;
		ArrayElementTypeCheck (L_13, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, L_14)) = (t9 *)L_15;
	}

IL_0058:
	{
		t828 * L_16 = V_0;
		t9 * L_17 = p0;
		int32_t L_18 = p2;
		t933 * L_19 = p3;
		t158* L_20 = V_1;
		t901 * L_21 = p5;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12028_MI, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
extern "C" t2* m9692 (t1820 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9677_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_0);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9680_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_1, (t2*) &_stringLiteral167, L_2, &m399_MI);
		return L_3;
	}
}
extern MethodInfo m9693_MI;
extern "C" t152* m9693 (t1820 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9667(NULL, __this, 1, &m9667_MI);
		V_0 = L_0;
		t152* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_2 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_2;
	}

IL_0011:
	{
		t152* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m9694_MI;
extern "C" t152* m9694 (t1820 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9667(NULL, __this, 0, &m9667_MI);
		V_0 = L_0;
		t152* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_2 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_2;
	}

IL_0011:
	{
		t152* L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m9695_MI;
extern "C" void m9695 (t1820 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9680_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9678_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9692_MI, __this);
		m9534(NULL, L_0, L_1, L_2, L_3, ((int32_t)16), &m9534_MI);
		return;
	}
}
#include "t1791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1791_TI;
#include "t1791MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1790.h"
#include "t303.h"
#include "t1764.h"
#include "t1580.h"
#include "t1583.h"
#include "t1574.h"
#include "t1578.h"
extern TypeInfo t1790_TI;
extern TypeInfo t303_TI;
extern TypeInfo t1580_TI;
extern TypeInfo t1583_TI;
extern TypeInfo t1574_TI;
#include "t9MD.h"
#include "t1790MD.h"
#include "t1580MD.h"
#include "t1583MD.h"
#include "t1574MD.h"
#include "t1764MD.h"
extern Il2CppType t122_0_0_0;
extern MethodInfo m9700_MI;
extern MethodInfo m336_MI;
extern MethodInfo m9357_MI;
extern MethodInfo m9358_MI;
extern MethodInfo m9356_MI;
extern MethodInfo m9706_MI;
extern MethodInfo m9707_MI;
extern MethodInfo m11967_MI;
extern MethodInfo m7749_MI;
extern MethodInfo m4492_MI;
extern MethodInfo m4453_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4391_MI;
extern MethodInfo m4409_MI;
extern MethodInfo m9704_MI;
extern MethodInfo m511_MI;
extern MethodInfo m610_MI;
extern MethodInfo m9701_MI;
extern MethodInfo m9703_MI;
extern MethodInfo m9702_MI;
extern MethodInfo m7829_MI;
extern MethodInfo m7832_MI;
extern MethodInfo m7825_MI;
extern MethodInfo m9443_MI;


extern MethodInfo m9696_MI;
extern "C" void m9696 (t924 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9697_MI;
extern "C" void m9697 (t924 * __this, t1790 * p0, t126 * p1, t560 * p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t126 * L_0 = p1;
		__this->f0 = L_0;
		t560 * L_1 = p2;
		__this->f2 = L_1;
		t1790 * L_2 = p0;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t1790 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9357_MI, L_3);
		__this->f3 = L_4;
		t1790 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9358_MI, L_5);
		__this->f4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		t1790 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9356_MI, L_7);
		__this->f5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->f3 = (t2*)NULL;
		int32_t L_9 = p3;
		__this->f4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->f5 = 0;
	}

IL_0057:
	{
		return;
	}
}
extern "C" void m9698 (t924 * __this, t924 * p0, t560 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t924 * L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, L_0);
		__this->f0 = L_1;
		t560 * L_2 = p1;
		__this->f2 = L_2;
		t924 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9706_MI, L_3);
		__this->f3 = L_4;
		t924 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9707_MI, L_5);
		__this->f4 = L_6;
		t924 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9700_MI, L_7);
		__this->f5 = L_8;
		return;
	}
}
extern MethodInfo m9699_MI;
extern "C" t2* m9699 (t924 * __this, MethodInfo* method)
{
	t126 * V_0 = {0};
	bool V_1 = false;
	t2* V_2 = {0};
	int32_t G_B7_0 = 0;
	t2* G_B10_0 = {0};
	{
		t126 * L_0 = (__this->f0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		t126 * L_1 = V_0;
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		t126 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4492_MI, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		t126 * L_7 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_8 = m329(NULL, LoadTypeToken(&t122_0_0_0), &m329_MI);
		if ((((t9*)(t126 *)L_7) == ((t9*)(t126 *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		t126 * L_9 = (__this->f0);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4453_MI, L_9);
		t560 * L_11 = (__this->f2);
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_11);
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4453_MI, L_12);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_14 = m331(NULL, L_10, L_13, &m331_MI);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		t126 * L_16 = (__this->f0);
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		t126 * L_18 = (__this->f0);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = m9704(__this, &m9704_MI);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		t2* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		t9 * L_23 = Box(InitializedTypeInfo(&t303_TI), &L_22);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_24 = m511(NULL, L_21, L_23, &m511_MI);
		V_2 = L_24;
		t2* L_25 = V_2;
		t2* L_26 = (__this->f3);
		t2* L_27 = m610(NULL, L_25, L_26, &m610_MI);
		V_2 = L_27;
	}

IL_0095:
	{
		t2* L_28 = V_2;
		return L_28;
	}
}
extern "C" t126 * m4424 (t924 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9700 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" bool m9701 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9700_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9702 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9700_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9703 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9700_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9704 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9700_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9705_MI;
extern "C" t560 * m9705 (t924 * __this, MethodInfo* method)
{
	{
		t560 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t2* m9706 (t924 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m9707 (t924 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9708_MI;
extern "C" t158* m9708 (t924 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		t158* L_2 = m11604(NULL, __this, L_0, L_1, &m11604_MI);
		return L_2;
	}
}
extern MethodInfo m9709_MI;
extern "C" bool m9709 (t924 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2129_TI));
		bool L_2 = m11606(NULL, __this, L_0, L_1, &m11606_MI);
		return L_2;
	}
}
extern MethodInfo m9710_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9710 (t924 * __this, MethodInfo* method)
{
	static bool m9710_init;
	if (!m9710_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9710_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = m9701(__this, &m9701_MI);
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
		bool L_2 = m9703(__this, &m9703_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = m9702(__this, &m9702_MI);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		t1764 * L_6 = (__this->f6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (t158*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((t158*)SZArrayNew(t158_TI_var, L_9));
		V_0 = 0;
		bool L_10 = m9701(__this, &m9701_MI);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		t158* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		t1580 * L_14 = (t1580 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1580_TI));
		m7829(L_14, &m7829_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_0054:
	{
		bool L_15 = m9702(__this, &m9702_MI);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		t158* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		t1583 * L_19 = (t1583 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1583_TI));
		m7832(L_19, &m7832_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, L_18)) = (t9 *)L_19;
	}

IL_0068:
	{
		bool L_20 = m9703(__this, &m9703_MI);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		t158* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		t1574 * L_24 = (t1574 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1574_TI));
		m7825(L_24, &m7825_MI);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, L_23)) = (t9 *)L_24;
	}

IL_007c:
	{
		t1764 * L_25 = (__this->f6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		t158* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		t1764 * L_29 = (__this->f6);
		t1578 * L_30 = m9443(L_29, &m9443_MI);
		ArrayElementTypeCheck (L_26, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, L_28)) = (t9 *)L_30;
	}

IL_0096:
	{
		t158* L_31 = V_1;
		return L_31;
	}
}
#include "t934.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t934_TI;
#include "t934MD.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void t934_marshal(const t934& unmarshaled, t934_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
}
void t934_marshal_back(const t934_marshaled& marshaled, t934& unmarshaled)
{
	unmarshaled.f0 = (t1206*)il2cpp_codegen_marshal_array_result(&t124_TI, marshaled.f0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void t934_marshal_cleanup(t934_marshaled& marshaled)
{
}
#include "t1823.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1823_TI;
#include "t1823MD.h"

#include "t169.h"
extern TypeInfo t169_TI;
#include "t169MD.h"
extern MethodInfo m5734_MI;


extern MethodInfo m9711_MI;
extern "C" void m9711 (t1823 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9712_MI;
extern "C" void m9712 (t1823 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral2063, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1804_TI;
#include "t1804MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1793_TI;
#include "t1793MD.h"



#include "t837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t837_TI;

extern MethodInfo m7811_MI;
extern MethodInfo m4427_MI;
extern MethodInfo m12029_MI;
extern MethodInfo m12030_MI;


extern "C" void m9713 (t837 * __this, MethodInfo* method)
{
	{
		m7811(__this, &m7811_MI);
		return;
	}
}
extern MethodInfo m9714_MI;
extern "C" int32_t m9714 (t837 * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
extern MethodInfo m9715_MI;
extern "C" t828 * m9715 (t837 * __this, MethodInfo* method)
{
	{
		t828 * L_0 = (t828 *)VirtFuncInvoker1< t828 *, bool >::Invoke(&m4427_MI, __this, 0);
		return L_0;
	}
}
extern MethodInfo m9716_MI;
extern "C" t9 * m9716 (t837 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12029_MI, __this, L_0, 0, (t933 *)NULL, L_1, (t901 *)NULL);
		return L_2;
	}
}
extern MethodInfo m9717_MI;
extern "C" void m9717 (t837 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t158* L_2 = p2;
		VirtActionInvoker6< t9 *, t9 *, int32_t, t933 *, t158*, t901 * >::Invoke(&m12030_MI, __this, L_0, L_1, 0, (t933 *)NULL, L_2, (t901 *)NULL);
		return;
	}
}
extern MethodInfo m9718_MI;
extern "C" t152* m9718 (t837 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9719_MI;
extern "C" t152* m9719 (t837 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
#include "t1743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1743_TI;
#include "t1743MD.h"



#include "t1802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1802_TI;
#include "t1802MD.h"

#include "t575.h"
#include "t1217.h"
#include "t1658.h"
extern TypeInfo t730_TI;
extern TypeInfo t575_TI;
extern TypeInfo t1658_TI;
#include "t1100MD.h"
#include "t1629MD.h"
#include "t1658MD.h"
extern Il2CppType t730_0_0_0;
extern MethodInfo m5731_MI;
extern MethodInfo m5740_MI;
extern MethodInfo m5733_MI;
extern MethodInfo m5728_MI;
extern MethodInfo m5743_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m8055_MI;
extern MethodInfo m9723_MI;
extern MethodInfo m8300_MI;
extern MethodInfo m8299_MI;


extern MethodInfo m9720_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m9720 (t1802 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m9720_init;
	if (!m9720_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m9720_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		t9 * L_2 = m5731(L_0, (t2*) &_stringLiteral2064, L_1, &m5731_MI);
		__this->f0 = ((t730*)Castclass(L_2, t730_TI_var));
		t1100 * L_3 = p0;
		t2* L_4 = m5740(L_3, (t2*) &_stringLiteral2065, &m5740_MI);
		__this->f1 = L_4;
		t1100 * L_5 = p0;
		bool L_6 = m5733(L_5, (t2*) &_stringLiteral2066, &m5733_MI);
		__this->f2 = L_6;
		t1100 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		t9 * L_9 = m5731(L_7, (t2*) &_stringLiteral2067, L_8, &m5731_MI);
		__this->f3 = ((t730*)Castclass(L_9, t730_TI_var));
		return;
	}
}
extern MethodInfo m9721_MI;
extern "C" void m9721 (t1802 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t730* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		m5728(L_0, (t2*) &_stringLiteral2064, (t9 *)(t9 *)L_1, L_2, &m5728_MI);
		t1100 * L_3 = p0;
		t2* L_4 = (__this->f1);
		m5743(L_3, (t2*) &_stringLiteral2065, L_4, &m5743_MI);
		t1100 * L_5 = p0;
		bool L_6 = (__this->f2);
		m5729(L_5, (t2*) &_stringLiteral2066, L_6, &m5729_MI);
		t1100 * L_7 = p0;
		t730* L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t730_0_0_0), &m329_MI);
		m5728(L_7, (t2*) &_stringLiteral2067, (t9 *)(t9 *)L_8, L_9, &m5728_MI);
		return;
	}
}
extern MethodInfo m9722_MI;
extern "C" void m9722 (t1802 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t1217 * m9723 (t1802 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1217 * L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1217 * L_1 = (__this->f4);
		return L_1;
	}

IL_000f:
	{
		t730* L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t730* L_3 = (__this->f3);
		t1217 * L_4 = m8055(NULL, L_3, &m8055_MI);
		__this->f4 = L_4;
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		__this->f3 = (t730*)NULL;
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		t1217 * L_5 = (__this->f4);
		return L_5;
	}
}
extern MethodInfo m9724_MI;
extern "C" t1658 * m9724 (t1802 * __this, MethodInfo* method)
{
	t1217 * V_0 = {0};
	{
		t1217 * L_0 = m9723(__this, &m9723_MI);
		V_0 = L_0;
		t1217 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t1217 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1658_TI));
		t1658 * L_3 = (t1658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1658_TI));
		m8300(L_3, L_2, &m8300_MI);
		return L_3;
	}

IL_0011:
	{
		t730* L_4 = (__this->f0);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t730* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1658_TI));
		t1658 * L_6 = (t1658 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1658_TI));
		m8299(L_6, L_5, &m8299_MI);
		return L_6;
	}

IL_0025:
	{
		return (t1658 *)NULL;
	}
}
#include "t1824.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1824_TI;
#include "t1824MD.h"

#include "t1591MD.h"
#include "t138MD.h"
extern MethodInfo m7846_MI;
extern MethodInfo m379_MI;
extern MethodInfo m7028_MI;


extern MethodInfo m9725_MI;
extern "C" void m9725 (t1824 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7846(NULL, (t2*) &_stringLiteral2068, &m7846_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9726_MI;
extern "C" void m9726 (t1824 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9727_MI;
extern "C" void m9727 (t1824 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7028(__this, L_0, L_1, &m7028_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4458_MI;


extern "C" void m9728 (t1825 * __this, t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m4458(__this, (t2*) &_stringLiteral2069, L_0, &m4458_MI);
		return;
	}
}
extern MethodInfo m9729_MI;
extern "C" void m9729 (t1825 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4458(__this, L_0, L_1, &m4458_MI);
		return;
	}
}
extern MethodInfo m9730_MI;
extern "C" void m9730 (t1825 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7028(__this, L_0, L_1, &m7028_MI);
		return;
	}
}
#include "t1826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1826_TI;
#include "t1826MD.h"



extern MethodInfo m9731_MI;
extern "C" void m9731 (t1826 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7846(NULL, (t2*) &_stringLiteral2070, &m7846_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9732_MI;
extern "C" void m9732 (t1826 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9733_MI;
extern "C" void m9733 (t1826 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m7028(__this, L_0, L_1, &m7028_MI);
		return;
	}
}
#include "t1571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1571_TI;
#include "t1571MD.h"



#include "t1827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1827_TI;
#include "t1827MD.h"

#include "t1345.h"
#include "t1568.h"
#include "t826.h"
#include "t1573.h"
#include "t1569.h"
#include "t830.h"
extern TypeInfo t1345_TI;
extern TypeInfo t1568_TI;
extern TypeInfo t127_TI;
extern TypeInfo t826_TI;
extern TypeInfo t1573_TI;
extern TypeInfo t935_TI;
extern TypeInfo t926_TI;
extern TypeInfo t1569_TI;
extern TypeInfo t830_TI;
extern TypeInfo t930_TI;
extern TypeInfo t929_TI;
extern TypeInfo t221_TI;
extern MethodInfo m5771_MI;
extern MethodInfo m4489_MI;
extern MethodInfo m4430_MI;
extern MethodInfo m11984_MI;
extern MethodInfo m7764_MI;
extern MethodInfo m11966_MI;
extern MethodInfo m7742_MI;
extern MethodInfo m7747_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m11983_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m12017_MI;
extern MethodInfo m12018_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m12019_MI;
extern MethodInfo m7785_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m4425_MI;
extern MethodInfo m7791_MI;
extern MethodInfo m4438_MI;
extern MethodInfo m4384_MI;
extern MethodInfo m7751_MI;
extern MethodInfo m11960_MI;
extern MethodInfo m7758_MI;
extern MethodInfo m7761_MI;


extern MethodInfo m9734_MI;
extern "C" void m9734 (t1827 * __this, MethodInfo* method)
{
	{
		m7742(__this, &m7742_MI);
		return;
	}
}
extern MethodInfo m9735_MI;
extern "C" t1345 * m9735 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1345 * L_1 = (t1345 *)VirtFuncInvoker0< t1345 * >::Invoke(&m5771_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9736_MI;
extern "C" t2* m9736 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9737_MI;
extern "C" t126 * m9737 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4430_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9738_MI;
extern "C" t2* m9738 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9739_MI;
extern "C" t1568 * m9739 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1568 * L_1 = (t1568 *)VirtFuncInvoker0< t1568 * >::Invoke(&m11984_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9740_MI;
extern "C" t2* m9740 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9741_MI;
extern "C" t2* m9741 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4453_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9742_MI;
extern "C" t127  m9742 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7764_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9743_MI;
extern "C" t126 * m9743 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11966_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9744_MI;
extern "C" int32_t m9744 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7747_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9745_MI;
extern "C" t826 * m9745 (t1827 * __this, int32_t p0, t933 * p1, int32_t p2, t152* p3, t935* p4, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t933 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t935* L_5 = p4;
		t826 * L_6 = (t826 *)VirtFuncInvoker5< t826 *, int32_t, t933 *, int32_t, t152*, t935* >::Invoke(&m7797_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9746_MI;
extern "C" t926* m9746 (t1827 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t926* L_2 = (t926*)VirtFuncInvoker1< t926*, int32_t >::Invoke(&m11983_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9747_MI;
extern "C" t158* m9747 (t1827 * __this, bool p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12016_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9748_MI;
extern "C" t158* m9748 (t1827 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4431_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9749_MI;
extern "C" t126 * m9749 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11967_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9750_MI;
extern "C" t1569 * m9750 (t1827 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1569 * L_3 = (t1569 *)VirtFuncInvoker2< t1569 *, t2*, int32_t >::Invoke(&m12017_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9751_MI;
extern "C" t830 * m9751 (t1827 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t830 * L_3 = (t830 *)VirtFuncInvoker2< t830 *, t2*, int32_t >::Invoke(&m12018_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9752_MI;
extern "C" t930* m9752 (t1827 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t930* L_2 = (t930*)VirtFuncInvoker1< t930*, int32_t >::Invoke(&m4426_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9753_MI;
extern "C" t152* m9753 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12019_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9754_MI;
extern "C" t828 * m9754 (t1827 * __this, t2* p0, int32_t p1, t933 * p2, int32_t p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t933 * L_3 = p2;
		int32_t L_4 = p3;
		t152* L_5 = p4;
		t935* L_6 = p5;
		t828 * L_7 = m7785(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7785_MI);
		return L_7;
	}
}
extern MethodInfo m9755_MI;
extern "C" t1570* m9755 (t1827 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1570* L_2 = (t1570*)VirtFuncInvoker1< t1570*, int32_t >::Invoke(&m12020_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9756_MI;
extern "C" t929* m9756 (t1827 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t929* L_2 = (t929*)VirtFuncInvoker1< t929*, int32_t >::Invoke(&m4425_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9757_MI;
extern "C" t837 * m9757 (t1827 * __this, t2* p0, int32_t p1, t933 * p2, t126 * p3, t152* p4, t935* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t933 * L_3 = p2;
		t126 * L_4 = p3;
		t152* L_5 = p4;
		t935* L_6 = p5;
		t837 * L_7 = m7791(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7791_MI);
		return L_7;
	}
}
extern MethodInfo m9758_MI;
extern "C" bool m9758 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7749_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9759_MI;
extern "C" t9 * m9759 (t1827 * __this, t2* p0, int32_t p1, t933 * p2, t9 * p3, t158* p4, t935* p5, t901 * p6, t221* p7, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
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
extern MethodInfo m9760_MI;
extern "C" bool m9760 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4384_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9761_MI;
extern "C" bool m9761 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9762_MI;
extern "C" bool m9762 (t1827 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m11960_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9763_MI;
extern "C" bool m9763 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7758_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9764_MI;
extern "C" bool m9764 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4492_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9765_MI;
extern "C" bool m9765 (t1827 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7761_MI, L_0);
		return L_1;
	}
}
#include "t1153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1153_TI;
#include "t1153MD.h"

#include "t132.h"
extern TypeInfo t132_TI;
#include "t725MD.h"
#include "t132MD.h"
extern MethodInfo m4264_MI;
extern MethodInfo m339_MI;


extern MethodInfo m4802_MI;
extern "C" void m4802 (t1153 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2071, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1146.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1146_TI;
#include "t1146MD.h"

#include "t1196.h"
extern TypeInfo t1196_TI;
#include "t1196MD.h"
extern MethodInfo m11882_MI;


extern MethodInfo m4795_MI;
extern "C" void m4795 (t1146 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		t1196 * L_1 = (t1196 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1196_TI));
		m11882(L_1, L_0, &m11882_MI);
		__this->f0 = L_1;
		return;
	}
}
#include "t1828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1828_TI;
#include "t1828MD.h"



#include "t1149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1149_TI;
#include "t1149MD.h"



extern MethodInfo m4798_MI;
extern "C" void m4798 (t1149 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1829_TI;
#include "t1829MD.h"

#include "t1830.h"


extern MethodInfo m9766_MI;
extern "C" void m9766 (t1829 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1831_TI;
#include "t1831MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1830_TI;
#include "t1830MD.h"



#include "t1832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1832_TI;
#include "t1832MD.h"



extern MethodInfo m9767_MI;
extern "C" void m9767 (t1832 * __this, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		return;
	}
}
#include "t1833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1833_TI;
#include "t1833MD.h"



#include "t1834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1834_TI;
#include "t1834MD.h"



#include "t1835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1835_TI;
#include "t1835MD.h"

extern MethodInfo m646_MI;


extern MethodInfo m9768_MI;
extern "C" void m9768 (t1835 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9769_MI;
extern "C" void m9769 (t1835 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0009:
	{
		return;
	}
}
#include "t1836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1836_TI;
#include "t1836MD.h"



extern MethodInfo m9770_MI;
extern "C" void m9770 (t1836 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1837_TI;
#include "t1837MD.h"



#include "t1576.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1576_TI;
#include "t1576MD.h"



#include "t1577.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1577_TI;
#include "t1577MD.h"



#include "t1838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1838_TI;
#include "t1838MD.h"

#include "t1839.h"


extern MethodInfo m9771_MI;
extern "C" void m9771 (t1838 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1839_TI;
#include "t1839MD.h"



#include "t1840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1840_TI;
#include "t1840MD.h"



extern MethodInfo m9772_MI;
extern "C" void m9772 (t1840 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1841_TI;
#include "t1841MD.h"



#include "t1842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1842_TI;
#include "t1842MD.h"



extern MethodInfo m9773_MI;
extern "C" void m9773 (t1842 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1843_TI;
#include "t1843MD.h"

#include "t1341.h"
#include "t1844.h"
extern TypeInfo t1341_TI;
#include "t1341MD.h"
#include "t125MD.h"
extern MethodInfo m9775_MI;
extern MethodInfo m5713_MI;
extern MethodInfo m9779_MI;
extern MethodInfo m9780_MI;
extern MethodInfo m9774_MI;
extern MethodInfo m9781_MI;
extern MethodInfo m4228_MI;


extern "C" void m9774 (t1843 * __this, t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = p1;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		p1 = 2;
	}

IL_000d:
	{
		t9 * L_2 = p0;
		int32_t L_3 = p1;
		int32_t L_4 = m9780(NULL, L_2, 0, L_3, &m9780_MI);
		__this->f0 = L_4;
		return;
	}
}
extern "C" bool m9775 (t1843 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9776_MI;
extern "C" t9 * m9776 (t1843 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9775(__this, &m9775_MI);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7846(NULL, (t2*) &_stringLiteral2072, &m7846_MI);
		t1341 * L_2 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_2, L_1, &m5713_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->f0);
		t9 * L_4 = m9779(NULL, L_3, &m9779_MI);
		return L_4;
	}
}
extern MethodInfo m9777_MI;
extern "C" t1843  m9777 (t9 * __this , t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		t1843  L_2 = {0};
		m9774(&L_2, L_0, L_1, &m9774_MI);
		return L_2;
	}
}
extern MethodInfo m9778_MI;
extern "C" void m9778 (t1843 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		m9781(NULL, L_0, &m9781_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" t9 * m9779 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t9 * (*m9779_ftn) (int32_t);
	static m9779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9779_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m9780 (t9 * __this , t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef int32_t (*m9780_ftn) (t9 *, int32_t, int32_t);
	static m9780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9780_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m9781 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m9781_ftn) (int32_t);
	static m9781_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9781_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9782_MI;
extern "C" bool m9782 (t1843 * __this, t9 * p0, MethodInfo* method)
{
	t1843  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1843_TI))))
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
		int32_t L_2 = (__this->f0);
		t9 * L_3 = p0;
		V_0 = ((*(t1843 *)((t1843 *)UnBox (L_3, InitializedTypeInfo(&t1843_TI)))));
		int32_t L_4 = ((&V_0)->f0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m9783_MI;
extern "C" int32_t m9783 (t1843 * __this, MethodInfo* method)
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
extern TypeInfo t1844_TI;
#include "t1844MD.h"



#include "t1845.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1845_TI;
#include "t1845MD.h"



extern MethodInfo m9784_MI;
extern "C" void m9784 (t1845 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1846_TI;
#include "t1846MD.h"

#include "t2117.h"
#include "t2118.h"
#include "t893MD.h"
#include "t2117MD.h"
extern MethodInfo m11525_MI;
extern MethodInfo m11776_MI;
extern MethodInfo m9786_MI;


extern MethodInfo m9785_MI;
extern "C" void m9785 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((t1846_SFs*)InitializedTypeInfo(&t1846_TI)->static_fields)->f0 = 2;
		t2117 * L_0 = m11525(NULL, &m11525_MI);
		int32_t L_1 = m11776(L_0, &m11776_MI);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((t1846_SFs*)InitializedTypeInfo(&t1846_TI)->static_fields)->f1 = G_B3_0;
		return;
	}
}
extern "C" void m9786 (t9 * __this , t58 p0, int32_t p1, t121 * p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m9786_ftn) (t58, int32_t, t121 *, int32_t);
	static m9786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9786_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m9787_MI;
extern "C" void m9787 (t9 * __this , t58 p0, t730* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t730* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1846_TI));
		m9786(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9786_MI);
		return;
	}
}
extern MethodInfo m9788_MI;
extern "C" void m9788 (t9 * __this , t58 p0, t312* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t312* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1846_TI));
		m9786(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9786_MI);
		return;
	}
}
#include "t1847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1847_TI;
#include "t1847MD.h"

#include "t1369MD.h"
extern MethodInfo m5900_MI;
extern MethodInfo m4457_MI;
extern MethodInfo m11808_MI;


extern MethodInfo m9789_MI;
extern "C" void m9789 (t1847 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7846(NULL, (t2*) &_stringLiteral2073, &m7846_MI);
		m5900(__this, L_0, &m5900_MI);
		m4457(__this, ((int32_t)-2146233035), &m4457_MI);
		return;
	}
}
extern MethodInfo m9790_MI;
extern "C" void m9790 (t1847 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m11808(__this, L_0, L_1, &m11808_MI);
		return;
	}
}
#include "t1848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1848_TI;
#include "t1848MD.h"



extern MethodInfo m9791_MI;
extern "C" void m9791 (t1848 * __this, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		return;
	}
}
#include "t1596.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1596_TI;
#include "t1596MD.h"

#include "t1530.h"
extern TypeInfo t1530_TI;
#include "t1530MD.h"
#include "t2068MD.h"
#include "t1526MD.h"
extern MethodInfo m2510_MI;
extern MethodInfo m6911_MI;
extern MethodInfo m11016_MI;
extern MethodInfo m12031_MI;
extern MethodInfo m12032_MI;
extern MethodInfo m9798_MI;
extern MethodInfo m6895_MI;
extern MethodInfo m9793_MI;


extern MethodInfo m9792_MI;
extern "C" void m9792 (t1596 * __this, t58 p0, bool p1, MethodInfo* method)
{
	{
		m9768(__this, &m9768_MI);
		t58 L_0 = p0;
		__this->f1 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		__this->f2 = 1;
		return;
	}
}
extern "C" void m9793 (t1596 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t126 * L_1 = m2510(__this, &m2510_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_1);
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_3, L_2, &m6911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->f2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = m11016(NULL, L_6, L_7, L_8, &m11016_MI);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		bool L_12 = (__this->f3);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12031_MI, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12032_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
		__this->f2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m9794_MI;
extern "C" void m9794 (t1596 * __this, bool* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_1 = m2510(__this, &m2510_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_1);
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_3, L_2, &m6911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		t126 * L_7 = m2510(__this, &m2510_MI);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_7);
		t1530 * L_9 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_9, L_8, &m6911_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->f2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = m11016(NULL, L_10, L_11, L_12, &m11016_MI);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001a;
		}
	}
	{
		bool* L_15 = p0;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
extern MethodInfo m9795_MI;
extern "C" t58 m9795 (t1596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_1 = m2510(__this, &m2510_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_1);
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_3, L_2, &m6911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		t58 L_4 = (__this->f0);
		return L_4;
	}
}
extern MethodInfo m9796_MI;
extern "C" void m9796 (t1596 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_1 = m2510(__this, &m2510_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_1);
		t1530 * L_3 = (t1530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1530_TI));
		m6911(L_3, L_2, &m6911_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->f2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->f2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = m11016(NULL, L_6, L_7, L_8, &m11016_MI);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = (__this->f3);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12031_MI, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12032_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
extern MethodInfo m9797_MI;
extern "C" void m9797 (t1596 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9798_MI, __this, 1);
		m6895(NULL, __this, &m6895_MI);
		return;
	}
}
extern "C" void m9798 (t1596 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		m9793(__this, &m9793_MI);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
extern MethodInfo m9799_MI;
extern "C" void m9799 (t1596 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9800_MI;
extern "C" void m9800 (t1596 * __this, MethodInfo* method)
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
			bool L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12031_MI, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&m12032_MI, __this);
			t58 L_2 = (__this->f1);
			__this->f0 = L_2;
		}

IL_0023:
		{
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
		m9769(__this, &m9769_MI);
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
#include "t1849.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1849_TI;
#include "t1849MD.h"



extern MethodInfo m9801_MI;
extern "C" void m9801 (t1849 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t1850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1850_TI;
#include "t1850MD.h"



extern MethodInfo m9802_MI;
extern "C" void m9802 (t1850 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1579.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1579_TI;
#include "t1579MD.h"



#include "t1851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1851_TI;
#include "t1851MD.h"

#include "t1855.h"
#include "t1917.h"
#include "t1926.h"
#include "t1858.h"
#include "t1853.h"
#include "t1170.h"
#include "t1861.h"
#include "t1854.h"
#include "t1856.h"
#include "t1863.h"
extern TypeInfo t1855_TI;
extern TypeInfo t2179_TI;
extern TypeInfo t1926_TI;
extern TypeInfo t1858_TI;
extern TypeInfo t1925_TI;
extern TypeInfo t1927_TI;
extern TypeInfo t1853_TI;
extern TypeInfo t1854_TI;
extern TypeInfo t1852_TI;
extern TypeInfo t1856_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t998_TI;
extern TypeInfo t1863_TI;
extern TypeInfo t1872_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1861_TI;
extern TypeInfo t1860_TI;
extern TypeInfo t137_TI;
#include "t1855MD.h"
#include "t1926MD.h"
#include "t1858MD.h"
#include "t1403MD.h"
#include "t1925MD.h"
#include "t1927MD.h"
#include "t1853MD.h"
#include "t1854MD.h"
#include "t1856MD.h"
#include "t1170MD.h"
#include "t1863MD.h"
#include "t1872MD.h"
extern MethodInfo m9808_MI;
extern MethodInfo m10088_MI;
extern MethodInfo m9811_MI;
extern MethodInfo m6077_MI;
extern MethodInfo m10086_MI;
extern MethodInfo m10106_MI;
extern MethodInfo m7753_MI;
extern MethodInfo m10107_MI;
extern MethodInfo m9901_MI;
extern MethodInfo m9803_MI;
extern MethodInfo m9807_MI;
extern MethodInfo m9908_MI;
extern MethodInfo m9904_MI;
extern MethodInfo m9809_MI;
extern MethodInfo m5726_MI;
extern MethodInfo m5848_MI;
extern MethodInfo m11039_MI;
extern MethodInfo m5727_MI;
extern MethodInfo m361_MI;
extern MethodInfo m12033_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5737_MI;
extern MethodInfo m8444_MI;
extern MethodInfo m9910_MI;
extern MethodInfo m12034_MI;
extern MethodInfo m2737_MI;


extern "C" t9 * m9803 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = ((t1851_SFs*)InitializedTypeInfo(&t1851_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1855 * L_1 = (t1855 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1855_TI));
		m9808(L_1, &m9808_MI);
		((t1851_SFs*)InitializedTypeInfo(&t1851_TI)->static_fields)->f0 = L_1;
	}

IL_0011:
	{
		t9 * L_2 = ((t1851_SFs*)InitializedTypeInfo(&t1851_TI)->static_fields)->f0;
		return L_2;
	}
}
extern MethodInfo m9804_MI;
extern "C" t9 * m9804 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t9 * V_1 = {0};
	t158* V_2 = {0};
	int32_t V_3 = 0;
	t1917 * V_4 = {0};
	{
		V_0 = (t2*)NULL;
		t158* L_0 = p1;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		t158* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_1 = (*(t9 **)(t9 **)SZArrayLdElema(L_1, L_3));
		t9 * L_4 = V_1;
		if (((t9 *)IsInst(L_4, InitializedTypeInfo(&t2179_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t1926 * L_5 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_5, (t2*) &_stringLiteral2074, &m10088_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		t9 * L_6 = V_1;
		if (!((t1858 *)IsInst(L_6, InitializedTypeInfo(&t1858_TI))))
		{
			goto IL_0033;
		}
	}
	{
		t9 * L_7 = V_1;
		t2* L_8 = m9811(((t1858 *)Castclass(L_7, InitializedTypeInfo(&t1858_TI))), &m9811_MI);
		V_0 = L_8;
	}

IL_0033:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_3;
		t158* L_11 = V_2;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((t121 *)L_11)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		t2* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		t126 * L_13 = p0;
		t2* L_14 = V_0;
		t158* L_15 = p1;
		t9 * L_16 = m6077(NULL, L_13, L_14, L_15, &m6077_MI);
		return L_16;
	}

IL_0049:
	{
		t126 * L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t1917 * L_18 = m10086(NULL, L_17, &m10086_MI);
		V_4 = L_18;
		t1917 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		t1917 * L_20 = V_4;
		t158* L_21 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t9 * L_22 = m10106(NULL, L_20, L_21, &m10106_MI);
		return L_22;
	}

IL_005e:
	{
		t126 * L_23 = p0;
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7753_MI, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_25 = p0;
		t158* L_26 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t9 * L_27 = m10107(NULL, L_25, L_26, &m10107_MI);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
extern MethodInfo m9805_MI;
extern "C" t1853 * m9805 (t9 * __this , t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	t1853 * V_0 = {0};
	t9 * V_1 = {0};
	t1170 * V_2 = {0};
	bool V_3 = false;
	t1861 * V_4 = {0};
	t9 * V_5 = {0};
	t9 * V_6 = {0};
	t158* V_7 = {0};
	t9 * V_8 = {0};
	t158* V_9 = {0};
	int32_t V_10 = 0;
	t9 * V_11 = {0};
	t9 * V_12 = {0};
	t9 * V_13 = {0};
	t9 * V_14 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		t126 * L_0 = p0;
		t1853 * L_1 = (t1853 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1853_TI));
		m9901(L_1, L_0, &m9901_MI);
		V_0 = L_1;
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7753_MI, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		t1853 * L_4 = V_0;
		t2* L_5 = p1;
		t9 * L_6 = m9803(NULL, &m9803_MI);
		t1854 * L_7 = (t1854 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1854_TI));
		m9807(L_7, L_5, L_6, &m9807_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m9908_MI, L_4, L_7);
		t1853 * L_8 = V_0;
		m9904(L_8, 0, &m9904_MI);
		t1853 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		t9 * L_10 = m9803(NULL, &m9803_MI);
		V_1 = L_10;
		t9 * L_11 = V_1;
		t1856 * L_12 = (t1856 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1856_TI));
		m9809(L_12, L_11, &m9809_MI);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_13 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_13, &m5726_MI);
		V_2 = L_13;
		t158* L_14 = p2;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		t1170 * L_15 = V_2;
		t158* L_16 = p2;
		VirtActionInvoker1< t9 * >::Invoke(&m5848_MI, L_15, (t9 *)(t9 *)L_16);
	}

IL_0046:
	{
		t2* L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t2* L_18 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_17, L_18, &m331_MI);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1861 * L_20 = m11039(NULL, &m11039_MI);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		t1170 * L_22 = V_2;
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5727_MI, L_22);
		V_6 = L_23;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			t9 * L_24 = V_6;
			t9 * L_25 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_24);
			V_5 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t2179_TI)));
			t9 * L_26 = V_5;
			t1861 * L_27 = V_4;
			t1853 * L_28 = V_0;
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, t1861 *, t9 * >::Invoke(&m12033_MI, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			t9 * L_30 = V_6;
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_30);
			if (L_31)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			t9 * L_32 = V_6;
			V_13 = ((t9 *)IsInst(L_32, InitializedTypeInfo(&t137_TI)));
			t9 * L_33 = V_13;
			if (L_33)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009d:
		{
			t9 * L_34 = V_13;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_34);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00a5:
	{
		t126 * L_35 = p0;
		t158* L_36 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12016_MI, L_35, 1);
		V_7 = L_36;
		t158* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		t158* L_38 = V_9;
		int32_t L_39 = V_10;
		int32_t L_40 = L_39;
		V_8 = (*(t9 **)(t9 **)SZArrayLdElema(L_38, L_40));
		t9 * L_41 = V_8;
		if (!((t9 *)IsInst(L_41, InitializedTypeInfo(&t2179_TI))))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		t9 * L_43 = V_8;
		t1861 * L_44 = V_4;
		t1853 * L_45 = V_0;
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, t1861 *, t9 * >::Invoke(&m12033_MI, ((t9 *)Castclass(L_43, InitializedTypeInfo(&t2179_TI))), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		t1170 * L_47 = V_2;
		t9 * L_48 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		t158* L_51 = V_9;
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((t121 *)L_51)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0144;
		}
	}
	{
		t1853 * L_53 = V_0;
		t1170 * L_54 = V_2;
		t158* L_55 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8444_MI, L_54);
		m9910(L_53, L_55, &m9910_MI);
		t1170 * L_56 = V_2;
		t9 * L_57 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5727_MI, L_56);
		V_12 = L_57;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			t9 * L_58 = V_12;
			t9 * L_59 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_58);
			V_11 = ((t9 *)Castclass(L_59, InitializedTypeInfo(&t2179_TI)));
			t9 * L_60 = V_11;
			t1853 * L_61 = V_0;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12034_MI, L_60, L_61);
		}

IL_0123:
		{
			t9 * L_62 = V_12;
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_62);
			if (L_63)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			t9 * L_64 = V_12;
			V_14 = ((t9 *)IsInst(L_64, InitializedTypeInfo(&t137_TI)));
			t9 * L_65 = V_14;
			if (L_65)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(302)
		}

IL_013c:
		{
			t9 * L_66 = V_14;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_66);
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0144:
	{
		t2* L_67 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t2* L_68 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_69 = m2737(NULL, L_67, L_68, &m2737_MI);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		t2* L_70 = p1;
		t9 * L_71 = V_1;
		t1854 * L_72 = (t1854 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1854_TI));
		m9807(L_72, L_70, L_71, &m9807_MI);
		V_1 = L_72;
	}

IL_0159:
	{
		t1853 * L_73 = V_0;
		t9 * L_74 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m9908_MI, L_73, L_74);
		t1853 * L_75 = V_0;
		bool L_76 = V_3;
		m9904(L_75, L_76, &m9904_MI);
		t1853 * L_77 = V_0;
		return L_77;
	}
}
extern MethodInfo m9806_MI;
extern "C" t9 * m9806 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m9806_ftn) (t126 *);
	static m9806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9806_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9807 (t1854 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		t9 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9808 (t1855 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9809 (t1856 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1857_TI;
#include "t1857MD.h"

#include "t1209.h"
#include "t1876.h"
#include "t304.h"
#include "t156.h"
extern TypeInfo t1209_TI;
extern TypeInfo t1874_TI;
extern TypeInfo t1876_TI;
extern TypeInfo t304_TI;
#include "t1209MD.h"
#include "t304MD.h"
extern MethodInfo m6037_MI;
extern MethodInfo m12035_MI;
extern MethodInfo m11833_MI;
extern MethodInfo m12036_MI;
extern MethodInfo m12037_MI;
extern MethodInfo m12038_MI;


extern MethodInfo m9810_MI;
extern "C" t9 * m9810 (t1857 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = m6037(__this, &m6037_MI);
		V_0 = ((t9 *)Castclass(L_0, InitializedTypeInfo(&t1874_TI)));
		t9 * L_1 = V_0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12035_MI, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		t9 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_4 = m11833(NULL, (30.0), &m11833_MI);
		InterfaceActionInvoker1< t304  >::Invoke(&m12036_MI, L_3, L_4);
		t9 * L_5 = V_0;
		t304  L_6 = m11833(NULL, (1.0), &m11833_MI);
		InterfaceActionInvoker1< t304  >::Invoke(&m12037_MI, L_5, L_6);
		t9 * L_7 = V_0;
		t304  L_8 = m11833(NULL, (10.0), &m11833_MI);
		InterfaceActionInvoker1< t304  >::Invoke(&m12038_MI, L_7, L_8);
	}

IL_0051:
	{
		t9 * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4231_MI;


extern "C" t2* m9811 (t1858 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9812_MI;
extern "C" bool m9812 (t1858 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (((t1858 *)IsInst(L_0, InitializedTypeInfo(&t1858_TI))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t9 * L_1 = p0;
		t2* L_2 = m9811(((t1858 *)Castclass(L_1, InitializedTypeInfo(&t1858_TI))), &m9811_MI);
		t2* L_3 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_2, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m9813_MI;
extern "C" int32_t m9813 (t1858 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9814_MI;
extern "C" void m9814 (t1858 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9815_MI;
extern "C" bool m9815 (t1858 * __this, t1861 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1862.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1862_TI;
#include "t1862MD.h"

extern MethodInfo m9821_MI;


extern MethodInfo m9816_MI;
extern "C" void m9816 (t1862 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t158* L_0 = m9821(NULL, &m9821_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9817_MI;
extern "C" t158* m9817 (t1862 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1864.h"
extern TypeInfo t1864_TI;
extern TypeInfo t2180_TI;
extern TypeInfo t1865_TI;
extern TypeInfo t2181_TI;
extern TypeInfo t999_TI;
#include "t1864MD.h"
#include "t301MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m9845_MI;
extern MethodInfo m9820_MI;
extern MethodInfo m12039_MI;
extern MethodInfo m590_MI;
extern MethodInfo m12040_MI;
extern MethodInfo m5876_MI;
extern MethodInfo m1082_MI;
extern MethodInfo m5724_MI;
extern MethodInfo m12041_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m5856_MI;
extern MethodInfo m11965_MI;
extern MethodInfo m12042_MI;
extern MethodInfo m1084_MI;
extern MethodInfo m12043_MI;


extern MethodInfo m9818_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9818 (t9 * __this , MethodInfo* method)
{
	static bool m9818_init;
	if (!m9818_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9818_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_0, &m5726_MI);
		((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0 = L_0;
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_1, &m5726_MI);
		((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f1 = L_1;
		t1864 * L_2 = (t1864 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1864_TI));
		m9845(L_2, &m9845_MI);
		((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f2 = L_2;
		((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f3 = (t2*) &_stringLiteral2075;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 2));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2076);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral2076;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2077);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral2077;
		((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f4 = (t9 *)L_4;
		return;
	}
}
extern MethodInfo m9819_MI;
extern "C" void m9819 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		m9820(NULL, L_0, 0, &m9820_MI);
		return;
	}
}
extern "C" void m9820 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	t9 * V_4 = {0};
	t9 * V_5 = {0};
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
		m339(L_1, (t2*) &_stringLiteral2078, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = p1;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		t9 * L_3 = p0;
		V_1 = ((t9 *)IsInst(L_3, InitializedTypeInfo(&t2180_TI)));
		t9 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		t9 * L_5 = p0;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12039_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m590(NULL, (t2*) &_stringLiteral2079, L_6, &m590_MI);
		t1926 * L_8 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_8, L_7, &m10088_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		t9 * L_9 = V_1;
		InterfaceActionInvoker1< bool >::Invoke(&m12040_MI, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1170 * L_10 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
		t9 * L_11 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_10);
		V_0 = L_11;
		t9 * L_12 = V_0;
		m1082(NULL, L_12, &m1082_MI);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1170 * L_13 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
			int32_t L_14 = V_3;
			t9 * L_15 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5724_MI, L_13, L_14);
			V_4 = ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1865_TI)));
			t9 * L_16 = V_4;
			t2* L_17 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12039_MI, L_16);
			t9 * L_18 = p0;
			t2* L_19 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12039_MI, L_18);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			bool L_20 = m331(NULL, L_17, L_19, &m331_MI);
			if (!L_20)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			t9 * L_21 = p0;
			t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12039_MI, L_21);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
			bool L_24 = m2737(NULL, L_22, L_23, &m2737_MI);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			t9 * L_25 = V_4;
			t2* L_26 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12039_MI, L_25);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_27 = m399(NULL, (t2*) &_stringLiteral2080, L_26, (t2*) &_stringLiteral2081, &m399_MI);
			t1926 * L_28 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
			m10088(L_28, L_27, &m10088_MI);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			t9 * L_29 = V_4;
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12041_MI, L_29);
			t9 * L_31 = p0;
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12041_MI, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00b8:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00bc:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1170 * L_37 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1170 * L_40 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
			int32_t L_41 = V_2;
			t9 * L_42 = p0;
			VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5856_MI, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1170 * L_43 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
			t9 * L_44 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_43, L_44);
		}

IL_00e7:
		{
			t9 * L_45 = p0;
			V_5 = ((t9 *)IsInst(L_45, InitializedTypeInfo(&t2181_TI)));
			t9 * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t9 * L_47 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f4;
			t9 * L_48 = p0;
			t126 * L_49 = m2510(L_48, &m2510_MI);
			t2* L_50 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7798_MI, L_49);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m11965_MI, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			t9 * L_52 = V_5;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12042_MI, L_52, NULL);
		}

IL_0112:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		t9 * L_53 = V_0;
		m1084(NULL, L_53, &m1084_MI);
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_011b:
	{
		return;
	}
}
extern "C" t158* m9821 (t9 * __this , MethodInfo* method)
{
	t1170 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t9 * V_5 = {0};
	t9 * V_6 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_0, &m5726_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1170 * L_1 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_1);
		V_1 = L_2;
		t9 * L_3 = V_1;
		m1082(NULL, L_3, &m1082_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1170 * L_4 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f0;
			t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5727_MI, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				t9 * L_6 = V_3;
				t9 * L_7 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_6);
				V_2 = L_7;
				t9 * L_8 = V_2;
				V_4 = ((t9 *)IsInst(L_8, InitializedTypeInfo(&t2181_TI)));
				t9 * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				t9 * L_10 = V_4;
				t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12043_MI, L_10);
				V_5 = L_11;
				t9 * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				t1170 * L_13 = V_0;
				t9 * L_14 = V_5;
				VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_13, L_14);
			}

IL_004d:
			{
				t9 * L_15 = V_3;
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_15);
				if (L_16)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x6C, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (t138 *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				t9 * L_17 = V_3;
				V_6 = ((t9 *)IsInst(L_17, InitializedTypeInfo(&t137_TI)));
				t9 * L_18 = V_6;
				if (L_18)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(87)
			}

IL_0064:
			{
				t9 * L_19 = V_6;
				InterfaceActionInvoker0::Invoke(&m365_MI, L_19);
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_JUMP_TBL(0x6C, IL_006c)
			IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		t9 * L_20 = V_1;
		m1084(NULL, L_20, &m1084_MI);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0075:
	{
		t1170 * L_21 = V_0;
		t158* L_22 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8444_MI, L_21);
		return L_22;
	}
}
#include "t1866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1866_TI;
#include "t1866MD.h"

extern MethodInfo m10085_MI;


extern MethodInfo m9822_MI;
extern "C" void m9822 (t1866 * __this, int32_t p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = 0;
		t9 * L_1 = Box(InitializedTypeInfo(&t125_TI), &L_0);
		__this->f0 = L_1;
		int32_t L_2 = p0;
		__this->f1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t2* L_3 = m10085(NULL, &m10085_MI);
		__this->f2 = L_3;
		return;
	}
}
#include "t1867.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1867_TI;
#include "t1867MD.h"

extern MethodInfo m11043_MI;
extern MethodInfo m9823_MI;


extern "C" void m9823 (t1867 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9824_MI;
extern "C" void m9824 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1867_SFs*)InitializedTypeInfo(&t1867_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9825_MI;
extern "C" void m9825 (t9 * __this , MethodInfo* method)
{
	t9 * V_0 = {0};
	t1867 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1867_TI));
		t9 * L_0 = ((t1867_SFs*)InitializedTypeInfo(&t1867_TI)->static_fields)->f0;
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1082(NULL, L_1, &m1082_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1867_TI));
		t1867 * L_2 = (t1867 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1867_TI));
		m9823(L_2, &m9823_MI);
		V_1 = L_2;
		t1867 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		m9819(NULL, L_3, &m9819_MI);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		t9 * L_4 = V_0;
		m1084(NULL, L_4, &m1084_MI);
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
extern MethodInfo m9826_MI;
extern "C" t2* m9826 (t1867 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral2082;
	}
}
extern MethodInfo m9827_MI;
extern "C" int32_t m9827 (t1867 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
extern MethodInfo m9828_MI;
extern "C" t9 * m9828 (t1867 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		int32_t L_0 = m11043(NULL, &m11043_MI);
		t1866 * L_1 = (t1866 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1866_TI));
		m9822(L_1, L_0, &m9822_MI);
		return L_1;
	}
}
extern MethodInfo m9829_MI;
extern "C" void m9829 (t1867 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1868.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1868_TI;
#include "t1868MD.h"

#include "t1158.h"
extern TypeInfo t1158_TI;
#include "t1158MD.h"
extern Il2CppType t1868_0_0_0;
extern MethodInfo m5911_MI;


extern MethodInfo m9830_MI;
extern "C" void m9830 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_0, &m5911_MI);
		((t1868_SFs*)InitializedTypeInfo(&t1868_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1868_0_0_0), &m329_MI);
		t828 * L_2 = (t828 *)VirtFuncInvoker2< t828 *, t2*, int32_t >::Invoke(&m7782_MI, L_1, (t2*) &_stringLiteral2083, ((int32_t)40));
		((t1868_SFs*)InitializedTypeInfo(&t1868_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern MethodInfo m9831_MI;
extern "C" int32_t m9831 (t1868 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1861MD.h"

#include "t1891.h"
extern TypeInfo t1869_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t2182_TI;
extern TypeInfo t1404_TI;
#include "t2036MD.h"
#include "t1891MD.h"
extern MethodInfo m11127_MI;
extern MethodInfo m12044_MI;
extern MethodInfo m12045_MI;


extern MethodInfo m9832_MI;
extern "C" void m9832 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_0, &m5911_MI);
		((t1861_SFs*)InitializedTypeInfo(&t1861_TI)->static_fields)->f2 = L_0;
		return;
	}
}
extern MethodInfo m9833_MI;
extern "C" void m9833 (t1861 * __this, MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0009:
	{
		return;
	}
}
extern MethodInfo m9834_MI;
extern "C" t1861 * m9834 (t9 * __this , MethodInfo* method)
{
	{
		t1861 * L_0 = m11127(NULL, &m11127_MI);
		return L_0;
	}
}
extern MethodInfo m9835_MI;
extern "C" bool m9835 (t1861 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9836_MI;
extern "C" t9 * m9836 (t1861 * __this, t2* p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t9 * V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1170 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t9 *)NULL;
	}

IL_000a:
	{
		t1170 * L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5727_MI, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			t9 * L_3 = V_1;
			t9 * L_4 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_3);
			V_0 = ((t9 *)Castclass(L_4, InitializedTypeInfo(&t1869_TI)));
			t9 * L_5 = V_0;
			t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12044_MI, L_5);
			t2* L_7 = p0;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			bool L_8 = m331(NULL, L_6, L_7, &m331_MI);
			if (!L_8)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			t9 * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0036:
		{
			t9 * L_10 = V_1;
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_10);
			if (L_11)
			{
				goto IL_0018;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			t9 * L_12 = V_1;
			V_3 = ((t9 *)IsInst(L_12, InitializedTypeInfo(&t137_TI)));
			t9 * L_13 = V_3;
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			t9 * L_14 = V_3;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_14);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0052:
	{
		return (t9 *)NULL;
	}

IL_0054:
	{
		t9 * L_15 = V_2;
		return L_15;
	}
}
extern MethodInfo m9837_MI;
extern "C" t2* m9837 (t1861 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral2084, L_2, &m511_MI);
		return L_3;
	}
}
extern MethodInfo m9838_MI;
extern "C" t9 * m9838 (t1861 * __this, t1209 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1891_TI));
		t1891 * L_0 = ((t1891_SFs*)InitializedTypeInfo(&t1891_TI)->static_fields)->f0;
		V_0 = L_0;
		t1170 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		t1170 * L_2 = (__this->f1);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5727_MI, L_2);
		V_2 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			t9 * L_4 = V_2;
			t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_4);
			V_1 = ((t9 *)Castclass(L_5, InitializedTypeInfo(&t1869_TI)));
			t9 * L_6 = V_1;
			V_3 = ((t9 *)IsInst(L_6, InitializedTypeInfo(&t2182_TI)));
			t9 * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			t9 * L_8 = V_3;
			t1209 * L_9 = p0;
			t9 * L_10 = V_0;
			t9 * L_11 = (t9 *)InterfaceFuncInvoker2< t9 *, t1209 *, t9 * >::Invoke(&m12045_MI, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_003b:
		{
			t9 * L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_12);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			t9 * L_14 = V_2;
			V_4 = ((t9 *)IsInst(L_14, InitializedTypeInfo(&t137_TI)));
			t9 * L_15 = V_4;
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0052:
		{
			t9 * L_16 = V_4;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_16);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_005a:
	{
		t9 * L_17 = V_0;
		return L_17;
	}
}
#include "t1859.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1859_TI;
#include "t1859MD.h"

extern MethodInfo m12046_MI;
extern MethodInfo m5943_MI;
extern MethodInfo m12047_MI;


extern MethodInfo m9839_MI;
extern "C" void m9839 (t1859 * __this, t2* p0, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9840_MI;
extern "C" t2* m9840 (t1859 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9841_MI;
extern "C" bool m9841 (t1859 * __this, t9 * p0, MethodInfo* method)
{
	t1859 * V_0 = {0};
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
		if (((t1859 *)IsInst(L_1, InitializedTypeInfo(&t1859_TI))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		t9 * L_2 = p0;
		V_0 = ((t1859 *)Castclass(L_2, InitializedTypeInfo(&t1859_TI)));
		t1859 * L_3 = V_0;
		t2* L_4 = (L_3->f0);
		t2* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m2737(NULL, L_4, L_5, &m2737_MI);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
extern MethodInfo m9842_MI;
extern "C" int32_t m9842 (t1859 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
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
		t2* L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m9843_MI;
extern "C" void m9843 (t1859 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2085, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		t9 * L_3 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12046_MI, L_2);
		V_0 = L_3;
		t9 * L_4 = V_0;
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5943_MI, L_4, __this);
		return;
	}
}
extern MethodInfo m9844_MI;
extern "C" bool m9844 (t1859 * __this, t1861 * p0, t9 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = p1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral2085, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1861 * L_2 = p0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral2086, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p1;
		t126 * L_5 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12047_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7753_MI, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		t1861 * L_7 = p0;
		t2* L_8 = (__this->f0);
		t9 * L_9 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9836_MI, L_7, L_8);
		V_0 = L_9;
		t9 * L_10 = V_0;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		t9 * L_11 = V_0;
		if ((((t9*)(t1859 *)__this) == ((t9*)(t9 *)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9845 (t1864 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t1870.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1870_TI;
#include "t1870MD.h"

#include "t1871.h"
#include "t1486.h"
#include "t1872.h"
extern TypeInfo t1486_TI;
extern TypeInfo t1871_TI;
#include "t1486MD.h"
#include "t1871MD.h"
extern MethodInfo m6993_MI;
extern MethodInfo m9849_MI;
extern MethodInfo m11041_MI;
extern MethodInfo m11026_MI;
extern MethodInfo m9847_MI;
extern MethodInfo m11023_MI;
extern MethodInfo m9848_MI;


extern MethodInfo m9846_MI;
extern "C" void m9846 (t1870 * __this, MethodInfo* method)
{
	{
		m9847(__this, 8, 0, &m9847_MI);
		return;
	}
}
extern "C" void m9847 (t1870 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		t1871 * L_0 = (t1871 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1871_TI));
		m11023(L_0, 0, &m11023_MI);
		__this->f4 = L_0;
		m9839(__this, (t2*) &_stringLiteral2087, &m9839_MI);
		int32_t L_1 = p0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = p0;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		t563 * L_5 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_5, (t2*) &_stringLiteral562, &m2909_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = p1;
		__this->f1 = L_6;
		int32_t L_7 = p0;
		__this->f2 = L_7;
		return;
	}
}
extern "C" void m9848 (t1870 * __this, bool p0, MethodInfo* method)
{
	t1870 * V_0 = {0};
	t1870 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		t1871 * L_1 = (__this->f4);
		VirtFuncInvoker0< bool >::Invoke(&m6993_MI, L_1);
		V_0 = __this;
		t1870 * L_2 = V_0;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->f3);
			__this->f3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->f3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			m9849(__this, &m9849_MI);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
			t1872 * L_5 = m11041(NULL, &m11041_MI);
			__this->f5 = L_5;
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		t1870 * L_6 = V_0;
		m1084(NULL, L_6, &m1084_MI);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		t1870 * L_7 = V_1;
		m1082(NULL, L_7, &m1082_MI);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_8 = (__this->f3);
			__this->f3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			t1871 * L_9 = (__this->f4);
			m11026(L_9, &m11026_MI);
			__this->f5 = (t1872 *)NULL;
		}

IL_0074:
		{
			int32_t L_10 = (__this->f3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			t1872 * L_11 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
			t1872 * L_12 = m11041(NULL, &m11041_MI);
			if ((((t9*)(t1872 *)L_11) == ((t9*)(t1872 *)L_12)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		t1870 * L_13 = V_1;
		m1084(NULL, L_13, &m1084_MI);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0093:
	{
		return;
	}
}
extern "C" void m9849 (t1870 * __this, MethodInfo* method)
{
	t1870 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1870 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->f3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			t1872 * L_2 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
			t1872 * L_3 = m11041(NULL, &m11041_MI);
			if ((!(((t9*)(t1872 *)L_2) == ((t9*)(t1872 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->f3);
			__this->f3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			t1871 * L_5 = (__this->f4);
			m11026(L_5, &m11026_MI);
			__this->f5 = (t1872 *)NULL;
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
		t1870 * L_6 = V_0;
		m1084(NULL, L_6, &m1084_MI);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0047:
	{
		return;
	}
}
extern MethodInfo m9850_MI;
extern "C" void m9850 (t1870 * __this, t9 * p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		t9 * L_1 = p0;
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12046_MI, L_1);
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5943_MI, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m9851_MI;
extern "C" bool m9851 (t1870 * __this, t1861 * p0, t9 * p1, MethodInfo* method)
{
	t1870 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t1861 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9836_MI, L_0, (t2*) &_stringLiteral2087);
		V_0 = ((t1870 *)IsInst(L_1, InitializedTypeInfo(&t1870_TI)));
		int32_t L_2 = (__this->f2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		t1870 * L_4 = V_0;
		return ((((t9*)(t1870 *)L_4) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0047:
	{
		t1870 * L_5 = V_0;
		return ((((int32_t)((((t9*)(t1870 *)L_5) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
extern MethodInfo m9852_MI;
extern "C" void m9852 (t9 * __this , MethodInfo* method)
{
	t1870 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1861 * L_0 = m11039(NULL, &m11039_MI);
		bool L_1 = m9835(L_0, &m9835_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1861 * L_2 = m11039(NULL, &m11039_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9836_MI, L_2, (t2*) &_stringLiteral2087);
		V_0 = ((t1870 *)IsInst(L_3, InitializedTypeInfo(&t1870_TI)));
		t1870 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		t1870 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9848_MI, L_5, 0);
		return;
	}
}
extern MethodInfo m9853_MI;
extern "C" void m9853 (t9 * __this , MethodInfo* method)
{
	t1870 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1861 * L_0 = m11039(NULL, &m11039_MI);
		bool L_1 = m9835(L_0, &m9835_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1872_TI));
		t1861 * L_2 = m11039(NULL, &m11039_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9836_MI, L_2, (t2*) &_stringLiteral2087);
		V_0 = ((t1870 *)IsInst(L_3, InitializedTypeInfo(&t1870_TI)));
		t1870 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		t1870 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9848_MI, L_5, 1);
		return;
	}
}
#include "t1873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1873_TI;
#include "t1873MD.h"



extern MethodInfo m9854_MI;
extern "C" void m9854 (t1873 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9855_MI;
extern "C" t304  m9855 (t1873 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9855((t1873 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t304  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t304  (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t304  (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t304  pinvoke_delegate_wrapper_t1873(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
extern MethodInfo m9856_MI;
extern "C" t9 * m9856 (t1873 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9857_MI;
extern "C" t304  m9857 (t1873 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t304 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1875.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1875_TI;
#include "t1875MD.h"

#include "t270.h"
#include "t1686.h"
#include "t2071.h"
#include "t2070.h"
extern TypeInfo t270_TI;
extern TypeInfo t1880_TI;
extern TypeInfo t1686_TI;
extern TypeInfo t1877_TI;
extern TypeInfo t469_TI;
extern TypeInfo t470_TI;
extern TypeInfo t2071_TI;
#include "t270MD.h"
#include "t1880MD.h"
#include "t1686MD.h"
#include "t2071MD.h"
#include "t2078MD.h"
extern MethodInfo m1099_MI;
extern MethodInfo m11468_MI;
extern MethodInfo m2419_MI;
extern MethodInfo m11465_MI;
extern MethodInfo m11841_MI;
extern MethodInfo m5770_MI;
extern MethodInfo m9877_MI;
extern MethodInfo m9878_MI;
extern MethodInfo m9879_MI;
extern MethodInfo m5853_MI;
extern MethodInfo m9859_MI;
extern MethodInfo m4250_MI;
extern MethodInfo m5937_MI;
extern MethodInfo m11842_MI;
extern MethodInfo m8533_MI;
extern MethodInfo m9868_MI;
extern MethodInfo m8535_MI;
extern MethodInfo m8543_MI;
extern MethodInfo m12048_MI;
extern MethodInfo m7024_MI;
extern MethodInfo m9869_MI;
extern MethodInfo m11935_MI;
extern MethodInfo m11074_MI;
extern MethodInfo m11844_MI;
extern MethodInfo m9865_MI;
extern MethodInfo m8541_MI;
extern MethodInfo m9866_MI;


extern MethodInfo m9858_MI;
extern "C" void m9858 (t1875 * __this, MethodInfo* method)
{
	{
		m5770(__this, &m5770_MI);
		__this->f2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_0 = m9877(NULL, &m9877_MI);
		__this->f3 = L_0;
		t304  L_1 = m9878(NULL, &m9878_MI);
		__this->f4 = L_1;
		t304  L_2 = m9879(NULL, &m9879_MI);
		__this->f5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_3 = m1099(NULL, &m1099_MI);
		t304  L_4 = (__this->f3);
		t270  L_5 = m11465(NULL, L_3, L_4, &m11465_MI);
		__this->f1 = L_5;
		return;
	}
}
extern "C" t304  m9859 (t1875 * __this, MethodInfo* method)
{
	{
		t270  L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_1 = m1099(NULL, &m1099_MI);
		t304  L_2 = m11468(NULL, L_0, L_1, &m11468_MI);
		return L_2;
	}
}
extern MethodInfo m9860_MI;
extern "C" int32_t m9860 (t1875 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9861_MI;
extern "C" void m9861 (t1875 * __this, MethodInfo* method)
{
	{
		__this->f2 = 2;
		return;
	}
}
extern MethodInfo m9862_MI;
extern "C" void m9862 (t1875 * __this, t304  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1876_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2419(NULL, (t2*) &_stringLiteral2088, L_3, (t2*) &_stringLiteral139, &m2419_MI);
		t1926 * L_5 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_5, L_4, &m10088_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t304  L_6 = p0;
		__this->f3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_7 = m1099(NULL, &m1099_MI);
		t304  L_8 = (__this->f3);
		t270  L_9 = m11465(NULL, L_7, L_8, &m11465_MI);
		__this->f1 = L_9;
		t304  L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_11 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		bool L_12 = m11841(NULL, L_10, L_11, &m11841_MI);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		__this->f2 = 0;
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m9863_MI;
extern "C" void m9863 (t1875 * __this, t304  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1876_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2419(NULL, (t2*) &_stringLiteral2089, L_3, (t2*) &_stringLiteral139, &m2419_MI);
		t1926 * L_5 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_5, L_4, &m10088_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t304  L_6 = p0;
		__this->f4 = L_6;
		return;
	}
}
extern MethodInfo m9864_MI;
extern "C" void m9864 (t1875 * __this, t304  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t1876_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2419(NULL, (t2*) &_stringLiteral2090, L_3, (t2*) &_stringLiteral139, &m2419_MI);
		t1926 * L_5 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_5, L_4, &m10088_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t304  L_6 = p0;
		__this->f5 = L_6;
		return;
	}
}
extern "C" t304  m9865 (t1875 * __this, t304  p0, MethodInfo* method)
{
	t270  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_0 = m1099(NULL, &m1099_MI);
		t304  L_1 = p0;
		t270  L_2 = m11465(NULL, L_0, L_1, &m11465_MI);
		V_0 = L_2;
		t270  L_3 = V_0;
		t270  L_4 = (__this->f1);
		bool L_5 = m5853(NULL, L_3, L_4, &m5853_MI);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		t270  L_6 = V_0;
		__this->f1 = L_6;
	}

IL_0021:
	{
		t304  L_7 = (t304 )VirtFuncInvoker0< t304  >::Invoke(&m9859_MI, __this);
		return L_7;
	}
}
extern "C" void m9866 (t1875 * __this, t9 * p0, MethodInfo* method)
{
	t1875 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1875 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1170 * L_1 = (__this->f6);
			if (L_1)
			{
				goto IL_0012;
			}
		}

IL_0010:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}

IL_0012:
		{
			V_1 = 0;
			goto IL_003c;
		}

IL_0016:
		{
			t1170 * L_2 = (__this->f6);
			int32_t L_3 = V_1;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5724_MI, L_2, L_3);
			t9 * L_5 = p0;
			bool L_6 = m4250(NULL, L_4, L_5, &m4250_MI);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			t1170 * L_7 = (__this->f6);
			int32_t L_8 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5937_MI, L_7, L_8);
			goto IL_004a;
		}

IL_0038:
		{
			int32_t L_9 = V_1;
			V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		}

IL_003c:
		{
			int32_t L_10 = V_1;
			t1170 * L_11 = (__this->f6);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_11);
			if ((((int32_t)L_10) < ((int32_t)L_12)))
			{
				goto IL_0016;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		t1875 * L_13 = V_0;
		m1084(NULL, L_13, &m1084_MI);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0053:
	{
		return;
	}
}
extern MethodInfo m9867_MI;
extern "C" void m9867 (t1875 * __this, MethodInfo* method)
{
	t1875 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		t304  L_1 = (t304 )VirtFuncInvoker0< t304  >::Invoke(&m9859_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_2 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
		bool L_3 = m11842(NULL, L_1, L_2, &m11842_MI);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		t1170 * L_4 = (__this->f6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->f2 = 3;
		V_0 = __this;
		t1875 * L_5 = V_0;
		m1082(NULL, L_5, &m1082_MI);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		t1170 * L_6 = (__this->f6);
		t1686 * L_7 = (t1686 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1686_TI));
		m8533(L_7, L_6, &m8533_MI);
		__this->f7 = L_7;
		IL2CPP_LEAVE(0x4E, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		t1875 * L_8 = V_0;
		m1084(NULL, L_8, &m1084_MI);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004e:
	{
		m9868(__this, &m9868_MI);
		goto IL_005d;
	}

IL_0056:
	{
		__this->f2 = 4;
	}

IL_005d:
	{
		return;
	}
}
extern "C" void m9868 (t1875 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	{
		t1686 * L_0 = (__this->f7);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8535_MI, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->f2 = 4;
		__this->f7 = (t1686 *)NULL;
		return;
	}

IL_001c:
	{
		t1686 * L_2 = (__this->f7);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8543_MI, L_2);
		V_0 = ((t9 *)Castclass(L_3, InitializedTypeInfo(&t1877_TI)));
		t9 * L_4 = V_0;
		t9 * L_5 = L_4;
		t58 L_6 = { GetInterfaceMethodInfo(L_5, &m12048_MI) };
		t1873 * L_7 = (t1873 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1873_TI));
		m9854(L_7, L_5, L_6, &m9854_MI);
		__this->f8 = L_7;
		t1873 * L_8 = (__this->f8);
		t9 * L_9 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t470 *, t9 * >::Invoke(&m9856_MI, L_8, __this, (t470 *)NULL, NULL);
		V_1 = L_9;
		t9 * L_10 = V_1;
		t1486 * L_11 = (t1486 *)InterfaceFuncInvoker0< t1486 * >::Invoke(&m7024_MI, L_10);
		t58 L_12 = { &m9869_MI };
		t2071 * L_13 = (t2071 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2071_TI));
		m11935(L_13, __this, L_12, &m11935_MI);
		t9 * L_14 = V_1;
		t304  L_15 = (__this->f5);
		m11074(NULL, L_11, L_13, L_14, L_15, 1, &m11074_MI);
		return;
	}
}
extern "C" void m9869 (t1875 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t304  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = p1;
		if (L_0)
		{
			goto IL_0041;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			t9 * L_1 = p0;
			V_0 = ((t9 *)Castclass(L_1, InitializedTypeInfo(&t469_TI)));
			t1873 * L_2 = (__this->f8);
			t9 * L_3 = V_0;
			t304  L_4 = (t304 )VirtFuncInvoker1< t304 , t9 * >::Invoke(&m9857_MI, L_2, L_3);
			V_1 = L_4;
			t304  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
			t304  L_6 = ((t304_SFs*)InitializedTypeInfo(&t304_TI)->static_fields)->f2;
			bool L_7 = m11844(NULL, L_5, L_6, &m11844_MI);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			t304  L_8 = V_1;
			VirtFuncInvoker1< t304 , t304  >::Invoke(&m9865_MI, __this, L_8);
			__this->f2 = 2;
			__this->f7 = (t1686 *)NULL;
			goto IL_005d;
		}

IL_003c:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t9_TI, e.ex->object.klass))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		t1686 * L_9 = (__this->f7);
		t9 * L_10 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8541_MI, L_9);
		VirtActionInvoker1< t9 * >::Invoke(&m9866_MI, __this, ((t9 *)Castclass(L_10, InitializedTypeInfo(&t1877_TI))));
		m9868(__this, &m9868_MI);
	}

IL_005d:
	{
		return;
	}
}
#include "t1878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1878_TI;
#include "t1878MD.h"

#include "t1589.h"
#include "t1879.h"
#include "t2083.h"
extern TypeInfo t2083_TI;
extern TypeInfo t1879_TI;
extern TypeInfo t1589_TI;
#include "t1589MD.h"
#include "t2083MD.h"
#include "t1879MD.h"
extern MethodInfo m10125_MI;
extern MethodInfo m9872_MI;
extern MethodInfo m9874_MI;
extern MethodInfo m11927_MI;
extern MethodInfo m9876_MI;
extern MethodInfo m11088_MI;
extern MethodInfo m11091_MI;
extern MethodInfo m10122_MI;
extern MethodInfo m9873_MI;


extern MethodInfo m9870_MI;
extern "C" void m9870 (t1878 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_0, &m5726_MI);
		__this->f0 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9871_MI;
extern "C" void m9871 (t1878 * __this, t1589 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1170 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			t1589 * L_3 = p0;
			t1875 * L_4 = m10125(L_3, &m10125_MI);
			m9861(L_4, &m9861_MI);
			t1170 * L_5 = (__this->f0);
			t1589 * L_6 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_5, L_6);
			t1879 * L_7 = (__this->f1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			m9872(__this, &m9872_MI);
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
		t9 * L_8 = V_0;
		m1084(NULL, L_8, &m1084_MI);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0041:
	{
		return;
	}
}
extern "C" void m9872 (t1878 * __this, MethodInfo* method)
{
	{
		t58 L_0 = { &m9874_MI };
		t2083 * L_1 = (t2083 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2083_TI));
		m11927(L_1, __this, L_0, &m11927_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_2 = m9876(NULL, &m9876_MI);
		t304  L_3 = m9876(NULL, &m9876_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1879_TI));
		t1879 * L_4 = (t1879 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1879_TI));
		m11088(L_4, L_1, NULL, L_2, L_3, &m11088_MI);
		__this->f1 = L_4;
		return;
	}
}
extern "C" void m9873 (t1878 * __this, MethodInfo* method)
{
	t1879 * V_0 = {0};
	{
		t1879 * L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (t1879 *)NULL;
		t1879 * L_1 = V_0;
		VirtActionInvoker0::Invoke(&m11091_MI, L_1);
		return;
	}
}
extern "C" void m9874 (t1878 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t1589 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1170 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0059;
		}

IL_0016:
		{
			t1170 * L_3 = (__this->f0);
			int32_t L_4 = V_1;
			t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5724_MI, L_3, L_4);
			V_2 = ((t1589 *)Castclass(L_5, InitializedTypeInfo(&t1589_TI)));
			t1589 * L_6 = V_2;
			t1875 * L_7 = m10125(L_6, &m10125_MI);
			m9867(L_7, &m9867_MI);
			t1589 * L_8 = V_2;
			t1875 * L_9 = m10125(L_8, &m10125_MI);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9860_MI, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			t1170 * L_11 = (__this->f0);
			int32_t L_12 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5937_MI, L_11, L_12);
			t1589 * L_13 = V_2;
			VirtActionInvoker0::Invoke(&m10122_MI, L_13);
			goto IL_0059;
		}

IL_0055:
		{
			int32_t L_14 = V_1;
			V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0059:
		{
			int32_t L_15 = V_1;
			t1170 * L_16 = (__this->f0);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			t1170 * L_18 = (__this->f0);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			m9873(__this, &m9873_MI);
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		t9 * L_20 = V_0;
		m1084(NULL, L_20, &m1084_MI);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1876MD.h"



#include "t1880.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11834_MI;


extern MethodInfo m9875_MI;
extern "C" void m9875 (t9 * __this , MethodInfo* method)
{
	{
		t1878 * L_0 = (t1878 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1878_TI));
		m9870(L_0, &m9870_MI);
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t304_TI));
		t304  L_1 = m11834(NULL, (10.0), &m11834_MI);
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f0 = L_1;
		t304  L_2 = m11833(NULL, (5.0), &m11833_MI);
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f1 = L_2;
		t304  L_3 = m11833(NULL, (2.0), &m11833_MI);
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f2 = L_3;
		t304  L_4 = m11833(NULL, (2.0), &m11833_MI);
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f3 = L_4;
		return;
	}
}
extern "C" t304  m9876 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_0 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" t304  m9877 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_0 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t304  m9878 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_0 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f2;
		return L_0;
	}
}
extern "C" t304  m9879 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t304  L_0 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9880_MI;
extern "C" void m9880 (t9 * __this , t1589 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t1878 * L_0 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f4;
		t1589 * L_1 = p0;
		m9871(L_0, L_1, &m9871_MI);
		return;
	}
}
#include "t1881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1881_TI;
#include "t1881MD.h"



#include "t1882.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1882_TI;
#include "t1882MD.h"

extern TypeInfo t1095_TI;
extern Il2CppType t1095_0_0_0;


extern MethodInfo m9881_MI;
extern TypeInfo* t1095_TI_var;
extern "C" void m9881 (t1882 * __this, t914 * p0, uint8_t p1, MethodInfo* method)
{
	static bool m9881_init;
	if (!m9881_init)
	{
		t1095_TI_var = il2cpp_codegen_class_from_type(&t1095_0_0_0);
		m9881_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t914 * L_0 = p0;
		__this->f2 = L_0;
		t914 * L_1 = (__this->f2);
		t928* L_2 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_1);
		V_0 = L_2;
		t928* L_3 = V_0;
		__this->f0 = ((t1095*)SZArrayNew(t1095_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
		__this->f1 = 0;
		uint8_t L_4 = p1;
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		t928* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_5, L_7)));
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		t1095* L_10 = (__this->f0);
		int32_t L_11 = (__this->f1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->f1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		t928* L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((t121 *)L_17)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		t928* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_18, L_20)));
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7751_MI, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		t928* L_23 = V_0;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		bool L_26 = m9703((*(t924 **)(t924 **)SZArrayLdElema(L_23, L_25)), &m9703_MI);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		t1095* L_27 = (__this->f0);
		int32_t L_28 = (__this->f1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->f1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_009f:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_33 = V_2;
		t928* L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t121 *)L_34)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
extern MethodInfo m9882_MI;
extern "C" int32_t m9882 (t1882 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9883_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9883 (t1882 * __this, t158* p0, MethodInfo* method)
{
	static bool m9883_init;
	if (!m9883_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9883_init = true;
	}
	t158* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->f1);
		V_0 = ((t158*)SZArrayNew(t158_TI_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		t158* L_1 = V_0;
		int32_t L_2 = V_1;
		t158* L_3 = p0;
		t1095* L_4 = (__this->f0);
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		ArrayElementTypeCheck (L_1, (*(t9 **)(t9 **)SZArrayLdElema(L_3, L_7)));
		*((t9 **)(t9 **)SZArrayLdElema(L_1, L_2)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->f1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		t158* L_11 = V_0;
		return L_11;
	}
}
#include "t1883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1883_TI;
#include "t1883MD.h"

#include "t1485.h"
#include "t1885.h"
extern TypeInfo t1485_TI;
#include "t1485MD.h"
#include "t1548MD.h"
#include "t470MD.h"
extern MethodInfo m6982_MI;
extern MethodInfo m561_MI;
extern MethodInfo m9886_MI;
extern MethodInfo m6983_MI;
extern MethodInfo m7836_MI;


extern MethodInfo m9884_MI;
extern "C" void m9884 (t1883 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9885_MI;
extern "C" t9 * m9885 (t1883 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t1486 * m9886 (t1883 * __this, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t1486 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1883 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1486 * L_1 = (__this->f1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f6);
			t1485 * L_3 = (t1485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1485_TI));
			m6982(L_3, L_2, &m6982_MI);
			__this->f1 = L_3;
		}

IL_0021:
		{
			t1486 * L_4 = (__this->f1);
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
		t1883 * L_5 = V_0;
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
extern MethodInfo m9887_MI;
extern "C" bool m9887 (t1883 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9888_MI;
extern "C" bool m9888 (t1883 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m9889_MI;
extern "C" bool m9889 (t1883 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9890_MI;
extern "C" void m9890 (t1883 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m9891_MI;
extern "C" t9 * m9891 (t1883 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9892_MI;
extern "C" t9 * m9892 (t1883 * __this, MethodInfo* method)
{
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9893_MI;
extern "C" t9 * m9893 (t1883 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9894_MI;
extern "C" t9 * m9894 (t1883 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m9895_MI;
extern "C" void m9895 (t1883 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern MethodInfo m9896_MI;
extern "C" void m9896 (t1883 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m9897_MI;
extern "C" t9 * m9897 (t1883 * __this, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1883 * L_0 = V_0;
		m1082(NULL, L_0, &m1082_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->f6);
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			t9 * L_2 = (__this->f14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x35, FINALLY_001b);
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
		t1883 * L_3 = V_0;
		m1084(NULL, L_3, &m1084_MI);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0022:
	{
		t1486 * L_4 = (t1486 *)VirtFuncInvoker0< t1486 * >::Invoke(&m9886_MI, __this);
		VirtFuncInvoker0< bool >::Invoke(&m6993_MI, L_4);
		t9 * L_5 = (__this->f14);
		return L_5;
	}

IL_0035:
	{
		t9 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m9898_MI;
extern "C" t9 * m9898 (t1883 * __this, t9 * p0, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t470 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t9 * L_0 = p0;
		__this->f14 = L_0;
		V_0 = __this;
		t1883 * L_1 = V_0;
		m1082(NULL, L_1, &m1082_MI);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->f6 = 1;
			t1486 * L_2 = (__this->f1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			t1486 * L_3 = (t1486 *)VirtFuncInvoker0< t1486 * >::Invoke(&m9886_MI, __this);
			m6983(((t1485 *)Castclass(L_3, InitializedTypeInfo(&t1485_TI))), &m6983_MI);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		t1883 * L_4 = V_0;
		m1084(NULL, L_4, &m1084_MI);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0038:
	{
		t9 * L_5 = (__this->f8);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		t9 * L_6 = (__this->f8);
		V_1 = ((t470 *)Castclass(L_6, InitializedTypeInfo(&t470_TI)));
		t470 * L_7 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m7836_MI, L_7, __this);
	}

IL_0053:
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9899_MI;
extern "C" t1885 * m9899 (t1883 * __this, MethodInfo* method)
{
	{
		t1885 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m9900_MI;
extern "C" void m9900 (t1883 * __this, t1885 * p0, MethodInfo* method)
{
	{
		t1885 * L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1888.h"
#include "t1889.h"
#include "t720.h"
extern TypeInfo t1888_TI;
extern TypeInfo t1160_TI;
extern TypeInfo t1889_TI;
extern TypeInfo t720_TI;
extern TypeInfo t1100_TI;
extern TypeInfo t1101_TI;
#include "t1888MD.h"
#include "t1889MD.h"
#include "t1890MD.h"
#include "t720MD.h"
extern Il2CppType t720_0_0_0;
extern MethodInfo m7770_MI;
extern MethodInfo m9942_MI;
extern MethodInfo m9932_MI;
extern MethodInfo m9931_MI;
extern MethodInfo m9915_MI;
extern MethodInfo m9965_MI;
extern MethodInfo m5775_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m5777_MI;
extern MethodInfo m9934_MI;
extern MethodInfo m9935_MI;
extern MethodInfo m5701_MI;
extern Il2CppGenericMethod m5775_GM;
extern Il2CppGenericMethod m5776_GM;
extern Il2CppGenericMethod m5777_GM;


extern "C" void m9901 (t1853 * __this, t126 * p0, MethodInfo* method)
{
	{
		m9932(__this, &m9932_MI);
		t126 * L_0 = p0;
		__this->f14 = L_0;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_1);
		__this->f15 = L_2;
		__this->f16 = 1;
		return;
	}
}
extern MethodInfo m9902_MI;
extern "C" void m9902 (t1853 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m9931(__this, L_0, L_1, &m9931_MI);
		return;
	}
}
extern MethodInfo m9903_MI;
extern "C" void m9903 (t1853 * __this, MethodInfo* method)
{
	t1889 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t1889 * L_0 = (t1889 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1889_TI));
		m9915(L_0, __this, &m9915_MI);
		V_0 = L_0;
		t1889 * L_1 = V_0;
		__this->f8 = L_1;
		t1889 * L_2 = V_0;
		t9 * L_3 = m9965(L_2, &m9965_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" void m9904 (t1853 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f16 = L_0;
		return;
	}
}
extern MethodInfo m9905_MI;
extern "C" t126 * m9905 (t1853 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t2* L_1 = (__this->f15);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m7770(NULL, L_1, &m7770_MI);
		__this->f14 = L_2;
	}

IL_0019:
	{
		t126 * L_3 = (__this->f14);
		return L_3;
	}
}
extern MethodInfo m9906_MI;
extern "C" t2* m9906 (t1853 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m9907_MI;
extern "C" t9 * m9907 (t1853 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f11);
		return L_0;
	}
}
extern "C" void m9908 (t1853 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9909_MI;
extern "C" t158* m9909 (t1853 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" void m9910 (t1853 * __this, t158* p0, MethodInfo* method)
{
	{
		t158* L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
extern MethodInfo m9911_MI;
extern "C" t9 * m9911 (t1853 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_1 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_1, &m5726_MI);
		__this->f13 = L_1;
	}

IL_0013:
	{
		t9 * L_2 = (__this->f13);
		return L_2;
	}
}
extern MethodInfo m9912_MI;
extern TypeInfo* t720_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" void m9912 (t1853 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9912_init;
	if (!m9912_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9912_init = true;
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
			goto IL_00c4;
		}
	}
	{
		t720 * L_2 = ((t1853_SFs*)InitializedTypeInfo(&t1853_TI)->static_fields)->f17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 5, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2091, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2092, 1);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2093, 2);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2094, 3);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2095, 4);
		t720 * L_9 = V_1;
		((t1853_SFs*)InitializedTypeInfo(&t1853_TI)->static_fields)->f17 = L_9;
	}

IL_0058:
	{
		t720 * L_10 = ((t1853_SFs*)InitializedTypeInfo(&t1853_TI)->static_fields)->f17;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0090;
		}
		if (L_13 == 2)
		{
			goto IL_009d;
		}
		if (L_13 == 3)
		{
			goto IL_00aa;
		}
		if (L_13 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		t9 * L_14 = p1;
		__this->f11 = ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1852_TI)));
		return;
	}

IL_0090:
	{
		t9 * L_15 = p1;
		__this->f12 = ((t158*)Castclass(L_15, t158_TI_var));
		return;
	}

IL_009d:
	{
		t9 * L_16 = p1;
		__this->f14 = ((t126 *)Castclass(L_16, InitializedTypeInfo(&t126_TI)));
		return;
	}

IL_00aa:
	{
		t9 * L_17 = p1;
		__this->f13 = ((t9 *)Castclass(L_17, InitializedTypeInfo(&t999_TI)));
		return;
	}

IL_00b7:
	{
		t9 * L_18 = p1;
		__this->f15 = ((t2*)Castclass(L_18, (&t2_TI)));
		return;
	}

IL_00c4:
	{
		t2* L_19 = p0;
		t9 * L_20 = p1;
		m9934(__this, L_19, L_20, &m9934_MI);
		return;
	}
}
extern MethodInfo m9913_MI;
extern "C" void m9913 (t1853 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1100 * L_0 = p0;
		t1101  L_1 = p1;
		m9935(__this, L_0, L_1, &m9935_MI);
		t9 * L_2 = (__this->f13);
		V_0 = L_2;
		t9 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		t9 * L_4 = V_0;
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5701_MI, L_4);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (t9 *)NULL;
	}

IL_001c:
	{
		t1100 * L_6 = p0;
		t9 * L_7 = (__this->f11);
		m5743(L_6, (t2*) &_stringLiteral2091, L_7, &m5743_MI);
		t1100 * L_8 = p0;
		t158* L_9 = (__this->f12);
		m5743(L_8, (t2*) &_stringLiteral2092, (t9 *)(t9 *)L_9, &m5743_MI);
		t1100 * L_10 = p0;
		m5743(L_10, (t2*) &_stringLiteral2093, NULL, &m5743_MI);
		t1100 * L_11 = p0;
		t9 * L_12 = V_0;
		m5743(L_11, (t2*) &_stringLiteral2094, L_12, &m5743_MI);
		t1100 * L_13 = p0;
		t2* L_14 = (__this->f15);
		m5743(L_13, (t2*) &_stringLiteral2095, L_14, &m5743_MI);
		return;
	}
}
extern MethodInfo m9914_MI;
extern "C" t9 * m9914 (t1853 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m9942(__this, &m9942_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1890.h"
extern TypeInfo t1890_TI;
extern MethodInfo m9961_MI;
extern MethodInfo m9963_MI;
extern MethodInfo m12049_MI;
extern MethodInfo m12050_MI;
extern MethodInfo m12051_MI;
extern MethodInfo m9969_MI;
extern MethodInfo m12052_MI;
extern MethodInfo m9970_MI;


extern "C" void m9915 (t1889 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9961(__this, L_0, &m9961_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t221* L_1 = ((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f6;
		m9963(__this, L_1, &m9963_MI);
		return;
	}
}
extern MethodInfo m9916_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9916 (t9 * __this , MethodInfo* method)
{
	static bool m9916_init;
	if (!m9916_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9916_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)11)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2100);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2100;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2101;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2092);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2092;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2093);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral2093;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2094);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral2094;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2091);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2091;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2095);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2095;
		((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f6 = L_10;
		return;
	}
}
extern MethodInfo m9917_MI;
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" t9 * m9917 (t1889 * __this, t2* p0, MethodInfo* method)
{
	static bool m9917_init;
	if (!m9917_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9917_init = true;
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
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t720 * L_2 = ((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 5, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2091, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2092, 1);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2093, 2);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2094, 3);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2095, 4);
		t720 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t720 * L_10 = ((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f7;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0094;
		}
		if (L_13 == 2)
		{
			goto IL_00a5;
		}
		if (L_13 == 3)
		{
			goto IL_00b6;
		}
		if (L_13 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		t9 * L_14 = (__this->f1);
		t9 * L_15 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12049_MI, ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1860_TI))));
		return L_15;
	}

IL_0094:
	{
		t9 * L_16 = (__this->f1);
		t158* L_17 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12050_MI, ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1860_TI))));
		return (t9 *)L_17;
	}

IL_00a5:
	{
		t9 * L_18 = (__this->f1);
		t126 * L_19 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12047_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t1860_TI))));
		return L_19;
	}

IL_00b6:
	{
		t9 * L_20 = (__this->f1);
		t9 * L_21 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12046_MI, ((t9 *)Castclass(L_20, InitializedTypeInfo(&t1860_TI))));
		return L_21;
	}

IL_00c7:
	{
		t9 * L_22 = (__this->f1);
		t2* L_23 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12051_MI, ((t9 *)Castclass(L_22, InitializedTypeInfo(&t1860_TI))));
		return L_23;
	}

IL_00d8:
	{
		t2* L_24 = p0;
		t9 * L_25 = m9969(__this, L_24, &m9969_MI);
		return L_25;
	}
}
extern MethodInfo m9918_MI;
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" void m9918 (t1889 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9918_init;
	if (!m9918_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9918_init = true;
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
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t720 * L_2 = ((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 5, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2091, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2092, 1);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2093, 1);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2094, 1);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2095, 1);
		t720 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1889_TI));
		t720 * L_10 = ((t1889_SFs*)InitializedTypeInfo(&t1889_TI)->static_fields)->f8;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		t9 * L_15 = (__this->f1);
		t9 * L_16 = p1;
		InterfaceActionInvoker1< t9 * >::Invoke(&m12052_MI, ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1860_TI))), ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1852_TI))));
		goto IL_009d;
	}

IL_0088:
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_17, (t2*) &_stringLiteral2102, &m2909_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		t2* L_18 = p0;
		t9 * L_19 = p1;
		m9970(__this, L_18, L_19, &m9970_MI);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m9919_MI;


extern "C" void m9919 (t1891 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9920_MI;
extern "C" void m9920 (t9 * __this , MethodInfo* method)
{
	{
		t1891 * L_0 = (t1891 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1891_TI));
		m9919(L_0, &m9919_MI);
		((t1891_SFs*)InitializedTypeInfo(&t1891_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1892_TI;
#include "t1892MD.h"

extern MethodInfo m9922_MI;
extern MethodInfo m9923_MI;


extern MethodInfo m9921_MI;
extern "C" void m9921 (t1892 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		m9922(__this, L_0, L_1, 1, &m9922_MI);
		return;
	}
}
extern "C" void m9922 (t1892 * __this, t2* p0, t9 * p1, bool p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = p2;
		m9923(__this, L_0, L_1, L_2, (t2*)NULL, &m9923_MI);
		return;
	}
}
extern "C" void m9923 (t1892 * __this, t2* p0, t9 * p1, bool p2, t2* p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f2 = L_0;
		t9 * L_1 = p1;
		__this->f3 = L_1;
		bool L_2 = p2;
		__this->f1 = L_2;
		t2* L_3 = p3;
		__this->f0 = L_3;
		return;
	}
}
#include "t1893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1893_TI;
#include "t1893MD.h"

#include "t1894.h"
#include "t1974.h"
#include "t1976.h"
#include "t1164.h"
extern TypeInfo t1894_TI;
extern TypeInfo t1976_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t1164_TI;
#include "t1894MD.h"
#include "t1976MD.h"
#include "t1974MD.h"
#include "t1164MD.h"
extern MethodInfo m5921_MI;
extern MethodInfo m9929_MI;
extern MethodInfo m10327_MI;
extern MethodInfo m10335_MI;
extern MethodInfo m10317_MI;
extern MethodInfo m10319_MI;
extern MethodInfo m9928_MI;
extern MethodInfo m10339_MI;
extern MethodInfo m8513_MI;
extern MethodInfo m8475_MI;
extern MethodInfo m8476_MI;
extern MethodInfo m5919_MI;


extern MethodInfo m9924_MI;
extern "C" void m9924 (t1893 * __this, MethodInfo* method)
{
	{
		t1894 * L_0 = (t1894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1894_TI));
		m9929(L_0, &m9929_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9925_MI;
extern "C" void m9925 (t1893 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t1974  V_0 = {0};
	t1976 * V_1 = {0};
	{
		t1894 * L_0 = (t1894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1894_TI));
		m9929(L_0, &m9929_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		t1100 * L_1 = p0;
		t1976 * L_2 = m10327(L_1, &m10327_MI);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		t1976 * L_3 = V_1;
		t1974  L_4 = m10335(L_3, &m10335_MI);
		V_0 = L_4;
		t2* L_5 = m10317((&V_0), &m10317_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2103, &m331_MI);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		t9 * L_7 = m10319((&V_0), &m10319_MI);
		__this->f1 = ((t1894 *)Castclass(L_7, InitializedTypeInfo(&t1894_TI)));
		goto IL_005c;
	}

IL_0048:
	{
		t2* L_8 = m10317((&V_0), &m10317_MI);
		t9 * L_9 = m10319((&V_0), &m10319_MI);
		m9928(__this, L_8, L_9, &m9928_MI);
	}

IL_005c:
	{
		t1976 * L_10 = V_1;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10339_MI, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m9926_MI;
extern "C" bool m9926 (t1893 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1158 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1158 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5921_MI, L_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
extern MethodInfo m9927_MI;
extern "C" void m9927 (t1893 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t1164  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1100 * L_0 = p0;
		t1894 * L_1 = (__this->f1);
		m5743(L_0, (t2*) &_stringLiteral2103, L_1, &m5743_MI);
		t1158 * L_2 = (__this->f0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		t1158 * L_3 = (__this->f0);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8513_MI, L_3);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			t9 * L_5 = V_1;
			t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_5);
			V_0 = ((*(t1164 *)((t1164 *)UnBox (L_6, InitializedTypeInfo(&t1164_TI)))));
			t1100 * L_7 = p0;
			t9 * L_8 = m8475((&V_0), &m8475_MI);
			t9 * L_9 = m8476((&V_0), &m8476_MI);
			m5743(L_7, ((t2*)Castclass(L_8, (&t2_TI))), L_9, &m5743_MI);
		}

IL_004c:
		{
			t9 * L_10 = V_1;
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_10);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			t9 * L_12 = V_1;
			V_2 = ((t9 *)IsInst(L_12, InitializedTypeInfo(&t137_TI)));
			t9 * L_13 = V_2;
			if (L_13)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(86)
		}

IL_0061:
		{
			t9 * L_14 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_14);
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0068:
	{
		return;
	}
}
extern "C" void m9928 (t1893 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t1158 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_1 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_1, &m5911_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1158 * L_2 = (__this->f0);
		t2* L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5919_MI, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9929 (t1894 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1896.h"
extern TypeInfo t1896_TI;
#include "t1896MD.h"
extern MethodInfo m9946_MI;
extern MethodInfo m9949_MI;
extern MethodInfo m9943_MI;
extern MethodInfo m9939_MI;
extern MethodInfo m9547_MI;
extern MethodInfo m9948_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m5710_MI;
extern MethodInfo m9953_MI;
extern MethodInfo m10093_MI;
extern MethodInfo m4443_MI;
extern MethodInfo m9950_MI;
extern MethodInfo m4293_MI;
extern MethodInfo m10101_MI;
extern MethodInfo m515_MI;
extern MethodInfo m7756_MI;
extern MethodInfo m10091_MI;
extern MethodInfo m10100_MI;
extern MethodInfo m9944_MI;
extern MethodInfo m9550_MI;
extern MethodInfo m9548_MI;
extern MethodInfo m9952_MI;
extern MethodInfo m9951_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m4269_MI;
extern MethodInfo m2739_MI;
extern MethodInfo m4270_MI;


extern MethodInfo m9930_MI;
extern "C" void m9930 (t1888 * __this, t1895* p0, MethodInfo* method)
{
	t1892 * V_0 = {0};
	t1895* V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9948_MI, __this);
		t1895* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1895* L_1 = p0;
		if ((((int32_t)(((t121 *)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		t1895* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		t1895* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t1892 **)(t1892 **)SZArrayLdElema(L_3, L_5));
		t1892 * L_6 = V_0;
		t2* L_7 = (L_6->f2);
		t1892 * L_8 = V_0;
		t9 * L_9 = (L_8->f3);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9934_MI, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		t1895* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		m9949(__this, &m9949_MI);
		return;
	}
}
extern "C" void m9931 (t1888 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t1974  V_0 = {0};
	t1976 * V_1 = {0};
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9948_MI, __this);
		t1100 * L_0 = p0;
		t1976 * L_1 = m10327(L_0, &m10327_MI);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		t1976 * L_2 = V_1;
		t1974  L_3 = m10335(L_2, &m10335_MI);
		V_0 = L_3;
		t2* L_4 = m10317((&V_0), &m10317_MI);
		t9 * L_5 = m10319((&V_0), &m10319_MI);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9934_MI, __this, L_4, L_5);
	}

IL_0030:
	{
		t1976 * L_6 = V_1;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10339_MI, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
extern "C" void m9932 (t1888 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9933_MI;
extern "C" void m9933 (t1888 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9946_MI, __this, L_0);
		return;
	}
}
extern TypeInfo* t720_TI_var;
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" void m9934 (t1888 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9934_init;
	if (!m9934_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9934_init = true;
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
			goto IL_0101;
		}
	}
	{
		t720 * L_2 = ((t1888_SFs*)InitializedTypeInfo(&t1888_TI)->static_fields)->f10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 7, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2098, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2097, 1);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2099, 2);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2100, 3);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2101, 4);
		t720 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_9, (t2*) &_stringLiteral2096, 5);
		t720 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_10, (t2*) &_stringLiteral2104, 6);
		t720 * L_11 = V_1;
		((t1888_SFs*)InitializedTypeInfo(&t1888_TI)->static_fields)->f10 = L_11;
	}

IL_0070:
	{
		t720 * L_12 = ((t1888_SFs*)InitializedTypeInfo(&t1888_TI)->static_fields)->f10;
		t2* L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00a6;
		}
		if (L_15 == 1)
		{
			goto IL_00b3;
		}
		if (L_15 == 2)
		{
			goto IL_00c0;
		}
		if (L_15 == 3)
		{
			goto IL_00cd;
		}
		if (L_15 == 4)
		{
			goto IL_00da;
		}
		if (L_15 == 5)
		{
			goto IL_00e7;
		}
		if (L_15 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		t9 * L_16 = p1;
		__this->f1 = ((t2*)Castclass(L_16, (&t2_TI)));
		return;
	}

IL_00b3:
	{
		t9 * L_17 = p1;
		__this->f2 = ((t2*)Castclass(L_17, (&t2_TI)));
		return;
	}

IL_00c0:
	{
		t9 * L_18 = p1;
		__this->f4 = ((t152*)Castclass(L_18, t152_TI_var));
		return;
	}

IL_00cd:
	{
		t9 * L_19 = p1;
		__this->f3 = ((t158*)Castclass(L_19, t158_TI_var));
		return;
	}

IL_00da:
	{
		t9 * L_20 = p1;
		__this->f6 = ((t1893 *)Castclass(L_20, InitializedTypeInfo(&t1893_TI)));
		return;
	}

IL_00e7:
	{
		t9 * L_21 = p1;
		__this->f0 = ((t2*)Castclass(L_21, (&t2_TI)));
		return;
	}

IL_00f4:
	{
		t9 * L_22 = p1;
		__this->f7 = ((t152*)Castclass(L_22, t152_TI_var));
		return;
	}

IL_0101:
	{
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9942_MI, __this);
		t2* L_24 = p0;
		t9 * L_25 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5703_MI, L_23, L_24, L_25);
		return;
	}
}
extern "C" void m9935 (t1888 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t1164  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1100 * L_0 = p0;
		t2* L_1 = (__this->f1);
		m5743(L_0, (t2*) &_stringLiteral2098, L_1, &m5743_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f2);
		m5743(L_2, (t2*) &_stringLiteral2097, L_3, &m5743_MI);
		t1100 * L_4 = p0;
		t152* L_5 = (__this->f4);
		m5743(L_4, (t2*) &_stringLiteral2099, (t9 *)(t9 *)L_5, &m5743_MI);
		t1100 * L_6 = p0;
		t158* L_7 = (__this->f3);
		m5743(L_6, (t2*) &_stringLiteral2100, (t9 *)(t9 *)L_7, &m5743_MI);
		t1100 * L_8 = p0;
		t1893 * L_9 = (__this->f6);
		m5743(L_8, (t2*) &_stringLiteral2101, L_9, &m5743_MI);
		t1100 * L_10 = p0;
		t2* L_11 = (__this->f0);
		m5743(L_10, (t2*) &_stringLiteral2096, L_11, &m5743_MI);
		t1100 * L_12 = p0;
		t152* L_13 = (__this->f7);
		m5743(L_12, (t2*) &_stringLiteral2104, (t9 *)(t9 *)L_13, &m5743_MI);
		t9 * L_14 = (__this->f9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		t9 * L_15 = (__this->f9);
		t9 * L_16 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5710_MI, L_15);
		V_1 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			t9 * L_17 = V_1;
			t9 * L_18 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_17);
			V_0 = ((*(t1164 *)((t1164 *)UnBox (L_18, InitializedTypeInfo(&t1164_TI)))));
			t1100 * L_19 = p0;
			t9 * L_20 = m8475((&V_0), &m8475_MI);
			t9 * L_21 = m8476((&V_0), &m8476_MI);
			m5743(L_19, ((t2*)Castclass(L_20, (&t2_TI))), L_21, &m5743_MI);
		}

IL_00b2:
		{
			t9 * L_22 = V_1;
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_22);
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			t9 * L_24 = V_1;
			V_2 = ((t9 *)IsInst(L_24, InitializedTypeInfo(&t137_TI)));
			t9 * L_25 = V_2;
			if (L_25)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(188)
		}

IL_00c7:
		{
			t9 * L_26 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_26);
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00ce:
	{
		return;
	}
}
extern MethodInfo m9936_MI;
extern "C" int32_t m9936 (t1888 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m9937_MI;
extern "C" t158* m9937 (t1888 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9938_MI;
extern "C" t1893 * m9938 (t1888 * __this, MethodInfo* method)
{
	{
		t1893 * L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1893 * L_1 = (t1893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1893_TI));
		m9924(L_1, &m9924_MI);
		__this->f6 = L_1;
	}

IL_0013:
	{
		t1893 * L_2 = (__this->f6);
		return L_2;
	}
}
extern "C" t914 * m9939 (t1888 * __this, MethodInfo* method)
{
	{
		t914 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m9949(__this, &m9949_MI);
	}

IL_000e:
	{
		t914 * L_1 = (__this->f5);
		return L_1;
	}
}
extern MethodInfo m9940_MI;
extern "C" t2* m9940 (t1888 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t914 * L_1 = (__this->f5);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_1);
		__this->f2 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f2);
		return L_3;
	}
}
extern MethodInfo m9941_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9941 (t1888 * __this, MethodInfo* method)
{
	static bool m9941_init;
	if (!m9941_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9941_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		t914 * L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t914 * L_2 = (__this->f5);
		t928* L_3 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_2);
		V_0 = L_3;
		t928* L_4 = V_0;
		__this->f4 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		t928* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t928* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t152* L_14 = (__this->f4);
		return (t9 *)L_14;
	}
}
extern "C" t9 * m9942 (t1888 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9943_MI, __this);
	}

IL_000e:
	{
		t9 * L_1 = (__this->f8);
		return L_1;
	}
}
extern "C" void m9943 (t1888 * __this, MethodInfo* method)
{
	t1896 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1896_TI));
		t1896 * L_0 = (t1896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1896_TI));
		m9953(L_0, __this, &m9953_MI);
		V_0 = L_0;
		t1896 * L_1 = V_0;
		__this->f8 = L_1;
		t1896 * L_2 = V_0;
		t9 * L_3 = m9965(L_2, &m9965_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" t2* m9944 (t1888 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t914 * L_1 = (__this->f5);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_1);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_2);
		__this->f1 = L_3;
	}

IL_001e:
	{
		t2* L_4 = (__this->f1);
		return L_4;
	}
}
extern MethodInfo m9945_MI;
extern "C" t2* m9945 (t1888 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m9946 (t1888 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9947_MI;
extern "C" t9 * m9947 (t1888 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern "C" void m9948 (t1888 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m9949 (t1888 * __this, MethodInfo* method)
{
	static bool m9949_init;
	if (!m9949_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9949_init = true;
	}
	t126 * V_0 = {0};
	t2* V_1 = {0};
	t126 * V_2 = {0};
	t2* G_B5_0 = {0};
	{
		t2* L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		t2* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t126 * L_2 = m10093(NULL, L_1, &m10093_MI);
		V_0 = L_2;
		t126 * L_3 = V_0;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		t2* L_4 = (__this->f1);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		t2* L_5 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m399(NULL, (t2*) &_stringLiteral146, L_5, (t2*) &_stringLiteral147, &m399_MI);
		G_B5_0 = L_6;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B5_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B5_0;
		t2* L_8 = V_1;
		t2* L_9 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m4443(NULL, (t2*) &_stringLiteral2105, L_8, (t2*) &_stringLiteral2106, L_9, &m4443_MI);
		t1926 * L_11 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_11, L_10, &m10088_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		t2* L_12 = (__this->f1);
		t126 * L_13 = V_0;
		t126 * L_14 = m9950(__this, L_12, L_13, &m9950_MI);
		V_2 = L_14;
		t126 * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		t221* L_16 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2107);
		*((t2**)(t2**)SZArrayLdElema(L_16, 0)) = (t2*)(t2*) &_stringLiteral2107;
		t221* L_17 = L_16;
		t2* L_18 = (__this->f1);
		ArrayElementTypeCheck (L_17, L_18);
		*((t2**)(t2**)SZArrayLdElema(L_17, 1)) = (t2*)L_18;
		t221* L_19 = L_17;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2108);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)(t2*) &_stringLiteral2108;
		t221* L_20 = L_19;
		t126 * L_21 = V_0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((t2**)(t2**)SZArrayLdElema(L_20, 3)) = (t2*)L_22;
		t221* L_23 = L_20;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral140);
		*((t2**)(t2**)SZArrayLdElema(L_23, 4)) = (t2*)(t2*) &_stringLiteral140;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_24 = m4293(NULL, L_23, &m4293_MI);
		t1926 * L_25 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_25, L_24, &m10088_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		t126 * L_26 = V_2;
		t2* L_27 = (__this->f2);
		t152* L_28 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t914 * L_29 = m10101(NULL, L_26, L_27, L_28, &m10101_MI);
		__this->f5 = L_29;
		t914 * L_30 = (__this->f5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		t158* L_31 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2109);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 0)) = (t9 *)(t2*) &_stringLiteral2109;
		t158* L_32 = L_31;
		t2* L_33 = (__this->f2);
		ArrayElementTypeCheck (L_32, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 1)) = (t9 *)L_33;
		t158* L_34 = L_32;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2110);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 2)) = (t9 *)(t2*) &_stringLiteral2110;
		t158* L_35 = L_34;
		t126 * L_36 = V_2;
		ArrayElementTypeCheck (L_35, L_36);
		*((t9 **)(t9 **)SZArrayLdElema(L_35, 3)) = (t9 *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_37 = m515(NULL, L_35, &m515_MI);
		t1926 * L_38 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_38, L_37, &m10088_MI);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00f5:
	{
		t126 * L_39 = V_2;
		t126 * L_40 = V_0;
		if ((((t9*)(t126 *)L_39) == ((t9*)(t126 *)L_40)))
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_41 = V_2;
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_43 = V_0;
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_45 = V_0;
		t914 * L_46 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t914 * L_47 = m10091(NULL, L_45, L_46, &m10091_MI);
		__this->f5 = L_47;
		t914 * L_48 = (__this->f5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		t158* L_49 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2109);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 0)) = (t9 *)(t2*) &_stringLiteral2109;
		t158* L_50 = L_49;
		t2* L_51 = (__this->f2);
		ArrayElementTypeCheck (L_50, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_50, 1)) = (t9 *)L_51;
		t158* L_52 = L_50;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2110);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, 2)) = (t9 *)(t2*) &_stringLiteral2110;
		t158* L_53 = L_52;
		t126 * L_54 = V_0;
		ArrayElementTypeCheck (L_53, L_54);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 3)) = (t9 *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_55 = m515(NULL, L_53, &m515_MI);
		t1926 * L_56 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_56, L_55, &m10088_MI);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t914 * L_57 = m10100(NULL, __this, &m10100_MI);
		__this->f5 = L_57;
		t914 * L_58 = (__this->f5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		t2* L_59 = (__this->f2);
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9944_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_61 = m4443(NULL, (t2*) &_stringLiteral2109, L_59, (t2*) &_stringLiteral2110, L_60, &m4443_MI);
		t1926 * L_62 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_62, L_61, &m10088_MI);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		t914 * L_63 = (__this->f5);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9550_MI, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		t914 * L_65 = (__this->f5);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9548_MI, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		t152* L_67 = m9952(__this, &m9952_MI);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		t1926 * L_68 = (t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1926_TI));
		m10088(L_68, (t2*) &_stringLiteral2111, &m10088_MI);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		t914 * L_69 = (__this->f5);
		t152* L_70 = m9952(__this, &m9952_MI);
		t828 * L_71 = (t828 *)VirtFuncInvoker1< t828 *, t152* >::Invoke(&m9554_MI, ((t828 *)Castclass(L_69, InitializedTypeInfo(&t828_TI))), L_70);
		__this->f5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
extern "C" t126 * m9950 (t1888 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	t126 * V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t2* L_0 = p0;
		t2* L_1 = m9951(NULL, L_0, &m9951_MI);
		p0 = L_1;
		t2* L_2 = p0;
		t126 * L_3 = p1;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_5 = m331(NULL, L_2, L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_6 = p1;
		return L_6;
	}

IL_001a:
	{
		t126 * L_7 = p1;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4430_MI, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		t2* L_9 = p0;
		t126 * L_10 = V_0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_10);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_12 = m331(NULL, L_9, L_11, &m331_MI);
		if (!L_12)
		{
			goto IL_0033;
		}
	}
	{
		t126 * L_13 = V_0;
		return L_13;
	}

IL_0033:
	{
		t126 * L_14 = V_0;
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4430_MI, L_14);
		V_0 = L_15;
	}

IL_003a:
	{
		t126 * L_16 = V_0;
		if (L_16)
		{
			goto IL_0023;
		}
	}
	{
		t126 * L_17 = p1;
		t152* L_18 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12019_MI, L_17);
		V_1 = L_18;
		t152* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		t152* L_20 = V_3;
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		V_2 = (*(t126 **)(t126 **)SZArrayLdElema(L_20, L_22));
		t2* L_23 = p0;
		t126 * L_24 = V_2;
		t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4409_MI, L_24);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_26 = m331(NULL, L_23, L_25, &m331_MI);
		if (!L_26)
		{
			goto IL_0060;
		}
	}
	{
		t126 * L_27 = V_2;
		return L_27;
	}

IL_0060:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_29 = V_4;
		t152* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((t121 *)L_30)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (t126 *)NULL;
	}
}
extern "C" t2* m9951 (t9 * __this , t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t2* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	t2* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t2* G_B3_2 = {0};
	{
		t2* L_0 = p0;
		int32_t L_1 = m4281(L_0, (t2*) &_stringLiteral2112, &m4281_MI);
		V_0 = L_1;
		t2* L_2 = p0;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		int32_t L_5 = m4269(G_B3_2, G_B3_1, G_B3_0, &m4269_MI);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		t2* L_7 = p0;
		int32_t L_8 = V_1;
		t2* L_9 = m2739(L_7, 0, L_8, &m2739_MI);
		t2* L_10 = m4270(L_9, &m4270_MI);
		p0 = L_10;
	}

IL_0034:
	{
		t2* L_11 = p0;
		return L_11;
	}
}
extern "C" t152* m9952 (t1888 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t152* L_1 = (__this->f7);
		return L_1;
	}

IL_000f:
	{
		t914 * L_2 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m9939_MI, __this);
		t152* L_3 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9547_MI, L_2);
		t152* L_4 = L_3;
		V_0 = L_4;
		__this->f7 = L_4;
		t152* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9953 (t1896 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9961(__this, L_0, &m9961_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1896_TI));
		t221* L_1 = ((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f6;
		m9963(__this, L_1, &m9963_MI);
		return;
	}
}
extern MethodInfo m9954_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9954 (t9 * __this , MethodInfo* method)
{
	static bool m9954_init;
	if (!m9954_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9954_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 6));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2100);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2100;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2101;
		((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f6 = L_5;
		return;
	}
}
#include "t1898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1898_TI;
#include "t1898MD.h"

extern MethodInfo m9958_MI;
extern MethodInfo m5714_MI;
extern MethodInfo m12000_MI;
extern MethodInfo m5757_MI;
extern MethodInfo m9966_MI;


extern MethodInfo m9955_MI;
extern "C" void m9955 (t1898 * __this, t1890 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1898 * G_B2_0 = {0};
	t1898 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1898 * G_B3_1 = {0};
	{
		m336(__this, &m336_MI);
		t1890 * L_0 = p0;
		__this->f0 = L_0;
		t1890 * L_1 = (__this->f0);
		t9 * L_2 = (L_1->f0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t1890 * L_3 = (__this->f0);
		t9 * L_4 = (L_3->f0);
		t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5710_MI, L_4);
		V_0 = L_5;
		t9 * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((t9 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		G_B3_1->f1 = G_B3_0;
		__this->f2 = (-1);
		return;
	}
}
extern MethodInfo m9956_MI;
extern "C" t9 * m9956 (t1898 * __this, MethodInfo* method)
{
	t1164  V_0 = {0};
	{
		t1164  L_0 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(&m9958_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8476((&V_0), &m8476_MI);
		return L_1;
	}
}
extern MethodInfo m9957_MI;
extern "C" bool m9957 (t1898 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->f2);
		__this->f2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->f2);
		t1890 * L_3 = (__this->f0);
		t221* L_4 = (L_3->f2);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((t121 *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->f2 = ((int32_t)-2);
	}

IL_0037:
	{
		t9 * L_5 = (__this->f1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		t1890 * L_6 = (__this->f0);
		t9 * L_7 = (__this->f1);
		t9 * L_8 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5757_MI, L_7);
		bool L_9 = m9966(L_6, ((t2*)Castclass(L_8, (&t2_TI))), &m9966_MI);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		t9 * L_10 = (__this->f1);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
extern "C" t1164  m9958 (t1898 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		t1890 * L_1 = (__this->f0);
		t221* L_2 = (L_1->f2);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		t1890 * L_5 = (__this->f0);
		t1890 * L_6 = (__this->f0);
		t221* L_7 = (L_6->f2);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		t9 * L_10 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9969_MI, L_5, (*(t2**)(t2**)SZArrayLdElema(L_7, L_9)));
		t1164  L_11 = {0};
		m5714(&L_11, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), L_10, &m5714_MI);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->f2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		t9 * L_13 = (__this->f1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		t1341 * L_14 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5713(L_14, (t2*) &_stringLiteral2115, &m5713_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t9 * L_15 = (__this->f1);
		t1164  L_16 = (t1164 )InterfaceFuncInvoker0< t1164  >::Invoke(&m12000_MI, L_15);
		return L_16;
	}
}
extern MethodInfo m9959_MI;
extern "C" t9 * m9959 (t1898 * __this, MethodInfo* method)
{
	t1164  V_0 = {0};
	{
		t1164  L_0 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(&m9958_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8475((&V_0), &m8475_MI);
		return L_1;
	}
}
extern MethodInfo m9960_MI;
extern "C" t9 * m9960 (t1898 * __this, MethodInfo* method)
{
	t1164  V_0 = {0};
	{
		t1164  L_0 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(&m9958_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8476((&V_0), &m8476_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1897_TI;
extern TypeInfo t1900_TI;
extern TypeInfo t2183_TI;
extern MethodInfo m5702_MI;
extern MethodInfo m9972_MI;
extern MethodInfo m9964_MI;
extern MethodInfo m12053_MI;
extern MethodInfo m12054_MI;
extern MethodInfo m12055_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m12057_MI;
extern MethodInfo m12058_MI;
extern MethodInfo m12059_MI;
extern MethodInfo m12060_MI;
extern MethodInfo m12061_MI;
extern MethodInfo m5708_MI;
extern MethodInfo m5711_MI;
extern MethodInfo m9971_MI;
extern MethodInfo m5709_MI;


extern "C" void m9961 (t1890 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m9962_MI;
extern "C" t9 * m9962 (t1890 * __this, MethodInfo* method)
{
	{
		t1898 * L_0 = (t1898 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1898_TI));
		m9955(L_0, __this, &m9955_MI);
		return L_0;
	}
}
extern "C" void m9963 (t1890 * __this, t221* p0, MethodInfo* method)
{
	{
		t221* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t9 * m9964 (t1890 * __this, MethodInfo* method)
{
	{
		__this->f3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_0, &m5911_MI);
		return L_0;
	}
}
extern "C" t9 * m9965 (t1890 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9964_MI, __this);
		__this->f0 = L_1;
	}

IL_0014:
	{
		t9 * L_2 = (__this->f0);
		return L_2;
	}
}
extern "C" bool m9966 (t1890 * __this, t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	t221* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		t221* L_1 = (__this->f2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		t221* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t2**)(t2**)SZArrayLdElema(L_2, L_4));
		t2* L_5 = p0;
		t2* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_7 = m331(NULL, L_5, L_6, &m331_MI);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		t221* L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
extern MethodInfo m9967_MI;
extern "C" t9 * m9967 (t1890 * __this, t9 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		t221* L_1 = (__this->f2);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		t2* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_5 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_1, L_3)), L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		t2* L_6 = V_0;
		t9 * L_7 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9969_MI, __this, L_6);
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		t221* L_10 = (__this->f2);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_11 = (__this->f0);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		t9 * L_12 = (__this->f0);
		t9 * L_13 = p0;
		t9 * L_14 = (t9 *)InterfaceFuncInvoker1< t9 *, t9 * >::Invoke(&m5702_MI, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
extern MethodInfo m9968_MI;
extern "C" void m9968 (t1890 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m9972_MI, __this, L_0, L_1);
		return;
	}
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" t9 * m9969 (t1890 * __this, t2* p0, MethodInfo* method)
{
	static bool m9969_init;
	if (!m9969_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9969_init = true;
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
			goto IL_0120;
		}
	}
	{
		t720 * L_2 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 8, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2096, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2097, 1);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2098, 2);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2099, 3);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2101, 4);
		t720 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_9, (t2*) &_stringLiteral2100, 5);
		t720 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_10, (t2*) &_stringLiteral2113, 6);
		t720 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_11, (t2*) &_stringLiteral2114, 7);
		t720 * L_12 = V_1;
		((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f4 = L_12;
	}

IL_007c:
	{
		t720 * L_13 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f4;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00b6;
		}
		if (L_16 == 1)
		{
			goto IL_00c2;
		}
		if (L_16 == 2)
		{
			goto IL_00ce;
		}
		if (L_16 == 3)
		{
			goto IL_00da;
		}
		if (L_16 == 4)
		{
			goto IL_00e6;
		}
		if (L_16 == 5)
		{
			goto IL_00f2;
		}
		if (L_16 == 6)
		{
			goto IL_00fe;
		}
		if (L_16 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		t9 * L_17 = (__this->f1);
		t2* L_18 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12053_MI, L_17);
		return L_18;
	}

IL_00c2:
	{
		t9 * L_19 = (__this->f1);
		t2* L_20 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12054_MI, L_19);
		return L_20;
	}

IL_00ce:
	{
		t9 * L_21 = (__this->f1);
		t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12055_MI, L_21);
		return L_22;
	}

IL_00da:
	{
		t9 * L_23 = (__this->f1);
		t9 * L_24 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12056_MI, L_23);
		return L_24;
	}

IL_00e6:
	{
		t9 * L_25 = (__this->f1);
		t1893 * L_26 = (t1893 *)InterfaceFuncInvoker0< t1893 * >::Invoke(&m12057_MI, L_25);
		return L_26;
	}

IL_00f2:
	{
		t9 * L_27 = (__this->f1);
		t158* L_28 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12058_MI, L_27);
		return (t9 *)L_28;
	}

IL_00fe:
	{
		t9 * L_29 = (__this->f1);
		t158* L_30 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12059_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t1900_TI))));
		return (t9 *)L_30;
	}

IL_010f:
	{
		t9 * L_31 = (__this->f1);
		t9 * L_32 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12060_MI, ((t9 *)Castclass(L_31, InitializedTypeInfo(&t1900_TI))));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" void m9970 (t1890 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9970_init;
	if (!m9970_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m9970_init = true;
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
			goto IL_00c2;
		}
	}
	{
		t720 * L_2 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t720 * L_3 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_3, 8, m5775_MI_var);
		V_1 = L_3;
		t720 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_4, (t2*) &_stringLiteral2101, 0);
		t720 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_5, (t2*) &_stringLiteral2113, 0);
		t720 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_6, (t2*) &_stringLiteral2114, 0);
		t720 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral2097, 1);
		t720 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2098, 1);
		t720 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_9, (t2*) &_stringLiteral2099, 1);
		t720 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_10, (t2*) &_stringLiteral2100, 1);
		t720 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_11, (t2*) &_stringLiteral2096, 2);
		t720 * L_12 = V_1;
		((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f5 = L_12;
	}

IL_007c:
	{
		t720 * L_13 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f5;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_009f;
		}
		if (L_16 == 1)
		{
			goto IL_00a0;
		}
		if (L_16 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		t563 * L_17 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_17, (t2*) &_stringLiteral2102, &m2909_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t9 * L_18 = (__this->f1);
		t9 * L_19 = p1;
		InterfaceActionInvoker1< t2* >::Invoke(&m12061_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t2183_TI))), ((t2*)Castclass(L_19, (&t2_TI))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
extern "C" t9 * m9971 (t1890 * __this, MethodInfo* method)
{
	t1170 * V_0 = {0};
	int32_t V_1 = 0;
	t1164  V_2 = {0};
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_0, &m5726_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		t1170 * L_1 = V_0;
		t221* L_2 = (__this->f2);
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9969_MI, __this, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)));
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		t221* L_8 = (__this->f2);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		t9 * L_9 = (__this->f0);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		t9 * L_10 = (__this->f0);
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5710_MI, L_10);
		V_3 = L_11;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			t9 * L_12 = V_3;
			t9 * L_13 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_12);
			V_2 = ((*(t1164 *)((t1164 *)UnBox (L_13, InitializedTypeInfo(&t1164_TI)))));
			t9 * L_14 = m8475((&V_2), &m8475_MI);
			bool L_15 = m9966(__this, ((t2*)Castclass(L_14, (&t2_TI))), &m9966_MI);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			t1170 * L_16 = V_0;
			t9 * L_17 = m8476((&V_2), &m8476_MI);
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5737_MI, L_16, L_17);
		}

IL_0072:
		{
			t9 * L_18 = V_3;
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_18);
			if (L_19)
			{
				goto IL_0044;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			t9 * L_20 = V_3;
			V_4 = ((t9 *)IsInst(L_20, InitializedTypeInfo(&t137_TI)));
			t9 * L_21 = V_4;
			if (L_21)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			t9 * L_22 = V_4;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_22);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0091:
	{
		t1170 * L_23 = V_0;
		return L_23;
	}
}
extern "C" void m9972 (t1890 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		t221* L_1 = (__this->f2);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		t2* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_5 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_1, L_3)), L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		t2* L_6 = V_0;
		t9 * L_7 = p1;
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9970_MI, __this, L_6, L_7);
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		t221* L_10 = (__this->f2);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((t121 *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_11 = (__this->f0);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9964_MI, __this);
		__this->f0 = L_12;
	}

IL_0047:
	{
		t9 * L_13 = (__this->f0);
		t9 * L_14 = p0;
		t9 * L_15 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5703_MI, L_13, L_14, L_15);
		return;
	}
}
extern MethodInfo m9973_MI;
extern "C" bool m9973 (t1890 * __this, t9 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		t221* L_1 = (__this->f2);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		t2* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_5 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_1, L_3)), L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		t221* L_8 = (__this->f2);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_9 = (__this->f0);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_10 = (__this->f0);
		t9 * L_11 = p0;
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m5708_MI, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
extern MethodInfo m9974_MI;
extern "C" void m9974 (t1890 * __this, t9 * p0, MethodInfo* method)
{
	t2* V_0 = {0};
	int32_t V_1 = 0;
	{
		t9 * L_0 = p0;
		V_0 = ((t2*)Castclass(L_0, (&t2_TI)));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		t221* L_1 = (__this->f2);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		t2* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_5 = m331(NULL, (*(t2**)(t2**)SZArrayLdElema(L_1, L_3)), L_4, &m331_MI);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		t563 * L_6 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_6, (t2*) &_stringLiteral2102, &m2909_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		t221* L_9 = (__this->f2);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_10 = (__this->f0);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		t9 * L_11 = (__this->f0);
		t9 * L_12 = p0;
		InterfaceActionInvoker1< t9 * >::Invoke(&m5711_MI, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
extern MethodInfo m9975_MI;
extern "C" int32_t m9975 (t1890 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		t9 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5701_MI, L_1);
		t221* L_3 = (__this->f2);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((t121 *)L_3)->max_length)))));
	}

IL_001d:
	{
		t221* L_4 = (__this->f2);
		return (((int32_t)(((t121 *)L_4)->max_length)));
	}
}
extern MethodInfo m9976_MI;
extern "C" bool m9976 (t1890 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9977_MI;
extern "C" t9 * m9977 (t1890 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9978_MI;
extern "C" void m9978 (t1890 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9971_MI, __this);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5709_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m9979_MI;
extern "C" t9 * m9979 (t1890 * __this, MethodInfo* method)
{
	{
		t1898 * L_0 = (t1898 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1898_TI));
		m9955(L_0, __this, &m9955_MI);
		return L_0;
	}
}
#include "t1899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;
#include "t1899MD.h"

extern TypeInfo t138_TI;
extern MethodInfo m12062_MI;


extern MethodInfo m9980_MI;
extern "C" void m9980 (t1899 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9961(__this, L_0, &m9961_MI);
		t9 * L_1 = p0;
		t138 * L_2 = (t138 *)InterfaceFuncInvoker0< t138 * >::Invoke(&m12062_MI, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1899_TI));
		t221* L_3 = ((t1899_SFs*)InitializedTypeInfo(&t1899_TI)->static_fields)->f6;
		m9963(__this, L_3, &m9963_MI);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1899_TI));
		t221* L_4 = ((t1899_SFs*)InitializedTypeInfo(&t1899_TI)->static_fields)->f7;
		m9963(__this, L_4, &m9963_MI);
	}

IL_0027:
	{
		return;
	}
}
extern MethodInfo m9981_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9981 (t9 * __this , MethodInfo* method)
{
	static bool m9981_init;
	if (!m9981_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9981_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2113);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2113;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2114);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2114;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2101;
		((t1899_SFs*)InitializedTypeInfo(&t1899_TI)->static_fields)->f6 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral2101;
		((t1899_SFs*)InitializedTypeInfo(&t1899_TI)->static_fields)->f7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1885_TI;
#include "t1885MD.h"

#include "t1901.h"
#include "t1761.h"
extern TypeInfo t1761_TI;
#include "t1761MD.h"
extern MethodInfo m9997_MI;
extern MethodInfo m9635_MI;
extern MethodInfo m9627_MI;
extern MethodInfo m9634_MI;
extern MethodInfo m9994_MI;
extern MethodInfo m10105_MI;


extern MethodInfo m9982_MI;
extern "C" t9 * m9982 (t1885 * __this, MethodInfo* method)
{
	{
		t1896 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1896_TI));
		t1896 * L_1 = (t1896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1896_TI));
		m9953(L_1, __this, &m9953_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1896 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m9983_MI;
extern "C" int32_t m9983 (t1885 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m9997(__this, &m9997_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		t158* L_1 = (__this->f1);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		t158* L_2 = (__this->f1);
		return (((int32_t)(((t121 *)L_2)->max_length)));
	}
}
extern MethodInfo m9984_MI;
extern "C" t158* m9984 (t1885 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9985_MI;
extern "C" t1893 * m9985 (t1885 * __this, MethodInfo* method)
{
	{
		t1893 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9986_MI;
extern "C" t914 * m9986 (t1885 * __this, MethodInfo* method)
{
	{
		t1761 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9987_MI;
extern "C" t2* m9987 (t1885 * __this, MethodInfo* method)
{
	{
		t1761 * L_0 = (__this->f0);
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
		t1761 * L_2 = (__this->f0);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9635_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m9988_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9988 (t1885 * __this, MethodInfo* method)
{
	static bool m9988_init;
	if (!m9988_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9988_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		t1761 * L_1 = (__this->f0);
		t928* L_2 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m9627_MI, L_1);
		V_0 = L_2;
		t928* L_3 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		t152* L_4 = (__this->f9);
		int32_t L_5 = V_1;
		t928* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_6, L_8)));
		ArrayElementTypeCheck (L_4, L_9);
		*((t126 **)(t126 **)SZArrayLdElema(L_4, L_5)) = (t126 *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		t928* L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		t152* L_13 = (__this->f9);
		return (t9 *)L_13;
	}
}
extern MethodInfo m9989_MI;
extern "C" t2* m9989 (t1885 * __this, MethodInfo* method)
{
	{
		t1761 * L_0 = (__this->f0);
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
		t1761 * L_2 = (__this->f0);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9634_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_3);
		return L_4;
	}
}
extern MethodInfo m9990_MI;
extern "C" t2* m9990 (t1885 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9991_MI;
extern "C" void m9991 (t1885 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m9992_MI;
extern "C" t9 * m9992 (t1885 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		t158* L_1 = (__this->f1);
		int32_t L_2 = p0;
		int32_t L_3 = L_2;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_1, L_3));
	}
}
extern MethodInfo m9993_MI;
extern "C" t138 * m9993 (t1885 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" int32_t m9994 (t1885 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	t730* V_2 = {0};
	int32_t V_3 = 0;
	{
		t158* L_0 = (__this->f1);
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
		V_0 = 0;
		t730* L_1 = (__this->f2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		t730* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		t730* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
extern MethodInfo m9995_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9995 (t1885 * __this, MethodInfo* method)
{
	static bool m9995_init;
	if (!m9995_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9995_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t158* V_3 = {0};
	uint8_t V_4 = 0x0;
	t730* V_5 = {0};
	int32_t V_6 = 0;
	{
		t158* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (t158*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9994_MI, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		t730* L_4 = (__this->f2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		t730* L_5 = V_5;
		int32_t L_6 = V_6;
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		t158* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		t158* L_12 = (__this->f1);
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		ArrayElementTypeCheck (L_9, (*(t9 **)(t9 **)SZArrayLdElema(L_12, L_14)));
		*((t9 **)(t9 **)SZArrayLdElema(L_9, L_11)) = (t9 *)(*(t9 **)(t9 **)SZArrayLdElema(L_12, L_14));
	}

IL_0045:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_17 = V_6;
		t730* L_18 = V_5;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((t121 *)L_18)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		t158* L_19 = V_3;
		return L_19;
	}
}
extern MethodInfo m9996_MI;
extern "C" t9 * m9996 (t1885 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m9997 (t1885 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		t1761 * L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		bool L_2 = m10105(NULL, L_1, &m10105_MI);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->f6 = 3;
	}

IL_001c:
	{
		int32_t L_3 = (__this->f6);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;
#include "t1901MD.h"



#include "t1902.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1902_TI;
#include "t1902MD.h"



#include "t1903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;
#include "t1903MD.h"

#include "t1911.h"
extern TypeInfo t1911_TI;
#include "t1911MD.h"
extern MethodInfo m11143_MI;
extern MethodInfo m10092_MI;
extern MethodInfo m10099_MI;
extern MethodInfo m10034_MI;
extern MethodInfo m10103_MI;


extern MethodInfo m9998_MI;
extern "C" void m9998 (t1903 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9999_MI;
extern "C" void m9999 (t1903 * __this, t9 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	t1911 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1100 * L_1 = p1;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11143(L_2, &m11143_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		bool L_4 = m10092(NULL, L_3, &m10092_MI);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t1911 * L_6 = m10099(NULL, L_5, &m10099_MI);
		V_0 = L_6;
		t1911 * L_7 = V_0;
		t1100 * L_8 = p1;
		t1101  L_9 = p2;
		VirtActionInvoker2< t1100 *, t1101  >::Invoke(&m10034_MI, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		t9 * L_10 = p0;
		t1100 * L_11 = p1;
		t1101  L_12 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		m10103(NULL, L_10, L_11, L_12, &m10103_MI);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10000_MI;
extern "C" t9 * m10000 (t1903 * __this, t9 * p0, t1100 * p1, t1101  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;
#include "t1905MD.h"

#include "t1590.h"
extern TypeInfo t1590_TI;
#include "t1590MD.h"
extern MethodInfo m10079_MI;
extern MethodInfo m5730_MI;


extern MethodInfo m10001_MI;
extern "C" void m10001 (t1905 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m10002_MI;
extern "C" void m10002 (t1905 * __this, t9 * p0, t1100 * p1, t1101  p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1100 * L_1 = p1;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		t132 * L_2 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m11143(L_2, &m11143_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		t9 * L_3 = p0;
		t1100 * L_4 = p1;
		t1101  L_5 = p2;
		VirtActionInvoker2< t1100 *, t1101  >::Invoke(&m10079_MI, ((t1590 *)Castclass(L_3, InitializedTypeInfo(&t1590_TI))), L_4, L_5);
		t1100 * L_6 = p1;
		m5730(L_6, (t2*) &_stringLiteral2116, 0, &m5730_MI);
		return;
	}
}
extern MethodInfo m10003_MI;
extern "C" t9 * m10003 (t1905 * __this, t9 * p0, t1100 * p1, t1101  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_0, (t2*) &_stringLiteral2117, &m5734_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1906.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1906_TI;
#include "t1906MD.h"

extern TypeInfo t1904_TI;
extern TypeInfo t1907_TI;
extern Il2CppType t1590_0_0_0;
extern MethodInfo m7757_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m12063_MI;


extern MethodInfo m10004_MI;
extern "C" void m10004 (t1906 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m10005_MI;
extern "C" void m10005 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1590_0_0_0), &m329_MI);
		((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f0 = L_0;
		t1905 * L_1 = (t1905 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1905_TI));
		m10001(L_1, &m10001_MI);
		((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f1 = L_1;
		t1903 * L_2 = (t1903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1903_TI));
		m9998(L_2, &m9998_MI);
		((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m10006_MI;
extern "C" t9 * m10006 (t1906 * __this, t126 * p0, t1101  p1, t9 ** p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7757_MI, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t9 ** L_2 = p2;
		*((t9 **)(L_2)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1906_TI));
		t1903 * L_3 = ((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1906_TI));
		t126 * L_4 = ((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f0;
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4473_MI, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		t9 ** L_7 = p2;
		*((t9 **)(L_7)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1906_TI));
		t1905 * L_8 = ((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f1;
		return L_8;
	}

IL_0027:
	{
		t9 * L_9 = (__this->f3);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		t9 * L_10 = (__this->f3);
		t126 * L_11 = p0;
		t1101  L_12 = p1;
		t9 ** L_13 = p2;
		t9 * L_14 = (t9 *)InterfaceFuncInvoker3< t9 *, t126 *, t1101 , t9 ** >::Invoke(&m12063_MI, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		t9 ** L_15 = p2;
		*((t9 **)(L_15)) = (t9 *)NULL;
		return (t9 *)NULL;
	}
}
#include "t1908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1908_TI;
#include "t1908MD.h"

extern MethodInfo m10019_MI;
extern MethodInfo m10013_MI;
extern MethodInfo m12064_MI;


extern MethodInfo m10007_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m10007 (t1908 * __this, t9 * p0, t158* p1, int32_t p2, t1893 * p3, t9 * p4, MethodInfo* method)
{
	static bool m10007_init;
	if (!m10007_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m10007_init = true;
	}
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f4 = L_0;
		t158* L_1 = p1;
		__this->f1 = L_1;
		int32_t L_2 = p2;
		__this->f2 = L_2;
		t1893 * L_3 = p3;
		__this->f3 = L_3;
		t9 * L_4 = p4;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_5 = p4;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12053_MI, L_5);
		__this->f5 = L_6;
		t9 * L_7 = p4;
		t914 * L_8 = (t914 *)InterfaceFuncInvoker0< t914 * >::Invoke(&m12064_MI, L_7);
		__this->f7 = L_8;
	}

IL_0041:
	{
		t158* L_9 = (__this->f1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = p2;
		__this->f1 = ((t158*)SZArrayNew(t158_TI_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
extern MethodInfo m10008_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m10008 (t1908 * __this, t138 * p0, t9 * p1, MethodInfo* method)
{
	static bool m10008_init;
	if (!m10008_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m10008_init = true;
	}
	{
		m336(__this, &m336_MI);
		t138 * L_0 = p0;
		__this->f6 = L_0;
		t9 * L_1 = p1;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		t9 * L_2 = p1;
		t914 * L_3 = (t914 *)InterfaceFuncInvoker0< t914 * >::Invoke(&m12064_MI, L_2);
		__this->f7 = L_3;
		t9 * L_4 = p1;
		t1893 * L_5 = (t1893 *)InterfaceFuncInvoker0< t1893 * >::Invoke(&m12057_MI, L_4);
		__this->f3 = L_5;
	}

IL_0028:
	{
		__this->f1 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern MethodInfo m10009_MI;
extern "C" void m10009 (t1908 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m10019_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m10010_MI;
extern "C" int32_t m10010 (t1908 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m10011_MI;
extern "C" t158* m10011 (t1908 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10012_MI;
extern "C" t1893 * m10012 (t1908 * __this, MethodInfo* method)
{
	{
		t1893 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1893 * L_1 = (t1893 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1893_TI));
		m9924(L_1, &m9924_MI);
		__this->f3 = L_1;
	}

IL_0013:
	{
		t1893 * L_2 = (__this->f3);
		return L_2;
	}
}
extern "C" t914 * m10013 (t1908 * __this, MethodInfo* method)
{
	{
		t914 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m10014_MI;
extern "C" t2* m10014 (t1908 * __this, MethodInfo* method)
{
	{
		t914 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		t2* L_1 = (__this->f8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		t914 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4391_MI, L_2);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t2* L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m10015_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m10015 (t1908 * __this, MethodInfo* method)
{
	static bool m10015_init;
	if (!m10015_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m10015_init = true;
	}
	t928* V_0 = {0};
	int32_t V_1 = 0;
	{
		t914 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		t152* L_1 = (__this->f9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		t914 * L_2 = (__this->f7);
		t928* L_3 = (t928*)VirtFuncInvoker0< t928* >::Invoke(&m4423_MI, L_2);
		V_0 = L_3;
		t928* L_4 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f9);
		int32_t L_6 = V_1;
		t928* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4424_MI, (*(t924 **)(t924 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t928* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		t152* L_14 = (__this->f9);
		return (t9 *)L_14;
	}
}
extern MethodInfo m10016_MI;
extern "C" t9 * m10016 (t1908 * __this, MethodInfo* method)
{
	{
		t1899 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1899_TI));
		t1899 * L_1 = (t1899 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1899_TI));
		m9980(L_1, __this, &m9980_MI);
		__this->f11 = L_1;
	}

IL_0014:
	{
		t1899 * L_2 = (__this->f11);
		return L_2;
	}
}
extern MethodInfo m10017_MI;
extern "C" t2* m10017 (t1908 * __this, MethodInfo* method)
{
	{
		t914 * L_0 = (__this->f7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_1 = (__this->f10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t914 * L_2 = (__this->f7);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4452_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_3);
		__this->f10 = L_4;
	}

IL_0026:
	{
		t2* L_5 = (__this->f10);
		return L_5;
	}
}
extern MethodInfo m10018_MI;
extern "C" t2* m10018 (t1908 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m10019 (t1908 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m10020_MI;
extern "C" t9 * m10020 (t1908 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern MethodInfo m10021_MI;
extern "C" t138 * m10021 (t1908 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m10022_MI;
extern "C" int32_t m10022 (t1908 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		t158* L_1 = (__this->f1);
		if ((((int32_t)(((t121 *)L_1)->max_length))))
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
		t1882 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		t914 * L_3 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m10013_MI, __this);
		t1882 * L_4 = (t1882 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1882_TI));
		m9881(L_4, L_3, 1, &m9881_MI);
		__this->f12 = L_4;
	}

IL_002e:
	{
		t1882 * L_5 = (__this->f12);
		int32_t L_6 = m9882(L_5, &m9882_MI);
		return L_6;
	}
}
extern MethodInfo m10023_MI;
extern "C" t158* m10023 (t1908 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		t158* L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t1882 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		t914 * L_3 = (t914 *)VirtFuncInvoker0< t914 * >::Invoke(&m10013_MI, __this);
		t1882 * L_4 = (t1882 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1882_TI));
		m9881(L_4, L_3, 1, &m9881_MI);
		__this->f12 = L_4;
	}

IL_002a:
	{
		t1882 * L_5 = (__this->f12);
		t158* L_6 = (__this->f1);
		t158* L_7 = m9883(L_5, L_6, &m9883_MI);
		__this->f0 = L_7;
	}

IL_0041:
	{
		t158* L_8 = (__this->f0);
		return L_8;
	}
}
extern MethodInfo m10024_MI;
extern "C" t9 * m10024 (t1908 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
#include "t1910.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1910_TI;
#include "t1910MD.h"

#include "t1915.h"
extern TypeInfo t1915_TI;
#include "t1915MD.h"
extern MethodInfo m10041_MI;
extern MethodInfo m10038_MI;
extern MethodInfo m10114_MI;


extern MethodInfo m10025_MI;
extern "C" t1209 * m10025 (t1910 * __this, t126 * p0, MethodInfo* method)
{
	t1915 * V_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t2* L_1 = ((t1863_SFs*)InitializedTypeInfo(&t1863_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1915_TI));
		t1915 * L_2 = (t1915 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1915_TI));
		m10041(L_2, L_0, L_1, (t158*)(t158*)NULL, &m10041_MI);
		V_0 = L_2;
		t1915 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10038_MI, L_3);
		return ((t1209 *)Castclass(L_4, InitializedTypeInfo(&t1209_TI)));
	}
}
extern MethodInfo m10026_MI;
extern "C" t1911 * m10026 (t1910 * __this, t1590 * p0, t126 * p1, t9 * p2, t1861 * p3, MethodInfo* method)
{
	{
		t1590 * L_0 = p0;
		t126 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t9 * L_2 = m10114(NULL, L_0, L_1, &m10114_MI);
		t1911 * L_3 = m10099(NULL, L_2, &m10099_MI);
		return L_3;
	}
}
extern MethodInfo m10027_MI;
extern "C" void m10027 (t1910 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m10028_MI;
extern "C" bool m10028 (t1910 * __this, t1861 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;
#include "t1912MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1913.h"
#include "t1914.h"
extern TypeInfo t58_TI;
extern TypeInfo t1923_TI;
#include "t58MD.h"
extern Il2CppType t1209_0_0_0;
extern MethodInfo m10031_MI;
extern MethodInfo m4304_MI;
extern MethodInfo m10032_MI;
extern MethodInfo m12065_MI;
extern MethodInfo m10037_MI;


extern MethodInfo m10029_MI;
extern "C" void m10029 (t1911 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10031(__this, L_0, L_1, NULL, &m10031_MI);
		return;
	}
}
extern MethodInfo m10030_MI;
extern "C" void m10030 (t1911 * __this, t126 * p0, t1914 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10031(__this, L_0, L_1, NULL, &m10031_MI);
		t1914 * L_2 = p1;
		__this->f3 = L_2;
		return;
	}
}
extern "C" void m10031 (t1911 * __this, t126 * p0, t58 p1, t9 * p2, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7757_MI, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_4, (t2*) &_stringLiteral2118, &m2909_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		t126 * L_5 = p0;
		__this->f0 = L_5;
		t58 L_6 = p1;
		t58 L_7 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_8 = m4304(NULL, L_6, L_7, &m4304_MI);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5734(L_9, (t2*) &_stringLiteral2119, &m5734_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C" t126 * m10032 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef t126 * (*m10032_ftn) (t9 *);
	static m10032_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10032_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m10033_MI;
extern "C" t126 * m10033 (t1911 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		t126 * L_1 = (__this->f0);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7756_MI, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1209_0_0_0), &m329_MI);
		return L_3;
	}

IL_0020:
	{
		t126 * L_4 = (__this->f0);
		return L_4;
	}

IL_0027:
	{
		t9 * L_5 = (__this->f4);
		t126 * L_6 = m10032(NULL, L_5, &m10032_MI);
		return L_6;
	}
}
extern "C" void m10034 (t1911 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10038_MI, __this);
		V_0 = L_0;
		t9 * L_1 = V_0;
		t1100 * L_2 = p0;
		t1101  L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		m10103(NULL, L_1, L_2, L_3, &m10103_MI);
		return;
	}
}
extern MethodInfo m10035_MI;
extern "C" t1913 * m10035 (t1911 * __this, MethodInfo* method)
{
	{
		t1913 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10036_MI;
extern "C" void m10036 (t1911 * __this, t1913 * p0, MethodInfo* method)
{
	{
		t1913 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10037 (t1911 * __this, t2* p0, MethodInfo* method)
{
	typedef t9 * (*m10037_ftn) (t1911 *, t2*);
	static m10037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10037_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t9 * m10038 (t1911 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	t9 * V_1 = {0};
	{
		t9 * L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((t9 *)IsInst(__this, InitializedTypeInfo(&t1923_TI)));
		t9 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_2 = V_1;
		t2* L_3 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12065_MI, L_2);
		V_0 = L_3;
		t2* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		t2* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1209_0_0_0), &m329_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_8 = m331(NULL, L_5, L_7, &m331_MI);
		if (!L_8)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		t126 * L_9 = (__this->f0);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		t126 * L_11 = (__this->f0);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		t2* L_13 = V_0;
		t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10037_MI, __this, L_13);
		__this->f4 = L_14;
	}

IL_005a:
	{
		t9 * L_15 = (__this->f4);
		return L_15;
	}
}
extern MethodInfo m10039_MI;
extern "C" void m10039 (t1911 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1928.h"
extern TypeInfo t1914_TI;
extern TypeInfo t1913_TI;
extern TypeInfo t1928_TI;
#include "t1913MD.h"
#include "t1914MD.h"
extern Il2CppType t9_0_0_0;
extern MethodInfo m12066_MI;
extern MethodInfo m10075_MI;
extern MethodInfo m10056_MI;
extern MethodInfo m10067_MI;
extern MethodInfo m7781_MI;
extern MethodInfo m10117_MI;


extern MethodInfo m10040_MI;
extern "C" void m10040 (t1915 * __this, t126 * p0, t1914 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1914 * L_1 = p1;
		m10030(__this, L_0, L_1, &m10030_MI);
		t1914 * L_2 = p1;
		t9 * L_3 = m10056(L_2, &m10056_MI);
		__this->f7 = L_3;
		__this->f8 = 0;
		t1914 * L_4 = p1;
		t2* L_5 = m10067(L_4, &m10067_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m10041 (t1915 * __this, t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		m10029(__this, L_0, &m10029_MI);
		__this->f8 = 0;
		t126 * L_1 = p0;
		t2* L_2 = p1;
		t158* L_3 = p2;
		t1853 * L_4 = m9805(NULL, L_1, L_2, L_3, &m9805_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m10042_MI;
extern "C" void m10042 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t828 * L_1 = (t828 *)VirtFuncInvoker1< t828 *, t2* >::Invoke(&m7781_MI, L_0, (t2*) &_stringLiteral2120);
		((t1915_SFs*)InitializedTypeInfo(&t1915_TI)->static_fields)->f5 = L_1;
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t828 * L_3 = (t828 *)VirtFuncInvoker1< t828 *, t2* >::Invoke(&m7781_MI, L_2, (t2*) &_stringLiteral2121);
		((t1915_SFs*)InitializedTypeInfo(&t1915_TI)->static_fields)->f6 = L_3;
		return;
	}
}
extern MethodInfo m10043_MI;
extern "C" t2* m10043 (t1915 * __this, MethodInfo* method)
{
	t1590 * V_0 = {0};
	{
		t1913 * L_0 = (__this->f3);
		if (!((t1914 *)IsInst(L_0, InitializedTypeInfo(&t1914_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t1913 * L_1 = (__this->f3);
		t1590 * L_2 = (t1590 *)VirtFuncInvoker1< t1590 *, t126 * >::Invoke(&m12066_MI, L_1, (t126 *)NULL);
		V_0 = L_2;
		t1590 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10075_MI, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t1590 * L_5 = V_0;
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10075_MI, L_5);
		t2* L_7 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12065_MI, L_6);
		return L_7;
	}

IL_002e:
	{
		t126 * L_8 = m10033(__this, &m10033_MI);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4489_MI, L_8);
		return L_9;
	}
}
extern MethodInfo m10044_MI;
extern "C" void m10044 (t1915 * __this, MethodInfo* method)
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
			t1913 * L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			t1913 * L_1 = (__this->f3);
			if (((t1928 *)IsInst(L_1, InitializedTypeInfo(&t1928_TI))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			t1913 * L_2 = (__this->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
			m10117(NULL, L_2, &m10117_MI);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x29, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0029:
	{
		return;
	}
}
#include "t1916.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1916_TI;
#include "t1916MD.h"

extern TypeInfo t2184_TI;
extern TypeInfo t2185_TI;
extern Il2CppType t2185_0_0_0;
extern Il2CppType t2184_0_0_0;
extern MethodInfo m5857_MI;
extern MethodInfo m12067_MI;
extern MethodInfo m12068_MI;
extern MethodInfo m12069_MI;


extern MethodInfo m10045_MI;
extern "C" void m10045 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1170_TI));
		t1170 * L_0 = (t1170 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1170_TI));
		m5726(L_0, &m5726_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m10046_MI;
extern TypeInfo* t2184_TI_var;
extern "C" void m10046 (t9 * __this , t9 * p0, t1590 * p1, MethodInfo* method)
{
	static bool m10046_init;
	if (!m10046_init)
	{
		t2184_TI_var = il2cpp_codegen_class_from_type(&t2184_0_0_0);
		m10046_init = true;
	}
	t2184* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t1170 * L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_3 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_5 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2185_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5857_MI, L_5, L_6);
			V_0 = ((t2184*)Castclass(L_7, t2184_TI_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		t9 * L_8 = V_1;
		m1084(NULL, L_8, &m1084_MI);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		t2184* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1590 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1590 * >::Invoke(&m12067_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2184* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m10047_MI;
extern TypeInfo* t2184_TI_var;
extern "C" void m10047 (t9 * __this , t9 * p0, t1590 * p1, MethodInfo* method)
{
	static bool m10047_init;
	if (!m10047_init)
	{
		t2184_TI_var = il2cpp_codegen_class_from_type(&t2184_0_0_0);
		m10047_init = true;
	}
	t2184* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t1170 * L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_3 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_5 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2185_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5857_MI, L_5, L_6);
			V_0 = ((t2184*)Castclass(L_7, t2184_TI_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		t9 * L_8 = V_1;
		m1084(NULL, L_8, &m1084_MI);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		t2184* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1590 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1590 * >::Invoke(&m12068_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2184* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
extern MethodInfo m10048_MI;
extern TypeInfo* t2184_TI_var;
extern "C" void m10048 (t9 * __this , t9 * p0, MethodInfo* method)
{
	static bool m10048_init;
	if (!m10048_init)
	{
		t2184_TI_var = il2cpp_codegen_class_from_type(&t2184_0_0_0);
		m10048_init = true;
	}
	t2184* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t1170 * L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5876_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1082(NULL, L_2, &m1082_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_3 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5722_MI, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1170 * L_5 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2185_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5857_MI, L_5, L_6);
			V_0 = ((t2184*)Castclass(L_7, t2184_TI_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		t9 * L_8 = V_1;
		m1084(NULL, L_8, &m1084_MI);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		t2184* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		InterfaceActionInvoker1< t9 * >::Invoke(&m12069_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		t2184* L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((t121 *)L_15)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0059:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1917_TI;
#include "t1917MD.h"

#include "t1918MD.h"
extern MethodInfo m10133_MI;
extern MethodInfo m10132_MI;
extern MethodInfo m10049_MI;


extern "C" t2* m10049 (t1917 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10050_MI;
extern "C" t1919* m10050 (t1917 * __this, MethodInfo* method)
{
	{
		return (t1919*)NULL;
	}
}
extern MethodInfo m10051_MI;
extern "C" t126 * m10051 (t1917 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10052_MI;
extern "C" t2* m10052 (t1917 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m10133(__this, &m10133_MI);
		t2* L_1 = m10132(__this, &m10132_MI);
		t2* L_2 = m10049(__this, &m10049_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, L_1, L_2, &m399_MI);
		return L_3;
	}
}
#include "t1920.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1920_TI;
#include "t1920MD.h"



extern MethodInfo m10053_MI;
extern "C" void m10053 (t1920 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10054_MI;
extern "C" t9 * m10054 (t1920 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m10055_MI;
extern "C" void m10055 (t1913 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t9 * m10056 (t1913 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10057_MI;
extern "C" void m10057 (t1913 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m10058_MI;
extern "C" t2* m10058 (t1913 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10059_MI;
extern "C" void m10059 (t1913 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10060_MI;
extern "C" bool m10060 (t1913 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return ((((int32_t)((((t9*)(t2*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10061_MI;
extern "C" bool m10061 (t1913 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m10062_MI;
extern "C" void m10062 (t1913 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1921.h"
extern TypeInfo t1921_TI;
extern TypeInfo t1924_TI;
#include "t1921MD.h"
extern MethodInfo m11903_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m10077_MI;
extern MethodInfo m10073_MI;
extern MethodInfo m12070_MI;


extern MethodInfo m10063_MI;
extern "C" void m10063 (t1914 * __this, t2* p0, t1590 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1914 * G_B2_0 = {0};
	t1914 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1914 * G_B3_1 = {0};
	{
		t2* L_0 = p0;
		m10055(__this, L_0, &m10055_MI);
		t1590 * L_1 = p1;
		__this->f3 = L_1;
		t1590 * L_2 = (__this->f3);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10073_MI, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		t1590 * L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10073_MI, L_4);
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12070_MI, L_5);
		V_0 = L_6;
		t9 * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = ((t9 *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		G_B3_1->f2 = G_B3_0;
		return;
	}
}
extern MethodInfo m10064_MI;
extern "C" t1209 * m10064 (t1914 * __this, MethodInfo* method)
{
	{
		t1921 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11903_MI, L_0);
		return ((t1209 *)Castclass(L_1, InitializedTypeInfo(&t1209_TI)));
	}
}
extern MethodInfo m10065_MI;
extern "C" void m10065 (t1914 * __this, t1209 * p0, MethodInfo* method)
{
	{
		t1209 * L_0 = p0;
		t1921 * L_1 = (t1921 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1921_TI));
		m11899(L_1, L_0, &m11899_MI);
		__this->f5 = L_1;
		return;
	}
}
extern MethodInfo m10066_MI;
extern "C" t1590 * m10066 (t1914 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1590 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t2* m10067 (t1914 * __this, MethodInfo* method)
{
	{
		t1590 * L_0 = (__this->f3);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m10077_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1922_TI;
extern TypeInfo t184_TI;
extern TypeInfo t906_TI;
extern TypeInfo t891_TI;
#include "t891MD.h"
extern Il2CppType t1923_0_0_0;
extern Il2CppType t1924_0_0_0;
extern Il2CppType t1922_0_0_0;
extern MethodInfo m10081_MI;
extern MethodInfo m10336_MI;
extern MethodInfo m10338_MI;
extern MethodInfo m11975_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m10326_MI;
extern MethodInfo m10094_MI;


extern MethodInfo m10068_MI;
extern "C" void m10068 (t1590 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m10081(__this, &m10081_MI);
		return;
	}
}
extern MethodInfo m10069_MI;
extern TypeInfo* t720_TI_var;
extern MethodInfo* m5775_MI_var;
extern MethodInfo* m5776_MI_var;
extern MethodInfo* m5777_MI_var;
extern "C" void m10069 (t1590 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	static bool m10069_init;
	if (!m10069_init)
	{
		t720_TI_var = il2cpp_codegen_class_from_type(&t720_0_0_0);
		m5775_MI_var = il2cpp_codegen_genericmethod_get_method(&m5775_GM);
		m5776_MI_var = il2cpp_codegen_genericmethod_get_method(&m5776_GM);
		m5777_MI_var = il2cpp_codegen_genericmethod_get_method(&m5777_GM);
		m10069_init = true;
	}
	t1976 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t9 * V_3 = {0};
	t2* V_4 = {0};
	t720 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m336(__this, &m336_MI);
		t1100 * L_0 = p0;
		t1976 * L_1 = m10327(L_0, &m10327_MI);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		t1976 * L_2 = V_0;
		t2* L_3 = m10336(L_2, &m10336_MI);
		V_4 = L_3;
		t2* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		t720 * L_5 = ((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		t720 * L_6 = (t720 *)il2cpp_codegen_object_new (t720_TI_var);
		m5775(L_6, 6, m5775_MI_var);
		V_5 = L_6;
		t720 * L_7 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_7, (t2*) &_stringLiteral437, 0);
		t720 * L_8 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_8, (t2*) &_stringLiteral2122, 1);
		t720 * L_9 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_9, (t2*) &_stringLiteral2123, 2);
		t720 * L_10 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_10, (t2*) &_stringLiteral2124, 3);
		t720 * L_11 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_11, (t2*) &_stringLiteral2116, 4);
		t720 * L_12 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5776_MI_var, L_12, (t2*) &_stringLiteral2125, 5);
		t720 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		t720 * L_14 = ((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f8;
		t2* L_15 = V_4;
		bool L_16 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5777_MI_var, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00be;
		}
		if (L_17 == 1)
		{
			goto IL_00d4;
		}
		if (L_17 == 2)
		{
			goto IL_00ea;
		}
		if (L_17 == 3)
		{
			goto IL_00fd;
		}
		if (L_17 == 4)
		{
			goto IL_0110;
		}
		if (L_17 == 5)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_014f;
	}

IL_00be:
	{
		t1976 * L_18 = V_0;
		t9 * L_19 = m10338(L_18, &m10338_MI);
		__this->f1 = ((t2*)Castclass(L_19, (&t2_TI)));
		goto IL_0155;
	}

IL_00d4:
	{
		t1976 * L_20 = V_0;
		t9 * L_21 = m10338(L_20, &m10338_MI);
		__this->f2 = ((t9 *)Castclass(L_21, InitializedTypeInfo(&t1923_TI)));
		goto IL_0155;
	}

IL_00ea:
	{
		t1976 * L_22 = V_0;
		t9 * L_23 = m10338(L_22, &m10338_MI);
		__this->f0 = ((t9 *)Castclass(L_23, InitializedTypeInfo(&t1922_TI)));
		goto IL_0155;
	}

IL_00fd:
	{
		t1976 * L_24 = V_0;
		t9 * L_25 = m10338(L_24, &m10338_MI);
		__this->f3 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t1924_TI)));
		goto IL_0155;
	}

IL_0110:
	{
		t1976 * L_26 = V_0;
		t9 * L_27 = m10338(L_26, &m10338_MI);
		V_3 = L_27;
		t9 * L_28 = V_3;
		if (!((t2*)IsInst(L_28, (&t2_TI))))
		{
			goto IL_012e;
		}
	}
	{
		t9 * L_29 = V_3;
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11975_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t184_TI))), (t9 *)NULL);
		V_2 = L_30;
		goto IL_0135;
	}

IL_012e:
	{
		t9 * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, InitializedTypeInfo(&t125_TI)))));
	}

IL_0135:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_013a;
		}
	}
	{
		V_1 = 0;
	}

IL_013a:
	{
		goto IL_0155;
	}

IL_013c:
	{
		t1976 * L_33 = V_0;
		t9 * L_34 = m10338(L_33, &m10338_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int32_t L_35 = m4313(NULL, L_34, &m4313_MI);
		__this->f4 = L_35;
		goto IL_0155;
	}

IL_014f:
	{
		t169 * L_36 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_36, &m561_MI);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0155:
	{
		t1976 * L_37 = V_0;
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10339_MI, L_37);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_40 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		int32_t L_41 = ((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f6;
		__this->f4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
extern MethodInfo m10070_MI;
extern "C" void m10070 (t9 * __this , MethodInfo* method)
{
	{
		((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f6 = 1;
		((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f7 = 2;
		return;
	}
}
extern MethodInfo m10071_MI;
extern "C" bool m10071 (t1590 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		int32_t L_1 = ((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10072_MI;
extern "C" t9 * m10072 (t1590 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t9 * m10073 (t1590 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10074_MI;
extern "C" void m10074 (t1590 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10075 (t1590 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10076_MI;
extern "C" void m10076 (t1590 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t2* m10077 (t1590 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10078_MI;
extern "C" void m10078 (t1590 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" void m10079 (t1590 * __this, t1100 * p0, t1101  p1, MethodInfo* method)
{
	{
		t1100 * L_0 = p0;
		t126 * L_1 = m2510(__this, &m2510_MI);
		m10326(L_0, L_1, &m10326_MI);
		t1100 * L_2 = p0;
		t2* L_3 = (__this->f1);
		m5743(L_2, (t2*) &_stringLiteral437, L_3, &m5743_MI);
		t1100 * L_4 = p0;
		t9 * L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1923_0_0_0), &m329_MI);
		m5728(L_4, (t2*) &_stringLiteral2122, L_5, L_6, &m5728_MI);
		t1100 * L_7 = p0;
		t9 * L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1924_0_0_0), &m329_MI);
		m5728(L_7, (t2*) &_stringLiteral2124, L_8, L_9, &m5728_MI);
		t1100 * L_10 = p0;
		t9 * L_11 = (__this->f0);
		t126 * L_12 = m329(NULL, LoadTypeToken(&t1922_0_0_0), &m329_MI);
		m5728(L_10, (t2*) &_stringLiteral2123, L_11, L_12, &m5728_MI);
		t1100 * L_13 = p0;
		int32_t L_14 = (__this->f4);
		m5730(L_13, (t2*) &_stringLiteral2125, L_14, &m5730_MI);
		return;
	}
}
extern MethodInfo m10080_MI;
extern "C" t9 * m10080 (t1590 * __this, t1101  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1590_TI));
		int32_t L_1 = ((t1590_SFs*)InitializedTypeInfo(&t1590_TI)->static_fields)->f6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1927_TI));
		t9 * L_2 = m10094(NULL, __this, &m10094_MI);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
extern "C" void m10081 (t1590 * __this, MethodInfo* method)
{
	{
		t1862 * L_0 = (t1862 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1862_TI));
		m9816(L_0, &m9816_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10082_MI;
extern "C" t126 * m10082 (t1590 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t9 * L_1 = (__this->f2);
		t2* L_2 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12065_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m7770(NULL, L_2, &m7770_MI);
		__this->f5 = L_3;
	}

IL_001e:
	{
		t126 * L_4 = (__this->f5);
		return L_4;
	}
}
#include "t1925.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11129_MI;
extern MethodInfo m5735_MI;


extern MethodInfo m10083_MI;
extern "C" void m10083 (t9 * __this , MethodInfo* method)
{
	{
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f0 = (t2*)NULL;
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f1 = (t2*)NULL;
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f2 = (t2*)NULL;
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f3 = 0;
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f4 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1158_TI));
		t1158 * L_0 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_0, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f5 = L_0;
		t1158 * L_1 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_1, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f6 = L_1;
		t1158 * L_2 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_2, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f7 = L_2;
		t1158 * L_3 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_3, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f8 = L_3;
		t1158 * L_4 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_4, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f9 = L_4;
		t1158 * L_5 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_5, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f10 = L_5;
		t1158 * L_6 = (t1158 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1158_TI));
		m5911(L_6, &m5911_MI);
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f11 = L_6;
		return;
	}
}
extern MethodInfo m10084_MI;
extern "C" t2* m10084 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t2* L_0 = ((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t2* m10085 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t2* L_0 = ((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t2* L_1 = m11129(NULL, &m11129_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t2* L_2 = ((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f2;
		return L_2;
	}
}
extern "C" t1917 * m10086 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1158 * V_0 = {0};
	t1917 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
		t1158 * L_0 = ((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f9;
		V_0 = L_0;
		t1158 * L_1 = V_0;
		m1082(NULL, L_1, &m1082_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1925_TI));
			t1158 * L_2 = ((t1925_SFs*)InitializedTypeInfo(&t1925_TI)->static_fields)->f6;
			t126 * L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5735_MI, L_2, L_3);
			V_1 = ((t1917 *)IsInst(L_4, InitializedTypeInfo(&t1917_TI)));
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		t1158 * L_5 = V_0;
		m1084(NULL, L_5, &m1084_MI);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0028:
	{
		t1917 * L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
