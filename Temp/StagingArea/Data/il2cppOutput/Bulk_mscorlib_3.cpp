#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1825.h"
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
extern TypeInfo t1825_TI;
#include "t1825MD.h"

#include "t122.h"
#include "t1826.h"
#include "t1827.h"
#include "mscorlib_ArrayTypes.h"
#include "t126.h"
#include "t124.h"

#include "t121.h"

extern MethodInfo m9708_MI;
extern "C" void m9708 (t9 * __this , t1826 * p0, t1825 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m9708_ftn) (t1826 *, t1825 *, int32_t);
	static m9708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9708_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9709_MI;
extern "C" t152* m9709 (t9 * __this , t1826 * p0, bool p1, MethodInfo* method)
{
	typedef t152* (*m9709_ftn) (t1826 *, bool);
	static m9709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9709_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1827_TI;
#include "t1827MD.h"



#include "t1828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1828_TI;
#include "t1828MD.h"

#include "t9.h"
#include "t58.h"
#include "t477.h"


extern MethodInfo m9710_MI;
extern "C" void m9710 (t1828 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9711_MI;
extern "C" t9 * m9711 (t1828 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9711((t1828 *)__this->f9,p0, method);
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
extern "C" t9 * pinvoke_delegate_wrapper_t1828(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9712_MI;
extern "C" t9 * m9712 (t1828 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9713_MI;
extern "C" t9 * m9713 (t1828 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1826_TI;
#include "t1826MD.h"

#include "t1799.h"
#include "t835.h"
#include "t930.h"
#include "t920.h"
#include "t2.h"
#include "t125.h"
#include "t567.h"
#include "t127.h"
#include "t297.h"
#include "t2129.h"
#include "t931.h"
#include "t939.h"
#include "t907.h"
#include "t2039.h"
#include "t570.h"
#include "t1831.h"
#include "t138.h"
#include "t1106.h"
#include "t1107.h"
#include "t1578.h"
extern TypeInfo t835_TI;
extern TypeInfo t126_TI;
extern TypeInfo t920_TI;
extern TypeInfo t934_TI;
extern TypeInfo t930_TI;
extern TypeInfo t124_TI;
extern TypeInfo t1576_TI;
extern TypeInfo t2135_TI;
extern TypeInfo t152_TI;
extern TypeInfo t567_TI;
extern TypeInfo t2129_TI;
extern TypeInfo t2_TI;
extern TypeInfo t931_TI;
extern TypeInfo t9_TI;
extern TypeInfo t939_TI;
extern TypeInfo t158_TI;
extern TypeInfo t907_TI;
extern TypeInfo t570_TI;
extern TypeInfo t1831_TI;
extern TypeInfo t2039_TI;
extern TypeInfo t121_TI;
extern TypeInfo t122_TI;
extern TypeInfo t125_TI;
#include "t835MD.h"
#include "t920MD.h"
#include "t930MD.h"
#include "t844MD.h"
#include "t121MD.h"
#include "t2135MD.h"
#include "t126MD.h"
#include "t567MD.h"
#include "t297MD.h"
#include "t2129MD.h"
#include "t2MD.h"
#include "t570MD.h"
#include "t1831MD.h"
#include "t1815MD.h"
extern Il2CppType t1576_0_0_0;
extern Il2CppType t934_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2183_0_0_0;
extern Il2CppType t2184_0_0_0;
extern Il2CppType t1826_0_0_0;
extern Il2CppType t1828_0_0_0;
extern Il2CppType t158_0_0_0;
extern MethodInfo m9715_MI;
extern MethodInfo m9595_MI;
extern MethodInfo m4465_MI;
extern MethodInfo m4466_MI;
extern MethodInfo m9755_MI;
extern MethodInfo m4432_MI;
extern MethodInfo m5982_MI;
extern MethodInfo m9740_MI;
extern MethodInfo m11646_MI;
extern MethodInfo m11645_MI;
extern MethodInfo m11644_MI;
extern MethodInfo m4431_MI;
extern MethodInfo m329_MI;
extern MethodInfo m4494_MI;
extern MethodInfo m4513_MI;
extern MethodInfo m7652_MI;
extern MethodInfo m11617_MI;
extern MethodInfo m7824_MI;
extern MethodInfo m9596_MI;
extern MethodInfo m7651_MI;
extern MethodInfo m9732_MI;
extern MethodInfo m9724_MI;
extern MethodInfo m9722_MI;
extern MethodInfo m399_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m12068_MI;
extern MethodInfo m9770_MI;
extern MethodInfo m9726_MI;
extern MethodInfo m5944_MI;
extern MethodInfo m9719_MI;
extern MethodInfo m7840_MI;
extern MethodInfo m9720_MI;
extern MethodInfo m9734_MI;
extern MethodInfo m9576_MI;


extern MethodInfo m9714_MI;
extern "C" void m9714 (t1826 * __this, MethodInfo* method)
{
	{
		m9755(__this, &m9755_MI);
		return;
	}
}
extern "C" void m9715 (t1826 * __this, int32_t p0, MethodInfo* method)
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
		t1825 * L_3 = &(__this->f2);
		int32_t L_4 = p0;
		m9708(NULL, __this, L_3, L_4, &m9708_MI);
		int32_t L_5 = (__this->f3);
		int32_t L_6 = p0;
		__this->f3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m9716_MI;
extern "C" int32_t m9716 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, 1, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		int32_t L_1 = (L_0->f4);
		return L_1;
	}
}
extern MethodInfo m9717_MI;
extern "C" bool m9717 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, 2, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f2);
		return ((((int32_t)((((t9*)(t835 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9718_MI;
extern "C" bool m9718 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, 4, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f3);
		return ((((int32_t)((((t9*)(t835 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t126 * m9719 (t1826 * __this, MethodInfo* method)
{
	t934* V_0 = {0};
	{
		m9715(__this, 6, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t1825 * L_2 = &(__this->f2);
		t835 * L_3 = (L_2->f2);
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, L_3);
		return L_4;
	}

IL_0025:
	{
		t1825 * L_5 = &(__this->f2);
		t835 * L_6 = (L_5->f3);
		t934* L_7 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_6);
		V_0 = L_7;
		t934* L_8 = V_0;
		t934* L_9 = V_0;
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1));
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
extern "C" t126 * m9720 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, 8, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m9721_MI;
extern "C" t126 * m9721 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, ((int32_t)16), &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern "C" t2* m9722 (t1826 * __this, MethodInfo* method)
{
	{
		m9715(__this, ((int32_t)32), &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t2* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m9723_MI;
extern TypeInfo* t1576_TI_var;
extern "C" t1576* m9723 (t1826 * __this, bool p0, MethodInfo* method)
{
	static bool m9723_init;
	if (!m9723_init)
	{
		t1576_TI_var = il2cpp_codegen_class_from_type(&t1576_0_0_0);
		m9723_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1576* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		m9715(__this, 6, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f3);
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
		t1825 * L_3 = &(__this->f2);
		t835 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_4);
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
		t1825 * L_6 = &(__this->f2);
		t835 * L_7 = (L_6->f2);
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
		t1825 * L_9 = &(__this->f2);
		t835 * L_10 = (L_9->f2);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_10);
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
		V_2 = ((t1576*)SZArrayNew(t1576_TI_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		t1576* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		t1825 * L_18 = &(__this->f2);
		t835 * L_19 = (L_18->f3);
		ArrayElementTypeCheck (L_15, L_19);
		*((t835 **)(t835 **)SZArrayLdElema(L_15, L_17)) = (t835 *)L_19;
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
		t1576* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		t1825 * L_24 = &(__this->f2);
		t835 * L_25 = (L_24->f2);
		ArrayElementTypeCheck (L_21, L_25);
		*((t835 **)(t835 **)SZArrayLdElema(L_21, L_23)) = (t835 *)L_25;
	}

IL_0088:
	{
		t1576* L_26 = V_2;
		return L_26;
	}
}
extern "C" t835 * m9724 (t1826 * __this, bool p0, MethodInfo* method)
{
	{
		m9715(__this, 2, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f2);
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
		t1825 * L_3 = &(__this->f2);
		t835 * L_4 = (L_3->f2);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1825 * L_6 = &(__this->f2);
		t835 * L_7 = (L_6->f2);
		return L_7;
	}

IL_0035:
	{
		return (t835 *)NULL;
	}
}
extern MethodInfo m9725_MI;
extern TypeInfo* t934_TI_var;
extern "C" t934* m9725 (t1826 * __this, MethodInfo* method)
{
	static bool m9725_init;
	if (!m9725_init)
	{
		t934_TI_var = il2cpp_codegen_class_from_type(&t934_0_0_0);
		m9725_init = true;
	}
	t934* V_0 = {0};
	t934* V_1 = {0};
	int32_t V_2 = 0;
	t930 * V_3 = {0};
	{
		m9715(__this, 6, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		t1825 * L_2 = &(__this->f2);
		t835 * L_3 = (L_2->f2);
		t934* L_4 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		t1825 * L_5 = &(__this->f2);
		t835 * L_6 = (L_5->f3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		t1825 * L_7 = &(__this->f2);
		t835 * L_8 = (L_7->f3);
		t934* L_9 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_8);
		V_1 = L_9;
		t934* L_10 = V_1;
		V_0 = ((t934*)SZArrayNew(t934_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)1))));
		t934* L_11 = V_1;
		t934* L_12 = V_0;
		t934* L_13 = V_0;
		m5982(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5982_MI);
		goto IL_0063;
	}

IL_005c:
	{
		return ((t934*)SZArrayNew(t934_TI_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		t934* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_3 = (*(t930 **)(t930 **)SZArrayLdElema(L_14, L_16));
		t934* L_17 = V_0;
		int32_t L_18 = V_2;
		t930 * L_19 = V_3;
		t930 * L_20 = (t930 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t930_TI));
		m9740(L_20, L_19, __this, &m9740_MI);
		ArrayElementTypeCheck (L_17, L_20);
		*((t930 **)(t930 **)SZArrayLdElema(L_17, L_18)) = (t930 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		t934* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		t934* L_24 = V_0;
		return L_24;
	}
}
extern "C" t835 * m9726 (t1826 * __this, bool p0, MethodInfo* method)
{
	{
		m9715(__this, 4, &m9715_MI);
		t1825 * L_0 = &(__this->f2);
		t835 * L_1 = (L_0->f3);
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
		t1825 * L_3 = &(__this->f2);
		t835 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4432_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1825 * L_6 = &(__this->f2);
		t835 * L_7 = (L_6->f3);
		return L_7;
	}

IL_0035:
	{
		return (t835 *)NULL;
	}
}
extern MethodInfo m9727_MI;
extern "C" bool m9727 (t1826 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_1 = m11646(NULL, __this, L_0, 0, &m11646_MI);
		return L_1;
	}
}
extern MethodInfo m9728_MI;
extern "C" t158* m9728 (t1826 * __this, bool p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_0 = m11645(NULL, __this, 0, &m11645_MI);
		return L_0;
	}
}
extern MethodInfo m9729_MI;
extern "C" t158* m9729 (t1826 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_1 = m11644(NULL, __this, L_0, 0, &m11644_MI);
		return L_1;
	}
}
extern MethodInfo m9730_MI;
extern TypeInfo* t152_TI_var;
extern "C" t1828 * m9730 (t9 * __this , t835 * p0, MethodInfo* method)
{
	static bool m9730_init;
	if (!m9730_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9730_init = true;
	}
	t152* V_0 = {0};
	t126 * V_1 = {0};
	t9 * V_2 = {0};
	t835 * V_3 = {0};
	t126 * V_4 = {0};
	t2* V_5 = {0};
	{
		t835 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4431_MI, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		t152* L_2 = ((t152*)SZArrayNew(t152_TI_var, 1));
		t835 * L_3 = p0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_2, 0)) = (t126 *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2183_0_0_0), &m329_MI);
		V_4 = L_5;
		V_5 = (t2*) &_stringLiteral2056;
		goto IL_0059;
	}

IL_002d:
	{
		t152* L_6 = ((t152*)SZArrayNew(t152_TI_var, 2));
		t835 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_7);
		ArrayElementTypeCheck (L_6, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_6, 0)) = (t126 *)L_8;
		t152* L_9 = L_6;
		t835 * L_10 = p0;
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9595_MI, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 1)) = (t126 *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2184_0_0_0), &m329_MI);
		V_4 = L_12;
		V_5 = (t2*) &_stringLiteral2057;
	}

IL_0059:
	{
		t126 * L_13 = V_4;
		t152* L_14 = V_0;
		t126 * L_15 = (t126 *)VirtFuncInvoker1< t126 *, t152* >::Invoke(&m4513_MI, L_13, L_14);
		V_1 = L_15;
		t126 * L_16 = V_1;
		t835 * L_17 = p0;
		t297 * L_18 = m7652(NULL, L_16, L_17, 0, &m7652_MI);
		V_2 = L_18;
		t9 * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		t2129 * L_20 = (t2129 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2129_TI));
		m11617(L_20, &m11617_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_21 = m329(NULL, LoadTypeToken(&t1826_0_0_0), &m329_MI);
		t2* L_22 = V_5;
		t835 * L_23 = (t835 *)VirtFuncInvoker2< t835 *, t2*, int32_t >::Invoke(&m7824_MI, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		t835 * L_24 = V_3;
		t152* L_25 = V_0;
		t835 * L_26 = (t835 *)VirtFuncInvoker1< t835 *, t152* >::Invoke(&m9596_MI, L_24, L_25);
		V_3 = L_26;
		t126 * L_27 = m329(NULL, LoadTypeToken(&t1828_0_0_0), &m329_MI);
		t9 * L_28 = V_2;
		t835 * L_29 = V_3;
		t297 * L_30 = m7651(NULL, L_27, L_28, L_29, 1, &m7651_MI);
		return ((t1828 *)Castclass(L_30, InitializedTypeInfo(&t1828_TI)));
	}
}
extern MethodInfo m9731_MI;
extern "C" t9 * m9731 (t1826 * __this, t9 * p0, t158* p1, MethodInfo* method)
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
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m9732_MI, __this, L_2, 0, (t939 *)NULL, L_3, (t907 *)NULL);
		return L_4;
	}
}
extern "C" t9 * m9732 (t1826 * __this, t9 * p0, int32_t p1, t939 * p2, t158* p3, t907 * p4, MethodInfo* method)
{
	t9 * V_0 = {0};
	t835 * V_1 = {0};
	t2039 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		t835 * L_0 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m9724_MI, __this, 1);
		V_1 = L_0;
		t835 * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9722_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2058, L_2, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, L_3, &m2949_MI);
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
			t835 * L_7 = V_1;
			t9 * L_8 = p0;
			int32_t L_9 = p1;
			t939 * L_10 = p2;
			t907 * L_11 = p4;
			t9 * L_12 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_7, L_8, L_9, L_10, (t158*)(t158*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			t835 * L_13 = V_1;
			t9 * L_14 = p0;
			int32_t L_15 = p1;
			t939 * L_16 = p2;
			t158* L_17 = p3;
			t907 * L_18 = p4;
			t9 * L_19 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_13, L_14, L_15, L_16, L_17, L_18);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2039_TI, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((t2039 *)__exception_local);
		t2039 * L_20 = V_2;
		t1831 * L_21 = (t1831 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1831_TI));
		m9770(L_21, L_20, &m9770_MI);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		t9 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9733_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9733 (t1826 * __this, t9 * p0, t9 * p1, int32_t p2, t939 * p3, t158* p4, t907 * p5, MethodInfo* method)
{
	static bool m9733_init;
	if (!m9733_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9733_init = true;
	}
	t835 * V_0 = {0};
	t158* V_1 = {0};
	int32_t V_2 = 0;
	{
		t835 * L_0 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m9726_MI, __this, 1);
		V_0 = L_0;
		t835 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9722_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2059, L_2, (t2*) &_stringLiteral136, &m399_MI);
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, L_3, &m2949_MI);
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5944_MI, L_11, (t121 *)(t121 *)L_12, 0);
		t158* L_13 = V_1;
		int32_t L_14 = V_2;
		t9 * L_15 = p1;
		ArrayElementTypeCheck (L_13, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, L_14)) = (t9 *)L_15;
	}

IL_0058:
	{
		t835 * L_16 = V_0;
		t9 * L_17 = p0;
		int32_t L_18 = p2;
		t939 * L_19 = p3;
		t158* L_20 = V_1;
		t907 * L_21 = p5;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12068_MI, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
extern "C" t2* m9734 (t1826 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9719_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_0);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9722_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_1, (t2*) &_stringLiteral163, L_2, &m399_MI);
		return L_3;
	}
}
extern MethodInfo m9735_MI;
extern "C" t152* m9735 (t1826 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9709(NULL, __this, 1, &m9709_MI);
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
extern MethodInfo m9736_MI;
extern "C" t152* m9736 (t1826 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9709(NULL, __this, 0, &m9709_MI);
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
extern MethodInfo m9737_MI;
extern "C" void m9737 (t1826 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9722_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9720_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9734_MI, __this);
		m9576(NULL, L_0, L_1, L_2, L_3, ((int32_t)16), &m9576_MI);
		return;
	}
}
#include "t1797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1797_TI;
#include "t1797MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1796.h"
#include "t309.h"
#include "t1770.h"
#include "t1586.h"
#include "t1589.h"
#include "t1580.h"
#include "t1584.h"
extern TypeInfo t1796_TI;
extern TypeInfo t309_TI;
extern TypeInfo t1586_TI;
extern TypeInfo t1589_TI;
extern TypeInfo t1580_TI;
#include "t9MD.h"
#include "t1796MD.h"
#include "t1586MD.h"
#include "t1589MD.h"
#include "t1580MD.h"
#include "t1770MD.h"
extern Il2CppType t122_0_0_0;
extern MethodInfo m9742_MI;
extern MethodInfo m336_MI;
extern MethodInfo m9399_MI;
extern MethodInfo m9400_MI;
extern MethodInfo m9398_MI;
extern MethodInfo m9748_MI;
extern MethodInfo m9749_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m7791_MI;
extern MethodInfo m4534_MI;
extern MethodInfo m4495_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m4451_MI;
extern MethodInfo m9746_MI;
extern MethodInfo m511_MI;
extern MethodInfo m610_MI;
extern MethodInfo m9743_MI;
extern MethodInfo m9745_MI;
extern MethodInfo m9744_MI;
extern MethodInfo m7871_MI;
extern MethodInfo m7874_MI;
extern MethodInfo m7867_MI;
extern MethodInfo m9485_MI;


extern MethodInfo m9738_MI;
extern "C" void m9738 (t930 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9739_MI;
extern "C" void m9739 (t930 * __this, t1796 * p0, t126 * p1, t567 * p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t126 * L_0 = p1;
		__this->f0 = L_0;
		t567 * L_1 = p2;
		__this->f2 = L_1;
		t1796 * L_2 = p0;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t1796 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9399_MI, L_3);
		__this->f3 = L_4;
		t1796 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9400_MI, L_5);
		__this->f4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		t1796 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9398_MI, L_7);
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
extern "C" void m9740 (t930 * __this, t930 * p0, t567 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t930 * L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, L_0);
		__this->f0 = L_1;
		t567 * L_2 = p1;
		__this->f2 = L_2;
		t930 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9748_MI, L_3);
		__this->f3 = L_4;
		t930 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9749_MI, L_5);
		__this->f4 = L_6;
		t930 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, L_7);
		__this->f5 = L_8;
		return;
	}
}
extern MethodInfo m9741_MI;
extern "C" t2* m9741 (t930 * __this, MethodInfo* method)
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
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		t126 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4534_MI, L_5);
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
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4495_MI, L_9);
		t567 * L_11 = (__this->f2);
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_11);
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4495_MI, L_12);
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
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		t126 * L_18 = (__this->f0);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = m9746(__this, &m9746_MI);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		t2* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		t9 * L_23 = Box(InitializedTypeInfo(&t309_TI), &L_22);
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
extern "C" t126 * m4466 (t930 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9742 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" bool m9743 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9744 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9745 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9746 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9742_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9747_MI;
extern "C" t567 * m9747 (t930 * __this, MethodInfo* method)
{
	{
		t567 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t2* m9748 (t930 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m9749 (t930 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9750_MI;
extern "C" t158* m9750 (t930 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		t158* L_2 = m11644(NULL, __this, L_0, L_1, &m11644_MI);
		return L_2;
	}
}
extern MethodInfo m9751_MI;
extern "C" bool m9751 (t930 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2135_TI));
		bool L_2 = m11646(NULL, __this, L_0, L_1, &m11646_MI);
		return L_2;
	}
}
extern MethodInfo m9752_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9752 (t930 * __this, MethodInfo* method)
{
	static bool m9752_init;
	if (!m9752_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9752_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = m9743(__this, &m9743_MI);
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
		bool L_2 = m9745(__this, &m9745_MI);
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
		bool L_4 = m9744(__this, &m9744_MI);
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
		t1770 * L_6 = (__this->f6);
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
		bool L_10 = m9743(__this, &m9743_MI);
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
		t1586 * L_14 = (t1586 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1586_TI));
		m7871(L_14, &m7871_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_0054:
	{
		bool L_15 = m9744(__this, &m9744_MI);
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
		t1589 * L_19 = (t1589 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1589_TI));
		m7874(L_19, &m7874_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, L_18)) = (t9 *)L_19;
	}

IL_0068:
	{
		bool L_20 = m9745(__this, &m9745_MI);
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
		t1580 * L_24 = (t1580 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1580_TI));
		m7867(L_24, &m7867_MI);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, L_23)) = (t9 *)L_24;
	}

IL_007c:
	{
		t1770 * L_25 = (__this->f6);
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
		t1770 * L_29 = (__this->f6);
		t1584 * L_30 = m9485(L_29, &m9485_MI);
		ArrayElementTypeCheck (L_26, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, L_28)) = (t9 *)L_30;
	}

IL_0096:
	{
		t158* L_31 = V_1;
		return L_31;
	}
}
#include "t940.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t940_TI;
#include "t940MD.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void t940_marshal(const t940& unmarshaled, t940_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
}
void t940_marshal_back(const t940_marshaled& marshaled, t940& unmarshaled)
{
	unmarshaled.f0 = (t1212*)il2cpp_codegen_marshal_array_result(&t124_TI, marshaled.f0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void t940_marshal_cleanup(t940_marshaled& marshaled)
{
}
#include "t1829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1829_TI;
#include "t1829MD.h"

#include "t169.h"
extern TypeInfo t169_TI;
#include "t169MD.h"
extern MethodInfo m5776_MI;


extern MethodInfo m9753_MI;
extern "C" void m9753 (t1829 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9754_MI;
extern "C" void m9754 (t1829 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral2060, &m5776_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1810.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1810_TI;
#include "t1810MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1799_TI;
#include "t1799MD.h"



#include "t844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t844_TI;

extern MethodInfo m7853_MI;
extern MethodInfo m4469_MI;
extern MethodInfo m12069_MI;
extern MethodInfo m12070_MI;


extern "C" void m9755 (t844 * __this, MethodInfo* method)
{
	{
		m7853(__this, &m7853_MI);
		return;
	}
}
extern MethodInfo m9756_MI;
extern "C" int32_t m9756 (t844 * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
extern MethodInfo m9757_MI;
extern "C" t835 * m9757 (t844 * __this, MethodInfo* method)
{
	{
		t835 * L_0 = (t835 *)VirtFuncInvoker1< t835 *, bool >::Invoke(&m4469_MI, __this, 0);
		return L_0;
	}
}
extern MethodInfo m9758_MI;
extern "C" t9 * m9758 (t844 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12069_MI, __this, L_0, 0, (t939 *)NULL, L_1, (t907 *)NULL);
		return L_2;
	}
}
extern MethodInfo m9759_MI;
extern "C" void m9759 (t844 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t158* L_2 = p2;
		VirtActionInvoker6< t9 *, t9 *, int32_t, t939 *, t158*, t907 * >::Invoke(&m12070_MI, __this, L_0, L_1, 0, (t939 *)NULL, L_2, (t907 *)NULL);
		return;
	}
}
extern MethodInfo m9760_MI;
extern "C" t152* m9760 (t844 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9761_MI;
extern "C" t152* m9761 (t844 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
#include "t1749.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1749_TI;
#include "t1749MD.h"



#include "t1808.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1808_TI;
#include "t1808MD.h"

#include "t582.h"
#include "t1223.h"
#include "t1664.h"
extern TypeInfo t737_TI;
extern TypeInfo t582_TI;
extern TypeInfo t1664_TI;
#include "t1106MD.h"
#include "t1635MD.h"
#include "t1664MD.h"
extern Il2CppType t737_0_0_0;
extern MethodInfo m5773_MI;
extern MethodInfo m5782_MI;
extern MethodInfo m5775_MI;
extern MethodInfo m5770_MI;
extern MethodInfo m5785_MI;
extern MethodInfo m5771_MI;
extern MethodInfo m8097_MI;
extern MethodInfo m9765_MI;
extern MethodInfo m8342_MI;
extern MethodInfo m8341_MI;


extern MethodInfo m9762_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m9762 (t1808 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m9762_init;
	if (!m9762_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m9762_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		t9 * L_2 = m5773(L_0, (t2*) &_stringLiteral2061, L_1, &m5773_MI);
		__this->f0 = ((t737*)Castclass(L_2, t737_TI_var));
		t1106 * L_3 = p0;
		t2* L_4 = m5782(L_3, (t2*) &_stringLiteral2062, &m5782_MI);
		__this->f1 = L_4;
		t1106 * L_5 = p0;
		bool L_6 = m5775(L_5, (t2*) &_stringLiteral2063, &m5775_MI);
		__this->f2 = L_6;
		t1106 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		t9 * L_9 = m5773(L_7, (t2*) &_stringLiteral2064, L_8, &m5773_MI);
		__this->f3 = ((t737*)Castclass(L_9, t737_TI_var));
		return;
	}
}
extern MethodInfo m9763_MI;
extern "C" void m9763 (t1808 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t737* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		m5770(L_0, (t2*) &_stringLiteral2061, (t9 *)(t9 *)L_1, L_2, &m5770_MI);
		t1106 * L_3 = p0;
		t2* L_4 = (__this->f1);
		m5785(L_3, (t2*) &_stringLiteral2062, L_4, &m5785_MI);
		t1106 * L_5 = p0;
		bool L_6 = (__this->f2);
		m5771(L_5, (t2*) &_stringLiteral2063, L_6, &m5771_MI);
		t1106 * L_7 = p0;
		t737* L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t737_0_0_0), &m329_MI);
		m5770(L_7, (t2*) &_stringLiteral2064, (t9 *)(t9 *)L_8, L_9, &m5770_MI);
		return;
	}
}
extern MethodInfo m9764_MI;
extern "C" void m9764 (t1808 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t1223 * m9765 (t1808 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1223 * L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1223 * L_1 = (__this->f4);
		return L_1;
	}

IL_000f:
	{
		t737* L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t737* L_3 = (__this->f3);
		t1223 * L_4 = m8097(NULL, L_3, &m8097_MI);
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
		__this->f3 = (t737*)NULL;
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		t1223 * L_5 = (__this->f4);
		return L_5;
	}
}
extern MethodInfo m9766_MI;
extern "C" t1664 * m9766 (t1808 * __this, MethodInfo* method)
{
	t1223 * V_0 = {0};
	{
		t1223 * L_0 = m9765(__this, &m9765_MI);
		V_0 = L_0;
		t1223 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t1223 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1664_TI));
		t1664 * L_3 = (t1664 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1664_TI));
		m8342(L_3, L_2, &m8342_MI);
		return L_3;
	}

IL_0011:
	{
		t737* L_4 = (__this->f0);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t737* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1664_TI));
		t1664 * L_6 = (t1664 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1664_TI));
		m8341(L_6, L_5, &m8341_MI);
		return L_6;
	}

IL_0025:
	{
		return (t1664 *)NULL;
	}
}
#include "t1830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1830_TI;
#include "t1830MD.h"

#include "t1597MD.h"
#include "t138MD.h"
extern MethodInfo m7888_MI;
extern MethodInfo m379_MI;
extern MethodInfo m7070_MI;


extern MethodInfo m9767_MI;
extern "C" void m9767 (t1830 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2065, &m7888_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9768_MI;
extern "C" void m9768 (t1830 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9769_MI;
extern "C" void m9769 (t1830 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4500_MI;


extern "C" void m9770 (t1831 * __this, t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m4500(__this, (t2*) &_stringLiteral2066, L_0, &m4500_MI);
		return;
	}
}
extern MethodInfo m9771_MI;
extern "C" void m9771 (t1831 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4500(__this, L_0, L_1, &m4500_MI);
		return;
	}
}
extern MethodInfo m9772_MI;
extern "C" void m9772 (t1831 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
#include "t1832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1832_TI;
#include "t1832MD.h"



extern MethodInfo m9773_MI;
extern "C" void m9773 (t1832 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2067, &m7888_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9774_MI;
extern "C" void m9774 (t1832 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9775_MI;
extern "C" void m9775 (t1832 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m7070(__this, L_0, L_1, &m7070_MI);
		return;
	}
}
#include "t1577.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1577_TI;
#include "t1577MD.h"



#include "t1833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1833_TI;
#include "t1833MD.h"

#include "t1351.h"
#include "t1574.h"
#include "t833.h"
#include "t1579.h"
#include "t1575.h"
#include "t837.h"
extern TypeInfo t1351_TI;
extern TypeInfo t1574_TI;
extern TypeInfo t127_TI;
extern TypeInfo t833_TI;
extern TypeInfo t1579_TI;
extern TypeInfo t941_TI;
extern TypeInfo t932_TI;
extern TypeInfo t1575_TI;
extern TypeInfo t837_TI;
extern TypeInfo t936_TI;
extern TypeInfo t935_TI;
extern TypeInfo t221_TI;
extern MethodInfo m5813_MI;
extern MethodInfo m4531_MI;
extern MethodInfo m4472_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m7806_MI;
extern MethodInfo m12006_MI;
extern MethodInfo m7784_MI;
extern MethodInfo m7789_MI;
extern MethodInfo m7839_MI;
extern MethodInfo m12023_MI;
extern MethodInfo m12056_MI;
extern MethodInfo m4473_MI;
extern MethodInfo m12057_MI;
extern MethodInfo m12058_MI;
extern MethodInfo m4468_MI;
extern MethodInfo m12059_MI;
extern MethodInfo m7827_MI;
extern MethodInfo m12060_MI;
extern MethodInfo m4467_MI;
extern MethodInfo m7833_MI;
extern MethodInfo m4480_MI;
extern MethodInfo m4426_MI;
extern MethodInfo m7793_MI;
extern MethodInfo m12000_MI;
extern MethodInfo m7800_MI;
extern MethodInfo m7803_MI;


extern MethodInfo m9776_MI;
extern "C" void m9776 (t1833 * __this, MethodInfo* method)
{
	{
		m7784(__this, &m7784_MI);
		return;
	}
}
extern MethodInfo m9777_MI;
extern "C" t1351 * m9777 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1351 * L_1 = (t1351 *)VirtFuncInvoker0< t1351 * >::Invoke(&m5813_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9778_MI;
extern "C" t2* m9778 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9779_MI;
extern "C" t126 * m9779 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9780_MI;
extern "C" t2* m9780 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9781_MI;
extern "C" t1574 * m9781 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1574 * L_1 = (t1574 *)VirtFuncInvoker0< t1574 * >::Invoke(&m12024_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9782_MI;
extern "C" t2* m9782 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9783_MI;
extern "C" t2* m9783 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4495_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9784_MI;
extern "C" t127  m9784 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7806_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9785_MI;
extern "C" t126 * m9785 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12006_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9786_MI;
extern "C" int32_t m9786 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7789_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9787_MI;
extern "C" t833 * m9787 (t1833 * __this, int32_t p0, t939 * p1, int32_t p2, t152* p3, t941* p4, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t939 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t941* L_5 = p4;
		t833 * L_6 = (t833 *)VirtFuncInvoker5< t833 *, int32_t, t939 *, int32_t, t152*, t941* >::Invoke(&m7839_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9788_MI;
extern "C" t932* m9788 (t1833 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t932* L_2 = (t932*)VirtFuncInvoker1< t932*, int32_t >::Invoke(&m12023_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9789_MI;
extern "C" t158* m9789 (t1833 * __this, bool p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12056_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9790_MI;
extern "C" t158* m9790 (t1833 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4473_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9791_MI;
extern "C" t126 * m9791 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m12007_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9792_MI;
extern "C" t1575 * m9792 (t1833 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1575 * L_3 = (t1575 *)VirtFuncInvoker2< t1575 *, t2*, int32_t >::Invoke(&m12057_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9793_MI;
extern "C" t837 * m9793 (t1833 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t837 * L_3 = (t837 *)VirtFuncInvoker2< t837 *, t2*, int32_t >::Invoke(&m12058_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9794_MI;
extern "C" t936* m9794 (t1833 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t936* L_2 = (t936*)VirtFuncInvoker1< t936*, int32_t >::Invoke(&m4468_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9795_MI;
extern "C" t152* m9795 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12059_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9796_MI;
extern "C" t835 * m9796 (t1833 * __this, t2* p0, int32_t p1, t939 * p2, int32_t p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t939 * L_3 = p2;
		int32_t L_4 = p3;
		t152* L_5 = p4;
		t941* L_6 = p5;
		t835 * L_7 = m7827(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7827_MI);
		return L_7;
	}
}
extern MethodInfo m9797_MI;
extern "C" t1576* m9797 (t1833 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1576* L_2 = (t1576*)VirtFuncInvoker1< t1576*, int32_t >::Invoke(&m12060_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9798_MI;
extern "C" t935* m9798 (t1833 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t935* L_2 = (t935*)VirtFuncInvoker1< t935*, int32_t >::Invoke(&m4467_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9799_MI;
extern "C" t844 * m9799 (t1833 * __this, t2* p0, int32_t p1, t939 * p2, t126 * p3, t152* p4, t941* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t939 * L_3 = p2;
		t126 * L_4 = p3;
		t152* L_5 = p4;
		t941* L_6 = p5;
		t844 * L_7 = m7833(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7833_MI);
		return L_7;
	}
}
extern MethodInfo m9800_MI;
extern "C" bool m9800 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7791_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9801_MI;
extern "C" t9 * m9801 (t1833 * __this, t2* p0, int32_t p1, t939 * p2, t9 * p3, t158* p4, t941* p5, t907 * p6, t221* p7, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
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
extern MethodInfo m9802_MI;
extern "C" bool m9802 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4426_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9803_MI;
extern "C" bool m9803 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9804_MI;
extern "C" bool m9804 (t1833 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m12000_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9805_MI;
extern "C" bool m9805 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7800_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9806_MI;
extern "C" bool m9806 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4534_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9807_MI;
extern "C" bool m9807 (t1833 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7803_MI, L_0);
		return L_1;
	}
}
#include "t1159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1159_TI;
#include "t1159MD.h"

#include "t132.h"
extern TypeInfo t132_TI;
#include "t732MD.h"
#include "t132MD.h"
extern MethodInfo m4306_MI;
extern MethodInfo m339_MI;


extern MethodInfo m4844_MI;
extern "C" void m4844 (t1159 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2068, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1152.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1152_TI;
#include "t1152MD.h"

#include "t1202.h"
extern TypeInfo t1202_TI;
#include "t1202MD.h"
extern MethodInfo m11922_MI;


extern MethodInfo m4837_MI;
extern "C" void m4837 (t1152 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		t1202 * L_1 = (t1202 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1202_TI));
		m11922(L_1, L_0, &m11922_MI);
		__this->f0 = L_1;
		return;
	}
}
#include "t1834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1834_TI;
#include "t1834MD.h"



#include "t1155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1155_TI;
#include "t1155MD.h"



extern MethodInfo m4840_MI;
extern "C" void m4840 (t1155 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1835_TI;
#include "t1835MD.h"

#include "t1836.h"


extern MethodInfo m9808_MI;
extern "C" void m9808 (t1835 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1837.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1837_TI;
#include "t1837MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1836_TI;
#include "t1836MD.h"



#include "t1838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1838_TI;
#include "t1838MD.h"



extern MethodInfo m9809_MI;
extern "C" void m9809 (t1838 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1839.h"
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



#include "t1841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1841_TI;
#include "t1841MD.h"

extern MethodInfo m646_MI;


extern MethodInfo m9810_MI;
extern "C" void m9810 (t1841 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9811_MI;
extern "C" void m9811 (t1841 * __this, MethodInfo* method)
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
#include "t1842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1842_TI;
#include "t1842MD.h"



extern MethodInfo m9812_MI;
extern "C" void m9812 (t1842 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1843_TI;
#include "t1843MD.h"



#include "t1582.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1582_TI;
#include "t1582MD.h"



#include "t1583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1583_TI;
#include "t1583MD.h"



#include "t1844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1844_TI;
#include "t1844MD.h"

#include "t1845.h"


extern MethodInfo m9813_MI;
extern "C" void m9813 (t1844 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1845_TI;
#include "t1845MD.h"



#include "t1846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1846_TI;
#include "t1846MD.h"



extern MethodInfo m9814_MI;
extern "C" void m9814 (t1846 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1847_TI;
#include "t1847MD.h"



#include "t1848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1848_TI;
#include "t1848MD.h"



extern MethodInfo m9815_MI;
extern "C" void m9815 (t1848 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1849.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1849_TI;
#include "t1849MD.h"

#include "t1347.h"
#include "t1850.h"
extern TypeInfo t1347_TI;
#include "t1347MD.h"
#include "t125MD.h"
extern MethodInfo m9817_MI;
extern MethodInfo m5755_MI;
extern MethodInfo m9821_MI;
extern MethodInfo m9822_MI;
extern MethodInfo m9816_MI;
extern MethodInfo m9823_MI;
extern MethodInfo m4270_MI;


extern "C" void m9816 (t1849 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		int32_t L_4 = m9822(NULL, L_2, 0, L_3, &m9822_MI);
		__this->f0 = L_4;
		return;
	}
}
extern "C" bool m9817 (t1849 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9818_MI;
extern "C" t9 * m9818 (t1849 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9817(__this, &m9817_MI);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7888(NULL, (t2*) &_stringLiteral2069, &m7888_MI);
		t1347 * L_2 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_2, L_1, &m5755_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->f0);
		t9 * L_4 = m9821(NULL, L_3, &m9821_MI);
		return L_4;
	}
}
extern MethodInfo m9819_MI;
extern "C" t1849  m9819 (t9 * __this , t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		t1849  L_2 = {0};
		m9816(&L_2, L_0, L_1, &m9816_MI);
		return L_2;
	}
}
extern MethodInfo m9820_MI;
extern "C" void m9820 (t1849 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		m9823(NULL, L_0, &m9823_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" t9 * m9821 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t9 * (*m9821_ftn) (int32_t);
	static m9821_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9821_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m9822 (t9 * __this , t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef int32_t (*m9822_ftn) (t9 *, int32_t, int32_t);
	static m9822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9822_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m9823 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m9823_ftn) (int32_t);
	static m9823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9823_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9824_MI;
extern "C" bool m9824 (t1849 * __this, t9 * p0, MethodInfo* method)
{
	t1849  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1849_TI))))
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
		V_0 = ((*(t1849 *)((t1849 *)UnBox (L_3, InitializedTypeInfo(&t1849_TI)))));
		int32_t L_4 = ((&V_0)->f0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m9825_MI;
extern "C" int32_t m9825 (t1849 * __this, MethodInfo* method)
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
extern TypeInfo t1850_TI;
#include "t1850MD.h"



#include "t1851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1851_TI;
#include "t1851MD.h"



extern MethodInfo m9826_MI;
extern "C" void m9826 (t1851 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1852_TI;
#include "t1852MD.h"

#include "t2123.h"
#include "t2124.h"
#include "t899MD.h"
#include "t2123MD.h"
extern MethodInfo m11565_MI;
extern MethodInfo m11816_MI;
extern MethodInfo m9828_MI;


extern MethodInfo m9827_MI;
extern "C" void m9827 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((t1852_SFs*)InitializedTypeInfo(&t1852_TI)->static_fields)->f0 = 2;
		t2123 * L_0 = m11565(NULL, &m11565_MI);
		int32_t L_1 = m11816(L_0, &m11816_MI);
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
		((t1852_SFs*)InitializedTypeInfo(&t1852_TI)->static_fields)->f1 = G_B3_0;
		return;
	}
}
extern "C" void m9828 (t9 * __this , t58 p0, int32_t p1, t121 * p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m9828_ftn) (t58, int32_t, t121 *, int32_t);
	static m9828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9828_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m9829_MI;
extern "C" void m9829 (t9 * __this , t58 p0, t737* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t737* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1852_TI));
		m9828(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9828_MI);
		return;
	}
}
extern MethodInfo m9830_MI;
extern "C" void m9830 (t9 * __this , t58 p0, t318* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t318* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1852_TI));
		m9828(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9828_MI);
		return;
	}
}
#include "t1853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1853_TI;
#include "t1853MD.h"

#include "t1375MD.h"
extern MethodInfo m5942_MI;
extern MethodInfo m4499_MI;
extern MethodInfo m11848_MI;


extern MethodInfo m9831_MI;
extern "C" void m9831 (t1853 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7888(NULL, (t2*) &_stringLiteral2070, &m7888_MI);
		m5942(__this, L_0, &m5942_MI);
		m4499(__this, ((int32_t)-2146233035), &m4499_MI);
		return;
	}
}
extern MethodInfo m9832_MI;
extern "C" void m9832 (t1853 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m11848(__this, L_0, L_1, &m11848_MI);
		return;
	}
}
#include "t1854.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1854_TI;
#include "t1854MD.h"



extern MethodInfo m9833_MI;
extern "C" void m9833 (t1854 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1602.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1602_TI;
#include "t1602MD.h"

#include "t1536.h"
extern TypeInfo t1536_TI;
#include "t1536MD.h"
#include "t2074MD.h"
#include "t1532MD.h"
extern MethodInfo m2550_MI;
extern MethodInfo m6953_MI;
extern MethodInfo m11058_MI;
extern MethodInfo m12071_MI;
extern MethodInfo m12072_MI;
extern MethodInfo m9840_MI;
extern MethodInfo m6937_MI;
extern MethodInfo m9835_MI;


extern MethodInfo m9834_MI;
extern "C" void m9834 (t1602 * __this, t58 p0, bool p1, MethodInfo* method)
{
	{
		m9810(__this, &m9810_MI);
		t58 L_0 = p0;
		__this->f1 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		__this->f2 = 1;
		return;
	}
}
extern "C" void m9835 (t1602 * __this, MethodInfo* method)
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
		t126 * L_1 = m2550(__this, &m2550_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, L_2, &m6953_MI);
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
		int32_t L_9 = m11058(NULL, L_6, L_7, L_8, &m11058_MI);
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
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12071_MI, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12072_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
		__this->f2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m9836_MI;
extern "C" void m9836 (t1602 * __this, bool* p0, MethodInfo* method)
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
		t126 * L_1 = m2550(__this, &m2550_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, L_2, &m6953_MI);
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
		t126 * L_7 = m2550(__this, &m2550_MI);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_7);
		t1536 * L_9 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_9, L_8, &m6953_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->f2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = m11058(NULL, L_10, L_11, L_12, &m11058_MI);
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
extern MethodInfo m9837_MI;
extern "C" t58 m9837 (t1602 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_1 = m2550(__this, &m2550_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, L_2, &m6953_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		t58 L_4 = (__this->f0);
		return L_4;
	}
}
extern MethodInfo m9838_MI;
extern "C" void m9838 (t1602 * __this, MethodInfo* method)
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
		t126 * L_1 = m2550(__this, &m2550_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_1);
		t1536 * L_3 = (t1536 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1536_TI));
		m6953(L_3, L_2, &m6953_MI);
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
		int32_t L_9 = m11058(NULL, L_6, L_7, L_8, &m11058_MI);
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
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12071_MI, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12072_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
extern MethodInfo m9839_MI;
extern "C" void m9839 (t1602 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9840_MI, __this, 1);
		m6937(NULL, __this, &m6937_MI);
		return;
	}
}
extern "C" void m9840 (t1602 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		m9835(__this, &m9835_MI);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
extern MethodInfo m9841_MI;
extern "C" void m9841 (t1602 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9842_MI;
extern "C" void m9842 (t1602 * __this, MethodInfo* method)
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
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12071_MI, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&m12072_MI, __this);
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
		m9811(__this, &m9811_MI);
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
#include "t1855.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1855_TI;
#include "t1855MD.h"



extern MethodInfo m9843_MI;
extern "C" void m9843 (t1855 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t1856.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1856_TI;
#include "t1856MD.h"



extern MethodInfo m9844_MI;
extern "C" void m9844 (t1856 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1585.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1585_TI;
#include "t1585MD.h"



#include "t1857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1857_TI;
#include "t1857MD.h"

#include "t1861.h"
#include "t1923.h"
#include "t1932.h"
#include "t1864.h"
#include "t1859.h"
#include "t1176.h"
#include "t1867.h"
#include "t1860.h"
#include "t1862.h"
#include "t1869.h"
extern TypeInfo t1861_TI;
extern TypeInfo t2185_TI;
extern TypeInfo t1932_TI;
extern TypeInfo t1864_TI;
extern TypeInfo t1931_TI;
extern TypeInfo t1933_TI;
extern TypeInfo t1859_TI;
extern TypeInfo t1860_TI;
extern TypeInfo t1858_TI;
extern TypeInfo t1862_TI;
extern TypeInfo t1176_TI;
extern TypeInfo t1004_TI;
extern TypeInfo t1869_TI;
extern TypeInfo t1878_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1867_TI;
extern TypeInfo t1866_TI;
extern TypeInfo t137_TI;
#include "t1861MD.h"
#include "t1932MD.h"
#include "t1864MD.h"
#include "t1409MD.h"
#include "t1931MD.h"
#include "t1933MD.h"
#include "t1859MD.h"
#include "t1860MD.h"
#include "t1862MD.h"
#include "t1176MD.h"
#include "t1869MD.h"
#include "t1878MD.h"
extern MethodInfo m9850_MI;
extern MethodInfo m10130_MI;
extern MethodInfo m9853_MI;
extern MethodInfo m6119_MI;
extern MethodInfo m10128_MI;
extern MethodInfo m10148_MI;
extern MethodInfo m7795_MI;
extern MethodInfo m10149_MI;
extern MethodInfo m9943_MI;
extern MethodInfo m9845_MI;
extern MethodInfo m9849_MI;
extern MethodInfo m9950_MI;
extern MethodInfo m9946_MI;
extern MethodInfo m9851_MI;
extern MethodInfo m5768_MI;
extern MethodInfo m5890_MI;
extern MethodInfo m11081_MI;
extern MethodInfo m5769_MI;
extern MethodInfo m361_MI;
extern MethodInfo m12073_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5779_MI;
extern MethodInfo m8486_MI;
extern MethodInfo m9952_MI;
extern MethodInfo m12074_MI;
extern MethodInfo m2777_MI;


extern "C" t9 * m9845 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = ((t1857_SFs*)InitializedTypeInfo(&t1857_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1861 * L_1 = (t1861 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1861_TI));
		m9850(L_1, &m9850_MI);
		((t1857_SFs*)InitializedTypeInfo(&t1857_TI)->static_fields)->f0 = L_1;
	}

IL_0011:
	{
		t9 * L_2 = ((t1857_SFs*)InitializedTypeInfo(&t1857_TI)->static_fields)->f0;
		return L_2;
	}
}
extern MethodInfo m9846_MI;
extern "C" t9 * m9846 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t9 * V_1 = {0};
	t158* V_2 = {0};
	int32_t V_3 = 0;
	t1923 * V_4 = {0};
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
		if (((t9 *)IsInst(L_4, InitializedTypeInfo(&t2185_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t1932 * L_5 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_5, (t2*) &_stringLiteral2071, &m10130_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		t9 * L_6 = V_1;
		if (!((t1864 *)IsInst(L_6, InitializedTypeInfo(&t1864_TI))))
		{
			goto IL_0033;
		}
	}
	{
		t9 * L_7 = V_1;
		t2* L_8 = m9853(((t1864 *)Castclass(L_7, InitializedTypeInfo(&t1864_TI))), &m9853_MI);
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
		t9 * L_16 = m6119(NULL, L_13, L_14, L_15, &m6119_MI);
		return L_16;
	}

IL_0049:
	{
		t126 * L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t1923 * L_18 = m10128(NULL, L_17, &m10128_MI);
		V_4 = L_18;
		t1923 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		t1923 * L_20 = V_4;
		t158* L_21 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t9 * L_22 = m10148(NULL, L_20, L_21, &m10148_MI);
		return L_22;
	}

IL_005e:
	{
		t126 * L_23 = p0;
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7795_MI, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_25 = p0;
		t158* L_26 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t9 * L_27 = m10149(NULL, L_25, L_26, &m10149_MI);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
extern MethodInfo m9847_MI;
extern "C" t1859 * m9847 (t9 * __this , t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	t1859 * V_0 = {0};
	t9 * V_1 = {0};
	t1176 * V_2 = {0};
	bool V_3 = false;
	t1867 * V_4 = {0};
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
		t1859 * L_1 = (t1859 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1859_TI));
		m9943(L_1, L_0, &m9943_MI);
		V_0 = L_1;
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7795_MI, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		t1859 * L_4 = V_0;
		t2* L_5 = p1;
		t9 * L_6 = m9845(NULL, &m9845_MI);
		t1860 * L_7 = (t1860 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1860_TI));
		m9849(L_7, L_5, L_6, &m9849_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m9950_MI, L_4, L_7);
		t1859 * L_8 = V_0;
		m9946(L_8, 0, &m9946_MI);
		t1859 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		t9 * L_10 = m9845(NULL, &m9845_MI);
		V_1 = L_10;
		t9 * L_11 = V_1;
		t1862 * L_12 = (t1862 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1862_TI));
		m9851(L_12, L_11, &m9851_MI);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_13 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_13, &m5768_MI);
		V_2 = L_13;
		t158* L_14 = p2;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		t1176 * L_15 = V_2;
		t158* L_16 = p2;
		VirtActionInvoker1< t9 * >::Invoke(&m5890_MI, L_15, (t9 *)(t9 *)L_16);
	}

IL_0046:
	{
		t2* L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t2* L_18 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_17, L_18, &m331_MI);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1867 * L_20 = m11081(NULL, &m11081_MI);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		t1176 * L_22 = V_2;
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_22);
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
			V_5 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t2185_TI)));
			t9 * L_26 = V_5;
			t1867 * L_27 = V_4;
			t1859 * L_28 = V_0;
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, t1867 *, t9 * >::Invoke(&m12073_MI, L_26, L_27, L_28);
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
		t158* L_36 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m12056_MI, L_35, 1);
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
		if (!((t9 *)IsInst(L_41, InitializedTypeInfo(&t2185_TI))))
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
		t1867 * L_44 = V_4;
		t1859 * L_45 = V_0;
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, t1867 *, t9 * >::Invoke(&m12073_MI, ((t9 *)Castclass(L_43, InitializedTypeInfo(&t2185_TI))), L_44, L_45);
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
		t1176 * L_47 = V_2;
		t9 * L_48 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_47, L_48);
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
		t1859 * L_53 = V_0;
		t1176 * L_54 = V_2;
		t158* L_55 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8486_MI, L_54);
		m9952(L_53, L_55, &m9952_MI);
		t1176 * L_56 = V_2;
		t9 * L_57 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_56);
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
			V_11 = ((t9 *)Castclass(L_59, InitializedTypeInfo(&t2185_TI)));
			t9 * L_60 = V_11;
			t1859 * L_61 = V_0;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12074_MI, L_60, L_61);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t2* L_68 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_69 = m2777(NULL, L_67, L_68, &m2777_MI);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		t2* L_70 = p1;
		t9 * L_71 = V_1;
		t1860 * L_72 = (t1860 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1860_TI));
		m9849(L_72, L_70, L_71, &m9849_MI);
		V_1 = L_72;
	}

IL_0159:
	{
		t1859 * L_73 = V_0;
		t9 * L_74 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m9950_MI, L_73, L_74);
		t1859 * L_75 = V_0;
		bool L_76 = V_3;
		m9946(L_75, L_76, &m9946_MI);
		t1859 * L_77 = V_0;
		return L_77;
	}
}
extern MethodInfo m9848_MI;
extern "C" t9 * m9848 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m9848_ftn) (t126 *);
	static m9848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9848_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9849 (t1860 * __this, t2* p0, t9 * p1, MethodInfo* method)
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



extern "C" void m9850 (t1861 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9851 (t1862 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1863.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1863_TI;
#include "t1863MD.h"

#include "t1215.h"
#include "t1882.h"
#include "t310.h"
#include "t156.h"
extern TypeInfo t1215_TI;
extern TypeInfo t1880_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t310_TI;
#include "t1215MD.h"
#include "t310MD.h"
extern MethodInfo m6079_MI;
extern MethodInfo m12075_MI;
extern MethodInfo m11873_MI;
extern MethodInfo m12076_MI;
extern MethodInfo m12077_MI;
extern MethodInfo m12078_MI;


extern MethodInfo m9852_MI;
extern "C" t9 * m9852 (t1863 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = m6079(__this, &m6079_MI);
		V_0 = ((t9 *)Castclass(L_0, InitializedTypeInfo(&t1880_TI)));
		t9 * L_1 = V_0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12075_MI, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		t9 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_4 = m11873(NULL, (30.0), &m11873_MI);
		InterfaceActionInvoker1< t310  >::Invoke(&m12076_MI, L_3, L_4);
		t9 * L_5 = V_0;
		t310  L_6 = m11873(NULL, (1.0), &m11873_MI);
		InterfaceActionInvoker1< t310  >::Invoke(&m12077_MI, L_5, L_6);
		t9 * L_7 = V_0;
		t310  L_8 = m11873(NULL, (10.0), &m11873_MI);
		InterfaceActionInvoker1< t310  >::Invoke(&m12078_MI, L_7, L_8);
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

extern MethodInfo m4273_MI;


extern "C" t2* m9853 (t1864 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9854_MI;
extern "C" bool m9854 (t1864 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (((t1864 *)IsInst(L_0, InitializedTypeInfo(&t1864_TI))))
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
		t2* L_2 = m9853(((t1864 *)Castclass(L_1, InitializedTypeInfo(&t1864_TI))), &m9853_MI);
		t2* L_3 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_2, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m9855_MI;
extern "C" int32_t m9855 (t1864 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9856_MI;
extern "C" void m9856 (t1864 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9857_MI;
extern "C" bool m9857 (t1864 * __this, t1867 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1868.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1868_TI;
#include "t1868MD.h"

extern MethodInfo m9863_MI;


extern MethodInfo m9858_MI;
extern "C" void m9858 (t1868 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t158* L_0 = m9863(NULL, &m9863_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9859_MI;
extern "C" t158* m9859 (t1868 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1870.h"
extern TypeInfo t1870_TI;
extern TypeInfo t2186_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t2187_TI;
extern TypeInfo t1005_TI;
#include "t1870MD.h"
#include "t306MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m9887_MI;
extern MethodInfo m9862_MI;
extern MethodInfo m12079_MI;
extern MethodInfo m590_MI;
extern MethodInfo m12080_MI;
extern MethodInfo m5918_MI;
extern MethodInfo m1115_MI;
extern MethodInfo m5766_MI;
extern MethodInfo m12081_MI;
extern MethodInfo m5764_MI;
extern MethodInfo m5898_MI;
extern MethodInfo m12005_MI;
extern MethodInfo m12082_MI;
extern MethodInfo m1117_MI;
extern MethodInfo m12083_MI;


extern MethodInfo m9860_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9860 (t9 * __this , MethodInfo* method)
{
	static bool m9860_init;
	if (!m9860_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9860_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0 = L_0;
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f1 = L_1;
		t1870 * L_2 = (t1870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1870_TI));
		m9887(L_2, &m9887_MI);
		((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f2 = L_2;
		((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f3 = (t2*) &_stringLiteral2072;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 2));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2073);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral2073;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2074);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral2074;
		((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f4 = (t9 *)L_4;
		return;
	}
}
extern MethodInfo m9861_MI;
extern "C" void m9861 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		m9862(NULL, L_0, 0, &m9862_MI);
		return;
	}
}
extern "C" void m9862 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2075, &m339_MI);
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
		V_1 = ((t9 *)IsInst(L_3, InitializedTypeInfo(&t2186_TI)));
		t9 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		t9 * L_5 = p0;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12079_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m590(NULL, (t2*) &_stringLiteral2076, L_6, &m590_MI);
		t1932 * L_8 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_8, L_7, &m10130_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		t9 * L_9 = V_1;
		InterfaceActionInvoker1< bool >::Invoke(&m12080_MI, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t1176 * L_10 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
		t9 * L_11 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_10);
		V_0 = L_11;
		t9 * L_12 = V_0;
		m1115(NULL, L_12, &m1115_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t1176 * L_13 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
			int32_t L_14 = V_3;
			t9 * L_15 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_13, L_14);
			V_4 = ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1871_TI)));
			t9 * L_16 = V_4;
			t2* L_17 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12079_MI, L_16);
			t9 * L_18 = p0;
			t2* L_19 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12079_MI, L_18);
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
			t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12079_MI, L_21);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
			bool L_24 = m2777(NULL, L_22, L_23, &m2777_MI);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			t9 * L_25 = V_4;
			t2* L_26 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12079_MI, L_25);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_27 = m399(NULL, (t2*) &_stringLiteral2077, L_26, (t2*) &_stringLiteral2078, &m399_MI);
			t1932 * L_28 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
			m10130(L_28, L_27, &m10130_MI);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			t9 * L_29 = V_4;
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12081_MI, L_29);
			t9 * L_31 = p0;
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12081_MI, L_31);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t1176 * L_37 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_37);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t1176 * L_40 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
			int32_t L_41 = V_2;
			t9 * L_42 = p0;
			VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5898_MI, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t1176 * L_43 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
			t9 * L_44 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_43, L_44);
		}

IL_00e7:
		{
			t9 * L_45 = p0;
			V_5 = ((t9 *)IsInst(L_45, InitializedTypeInfo(&t2187_TI)));
			t9 * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t9 * L_47 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f4;
			t9 * L_48 = p0;
			t126 * L_49 = m2550(L_48, &m2550_MI);
			t2* L_50 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7840_MI, L_49);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m12005_MI, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			t9 * L_52 = V_5;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12082_MI, L_52, NULL);
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
		m1117(NULL, L_53, &m1117_MI);
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
extern "C" t158* m9863 (t9 * __this , MethodInfo* method)
{
	t1176 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t1176 * L_1 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_1);
		V_1 = L_2;
		t9 * L_3 = V_1;
		m1115(NULL, L_3, &m1115_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
			t1176 * L_4 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f0;
			t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_4);
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
				V_4 = ((t9 *)IsInst(L_8, InitializedTypeInfo(&t2187_TI)));
				t9 * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				t9 * L_10 = V_4;
				t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12083_MI, L_10);
				V_5 = L_11;
				t9 * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				t1176 * L_13 = V_0;
				t9 * L_14 = V_5;
				VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_13, L_14);
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
		m1117(NULL, L_20, &m1117_MI);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0075:
	{
		t1176 * L_21 = V_0;
		t158* L_22 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8486_MI, L_21);
		return L_22;
	}
}
#include "t1872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1872_TI;
#include "t1872MD.h"

extern MethodInfo m10127_MI;


extern MethodInfo m9864_MI;
extern "C" void m9864 (t1872 * __this, int32_t p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = 0;
		t9 * L_1 = Box(InitializedTypeInfo(&t125_TI), &L_0);
		__this->f0 = L_1;
		int32_t L_2 = p0;
		__this->f1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t2* L_3 = m10127(NULL, &m10127_MI);
		__this->f2 = L_3;
		return;
	}
}
#include "t1873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1873_TI;
#include "t1873MD.h"

extern MethodInfo m11085_MI;
extern MethodInfo m9865_MI;


extern "C" void m9865 (t1873 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9866_MI;
extern "C" void m9866 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1873_SFs*)InitializedTypeInfo(&t1873_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9867_MI;
extern "C" void m9867 (t9 * __this , MethodInfo* method)
{
	t9 * V_0 = {0};
	t1873 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1873_TI));
		t9 * L_0 = ((t1873_SFs*)InitializedTypeInfo(&t1873_TI)->static_fields)->f0;
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1873_TI));
		t1873 * L_2 = (t1873 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1873_TI));
		m9865(L_2, &m9865_MI);
		V_1 = L_2;
		t1873 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		m9861(NULL, L_3, &m9861_MI);
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
		m1117(NULL, L_4, &m1117_MI);
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
extern MethodInfo m9868_MI;
extern "C" t2* m9868 (t1873 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral2079;
	}
}
extern MethodInfo m9869_MI;
extern "C" int32_t m9869 (t1873 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
extern MethodInfo m9870_MI;
extern "C" t9 * m9870 (t1873 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		int32_t L_0 = m11085(NULL, &m11085_MI);
		t1872 * L_1 = (t1872 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1872_TI));
		m9864(L_1, L_0, &m9864_MI);
		return L_1;
	}
}
extern MethodInfo m9871_MI;
extern "C" void m9871 (t1873 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1874_TI;
#include "t1874MD.h"

#include "t1164.h"
extern TypeInfo t1164_TI;
#include "t1164MD.h"
extern Il2CppType t1874_0_0_0;
extern MethodInfo m5953_MI;


extern MethodInfo m9872_MI;
extern "C" void m9872 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_0, &m5953_MI);
		((t1874_SFs*)InitializedTypeInfo(&t1874_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1874_0_0_0), &m329_MI);
		t835 * L_2 = (t835 *)VirtFuncInvoker2< t835 *, t2*, int32_t >::Invoke(&m7824_MI, L_1, (t2*) &_stringLiteral2080, ((int32_t)40));
		((t1874_SFs*)InitializedTypeInfo(&t1874_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern MethodInfo m9873_MI;
extern "C" int32_t m9873 (t1874 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1867MD.h"

#include "t1897.h"
extern TypeInfo t1875_TI;
extern TypeInfo t1897_TI;
extern TypeInfo t2188_TI;
extern TypeInfo t1410_TI;
#include "t2042MD.h"
#include "t1897MD.h"
extern MethodInfo m11169_MI;
extern MethodInfo m12084_MI;
extern MethodInfo m12085_MI;


extern MethodInfo m9874_MI;
extern "C" void m9874 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_0, &m5953_MI);
		((t1867_SFs*)InitializedTypeInfo(&t1867_TI)->static_fields)->f2 = L_0;
		return;
	}
}
extern MethodInfo m9875_MI;
extern "C" void m9875 (t1867 * __this, MethodInfo* method)
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
extern MethodInfo m9876_MI;
extern "C" t1867 * m9876 (t9 * __this , MethodInfo* method)
{
	{
		t1867 * L_0 = m11169(NULL, &m11169_MI);
		return L_0;
	}
}
extern MethodInfo m9877_MI;
extern "C" bool m9877 (t1867 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9878_MI;
extern "C" t9 * m9878 (t1867 * __this, t2* p0, MethodInfo* method)
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
		t1176 * L_0 = (__this->f1);
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
		t1176 * L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_1);
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
			V_0 = ((t9 *)Castclass(L_4, InitializedTypeInfo(&t1875_TI)));
			t9 * L_5 = V_0;
			t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12084_MI, L_5);
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
extern MethodInfo m9879_MI;
extern "C" t2* m9879 (t1867 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral2081, L_2, &m511_MI);
		return L_3;
	}
}
extern MethodInfo m9880_MI;
extern "C" t9 * m9880 (t1867 * __this, t1215 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1897_TI));
		t1897 * L_0 = ((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f0;
		V_0 = L_0;
		t1176 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		t1176 * L_2 = (__this->f1);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5769_MI, L_2);
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
			V_1 = ((t9 *)Castclass(L_5, InitializedTypeInfo(&t1875_TI)));
			t9 * L_6 = V_1;
			V_3 = ((t9 *)IsInst(L_6, InitializedTypeInfo(&t2188_TI)));
			t9 * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			t9 * L_8 = V_3;
			t1215 * L_9 = p0;
			t9 * L_10 = V_0;
			t9 * L_11 = (t9 *)InterfaceFuncInvoker2< t9 *, t1215 *, t9 * >::Invoke(&m12085_MI, L_8, L_9, L_10);
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
#include "t1865.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1865_TI;
#include "t1865MD.h"

extern MethodInfo m12086_MI;
extern MethodInfo m5985_MI;
extern MethodInfo m12087_MI;


extern MethodInfo m9881_MI;
extern "C" void m9881 (t1865 * __this, t2* p0, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9882_MI;
extern "C" t2* m9882 (t1865 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9883_MI;
extern "C" bool m9883 (t1865 * __this, t9 * p0, MethodInfo* method)
{
	t1865 * V_0 = {0};
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
		if (((t1865 *)IsInst(L_1, InitializedTypeInfo(&t1865_TI))))
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
		V_0 = ((t1865 *)Castclass(L_2, InitializedTypeInfo(&t1865_TI)));
		t1865 * L_3 = V_0;
		t2* L_4 = (L_3->f0);
		t2* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m2777(NULL, L_4, L_5, &m2777_MI);
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
extern MethodInfo m9884_MI;
extern "C" int32_t m9884 (t1865 * __this, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m9885_MI;
extern "C" void m9885 (t1865 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2082, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		t9 * L_3 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12086_MI, L_2);
		V_0 = L_3;
		t9 * L_4 = V_0;
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5985_MI, L_4, __this);
		return;
	}
}
extern MethodInfo m9886_MI;
extern "C" bool m9886 (t1865 * __this, t1867 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2082, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1867 * L_2 = p0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral2083, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p1;
		t126 * L_5 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12087_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7795_MI, L_5);
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
		t1867 * L_7 = p0;
		t2* L_8 = (__this->f0);
		t9 * L_9 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9878_MI, L_7, L_8);
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
		if ((((t9*)(t1865 *)__this) == ((t9*)(t9 *)L_11)))
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



extern "C" void m9887 (t1870 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t1876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1876_TI;
#include "t1876MD.h"

#include "t1877.h"
#include "t1492.h"
#include "t1878.h"
extern TypeInfo t1492_TI;
extern TypeInfo t1877_TI;
#include "t1492MD.h"
#include "t1877MD.h"
extern MethodInfo m7035_MI;
extern MethodInfo m9891_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m11068_MI;
extern MethodInfo m9889_MI;
extern MethodInfo m11065_MI;
extern MethodInfo m9890_MI;


extern MethodInfo m9888_MI;
extern "C" void m9888 (t1876 * __this, MethodInfo* method)
{
	{
		m9889(__this, 8, 0, &m9889_MI);
		return;
	}
}
extern "C" void m9889 (t1876 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		t1877 * L_0 = (t1877 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1877_TI));
		m11065(L_0, 0, &m11065_MI);
		__this->f4 = L_0;
		m9881(__this, (t2*) &_stringLiteral2084, &m9881_MI);
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
		t570 * L_5 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_5, (t2*) &_stringLiteral559, &m2949_MI);
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
extern "C" void m9890 (t1876 * __this, bool p0, MethodInfo* method)
{
	t1876 * V_0 = {0};
	t1876 * V_1 = {0};
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
		t1877 * L_1 = (__this->f4);
		VirtFuncInvoker0< bool >::Invoke(&m7035_MI, L_1);
		V_0 = __this;
		t1876 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
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
			m9891(__this, &m9891_MI);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
			t1878 * L_5 = m11083(NULL, &m11083_MI);
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
		t1876 * L_6 = V_0;
		m1117(NULL, L_6, &m1117_MI);
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
		t1876 * L_7 = V_1;
		m1115(NULL, L_7, &m1115_MI);
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
			t1877 * L_9 = (__this->f4);
			m11068(L_9, &m11068_MI);
			__this->f5 = (t1878 *)NULL;
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
			t1878 * L_11 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
			t1878 * L_12 = m11083(NULL, &m11083_MI);
			if ((((t9*)(t1878 *)L_11) == ((t9*)(t1878 *)L_12)))
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
		t1876 * L_13 = V_1;
		m1117(NULL, L_13, &m1117_MI);
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
extern "C" void m9891 (t1876 * __this, MethodInfo* method)
{
	t1876 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1876 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
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
			t1878 * L_2 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
			t1878 * L_3 = m11083(NULL, &m11083_MI);
			if ((!(((t9*)(t1878 *)L_2) == ((t9*)(t1878 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->f3);
			__this->f3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			t1877 * L_5 = (__this->f4);
			m11068(L_5, &m11068_MI);
			__this->f5 = (t1878 *)NULL;
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
		t1876 * L_6 = V_0;
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
		return;
	}
}
extern MethodInfo m9892_MI;
extern "C" void m9892 (t1876 * __this, t9 * p0, MethodInfo* method)
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
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12086_MI, L_1);
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5985_MI, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m9893_MI;
extern "C" bool m9893 (t1876 * __this, t1867 * p0, t9 * p1, MethodInfo* method)
{
	t1876 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t1867 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9878_MI, L_0, (t2*) &_stringLiteral2084);
		V_0 = ((t1876 *)IsInst(L_1, InitializedTypeInfo(&t1876_TI)));
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
		t1876 * L_4 = V_0;
		return ((((t9*)(t1876 *)L_4) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0047:
	{
		t1876 * L_5 = V_0;
		return ((((int32_t)((((t9*)(t1876 *)L_5) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern MethodInfo m9894_MI;
extern "C" void m9894 (t9 * __this , MethodInfo* method)
{
	t1876 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1867 * L_0 = m11081(NULL, &m11081_MI);
		bool L_1 = m9877(L_0, &m9877_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1867 * L_2 = m11081(NULL, &m11081_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9878_MI, L_2, (t2*) &_stringLiteral2084);
		V_0 = ((t1876 *)IsInst(L_3, InitializedTypeInfo(&t1876_TI)));
		t1876 * L_4 = V_0;
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
		t1876 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9890_MI, L_5, 0);
		return;
	}
}
extern MethodInfo m9895_MI;
extern "C" void m9895 (t9 * __this , MethodInfo* method)
{
	t1876 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1867 * L_0 = m11081(NULL, &m11081_MI);
		bool L_1 = m9877(L_0, &m9877_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1878_TI));
		t1867 * L_2 = m11081(NULL, &m11081_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9878_MI, L_2, (t2*) &_stringLiteral2084);
		V_0 = ((t1876 *)IsInst(L_3, InitializedTypeInfo(&t1876_TI)));
		t1876 * L_4 = V_0;
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
		t1876 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9890_MI, L_5, 1);
		return;
	}
}
#include "t1879.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1879_TI;
#include "t1879MD.h"



extern MethodInfo m9896_MI;
extern "C" void m9896 (t1879 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9897_MI;
extern "C" t310  m9897 (t1879 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9897((t1879 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t310  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t310  (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t310  (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t310  pinvoke_delegate_wrapper_t1879(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
extern MethodInfo m9898_MI;
extern "C" t9 * m9898 (t1879 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9899_MI;
extern "C" t310  m9899 (t1879 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t310 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1881_TI;
#include "t1881MD.h"

#include "t272.h"
#include "t1692.h"
#include "t2077.h"
#include "t2076.h"
extern TypeInfo t272_TI;
extern TypeInfo t1886_TI;
extern TypeInfo t1692_TI;
extern TypeInfo t1883_TI;
extern TypeInfo t476_TI;
extern TypeInfo t477_TI;
extern TypeInfo t2077_TI;
#include "t272MD.h"
#include "t1886MD.h"
#include "t1692MD.h"
#include "t2077MD.h"
#include "t2084MD.h"
extern MethodInfo m1132_MI;
extern MethodInfo m11508_MI;
extern MethodInfo m2459_MI;
extern MethodInfo m11505_MI;
extern MethodInfo m11881_MI;
extern MethodInfo m5812_MI;
extern MethodInfo m9919_MI;
extern MethodInfo m9920_MI;
extern MethodInfo m9921_MI;
extern MethodInfo m5895_MI;
extern MethodInfo m9901_MI;
extern MethodInfo m4292_MI;
extern MethodInfo m5979_MI;
extern MethodInfo m11882_MI;
extern MethodInfo m8575_MI;
extern MethodInfo m9910_MI;
extern MethodInfo m8577_MI;
extern MethodInfo m8585_MI;
extern MethodInfo m12088_MI;
extern MethodInfo m7066_MI;
extern MethodInfo m9911_MI;
extern MethodInfo m11975_MI;
extern MethodInfo m11116_MI;
extern MethodInfo m11884_MI;
extern MethodInfo m9907_MI;
extern MethodInfo m8583_MI;
extern MethodInfo m9908_MI;


extern MethodInfo m9900_MI;
extern "C" void m9900 (t1881 * __this, MethodInfo* method)
{
	{
		m5812(__this, &m5812_MI);
		__this->f2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_0 = m9919(NULL, &m9919_MI);
		__this->f3 = L_0;
		t310  L_1 = m9920(NULL, &m9920_MI);
		__this->f4 = L_1;
		t310  L_2 = m9921(NULL, &m9921_MI);
		__this->f5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_3 = m1132(NULL, &m1132_MI);
		t310  L_4 = (__this->f3);
		t272  L_5 = m11505(NULL, L_3, L_4, &m11505_MI);
		__this->f1 = L_5;
		return;
	}
}
extern "C" t310  m9901 (t1881 * __this, MethodInfo* method)
{
	{
		t272  L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_1 = m1132(NULL, &m1132_MI);
		t310  L_2 = m11508(NULL, L_0, L_1, &m11508_MI);
		return L_2;
	}
}
extern MethodInfo m9902_MI;
extern "C" int32_t m9902 (t1881 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9903_MI;
extern "C" void m9903 (t1881 * __this, MethodInfo* method)
{
	{
		__this->f2 = 2;
		return;
	}
}
extern MethodInfo m9904_MI;
extern "C" void m9904 (t1881 * __this, t310  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1882_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2459(NULL, (t2*) &_stringLiteral2085, L_3, (t2*) &_stringLiteral135, &m2459_MI);
		t1932 * L_5 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_5, L_4, &m10130_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t310  L_6 = p0;
		__this->f3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_7 = m1132(NULL, &m1132_MI);
		t310  L_8 = (__this->f3);
		t272  L_9 = m11505(NULL, L_7, L_8, &m11505_MI);
		__this->f1 = L_9;
		t310  L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_11 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		bool L_12 = m11881(NULL, L_10, L_11, &m11881_MI);
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
extern MethodInfo m9905_MI;
extern "C" void m9905 (t1881 * __this, t310  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1882_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2459(NULL, (t2*) &_stringLiteral2086, L_3, (t2*) &_stringLiteral135, &m2459_MI);
		t1932 * L_5 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_5, L_4, &m10130_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t310  L_6 = p0;
		__this->f4 = L_6;
		return;
	}
}
extern MethodInfo m9906_MI;
extern "C" void m9906 (t1881 * __this, t310  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1882_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2459(NULL, (t2*) &_stringLiteral2087, L_3, (t2*) &_stringLiteral135, &m2459_MI);
		t1932 * L_5 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_5, L_4, &m10130_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t310  L_6 = p0;
		__this->f5 = L_6;
		return;
	}
}
extern "C" t310  m9907 (t1881 * __this, t310  p0, MethodInfo* method)
{
	t272  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_0 = m1132(NULL, &m1132_MI);
		t310  L_1 = p0;
		t272  L_2 = m11505(NULL, L_0, L_1, &m11505_MI);
		V_0 = L_2;
		t272  L_3 = V_0;
		t272  L_4 = (__this->f1);
		bool L_5 = m5895(NULL, L_3, L_4, &m5895_MI);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		t272  L_6 = V_0;
		__this->f1 = L_6;
	}

IL_0021:
	{
		t310  L_7 = (t310 )VirtFuncInvoker0< t310  >::Invoke(&m9901_MI, __this);
		return L_7;
	}
}
extern "C" void m9908 (t1881 * __this, t9 * p0, MethodInfo* method)
{
	t1881 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1881 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1176 * L_1 = (__this->f6);
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
			t1176 * L_2 = (__this->f6);
			int32_t L_3 = V_1;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_2, L_3);
			t9 * L_5 = p0;
			bool L_6 = m4292(NULL, L_4, L_5, &m4292_MI);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			t1176 * L_7 = (__this->f6);
			int32_t L_8 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_7, L_8);
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
			t1176 * L_11 = (__this->f6);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_11);
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
		t1881 * L_13 = V_0;
		m1117(NULL, L_13, &m1117_MI);
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
extern MethodInfo m9909_MI;
extern "C" void m9909 (t1881 * __this, MethodInfo* method)
{
	t1881 * V_0 = {0};
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
		t310  L_1 = (t310 )VirtFuncInvoker0< t310  >::Invoke(&m9901_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_2 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
		bool L_3 = m11882(NULL, L_1, L_2, &m11882_MI);
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
		t1176 * L_4 = (__this->f6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->f2 = 3;
		V_0 = __this;
		t1881 * L_5 = V_0;
		m1115(NULL, L_5, &m1115_MI);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		t1176 * L_6 = (__this->f6);
		t1692 * L_7 = (t1692 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1692_TI));
		m8575(L_7, L_6, &m8575_MI);
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
		t1881 * L_8 = V_0;
		m1117(NULL, L_8, &m1117_MI);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004e:
	{
		m9910(__this, &m9910_MI);
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
extern "C" void m9910 (t1881 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	{
		t1692 * L_0 = (__this->f7);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8577_MI, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->f2 = 4;
		__this->f7 = (t1692 *)NULL;
		return;
	}

IL_001c:
	{
		t1692 * L_2 = (__this->f7);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8585_MI, L_2);
		V_0 = ((t9 *)Castclass(L_3, InitializedTypeInfo(&t1883_TI)));
		t9 * L_4 = V_0;
		t9 * L_5 = L_4;
		t58 L_6 = { GetInterfaceMethodInfo(L_5, &m12088_MI) };
		t1879 * L_7 = (t1879 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1879_TI));
		m9896(L_7, L_5, L_6, &m9896_MI);
		__this->f8 = L_7;
		t1879 * L_8 = (__this->f8);
		t9 * L_9 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t477 *, t9 * >::Invoke(&m9898_MI, L_8, __this, (t477 *)NULL, NULL);
		V_1 = L_9;
		t9 * L_10 = V_1;
		t1492 * L_11 = (t1492 *)InterfaceFuncInvoker0< t1492 * >::Invoke(&m7066_MI, L_10);
		t58 L_12 = { &m9911_MI };
		t2077 * L_13 = (t2077 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2077_TI));
		m11975(L_13, __this, L_12, &m11975_MI);
		t9 * L_14 = V_1;
		t310  L_15 = (__this->f5);
		m11116(NULL, L_11, L_13, L_14, L_15, 1, &m11116_MI);
		return;
	}
}
extern "C" void m9911 (t1881 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t310  V_1 = {0};
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
			V_0 = ((t9 *)Castclass(L_1, InitializedTypeInfo(&t476_TI)));
			t1879 * L_2 = (__this->f8);
			t9 * L_3 = V_0;
			t310  L_4 = (t310 )VirtFuncInvoker1< t310 , t9 * >::Invoke(&m9899_MI, L_2, L_3);
			V_1 = L_4;
			t310  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
			t310  L_6 = ((t310_SFs*)InitializedTypeInfo(&t310_TI)->static_fields)->f2;
			bool L_7 = m11884(NULL, L_5, L_6, &m11884_MI);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			t310  L_8 = V_1;
			VirtFuncInvoker1< t310 , t310  >::Invoke(&m9907_MI, __this, L_8);
			__this->f2 = 2;
			__this->f7 = (t1692 *)NULL;
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
		t1692 * L_9 = (__this->f7);
		t9 * L_10 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8583_MI, L_9);
		VirtActionInvoker1< t9 * >::Invoke(&m9908_MI, __this, ((t9 *)Castclass(L_10, InitializedTypeInfo(&t1883_TI))));
		m9910(__this, &m9910_MI);
	}

IL_005d:
	{
		return;
	}
}
#include "t1884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1884_TI;
#include "t1884MD.h"

#include "t1595.h"
#include "t1885.h"
#include "t2089.h"
extern TypeInfo t2089_TI;
extern TypeInfo t1885_TI;
extern TypeInfo t1595_TI;
#include "t1595MD.h"
#include "t2089MD.h"
#include "t1885MD.h"
extern MethodInfo m10167_MI;
extern MethodInfo m9914_MI;
extern MethodInfo m9916_MI;
extern MethodInfo m11967_MI;
extern MethodInfo m9918_MI;
extern MethodInfo m11130_MI;
extern MethodInfo m11133_MI;
extern MethodInfo m10164_MI;
extern MethodInfo m9915_MI;


extern MethodInfo m9912_MI;
extern "C" void m9912 (t1884 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		__this->f0 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9913_MI;
extern "C" void m9913 (t1884 * __this, t1595 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1176 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			t1595 * L_3 = p0;
			t1881 * L_4 = m10167(L_3, &m10167_MI);
			m9903(L_4, &m9903_MI);
			t1176 * L_5 = (__this->f0);
			t1595 * L_6 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_5, L_6);
			t1885 * L_7 = (__this->f1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			m9914(__this, &m9914_MI);
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
		m1117(NULL, L_8, &m1117_MI);
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
extern "C" void m9914 (t1884 * __this, MethodInfo* method)
{
	{
		t58 L_0 = { &m9916_MI };
		t2089 * L_1 = (t2089 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2089_TI));
		m11967(L_1, __this, L_0, &m11967_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_2 = m9918(NULL, &m9918_MI);
		t310  L_3 = m9918(NULL, &m9918_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1885_TI));
		t1885 * L_4 = (t1885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1885_TI));
		m11130(L_4, L_1, NULL, L_2, L_3, &m11130_MI);
		__this->f1 = L_4;
		return;
	}
}
extern "C" void m9915 (t1884 * __this, MethodInfo* method)
{
	t1885 * V_0 = {0};
	{
		t1885 * L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (t1885 *)NULL;
		t1885 * L_1 = V_0;
		VirtActionInvoker0::Invoke(&m11133_MI, L_1);
		return;
	}
}
extern "C" void m9916 (t1884 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t1595 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1176 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1115(NULL, L_2, &m1115_MI);
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
			t1176 * L_3 = (__this->f0);
			int32_t L_4 = V_1;
			t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5766_MI, L_3, L_4);
			V_2 = ((t1595 *)Castclass(L_5, InitializedTypeInfo(&t1595_TI)));
			t1595 * L_6 = V_2;
			t1881 * L_7 = m10167(L_6, &m10167_MI);
			m9909(L_7, &m9909_MI);
			t1595 * L_8 = V_2;
			t1881 * L_9 = m10167(L_8, &m10167_MI);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9902_MI, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			t1176 * L_11 = (__this->f0);
			int32_t L_12 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5979_MI, L_11, L_12);
			t1595 * L_13 = V_2;
			VirtActionInvoker0::Invoke(&m10164_MI, L_13);
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
			t1176 * L_16 = (__this->f0);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			t1176 * L_18 = (__this->f0);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			m9915(__this, &m9915_MI);
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
		m1117(NULL, L_20, &m1117_MI);
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
#include "t1882MD.h"



#include "t1886.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11874_MI;


extern MethodInfo m9917_MI;
extern "C" void m9917 (t9 * __this , MethodInfo* method)
{
	{
		t1884 * L_0 = (t1884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1884_TI));
		m9912(L_0, &m9912_MI);
		((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t310_TI));
		t310  L_1 = m11874(NULL, (10.0), &m11874_MI);
		((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f0 = L_1;
		t310  L_2 = m11873(NULL, (5.0), &m11873_MI);
		((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f1 = L_2;
		t310  L_3 = m11873(NULL, (2.0), &m11873_MI);
		((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f2 = L_3;
		t310  L_4 = m11873(NULL, (2.0), &m11873_MI);
		((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f3 = L_4;
		return;
	}
}
extern "C" t310  m9918 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_0 = ((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" t310  m9919 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_0 = ((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t310  m9920 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_0 = ((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f2;
		return L_0;
	}
}
extern "C" t310  m9921 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t310  L_0 = ((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9922_MI;
extern "C" void m9922 (t9 * __this , t1595 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1886_TI));
		t1884 * L_0 = ((t1886_SFs*)InitializedTypeInfo(&t1886_TI)->static_fields)->f4;
		t1595 * L_1 = p0;
		m9913(L_0, L_1, &m9913_MI);
		return;
	}
}
#include "t1887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1887_TI;
#include "t1887MD.h"



#include "t1888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1888_TI;
#include "t1888MD.h"

extern TypeInfo t1101_TI;
extern Il2CppType t1101_0_0_0;


extern MethodInfo m9923_MI;
extern TypeInfo* t1101_TI_var;
extern "C" void m9923 (t1888 * __this, t920 * p0, uint8_t p1, MethodInfo* method)
{
	static bool m9923_init;
	if (!m9923_init)
	{
		t1101_TI_var = il2cpp_codegen_class_from_type(&t1101_0_0_0);
		m9923_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t920 * L_0 = p0;
		__this->f2 = L_0;
		t920 * L_1 = (__this->f2);
		t934* L_2 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_1);
		V_0 = L_2;
		t934* L_3 = V_0;
		__this->f0 = ((t1101*)SZArrayNew(t1101_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
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
		t934* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_5, L_7)));
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		t1101* L_10 = (__this->f0);
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
		t934* L_17 = V_0;
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
		t934* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_18, L_20)));
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7793_MI, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		t934* L_23 = V_0;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		bool L_26 = m9745((*(t930 **)(t930 **)SZArrayLdElema(L_23, L_25)), &m9745_MI);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		t1101* L_27 = (__this->f0);
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
		t934* L_34 = V_0;
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
extern MethodInfo m9924_MI;
extern "C" int32_t m9924 (t1888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9925_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9925 (t1888 * __this, t158* p0, MethodInfo* method)
{
	static bool m9925_init;
	if (!m9925_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9925_init = true;
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
		t1101* L_4 = (__this->f0);
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
#include "t1889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1889_TI;
#include "t1889MD.h"

#include "t1491.h"
#include "t1891.h"
extern TypeInfo t1491_TI;
#include "t1491MD.h"
#include "t1554MD.h"
#include "t477MD.h"
extern MethodInfo m7024_MI;
extern MethodInfo m561_MI;
extern MethodInfo m9928_MI;
extern MethodInfo m7025_MI;
extern MethodInfo m7878_MI;


extern MethodInfo m9926_MI;
extern "C" void m9926 (t1889 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9927_MI;
extern "C" t9 * m9927 (t1889 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t1492 * m9928 (t1889 * __this, MethodInfo* method)
{
	t1889 * V_0 = {0};
	t1492 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1889 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1492 * L_1 = (__this->f1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f6);
			t1491 * L_3 = (t1491 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1491_TI));
			m7024(L_3, L_2, &m7024_MI);
			__this->f1 = L_3;
		}

IL_0021:
		{
			t1492 * L_4 = (__this->f1);
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
		t1889 * L_5 = V_0;
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
extern MethodInfo m9929_MI;
extern "C" bool m9929 (t1889 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9930_MI;
extern "C" bool m9930 (t1889 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m9931_MI;
extern "C" bool m9931 (t1889 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9932_MI;
extern "C" void m9932 (t1889 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m9933_MI;
extern "C" t9 * m9933 (t1889 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9934_MI;
extern "C" t9 * m9934 (t1889 * __this, MethodInfo* method)
{
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9935_MI;
extern "C" t9 * m9935 (t1889 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9936_MI;
extern "C" t9 * m9936 (t1889 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m9937_MI;
extern "C" void m9937 (t1889 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern MethodInfo m9938_MI;
extern "C" void m9938 (t1889 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m9939_MI;
extern "C" t9 * m9939 (t1889 * __this, MethodInfo* method)
{
	t1889 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1889 * L_0 = V_0;
		m1115(NULL, L_0, &m1115_MI);
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
		t1889 * L_3 = V_0;
		m1117(NULL, L_3, &m1117_MI);
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
		t1492 * L_4 = (t1492 *)VirtFuncInvoker0< t1492 * >::Invoke(&m9928_MI, __this);
		VirtFuncInvoker0< bool >::Invoke(&m7035_MI, L_4);
		t9 * L_5 = (__this->f14);
		return L_5;
	}

IL_0035:
	{
		t9 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m9940_MI;
extern "C" t9 * m9940 (t1889 * __this, t9 * p0, MethodInfo* method)
{
	t1889 * V_0 = {0};
	t477 * V_1 = {0};
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
		t1889 * L_1 = V_0;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->f6 = 1;
			t1492 * L_2 = (__this->f1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			t1492 * L_3 = (t1492 *)VirtFuncInvoker0< t1492 * >::Invoke(&m9928_MI, __this);
			m7025(((t1491 *)Castclass(L_3, InitializedTypeInfo(&t1491_TI))), &m7025_MI);
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
		t1889 * L_4 = V_0;
		m1117(NULL, L_4, &m1117_MI);
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
		V_1 = ((t477 *)Castclass(L_6, InitializedTypeInfo(&t477_TI)));
		t477 * L_7 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m7878_MI, L_7, __this);
	}

IL_0053:
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9941_MI;
extern "C" t1891 * m9941 (t1889 * __this, MethodInfo* method)
{
	{
		t1891 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m9942_MI;
extern "C" void m9942 (t1889 * __this, t1891 * p0, MethodInfo* method)
{
	{
		t1891 * L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1894.h"
#include "t1895.h"
#include "t727.h"
extern TypeInfo t1894_TI;
extern TypeInfo t1166_TI;
extern TypeInfo t1895_TI;
extern TypeInfo t727_TI;
extern TypeInfo t1106_TI;
extern TypeInfo t1107_TI;
#include "t1894MD.h"
#include "t1895MD.h"
#include "t1896MD.h"
#include "t727MD.h"
extern Il2CppType t727_0_0_0;
extern MethodInfo m7812_MI;
extern MethodInfo m9984_MI;
extern MethodInfo m9974_MI;
extern MethodInfo m9973_MI;
extern MethodInfo m9957_MI;
extern MethodInfo m10007_MI;
extern MethodInfo m5817_MI;
extern MethodInfo m5818_MI;
extern MethodInfo m5819_MI;
extern MethodInfo m9976_MI;
extern MethodInfo m9977_MI;
extern MethodInfo m5743_MI;
extern Il2CppGenericMethod m5817_GM;
extern Il2CppGenericMethod m5818_GM;
extern Il2CppGenericMethod m5819_GM;


extern "C" void m9943 (t1859 * __this, t126 * p0, MethodInfo* method)
{
	{
		m9974(__this, &m9974_MI);
		t126 * L_0 = p0;
		__this->f14 = L_0;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_1);
		__this->f15 = L_2;
		__this->f16 = 1;
		return;
	}
}
extern MethodInfo m9944_MI;
extern "C" void m9944 (t1859 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m9973(__this, L_0, L_1, &m9973_MI);
		return;
	}
}
extern MethodInfo m9945_MI;
extern "C" void m9945 (t1859 * __this, MethodInfo* method)
{
	t1895 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t1895 * L_0 = (t1895 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1895_TI));
		m9957(L_0, __this, &m9957_MI);
		V_0 = L_0;
		t1895 * L_1 = V_0;
		__this->f8 = L_1;
		t1895 * L_2 = V_0;
		t9 * L_3 = m10007(L_2, &m10007_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" void m9946 (t1859 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f16 = L_0;
		return;
	}
}
extern MethodInfo m9947_MI;
extern "C" t126 * m9947 (t1859 * __this, MethodInfo* method)
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
		t126 * L_2 = m7812(NULL, L_1, &m7812_MI);
		__this->f14 = L_2;
	}

IL_0019:
	{
		t126 * L_3 = (__this->f14);
		return L_3;
	}
}
extern MethodInfo m9948_MI;
extern "C" t2* m9948 (t1859 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m9949_MI;
extern "C" t9 * m9949 (t1859 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f11);
		return L_0;
	}
}
extern "C" void m9950 (t1859 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9951_MI;
extern "C" t158* m9951 (t1859 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" void m9952 (t1859 * __this, t158* p0, MethodInfo* method)
{
	{
		t158* L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
extern MethodInfo m9953_MI;
extern "C" t9 * m9953 (t1859 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_1 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_1, &m5768_MI);
		__this->f13 = L_1;
	}

IL_0013:
	{
		t9 * L_2 = (__this->f13);
		return L_2;
	}
}
extern MethodInfo m9954_MI;
extern TypeInfo* t727_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m9954 (t1859 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9954_init;
	if (!m9954_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m9954_init = true;
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
			goto IL_00c4;
		}
	}
	{
		t727 * L_2 = ((t1859_SFs*)InitializedTypeInfo(&t1859_TI)->static_fields)->f17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 5, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2088, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2089, 1);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2090, 2);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2091, 3);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2092, 4);
		t727 * L_9 = V_1;
		((t1859_SFs*)InitializedTypeInfo(&t1859_TI)->static_fields)->f17 = L_9;
	}

IL_0058:
	{
		t727 * L_10 = ((t1859_SFs*)InitializedTypeInfo(&t1859_TI)->static_fields)->f17;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_10, L_11, (&V_2));
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
		__this->f11 = ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1858_TI)));
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
		__this->f13 = ((t9 *)Castclass(L_17, InitializedTypeInfo(&t1005_TI)));
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
		m9976(__this, L_19, L_20, &m9976_MI);
		return;
	}
}
extern MethodInfo m9955_MI;
extern "C" void m9955 (t1859 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1106 * L_0 = p0;
		t1107  L_1 = p1;
		m9977(__this, L_0, L_1, &m9977_MI);
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
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_4);
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
		t1106 * L_6 = p0;
		t9 * L_7 = (__this->f11);
		m5785(L_6, (t2*) &_stringLiteral2088, L_7, &m5785_MI);
		t1106 * L_8 = p0;
		t158* L_9 = (__this->f12);
		m5785(L_8, (t2*) &_stringLiteral2089, (t9 *)(t9 *)L_9, &m5785_MI);
		t1106 * L_10 = p0;
		m5785(L_10, (t2*) &_stringLiteral2090, NULL, &m5785_MI);
		t1106 * L_11 = p0;
		t9 * L_12 = V_0;
		m5785(L_11, (t2*) &_stringLiteral2091, L_12, &m5785_MI);
		t1106 * L_13 = p0;
		t2* L_14 = (__this->f15);
		m5785(L_13, (t2*) &_stringLiteral2092, L_14, &m5785_MI);
		return;
	}
}
extern MethodInfo m9956_MI;
extern "C" t9 * m9956 (t1859 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m9984(__this, &m9984_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1896.h"
extern TypeInfo t1896_TI;
extern MethodInfo m10003_MI;
extern MethodInfo m10005_MI;
extern MethodInfo m12089_MI;
extern MethodInfo m12090_MI;
extern MethodInfo m12091_MI;
extern MethodInfo m10011_MI;
extern MethodInfo m12092_MI;
extern MethodInfo m10012_MI;


extern "C" void m9957 (t1895 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m10003(__this, L_0, &m10003_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t221* L_1 = ((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f6;
		m10005(__this, L_1, &m10005_MI);
		return;
	}
}
extern MethodInfo m9958_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9958 (t9 * __this , MethodInfo* method)
{
	static bool m9958_init;
	if (!m9958_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9958_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)11)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2093);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2093;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2094);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2094;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2095);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2095;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2089);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2089;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2090);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral2090;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2091);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral2091;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2088);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2088;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2092);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2092;
		((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f6 = L_10;
		return;
	}
}
extern MethodInfo m9959_MI;
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" t9 * m9959 (t1895 * __this, t2* p0, MethodInfo* method)
{
	static bool m9959_init;
	if (!m9959_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m9959_init = true;
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
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t727 * L_2 = ((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 5, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2088, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2089, 1);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2090, 2);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2091, 3);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2092, 4);
		t727 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t727 * L_10 = ((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f7;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_10, L_11, (&V_2));
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
		t9 * L_15 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12089_MI, ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1866_TI))));
		return L_15;
	}

IL_0094:
	{
		t9 * L_16 = (__this->f1);
		t158* L_17 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12090_MI, ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1866_TI))));
		return (t9 *)L_17;
	}

IL_00a5:
	{
		t9 * L_18 = (__this->f1);
		t126 * L_19 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12087_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t1866_TI))));
		return L_19;
	}

IL_00b6:
	{
		t9 * L_20 = (__this->f1);
		t9 * L_21 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12086_MI, ((t9 *)Castclass(L_20, InitializedTypeInfo(&t1866_TI))));
		return L_21;
	}

IL_00c7:
	{
		t9 * L_22 = (__this->f1);
		t2* L_23 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12091_MI, ((t9 *)Castclass(L_22, InitializedTypeInfo(&t1866_TI))));
		return L_23;
	}

IL_00d8:
	{
		t2* L_24 = p0;
		t9 * L_25 = m10011(__this, L_24, &m10011_MI);
		return L_25;
	}
}
extern MethodInfo m9960_MI;
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m9960 (t1895 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9960_init;
	if (!m9960_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m9960_init = true;
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
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t727 * L_2 = ((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 5, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2088, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2089, 1);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2090, 1);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2091, 1);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2092, 1);
		t727 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1895_TI));
		t727 * L_10 = ((t1895_SFs*)InitializedTypeInfo(&t1895_TI)->static_fields)->f8;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_10, L_11, (&V_2));
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
		InterfaceActionInvoker1< t9 * >::Invoke(&m12092_MI, ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1866_TI))), ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1858_TI))));
		goto IL_009d;
	}

IL_0088:
	{
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral2099, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		t2* L_18 = p0;
		t9 * L_19 = p1;
		m10012(__this, L_18, L_19, &m10012_MI);
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

extern MethodInfo m9961_MI;


extern "C" void m9961 (t1897 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9962_MI;
extern "C" void m9962 (t9 * __this , MethodInfo* method)
{
	{
		t1897 * L_0 = (t1897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1897_TI));
		m9961(L_0, &m9961_MI);
		((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1898.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1898_TI;
#include "t1898MD.h"

extern MethodInfo m9964_MI;
extern MethodInfo m9965_MI;


extern MethodInfo m9963_MI;
extern "C" void m9963 (t1898 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		m9964(__this, L_0, L_1, 1, &m9964_MI);
		return;
	}
}
extern "C" void m9964 (t1898 * __this, t2* p0, t9 * p1, bool p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = p2;
		m9965(__this, L_0, L_1, L_2, (t2*)NULL, &m9965_MI);
		return;
	}
}
extern "C" void m9965 (t1898 * __this, t2* p0, t9 * p1, bool p2, t2* p3, MethodInfo* method)
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
#include "t1899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;
#include "t1899MD.h"

#include "t1900.h"
#include "t1980.h"
#include "t1982.h"
#include "t1170.h"
extern TypeInfo t1900_TI;
extern TypeInfo t1982_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t1170_TI;
#include "t1900MD.h"
#include "t1982MD.h"
#include "t1980MD.h"
#include "t1170MD.h"
extern MethodInfo m5963_MI;
extern MethodInfo m9971_MI;
extern MethodInfo m10369_MI;
extern MethodInfo m10377_MI;
extern MethodInfo m10359_MI;
extern MethodInfo m10361_MI;
extern MethodInfo m9970_MI;
extern MethodInfo m10381_MI;
extern MethodInfo m8555_MI;
extern MethodInfo m8517_MI;
extern MethodInfo m8518_MI;
extern MethodInfo m5961_MI;


extern MethodInfo m9966_MI;
extern "C" void m9966 (t1899 * __this, MethodInfo* method)
{
	{
		t1900 * L_0 = (t1900 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1900_TI));
		m9971(L_0, &m9971_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9967_MI;
extern "C" void m9967 (t1899 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t1980  V_0 = {0};
	t1982 * V_1 = {0};
	{
		t1900 * L_0 = (t1900 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1900_TI));
		m9971(L_0, &m9971_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		t1106 * L_1 = p0;
		t1982 * L_2 = m10369(L_1, &m10369_MI);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		t1982 * L_3 = V_1;
		t1980  L_4 = m10377(L_3, &m10377_MI);
		V_0 = L_4;
		t2* L_5 = m10359((&V_0), &m10359_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2100, &m331_MI);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		t9 * L_7 = m10361((&V_0), &m10361_MI);
		__this->f1 = ((t1900 *)Castclass(L_7, InitializedTypeInfo(&t1900_TI)));
		goto IL_005c;
	}

IL_0048:
	{
		t2* L_8 = m10359((&V_0), &m10359_MI);
		t9 * L_9 = m10361((&V_0), &m10361_MI);
		m9970(__this, L_8, L_9, &m9970_MI);
	}

IL_005c:
	{
		t1982 * L_10 = V_1;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10381_MI, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m9968_MI;
extern "C" bool m9968 (t1899 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1164 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1164 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5963_MI, L_1);
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
extern MethodInfo m9969_MI;
extern "C" void m9969 (t1899 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t1170  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1106 * L_0 = p0;
		t1900 * L_1 = (__this->f1);
		m5785(L_0, (t2*) &_stringLiteral2100, L_1, &m5785_MI);
		t1164 * L_2 = (__this->f0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		t1164 * L_3 = (__this->f0);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8555_MI, L_3);
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
			V_0 = ((*(t1170 *)((t1170 *)UnBox (L_6, InitializedTypeInfo(&t1170_TI)))));
			t1106 * L_7 = p0;
			t9 * L_8 = m8517((&V_0), &m8517_MI);
			t9 * L_9 = m8518((&V_0), &m8518_MI);
			m5785(L_7, ((t2*)Castclass(L_8, (&t2_TI))), L_9, &m5785_MI);
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
extern "C" void m9970 (t1899 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t1164 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_1 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_1, &m5953_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1164 * L_2 = (__this->f0);
		t2* L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5961_MI, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9971 (t1900 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1902.h"
extern TypeInfo t1902_TI;
#include "t1902MD.h"
extern MethodInfo m9988_MI;
extern MethodInfo m9991_MI;
extern MethodInfo m9985_MI;
extern MethodInfo m9981_MI;
extern MethodInfo m9589_MI;
extern MethodInfo m9990_MI;
extern MethodInfo m5745_MI;
extern MethodInfo m5752_MI;
extern MethodInfo m9995_MI;
extern MethodInfo m10135_MI;
extern MethodInfo m4485_MI;
extern MethodInfo m9992_MI;
extern MethodInfo m4335_MI;
extern MethodInfo m10143_MI;
extern MethodInfo m515_MI;
extern MethodInfo m7798_MI;
extern MethodInfo m10133_MI;
extern MethodInfo m10142_MI;
extern MethodInfo m9986_MI;
extern MethodInfo m9592_MI;
extern MethodInfo m9590_MI;
extern MethodInfo m9994_MI;
extern MethodInfo m9993_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m4311_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m4312_MI;


extern MethodInfo m9972_MI;
extern "C" void m9972 (t1894 * __this, t1901* p0, MethodInfo* method)
{
	t1898 * V_0 = {0};
	t1901* V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9990_MI, __this);
		t1901* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1901* L_1 = p0;
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
		t1901* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		t1901* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t1898 **)(t1898 **)SZArrayLdElema(L_3, L_5));
		t1898 * L_6 = V_0;
		t2* L_7 = (L_6->f2);
		t1898 * L_8 = V_0;
		t9 * L_9 = (L_8->f3);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9976_MI, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		t1901* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		m9991(__this, &m9991_MI);
		return;
	}
}
extern "C" void m9973 (t1894 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t1980  V_0 = {0};
	t1982 * V_1 = {0};
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9990_MI, __this);
		t1106 * L_0 = p0;
		t1982 * L_1 = m10369(L_0, &m10369_MI);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		t1982 * L_2 = V_1;
		t1980  L_3 = m10377(L_2, &m10377_MI);
		V_0 = L_3;
		t2* L_4 = m10359((&V_0), &m10359_MI);
		t9 * L_5 = m10361((&V_0), &m10361_MI);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9976_MI, __this, L_4, L_5);
	}

IL_0030:
	{
		t1982 * L_6 = V_1;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10381_MI, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
extern "C" void m9974 (t1894 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9975_MI;
extern "C" void m9975 (t1894 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9988_MI, __this, L_0);
		return;
	}
}
extern TypeInfo* t727_TI_var;
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m9976 (t1894 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9976_init;
	if (!m9976_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m9976_init = true;
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
			goto IL_0101;
		}
	}
	{
		t727 * L_2 = ((t1894_SFs*)InitializedTypeInfo(&t1894_TI)->static_fields)->f10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 7, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2095, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2094, 1);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2096, 2);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2097, 3);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2098, 4);
		t727 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_9, (t2*) &_stringLiteral2093, 5);
		t727 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_10, (t2*) &_stringLiteral2101, 6);
		t727 * L_11 = V_1;
		((t1894_SFs*)InitializedTypeInfo(&t1894_TI)->static_fields)->f10 = L_11;
	}

IL_0070:
	{
		t727 * L_12 = ((t1894_SFs*)InitializedTypeInfo(&t1894_TI)->static_fields)->f10;
		t2* L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_12, L_13, (&V_2));
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
		__this->f6 = ((t1899 *)Castclass(L_20, InitializedTypeInfo(&t1899_TI)));
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
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9984_MI, __this);
		t2* L_24 = p0;
		t9 * L_25 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5745_MI, L_23, L_24, L_25);
		return;
	}
}
extern "C" void m9977 (t1894 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t1170  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1106 * L_0 = p0;
		t2* L_1 = (__this->f1);
		m5785(L_0, (t2*) &_stringLiteral2095, L_1, &m5785_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f2);
		m5785(L_2, (t2*) &_stringLiteral2094, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t152* L_5 = (__this->f4);
		m5785(L_4, (t2*) &_stringLiteral2096, (t9 *)(t9 *)L_5, &m5785_MI);
		t1106 * L_6 = p0;
		t158* L_7 = (__this->f3);
		m5785(L_6, (t2*) &_stringLiteral2097, (t9 *)(t9 *)L_7, &m5785_MI);
		t1106 * L_8 = p0;
		t1899 * L_9 = (__this->f6);
		m5785(L_8, (t2*) &_stringLiteral2098, L_9, &m5785_MI);
		t1106 * L_10 = p0;
		t2* L_11 = (__this->f0);
		m5785(L_10, (t2*) &_stringLiteral2093, L_11, &m5785_MI);
		t1106 * L_12 = p0;
		t152* L_13 = (__this->f7);
		m5785(L_12, (t2*) &_stringLiteral2101, (t9 *)(t9 *)L_13, &m5785_MI);
		t9 * L_14 = (__this->f9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		t9 * L_15 = (__this->f9);
		t9 * L_16 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5752_MI, L_15);
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
			V_0 = ((*(t1170 *)((t1170 *)UnBox (L_18, InitializedTypeInfo(&t1170_TI)))));
			t1106 * L_19 = p0;
			t9 * L_20 = m8517((&V_0), &m8517_MI);
			t9 * L_21 = m8518((&V_0), &m8518_MI);
			m5785(L_19, ((t2*)Castclass(L_20, (&t2_TI))), L_21, &m5785_MI);
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
extern MethodInfo m9978_MI;
extern "C" int32_t m9978 (t1894 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m9979_MI;
extern "C" t158* m9979 (t1894 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9980_MI;
extern "C" t1899 * m9980 (t1894 * __this, MethodInfo* method)
{
	{
		t1899 * L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1899 * L_1 = (t1899 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1899_TI));
		m9966(L_1, &m9966_MI);
		__this->f6 = L_1;
	}

IL_0013:
	{
		t1899 * L_2 = (__this->f6);
		return L_2;
	}
}
extern "C" t920 * m9981 (t1894 * __this, MethodInfo* method)
{
	{
		t920 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m9991(__this, &m9991_MI);
	}

IL_000e:
	{
		t920 * L_1 = (__this->f5);
		return L_1;
	}
}
extern MethodInfo m9982_MI;
extern "C" t2* m9982 (t1894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t920 * L_1 = (__this->f5);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_1);
		__this->f2 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f2);
		return L_3;
	}
}
extern MethodInfo m9983_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9983 (t1894 * __this, MethodInfo* method)
{
	static bool m9983_init;
	if (!m9983_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9983_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		t920 * L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t920 * L_2 = (__this->f5);
		t934* L_3 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_2);
		V_0 = L_3;
		t934* L_4 = V_0;
		__this->f4 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		t934* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t934* L_13 = V_0;
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
extern "C" t9 * m9984 (t1894 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9985_MI, __this);
	}

IL_000e:
	{
		t9 * L_1 = (__this->f8);
		return L_1;
	}
}
extern "C" void m9985 (t1894 * __this, MethodInfo* method)
{
	t1902 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1902_TI));
		t1902 * L_0 = (t1902 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1902_TI));
		m9995(L_0, __this, &m9995_MI);
		V_0 = L_0;
		t1902 * L_1 = V_0;
		__this->f8 = L_1;
		t1902 * L_2 = V_0;
		t9 * L_3 = m10007(L_2, &m10007_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" t2* m9986 (t1894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t920 * L_1 = (__this->f5);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_1);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_2);
		__this->f1 = L_3;
	}

IL_001e:
	{
		t2* L_4 = (__this->f1);
		return L_4;
	}
}
extern MethodInfo m9987_MI;
extern "C" t2* m9987 (t1894 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m9988 (t1894 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9989_MI;
extern "C" t9 * m9989 (t1894 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern "C" void m9990 (t1894 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m9991 (t1894 * __this, MethodInfo* method)
{
	static bool m9991_init;
	if (!m9991_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9991_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t126 * L_2 = m10135(NULL, L_1, &m10135_MI);
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
		t2* L_6 = m399(NULL, (t2*) &_stringLiteral142, L_5, (t2*) &_stringLiteral143, &m399_MI);
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
		t2* L_10 = m4485(NULL, (t2*) &_stringLiteral2102, L_8, (t2*) &_stringLiteral2103, L_9, &m4485_MI);
		t1932 * L_11 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_11, L_10, &m10130_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		t2* L_12 = (__this->f1);
		t126 * L_13 = V_0;
		t126 * L_14 = m9992(__this, L_12, L_13, &m9992_MI);
		V_2 = L_14;
		t126 * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		t221* L_16 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2104);
		*((t2**)(t2**)SZArrayLdElema(L_16, 0)) = (t2*)(t2*) &_stringLiteral2104;
		t221* L_17 = L_16;
		t2* L_18 = (__this->f1);
		ArrayElementTypeCheck (L_17, L_18);
		*((t2**)(t2**)SZArrayLdElema(L_17, 1)) = (t2*)L_18;
		t221* L_19 = L_17;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2105);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)(t2*) &_stringLiteral2105;
		t221* L_20 = L_19;
		t126 * L_21 = V_0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((t2**)(t2**)SZArrayLdElema(L_20, 3)) = (t2*)L_22;
		t221* L_23 = L_20;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral136);
		*((t2**)(t2**)SZArrayLdElema(L_23, 4)) = (t2*)(t2*) &_stringLiteral136;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_24 = m4335(NULL, L_23, &m4335_MI);
		t1932 * L_25 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_25, L_24, &m10130_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		t126 * L_26 = V_2;
		t2* L_27 = (__this->f2);
		t152* L_28 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t920 * L_29 = m10143(NULL, L_26, L_27, L_28, &m10143_MI);
		__this->f5 = L_29;
		t920 * L_30 = (__this->f5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		t158* L_31 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2106);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 0)) = (t9 *)(t2*) &_stringLiteral2106;
		t158* L_32 = L_31;
		t2* L_33 = (__this->f2);
		ArrayElementTypeCheck (L_32, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 1)) = (t9 *)L_33;
		t158* L_34 = L_32;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2107);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 2)) = (t9 *)(t2*) &_stringLiteral2107;
		t158* L_35 = L_34;
		t126 * L_36 = V_2;
		ArrayElementTypeCheck (L_35, L_36);
		*((t9 **)(t9 **)SZArrayLdElema(L_35, 3)) = (t9 *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_37 = m515(NULL, L_35, &m515_MI);
		t1932 * L_38 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_38, L_37, &m10130_MI);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_43 = V_0;
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_45 = V_0;
		t920 * L_46 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t920 * L_47 = m10133(NULL, L_45, L_46, &m10133_MI);
		__this->f5 = L_47;
		t920 * L_48 = (__this->f5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		t158* L_49 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2106);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 0)) = (t9 *)(t2*) &_stringLiteral2106;
		t158* L_50 = L_49;
		t2* L_51 = (__this->f2);
		ArrayElementTypeCheck (L_50, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_50, 1)) = (t9 *)L_51;
		t158* L_52 = L_50;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2107);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, 2)) = (t9 *)(t2*) &_stringLiteral2107;
		t158* L_53 = L_52;
		t126 * L_54 = V_0;
		ArrayElementTypeCheck (L_53, L_54);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 3)) = (t9 *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_55 = m515(NULL, L_53, &m515_MI);
		t1932 * L_56 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_56, L_55, &m10130_MI);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t920 * L_57 = m10142(NULL, __this, &m10142_MI);
		__this->f5 = L_57;
		t920 * L_58 = (__this->f5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		t2* L_59 = (__this->f2);
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9986_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_61 = m4485(NULL, (t2*) &_stringLiteral2106, L_59, (t2*) &_stringLiteral2107, L_60, &m4485_MI);
		t1932 * L_62 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_62, L_61, &m10130_MI);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		t920 * L_63 = (__this->f5);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9592_MI, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		t920 * L_65 = (__this->f5);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9590_MI, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		t152* L_67 = m9994(__this, &m9994_MI);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		t1932 * L_68 = (t1932 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1932_TI));
		m10130(L_68, (t2*) &_stringLiteral2108, &m10130_MI);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		t920 * L_69 = (__this->f5);
		t152* L_70 = m9994(__this, &m9994_MI);
		t835 * L_71 = (t835 *)VirtFuncInvoker1< t835 *, t152* >::Invoke(&m9596_MI, ((t835 *)Castclass(L_69, InitializedTypeInfo(&t835_TI))), L_70);
		__this->f5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
extern "C" t126 * m9992 (t1894 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	t126 * V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t2* L_0 = p0;
		t2* L_1 = m9993(NULL, L_0, &m9993_MI);
		p0 = L_1;
		t2* L_2 = p0;
		t126 * L_3 = p1;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_3);
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
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		t2* L_9 = p0;
		t126 * L_10 = V_0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_10);
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
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4472_MI, L_14);
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
		t152* L_18 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m12059_MI, L_17);
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
		t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4451_MI, L_24);
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
extern "C" t2* m9993 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_1 = m4323(L_0, (t2*) &_stringLiteral2109, &m4323_MI);
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
		int32_t L_5 = m4311(G_B3_2, G_B3_1, G_B3_0, &m4311_MI);
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
		t2* L_9 = m2779(L_7, 0, L_8, &m2779_MI);
		t2* L_10 = m4312(L_9, &m4312_MI);
		p0 = L_10;
	}

IL_0034:
	{
		t2* L_11 = p0;
		return L_11;
	}
}
extern "C" t152* m9994 (t1894 * __this, MethodInfo* method)
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
		t920 * L_2 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m9981_MI, __this);
		t152* L_3 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9589_MI, L_2);
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



extern "C" void m9995 (t1902 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m10003(__this, L_0, &m10003_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1902_TI));
		t221* L_1 = ((t1902_SFs*)InitializedTypeInfo(&t1902_TI)->static_fields)->f6;
		m10005(__this, L_1, &m10005_MI);
		return;
	}
}
extern MethodInfo m9996_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9996 (t9 * __this , MethodInfo* method)
{
	static bool m9996_init;
	if (!m9996_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9996_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 6));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2093);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2093;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2094);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2094;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2095);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2095;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2098;
		((t1902_SFs*)InitializedTypeInfo(&t1902_TI)->static_fields)->f6 = L_5;
		return;
	}
}
#include "t1904.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1904_TI;
#include "t1904MD.h"

extern MethodInfo m10000_MI;
extern MethodInfo m5756_MI;
extern MethodInfo m12040_MI;
extern MethodInfo m5799_MI;
extern MethodInfo m10008_MI;


extern MethodInfo m9997_MI;
extern "C" void m9997 (t1904 * __this, t1896 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1904 * G_B2_0 = {0};
	t1904 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1904 * G_B3_1 = {0};
	{
		m336(__this, &m336_MI);
		t1896 * L_0 = p0;
		__this->f0 = L_0;
		t1896 * L_1 = (__this->f0);
		t9 * L_2 = (L_1->f0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t1896 * L_3 = (__this->f0);
		t9 * L_4 = (L_3->f0);
		t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5752_MI, L_4);
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
extern MethodInfo m9998_MI;
extern "C" t9 * m9998 (t1904 * __this, MethodInfo* method)
{
	t1170  V_0 = {0};
	{
		t1170  L_0 = (t1170 )VirtFuncInvoker0< t1170  >::Invoke(&m10000_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8518((&V_0), &m8518_MI);
		return L_1;
	}
}
extern MethodInfo m9999_MI;
extern "C" bool m9999 (t1904 * __this, MethodInfo* method)
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
		t1896 * L_3 = (__this->f0);
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
		t1896 * L_6 = (__this->f0);
		t9 * L_7 = (__this->f1);
		t9 * L_8 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5799_MI, L_7);
		bool L_9 = m10008(L_6, ((t2*)Castclass(L_8, (&t2_TI))), &m10008_MI);
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
extern "C" t1170  m10000 (t1904 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		t1896 * L_1 = (__this->f0);
		t221* L_2 = (L_1->f2);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		t1896 * L_5 = (__this->f0);
		t1896 * L_6 = (__this->f0);
		t221* L_7 = (L_6->f2);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		t9 * L_10 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10011_MI, L_5, (*(t2**)(t2**)SZArrayLdElema(L_7, L_9)));
		t1170  L_11 = {0};
		m5756(&L_11, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), L_10, &m5756_MI);
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
		t1347 * L_14 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_14, (t2*) &_stringLiteral2112, &m5755_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t9 * L_15 = (__this->f1);
		t1170  L_16 = (t1170 )InterfaceFuncInvoker0< t1170  >::Invoke(&m12040_MI, L_15);
		return L_16;
	}
}
extern MethodInfo m10001_MI;
extern "C" t9 * m10001 (t1904 * __this, MethodInfo* method)
{
	t1170  V_0 = {0};
	{
		t1170  L_0 = (t1170 )VirtFuncInvoker0< t1170  >::Invoke(&m10000_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8517((&V_0), &m8517_MI);
		return L_1;
	}
}
extern MethodInfo m10002_MI;
extern "C" t9 * m10002 (t1904 * __this, MethodInfo* method)
{
	t1170  V_0 = {0};
	{
		t1170  L_0 = (t1170 )VirtFuncInvoker0< t1170  >::Invoke(&m10000_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8518((&V_0), &m8518_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1903_TI;
extern TypeInfo t1906_TI;
extern TypeInfo t2189_TI;
extern MethodInfo m5744_MI;
extern MethodInfo m10014_MI;
extern MethodInfo m10006_MI;
extern MethodInfo m12093_MI;
extern MethodInfo m12094_MI;
extern MethodInfo m12095_MI;
extern MethodInfo m12096_MI;
extern MethodInfo m12097_MI;
extern MethodInfo m12098_MI;
extern MethodInfo m12099_MI;
extern MethodInfo m12100_MI;
extern MethodInfo m12101_MI;
extern MethodInfo m5750_MI;
extern MethodInfo m5753_MI;
extern MethodInfo m10013_MI;
extern MethodInfo m5751_MI;


extern "C" void m10003 (t1896 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m10004_MI;
extern "C" t9 * m10004 (t1896 * __this, MethodInfo* method)
{
	{
		t1904 * L_0 = (t1904 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1904_TI));
		m9997(L_0, __this, &m9997_MI);
		return L_0;
	}
}
extern "C" void m10005 (t1896 * __this, t221* p0, MethodInfo* method)
{
	{
		t221* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t9 * m10006 (t1896 * __this, MethodInfo* method)
{
	{
		__this->f3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_0, &m5953_MI);
		return L_0;
	}
}
extern "C" t9 * m10007 (t1896 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10006_MI, __this);
		__this->f0 = L_1;
	}

IL_0014:
	{
		t9 * L_2 = (__this->f0);
		return L_2;
	}
}
extern "C" bool m10008 (t1896 * __this, t2* p0, MethodInfo* method)
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
extern MethodInfo m10009_MI;
extern "C" t9 * m10009 (t1896 * __this, t9 * p0, MethodInfo* method)
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
		t9 * L_7 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10011_MI, __this, L_6);
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
		t9 * L_14 = (t9 *)InterfaceFuncInvoker1< t9 *, t9 * >::Invoke(&m5744_MI, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
extern MethodInfo m10010_MI;
extern "C" void m10010 (t1896 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m10014_MI, __this, L_0, L_1);
		return;
	}
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" t9 * m10011 (t1896 * __this, t2* p0, MethodInfo* method)
{
	static bool m10011_init;
	if (!m10011_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m10011_init = true;
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
			goto IL_0120;
		}
	}
	{
		t727 * L_2 = ((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 8, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2093, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2094, 1);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2095, 2);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2096, 3);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2098, 4);
		t727 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_9, (t2*) &_stringLiteral2097, 5);
		t727 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_10, (t2*) &_stringLiteral2110, 6);
		t727 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_11, (t2*) &_stringLiteral2111, 7);
		t727 * L_12 = V_1;
		((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f4 = L_12;
	}

IL_007c:
	{
		t727 * L_13 = ((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f4;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_13, L_14, (&V_2));
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
		t2* L_18 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12093_MI, L_17);
		return L_18;
	}

IL_00c2:
	{
		t9 * L_19 = (__this->f1);
		t2* L_20 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12094_MI, L_19);
		return L_20;
	}

IL_00ce:
	{
		t9 * L_21 = (__this->f1);
		t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12095_MI, L_21);
		return L_22;
	}

IL_00da:
	{
		t9 * L_23 = (__this->f1);
		t9 * L_24 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12096_MI, L_23);
		return L_24;
	}

IL_00e6:
	{
		t9 * L_25 = (__this->f1);
		t1899 * L_26 = (t1899 *)InterfaceFuncInvoker0< t1899 * >::Invoke(&m12097_MI, L_25);
		return L_26;
	}

IL_00f2:
	{
		t9 * L_27 = (__this->f1);
		t158* L_28 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12098_MI, L_27);
		return (t9 *)L_28;
	}

IL_00fe:
	{
		t9 * L_29 = (__this->f1);
		t158* L_30 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12099_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t1906_TI))));
		return (t9 *)L_30;
	}

IL_010f:
	{
		t9 * L_31 = (__this->f1);
		t9 * L_32 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12100_MI, ((t9 *)Castclass(L_31, InitializedTypeInfo(&t1906_TI))));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m10012 (t1896 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m10012_init;
	if (!m10012_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m10012_init = true;
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
			goto IL_00c2;
		}
	}
	{
		t727 * L_2 = ((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t727 * L_3 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_3, 8, m5817_MI_var);
		V_1 = L_3;
		t727 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_4, (t2*) &_stringLiteral2098, 0);
		t727 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_5, (t2*) &_stringLiteral2110, 0);
		t727 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_6, (t2*) &_stringLiteral2111, 0);
		t727 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral2094, 1);
		t727 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2095, 1);
		t727 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_9, (t2*) &_stringLiteral2096, 1);
		t727 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_10, (t2*) &_stringLiteral2097, 1);
		t727 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_11, (t2*) &_stringLiteral2093, 2);
		t727 * L_12 = V_1;
		((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f5 = L_12;
	}

IL_007c:
	{
		t727 * L_13 = ((t1896_SFs*)InitializedTypeInfo(&t1896_TI)->static_fields)->f5;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_13, L_14, (&V_2));
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
		t570 * L_17 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_17, (t2*) &_stringLiteral2099, &m2949_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t9 * L_18 = (__this->f1);
		t9 * L_19 = p1;
		InterfaceActionInvoker1< t2* >::Invoke(&m12101_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t2189_TI))), ((t2*)Castclass(L_19, (&t2_TI))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
extern "C" t9 * m10013 (t1896 * __this, MethodInfo* method)
{
	t1176 * V_0 = {0};
	int32_t V_1 = 0;
	t1170  V_2 = {0};
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		t1176 * L_1 = V_0;
		t221* L_2 = (__this->f2);
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10011_MI, __this, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)));
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_1, L_5);
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
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5752_MI, L_10);
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
			V_2 = ((*(t1170 *)((t1170 *)UnBox (L_13, InitializedTypeInfo(&t1170_TI)))));
			t9 * L_14 = m8517((&V_2), &m8517_MI);
			bool L_15 = m10008(__this, ((t2*)Castclass(L_14, (&t2_TI))), &m10008_MI);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			t1176 * L_16 = V_0;
			t9 * L_17 = m8518((&V_2), &m8518_MI);
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5779_MI, L_16, L_17);
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
		t1176 * L_23 = V_0;
		return L_23;
	}
}
extern "C" void m10014 (t1896 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m10012_MI, __this, L_6, L_7);
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
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10006_MI, __this);
		__this->f0 = L_12;
	}

IL_0047:
	{
		t9 * L_13 = (__this->f0);
		t9 * L_14 = p0;
		t9 * L_15 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5745_MI, L_13, L_14, L_15);
		return;
	}
}
extern MethodInfo m10015_MI;
extern "C" bool m10015 (t1896 * __this, t9 * p0, MethodInfo* method)
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
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m5750_MI, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
extern MethodInfo m10016_MI;
extern "C" void m10016 (t1896 * __this, t9 * p0, MethodInfo* method)
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
		t570 * L_6 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_6, (t2*) &_stringLiteral2099, &m2949_MI);
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
		InterfaceActionInvoker1< t9 * >::Invoke(&m5753_MI, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
extern MethodInfo m10017_MI;
extern "C" int32_t m10017 (t1896 * __this, MethodInfo* method)
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5743_MI, L_1);
		t221* L_3 = (__this->f2);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((t121 *)L_3)->max_length)))));
	}

IL_001d:
	{
		t221* L_4 = (__this->f2);
		return (((int32_t)(((t121 *)L_4)->max_length)));
	}
}
extern MethodInfo m10018_MI;
extern "C" bool m10018 (t1896 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m10019_MI;
extern "C" t9 * m10019 (t1896 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m10020_MI;
extern "C" void m10020 (t1896 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10013_MI, __this);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5751_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m10021_MI;
extern "C" t9 * m10021 (t1896 * __this, MethodInfo* method)
{
	{
		t1904 * L_0 = (t1904 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1904_TI));
		m9997(L_0, __this, &m9997_MI);
		return L_0;
	}
}
#include "t1905.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1905_TI;
#include "t1905MD.h"

extern TypeInfo t138_TI;
extern MethodInfo m12102_MI;


extern MethodInfo m10022_MI;
extern "C" void m10022 (t1905 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m10003(__this, L_0, &m10003_MI);
		t9 * L_1 = p0;
		t138 * L_2 = (t138 *)InterfaceFuncInvoker0< t138 * >::Invoke(&m12102_MI, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1905_TI));
		t221* L_3 = ((t1905_SFs*)InitializedTypeInfo(&t1905_TI)->static_fields)->f6;
		m10005(__this, L_3, &m10005_MI);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1905_TI));
		t221* L_4 = ((t1905_SFs*)InitializedTypeInfo(&t1905_TI)->static_fields)->f7;
		m10005(__this, L_4, &m10005_MI);
	}

IL_0027:
	{
		return;
	}
}
extern MethodInfo m10023_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m10023 (t9 * __this , MethodInfo* method)
{
	static bool m10023_init;
	if (!m10023_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m10023_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2093);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2093;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2094);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2094;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2095);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2095;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2096;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2110);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2110;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2111);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2111;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2098;
		((t1905_SFs*)InitializedTypeInfo(&t1905_TI)->static_fields)->f6 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral2098;
		((t1905_SFs*)InitializedTypeInfo(&t1905_TI)->static_fields)->f7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1891_TI;
#include "t1891MD.h"

#include "t1907.h"
#include "t1767.h"
extern TypeInfo t1767_TI;
#include "t1767MD.h"
extern MethodInfo m10039_MI;
extern MethodInfo m9677_MI;
extern MethodInfo m9669_MI;
extern MethodInfo m9676_MI;
extern MethodInfo m10036_MI;
extern MethodInfo m10147_MI;


extern MethodInfo m10024_MI;
extern "C" t9 * m10024 (t1891 * __this, MethodInfo* method)
{
	{
		t1902 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1902_TI));
		t1902 * L_1 = (t1902 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1902_TI));
		m9995(L_1, __this, &m9995_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1902 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m10025_MI;
extern "C" int32_t m10025 (t1891 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m10039(__this, &m10039_MI);
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
extern MethodInfo m10026_MI;
extern "C" t158* m10026 (t1891 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10027_MI;
extern "C" t1899 * m10027 (t1891 * __this, MethodInfo* method)
{
	{
		t1899 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10028_MI;
extern "C" t920 * m10028 (t1891 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10029_MI;
extern "C" t2* m10029 (t1891 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f0);
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
		t1767 * L_2 = (__this->f0);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9677_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m10030_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m10030 (t1891 * __this, MethodInfo* method)
{
	static bool m10030_init;
	if (!m10030_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m10030_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		t1767 * L_1 = (__this->f0);
		t934* L_2 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m9669_MI, L_1);
		V_0 = L_2;
		t934* L_3 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		t152* L_4 = (__this->f9);
		int32_t L_5 = V_1;
		t934* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_6, L_8)));
		ArrayElementTypeCheck (L_4, L_9);
		*((t126 **)(t126 **)SZArrayLdElema(L_4, L_5)) = (t126 *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		t934* L_12 = V_0;
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
extern MethodInfo m10031_MI;
extern "C" t2* m10031 (t1891 * __this, MethodInfo* method)
{
	{
		t1767 * L_0 = (__this->f0);
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
		t1767 * L_2 = (__this->f0);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9676_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_3);
		return L_4;
	}
}
extern MethodInfo m10032_MI;
extern "C" t2* m10032 (t1891 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m10033_MI;
extern "C" void m10033 (t1891 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m10034_MI;
extern "C" t9 * m10034 (t1891 * __this, int32_t p0, MethodInfo* method)
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
extern MethodInfo m10035_MI;
extern "C" t138 * m10035 (t1891 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" int32_t m10036 (t1891 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	t737* V_2 = {0};
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
		t737* L_1 = (__this->f2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		t737* L_2 = V_2;
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
		t737* L_9 = V_2;
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
extern MethodInfo m10037_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m10037 (t1891 * __this, MethodInfo* method)
{
	static bool m10037_init;
	if (!m10037_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m10037_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t158* V_3 = {0};
	uint8_t V_4 = 0x0;
	t737* V_5 = {0};
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
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m10036_MI, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		t737* L_4 = (__this->f2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		t737* L_5 = V_5;
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
		t737* L_18 = V_5;
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
extern MethodInfo m10038_MI;
extern "C" t9 * m10038 (t1891 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m10039 (t1891 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		t1767 * L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		bool L_2 = m10147(NULL, L_1, &m10147_MI);
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
extern TypeInfo t1907_TI;
#include "t1907MD.h"



#include "t1908.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1908_TI;
#include "t1908MD.h"



#include "t1909.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1909_TI;
#include "t1909MD.h"

#include "t1917.h"
extern TypeInfo t1917_TI;
#include "t1917MD.h"
extern MethodInfo m11185_MI;
extern MethodInfo m10134_MI;
extern MethodInfo m10141_MI;
extern MethodInfo m10076_MI;
extern MethodInfo m10145_MI;


extern MethodInfo m10040_MI;
extern "C" void m10040 (t1909 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m10041_MI;
extern "C" void m10041 (t1909 * __this, t9 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	t1917 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1106 * L_1 = p1;
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
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		bool L_4 = m10134(NULL, L_3, &m10134_MI);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t1917 * L_6 = m10141(NULL, L_5, &m10141_MI);
		V_0 = L_6;
		t1917 * L_7 = V_0;
		t1106 * L_8 = p1;
		t1107  L_9 = p2;
		VirtActionInvoker2< t1106 *, t1107  >::Invoke(&m10076_MI, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		t9 * L_10 = p0;
		t1106 * L_11 = p1;
		t1107  L_12 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		m10145(NULL, L_10, L_11, L_12, &m10145_MI);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m10042_MI;
extern "C" t9 * m10042 (t1909 * __this, t9 * p0, t1106 * p1, t1107  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1911.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1911_TI;
#include "t1911MD.h"

#include "t1596.h"
extern TypeInfo t1596_TI;
#include "t1596MD.h"
extern MethodInfo m10121_MI;
extern MethodInfo m5772_MI;


extern MethodInfo m10043_MI;
extern "C" void m10043 (t1911 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m10044_MI;
extern "C" void m10044 (t1911 * __this, t9 * p0, t1106 * p1, t1107  p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1106 * L_1 = p1;
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
		t9 * L_3 = p0;
		t1106 * L_4 = p1;
		t1107  L_5 = p2;
		VirtActionInvoker2< t1106 *, t1107  >::Invoke(&m10121_MI, ((t1596 *)Castclass(L_3, InitializedTypeInfo(&t1596_TI))), L_4, L_5);
		t1106 * L_6 = p1;
		m5772(L_6, (t2*) &_stringLiteral2113, 0, &m5772_MI);
		return;
	}
}
extern MethodInfo m10045_MI;
extern "C" t9 * m10045 (t1911 * __this, t9 * p0, t1106 * p1, t1107  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_0, (t2*) &_stringLiteral2114, &m5776_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1912.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1912_TI;
#include "t1912MD.h"

extern TypeInfo t1910_TI;
extern TypeInfo t1913_TI;
extern Il2CppType t1596_0_0_0;
extern MethodInfo m7799_MI;
extern MethodInfo m4515_MI;
extern MethodInfo m12103_MI;


extern MethodInfo m10046_MI;
extern "C" void m10046 (t1912 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m10047_MI;
extern "C" void m10047 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1596_0_0_0), &m329_MI);
		((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f0 = L_0;
		t1911 * L_1 = (t1911 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1911_TI));
		m10043(L_1, &m10043_MI);
		((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f1 = L_1;
		t1909 * L_2 = (t1909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1909_TI));
		m10040(L_2, &m10040_MI);
		((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m10048_MI;
extern "C" t9 * m10048 (t1912 * __this, t126 * p0, t1107  p1, t9 ** p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7799_MI, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t9 ** L_2 = p2;
		*((t9 **)(L_2)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1912_TI));
		t1909 * L_3 = ((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1912_TI));
		t126 * L_4 = ((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f0;
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4515_MI, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		t9 ** L_7 = p2;
		*((t9 **)(L_7)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1912_TI));
		t1911 * L_8 = ((t1912_SFs*)InitializedTypeInfo(&t1912_TI)->static_fields)->f1;
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
		t1107  L_12 = p1;
		t9 ** L_13 = p2;
		t9 * L_14 = (t9 *)InterfaceFuncInvoker3< t9 *, t126 *, t1107 , t9 ** >::Invoke(&m12103_MI, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		t9 ** L_15 = p2;
		*((t9 **)(L_15)) = (t9 *)NULL;
		return (t9 *)NULL;
	}
}
#include "t1914.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1914_TI;
#include "t1914MD.h"

extern MethodInfo m10061_MI;
extern MethodInfo m10055_MI;
extern MethodInfo m12104_MI;


extern MethodInfo m10049_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m10049 (t1914 * __this, t9 * p0, t158* p1, int32_t p2, t1899 * p3, t9 * p4, MethodInfo* method)
{
	static bool m10049_init;
	if (!m10049_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m10049_init = true;
	}
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f4 = L_0;
		t158* L_1 = p1;
		__this->f1 = L_1;
		int32_t L_2 = p2;
		__this->f2 = L_2;
		t1899 * L_3 = p3;
		__this->f3 = L_3;
		t9 * L_4 = p4;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_5 = p4;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12093_MI, L_5);
		__this->f5 = L_6;
		t9 * L_7 = p4;
		t920 * L_8 = (t920 *)InterfaceFuncInvoker0< t920 * >::Invoke(&m12104_MI, L_7);
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
extern MethodInfo m10050_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m10050 (t1914 * __this, t138 * p0, t9 * p1, MethodInfo* method)
{
	static bool m10050_init;
	if (!m10050_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m10050_init = true;
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
		t920 * L_3 = (t920 *)InterfaceFuncInvoker0< t920 * >::Invoke(&m12104_MI, L_2);
		__this->f7 = L_3;
		t9 * L_4 = p1;
		t1899 * L_5 = (t1899 *)InterfaceFuncInvoker0< t1899 * >::Invoke(&m12097_MI, L_4);
		__this->f3 = L_5;
	}

IL_0028:
	{
		__this->f1 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern MethodInfo m10051_MI;
extern "C" void m10051 (t1914 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m10061_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m10052_MI;
extern "C" int32_t m10052 (t1914 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m10053_MI;
extern "C" t158* m10053 (t1914 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10054_MI;
extern "C" t1899 * m10054 (t1914 * __this, MethodInfo* method)
{
	{
		t1899 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1899 * L_1 = (t1899 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1899_TI));
		m9966(L_1, &m9966_MI);
		__this->f3 = L_1;
	}

IL_0013:
	{
		t1899 * L_2 = (__this->f3);
		return L_2;
	}
}
extern "C" t920 * m10055 (t1914 * __this, MethodInfo* method)
{
	{
		t920 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m10056_MI;
extern "C" t2* m10056 (t1914 * __this, MethodInfo* method)
{
	{
		t920 * L_0 = (__this->f7);
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
		t920 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4433_MI, L_2);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t2* L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m10057_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m10057 (t1914 * __this, MethodInfo* method)
{
	static bool m10057_init;
	if (!m10057_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m10057_init = true;
	}
	t934* V_0 = {0};
	int32_t V_1 = 0;
	{
		t920 * L_0 = (__this->f7);
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
		t920 * L_2 = (__this->f7);
		t934* L_3 = (t934*)VirtFuncInvoker0< t934* >::Invoke(&m4465_MI, L_2);
		V_0 = L_3;
		t934* L_4 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f9);
		int32_t L_6 = V_1;
		t934* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4466_MI, (*(t930 **)(t930 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t934* L_13 = V_0;
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
extern MethodInfo m10058_MI;
extern "C" t9 * m10058 (t1914 * __this, MethodInfo* method)
{
	{
		t1905 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1905_TI));
		t1905 * L_1 = (t1905 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1905_TI));
		m10022(L_1, __this, &m10022_MI);
		__this->f11 = L_1;
	}

IL_0014:
	{
		t1905 * L_2 = (__this->f11);
		return L_2;
	}
}
extern MethodInfo m10059_MI;
extern "C" t2* m10059 (t1914 * __this, MethodInfo* method)
{
	{
		t920 * L_0 = (__this->f7);
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
		t920 * L_2 = (__this->f7);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4494_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_3);
		__this->f10 = L_4;
	}

IL_0026:
	{
		t2* L_5 = (__this->f10);
		return L_5;
	}
}
extern MethodInfo m10060_MI;
extern "C" t2* m10060 (t1914 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m10061 (t1914 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m10062_MI;
extern "C" t9 * m10062 (t1914 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern MethodInfo m10063_MI;
extern "C" t138 * m10063 (t1914 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m10064_MI;
extern "C" int32_t m10064 (t1914 * __this, MethodInfo* method)
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
		t1888 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		t920 * L_3 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m10055_MI, __this);
		t1888 * L_4 = (t1888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1888_TI));
		m9923(L_4, L_3, 1, &m9923_MI);
		__this->f12 = L_4;
	}

IL_002e:
	{
		t1888 * L_5 = (__this->f12);
		int32_t L_6 = m9924(L_5, &m9924_MI);
		return L_6;
	}
}
extern MethodInfo m10065_MI;
extern "C" t158* m10065 (t1914 * __this, MethodInfo* method)
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
		t1888 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		t920 * L_3 = (t920 *)VirtFuncInvoker0< t920 * >::Invoke(&m10055_MI, __this);
		t1888 * L_4 = (t1888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1888_TI));
		m9923(L_4, L_3, 1, &m9923_MI);
		__this->f12 = L_4;
	}

IL_002a:
	{
		t1888 * L_5 = (__this->f12);
		t158* L_6 = (__this->f1);
		t158* L_7 = m9925(L_5, L_6, &m9925_MI);
		__this->f0 = L_7;
	}

IL_0041:
	{
		t158* L_8 = (__this->f0);
		return L_8;
	}
}
extern MethodInfo m10066_MI;
extern "C" t9 * m10066 (t1914 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
#include "t1916.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1916_TI;
#include "t1916MD.h"

#include "t1921.h"
extern TypeInfo t1921_TI;
#include "t1921MD.h"
extern MethodInfo m10083_MI;
extern MethodInfo m10080_MI;
extern MethodInfo m10156_MI;


extern MethodInfo m10067_MI;
extern "C" t1215 * m10067 (t1916 * __this, t126 * p0, MethodInfo* method)
{
	t1921 * V_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1869_TI));
		t2* L_1 = ((t1869_SFs*)InitializedTypeInfo(&t1869_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1921_TI));
		t1921 * L_2 = (t1921 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1921_TI));
		m10083(L_2, L_0, L_1, (t158*)(t158*)NULL, &m10083_MI);
		V_0 = L_2;
		t1921 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10080_MI, L_3);
		return ((t1215 *)Castclass(L_4, InitializedTypeInfo(&t1215_TI)));
	}
}
extern MethodInfo m10068_MI;
extern "C" t1917 * m10068 (t1916 * __this, t1596 * p0, t126 * p1, t9 * p2, t1867 * p3, MethodInfo* method)
{
	{
		t1596 * L_0 = p0;
		t126 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t9 * L_2 = m10156(NULL, L_0, L_1, &m10156_MI);
		t1917 * L_3 = m10141(NULL, L_2, &m10141_MI);
		return L_3;
	}
}
extern MethodInfo m10069_MI;
extern "C" void m10069 (t1916 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m10070_MI;
extern "C" bool m10070 (t1916 * __this, t1867 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1918.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1918_TI;
#include "t1918MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1919.h"
#include "t1920.h"
extern TypeInfo t58_TI;
extern TypeInfo t1929_TI;
#include "t58MD.h"
extern Il2CppType t1215_0_0_0;
extern MethodInfo m10073_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m10074_MI;
extern MethodInfo m12105_MI;
extern MethodInfo m10079_MI;


extern MethodInfo m10071_MI;
extern "C" void m10071 (t1917 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10073(__this, L_0, L_1, NULL, &m10073_MI);
		return;
	}
}
extern MethodInfo m10072_MI;
extern "C" void m10072 (t1917 * __this, t126 * p0, t1920 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10073(__this, L_0, L_1, NULL, &m10073_MI);
		t1920 * L_2 = p1;
		__this->f3 = L_2;
		return;
	}
}
extern "C" void m10073 (t1917 * __this, t126 * p0, t58 p1, t9 * p2, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7799_MI, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral2115, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		t126 * L_5 = p0;
		__this->f0 = L_5;
		t58 L_6 = p1;
		t58 L_7 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_8 = m4346(NULL, L_6, L_7, &m4346_MI);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5776(L_9, (t2*) &_stringLiteral2116, &m5776_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C" t126 * m10074 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef t126 * (*m10074_ftn) (t9 *);
	static m10074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10074_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m10075_MI;
extern "C" t126 * m10075 (t1917 * __this, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7798_MI, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1215_0_0_0), &m329_MI);
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
		t126 * L_6 = m10074(NULL, L_5, &m10074_MI);
		return L_6;
	}
}
extern "C" void m10076 (t1917 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10080_MI, __this);
		V_0 = L_0;
		t9 * L_1 = V_0;
		t1106 * L_2 = p0;
		t1107  L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		m10145(NULL, L_1, L_2, L_3, &m10145_MI);
		return;
	}
}
extern MethodInfo m10077_MI;
extern "C" t1919 * m10077 (t1917 * __this, MethodInfo* method)
{
	{
		t1919 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10078_MI;
extern "C" void m10078 (t1917 * __this, t1919 * p0, MethodInfo* method)
{
	{
		t1919 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10079 (t1917 * __this, t2* p0, MethodInfo* method)
{
	typedef t9 * (*m10079_ftn) (t1917 *, t2*);
	static m10079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10079_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t9 * m10080 (t1917 * __this, MethodInfo* method)
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
		V_1 = ((t9 *)IsInst(__this, InitializedTypeInfo(&t1929_TI)));
		t9 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_2 = V_1;
		t2* L_3 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12105_MI, L_2);
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
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1215_0_0_0), &m329_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_6);
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
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		t126 * L_11 = (__this->f0);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		t2* L_13 = V_0;
		t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10079_MI, __this, L_13);
		__this->f4 = L_14;
	}

IL_005a:
	{
		t9 * L_15 = (__this->f4);
		return L_15;
	}
}
extern MethodInfo m10081_MI;
extern "C" void m10081 (t1917 * __this, int32_t p0, MethodInfo* method)
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

#include "t1934.h"
extern TypeInfo t1920_TI;
extern TypeInfo t1919_TI;
extern TypeInfo t1934_TI;
#include "t1919MD.h"
#include "t1920MD.h"
extern Il2CppType t9_0_0_0;
extern MethodInfo m12106_MI;
extern MethodInfo m10117_MI;
extern MethodInfo m10098_MI;
extern MethodInfo m10109_MI;
extern MethodInfo m7823_MI;
extern MethodInfo m10159_MI;


extern MethodInfo m10082_MI;
extern "C" void m10082 (t1921 * __this, t126 * p0, t1920 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1920 * L_1 = p1;
		m10072(__this, L_0, L_1, &m10072_MI);
		t1920 * L_2 = p1;
		t9 * L_3 = m10098(L_2, &m10098_MI);
		__this->f7 = L_3;
		__this->f8 = 0;
		t1920 * L_4 = p1;
		t2* L_5 = m10109(L_4, &m10109_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m10083 (t1921 * __this, t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		m10071(__this, L_0, &m10071_MI);
		__this->f8 = 0;
		t126 * L_1 = p0;
		t2* L_2 = p1;
		t158* L_3 = p2;
		t1859 * L_4 = m9847(NULL, L_1, L_2, L_3, &m9847_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m10084_MI;
extern "C" void m10084 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t835 * L_1 = (t835 *)VirtFuncInvoker1< t835 *, t2* >::Invoke(&m7823_MI, L_0, (t2*) &_stringLiteral2117);
		((t1921_SFs*)InitializedTypeInfo(&t1921_TI)->static_fields)->f5 = L_1;
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t835 * L_3 = (t835 *)VirtFuncInvoker1< t835 *, t2* >::Invoke(&m7823_MI, L_2, (t2*) &_stringLiteral2118);
		((t1921_SFs*)InitializedTypeInfo(&t1921_TI)->static_fields)->f6 = L_3;
		return;
	}
}
extern MethodInfo m10085_MI;
extern "C" t2* m10085 (t1921 * __this, MethodInfo* method)
{
	t1596 * V_0 = {0};
	{
		t1919 * L_0 = (__this->f3);
		if (!((t1920 *)IsInst(L_0, InitializedTypeInfo(&t1920_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t1919 * L_1 = (__this->f3);
		t1596 * L_2 = (t1596 *)VirtFuncInvoker1< t1596 *, t126 * >::Invoke(&m12106_MI, L_1, (t126 *)NULL);
		V_0 = L_2;
		t1596 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10117_MI, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t1596 * L_5 = V_0;
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10117_MI, L_5);
		t2* L_7 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12105_MI, L_6);
		return L_7;
	}

IL_002e:
	{
		t126 * L_8 = m10075(__this, &m10075_MI);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4531_MI, L_8);
		return L_9;
	}
}
extern MethodInfo m10086_MI;
extern "C" void m10086 (t1921 * __this, MethodInfo* method)
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
			t1919 * L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			t1919 * L_1 = (__this->f3);
			if (((t1934 *)IsInst(L_1, InitializedTypeInfo(&t1934_TI))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			t1919 * L_2 = (__this->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
			m10159(NULL, L_2, &m10159_MI);
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
#include "t1922.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1922_TI;
#include "t1922MD.h"

extern TypeInfo t2190_TI;
extern TypeInfo t2191_TI;
extern Il2CppType t2191_0_0_0;
extern Il2CppType t2190_0_0_0;
extern MethodInfo m5899_MI;
extern MethodInfo m12107_MI;
extern MethodInfo m12108_MI;
extern MethodInfo m12109_MI;


extern MethodInfo m10087_MI;
extern "C" void m10087 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1176_TI));
		t1176 * L_0 = (t1176 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1176_TI));
		m5768(L_0, &m5768_MI);
		((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m10088_MI;
extern TypeInfo* t2190_TI_var;
extern "C" void m10088 (t9 * __this , t9 * p0, t1596 * p1, MethodInfo* method)
{
	static bool m10088_init;
	if (!m10088_init)
	{
		t2190_TI_var = il2cpp_codegen_class_from_type(&t2190_0_0_0);
		m10088_init = true;
	}
	t2190* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
		t1176 * L_0 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_3 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_5 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2191_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_5, L_6);
			V_0 = ((t2190*)Castclass(L_7, t2190_TI_var));
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
		m1117(NULL, L_8, &m1117_MI);
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
		t2190* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1596 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1596 * >::Invoke(&m12107_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2190* L_16 = V_0;
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
extern MethodInfo m10089_MI;
extern TypeInfo* t2190_TI_var;
extern "C" void m10089 (t9 * __this , t9 * p0, t1596 * p1, MethodInfo* method)
{
	static bool m10089_init;
	if (!m10089_init)
	{
		t2190_TI_var = il2cpp_codegen_class_from_type(&t2190_0_0_0);
		m10089_init = true;
	}
	t2190* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
		t1176 * L_0 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_3 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_5 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2191_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_5, L_6);
			V_0 = ((t2190*)Castclass(L_7, t2190_TI_var));
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
		m1117(NULL, L_8, &m1117_MI);
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
		t2190* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1596 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1596 * >::Invoke(&m12108_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2190* L_16 = V_0;
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
extern MethodInfo m10090_MI;
extern TypeInfo* t2190_TI_var;
extern "C" void m10090 (t9 * __this , t9 * p0, MethodInfo* method)
{
	static bool m10090_init;
	if (!m10090_init)
	{
		t2190_TI_var = il2cpp_codegen_class_from_type(&t2190_0_0_0);
		m10090_init = true;
	}
	t2190* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
		t1176 * L_0 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5918_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1115(NULL, L_2, &m1115_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_3 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5764_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1922_TI));
			t1176 * L_5 = ((t1922_SFs*)InitializedTypeInfo(&t1922_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2191_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5899_MI, L_5, L_6);
			V_0 = ((t2190*)Castclass(L_7, t2190_TI_var));
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
		m1117(NULL, L_8, &m1117_MI);
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
		t2190* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		InterfaceActionInvoker1< t9 * >::Invoke(&m12109_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		t2190* L_15 = V_0;
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
extern TypeInfo t1923_TI;
#include "t1923MD.h"

#include "t1924MD.h"
extern MethodInfo m10175_MI;
extern MethodInfo m10174_MI;
extern MethodInfo m10091_MI;


extern "C" t2* m10091 (t1923 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10092_MI;
extern "C" t1925* m10092 (t1923 * __this, MethodInfo* method)
{
	{
		return (t1925*)NULL;
	}
}
extern MethodInfo m10093_MI;
extern "C" t126 * m10093 (t1923 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10094_MI;
extern "C" t2* m10094 (t1923 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m10175(__this, &m10175_MI);
		t2* L_1 = m10174(__this, &m10174_MI);
		t2* L_2 = m10091(__this, &m10091_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, L_1, L_2, &m399_MI);
		return L_3;
	}
}
#include "t1926.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1926_TI;
#include "t1926MD.h"



extern MethodInfo m10095_MI;
extern "C" void m10095 (t1926 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10096_MI;
extern "C" t9 * m10096 (t1926 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m10097_MI;
extern "C" void m10097 (t1919 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t9 * m10098 (t1919 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10099_MI;
extern "C" void m10099 (t1919 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m10100_MI;
extern "C" t2* m10100 (t1919 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10101_MI;
extern "C" void m10101 (t1919 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10102_MI;
extern "C" bool m10102 (t1919 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return ((((int32_t)((((t9*)(t2*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10103_MI;
extern "C" bool m10103 (t1919 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m10104_MI;
extern "C" void m10104 (t1919 * __this, bool p0, MethodInfo* method)
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

#include "t1927.h"
extern TypeInfo t1927_TI;
extern TypeInfo t1930_TI;
#include "t1927MD.h"
extern MethodInfo m11943_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m10119_MI;
extern MethodInfo m10115_MI;
extern MethodInfo m12110_MI;


extern MethodInfo m10105_MI;
extern "C" void m10105 (t1920 * __this, t2* p0, t1596 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1920 * G_B2_0 = {0};
	t1920 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1920 * G_B3_1 = {0};
	{
		t2* L_0 = p0;
		m10097(__this, L_0, &m10097_MI);
		t1596 * L_1 = p1;
		__this->f3 = L_1;
		t1596 * L_2 = (__this->f3);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10115_MI, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		t1596 * L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10115_MI, L_4);
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12110_MI, L_5);
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
extern MethodInfo m10106_MI;
extern "C" t1215 * m10106 (t1920 * __this, MethodInfo* method)
{
	{
		t1927 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11943_MI, L_0);
		return ((t1215 *)Castclass(L_1, InitializedTypeInfo(&t1215_TI)));
	}
}
extern MethodInfo m10107_MI;
extern "C" void m10107 (t1920 * __this, t1215 * p0, MethodInfo* method)
{
	{
		t1215 * L_0 = p0;
		t1927 * L_1 = (t1927 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1927_TI));
		m11939(L_1, L_0, &m11939_MI);
		__this->f5 = L_1;
		return;
	}
}
extern MethodInfo m10108_MI;
extern "C" t1596 * m10108 (t1920 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1596 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t2* m10109 (t1920 * __this, MethodInfo* method)
{
	{
		t1596 * L_0 = (__this->f3);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m10119_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1928_TI;
extern TypeInfo t184_TI;
extern TypeInfo t912_TI;
extern TypeInfo t305_TI;
#include "t305MD.h"
extern Il2CppType t1929_0_0_0;
extern Il2CppType t1930_0_0_0;
extern Il2CppType t1928_0_0_0;
extern MethodInfo m10123_MI;
extern MethodInfo m10378_MI;
extern MethodInfo m10380_MI;
extern MethodInfo m12015_MI;
extern MethodInfo m4355_MI;
extern MethodInfo m10368_MI;
extern MethodInfo m10136_MI;


extern MethodInfo m10110_MI;
extern "C" void m10110 (t1596 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m10123(__this, &m10123_MI);
		return;
	}
}
extern MethodInfo m10111_MI;
extern TypeInfo* t727_TI_var;
extern MethodInfo* m5817_MI_var;
extern MethodInfo* m5818_MI_var;
extern MethodInfo* m5819_MI_var;
extern "C" void m10111 (t1596 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	static bool m10111_init;
	if (!m10111_init)
	{
		t727_TI_var = il2cpp_codegen_class_from_type(&t727_0_0_0);
		m5817_MI_var = il2cpp_codegen_genericmethod_get_method(&m5817_GM);
		m5818_MI_var = il2cpp_codegen_genericmethod_get_method(&m5818_GM);
		m5819_MI_var = il2cpp_codegen_genericmethod_get_method(&m5819_GM);
		m10111_init = true;
	}
	t1982 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t9 * V_3 = {0};
	t2* V_4 = {0};
	t727 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m336(__this, &m336_MI);
		t1106 * L_0 = p0;
		t1982 * L_1 = m10369(L_0, &m10369_MI);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		t1982 * L_2 = V_0;
		t2* L_3 = m10378(L_2, &m10378_MI);
		V_4 = L_3;
		t2* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		t727 * L_5 = ((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		t727 * L_6 = (t727 *)il2cpp_codegen_object_new (t727_TI_var);
		m5817(L_6, 6, m5817_MI_var);
		V_5 = L_6;
		t727 * L_7 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_7, (t2*) &_stringLiteral434, 0);
		t727 * L_8 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_8, (t2*) &_stringLiteral2119, 1);
		t727 * L_9 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_9, (t2*) &_stringLiteral2120, 2);
		t727 * L_10 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_10, (t2*) &_stringLiteral2121, 3);
		t727 * L_11 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_11, (t2*) &_stringLiteral2113, 4);
		t727 * L_12 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5818_MI_var, L_12, (t2*) &_stringLiteral2122, 5);
		t727 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		t727 * L_14 = ((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f8;
		t2* L_15 = V_4;
		bool L_16 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5819_MI_var, L_14, L_15, (&V_6));
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
		t1982 * L_18 = V_0;
		t9 * L_19 = m10380(L_18, &m10380_MI);
		__this->f1 = ((t2*)Castclass(L_19, (&t2_TI)));
		goto IL_0155;
	}

IL_00d4:
	{
		t1982 * L_20 = V_0;
		t9 * L_21 = m10380(L_20, &m10380_MI);
		__this->f2 = ((t9 *)Castclass(L_21, InitializedTypeInfo(&t1929_TI)));
		goto IL_0155;
	}

IL_00ea:
	{
		t1982 * L_22 = V_0;
		t9 * L_23 = m10380(L_22, &m10380_MI);
		__this->f0 = ((t9 *)Castclass(L_23, InitializedTypeInfo(&t1928_TI)));
		goto IL_0155;
	}

IL_00fd:
	{
		t1982 * L_24 = V_0;
		t9 * L_25 = m10380(L_24, &m10380_MI);
		__this->f3 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t1930_TI)));
		goto IL_0155;
	}

IL_0110:
	{
		t1982 * L_26 = V_0;
		t9 * L_27 = m10380(L_26, &m10380_MI);
		V_3 = L_27;
		t9 * L_28 = V_3;
		if (!((t2*)IsInst(L_28, (&t2_TI))))
		{
			goto IL_012e;
		}
	}
	{
		t9 * L_29 = V_3;
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m12015_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t184_TI))), (t9 *)NULL);
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
		t1982 * L_33 = V_0;
		t9 * L_34 = m10380(L_33, &m10380_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int32_t L_35 = m4355(NULL, L_34, &m4355_MI);
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
		t1982 * L_37 = V_0;
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10381_MI, L_37);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		int32_t L_41 = ((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f6;
		__this->f4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
extern MethodInfo m10112_MI;
extern "C" void m10112 (t9 * __this , MethodInfo* method)
{
	{
		((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f6 = 1;
		((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f7 = 2;
		return;
	}
}
extern MethodInfo m10113_MI;
extern "C" bool m10113 (t1596 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		int32_t L_1 = ((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10114_MI;
extern "C" t9 * m10114 (t1596 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t9 * m10115 (t1596 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10116_MI;
extern "C" void m10116 (t1596 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10117 (t1596 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10118_MI;
extern "C" void m10118 (t1596 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t2* m10119 (t1596 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10120_MI;
extern "C" void m10120 (t1596 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" void m10121 (t1596 * __this, t1106 * p0, t1107  p1, MethodInfo* method)
{
	{
		t1106 * L_0 = p0;
		t126 * L_1 = m2550(__this, &m2550_MI);
		m10368(L_0, L_1, &m10368_MI);
		t1106 * L_2 = p0;
		t2* L_3 = (__this->f1);
		m5785(L_2, (t2*) &_stringLiteral434, L_3, &m5785_MI);
		t1106 * L_4 = p0;
		t9 * L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1929_0_0_0), &m329_MI);
		m5770(L_4, (t2*) &_stringLiteral2119, L_5, L_6, &m5770_MI);
		t1106 * L_7 = p0;
		t9 * L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1930_0_0_0), &m329_MI);
		m5770(L_7, (t2*) &_stringLiteral2121, L_8, L_9, &m5770_MI);
		t1106 * L_10 = p0;
		t9 * L_11 = (__this->f0);
		t126 * L_12 = m329(NULL, LoadTypeToken(&t1928_0_0_0), &m329_MI);
		m5770(L_10, (t2*) &_stringLiteral2120, L_11, L_12, &m5770_MI);
		t1106 * L_13 = p0;
		int32_t L_14 = (__this->f4);
		m5772(L_13, (t2*) &_stringLiteral2122, L_14, &m5772_MI);
		return;
	}
}
extern MethodInfo m10122_MI;
extern "C" t9 * m10122 (t1596 * __this, t1107  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1596_TI));
		int32_t L_1 = ((t1596_SFs*)InitializedTypeInfo(&t1596_TI)->static_fields)->f6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1933_TI));
		t9 * L_2 = m10136(NULL, __this, &m10136_MI);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
extern "C" void m10123 (t1596 * __this, MethodInfo* method)
{
	{
		t1868 * L_0 = (t1868 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1868_TI));
		m9858(L_0, &m9858_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10124_MI;
extern "C" t126 * m10124 (t1596 * __this, MethodInfo* method)
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
		t2* L_2 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12105_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m7812(NULL, L_2, &m7812_MI);
		__this->f5 = L_3;
	}

IL_001e:
	{
		t126 * L_4 = (__this->f5);
		return L_4;
	}
}
#include "t1931.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11171_MI;
extern MethodInfo m5777_MI;


extern MethodInfo m10125_MI;
extern "C" void m10125 (t9 * __this , MethodInfo* method)
{
	{
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f0 = (t2*)NULL;
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f1 = (t2*)NULL;
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f2 = (t2*)NULL;
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f3 = 0;
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f4 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1164_TI));
		t1164 * L_0 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_0, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f5 = L_0;
		t1164 * L_1 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_1, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f6 = L_1;
		t1164 * L_2 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_2, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f7 = L_2;
		t1164 * L_3 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_3, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f8 = L_3;
		t1164 * L_4 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_4, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f9 = L_4;
		t1164 * L_5 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_5, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f10 = L_5;
		t1164 * L_6 = (t1164 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1164_TI));
		m5953(L_6, &m5953_MI);
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f11 = L_6;
		return;
	}
}
extern MethodInfo m10126_MI;
extern "C" t2* m10126 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t2* L_0 = ((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t2* m10127 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t2* L_0 = ((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t2* L_1 = m11171(NULL, &m11171_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t2* L_2 = ((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f2;
		return L_2;
	}
}
extern "C" t1923 * m10128 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1164 * V_0 = {0};
	t1923 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
		t1164 * L_0 = ((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f9;
		V_0 = L_0;
		t1164 * L_1 = V_0;
		m1115(NULL, L_1, &m1115_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1931_TI));
			t1164 * L_2 = ((t1931_SFs*)InitializedTypeInfo(&t1931_TI)->static_fields)->f6;
			t126 * L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5777_MI, L_2, L_3);
			V_1 = ((t1923 *)IsInst(L_4, InitializedTypeInfo(&t1923_TI)));
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
		t1164 * L_5 = V_0;
		m1117(NULL, L_5, &m1117_MI);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0028:
	{
		t1923 * L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
