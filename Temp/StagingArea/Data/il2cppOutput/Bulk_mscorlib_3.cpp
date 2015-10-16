#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1810.h"
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
extern TypeInfo t1810_TI;
#include "t1810MD.h"

#include "t122.h"
#include "t1811.h"
#include "t1812.h"
#include "mscorlib_ArrayTypes.h"
#include "t126.h"
#include "t124.h"

#include "t121.h"

extern MethodInfo m9638_MI;
extern "C" void m9638 (t9 * __this , t1811 * p0, t1810 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m9638_ftn) (t1811 *, t1810 *, int32_t);
	static m9638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9638_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m9639_MI;
extern "C" t152* m9639 (t9 * __this , t1811 * p0, bool p1, MethodInfo* method)
{
	typedef t152* (*m9639_ftn) (t1811 *, bool);
	static m9639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9639_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(p0, p1);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1812_TI;
#include "t1812MD.h"



#include "t1813.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1813_TI;
#include "t1813MD.h"

#include "t9.h"
#include "t58.h"
#include "t463.h"


extern MethodInfo m9640_MI;
extern "C" void m9640 (t1813 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9641_MI;
extern "C" t9 * m9641 (t1813 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9641((t1813 *)__this->f9,p0, method);
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
extern "C" t9 * pinvoke_delegate_wrapper_t1813(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m9642_MI;
extern "C" t9 * m9642 (t1813 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9643_MI;
extern "C" t9 * m9643 (t1813 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1811_TI;
#include "t1811MD.h"

#include "t1784.h"
#include "t821.h"
#include "t917.h"
#include "t907.h"
#include "t2.h"
#include "t125.h"
#include "t553.h"
#include "t127.h"
#include "t286.h"
#include "t2114.h"
#include "t918.h"
#include "t926.h"
#include "t894.h"
#include "t2024.h"
#include "t556.h"
#include "t1816.h"
#include "t138.h"
#include "t1093.h"
#include "t1094.h"
#include "t1563.h"
extern TypeInfo t821_TI;
extern TypeInfo t126_TI;
extern TypeInfo t907_TI;
extern TypeInfo t921_TI;
extern TypeInfo t917_TI;
extern TypeInfo t124_TI;
extern TypeInfo t1561_TI;
extern TypeInfo t2120_TI;
extern TypeInfo t152_TI;
extern TypeInfo t553_TI;
extern TypeInfo t2114_TI;
extern TypeInfo t2_TI;
extern TypeInfo t918_TI;
extern TypeInfo t9_TI;
extern TypeInfo t926_TI;
extern TypeInfo t158_TI;
extern TypeInfo t894_TI;
extern TypeInfo t556_TI;
extern TypeInfo t1816_TI;
extern TypeInfo t2024_TI;
extern TypeInfo t121_TI;
extern TypeInfo t122_TI;
extern TypeInfo t125_TI;
#include "t821MD.h"
#include "t907MD.h"
#include "t917MD.h"
#include "t830MD.h"
#include "t121MD.h"
#include "t2120MD.h"
#include "t126MD.h"
#include "t553MD.h"
#include "t286MD.h"
#include "t2114MD.h"
#include "t2MD.h"
#include "t556MD.h"
#include "t1816MD.h"
#include "t1800MD.h"
extern Il2CppType t1561_0_0_0;
extern Il2CppType t921_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2168_0_0_0;
extern Il2CppType t2169_0_0_0;
extern Il2CppType t1811_0_0_0;
extern Il2CppType t1813_0_0_0;
extern Il2CppType t158_0_0_0;
extern MethodInfo m9645_MI;
extern MethodInfo m9525_MI;
extern MethodInfo m4399_MI;
extern MethodInfo m4400_MI;
extern MethodInfo m9685_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m5912_MI;
extern MethodInfo m9670_MI;
extern MethodInfo m11578_MI;
extern MethodInfo m11577_MI;
extern MethodInfo m11576_MI;
extern MethodInfo m4365_MI;
extern MethodInfo m329_MI;
extern MethodInfo m4428_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m7582_MI;
extern MethodInfo m11549_MI;
extern MethodInfo m7754_MI;
extern MethodInfo m9526_MI;
extern MethodInfo m7581_MI;
extern MethodInfo m9662_MI;
extern MethodInfo m9654_MI;
extern MethodInfo m9652_MI;
extern MethodInfo m399_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m12000_MI;
extern MethodInfo m9700_MI;
extern MethodInfo m9656_MI;
extern MethodInfo m5874_MI;
extern MethodInfo m9649_MI;
extern MethodInfo m7770_MI;
extern MethodInfo m9650_MI;
extern MethodInfo m9664_MI;
extern MethodInfo m9506_MI;


extern MethodInfo m9644_MI;
extern "C" void m9644 (t1811 * __this, MethodInfo* method)
{
	{
		m9685(__this, &m9685_MI);
		return;
	}
}
extern "C" void m9645 (t1811 * __this, int32_t p0, MethodInfo* method)
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
		t1810 * L_3 = &(__this->f2);
		int32_t L_4 = p0;
		m9638(NULL, __this, L_3, L_4, &m9638_MI);
		int32_t L_5 = (__this->f3);
		int32_t L_6 = p0;
		__this->f3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
extern MethodInfo m9646_MI;
extern "C" int32_t m9646 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, 1, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		int32_t L_1 = (L_0->f4);
		return L_1;
	}
}
extern MethodInfo m9647_MI;
extern "C" bool m9647 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, 2, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f2);
		return ((((int32_t)((((t9*)(t821 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9648_MI;
extern "C" bool m9648 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, 4, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f3);
		return ((((int32_t)((((t9*)(t821 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" t126 * m9649 (t1811 * __this, MethodInfo* method)
{
	t921* V_0 = {0};
	{
		m9645(__this, 6, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t1810 * L_2 = &(__this->f2);
		t821 * L_3 = (L_2->f2);
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9525_MI, L_3);
		return L_4;
	}

IL_0025:
	{
		t1810 * L_5 = &(__this->f2);
		t821 * L_6 = (L_5->f3);
		t921* L_7 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_6);
		V_0 = L_7;
		t921* L_8 = V_0;
		t921* L_9 = V_0;
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_9)->max_length)))-(int32_t)1));
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
extern "C" t126 * m9650 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, 8, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern MethodInfo m9651_MI;
extern "C" t126 * m9651 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, ((int32_t)16), &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t126 * L_1 = (L_0->f0);
		return L_1;
	}
}
extern "C" t2* m9652 (t1811 * __this, MethodInfo* method)
{
	{
		m9645(__this, ((int32_t)32), &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t2* L_1 = (L_0->f1);
		return L_1;
	}
}
extern MethodInfo m9653_MI;
extern TypeInfo* t1561_TI_var;
extern "C" t1561* m9653 (t1811 * __this, bool p0, MethodInfo* method)
{
	static bool m9653_init;
	if (!m9653_init)
	{
		t1561_TI_var = il2cpp_codegen_class_from_type(&t1561_0_0_0);
		m9653_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1561* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		m9645(__this, 6, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f3);
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
		t1810 * L_3 = &(__this->f2);
		t821 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_4);
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
		t1810 * L_6 = &(__this->f2);
		t821 * L_7 = (L_6->f2);
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
		t1810 * L_9 = &(__this->f2);
		t821 * L_10 = (L_9->f2);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_10);
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
		V_2 = ((t1561*)SZArrayNew(t1561_TI_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		t1561* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		t1810 * L_18 = &(__this->f2);
		t821 * L_19 = (L_18->f3);
		ArrayElementTypeCheck (L_15, L_19);
		*((t821 **)(t821 **)SZArrayLdElema(L_15, L_17)) = (t821 *)L_19;
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
		t1561* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		t1810 * L_24 = &(__this->f2);
		t821 * L_25 = (L_24->f2);
		ArrayElementTypeCheck (L_21, L_25);
		*((t821 **)(t821 **)SZArrayLdElema(L_21, L_23)) = (t821 *)L_25;
	}

IL_0088:
	{
		t1561* L_26 = V_2;
		return L_26;
	}
}
extern "C" t821 * m9654 (t1811 * __this, bool p0, MethodInfo* method)
{
	{
		m9645(__this, 2, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f2);
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
		t1810 * L_3 = &(__this->f2);
		t821 * L_4 = (L_3->f2);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1810 * L_6 = &(__this->f2);
		t821 * L_7 = (L_6->f2);
		return L_7;
	}

IL_0035:
	{
		return (t821 *)NULL;
	}
}
extern MethodInfo m9655_MI;
extern TypeInfo* t921_TI_var;
extern "C" t921* m9655 (t1811 * __this, MethodInfo* method)
{
	static bool m9655_init;
	if (!m9655_init)
	{
		t921_TI_var = il2cpp_codegen_class_from_type(&t921_0_0_0);
		m9655_init = true;
	}
	t921* V_0 = {0};
	t921* V_1 = {0};
	int32_t V_2 = 0;
	t917 * V_3 = {0};
	{
		m9645(__this, 6, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		t1810 * L_2 = &(__this->f2);
		t821 * L_3 = (L_2->f2);
		t921* L_4 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		t1810 * L_5 = &(__this->f2);
		t821 * L_6 = (L_5->f3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		t1810 * L_7 = &(__this->f2);
		t821 * L_8 = (L_7->f3);
		t921* L_9 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_8);
		V_1 = L_9;
		t921* L_10 = V_1;
		V_0 = ((t921*)SZArrayNew(t921_TI_var, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_10)->max_length)))-(int32_t)1))));
		t921* L_11 = V_1;
		t921* L_12 = V_0;
		t921* L_13 = V_0;
		m5912(NULL, (t121 *)(t121 *)L_11, (t121 *)(t121 *)L_12, (((int32_t)(((t121 *)L_13)->max_length))), &m5912_MI);
		goto IL_0063;
	}

IL_005c:
	{
		return ((t921*)SZArrayNew(t921_TI_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		t921* L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		V_3 = (*(t917 **)(t917 **)SZArrayLdElema(L_14, L_16));
		t921* L_17 = V_0;
		int32_t L_18 = V_2;
		t917 * L_19 = V_3;
		t917 * L_20 = (t917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t917_TI));
		m9670(L_20, L_19, __this, &m9670_MI);
		ArrayElementTypeCheck (L_17, L_20);
		*((t917 **)(t917 **)SZArrayLdElema(L_17, L_18)) = (t917 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		t921* L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((t121 *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		t921* L_24 = V_0;
		return L_24;
	}
}
extern "C" t821 * m9656 (t1811 * __this, bool p0, MethodInfo* method)
{
	{
		m9645(__this, 4, &m9645_MI);
		t1810 * L_0 = &(__this->f2);
		t821 * L_1 = (L_0->f3);
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
		t1810 * L_3 = &(__this->f2);
		t821 * L_4 = (L_3->f3);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4366_MI, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		t1810 * L_6 = &(__this->f2);
		t821 * L_7 = (L_6->f3);
		return L_7;
	}

IL_0035:
	{
		return (t821 *)NULL;
	}
}
extern MethodInfo m9657_MI;
extern "C" bool m9657 (t1811 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_1 = m11578(NULL, __this, L_0, 0, &m11578_MI);
		return L_1;
	}
}
extern MethodInfo m9658_MI;
extern "C" t158* m9658 (t1811 * __this, bool p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_0 = m11577(NULL, __this, 0, &m11577_MI);
		return L_0;
	}
}
extern MethodInfo m9659_MI;
extern "C" t158* m9659 (t1811 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_1 = m11576(NULL, __this, L_0, 0, &m11576_MI);
		return L_1;
	}
}
extern MethodInfo m9660_MI;
extern TypeInfo* t152_TI_var;
extern "C" t1813 * m9660 (t9 * __this , t821 * p0, MethodInfo* method)
{
	static bool m9660_init;
	if (!m9660_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9660_init = true;
	}
	t152* V_0 = {0};
	t126 * V_1 = {0};
	t9 * V_2 = {0};
	t821 * V_3 = {0};
	t126 * V_4 = {0};
	t2* V_5 = {0};
	{
		t821 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4365_MI, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		t152* L_2 = ((t152*)SZArrayNew(t152_TI_var, 1));
		t821 * L_3 = p0;
		t126 * L_4 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9525_MI, L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t126 **)(t126 **)SZArrayLdElema(L_2, 0)) = (t126 *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(&t2168_0_0_0), &m329_MI);
		V_4 = L_5;
		V_5 = (t2*) &_stringLiteral2060;
		goto IL_0059;
	}

IL_002d:
	{
		t152* L_6 = ((t152*)SZArrayNew(t152_TI_var, 2));
		t821 * L_7 = p0;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_7);
		ArrayElementTypeCheck (L_6, L_8);
		*((t126 **)(t126 **)SZArrayLdElema(L_6, 0)) = (t126 *)L_8;
		t152* L_9 = L_6;
		t821 * L_10 = p0;
		t126 * L_11 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9525_MI, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		*((t126 **)(t126 **)SZArrayLdElema(L_9, 1)) = (t126 *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_12 = m329(NULL, LoadTypeToken(&t2169_0_0_0), &m329_MI);
		V_4 = L_12;
		V_5 = (t2*) &_stringLiteral2061;
	}

IL_0059:
	{
		t126 * L_13 = V_4;
		t152* L_14 = V_0;
		t126 * L_15 = (t126 *)VirtFuncInvoker1< t126 *, t152* >::Invoke(&m4447_MI, L_13, L_14);
		V_1 = L_15;
		t126 * L_16 = V_1;
		t821 * L_17 = p0;
		t286 * L_18 = m7582(NULL, L_16, L_17, 0, &m7582_MI);
		V_2 = L_18;
		t9 * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		t2114 * L_20 = (t2114 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2114_TI));
		m11549(L_20, &m11549_MI);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_21 = m329(NULL, LoadTypeToken(&t1811_0_0_0), &m329_MI);
		t2* L_22 = V_5;
		t821 * L_23 = (t821 *)VirtFuncInvoker2< t821 *, t2*, int32_t >::Invoke(&m7754_MI, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		t821 * L_24 = V_3;
		t152* L_25 = V_0;
		t821 * L_26 = (t821 *)VirtFuncInvoker1< t821 *, t152* >::Invoke(&m9526_MI, L_24, L_25);
		V_3 = L_26;
		t126 * L_27 = m329(NULL, LoadTypeToken(&t1813_0_0_0), &m329_MI);
		t9 * L_28 = V_2;
		t821 * L_29 = V_3;
		t286 * L_30 = m7581(NULL, L_27, L_28, L_29, 1, &m7581_MI);
		return ((t1813 *)Castclass(L_30, InitializedTypeInfo(&t1813_TI)));
	}
}
extern MethodInfo m9661_MI;
extern "C" t9 * m9661 (t1811 * __this, t9 * p0, t158* p1, MethodInfo* method)
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
		t9 * L_4 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m9662_MI, __this, L_2, 0, (t926 *)NULL, L_3, (t894 *)NULL);
		return L_4;
	}
}
extern "C" t9 * m9662 (t1811 * __this, t9 * p0, int32_t p1, t926 * p2, t158* p3, t894 * p4, MethodInfo* method)
{
	t9 * V_0 = {0};
	t821 * V_1 = {0};
	t2024 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		t821 * L_0 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m9654_MI, __this, 1);
		V_1 = L_0;
		t821 * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9652_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2062, L_2, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, L_3, &m2885_MI);
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
			t821 * L_7 = V_1;
			t9 * L_8 = p0;
			int32_t L_9 = p1;
			t926 * L_10 = p2;
			t894 * L_11 = p4;
			t9 * L_12 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_7, L_8, L_9, L_10, (t158*)(t158*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			t821 * L_13 = V_1;
			t9 * L_14 = p0;
			int32_t L_15 = p1;
			t926 * L_16 = p2;
			t158* L_17 = p3;
			t894 * L_18 = p4;
			t9 * L_19 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_13, L_14, L_15, L_16, L_17, L_18);
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
		if(il2cpp_codegen_class_is_assignable_from (&t2024_TI, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((t2024 *)__exception_local);
		t2024 * L_20 = V_2;
		t1816 * L_21 = (t1816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1816_TI));
		m9700(L_21, L_20, &m9700_MI);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		t9 * L_22 = V_0;
		return L_22;
	}
}
extern MethodInfo m9663_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9663 (t1811 * __this, t9 * p0, t9 * p1, int32_t p2, t926 * p3, t158* p4, t894 * p5, MethodInfo* method)
{
	static bool m9663_init;
	if (!m9663_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9663_init = true;
	}
	t821 * V_0 = {0};
	t158* V_1 = {0};
	int32_t V_2 = 0;
	{
		t821 * L_0 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m9656_MI, __this, 1);
		V_0 = L_0;
		t821 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9652_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, (t2*) &_stringLiteral2063, L_2, (t2*) &_stringLiteral141, &m399_MI);
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, L_3, &m2885_MI);
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
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_11, (t121 *)(t121 *)L_12, 0);
		t158* L_13 = V_1;
		int32_t L_14 = V_2;
		t9 * L_15 = p1;
		ArrayElementTypeCheck (L_13, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, L_14)) = (t9 *)L_15;
	}

IL_0058:
	{
		t821 * L_16 = V_0;
		t9 * L_17 = p0;
		int32_t L_18 = p2;
		t926 * L_19 = p3;
		t158* L_20 = V_1;
		t894 * L_21 = p5;
		VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12000_MI, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
extern "C" t2* m9664 (t1811 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9649_MI, __this);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_0);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9652_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_1, (t2*) &_stringLiteral168, L_2, &m399_MI);
		return L_3;
	}
}
extern MethodInfo m9665_MI;
extern "C" t152* m9665 (t1811 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9639(NULL, __this, 1, &m9639_MI);
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
extern MethodInfo m9666_MI;
extern "C" t152* m9666 (t1811 * __this, MethodInfo* method)
{
	t152* V_0 = {0};
	{
		t152* L_0 = m9639(NULL, __this, 0, &m9639_MI);
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
extern MethodInfo m9667_MI;
extern "C" void m9667 (t1811 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9652_MI, __this);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9650_MI, __this);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9664_MI, __this);
		m9506(NULL, L_0, L_1, L_2, L_3, ((int32_t)16), &m9506_MI);
		return;
	}
}
#include "t1782.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1782_TI;
#include "t1782MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1781.h"
#include "t296.h"
#include "t1755.h"
#include "t1571.h"
#include "t1574.h"
#include "t1565.h"
#include "t1569.h"
extern TypeInfo t1781_TI;
extern TypeInfo t296_TI;
extern TypeInfo t1571_TI;
extern TypeInfo t1574_TI;
extern TypeInfo t1565_TI;
#include "t9MD.h"
#include "t1781MD.h"
#include "t1571MD.h"
#include "t1574MD.h"
#include "t1565MD.h"
#include "t1755MD.h"
extern Il2CppType t122_0_0_0;
extern MethodInfo m9672_MI;
extern MethodInfo m336_MI;
extern MethodInfo m9329_MI;
extern MethodInfo m9330_MI;
extern MethodInfo m9328_MI;
extern MethodInfo m9678_MI;
extern MethodInfo m9679_MI;
extern MethodInfo m11939_MI;
extern MethodInfo m7721_MI;
extern MethodInfo m4468_MI;
extern MethodInfo m4429_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4367_MI;
extern MethodInfo m4385_MI;
extern MethodInfo m9676_MI;
extern MethodInfo m511_MI;
extern MethodInfo m610_MI;
extern MethodInfo m9673_MI;
extern MethodInfo m9675_MI;
extern MethodInfo m9674_MI;
extern MethodInfo m7801_MI;
extern MethodInfo m7804_MI;
extern MethodInfo m7797_MI;
extern MethodInfo m9415_MI;


extern MethodInfo m9668_MI;
extern "C" void m9668 (t917 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9669_MI;
extern "C" void m9669 (t917 * __this, t1781 * p0, t126 * p1, t553 * p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t126 * L_0 = p1;
		__this->f0 = L_0;
		t553 * L_1 = p2;
		__this->f2 = L_1;
		t1781 * L_2 = p0;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		t1781 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9329_MI, L_3);
		__this->f3 = L_4;
		t1781 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9330_MI, L_5);
		__this->f4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		t1781 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9328_MI, L_7);
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
extern "C" void m9670 (t917 * __this, t917 * p0, t553 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t917 * L_0 = p0;
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, L_0);
		__this->f0 = L_1;
		t553 * L_2 = p1;
		__this->f2 = L_2;
		t917 * L_3 = p0;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9678_MI, L_3);
		__this->f3 = L_4;
		t917 * L_5 = p0;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9679_MI, L_5);
		__this->f4 = L_6;
		t917 * L_7 = p0;
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, L_7);
		__this->f5 = L_8;
		return;
	}
}
extern MethodInfo m9671_MI;
extern "C" t2* m9671 (t917 * __this, MethodInfo* method)
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
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		t126 * L_3 = V_0;
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		t126 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4468_MI, L_5);
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
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4429_MI, L_9);
		t553 * L_11 = (__this->f2);
		t126 * L_12 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_11);
		t2* L_13 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4429_MI, L_12);
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
		t2* L_17 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		t126 * L_18 = (__this->f0);
		t2* L_19 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = m9676(__this, &m9676_MI);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		t2* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		t9 * L_23 = Box(InitializedTypeInfo(&t296_TI), &L_22);
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
extern "C" t126 * m4400 (t917 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" int32_t m9672 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" bool m9673 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9674 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9675 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m9676 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9672_MI, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9677_MI;
extern "C" t553 * m9677 (t917 * __this, MethodInfo* method)
{
	{
		t553 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" t2* m9678 (t917 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m9679 (t917 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m9680_MI;
extern "C" t158* m9680 (t917 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		t158* L_2 = m11576(NULL, __this, L_0, L_1, &m11576_MI);
		return L_2;
	}
}
extern MethodInfo m9681_MI;
extern "C" bool m9681 (t917 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t2120_TI));
		bool L_2 = m11578(NULL, __this, L_0, L_1, &m11578_MI);
		return L_2;
	}
}
extern MethodInfo m9682_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9682 (t917 * __this, MethodInfo* method)
{
	static bool m9682_init;
	if (!m9682_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9682_init = true;
	}
	int32_t V_0 = 0;
	t158* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = m9673(__this, &m9673_MI);
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
		bool L_2 = m9675(__this, &m9675_MI);
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
		bool L_4 = m9674(__this, &m9674_MI);
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
		t1755 * L_6 = (__this->f6);
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
		bool L_10 = m9673(__this, &m9673_MI);
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
		t1571 * L_14 = (t1571 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1571_TI));
		m7801(L_14, &m7801_MI);
		ArrayElementTypeCheck (L_11, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, L_13)) = (t9 *)L_14;
	}

IL_0054:
	{
		bool L_15 = m9674(__this, &m9674_MI);
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
		t1574 * L_19 = (t1574 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1574_TI));
		m7804(L_19, &m7804_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, L_18)) = (t9 *)L_19;
	}

IL_0068:
	{
		bool L_20 = m9675(__this, &m9675_MI);
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
		t1565 * L_24 = (t1565 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1565_TI));
		m7797(L_24, &m7797_MI);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, L_23)) = (t9 *)L_24;
	}

IL_007c:
	{
		t1755 * L_25 = (__this->f6);
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
		t1755 * L_29 = (__this->f6);
		t1569 * L_30 = m9415(L_29, &m9415_MI);
		ArrayElementTypeCheck (L_26, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, L_28)) = (t9 *)L_30;
	}

IL_0096:
	{
		t158* L_31 = V_1;
		return L_31;
	}
}
#include "t927.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t927_TI;
#include "t927MD.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void t927_marshal(const t927& unmarshaled, t927_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.f0);
}
void t927_marshal_back(const t927_marshaled& marshaled, t927& unmarshaled)
{
	unmarshaled.f0 = (t1197*)il2cpp_codegen_marshal_array_result(&t124_TI, marshaled.f0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void t927_marshal_cleanup(t927_marshaled& marshaled)
{
}
#include "t1814.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1814_TI;
#include "t1814MD.h"

#include "t169.h"
extern TypeInfo t169_TI;
#include "t169MD.h"
extern MethodInfo m5706_MI;


extern MethodInfo m9683_MI;
extern "C" void m9683 (t1814 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9684_MI;
extern "C" void m9684 (t1814 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral2064, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1795_TI;
#include "t1795MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1784_TI;
#include "t1784MD.h"



#include "t830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t830_TI;

extern MethodInfo m7783_MI;
extern MethodInfo m4403_MI;
extern MethodInfo m12001_MI;
extern MethodInfo m12002_MI;


extern "C" void m9685 (t830 * __this, MethodInfo* method)
{
	{
		m7783(__this, &m7783_MI);
		return;
	}
}
extern MethodInfo m9686_MI;
extern "C" int32_t m9686 (t830 * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
extern MethodInfo m9687_MI;
extern "C" t821 * m9687 (t830 * __this, MethodInfo* method)
{
	{
		t821 * L_0 = (t821 *)VirtFuncInvoker1< t821 *, bool >::Invoke(&m4403_MI, __this, 0);
		return L_0;
	}
}
extern MethodInfo m9688_MI;
extern "C" t9 * m9688 (t830 * __this, t9 * p0, t158* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t158* L_1 = p1;
		t9 * L_2 = (t9 *)VirtFuncInvoker5< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12001_MI, __this, L_0, 0, (t926 *)NULL, L_1, (t894 *)NULL);
		return L_2;
	}
}
extern MethodInfo m9689_MI;
extern "C" void m9689 (t830 * __this, t9 * p0, t9 * p1, t158* p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		t158* L_2 = p2;
		VirtActionInvoker6< t9 *, t9 *, int32_t, t926 *, t158*, t894 * >::Invoke(&m12002_MI, __this, L_0, L_1, 0, (t926 *)NULL, L_2, (t894 *)NULL);
		return;
	}
}
extern MethodInfo m9690_MI;
extern "C" t152* m9690 (t830 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9691_MI;
extern "C" t152* m9691 (t830 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t152* L_0 = ((t126_SFs*)InitializedTypeInfo(&t126_TI)->static_fields)->f3;
		return L_0;
	}
}
#include "t1734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1734_TI;
#include "t1734MD.h"



#include "t1793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1793_TI;
#include "t1793MD.h"

#include "t568.h"
#include "t1208.h"
#include "t1649.h"
extern TypeInfo t723_TI;
extern TypeInfo t568_TI;
extern TypeInfo t1649_TI;
#include "t1093MD.h"
#include "t1620MD.h"
#include "t1649MD.h"
extern Il2CppType t723_0_0_0;
extern MethodInfo m5703_MI;
extern MethodInfo m5712_MI;
extern MethodInfo m5705_MI;
extern MethodInfo m5700_MI;
extern MethodInfo m5715_MI;
extern MethodInfo m5701_MI;
extern MethodInfo m8027_MI;
extern MethodInfo m9695_MI;
extern MethodInfo m8272_MI;
extern MethodInfo m8271_MI;


extern MethodInfo m9692_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m9692 (t1793 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m9692_init;
	if (!m9692_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m9692_init = true;
	}
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		t9 * L_2 = m5703(L_0, (t2*) &_stringLiteral2065, L_1, &m5703_MI);
		__this->f0 = ((t723*)Castclass(L_2, t723_TI_var));
		t1093 * L_3 = p0;
		t2* L_4 = m5712(L_3, (t2*) &_stringLiteral2066, &m5712_MI);
		__this->f1 = L_4;
		t1093 * L_5 = p0;
		bool L_6 = m5705(L_5, (t2*) &_stringLiteral2067, &m5705_MI);
		__this->f2 = L_6;
		t1093 * L_7 = p0;
		t126 * L_8 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		t9 * L_9 = m5703(L_7, (t2*) &_stringLiteral2068, L_8, &m5703_MI);
		__this->f3 = ((t723*)Castclass(L_9, t723_TI_var));
		return;
	}
}
extern MethodInfo m9693_MI;
extern "C" void m9693 (t1793 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t723* L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_2 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		m5700(L_0, (t2*) &_stringLiteral2065, (t9 *)(t9 *)L_1, L_2, &m5700_MI);
		t1093 * L_3 = p0;
		t2* L_4 = (__this->f1);
		m5715(L_3, (t2*) &_stringLiteral2066, L_4, &m5715_MI);
		t1093 * L_5 = p0;
		bool L_6 = (__this->f2);
		m5701(L_5, (t2*) &_stringLiteral2067, L_6, &m5701_MI);
		t1093 * L_7 = p0;
		t723* L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t723_0_0_0), &m329_MI);
		m5700(L_7, (t2*) &_stringLiteral2068, (t9 *)(t9 *)L_8, L_9, &m5700_MI);
		return;
	}
}
extern MethodInfo m9694_MI;
extern "C" void m9694 (t1793 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern "C" t1208 * m9695 (t1793 * __this, MethodInfo* method)
{
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1208 * L_0 = (__this->f4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1208 * L_1 = (__this->f4);
		return L_1;
	}

IL_000f:
	{
		t723* L_2 = (__this->f3);
		if (!L_2)
		{
			goto IL_0034;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		t723* L_3 = (__this->f3);
		t1208 * L_4 = m8027(NULL, L_3, &m8027_MI);
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
		__this->f3 = (t723*)NULL;
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		t1208 * L_5 = (__this->f4);
		return L_5;
	}
}
extern MethodInfo m9696_MI;
extern "C" t1649 * m9696 (t1793 * __this, MethodInfo* method)
{
	t1208 * V_0 = {0};
	{
		t1208 * L_0 = m9695(__this, &m9695_MI);
		V_0 = L_0;
		t1208 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t1208 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t1649 * L_3 = (t1649 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1649_TI));
		m8272(L_3, L_2, &m8272_MI);
		return L_3;
	}

IL_0011:
	{
		t723* L_4 = (__this->f0);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t723* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1649_TI));
		t1649 * L_6 = (t1649 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1649_TI));
		m8271(L_6, L_5, &m8271_MI);
		return L_6;
	}

IL_0025:
	{
		return (t1649 *)NULL;
	}
}
#include "t1815.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1815_TI;
#include "t1815MD.h"

#include "t1582MD.h"
#include "t138MD.h"
extern MethodInfo m7818_MI;
extern MethodInfo m379_MI;
extern MethodInfo m7000_MI;


extern MethodInfo m9697_MI;
extern "C" void m9697 (t1815 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2069, &m7818_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9698_MI;
extern "C" void m9698 (t1815 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9699_MI;
extern "C" void m9699 (t1815 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m4434_MI;


extern "C" void m9700 (t1816 * __this, t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m4434(__this, (t2*) &_stringLiteral2070, L_0, &m4434_MI);
		return;
	}
}
extern MethodInfo m9701_MI;
extern "C" void m9701 (t1816 * __this, t2* p0, t138 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t138 * L_1 = p1;
		m4434(__this, L_0, L_1, &m4434_MI);
		return;
	}
}
extern MethodInfo m9702_MI;
extern "C" void m9702 (t1816 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
#include "t1817.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1817_TI;
#include "t1817MD.h"



extern MethodInfo m9703_MI;
extern "C" void m9703 (t1817 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2071, &m7818_MI);
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9704_MI;
extern "C" void m9704 (t1817 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
extern MethodInfo m9705_MI;
extern "C" void m9705 (t1817 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m7000(__this, L_0, L_1, &m7000_MI);
		return;
	}
}
#include "t1562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1562_TI;
#include "t1562MD.h"



#include "t1818.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1818_TI;
#include "t1818MD.h"

#include "t1336.h"
#include "t1559.h"
#include "t819.h"
#include "t1564.h"
#include "t1560.h"
#include "t823.h"
extern TypeInfo t1336_TI;
extern TypeInfo t1559_TI;
extern TypeInfo t127_TI;
extern TypeInfo t819_TI;
extern TypeInfo t1564_TI;
extern TypeInfo t928_TI;
extern TypeInfo t919_TI;
extern TypeInfo t1560_TI;
extern TypeInfo t823_TI;
extern TypeInfo t923_TI;
extern TypeInfo t922_TI;
extern TypeInfo t221_TI;
extern MethodInfo m5743_MI;
extern MethodInfo m4465_MI;
extern MethodInfo m4406_MI;
extern MethodInfo m11956_MI;
extern MethodInfo m7736_MI;
extern MethodInfo m11938_MI;
extern MethodInfo m7714_MI;
extern MethodInfo m7719_MI;
extern MethodInfo m7769_MI;
extern MethodInfo m11955_MI;
extern MethodInfo m11988_MI;
extern MethodInfo m4407_MI;
extern MethodInfo m11989_MI;
extern MethodInfo m11990_MI;
extern MethodInfo m4402_MI;
extern MethodInfo m11991_MI;
extern MethodInfo m7757_MI;
extern MethodInfo m11992_MI;
extern MethodInfo m4401_MI;
extern MethodInfo m7763_MI;
extern MethodInfo m4414_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m7723_MI;
extern MethodInfo m11932_MI;
extern MethodInfo m7730_MI;
extern MethodInfo m7733_MI;


extern MethodInfo m9706_MI;
extern "C" void m9706 (t1818 * __this, MethodInfo* method)
{
	{
		m7714(__this, &m7714_MI);
		return;
	}
}
extern MethodInfo m9707_MI;
extern "C" t1336 * m9707 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1336 * L_1 = (t1336 *)VirtFuncInvoker0< t1336 * >::Invoke(&m5743_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9708_MI;
extern "C" t2* m9708 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9709_MI;
extern "C" t126 * m9709 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9710_MI;
extern "C" t2* m9710 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9711_MI;
extern "C" t1559 * m9711 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t1559 * L_1 = (t1559 *)VirtFuncInvoker0< t1559 * >::Invoke(&m11956_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9712_MI;
extern "C" t2* m9712 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9713_MI;
extern "C" t2* m9713 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4429_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9714_MI;
extern "C" t127  m9714 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t127  L_1 = (t127 )VirtFuncInvoker0< t127  >::Invoke(&m7736_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9715_MI;
extern "C" t126 * m9715 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11938_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9716_MI;
extern "C" int32_t m9716 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m7719_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9717_MI;
extern "C" t819 * m9717 (t1818 * __this, int32_t p0, t926 * p1, int32_t p2, t152* p3, t928* p4, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t926 * L_2 = p1;
		int32_t L_3 = p2;
		t152* L_4 = p3;
		t928* L_5 = p4;
		t819 * L_6 = (t819 *)VirtFuncInvoker5< t819 *, int32_t, t926 *, int32_t, t152*, t928* >::Invoke(&m7769_MI, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
extern MethodInfo m9718_MI;
extern "C" t919* m9718 (t1818 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t919* L_2 = (t919*)VirtFuncInvoker1< t919*, int32_t >::Invoke(&m11955_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9719_MI;
extern "C" t158* m9719 (t1818 * __this, bool p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = p0;
		t158* L_2 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m11988_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9720_MI;
extern "C" t158* m9720 (t1818 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		t158* L_3 = (t158*)VirtFuncInvoker2< t158*, t126 *, bool >::Invoke(&m4407_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9721_MI;
extern "C" t126 * m9721 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m11939_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9722_MI;
extern "C" t1560 * m9722 (t1818 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t1560 * L_3 = (t1560 *)VirtFuncInvoker2< t1560 *, t2*, int32_t >::Invoke(&m11989_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9723_MI;
extern "C" t823 * m9723 (t1818 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t823 * L_3 = (t823 *)VirtFuncInvoker2< t823 *, t2*, int32_t >::Invoke(&m11990_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9724_MI;
extern "C" t923* m9724 (t1818 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t923* L_2 = (t923*)VirtFuncInvoker1< t923*, int32_t >::Invoke(&m4402_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9725_MI;
extern "C" t152* m9725 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t152* L_1 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11991_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9726_MI;
extern "C" t821 * m9726 (t1818 * __this, t2* p0, int32_t p1, t926 * p2, int32_t p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t926 * L_3 = p2;
		int32_t L_4 = p3;
		t152* L_5 = p4;
		t928* L_6 = p5;
		t821 * L_7 = m7757(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7757_MI);
		return L_7;
	}
}
extern MethodInfo m9727_MI;
extern "C" t1561* m9727 (t1818 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t1561* L_2 = (t1561*)VirtFuncInvoker1< t1561*, int32_t >::Invoke(&m11992_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9728_MI;
extern "C" t922* m9728 (t1818 * __this, int32_t p0, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		int32_t L_1 = p0;
		t922* L_2 = (t922*)VirtFuncInvoker1< t922*, int32_t >::Invoke(&m4401_MI, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m9729_MI;
extern "C" t830 * m9729 (t1818 * __this, t2* p0, int32_t p1, t926 * p2, t126 * p3, t152* p4, t928* p5, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t2* L_1 = p0;
		int32_t L_2 = p1;
		t926 * L_3 = p2;
		t126 * L_4 = p3;
		t152* L_5 = p4;
		t928* L_6 = p5;
		t830 * L_7 = m7763(L_0, L_1, L_2, L_3, L_4, L_5, L_6, &m7763_MI);
		return L_7;
	}
}
extern MethodInfo m9730_MI;
extern "C" bool m9730 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7721_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9731_MI;
extern "C" t9 * m9731 (t1818 * __this, t2* p0, int32_t p1, t926 * p2, t9 * p3, t158* p4, t928* p5, t894 * p6, t221* p7, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
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
extern MethodInfo m9732_MI;
extern "C" bool m9732 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4360_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9733_MI;
extern "C" bool m9733 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9734_MI;
extern "C" bool m9734 (t1818 * __this, t126 * p0, bool p1, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		t126 * L_1 = p0;
		bool L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t126 *, bool >::Invoke(&m11932_MI, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m9735_MI;
extern "C" bool m9735 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7730_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9736_MI;
extern "C" bool m9736 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m4468_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9737_MI;
extern "C" bool m9737 (t1818 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f8);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_0);
		return L_1;
	}
}
#include "t1144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1144_TI;
#include "t1144MD.h"

#include "t132.h"
extern TypeInfo t132_TI;
#include "t718MD.h"
#include "t132MD.h"
extern MethodInfo m4240_MI;
extern MethodInfo m339_MI;


extern MethodInfo m4774_MI;
extern "C" void m4774 (t1144 * __this, t2* p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2072, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
#include "t1137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1137_TI;
#include "t1137MD.h"

#include "t1187.h"
extern TypeInfo t1187_TI;
#include "t1187MD.h"
extern MethodInfo m11854_MI;


extern MethodInfo m4767_MI;
extern "C" void m4767 (t1137 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		t1187 * L_1 = (t1187 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1187_TI));
		m11854(L_1, L_0, &m11854_MI);
		__this->f0 = L_1;
		return;
	}
}
#include "t1819.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1819_TI;
#include "t1819MD.h"



#include "t1140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1140_TI;
#include "t1140MD.h"



extern MethodInfo m4770_MI;
extern "C" void m4770 (t1140 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1820.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1820_TI;
#include "t1820MD.h"

#include "t1821.h"


extern MethodInfo m9738_MI;
extern "C" void m9738 (t1820 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1822.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1822_TI;
#include "t1822MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1821_TI;
#include "t1821MD.h"



#include "t1823.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1823_TI;
#include "t1823MD.h"



extern MethodInfo m9739_MI;
extern "C" void m9739 (t1823 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1824.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1824_TI;
#include "t1824MD.h"



#include "t1825.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1825_TI;
#include "t1825MD.h"



#include "t1826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1826_TI;
#include "t1826MD.h"

extern MethodInfo m646_MI;


extern MethodInfo m9740_MI;
extern "C" void m9740 (t1826 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9741_MI;
extern "C" void m9741 (t1826 * __this, MethodInfo* method)
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
#include "t1827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1827_TI;
#include "t1827MD.h"



extern MethodInfo m9742_MI;
extern "C" void m9742 (t1827 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1828_TI;
#include "t1828MD.h"



#include "t1567.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1567_TI;
#include "t1567MD.h"



#include "t1568.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1568_TI;
#include "t1568MD.h"



#include "t1829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1829_TI;
#include "t1829MD.h"

#include "t1830.h"


extern MethodInfo m9743_MI;
extern "C" void m9743 (t1829 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1830_TI;
#include "t1830MD.h"



#include "t1831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1831_TI;
#include "t1831MD.h"



extern MethodInfo m9744_MI;
extern "C" void m9744 (t1831 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t126 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1832_TI;
#include "t1832MD.h"



#include "t1833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1833_TI;
#include "t1833MD.h"



extern MethodInfo m9745_MI;
extern "C" void m9745 (t1833 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1834_TI;
#include "t1834MD.h"

#include "t1332.h"
#include "t1835.h"
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t125MD.h"
extern MethodInfo m9747_MI;
extern MethodInfo m5685_MI;
extern MethodInfo m9751_MI;
extern MethodInfo m9752_MI;
extern MethodInfo m9746_MI;
extern MethodInfo m9753_MI;
extern MethodInfo m4204_MI;


extern "C" void m9746 (t1834 * __this, t9 * p0, int32_t p1, MethodInfo* method)
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
		int32_t L_4 = m9752(NULL, L_2, 0, L_3, &m9752_MI);
		__this->f0 = L_4;
		return;
	}
}
extern "C" bool m9747 (t1834 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9748_MI;
extern "C" t9 * m9748 (t1834 * __this, MethodInfo* method)
{
	{
		bool L_0 = m9747(__this, &m9747_MI);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		t2* L_1 = m7818(NULL, (t2*) &_stringLiteral2073, &m7818_MI);
		t1332 * L_2 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_2, L_1, &m5685_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->f0);
		t9 * L_4 = m9751(NULL, L_3, &m9751_MI);
		return L_4;
	}
}
extern MethodInfo m9749_MI;
extern "C" t1834  m9749 (t9 * __this , t9 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = p1;
		t1834  L_2 = {0};
		m9746(&L_2, L_0, L_1, &m9746_MI);
		return L_2;
	}
}
extern MethodInfo m9750_MI;
extern "C" void m9750 (t1834 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		m9753(NULL, L_0, &m9753_MI);
		__this->f0 = 0;
		return;
	}
}
extern "C" t9 * m9751 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t9 * (*m9751_ftn) (int32_t);
	static m9751_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9751_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m9752 (t9 * __this , t9 * p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef int32_t (*m9752_ftn) (t9 *, int32_t, int32_t);
	static m9752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9752_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m9753 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m9753_ftn) (int32_t);
	static m9753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9753_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m9754_MI;
extern "C" bool m9754 (t1834 * __this, t9 * p0, MethodInfo* method)
{
	t1834  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_1 = p0;
		if (((t9 *)IsInst(L_1, InitializedTypeInfo(&t1834_TI))))
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
		V_0 = ((*(t1834 *)((t1834 *)UnBox (L_3, InitializedTypeInfo(&t1834_TI)))));
		int32_t L_4 = ((&V_0)->f0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
extern MethodInfo m9755_MI;
extern "C" int32_t m9755 (t1834 * __this, MethodInfo* method)
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
extern TypeInfo t1835_TI;
#include "t1835MD.h"



#include "t1836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1836_TI;
#include "t1836MD.h"



extern MethodInfo m9756_MI;
extern "C" void m9756 (t1836 * __this, int32_t p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
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

#include "t2108.h"
#include "t2109.h"
#include "t886MD.h"
#include "t2108MD.h"
extern MethodInfo m11497_MI;
extern MethodInfo m11748_MI;
extern MethodInfo m9758_MI;


extern MethodInfo m9757_MI;
extern "C" void m9757 (t9 * __this , MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		((t1837_SFs*)InitializedTypeInfo(&t1837_TI)->static_fields)->f0 = 2;
		t2108 * L_0 = m11497(NULL, &m11497_MI);
		int32_t L_1 = m11748(L_0, &m11748_MI);
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
		((t1837_SFs*)InitializedTypeInfo(&t1837_TI)->static_fields)->f1 = G_B3_0;
		return;
	}
}
extern "C" void m9758 (t9 * __this , t58 p0, int32_t p1, t121 * p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m9758_ftn) (t58, int32_t, t121 *, int32_t);
	static m9758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9758_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m9759_MI;
extern "C" void m9759 (t9 * __this , t58 p0, t723* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t723* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1837_TI));
		m9758(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9758_MI);
		return;
	}
}
extern MethodInfo m9760_MI;
extern "C" void m9760 (t9 * __this , t58 p0, t305* p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		int32_t L_1 = p2;
		t305* L_2 = p1;
		int32_t L_3 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1837_TI));
		m9758(NULL, L_0, L_1, (t121 *)(t121 *)L_2, L_3, &m9758_MI);
		return;
	}
}
#include "t1838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1838_TI;
#include "t1838MD.h"

#include "t1360MD.h"
extern MethodInfo m5872_MI;
extern MethodInfo m4433_MI;
extern MethodInfo m11780_MI;


extern MethodInfo m9761_MI;
extern "C" void m9761 (t1838 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m7818(NULL, (t2*) &_stringLiteral2074, &m7818_MI);
		m5872(__this, L_0, &m5872_MI);
		m4433(__this, ((int32_t)-2146233035), &m4433_MI);
		return;
	}
}
extern MethodInfo m9762_MI;
extern "C" void m9762 (t1838 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m11780(__this, L_0, L_1, &m11780_MI);
		return;
	}
}
#include "t1839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1839_TI;
#include "t1839MD.h"



extern MethodInfo m9763_MI;
extern "C" void m9763 (t1839 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1587.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1587_TI;
#include "t1587MD.h"

#include "t1521.h"
extern TypeInfo t1521_TI;
#include "t1521MD.h"
#include "t2059MD.h"
#include "t1517MD.h"
extern MethodInfo m2486_MI;
extern MethodInfo m6883_MI;
extern MethodInfo m10988_MI;
extern MethodInfo m12003_MI;
extern MethodInfo m12004_MI;
extern MethodInfo m9770_MI;
extern MethodInfo m6867_MI;
extern MethodInfo m9765_MI;


extern MethodInfo m9764_MI;
extern "C" void m9764 (t1587 * __this, t58 p0, bool p1, MethodInfo* method)
{
	{
		m9740(__this, &m9740_MI);
		t58 L_0 = p0;
		__this->f1 = L_0;
		bool L_1 = p1;
		__this->f3 = L_1;
		__this->f2 = 1;
		return;
	}
}
extern "C" void m9765 (t1587 * __this, MethodInfo* method)
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
		t126 * L_1 = m2486(__this, &m2486_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, L_2, &m6883_MI);
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
		int32_t L_9 = m10988(NULL, L_6, L_7, L_8, &m10988_MI);
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
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12003_MI, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12004_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
		__this->f2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
extern MethodInfo m9766_MI;
extern "C" void m9766 (t1587 * __this, bool* p0, MethodInfo* method)
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
		t126 * L_1 = m2486(__this, &m2486_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, L_2, &m6883_MI);
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
		t126 * L_7 = m2486(__this, &m2486_MI);
		t2* L_8 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_7);
		t1521 * L_9 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_9, L_8, &m6883_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->f2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = m10988(NULL, L_10, L_11, L_12, &m10988_MI);
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
extern MethodInfo m9767_MI;
extern "C" t58 m9767 (t1587 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t126 * L_1 = m2486(__this, &m2486_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, L_2, &m6883_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		t58 L_4 = (__this->f0);
		return L_4;
	}
}
extern MethodInfo m9768_MI;
extern "C" void m9768 (t1587 * __this, MethodInfo* method)
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
		t126 * L_1 = m2486(__this, &m2486_MI);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_1);
		t1521 * L_3 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_3, L_2, &m6883_MI);
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
		int32_t L_9 = m10988(NULL, L_6, L_7, L_8, &m10988_MI);
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
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12003_MI, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(&m12004_MI, __this);
		t58 L_14 = (__this->f1);
		__this->f0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
extern MethodInfo m9769_MI;
extern "C" void m9769 (t1587 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&m9770_MI, __this, 1);
		m6867(NULL, __this, &m6867_MI);
		return;
	}
}
extern "C" void m9770 (t1587 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		m9765(__this, &m9765_MI);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
extern MethodInfo m9771_MI;
extern "C" void m9771 (t1587 * __this, t58 p0, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9772_MI;
extern "C" void m9772 (t1587 * __this, MethodInfo* method)
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
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m12003_MI, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(&m12004_MI, __this);
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
		m9741(__this, &m9741_MI);
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
#include "t1840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1840_TI;
#include "t1840MD.h"



extern MethodInfo m9773_MI;
extern "C" void m9773 (t1840 * __this, t126 * p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t126 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_0);
		__this->f0 = L_1;
		return;
	}
}
#include "t1841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1841_TI;
#include "t1841MD.h"



extern MethodInfo m9774_MI;
extern "C" void m9774 (t1841 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		int32_t L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t1570.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1570_TI;
#include "t1570MD.h"



#include "t1842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1842_TI;
#include "t1842MD.h"

#include "t1846.h"
#include "t1908.h"
#include "t1917.h"
#include "t1849.h"
#include "t1844.h"
#include "t1161.h"
#include "t1852.h"
#include "t1845.h"
#include "t1847.h"
#include "t1854.h"
extern TypeInfo t1846_TI;
extern TypeInfo t2170_TI;
extern TypeInfo t1917_TI;
extern TypeInfo t1849_TI;
extern TypeInfo t1916_TI;
extern TypeInfo t1918_TI;
extern TypeInfo t1844_TI;
extern TypeInfo t1845_TI;
extern TypeInfo t1843_TI;
extern TypeInfo t1847_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t991_TI;
extern TypeInfo t1854_TI;
extern TypeInfo t1863_TI;
extern TypeInfo t76_TI;
extern TypeInfo t1852_TI;
extern TypeInfo t1851_TI;
extern TypeInfo t137_TI;
#include "t1846MD.h"
#include "t1917MD.h"
#include "t1849MD.h"
#include "t1394MD.h"
#include "t1916MD.h"
#include "t1918MD.h"
#include "t1844MD.h"
#include "t1845MD.h"
#include "t1847MD.h"
#include "t1161MD.h"
#include "t1854MD.h"
#include "t1863MD.h"
extern MethodInfo m9780_MI;
extern MethodInfo m10060_MI;
extern MethodInfo m9783_MI;
extern MethodInfo m6049_MI;
extern MethodInfo m10058_MI;
extern MethodInfo m10078_MI;
extern MethodInfo m7725_MI;
extern MethodInfo m10079_MI;
extern MethodInfo m9873_MI;
extern MethodInfo m9775_MI;
extern MethodInfo m9779_MI;
extern MethodInfo m9880_MI;
extern MethodInfo m9876_MI;
extern MethodInfo m9781_MI;
extern MethodInfo m5698_MI;
extern MethodInfo m5820_MI;
extern MethodInfo m11011_MI;
extern MethodInfo m5699_MI;
extern MethodInfo m361_MI;
extern MethodInfo m12005_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m5709_MI;
extern MethodInfo m8416_MI;
extern MethodInfo m9882_MI;
extern MethodInfo m12006_MI;
extern MethodInfo m2713_MI;


extern "C" t9 * m9775 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = ((t1842_SFs*)InitializedTypeInfo(&t1842_TI)->static_fields)->f0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t1846 * L_1 = (t1846 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1846_TI));
		m9780(L_1, &m9780_MI);
		((t1842_SFs*)InitializedTypeInfo(&t1842_TI)->static_fields)->f0 = L_1;
	}

IL_0011:
	{
		t9 * L_2 = ((t1842_SFs*)InitializedTypeInfo(&t1842_TI)->static_fields)->f0;
		return L_2;
	}
}
extern MethodInfo m9776_MI;
extern "C" t9 * m9776 (t9 * __this , t126 * p0, t158* p1, MethodInfo* method)
{
	t2* V_0 = {0};
	t9 * V_1 = {0};
	t158* V_2 = {0};
	int32_t V_3 = 0;
	t1908 * V_4 = {0};
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
		if (((t9 *)IsInst(L_4, InitializedTypeInfo(&t2170_TI))))
		{
			goto IL_001f;
		}
	}
	{
		t1917 * L_5 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_5, (t2*) &_stringLiteral2075, &m10060_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		t9 * L_6 = V_1;
		if (!((t1849 *)IsInst(L_6, InitializedTypeInfo(&t1849_TI))))
		{
			goto IL_0033;
		}
	}
	{
		t9 * L_7 = V_1;
		t2* L_8 = m9783(((t1849 *)Castclass(L_7, InitializedTypeInfo(&t1849_TI))), &m9783_MI);
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
		t9 * L_16 = m6049(NULL, L_13, L_14, L_15, &m6049_MI);
		return L_16;
	}

IL_0049:
	{
		t126 * L_17 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t1908 * L_18 = m10058(NULL, L_17, &m10058_MI);
		V_4 = L_18;
		t1908 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		t1908 * L_20 = V_4;
		t158* L_21 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t9 * L_22 = m10078(NULL, L_20, L_21, &m10078_MI);
		return L_22;
	}

IL_005e:
	{
		t126 * L_23 = p0;
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7725_MI, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		t126 * L_25 = p0;
		t158* L_26 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t9 * L_27 = m10079(NULL, L_25, L_26, &m10079_MI);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
extern MethodInfo m9777_MI;
extern "C" t1844 * m9777 (t9 * __this , t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	t1844 * V_0 = {0};
	t9 * V_1 = {0};
	t1161 * V_2 = {0};
	bool V_3 = false;
	t1852 * V_4 = {0};
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
		t1844 * L_1 = (t1844 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1844_TI));
		m9873(L_1, L_0, &m9873_MI);
		V_0 = L_1;
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7725_MI, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		t1844 * L_4 = V_0;
		t2* L_5 = p1;
		t9 * L_6 = m9775(NULL, &m9775_MI);
		t1845 * L_7 = (t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1845_TI));
		m9779(L_7, L_5, L_6, &m9779_MI);
		VirtActionInvoker1< t9 * >::Invoke(&m9880_MI, L_4, L_7);
		t1844 * L_8 = V_0;
		m9876(L_8, 0, &m9876_MI);
		t1844 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		t9 * L_10 = m9775(NULL, &m9775_MI);
		V_1 = L_10;
		t9 * L_11 = V_1;
		t1847 * L_12 = (t1847 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1847_TI));
		m9781(L_12, L_11, &m9781_MI);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_13 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_13, &m5698_MI);
		V_2 = L_13;
		t158* L_14 = p2;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		t1161 * L_15 = V_2;
		t158* L_16 = p2;
		VirtActionInvoker1< t9 * >::Invoke(&m5820_MI, L_15, (t9 *)(t9 *)L_16);
	}

IL_0046:
	{
		t2* L_17 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t2* L_18 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_19 = m331(NULL, L_17, L_18, &m331_MI);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1852 * L_20 = m11011(NULL, &m11011_MI);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		t1161 * L_22 = V_2;
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_22);
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
			V_5 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t2170_TI)));
			t9 * L_26 = V_5;
			t1852 * L_27 = V_4;
			t1844 * L_28 = V_0;
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, t1852 *, t9 * >::Invoke(&m12005_MI, L_26, L_27, L_28);
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
		t158* L_36 = (t158*)VirtFuncInvoker1< t158*, bool >::Invoke(&m11988_MI, L_35, 1);
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
		if (!((t9 *)IsInst(L_41, InitializedTypeInfo(&t2170_TI))))
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
		t1852 * L_44 = V_4;
		t1844 * L_45 = V_0;
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, t1852 *, t9 * >::Invoke(&m12005_MI, ((t9 *)Castclass(L_43, InitializedTypeInfo(&t2170_TI))), L_44, L_45);
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
		t1161 * L_47 = V_2;
		t9 * L_48 = V_8;
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_47, L_48);
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
		t1844 * L_53 = V_0;
		t1161 * L_54 = V_2;
		t158* L_55 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8416_MI, L_54);
		m9882(L_53, L_55, &m9882_MI);
		t1161 * L_56 = V_2;
		t9 * L_57 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_56);
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
			V_11 = ((t9 *)Castclass(L_59, InitializedTypeInfo(&t2170_TI)));
			t9 * L_60 = V_11;
			t1844 * L_61 = V_0;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12006_MI, L_60, L_61);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t2* L_68 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_69 = m2713(NULL, L_67, L_68, &m2713_MI);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		t2* L_70 = p1;
		t9 * L_71 = V_1;
		t1845 * L_72 = (t1845 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1845_TI));
		m9779(L_72, L_70, L_71, &m9779_MI);
		V_1 = L_72;
	}

IL_0159:
	{
		t1844 * L_73 = V_0;
		t9 * L_74 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m9880_MI, L_73, L_74);
		t1844 * L_75 = V_0;
		bool L_76 = V_3;
		m9876(L_75, L_76, &m9876_MI);
		t1844 * L_77 = V_0;
		return L_77;
	}
}
extern MethodInfo m9778_MI;
extern "C" t9 * m9778 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t9 * (*m9778_ftn) (t126 *);
	static m9778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m9778_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9779 (t1845 * __this, t2* p0, t9 * p1, MethodInfo* method)
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



extern "C" void m9780 (t1846 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9781 (t1847 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
#include "t1848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1848_TI;
#include "t1848MD.h"

#include "t1200.h"
#include "t1867.h"
#include "t297.h"
#include "t156.h"
extern TypeInfo t1200_TI;
extern TypeInfo t1865_TI;
extern TypeInfo t1867_TI;
extern TypeInfo t297_TI;
#include "t1200MD.h"
#include "t297MD.h"
extern MethodInfo m6009_MI;
extern MethodInfo m12007_MI;
extern MethodInfo m11805_MI;
extern MethodInfo m12008_MI;
extern MethodInfo m12009_MI;
extern MethodInfo m12010_MI;


extern MethodInfo m9782_MI;
extern "C" t9 * m9782 (t1848 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = m6009(__this, &m6009_MI);
		V_0 = ((t9 *)Castclass(L_0, InitializedTypeInfo(&t1865_TI)));
		t9 * L_1 = V_0;
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12007_MI, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		t9 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_4 = m11805(NULL, (30.0), &m11805_MI);
		InterfaceActionInvoker1< t297  >::Invoke(&m12008_MI, L_3, L_4);
		t9 * L_5 = V_0;
		t297  L_6 = m11805(NULL, (1.0), &m11805_MI);
		InterfaceActionInvoker1< t297  >::Invoke(&m12009_MI, L_5, L_6);
		t9 * L_7 = V_0;
		t297  L_8 = m11805(NULL, (10.0), &m11805_MI);
		InterfaceActionInvoker1< t297  >::Invoke(&m12010_MI, L_7, L_8);
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

extern MethodInfo m4207_MI;


extern "C" t2* m9783 (t1849 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9784_MI;
extern "C" bool m9784 (t1849 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (((t1849 *)IsInst(L_0, InitializedTypeInfo(&t1849_TI))))
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
		t2* L_2 = m9783(((t1849 *)Castclass(L_1, InitializedTypeInfo(&t1849_TI))), &m9783_MI);
		t2* L_3 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_4 = m331(NULL, L_2, L_3, &m331_MI);
		return L_4;
	}
}
extern MethodInfo m9785_MI;
extern "C" int32_t m9785 (t1849 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_0);
		return L_1;
	}
}
extern MethodInfo m9786_MI;
extern "C" void m9786 (t1849 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m9787_MI;
extern "C" bool m9787 (t1849 * __this, t1852 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1853_TI;
#include "t1853MD.h"

extern MethodInfo m9793_MI;


extern MethodInfo m9788_MI;
extern "C" void m9788 (t1853 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t158* L_0 = m9793(NULL, &m9793_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9789_MI;
extern "C" t158* m9789 (t1853 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1855.h"
extern TypeInfo t1855_TI;
extern TypeInfo t2171_TI;
extern TypeInfo t1856_TI;
extern TypeInfo t2172_TI;
extern TypeInfo t992_TI;
#include "t1855MD.h"
#include "t294MD.h"
extern Il2CppType t221_0_0_0;
extern MethodInfo m9817_MI;
extern MethodInfo m9792_MI;
extern MethodInfo m12011_MI;
extern MethodInfo m590_MI;
extern MethodInfo m12012_MI;
extern MethodInfo m5848_MI;
extern MethodInfo m1067_MI;
extern MethodInfo m5696_MI;
extern MethodInfo m12013_MI;
extern MethodInfo m5694_MI;
extern MethodInfo m5828_MI;
extern MethodInfo m11937_MI;
extern MethodInfo m12014_MI;
extern MethodInfo m1069_MI;
extern MethodInfo m12015_MI;


extern MethodInfo m9790_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9790 (t9 * __this , MethodInfo* method)
{
	static bool m9790_init;
	if (!m9790_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9790_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0 = L_0;
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f1 = L_1;
		t1855 * L_2 = (t1855 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1855_TI));
		m9817(L_2, &m9817_MI);
		((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f2 = L_2;
		((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f3 = (t2*) &_stringLiteral2076;
		t221* L_3 = ((t221*)SZArrayNew(t221_TI_var, 2));
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2077);
		*((t2**)(t2**)SZArrayLdElema(L_3, 0)) = (t2*)(t2*) &_stringLiteral2077;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2078);
		*((t2**)(t2**)SZArrayLdElema(L_4, 1)) = (t2*)(t2*) &_stringLiteral2078;
		((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f4 = (t9 *)L_4;
		return;
	}
}
extern MethodInfo m9791_MI;
extern "C" void m9791 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		m9792(NULL, L_0, 0, &m9792_MI);
		return;
	}
}
extern "C" void m9792 (t9 * __this , t9 * p0, bool p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2079, &m339_MI);
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
		V_1 = ((t9 *)IsInst(L_3, InitializedTypeInfo(&t2171_TI)));
		t9 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		t9 * L_5 = p0;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12011_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m590(NULL, (t2*) &_stringLiteral2080, L_6, &m590_MI);
		t1917 * L_8 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_8, L_7, &m10060_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		t9 * L_9 = V_1;
		InterfaceActionInvoker1< bool >::Invoke(&m12012_MI, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t1161 * L_10 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
		t9 * L_11 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_10);
		V_0 = L_11;
		t9 * L_12 = V_0;
		m1067(NULL, L_12, &m1067_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t1161 * L_13 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
			int32_t L_14 = V_3;
			t9 * L_15 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_13, L_14);
			V_4 = ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1856_TI)));
			t9 * L_16 = V_4;
			t2* L_17 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12011_MI, L_16);
			t9 * L_18 = p0;
			t2* L_19 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12011_MI, L_18);
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
			t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12011_MI, L_21);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_23 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
			bool L_24 = m2713(NULL, L_22, L_23, &m2713_MI);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			t9 * L_25 = V_4;
			t2* L_26 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12011_MI, L_25);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_27 = m399(NULL, (t2*) &_stringLiteral2081, L_26, (t2*) &_stringLiteral2082, &m399_MI);
			t1917 * L_28 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
			m10060(L_28, L_27, &m10060_MI);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			t9 * L_29 = V_4;
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12013_MI, L_29);
			t9 * L_31 = p0;
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m12013_MI, L_31);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t1161 * L_37 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_37);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t1161 * L_40 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
			int32_t L_41 = V_2;
			t9 * L_42 = p0;
			VirtActionInvoker2< int32_t, t9 * >::Invoke(&m5828_MI, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t1161 * L_43 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
			t9 * L_44 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_43, L_44);
		}

IL_00e7:
		{
			t9 * L_45 = p0;
			V_5 = ((t9 *)IsInst(L_45, InitializedTypeInfo(&t2172_TI)));
			t9 * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t9 * L_47 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f4;
			t9 * L_48 = p0;
			t126 * L_49 = m2486(L_48, &m2486_MI);
			t2* L_50 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_49);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m11937_MI, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			t9 * L_52 = V_5;
			InterfaceActionInvoker1< t9 * >::Invoke(&m12014_MI, L_52, NULL);
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
		m1069(NULL, L_53, &m1069_MI);
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
extern "C" t158* m9793 (t9 * __this , MethodInfo* method)
{
	t1161 * V_0 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t1161 * L_1 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_1);
		V_1 = L_2;
		t9 * L_3 = V_1;
		m1067(NULL, L_3, &m1067_MI);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
			t1161 * L_4 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f0;
			t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_4);
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
				V_4 = ((t9 *)IsInst(L_8, InitializedTypeInfo(&t2172_TI)));
				t9 * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				t9 * L_10 = V_4;
				t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12015_MI, L_10);
				V_5 = L_11;
				t9 * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				t1161 * L_13 = V_0;
				t9 * L_14 = V_5;
				VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_13, L_14);
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
		m1069(NULL, L_20, &m1069_MI);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0075:
	{
		t1161 * L_21 = V_0;
		t158* L_22 = (t158*)VirtFuncInvoker0< t158* >::Invoke(&m8416_MI, L_21);
		return L_22;
	}
}
#include "t1857.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1857_TI;
#include "t1857MD.h"

extern MethodInfo m10057_MI;


extern MethodInfo m9794_MI;
extern "C" void m9794 (t1857 * __this, int32_t p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = 0;
		t9 * L_1 = Box(InitializedTypeInfo(&t125_TI), &L_0);
		__this->f0 = L_1;
		int32_t L_2 = p0;
		__this->f1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t2* L_3 = m10057(NULL, &m10057_MI);
		__this->f2 = L_3;
		return;
	}
}
#include "t1858.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1858_TI;
#include "t1858MD.h"

extern MethodInfo m11015_MI;
extern MethodInfo m9795_MI;


extern "C" void m9795 (t1858 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9796_MI;
extern "C" void m9796 (t9 * __this , MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t9_TI));
		m336(L_0, &m336_MI);
		((t1858_SFs*)InitializedTypeInfo(&t1858_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m9797_MI;
extern "C" void m9797 (t9 * __this , MethodInfo* method)
{
	t9 * V_0 = {0};
	t1858 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1858_TI));
		t9 * L_0 = ((t1858_SFs*)InitializedTypeInfo(&t1858_TI)->static_fields)->f0;
		V_0 = L_0;
		t9 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1858_TI));
		t1858 * L_2 = (t1858 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1858_TI));
		m9795(L_2, &m9795_MI);
		V_1 = L_2;
		t1858 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		m9791(NULL, L_3, &m9791_MI);
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
		m1069(NULL, L_4, &m1069_MI);
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
extern MethodInfo m9798_MI;
extern "C" t2* m9798 (t1858 * __this, MethodInfo* method)
{
	{
		return (t2*) &_stringLiteral2083;
	}
}
extern MethodInfo m9799_MI;
extern "C" int32_t m9799 (t1858 * __this, MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
extern MethodInfo m9800_MI;
extern "C" t9 * m9800 (t1858 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		int32_t L_0 = m11015(NULL, &m11015_MI);
		t1857 * L_1 = (t1857 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1857_TI));
		m9794(L_1, L_0, &m9794_MI);
		return L_1;
	}
}
extern MethodInfo m9801_MI;
extern "C" void m9801 (t1858 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
#include "t1859.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1859_TI;
#include "t1859MD.h"

#include "t1149.h"
extern TypeInfo t1149_TI;
#include "t1149MD.h"
extern Il2CppType t1859_0_0_0;
extern MethodInfo m5883_MI;


extern MethodInfo m9802_MI;
extern "C" void m9802 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_0, &m5883_MI);
		((t1859_SFs*)InitializedTypeInfo(&t1859_TI)->static_fields)->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(&t1859_0_0_0), &m329_MI);
		t821 * L_2 = (t821 *)VirtFuncInvoker2< t821 *, t2*, int32_t >::Invoke(&m7754_MI, L_1, (t2*) &_stringLiteral2084, ((int32_t)40));
		((t1859_SFs*)InitializedTypeInfo(&t1859_TI)->static_fields)->f1 = L_2;
		return;
	}
}
extern MethodInfo m9803_MI;
extern "C" int32_t m9803 (t1859 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t1852MD.h"

#include "t1882.h"
extern TypeInfo t1860_TI;
extern TypeInfo t1882_TI;
extern TypeInfo t2173_TI;
extern TypeInfo t1395_TI;
#include "t2027MD.h"
#include "t1882MD.h"
extern MethodInfo m11099_MI;
extern MethodInfo m12016_MI;
extern MethodInfo m12017_MI;


extern MethodInfo m9804_MI;
extern "C" void m9804 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_0, &m5883_MI);
		((t1852_SFs*)InitializedTypeInfo(&t1852_TI)->static_fields)->f2 = L_0;
		return;
	}
}
extern MethodInfo m9805_MI;
extern "C" void m9805 (t1852 * __this, MethodInfo* method)
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
extern MethodInfo m9806_MI;
extern "C" t1852 * m9806 (t9 * __this , MethodInfo* method)
{
	{
		t1852 * L_0 = m11099(NULL, &m11099_MI);
		return L_0;
	}
}
extern MethodInfo m9807_MI;
extern "C" bool m9807 (t1852 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m9808_MI;
extern "C" t9 * m9808 (t1852 * __this, t2* p0, MethodInfo* method)
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
		t1161 * L_0 = (__this->f1);
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
		t1161 * L_1 = (__this->f1);
		t9 * L_2 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_1);
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
			V_0 = ((t9 *)Castclass(L_4, InitializedTypeInfo(&t1860_TI)));
			t9 * L_5 = V_0;
			t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12016_MI, L_5);
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
extern MethodInfo m9809_MI;
extern "C" t2* m9809 (t1852 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		int32_t L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t125_TI), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral2085, L_2, &m511_MI);
		return L_3;
	}
}
extern MethodInfo m9810_MI;
extern "C" t9 * m9810 (t1852 * __this, t1200 * p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1882_TI));
		t1882 * L_0 = ((t1882_SFs*)InitializedTypeInfo(&t1882_TI)->static_fields)->f0;
		V_0 = L_0;
		t1161 * L_1 = (__this->f1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		t1161 * L_2 = (__this->f1);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5699_MI, L_2);
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
			V_1 = ((t9 *)Castclass(L_5, InitializedTypeInfo(&t1860_TI)));
			t9 * L_6 = V_1;
			V_3 = ((t9 *)IsInst(L_6, InitializedTypeInfo(&t2173_TI)));
			t9 * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			t9 * L_8 = V_3;
			t1200 * L_9 = p0;
			t9 * L_10 = V_0;
			t9 * L_11 = (t9 *)InterfaceFuncInvoker2< t9 *, t1200 *, t9 * >::Invoke(&m12017_MI, L_8, L_9, L_10);
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
#include "t1850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1850_TI;
#include "t1850MD.h"

extern MethodInfo m12018_MI;
extern MethodInfo m5915_MI;
extern MethodInfo m12019_MI;


extern MethodInfo m9811_MI;
extern "C" void m9811 (t1850 * __this, t2* p0, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9812_MI;
extern "C" t2* m9812 (t1850 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9813_MI;
extern "C" bool m9813 (t1850 * __this, t9 * p0, MethodInfo* method)
{
	t1850 * V_0 = {0};
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
		if (((t1850 *)IsInst(L_1, InitializedTypeInfo(&t1850_TI))))
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
		V_0 = ((t1850 *)Castclass(L_2, InitializedTypeInfo(&t1850_TI)));
		t1850 * L_3 = V_0;
		t2* L_4 = (L_3->f0);
		t2* L_5 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m2713(NULL, L_4, L_5, &m2713_MI);
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
extern MethodInfo m9814_MI;
extern "C" int32_t m9814 (t1850 * __this, MethodInfo* method)
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_1);
		return L_2;
	}
}
extern MethodInfo m9815_MI;
extern "C" void m9815 (t1850 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2086, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		t9 * L_3 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12018_MI, L_2);
		V_0 = L_3;
		t9 * L_4 = V_0;
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5915_MI, L_4, __this);
		return;
	}
}
extern MethodInfo m9816_MI;
extern "C" bool m9816 (t1850 * __this, t1852 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral2086, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t1852 * L_2 = p0;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral2087, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		t9 * L_4 = p1;
		t126 * L_5 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12019_MI, L_4);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7725_MI, L_5);
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
		t1852 * L_7 = p0;
		t2* L_8 = (__this->f0);
		t9 * L_9 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9808_MI, L_7, L_8);
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
		if ((((t9*)(t1850 *)__this) == ((t9*)(t9 *)L_11)))
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



extern "C" void m9817 (t1855 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t1861.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1861_TI;
#include "t1861MD.h"

#include "t1862.h"
#include "t1477.h"
#include "t1863.h"
extern TypeInfo t1477_TI;
extern TypeInfo t1862_TI;
#include "t1477MD.h"
#include "t1862MD.h"
extern MethodInfo m6965_MI;
extern MethodInfo m9821_MI;
extern MethodInfo m11013_MI;
extern MethodInfo m10998_MI;
extern MethodInfo m9819_MI;
extern MethodInfo m10995_MI;
extern MethodInfo m9820_MI;


extern MethodInfo m9818_MI;
extern "C" void m9818 (t1861 * __this, MethodInfo* method)
{
	{
		m9819(__this, 8, 0, &m9819_MI);
		return;
	}
}
extern "C" void m9819 (t1861 * __this, int32_t p0, bool p1, MethodInfo* method)
{
	{
		t1862 * L_0 = (t1862 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1862_TI));
		m10995(L_0, 0, &m10995_MI);
		__this->f4 = L_0;
		m9811(__this, (t2*) &_stringLiteral2088, &m9811_MI);
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
		t556 * L_5 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_5, (t2*) &_stringLiteral563, &m2885_MI);
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
extern "C" void m9820 (t1861 * __this, bool p0, MethodInfo* method)
{
	t1861 * V_0 = {0};
	t1861 * V_1 = {0};
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
		t1862 * L_1 = (__this->f4);
		VirtFuncInvoker0< bool >::Invoke(&m6965_MI, L_1);
		V_0 = __this;
		t1861 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
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
			m9821(__this, &m9821_MI);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1863 * L_5 = m11013(NULL, &m11013_MI);
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
		t1861 * L_6 = V_0;
		m1069(NULL, L_6, &m1069_MI);
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
		t1861 * L_7 = V_1;
		m1067(NULL, L_7, &m1067_MI);
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
			t1862 * L_9 = (__this->f4);
			m10998(L_9, &m10998_MI);
			__this->f5 = (t1863 *)NULL;
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
			t1863 * L_11 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1863 * L_12 = m11013(NULL, &m11013_MI);
			if ((((t9*)(t1863 *)L_11) == ((t9*)(t1863 *)L_12)))
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
		t1861 * L_13 = V_1;
		m1069(NULL, L_13, &m1069_MI);
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
extern "C" void m9821 (t1861 * __this, MethodInfo* method)
{
	t1861 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1861 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
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
			t1863 * L_2 = (__this->f5);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
			t1863 * L_3 = m11013(NULL, &m11013_MI);
			if ((!(((t9*)(t1863 *)L_2) == ((t9*)(t1863 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->f3);
			__this->f3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			t1862 * L_5 = (__this->f4);
			m10998(L_5, &m10998_MI);
			__this->f5 = (t1863 *)NULL;
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
		t1861 * L_6 = V_0;
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
		return;
	}
}
extern MethodInfo m9822_MI;
extern "C" void m9822 (t1861 * __this, t9 * p0, MethodInfo* method)
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
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12018_MI, L_1);
		InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m5915_MI, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
extern MethodInfo m9823_MI;
extern "C" bool m9823 (t1861 * __this, t1852 * p0, t9 * p1, MethodInfo* method)
{
	t1861 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t1852 * L_0 = p0;
		t9 * L_1 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9808_MI, L_0, (t2*) &_stringLiteral2088);
		V_0 = ((t1861 *)IsInst(L_1, InitializedTypeInfo(&t1861_TI)));
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
		t1861 * L_4 = V_0;
		return ((((t9*)(t1861 *)L_4) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0047:
	{
		t1861 * L_5 = V_0;
		return ((((int32_t)((((t9*)(t1861 *)L_5) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern MethodInfo m9824_MI;
extern "C" void m9824 (t9 * __this , MethodInfo* method)
{
	t1861 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1852 * L_0 = m11011(NULL, &m11011_MI);
		bool L_1 = m9807(L_0, &m9807_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1852 * L_2 = m11011(NULL, &m11011_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9808_MI, L_2, (t2*) &_stringLiteral2088);
		V_0 = ((t1861 *)IsInst(L_3, InitializedTypeInfo(&t1861_TI)));
		t1861 * L_4 = V_0;
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
		t1861 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9820_MI, L_5, 0);
		return;
	}
}
extern MethodInfo m9825_MI;
extern "C" void m9825 (t9 * __this , MethodInfo* method)
{
	t1861 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1852 * L_0 = m11011(NULL, &m11011_MI);
		bool L_1 = m9807(L_0, &m9807_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1863_TI));
		t1852 * L_2 = m11011(NULL, &m11011_MI);
		t9 * L_3 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9808_MI, L_2, (t2*) &_stringLiteral2088);
		V_0 = ((t1861 *)IsInst(L_3, InitializedTypeInfo(&t1861_TI)));
		t1861 * L_4 = V_0;
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
		t1861 * L_5 = V_0;
		VirtActionInvoker1< bool >::Invoke(&m9820_MI, L_5, 1);
		return;
	}
}
#include "t1864.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1864_TI;
#include "t1864MD.h"



extern MethodInfo m9826_MI;
extern "C" void m9826 (t1864 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m9827_MI;
extern "C" t297  m9827 (t1864 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m9827((t1864 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t297  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t297  (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t297  (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t297  pinvoke_delegate_wrapper_t1864(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
extern MethodInfo m9828_MI;
extern "C" t9 * m9828 (t1864 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m9829_MI;
extern "C" t297  m9829 (t1864 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t297 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1866.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1866_TI;
#include "t1866MD.h"

#include "t269.h"
#include "t1677.h"
#include "t2062.h"
#include "t2061.h"
extern TypeInfo t269_TI;
extern TypeInfo t1871_TI;
extern TypeInfo t1677_TI;
extern TypeInfo t1868_TI;
extern TypeInfo t462_TI;
extern TypeInfo t463_TI;
extern TypeInfo t2062_TI;
#include "t269MD.h"
#include "t1871MD.h"
#include "t1677MD.h"
#include "t2062MD.h"
#include "t2069MD.h"
extern MethodInfo m1084_MI;
extern MethodInfo m11440_MI;
extern MethodInfo m2395_MI;
extern MethodInfo m11437_MI;
extern MethodInfo m11813_MI;
extern MethodInfo m5742_MI;
extern MethodInfo m9849_MI;
extern MethodInfo m9850_MI;
extern MethodInfo m9851_MI;
extern MethodInfo m5825_MI;
extern MethodInfo m9831_MI;
extern MethodInfo m4226_MI;
extern MethodInfo m5909_MI;
extern MethodInfo m11814_MI;
extern MethodInfo m8505_MI;
extern MethodInfo m9840_MI;
extern MethodInfo m8507_MI;
extern MethodInfo m8515_MI;
extern MethodInfo m12020_MI;
extern MethodInfo m6996_MI;
extern MethodInfo m9841_MI;
extern MethodInfo m11907_MI;
extern MethodInfo m11046_MI;
extern MethodInfo m11816_MI;
extern MethodInfo m9837_MI;
extern MethodInfo m8513_MI;
extern MethodInfo m9838_MI;


extern MethodInfo m9830_MI;
extern "C" void m9830 (t1866 * __this, MethodInfo* method)
{
	{
		m5742(__this, &m5742_MI);
		__this->f2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_0 = m9849(NULL, &m9849_MI);
		__this->f3 = L_0;
		t297  L_1 = m9850(NULL, &m9850_MI);
		__this->f4 = L_1;
		t297  L_2 = m9851(NULL, &m9851_MI);
		__this->f5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_3 = m1084(NULL, &m1084_MI);
		t297  L_4 = (__this->f3);
		t269  L_5 = m11437(NULL, L_3, L_4, &m11437_MI);
		__this->f1 = L_5;
		return;
	}
}
extern "C" t297  m9831 (t1866 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_1 = m1084(NULL, &m1084_MI);
		t297  L_2 = m11440(NULL, L_0, L_1, &m11440_MI);
		return L_2;
	}
}
extern MethodInfo m9832_MI;
extern "C" int32_t m9832 (t1866 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9833_MI;
extern "C" void m9833 (t1866 * __this, MethodInfo* method)
{
	{
		__this->f2 = 2;
		return;
	}
}
extern MethodInfo m9834_MI;
extern "C" void m9834 (t1866 * __this, t297  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1867_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2395(NULL, (t2*) &_stringLiteral2089, L_3, (t2*) &_stringLiteral140, &m2395_MI);
		t1917 * L_5 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_5, L_4, &m10060_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t297  L_6 = p0;
		__this->f3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_7 = m1084(NULL, &m1084_MI);
		t297  L_8 = (__this->f3);
		t269  L_9 = m11437(NULL, L_7, L_8, &m11437_MI);
		__this->f1 = L_9;
		t297  L_10 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_11 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		bool L_12 = m11813(NULL, L_10, L_11, &m11813_MI);
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
extern MethodInfo m9835_MI;
extern "C" void m9835 (t1866 * __this, t297  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1867_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2395(NULL, (t2*) &_stringLiteral2090, L_3, (t2*) &_stringLiteral140, &m2395_MI);
		t1917 * L_5 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_5, L_4, &m10060_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t297  L_6 = p0;
		__this->f4 = L_6;
		return;
	}
}
extern MethodInfo m9836_MI;
extern "C" void m9836 (t1866 * __this, t297  p0, MethodInfo* method)
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
		t9 * L_3 = Box(InitializedTypeInfo(&t1867_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m2395(NULL, (t2*) &_stringLiteral2091, L_3, (t2*) &_stringLiteral140, &m2395_MI);
		t1917 * L_5 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_5, L_4, &m10060_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		t297  L_6 = p0;
		__this->f5 = L_6;
		return;
	}
}
extern "C" t297  m9837 (t1866 * __this, t297  p0, MethodInfo* method)
{
	t269  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_0 = m1084(NULL, &m1084_MI);
		t297  L_1 = p0;
		t269  L_2 = m11437(NULL, L_0, L_1, &m11437_MI);
		V_0 = L_2;
		t269  L_3 = V_0;
		t269  L_4 = (__this->f1);
		bool L_5 = m5825(NULL, L_3, L_4, &m5825_MI);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		t269  L_6 = V_0;
		__this->f1 = L_6;
	}

IL_0021:
	{
		t297  L_7 = (t297 )VirtFuncInvoker0< t297  >::Invoke(&m9831_MI, __this);
		return L_7;
	}
}
extern "C" void m9838 (t1866 * __this, t9 * p0, MethodInfo* method)
{
	t1866 * V_0 = {0};
	int32_t V_1 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1866 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1161 * L_1 = (__this->f6);
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
			t1161 * L_2 = (__this->f6);
			int32_t L_3 = V_1;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_2, L_3);
			t9 * L_5 = p0;
			bool L_6 = m4226(NULL, L_4, L_5, &m4226_MI);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			t1161 * L_7 = (__this->f6);
			int32_t L_8 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_7, L_8);
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
			t1161 * L_11 = (__this->f6);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_11);
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
		t1866 * L_13 = V_0;
		m1069(NULL, L_13, &m1069_MI);
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
extern MethodInfo m9839_MI;
extern "C" void m9839 (t1866 * __this, MethodInfo* method)
{
	t1866 * V_0 = {0};
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
		t297  L_1 = (t297 )VirtFuncInvoker0< t297  >::Invoke(&m9831_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_2 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
		bool L_3 = m11814(NULL, L_1, L_2, &m11814_MI);
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
		t1161 * L_4 = (__this->f6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->f2 = 3;
		V_0 = __this;
		t1866 * L_5 = V_0;
		m1067(NULL, L_5, &m1067_MI);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		t1161 * L_6 = (__this->f6);
		t1677 * L_7 = (t1677 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1677_TI));
		m8505(L_7, L_6, &m8505_MI);
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
		t1866 * L_8 = V_0;
		m1069(NULL, L_8, &m1069_MI);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_004e:
	{
		m9840(__this, &m9840_MI);
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
extern "C" void m9840 (t1866 * __this, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	{
		t1677 * L_0 = (__this->f7);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m8507_MI, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->f2 = 4;
		__this->f7 = (t1677 *)NULL;
		return;
	}

IL_001c:
	{
		t1677 * L_2 = (__this->f7);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8515_MI, L_2);
		V_0 = ((t9 *)Castclass(L_3, InitializedTypeInfo(&t1868_TI)));
		t9 * L_4 = V_0;
		t9 * L_5 = L_4;
		t58 L_6 = { GetInterfaceMethodInfo(L_5, &m12020_MI) };
		t1864 * L_7 = (t1864 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1864_TI));
		m9826(L_7, L_5, L_6, &m9826_MI);
		__this->f8 = L_7;
		t1864 * L_8 = (__this->f8);
		t9 * L_9 = (t9 *)VirtFuncInvoker3< t9 *, t9 *, t463 *, t9 * >::Invoke(&m9828_MI, L_8, __this, (t463 *)NULL, NULL);
		V_1 = L_9;
		t9 * L_10 = V_1;
		t1477 * L_11 = (t1477 *)InterfaceFuncInvoker0< t1477 * >::Invoke(&m6996_MI, L_10);
		t58 L_12 = { &m9841_MI };
		t2062 * L_13 = (t2062 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2062_TI));
		m11907(L_13, __this, L_12, &m11907_MI);
		t9 * L_14 = V_1;
		t297  L_15 = (__this->f5);
		m11046(NULL, L_11, L_13, L_14, L_15, 1, &m11046_MI);
		return;
	}
}
extern "C" void m9841 (t1866 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t297  V_1 = {0};
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
			V_0 = ((t9 *)Castclass(L_1, InitializedTypeInfo(&t462_TI)));
			t1864 * L_2 = (__this->f8);
			t9 * L_3 = V_0;
			t297  L_4 = (t297 )VirtFuncInvoker1< t297 , t9 * >::Invoke(&m9829_MI, L_2, L_3);
			V_1 = L_4;
			t297  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
			t297  L_6 = ((t297_SFs*)InitializedTypeInfo(&t297_TI)->static_fields)->f2;
			bool L_7 = m11816(NULL, L_5, L_6, &m11816_MI);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			t297  L_8 = V_1;
			VirtFuncInvoker1< t297 , t297  >::Invoke(&m9837_MI, __this, L_8);
			__this->f2 = 2;
			__this->f7 = (t1677 *)NULL;
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
		t1677 * L_9 = (__this->f7);
		t9 * L_10 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8513_MI, L_9);
		VirtActionInvoker1< t9 * >::Invoke(&m9838_MI, __this, ((t9 *)Castclass(L_10, InitializedTypeInfo(&t1868_TI))));
		m9840(__this, &m9840_MI);
	}

IL_005d:
	{
		return;
	}
}
#include "t1869.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1869_TI;
#include "t1869MD.h"

#include "t1580.h"
#include "t1870.h"
#include "t2074.h"
extern TypeInfo t2074_TI;
extern TypeInfo t1870_TI;
extern TypeInfo t1580_TI;
#include "t1580MD.h"
#include "t2074MD.h"
#include "t1870MD.h"
extern MethodInfo m10097_MI;
extern MethodInfo m9844_MI;
extern MethodInfo m9846_MI;
extern MethodInfo m11899_MI;
extern MethodInfo m9848_MI;
extern MethodInfo m11060_MI;
extern MethodInfo m11063_MI;
extern MethodInfo m10094_MI;
extern MethodInfo m9845_MI;


extern MethodInfo m9842_MI;
extern "C" void m9842 (t1869 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		__this->f0 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9843_MI;
extern "C" void m9843 (t1869 * __this, t1580 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1161 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			t1580 * L_3 = p0;
			t1866 * L_4 = m10097(L_3, &m10097_MI);
			m9833(L_4, &m9833_MI);
			t1161 * L_5 = (__this->f0);
			t1580 * L_6 = p0;
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_5, L_6);
			t1870 * L_7 = (__this->f1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			m9844(__this, &m9844_MI);
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
		m1069(NULL, L_8, &m1069_MI);
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
extern "C" void m9844 (t1869 * __this, MethodInfo* method)
{
	{
		t58 L_0 = { &m9846_MI };
		t2074 * L_1 = (t2074 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t2074_TI));
		m11899(L_1, __this, L_0, &m11899_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_2 = m9848(NULL, &m9848_MI);
		t297  L_3 = m9848(NULL, &m9848_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1870_TI));
		t1870 * L_4 = (t1870 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1870_TI));
		m11060(L_4, L_1, NULL, L_2, L_3, &m11060_MI);
		__this->f1 = L_4;
		return;
	}
}
extern "C" void m9845 (t1869 * __this, MethodInfo* method)
{
	t1870 * V_0 = {0};
	{
		t1870 * L_0 = (__this->f1);
		V_0 = L_0;
		__this->f1 = (t1870 *)NULL;
		t1870 * L_1 = V_0;
		VirtActionInvoker0::Invoke(&m11063_MI, L_1);
		return;
	}
}
extern "C" void m9846 (t1869 * __this, t9 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	int32_t V_1 = 0;
	t1580 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1161 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		V_0 = L_1;
		t9 * L_2 = V_0;
		m1067(NULL, L_2, &m1067_MI);
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
			t1161 * L_3 = (__this->f0);
			int32_t L_4 = V_1;
			t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, int32_t >::Invoke(&m5696_MI, L_3, L_4);
			V_2 = ((t1580 *)Castclass(L_5, InitializedTypeInfo(&t1580_TI)));
			t1580 * L_6 = V_2;
			t1866 * L_7 = m10097(L_6, &m10097_MI);
			m9839(L_7, &m9839_MI);
			t1580 * L_8 = V_2;
			t1866 * L_9 = m10097(L_8, &m10097_MI);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9832_MI, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			t1161 * L_11 = (__this->f0);
			int32_t L_12 = V_1;
			VirtActionInvoker1< int32_t >::Invoke(&m5909_MI, L_11, L_12);
			t1580 * L_13 = V_2;
			VirtActionInvoker0::Invoke(&m10094_MI, L_13);
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
			t1161 * L_16 = (__this->f0);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			t1161 * L_18 = (__this->f0);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			m9845(__this, &m9845_MI);
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
		m1069(NULL, L_20, &m1069_MI);
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
#include "t1867MD.h"



#include "t1871.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11806_MI;


extern MethodInfo m9847_MI;
extern "C" void m9847 (t9 * __this , MethodInfo* method)
{
	{
		t1869 * L_0 = (t1869 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1869_TI));
		m9842(L_0, &m9842_MI);
		((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t297_TI));
		t297  L_1 = m11806(NULL, (10.0), &m11806_MI);
		((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f0 = L_1;
		t297  L_2 = m11805(NULL, (5.0), &m11805_MI);
		((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f1 = L_2;
		t297  L_3 = m11805(NULL, (2.0), &m11805_MI);
		((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f2 = L_3;
		t297  L_4 = m11805(NULL, (2.0), &m11805_MI);
		((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f3 = L_4;
		return;
	}
}
extern "C" t297  m9848 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_0 = ((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f0;
		return L_0;
	}
}
extern "C" t297  m9849 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_0 = ((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t297  m9850 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_0 = ((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f2;
		return L_0;
	}
}
extern "C" t297  m9851 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t297  L_0 = ((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m9852_MI;
extern "C" void m9852 (t9 * __this , t1580 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1871_TI));
		t1869 * L_0 = ((t1871_SFs*)InitializedTypeInfo(&t1871_TI)->static_fields)->f4;
		t1580 * L_1 = p0;
		m9843(L_0, L_1, &m9843_MI);
		return;
	}
}
#include "t1872.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1872_TI;
#include "t1872MD.h"



#include "t1873.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1873_TI;
#include "t1873MD.h"

extern TypeInfo t1088_TI;
extern Il2CppType t1088_0_0_0;


extern MethodInfo m9853_MI;
extern TypeInfo* t1088_TI_var;
extern "C" void m9853 (t1873 * __this, t907 * p0, uint8_t p1, MethodInfo* method)
{
	static bool m9853_init;
	if (!m9853_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		m9853_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		m336(__this, &m336_MI);
		t907 * L_0 = p0;
		__this->f2 = L_0;
		t907 * L_1 = (__this->f2);
		t921* L_2 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_1);
		V_0 = L_2;
		t921* L_3 = V_0;
		__this->f0 = ((t1088*)SZArrayNew(t1088_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
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
		t921* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_5, L_7)));
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		t1088* L_10 = (__this->f0);
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
		t921* L_17 = V_0;
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
		t921* L_18 = V_0;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		t126 * L_21 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_18, L_20)));
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7723_MI, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		t921* L_23 = V_0;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		bool L_26 = m9675((*(t917 **)(t917 **)SZArrayLdElema(L_23, L_25)), &m9675_MI);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		t1088* L_27 = (__this->f0);
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
		t921* L_34 = V_0;
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
extern MethodInfo m9854_MI;
extern "C" int32_t m9854 (t1873 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9855_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9855 (t1873 * __this, t158* p0, MethodInfo* method)
{
	static bool m9855_init;
	if (!m9855_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9855_init = true;
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
		t1088* L_4 = (__this->f0);
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
#include "t1874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1874_TI;
#include "t1874MD.h"

#include "t1476.h"
#include "t1876.h"
extern TypeInfo t1476_TI;
#include "t1476MD.h"
#include "t1539MD.h"
#include "t463MD.h"
extern MethodInfo m6954_MI;
extern MethodInfo m561_MI;
extern MethodInfo m9858_MI;
extern MethodInfo m6955_MI;
extern MethodInfo m7808_MI;


extern MethodInfo m9856_MI;
extern "C" void m9856 (t1874 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9857_MI;
extern "C" t9 * m9857 (t1874 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t1477 * m9858 (t1874 * __this, MethodInfo* method)
{
	t1874 * V_0 = {0};
	t1477 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1874 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			t1477 * L_1 = (__this->f1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->f6);
			t1476 * L_3 = (t1476 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1476_TI));
			m6954(L_3, L_2, &m6954_MI);
			__this->f1 = L_3;
		}

IL_0021:
		{
			t1477 * L_4 = (__this->f1);
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
		t1874 * L_5 = V_0;
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
extern MethodInfo m9859_MI;
extern "C" bool m9859 (t1874 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m9860_MI;
extern "C" bool m9860 (t1874 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m9861_MI;
extern "C" bool m9861 (t1874 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9862_MI;
extern "C" void m9862 (t1874 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m9863_MI;
extern "C" t9 * m9863 (t1874 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m9864_MI;
extern "C" t9 * m9864 (t1874 * __this, MethodInfo* method)
{
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9865_MI;
extern "C" t9 * m9865 (t1874 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m9866_MI;
extern "C" t9 * m9866 (t1874 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m9867_MI;
extern "C" void m9867 (t1874 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern MethodInfo m9868_MI;
extern "C" void m9868 (t1874 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m9869_MI;
extern "C" t9 * m9869 (t1874 * __this, MethodInfo* method)
{
	t1874 * V_0 = {0};
	t9 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		t1874 * L_0 = V_0;
		m1067(NULL, L_0, &m1067_MI);
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
		t1874 * L_3 = V_0;
		m1069(NULL, L_3, &m1069_MI);
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
		t1477 * L_4 = (t1477 *)VirtFuncInvoker0< t1477 * >::Invoke(&m9858_MI, __this);
		VirtFuncInvoker0< bool >::Invoke(&m6965_MI, L_4);
		t9 * L_5 = (__this->f14);
		return L_5;
	}

IL_0035:
	{
		t9 * L_6 = V_1;
		return L_6;
	}
}
extern MethodInfo m9870_MI;
extern "C" t9 * m9870 (t1874 * __this, t9 * p0, MethodInfo* method)
{
	t1874 * V_0 = {0};
	t463 * V_1 = {0};
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
		t1874 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->f6 = 1;
			t1477 * L_2 = (__this->f1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			t1477 * L_3 = (t1477 *)VirtFuncInvoker0< t1477 * >::Invoke(&m9858_MI, __this);
			m6955(((t1476 *)Castclass(L_3, InitializedTypeInfo(&t1476_TI))), &m6955_MI);
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
		t1874 * L_4 = V_0;
		m1069(NULL, L_4, &m1069_MI);
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
		V_1 = ((t463 *)Castclass(L_6, InitializedTypeInfo(&t463_TI)));
		t463 * L_7 = V_1;
		VirtActionInvoker1< t9 * >::Invoke(&m7808_MI, L_7, __this);
	}

IL_0053:
	{
		return (t9 *)NULL;
	}
}
extern MethodInfo m9871_MI;
extern "C" t1876 * m9871 (t1874 * __this, MethodInfo* method)
{
	{
		t1876 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m9872_MI;
extern "C" void m9872 (t1874 * __this, t1876 * p0, MethodInfo* method)
{
	{
		t1876 * L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1879.h"
#include "t1880.h"
#include "t713.h"
extern TypeInfo t1879_TI;
extern TypeInfo t1151_TI;
extern TypeInfo t1880_TI;
extern TypeInfo t713_TI;
extern TypeInfo t1093_TI;
extern TypeInfo t1094_TI;
#include "t1879MD.h"
#include "t1880MD.h"
#include "t1881MD.h"
#include "t713MD.h"
extern Il2CppType t713_0_0_0;
extern MethodInfo m7742_MI;
extern MethodInfo m9914_MI;
extern MethodInfo m9904_MI;
extern MethodInfo m9903_MI;
extern MethodInfo m9887_MI;
extern MethodInfo m9937_MI;
extern MethodInfo m5747_MI;
extern MethodInfo m5748_MI;
extern MethodInfo m5749_MI;
extern MethodInfo m9906_MI;
extern MethodInfo m9907_MI;
extern MethodInfo m5673_MI;
extern Il2CppGenericMethod m5747_GM;
extern Il2CppGenericMethod m5748_GM;
extern Il2CppGenericMethod m5749_GM;


extern "C" void m9873 (t1844 * __this, t126 * p0, MethodInfo* method)
{
	{
		m9904(__this, &m9904_MI);
		t126 * L_0 = p0;
		__this->f14 = L_0;
		t126 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_1);
		__this->f15 = L_2;
		__this->f16 = 1;
		return;
	}
}
extern MethodInfo m9874_MI;
extern "C" void m9874 (t1844 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m9903(__this, L_0, L_1, &m9903_MI);
		return;
	}
}
extern MethodInfo m9875_MI;
extern "C" void m9875 (t1844 * __this, MethodInfo* method)
{
	t1880 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t1880 * L_0 = (t1880 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1880_TI));
		m9887(L_0, __this, &m9887_MI);
		V_0 = L_0;
		t1880 * L_1 = V_0;
		__this->f8 = L_1;
		t1880 * L_2 = V_0;
		t9 * L_3 = m9937(L_2, &m9937_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" void m9876 (t1844 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f16 = L_0;
		return;
	}
}
extern MethodInfo m9877_MI;
extern "C" t126 * m9877 (t1844 * __this, MethodInfo* method)
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
		t126 * L_2 = m7742(NULL, L_1, &m7742_MI);
		__this->f14 = L_2;
	}

IL_0019:
	{
		t126 * L_3 = (__this->f14);
		return L_3;
	}
}
extern MethodInfo m9878_MI;
extern "C" t2* m9878 (t1844 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m9879_MI;
extern "C" t9 * m9879 (t1844 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f11);
		return L_0;
	}
}
extern "C" void m9880 (t1844 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f11 = L_0;
		return;
	}
}
extern MethodInfo m9881_MI;
extern "C" t158* m9881 (t1844 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f12);
		return L_0;
	}
}
extern "C" void m9882 (t1844 * __this, t158* p0, MethodInfo* method)
{
	{
		t158* L_0 = p0;
		__this->f12 = L_0;
		return;
	}
}
extern MethodInfo m9883_MI;
extern "C" t9 * m9883 (t1844 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_1 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_1, &m5698_MI);
		__this->f13 = L_1;
	}

IL_0013:
	{
		t9 * L_2 = (__this->f13);
		return L_2;
	}
}
extern MethodInfo m9884_MI;
extern TypeInfo* t713_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m9884 (t1844 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9884_init;
	if (!m9884_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9884_init = true;
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
			goto IL_00c4;
		}
	}
	{
		t713 * L_2 = ((t1844_SFs*)InitializedTypeInfo(&t1844_TI)->static_fields)->f17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 5, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2092, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2093, 1);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2094, 2);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2095, 3);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2096, 4);
		t713 * L_9 = V_1;
		((t1844_SFs*)InitializedTypeInfo(&t1844_TI)->static_fields)->f17 = L_9;
	}

IL_0058:
	{
		t713 * L_10 = ((t1844_SFs*)InitializedTypeInfo(&t1844_TI)->static_fields)->f17;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_10, L_11, (&V_2));
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
		__this->f11 = ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1843_TI)));
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
		__this->f13 = ((t9 *)Castclass(L_17, InitializedTypeInfo(&t992_TI)));
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
		m9906(__this, L_19, L_20, &m9906_MI);
		return;
	}
}
extern MethodInfo m9885_MI;
extern "C" void m9885 (t1844 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t1093 * L_0 = p0;
		t1094  L_1 = p1;
		m9907(__this, L_0, L_1, &m9907_MI);
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
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_4);
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
		t1093 * L_6 = p0;
		t9 * L_7 = (__this->f11);
		m5715(L_6, (t2*) &_stringLiteral2092, L_7, &m5715_MI);
		t1093 * L_8 = p0;
		t158* L_9 = (__this->f12);
		m5715(L_8, (t2*) &_stringLiteral2093, (t9 *)(t9 *)L_9, &m5715_MI);
		t1093 * L_10 = p0;
		m5715(L_10, (t2*) &_stringLiteral2094, NULL, &m5715_MI);
		t1093 * L_11 = p0;
		t9 * L_12 = V_0;
		m5715(L_11, (t2*) &_stringLiteral2095, L_12, &m5715_MI);
		t1093 * L_13 = p0;
		t2* L_14 = (__this->f15);
		m5715(L_13, (t2*) &_stringLiteral2096, L_14, &m5715_MI);
		return;
	}
}
extern MethodInfo m9886_MI;
extern "C" t9 * m9886 (t1844 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = m9914(__this, &m9914_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1881.h"
extern TypeInfo t1881_TI;
extern MethodInfo m9933_MI;
extern MethodInfo m9935_MI;
extern MethodInfo m12021_MI;
extern MethodInfo m12022_MI;
extern MethodInfo m12023_MI;
extern MethodInfo m9941_MI;
extern MethodInfo m12024_MI;
extern MethodInfo m9942_MI;


extern "C" void m9887 (t1880 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9933(__this, L_0, &m9933_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t221* L_1 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f6;
		m9935(__this, L_1, &m9935_MI);
		return;
	}
}
extern MethodInfo m9888_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9888 (t9 * __this , MethodInfo* method)
{
	static bool m9888_init;
	if (!m9888_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9888_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)11)));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2100);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2100;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2101;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2102);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2102;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2093);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2093;
		t221* L_7 = L_6;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2094);
		*((t2**)(t2**)SZArrayLdElema(L_7, 7)) = (t2*)(t2*) &_stringLiteral2094;
		t221* L_8 = L_7;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral2095);
		*((t2**)(t2**)SZArrayLdElema(L_8, 8)) = (t2*)(t2*) &_stringLiteral2095;
		t221* L_9 = L_8;
		ArrayElementTypeCheck (L_9, (t2*) &_stringLiteral2092);
		*((t2**)(t2**)SZArrayLdElema(L_9, ((int32_t)9))) = (t2*)(t2*) &_stringLiteral2092;
		t221* L_10 = L_9;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral2096);
		*((t2**)(t2**)SZArrayLdElema(L_10, ((int32_t)10))) = (t2*)(t2*) &_stringLiteral2096;
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f6 = L_10;
		return;
	}
}
extern MethodInfo m9889_MI;
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" t9 * m9889 (t1880 * __this, t2* p0, MethodInfo* method)
{
	static bool m9889_init;
	if (!m9889_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9889_init = true;
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
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t713 * L_2 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 5, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2092, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2093, 1);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2094, 2);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2095, 3);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2096, 4);
		t713 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t713 * L_10 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f7;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_10, L_11, (&V_2));
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
		t9 * L_15 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12021_MI, ((t9 *)Castclass(L_14, InitializedTypeInfo(&t1851_TI))));
		return L_15;
	}

IL_0094:
	{
		t9 * L_16 = (__this->f1);
		t158* L_17 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12022_MI, ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1851_TI))));
		return (t9 *)L_17;
	}

IL_00a5:
	{
		t9 * L_18 = (__this->f1);
		t126 * L_19 = (t126 *)InterfaceFuncInvoker0< t126 * >::Invoke(&m12019_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t1851_TI))));
		return L_19;
	}

IL_00b6:
	{
		t9 * L_20 = (__this->f1);
		t9 * L_21 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12018_MI, ((t9 *)Castclass(L_20, InitializedTypeInfo(&t1851_TI))));
		return L_21;
	}

IL_00c7:
	{
		t9 * L_22 = (__this->f1);
		t2* L_23 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12023_MI, ((t9 *)Castclass(L_22, InitializedTypeInfo(&t1851_TI))));
		return L_23;
	}

IL_00d8:
	{
		t2* L_24 = p0;
		t9 * L_25 = m9941(__this, L_24, &m9941_MI);
		return L_25;
	}
}
extern MethodInfo m9890_MI;
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m9890 (t1880 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9890_init;
	if (!m9890_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9890_init = true;
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
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t713 * L_2 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 5, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2092, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2093, 1);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2094, 1);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2095, 1);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2096, 1);
		t713 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1880_TI));
		t713 * L_10 = ((t1880_SFs*)InitializedTypeInfo(&t1880_TI)->static_fields)->f8;
		t2* L_11 = V_0;
		bool L_12 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_10, L_11, (&V_2));
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
		InterfaceActionInvoker1< t9 * >::Invoke(&m12024_MI, ((t9 *)Castclass(L_15, InitializedTypeInfo(&t1851_TI))), ((t9 *)Castclass(L_16, InitializedTypeInfo(&t1843_TI))));
		goto IL_009d;
	}

IL_0088:
	{
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral2103, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		t2* L_18 = p0;
		t9 * L_19 = p1;
		m9942(__this, L_18, L_19, &m9942_MI);
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

extern MethodInfo m9891_MI;


extern "C" void m9891 (t1882 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9892_MI;
extern "C" void m9892 (t9 * __this , MethodInfo* method)
{
	{
		t1882 * L_0 = (t1882 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1882_TI));
		m9891(L_0, &m9891_MI);
		((t1882_SFs*)InitializedTypeInfo(&t1882_TI)->static_fields)->f0 = L_0;
		return;
	}
}
#include "t1883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1883_TI;
#include "t1883MD.h"

extern MethodInfo m9894_MI;
extern MethodInfo m9895_MI;


extern MethodInfo m9893_MI;
extern "C" void m9893 (t1883 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		m9894(__this, L_0, L_1, 1, &m9894_MI);
		return;
	}
}
extern "C" void m9894 (t1883 * __this, t2* p0, t9 * p1, bool p2, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = p2;
		m9895(__this, L_0, L_1, L_2, (t2*)NULL, &m9895_MI);
		return;
	}
}
extern "C" void m9895 (t1883 * __this, t2* p0, t9 * p1, bool p2, t2* p3, MethodInfo* method)
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
#include "t1884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1884_TI;
#include "t1884MD.h"

#include "t1885.h"
#include "t1965.h"
#include "t1967.h"
#include "t1155.h"
extern TypeInfo t1885_TI;
extern TypeInfo t1967_TI;
extern TypeInfo t1152_TI;
extern TypeInfo t1155_TI;
#include "t1885MD.h"
#include "t1967MD.h"
#include "t1965MD.h"
#include "t1155MD.h"
extern MethodInfo m5893_MI;
extern MethodInfo m9901_MI;
extern MethodInfo m10299_MI;
extern MethodInfo m10307_MI;
extern MethodInfo m10289_MI;
extern MethodInfo m10291_MI;
extern MethodInfo m9900_MI;
extern MethodInfo m10311_MI;
extern MethodInfo m8485_MI;
extern MethodInfo m8447_MI;
extern MethodInfo m8448_MI;
extern MethodInfo m5891_MI;


extern MethodInfo m9896_MI;
extern "C" void m9896 (t1884 * __this, MethodInfo* method)
{
	{
		t1885 * L_0 = (t1885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1885_TI));
		m9901(L_0, &m9901_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9897_MI;
extern "C" void m9897 (t1884 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t1965  V_0 = {0};
	t1967 * V_1 = {0};
	{
		t1885 * L_0 = (t1885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1885_TI));
		m9901(L_0, &m9901_MI);
		__this->f1 = L_0;
		m336(__this, &m336_MI);
		t1093 * L_1 = p0;
		t1967 * L_2 = m10299(L_1, &m10299_MI);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		t1967 * L_3 = V_1;
		t1965  L_4 = m10307(L_3, &m10307_MI);
		V_0 = L_4;
		t2* L_5 = m10289((&V_0), &m10289_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_6 = m331(NULL, L_5, (t2*) &_stringLiteral2104, &m331_MI);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		t9 * L_7 = m10291((&V_0), &m10291_MI);
		__this->f1 = ((t1885 *)Castclass(L_7, InitializedTypeInfo(&t1885_TI)));
		goto IL_005c;
	}

IL_0048:
	{
		t2* L_8 = m10289((&V_0), &m10289_MI);
		t9 * L_9 = m10291((&V_0), &m10291_MI);
		m9900(__this, L_8, L_9, &m9900_MI);
	}

IL_005c:
	{
		t1967 * L_10 = V_1;
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10311_MI, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
extern MethodInfo m9898_MI;
extern "C" bool m9898 (t1884 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t1149 * L_0 = (__this->f0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		t1149 * L_1 = (__this->f0);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5893_MI, L_1);
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
extern MethodInfo m9899_MI;
extern "C" void m9899 (t1884 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t1155  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1093 * L_0 = p0;
		t1885 * L_1 = (__this->f1);
		m5715(L_0, (t2*) &_stringLiteral2104, L_1, &m5715_MI);
		t1149 * L_2 = (__this->f0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		t1149 * L_3 = (__this->f0);
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m8485_MI, L_3);
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
			V_0 = ((*(t1155 *)((t1155 *)UnBox (L_6, InitializedTypeInfo(&t1155_TI)))));
			t1093 * L_7 = p0;
			t9 * L_8 = m8447((&V_0), &m8447_MI);
			t9 * L_9 = m8448((&V_0), &m8448_MI);
			m5715(L_7, ((t2*)Castclass(L_8, (&t2_TI))), L_9, &m5715_MI);
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
extern "C" void m9900 (t1884 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	{
		t1149 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_1 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_1, &m5883_MI);
		__this->f0 = L_1;
	}

IL_0013:
	{
		t1149 * L_2 = (__this->f0);
		t2* L_3 = p0;
		t9 * L_4 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m5891_MI, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m9901 (t1885 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1887.h"
extern TypeInfo t1887_TI;
#include "t1887MD.h"
extern MethodInfo m9918_MI;
extern MethodInfo m9921_MI;
extern MethodInfo m9915_MI;
extern MethodInfo m9911_MI;
extern MethodInfo m9519_MI;
extern MethodInfo m9920_MI;
extern MethodInfo m5675_MI;
extern MethodInfo m5682_MI;
extern MethodInfo m9925_MI;
extern MethodInfo m10065_MI;
extern MethodInfo m4419_MI;
extern MethodInfo m9922_MI;
extern MethodInfo m4269_MI;
extern MethodInfo m10073_MI;
extern MethodInfo m515_MI;
extern MethodInfo m7728_MI;
extern MethodInfo m10063_MI;
extern MethodInfo m10072_MI;
extern MethodInfo m9916_MI;
extern MethodInfo m9522_MI;
extern MethodInfo m9520_MI;
extern MethodInfo m9924_MI;
extern MethodInfo m9923_MI;
extern MethodInfo m4257_MI;
extern MethodInfo m4245_MI;
extern MethodInfo m2715_MI;
extern MethodInfo m4246_MI;


extern MethodInfo m9902_MI;
extern "C" void m9902 (t1879 * __this, t1886* p0, MethodInfo* method)
{
	t1883 * V_0 = {0};
	t1886* V_1 = {0};
	int32_t V_2 = 0;
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9920_MI, __this);
		t1886* L_0 = p0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t1886* L_1 = p0;
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
		t1886* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		t1886* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t1883 **)(t1883 **)SZArrayLdElema(L_3, L_5));
		t1883 * L_6 = V_0;
		t2* L_7 = (L_6->f2);
		t1883 * L_8 = V_0;
		t9 * L_9 = (L_8->f3);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9906_MI, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		t1886* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((t121 *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		m9921(__this, &m9921_MI);
		return;
	}
}
extern "C" void m9903 (t1879 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t1965  V_0 = {0};
	t1967 * V_1 = {0};
	{
		m336(__this, &m336_MI);
		VirtActionInvoker0::Invoke(&m9920_MI, __this);
		t1093 * L_0 = p0;
		t1967 * L_1 = m10299(L_0, &m10299_MI);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		t1967 * L_2 = V_1;
		t1965  L_3 = m10307(L_2, &m10307_MI);
		V_0 = L_3;
		t2* L_4 = m10289((&V_0), &m10289_MI);
		t9 * L_5 = m10291((&V_0), &m10291_MI);
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9906_MI, __this, L_4, L_5);
	}

IL_0030:
	{
		t1967 * L_6 = V_1;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10311_MI, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
extern "C" void m9904 (t1879 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9905_MI;
extern "C" void m9905 (t1879 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9918_MI, __this, L_0);
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern TypeInfo* t152_TI_var;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m9906 (t1879 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9906_init;
	if (!m9906_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9906_init = true;
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
			goto IL_0101;
		}
	}
	{
		t713 * L_2 = ((t1879_SFs*)InitializedTypeInfo(&t1879_TI)->static_fields)->f10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 7, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2099, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2098, 1);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2100, 2);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2101, 3);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2102, 4);
		t713 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_9, (t2*) &_stringLiteral2097, 5);
		t713 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_10, (t2*) &_stringLiteral2105, 6);
		t713 * L_11 = V_1;
		((t1879_SFs*)InitializedTypeInfo(&t1879_TI)->static_fields)->f10 = L_11;
	}

IL_0070:
	{
		t713 * L_12 = ((t1879_SFs*)InitializedTypeInfo(&t1879_TI)->static_fields)->f10;
		t2* L_13 = V_0;
		bool L_14 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_12, L_13, (&V_2));
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
		__this->f6 = ((t1884 *)Castclass(L_20, InitializedTypeInfo(&t1884_TI)));
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
		t9 * L_23 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9914_MI, __this);
		t2* L_24 = p0;
		t9 * L_25 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5675_MI, L_23, L_24, L_25);
		return;
	}
}
extern "C" void m9907 (t1879 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t1155  V_0 = {0};
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1093 * L_0 = p0;
		t2* L_1 = (__this->f1);
		m5715(L_0, (t2*) &_stringLiteral2099, L_1, &m5715_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f2);
		m5715(L_2, (t2*) &_stringLiteral2098, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t152* L_5 = (__this->f4);
		m5715(L_4, (t2*) &_stringLiteral2100, (t9 *)(t9 *)L_5, &m5715_MI);
		t1093 * L_6 = p0;
		t158* L_7 = (__this->f3);
		m5715(L_6, (t2*) &_stringLiteral2101, (t9 *)(t9 *)L_7, &m5715_MI);
		t1093 * L_8 = p0;
		t1884 * L_9 = (__this->f6);
		m5715(L_8, (t2*) &_stringLiteral2102, L_9, &m5715_MI);
		t1093 * L_10 = p0;
		t2* L_11 = (__this->f0);
		m5715(L_10, (t2*) &_stringLiteral2097, L_11, &m5715_MI);
		t1093 * L_12 = p0;
		t152* L_13 = (__this->f7);
		m5715(L_12, (t2*) &_stringLiteral2105, (t9 *)(t9 *)L_13, &m5715_MI);
		t9 * L_14 = (__this->f9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		t9 * L_15 = (__this->f9);
		t9 * L_16 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5682_MI, L_15);
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
			V_0 = ((*(t1155 *)((t1155 *)UnBox (L_18, InitializedTypeInfo(&t1155_TI)))));
			t1093 * L_19 = p0;
			t9 * L_20 = m8447((&V_0), &m8447_MI);
			t9 * L_21 = m8448((&V_0), &m8448_MI);
			m5715(L_19, ((t2*)Castclass(L_20, (&t2_TI))), L_21, &m5715_MI);
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
extern MethodInfo m9908_MI;
extern "C" int32_t m9908 (t1879 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m9909_MI;
extern "C" t158* m9909 (t1879 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9910_MI;
extern "C" t1884 * m9910 (t1879 * __this, MethodInfo* method)
{
	{
		t1884 * L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1884 * L_1 = (t1884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1884_TI));
		m9896(L_1, &m9896_MI);
		__this->f6 = L_1;
	}

IL_0013:
	{
		t1884 * L_2 = (__this->f6);
		return L_2;
	}
}
extern "C" t907 * m9911 (t1879 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		m9921(__this, &m9921_MI);
	}

IL_000e:
	{
		t907 * L_1 = (__this->f5);
		return L_1;
	}
}
extern MethodInfo m9912_MI;
extern "C" t2* m9912 (t1879 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		t907 * L_1 = (__this->f5);
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_1);
		__this->f2 = L_2;
	}

IL_0019:
	{
		t2* L_3 = (__this->f2);
		return L_3;
	}
}
extern MethodInfo m9913_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9913 (t1879 * __this, MethodInfo* method)
{
	static bool m9913_init;
	if (!m9913_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9913_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		t907 * L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		t907 * L_2 = (__this->f5);
		t921* L_3 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_2);
		V_0 = L_3;
		t921* L_4 = V_0;
		__this->f4 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f4);
		int32_t L_6 = V_1;
		t921* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t921* L_13 = V_0;
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
extern "C" t9 * m9914 (t1879 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(&m9915_MI, __this);
	}

IL_000e:
	{
		t9 * L_1 = (__this->f8);
		return L_1;
	}
}
extern "C" void m9915 (t1879 * __this, MethodInfo* method)
{
	t1887 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1887_TI));
		t1887 * L_0 = (t1887 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1887_TI));
		m9925(L_0, __this, &m9925_MI);
		V_0 = L_0;
		t1887 * L_1 = V_0;
		__this->f8 = L_1;
		t1887 * L_2 = V_0;
		t9 * L_3 = m9937(L_2, &m9937_MI);
		__this->f9 = L_3;
		return;
	}
}
extern "C" t2* m9916 (t1879 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t907 * L_1 = (__this->f5);
		t126 * L_2 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_1);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_2);
		__this->f1 = L_3;
	}

IL_001e:
	{
		t2* L_4 = (__this->f1);
		return L_4;
	}
}
extern MethodInfo m9917_MI;
extern "C" t2* m9917 (t1879 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m9918 (t1879 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m9919_MI;
extern "C" t9 * m9919 (t1879 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f3);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern "C" void m9920 (t1879 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t158_TI_var;
extern "C" void m9921 (t1879 * __this, MethodInfo* method)
{
	static bool m9921_init;
	if (!m9921_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9921_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t126 * L_2 = m10065(NULL, L_1, &m10065_MI);
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
		t2* L_6 = m399(NULL, (t2*) &_stringLiteral147, L_5, (t2*) &_stringLiteral148, &m399_MI);
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
		t2* L_10 = m4419(NULL, (t2*) &_stringLiteral2106, L_8, (t2*) &_stringLiteral2107, L_9, &m4419_MI);
		t1917 * L_11 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_11, L_10, &m10060_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		t2* L_12 = (__this->f1);
		t126 * L_13 = V_0;
		t126 * L_14 = m9922(__this, L_12, L_13, &m9922_MI);
		V_2 = L_14;
		t126 * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		t221* L_16 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral2108);
		*((t2**)(t2**)SZArrayLdElema(L_16, 0)) = (t2*)(t2*) &_stringLiteral2108;
		t221* L_17 = L_16;
		t2* L_18 = (__this->f1);
		ArrayElementTypeCheck (L_17, L_18);
		*((t2**)(t2**)SZArrayLdElema(L_17, 1)) = (t2*)L_18;
		t221* L_19 = L_17;
		ArrayElementTypeCheck (L_19, (t2*) &_stringLiteral2109);
		*((t2**)(t2**)SZArrayLdElema(L_19, 2)) = (t2*)(t2*) &_stringLiteral2109;
		t221* L_20 = L_19;
		t126 * L_21 = V_0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((t2**)(t2**)SZArrayLdElema(L_20, 3)) = (t2*)L_22;
		t221* L_23 = L_20;
		ArrayElementTypeCheck (L_23, (t2*) &_stringLiteral141);
		*((t2**)(t2**)SZArrayLdElema(L_23, 4)) = (t2*)(t2*) &_stringLiteral141;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_24 = m4269(NULL, L_23, &m4269_MI);
		t1917 * L_25 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_25, L_24, &m10060_MI);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		t126 * L_26 = V_2;
		t2* L_27 = (__this->f2);
		t152* L_28 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t907 * L_29 = m10073(NULL, L_26, L_27, L_28, &m10073_MI);
		__this->f5 = L_29;
		t907 * L_30 = (__this->f5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		t158* L_31 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_31, (t2*) &_stringLiteral2110);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 0)) = (t9 *)(t2*) &_stringLiteral2110;
		t158* L_32 = L_31;
		t2* L_33 = (__this->f2);
		ArrayElementTypeCheck (L_32, L_33);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 1)) = (t9 *)L_33;
		t158* L_34 = L_32;
		ArrayElementTypeCheck (L_34, (t2*) &_stringLiteral2111);
		*((t9 **)(t9 **)SZArrayLdElema(L_34, 2)) = (t9 *)(t2*) &_stringLiteral2111;
		t158* L_35 = L_34;
		t126 * L_36 = V_2;
		ArrayElementTypeCheck (L_35, L_36);
		*((t9 **)(t9 **)SZArrayLdElema(L_35, 3)) = (t9 *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_37 = m515(NULL, L_35, &m515_MI);
		t1917 * L_38 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_38, L_37, &m10060_MI);
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
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_43 = V_0;
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		t126 * L_45 = V_0;
		t907 * L_46 = (__this->f5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t907 * L_47 = m10063(NULL, L_45, L_46, &m10063_MI);
		__this->f5 = L_47;
		t907 * L_48 = (__this->f5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		t158* L_49 = ((t158*)SZArrayNew(t158_TI_var, 4));
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral2110);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 0)) = (t9 *)(t2*) &_stringLiteral2110;
		t158* L_50 = L_49;
		t2* L_51 = (__this->f2);
		ArrayElementTypeCheck (L_50, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_50, 1)) = (t9 *)L_51;
		t158* L_52 = L_50;
		ArrayElementTypeCheck (L_52, (t2*) &_stringLiteral2111);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, 2)) = (t9 *)(t2*) &_stringLiteral2111;
		t158* L_53 = L_52;
		t126 * L_54 = V_0;
		ArrayElementTypeCheck (L_53, L_54);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 3)) = (t9 *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_55 = m515(NULL, L_53, &m515_MI);
		t1917 * L_56 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_56, L_55, &m10060_MI);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t907 * L_57 = m10072(NULL, __this, &m10072_MI);
		__this->f5 = L_57;
		t907 * L_58 = (__this->f5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		t2* L_59 = (__this->f2);
		t2* L_60 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9916_MI, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_61 = m4419(NULL, (t2*) &_stringLiteral2110, L_59, (t2*) &_stringLiteral2111, L_60, &m4419_MI);
		t1917 * L_62 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_62, L_61, &m10060_MI);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		t907 * L_63 = (__this->f5);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9522_MI, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		t907 * L_65 = (__this->f5);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&m9520_MI, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		t152* L_67 = m9924(__this, &m9924_MI);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		t1917 * L_68 = (t1917 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1917_TI));
		m10060(L_68, (t2*) &_stringLiteral2112, &m10060_MI);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		t907 * L_69 = (__this->f5);
		t152* L_70 = m9924(__this, &m9924_MI);
		t821 * L_71 = (t821 *)VirtFuncInvoker1< t821 *, t152* >::Invoke(&m9526_MI, ((t821 *)Castclass(L_69, InitializedTypeInfo(&t821_TI))), L_70);
		__this->f5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
extern "C" t126 * m9922 (t1879 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	t126 * V_2 = {0};
	t152* V_3 = {0};
	int32_t V_4 = 0;
	{
		t2* L_0 = p0;
		t2* L_1 = m9923(NULL, L_0, &m9923_MI);
		p0 = L_1;
		t2* L_2 = p0;
		t126 * L_3 = p1;
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_3);
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
		t126 * L_8 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		t2* L_9 = p0;
		t126 * L_10 = V_0;
		t2* L_11 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_10);
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
		t126 * L_15 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4406_MI, L_14);
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
		t152* L_18 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m11991_MI, L_17);
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
		t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4385_MI, L_24);
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
extern "C" t2* m9923 (t9 * __this , t2* p0, MethodInfo* method)
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
		int32_t L_1 = m4257(L_0, (t2*) &_stringLiteral2113, &m4257_MI);
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
		int32_t L_5 = m4245(G_B3_2, G_B3_1, G_B3_0, &m4245_MI);
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
		t2* L_9 = m2715(L_7, 0, L_8, &m2715_MI);
		t2* L_10 = m4246(L_9, &m4246_MI);
		p0 = L_10;
	}

IL_0034:
	{
		t2* L_11 = p0;
		return L_11;
	}
}
extern "C" t152* m9924 (t1879 * __this, MethodInfo* method)
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
		t907 * L_2 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m9911_MI, __this);
		t152* L_3 = (t152*)VirtFuncInvoker0< t152* >::Invoke(&m9519_MI, L_2);
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



extern "C" void m9925 (t1887 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9933(__this, L_0, &m9933_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1887_TI));
		t221* L_1 = ((t1887_SFs*)InitializedTypeInfo(&t1887_TI)->static_fields)->f6;
		m9935(__this, L_1, &m9935_MI);
		return;
	}
}
extern MethodInfo m9926_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9926 (t9 * __this , MethodInfo* method)
{
	static bool m9926_init;
	if (!m9926_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9926_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 6));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2100);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2100;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2101);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2101;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2102);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2102;
		((t1887_SFs*)InitializedTypeInfo(&t1887_TI)->static_fields)->f6 = L_5;
		return;
	}
}
#include "t1889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1889_TI;
#include "t1889MD.h"

extern MethodInfo m9930_MI;
extern MethodInfo m5686_MI;
extern MethodInfo m11972_MI;
extern MethodInfo m5729_MI;
extern MethodInfo m9938_MI;


extern MethodInfo m9927_MI;
extern "C" void m9927 (t1889 * __this, t1881 * p0, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1889 * G_B2_0 = {0};
	t1889 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1889 * G_B3_1 = {0};
	{
		m336(__this, &m336_MI);
		t1881 * L_0 = p0;
		__this->f0 = L_0;
		t1881 * L_1 = (__this->f0);
		t9 * L_2 = (L_1->f0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		t1881 * L_3 = (__this->f0);
		t9 * L_4 = (L_3->f0);
		t9 * L_5 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5682_MI, L_4);
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
extern MethodInfo m9928_MI;
extern "C" t9 * m9928 (t1889 * __this, MethodInfo* method)
{
	t1155  V_0 = {0};
	{
		t1155  L_0 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(&m9930_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8448((&V_0), &m8448_MI);
		return L_1;
	}
}
extern MethodInfo m9929_MI;
extern "C" bool m9929 (t1889 * __this, MethodInfo* method)
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
		t1881 * L_3 = (__this->f0);
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
		t1881 * L_6 = (__this->f0);
		t9 * L_7 = (__this->f1);
		t9 * L_8 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5729_MI, L_7);
		bool L_9 = m9938(L_6, ((t2*)Castclass(L_8, (&t2_TI))), &m9938_MI);
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
extern "C" t1155  m9930 (t1889 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		t1881 * L_1 = (__this->f0);
		t221* L_2 = (L_1->f2);
		int32_t L_3 = (__this->f2);
		int32_t L_4 = L_3;
		t1881 * L_5 = (__this->f0);
		t1881 * L_6 = (__this->f0);
		t221* L_7 = (L_6->f2);
		int32_t L_8 = (__this->f2);
		int32_t L_9 = L_8;
		t9 * L_10 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9941_MI, L_5, (*(t2**)(t2**)SZArrayLdElema(L_7, L_9)));
		t1155  L_11 = {0};
		m5686(&L_11, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)), L_10, &m5686_MI);
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
		t1332 * L_14 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_14, (t2*) &_stringLiteral2116, &m5685_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		t9 * L_15 = (__this->f1);
		t1155  L_16 = (t1155 )InterfaceFuncInvoker0< t1155  >::Invoke(&m11972_MI, L_15);
		return L_16;
	}
}
extern MethodInfo m9931_MI;
extern "C" t9 * m9931 (t1889 * __this, MethodInfo* method)
{
	t1155  V_0 = {0};
	{
		t1155  L_0 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(&m9930_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8447((&V_0), &m8447_MI);
		return L_1;
	}
}
extern MethodInfo m9932_MI;
extern "C" t9 * m9932 (t1889 * __this, MethodInfo* method)
{
	t1155  V_0 = {0};
	{
		t1155  L_0 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(&m9930_MI, __this);
		V_0 = L_0;
		t9 * L_1 = m8448((&V_0), &m8448_MI);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1888_TI;
extern TypeInfo t1891_TI;
extern TypeInfo t2174_TI;
extern MethodInfo m5674_MI;
extern MethodInfo m9944_MI;
extern MethodInfo m9936_MI;
extern MethodInfo m12025_MI;
extern MethodInfo m12026_MI;
extern MethodInfo m12027_MI;
extern MethodInfo m12028_MI;
extern MethodInfo m12029_MI;
extern MethodInfo m12030_MI;
extern MethodInfo m12031_MI;
extern MethodInfo m12032_MI;
extern MethodInfo m12033_MI;
extern MethodInfo m5680_MI;
extern MethodInfo m5683_MI;
extern MethodInfo m9943_MI;
extern MethodInfo m5681_MI;


extern "C" void m9933 (t1881 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m9934_MI;
extern "C" t9 * m9934 (t1881 * __this, MethodInfo* method)
{
	{
		t1889 * L_0 = (t1889 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1889_TI));
		m9927(L_0, __this, &m9927_MI);
		return L_0;
	}
}
extern "C" void m9935 (t1881 * __this, t221* p0, MethodInfo* method)
{
	{
		t221* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t9 * m9936 (t1881 * __this, MethodInfo* method)
{
	{
		__this->f3 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_0, &m5883_MI);
		return L_0;
	}
}
extern "C" t9 * m9937 (t1881 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9936_MI, __this);
		__this->f0 = L_1;
	}

IL_0014:
	{
		t9 * L_2 = (__this->f0);
		return L_2;
	}
}
extern "C" bool m9938 (t1881 * __this, t2* p0, MethodInfo* method)
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
extern MethodInfo m9939_MI;
extern "C" t9 * m9939 (t1881 * __this, t9 * p0, MethodInfo* method)
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
		t9 * L_7 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9941_MI, __this, L_6);
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
		t9 * L_14 = (t9 *)InterfaceFuncInvoker1< t9 *, t9 * >::Invoke(&m5674_MI, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
extern MethodInfo m9940_MI;
extern "C" void m9940 (t1881 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		VirtActionInvoker2< t9 *, t9 * >::Invoke(&m9944_MI, __this, L_0, L_1);
		return;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" t9 * m9941 (t1881 * __this, t2* p0, MethodInfo* method)
{
	static bool m9941_init;
	if (!m9941_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9941_init = true;
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
			goto IL_0120;
		}
	}
	{
		t713 * L_2 = ((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 8, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2097, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2098, 1);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2099, 2);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2100, 3);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2102, 4);
		t713 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_9, (t2*) &_stringLiteral2101, 5);
		t713 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_10, (t2*) &_stringLiteral2114, 6);
		t713 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_11, (t2*) &_stringLiteral2115, 7);
		t713 * L_12 = V_1;
		((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f4 = L_12;
	}

IL_007c:
	{
		t713 * L_13 = ((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f4;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_13, L_14, (&V_2));
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
		t2* L_18 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12025_MI, L_17);
		return L_18;
	}

IL_00c2:
	{
		t9 * L_19 = (__this->f1);
		t2* L_20 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12026_MI, L_19);
		return L_20;
	}

IL_00ce:
	{
		t9 * L_21 = (__this->f1);
		t2* L_22 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12027_MI, L_21);
		return L_22;
	}

IL_00da:
	{
		t9 * L_23 = (__this->f1);
		t9 * L_24 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12028_MI, L_23);
		return L_24;
	}

IL_00e6:
	{
		t9 * L_25 = (__this->f1);
		t1884 * L_26 = (t1884 *)InterfaceFuncInvoker0< t1884 * >::Invoke(&m12029_MI, L_25);
		return L_26;
	}

IL_00f2:
	{
		t9 * L_27 = (__this->f1);
		t158* L_28 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12030_MI, L_27);
		return (t9 *)L_28;
	}

IL_00fe:
	{
		t9 * L_29 = (__this->f1);
		t158* L_30 = (t158*)InterfaceFuncInvoker0< t158* >::Invoke(&m12031_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t1891_TI))));
		return (t9 *)L_30;
	}

IL_010f:
	{
		t9 * L_31 = (__this->f1);
		t9 * L_32 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12032_MI, ((t9 *)Castclass(L_31, InitializedTypeInfo(&t1891_TI))));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m9942 (t1881 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m9942_init;
	if (!m9942_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m9942_init = true;
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
			goto IL_00c2;
		}
	}
	{
		t713 * L_2 = ((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		t713 * L_3 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_3, 8, m5747_MI_var);
		V_1 = L_3;
		t713 * L_4 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_4, (t2*) &_stringLiteral2102, 0);
		t713 * L_5 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_5, (t2*) &_stringLiteral2114, 0);
		t713 * L_6 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_6, (t2*) &_stringLiteral2115, 0);
		t713 * L_7 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral2098, 1);
		t713 * L_8 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2099, 1);
		t713 * L_9 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_9, (t2*) &_stringLiteral2100, 1);
		t713 * L_10 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_10, (t2*) &_stringLiteral2101, 1);
		t713 * L_11 = V_1;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_11, (t2*) &_stringLiteral2097, 2);
		t713 * L_12 = V_1;
		((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f5 = L_12;
	}

IL_007c:
	{
		t713 * L_13 = ((t1881_SFs*)InitializedTypeInfo(&t1881_TI)->static_fields)->f5;
		t2* L_14 = V_0;
		bool L_15 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_13, L_14, (&V_2));
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
		t556 * L_17 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_17, (t2*) &_stringLiteral2103, &m2885_MI);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		t9 * L_18 = (__this->f1);
		t9 * L_19 = p1;
		InterfaceActionInvoker1< t2* >::Invoke(&m12033_MI, ((t9 *)Castclass(L_18, InitializedTypeInfo(&t2174_TI))), ((t2*)Castclass(L_19, (&t2_TI))));
		return;
	}

IL_00c2:
	{
		return;
	}
}
extern "C" t9 * m9943 (t1881 * __this, MethodInfo* method)
{
	t1161 * V_0 = {0};
	int32_t V_1 = 0;
	t1155  V_2 = {0};
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		t1161 * L_1 = V_0;
		t221* L_2 = (__this->f2);
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m9941_MI, __this, (*(t2**)(t2**)SZArrayLdElema(L_2, L_4)));
		VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_1, L_5);
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
		t9 * L_11 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m5682_MI, L_10);
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
			V_2 = ((*(t1155 *)((t1155 *)UnBox (L_13, InitializedTypeInfo(&t1155_TI)))));
			t9 * L_14 = m8447((&V_2), &m8447_MI);
			bool L_15 = m9938(__this, ((t2*)Castclass(L_14, (&t2_TI))), &m9938_MI);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			t1161 * L_16 = V_0;
			t9 * L_17 = m8448((&V_2), &m8448_MI);
			VirtFuncInvoker1< int32_t, t9 * >::Invoke(&m5709_MI, L_16, L_17);
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
		t1161 * L_23 = V_0;
		return L_23;
	}
}
extern "C" void m9944 (t1881 * __this, t9 * p0, t9 * p1, MethodInfo* method)
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
		VirtActionInvoker2< t2*, t9 * >::Invoke(&m9942_MI, __this, L_6, L_7);
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
		t9 * L_12 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9936_MI, __this);
		__this->f0 = L_12;
	}

IL_0047:
	{
		t9 * L_13 = (__this->f0);
		t9 * L_14 = p0;
		t9 * L_15 = p1;
		InterfaceActionInvoker2< t9 *, t9 * >::Invoke(&m5675_MI, L_13, L_14, L_15);
		return;
	}
}
extern MethodInfo m9945_MI;
extern "C" bool m9945 (t1881 * __this, t9 * p0, MethodInfo* method)
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
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, t9 * >::Invoke(&m5680_MI, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
extern MethodInfo m9946_MI;
extern "C" void m9946 (t1881 * __this, t9 * p0, MethodInfo* method)
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
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_6, (t2*) &_stringLiteral2103, &m2885_MI);
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
		InterfaceActionInvoker1< t9 * >::Invoke(&m5683_MI, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
extern MethodInfo m9947_MI;
extern "C" int32_t m9947 (t1881 * __this, MethodInfo* method)
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(&m5673_MI, L_1);
		t221* L_3 = (__this->f2);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((t121 *)L_3)->max_length)))));
	}

IL_001d:
	{
		t221* L_4 = (__this->f2);
		return (((int32_t)(((t121 *)L_4)->max_length)));
	}
}
extern MethodInfo m9948_MI;
extern "C" bool m9948 (t1881 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m9949_MI;
extern "C" t9 * m9949 (t1881 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern MethodInfo m9950_MI;
extern "C" void m9950 (t1881 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m9943_MI, __this);
		t121 * L_1 = p0;
		int32_t L_2 = p1;
		InterfaceActionInvoker2< t121 *, int32_t >::Invoke(&m5681_MI, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m9951_MI;
extern "C" t9 * m9951 (t1881 * __this, MethodInfo* method)
{
	{
		t1889 * L_0 = (t1889 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1889_TI));
		m9927(L_0, __this, &m9927_MI);
		return L_0;
	}
}
#include "t1890.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1890_TI;
#include "t1890MD.h"

extern TypeInfo t138_TI;
extern MethodInfo m12034_MI;


extern MethodInfo m9952_MI;
extern "C" void m9952 (t1890 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m9933(__this, L_0, &m9933_MI);
		t9 * L_1 = p0;
		t138 * L_2 = (t138 *)InterfaceFuncInvoker0< t138 * >::Invoke(&m12034_MI, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1890_TI));
		t221* L_3 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f6;
		m9935(__this, L_3, &m9935_MI);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1890_TI));
		t221* L_4 = ((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f7;
		m9935(__this, L_4, &m9935_MI);
	}

IL_0027:
	{
		return;
	}
}
extern MethodInfo m9953_MI;
extern TypeInfo* t221_TI_var;
extern "C" void m9953 (t9 * __this , MethodInfo* method)
{
	static bool m9953_init;
	if (!m9953_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m9953_init = true;
	}
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 7));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral2097);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral2097;
		t221* L_1 = L_0;
		ArrayElementTypeCheck (L_1, (t2*) &_stringLiteral2098);
		*((t2**)(t2**)SZArrayLdElema(L_1, 1)) = (t2*)(t2*) &_stringLiteral2098;
		t221* L_2 = L_1;
		ArrayElementTypeCheck (L_2, (t2*) &_stringLiteral2099);
		*((t2**)(t2**)SZArrayLdElema(L_2, 2)) = (t2*)(t2*) &_stringLiteral2099;
		t221* L_3 = L_2;
		ArrayElementTypeCheck (L_3, (t2*) &_stringLiteral2100);
		*((t2**)(t2**)SZArrayLdElema(L_3, 3)) = (t2*)(t2*) &_stringLiteral2100;
		t221* L_4 = L_3;
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral2114);
		*((t2**)(t2**)SZArrayLdElema(L_4, 4)) = (t2*)(t2*) &_stringLiteral2114;
		t221* L_5 = L_4;
		ArrayElementTypeCheck (L_5, (t2*) &_stringLiteral2115);
		*((t2**)(t2**)SZArrayLdElema(L_5, 5)) = (t2*)(t2*) &_stringLiteral2115;
		t221* L_6 = L_5;
		ArrayElementTypeCheck (L_6, (t2*) &_stringLiteral2102);
		*((t2**)(t2**)SZArrayLdElema(L_6, 6)) = (t2*)(t2*) &_stringLiteral2102;
		((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f6 = L_6;
		t221* L_7 = ((t221*)SZArrayNew(t221_TI_var, 1));
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral2102);
		*((t2**)(t2**)SZArrayLdElema(L_7, 0)) = (t2*)(t2*) &_stringLiteral2102;
		((t1890_SFs*)InitializedTypeInfo(&t1890_TI)->static_fields)->f7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1876_TI;
#include "t1876MD.h"

#include "t1892.h"
#include "t1752.h"
extern TypeInfo t1752_TI;
#include "t1752MD.h"
extern MethodInfo m9969_MI;
extern MethodInfo m9607_MI;
extern MethodInfo m9599_MI;
extern MethodInfo m9606_MI;
extern MethodInfo m9966_MI;
extern MethodInfo m10077_MI;


extern MethodInfo m9954_MI;
extern "C" t9 * m9954 (t1876 * __this, MethodInfo* method)
{
	{
		t1887 * L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1887_TI));
		t1887 * L_1 = (t1887 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1887_TI));
		m9925(L_1, __this, &m9925_MI);
		__this->f8 = L_1;
	}

IL_0014:
	{
		t1887 * L_2 = (__this->f8);
		return L_2;
	}
}
extern MethodInfo m9955_MI;
extern "C" int32_t m9955 (t1876 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m9969(__this, &m9969_MI);
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
extern MethodInfo m9956_MI;
extern "C" t158* m9956 (t1876 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9957_MI;
extern "C" t1884 * m9957 (t1876 * __this, MethodInfo* method)
{
	{
		t1884 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m9958_MI;
extern "C" t907 * m9958 (t1876 * __this, MethodInfo* method)
{
	{
		t1752 * L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m9959_MI;
extern "C" t2* m9959 (t1876 * __this, MethodInfo* method)
{
	{
		t1752 * L_0 = (__this->f0);
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
		t1752 * L_2 = (__this->f0);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m9607_MI, L_2);
		return L_3;
	}
}
extern MethodInfo m9960_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9960 (t1876 * __this, MethodInfo* method)
{
	static bool m9960_init;
	if (!m9960_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9960_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	{
		t152* L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		t1752 * L_1 = (__this->f0);
		t921* L_2 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m9599_MI, L_1);
		V_0 = L_2;
		t921* L_3 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		t152* L_4 = (__this->f9);
		int32_t L_5 = V_1;
		t921* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		t126 * L_9 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_6, L_8)));
		ArrayElementTypeCheck (L_4, L_9);
		*((t126 **)(t126 **)SZArrayLdElema(L_4, L_5)) = (t126 *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		t921* L_12 = V_0;
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
extern MethodInfo m9961_MI;
extern "C" t2* m9961 (t1876 * __this, MethodInfo* method)
{
	{
		t1752 * L_0 = (__this->f0);
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
		t1752 * L_2 = (__this->f0);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m9606_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_3);
		return L_4;
	}
}
extern MethodInfo m9962_MI;
extern "C" t2* m9962 (t1876 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9963_MI;
extern "C" void m9963 (t1876 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m9964_MI;
extern "C" t9 * m9964 (t1876 * __this, int32_t p0, MethodInfo* method)
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
extern MethodInfo m9965_MI;
extern "C" t138 * m9965 (t1876 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" int32_t m9966 (t1876 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	t723* V_2 = {0};
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
		t723* L_1 = (__this->f2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		t723* L_2 = V_2;
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
		t723* L_9 = V_2;
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
extern MethodInfo m9967_MI;
extern TypeInfo* t158_TI_var;
extern "C" t158* m9967 (t1876 * __this, MethodInfo* method)
{
	static bool m9967_init;
	if (!m9967_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9967_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t158* V_3 = {0};
	uint8_t V_4 = 0x0;
	t723* V_5 = {0};
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
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m9966_MI, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((t158*)SZArrayNew(t158_TI_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		t723* L_4 = (__this->f2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		t723* L_5 = V_5;
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
		t723* L_18 = V_5;
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
extern MethodInfo m9968_MI;
extern "C" t9 * m9968 (t1876 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" int32_t m9969 (t1876 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		t1752 * L_1 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		bool L_2 = m10077(NULL, L_1, &m10077_MI);
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
extern TypeInfo t1892_TI;
#include "t1892MD.h"



#include "t1893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1893_TI;
#include "t1893MD.h"



#include "t1894.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1894_TI;
#include "t1894MD.h"

#include "t1902.h"
extern TypeInfo t1902_TI;
#include "t1902MD.h"
extern MethodInfo m11115_MI;
extern MethodInfo m10064_MI;
extern MethodInfo m10071_MI;
extern MethodInfo m10006_MI;
extern MethodInfo m10075_MI;


extern MethodInfo m9970_MI;
extern "C" void m9970 (t1894 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9971_MI;
extern "C" void m9971 (t1894 * __this, t9 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	t1902 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1093 * L_1 = p1;
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
		t9 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		bool L_4 = m10064(NULL, L_3, &m10064_MI);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		t9 * L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t1902 * L_6 = m10071(NULL, L_5, &m10071_MI);
		V_0 = L_6;
		t1902 * L_7 = V_0;
		t1093 * L_8 = p1;
		t1094  L_9 = p2;
		VirtActionInvoker2< t1093 *, t1094  >::Invoke(&m10006_MI, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		t9 * L_10 = p0;
		t1093 * L_11 = p1;
		t1094  L_12 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		m10075(NULL, L_10, L_11, L_12, &m10075_MI);
	}

IL_002d:
	{
		return;
	}
}
extern MethodInfo m9972_MI;
extern "C" t9 * m9972 (t1894 * __this, t9 * p0, t1093 * p1, t1094  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m561(L_0, &m561_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1896.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1896_TI;
#include "t1896MD.h"

#include "t1581.h"
extern TypeInfo t1581_TI;
#include "t1581MD.h"
extern MethodInfo m10051_MI;
extern MethodInfo m5702_MI;


extern MethodInfo m9973_MI;
extern "C" void m9973 (t1896 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9974_MI;
extern "C" void m9974 (t1896 * __this, t9 * p0, t1093 * p1, t1094  p2, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		t1093 * L_1 = p1;
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
		t9 * L_3 = p0;
		t1093 * L_4 = p1;
		t1094  L_5 = p2;
		VirtActionInvoker2< t1093 *, t1094  >::Invoke(&m10051_MI, ((t1581 *)Castclass(L_3, InitializedTypeInfo(&t1581_TI))), L_4, L_5);
		t1093 * L_6 = p1;
		m5702(L_6, (t2*) &_stringLiteral2117, 0, &m5702_MI);
		return;
	}
}
extern MethodInfo m9975_MI;
extern "C" t9 * m9975 (t1896 * __this, t9 * p0, t1093 * p1, t1094  p2, t9 * p3, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral2118, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t1897.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1897_TI;
#include "t1897MD.h"

extern TypeInfo t1895_TI;
extern TypeInfo t1898_TI;
extern Il2CppType t1581_0_0_0;
extern MethodInfo m7729_MI;
extern MethodInfo m4449_MI;
extern MethodInfo m12035_MI;


extern MethodInfo m9976_MI;
extern "C" void m9976 (t1897 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m9977_MI;
extern "C" void m9977 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t1581_0_0_0), &m329_MI);
		((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f0 = L_0;
		t1896 * L_1 = (t1896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1896_TI));
		m9973(L_1, &m9973_MI);
		((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f1 = L_1;
		t1894 * L_2 = (t1894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1894_TI));
		m9970(L_2, &m9970_MI);
		((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f2 = L_2;
		return;
	}
}
extern MethodInfo m9978_MI;
extern "C" t9 * m9978 (t1897 * __this, t126 * p0, t1094  p1, t9 ** p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7729_MI, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		t9 ** L_2 = p2;
		*((t9 **)(L_2)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1897_TI));
		t1894 * L_3 = ((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1897_TI));
		t126 * L_4 = ((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f0;
		t126 * L_5 = p0;
		bool L_6 = (bool)VirtFuncInvoker1< bool, t126 * >::Invoke(&m4449_MI, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		t9 ** L_7 = p2;
		*((t9 **)(L_7)) = (t9 *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1897_TI));
		t1896 * L_8 = ((t1897_SFs*)InitializedTypeInfo(&t1897_TI)->static_fields)->f1;
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
		t1094  L_12 = p1;
		t9 ** L_13 = p2;
		t9 * L_14 = (t9 *)InterfaceFuncInvoker3< t9 *, t126 *, t1094 , t9 ** >::Invoke(&m12035_MI, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		t9 ** L_15 = p2;
		*((t9 **)(L_15)) = (t9 *)NULL;
		return (t9 *)NULL;
	}
}
#include "t1899.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1899_TI;
#include "t1899MD.h"

extern MethodInfo m9991_MI;
extern MethodInfo m9985_MI;
extern MethodInfo m12036_MI;


extern MethodInfo m9979_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9979 (t1899 * __this, t9 * p0, t158* p1, int32_t p2, t1884 * p3, t9 * p4, MethodInfo* method)
{
	static bool m9979_init;
	if (!m9979_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9979_init = true;
	}
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f4 = L_0;
		t158* L_1 = p1;
		__this->f1 = L_1;
		int32_t L_2 = p2;
		__this->f2 = L_2;
		t1884 * L_3 = p3;
		__this->f3 = L_3;
		t9 * L_4 = p4;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_5 = p4;
		t2* L_6 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12025_MI, L_5);
		__this->f5 = L_6;
		t9 * L_7 = p4;
		t907 * L_8 = (t907 *)InterfaceFuncInvoker0< t907 * >::Invoke(&m12036_MI, L_7);
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
extern MethodInfo m9980_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m9980 (t1899 * __this, t138 * p0, t9 * p1, MethodInfo* method)
{
	static bool m9980_init;
	if (!m9980_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m9980_init = true;
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
		t907 * L_3 = (t907 *)InterfaceFuncInvoker0< t907 * >::Invoke(&m12036_MI, L_2);
		__this->f7 = L_3;
		t9 * L_4 = p1;
		t1884 * L_5 = (t1884 *)InterfaceFuncInvoker0< t1884 * >::Invoke(&m12029_MI, L_4);
		__this->f3 = L_5;
	}

IL_0028:
	{
		__this->f1 = ((t158*)SZArrayNew(t158_TI_var, 0));
		return;
	}
}
extern MethodInfo m9981_MI;
extern "C" void m9981 (t1899 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		VirtActionInvoker1< t2* >::Invoke(&m9991_MI, __this, L_0);
		return;
	}
}
extern MethodInfo m9982_MI;
extern "C" int32_t m9982 (t1899 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern MethodInfo m9983_MI;
extern "C" t158* m9983 (t1899 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m9984_MI;
extern "C" t1884 * m9984 (t1899 * __this, MethodInfo* method)
{
	{
		t1884 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		t1884 * L_1 = (t1884 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1884_TI));
		m9896(L_1, &m9896_MI);
		__this->f3 = L_1;
	}

IL_0013:
	{
		t1884 * L_2 = (__this->f3);
		return L_2;
	}
}
extern "C" t907 * m9985 (t1899 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m9986_MI;
extern "C" t2* m9986 (t1899 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f7);
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
		t907 * L_2 = (__this->f7);
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4367_MI, L_2);
		__this->f8 = L_3;
	}

IL_0021:
	{
		t2* L_4 = (__this->f8);
		return L_4;
	}
}
extern MethodInfo m9987_MI;
extern TypeInfo* t152_TI_var;
extern "C" t9 * m9987 (t1899 * __this, MethodInfo* method)
{
	static bool m9987_init;
	if (!m9987_init)
	{
		t152_TI_var = il2cpp_codegen_class_from_type(&t152_0_0_0);
		m9987_init = true;
	}
	t921* V_0 = {0};
	int32_t V_1 = 0;
	{
		t907 * L_0 = (__this->f7);
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
		t907 * L_2 = (__this->f7);
		t921* L_3 = (t921*)VirtFuncInvoker0< t921* >::Invoke(&m4399_MI, L_2);
		V_0 = L_3;
		t921* L_4 = V_0;
		__this->f9 = ((t152*)SZArrayNew(t152_TI_var, (((int32_t)(((t121 *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		t152* L_5 = (__this->f9);
		int32_t L_6 = V_1;
		t921* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		t126 * L_10 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4400_MI, (*(t917 **)(t917 **)SZArrayLdElema(L_7, L_9)));
		ArrayElementTypeCheck (L_5, L_10);
		*((t126 **)(t126 **)SZArrayLdElema(L_5, L_6)) = (t126 *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		t921* L_13 = V_0;
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
extern MethodInfo m9988_MI;
extern "C" t9 * m9988 (t1899 * __this, MethodInfo* method)
{
	{
		t1890 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1890_TI));
		t1890 * L_1 = (t1890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1890_TI));
		m9952(L_1, __this, &m9952_MI);
		__this->f11 = L_1;
	}

IL_0014:
	{
		t1890 * L_2 = (__this->f11);
		return L_2;
	}
}
extern MethodInfo m9989_MI;
extern "C" t2* m9989 (t1899 * __this, MethodInfo* method)
{
	{
		t907 * L_0 = (__this->f7);
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
		t907 * L_2 = (__this->f7);
		t126 * L_3 = (t126 *)VirtFuncInvoker0< t126 * >::Invoke(&m4428_MI, L_2);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_3);
		__this->f10 = L_4;
	}

IL_0026:
	{
		t2* L_5 = (__this->f10);
		return L_5;
	}
}
extern MethodInfo m9990_MI;
extern "C" t2* m9990 (t1899 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m9991 (t1899 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m9992_MI;
extern "C" t9 * m9992 (t1899 * __this, int32_t p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f1);
		int32_t L_1 = p0;
		int32_t L_2 = L_1;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_0, L_2));
	}
}
extern MethodInfo m9993_MI;
extern "C" t138 * m9993 (t1899 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m9994_MI;
extern "C" int32_t m9994 (t1899 * __this, MethodInfo* method)
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
		t1873 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		t907 * L_3 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m9985_MI, __this);
		t1873 * L_4 = (t1873 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1873_TI));
		m9853(L_4, L_3, 1, &m9853_MI);
		__this->f12 = L_4;
	}

IL_002e:
	{
		t1873 * L_5 = (__this->f12);
		int32_t L_6 = m9854(L_5, &m9854_MI);
		return L_6;
	}
}
extern MethodInfo m9995_MI;
extern "C" t158* m9995 (t1899 * __this, MethodInfo* method)
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
		t1873 * L_2 = (__this->f12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		t907 * L_3 = (t907 *)VirtFuncInvoker0< t907 * >::Invoke(&m9985_MI, __this);
		t1873 * L_4 = (t1873 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1873_TI));
		m9853(L_4, L_3, 1, &m9853_MI);
		__this->f12 = L_4;
	}

IL_002a:
	{
		t1873 * L_5 = (__this->f12);
		t158* L_6 = (__this->f1);
		t158* L_7 = m9855(L_5, L_6, &m9855_MI);
		__this->f0 = L_7;
	}

IL_0041:
	{
		t158* L_8 = (__this->f0);
		return L_8;
	}
}
extern MethodInfo m9996_MI;
extern "C" t9 * m9996 (t1899 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f4);
		return L_0;
	}
}
#include "t1901.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1901_TI;
#include "t1901MD.h"

#include "t1906.h"
extern TypeInfo t1906_TI;
#include "t1906MD.h"
extern MethodInfo m10013_MI;
extern MethodInfo m10010_MI;
extern MethodInfo m10086_MI;


extern MethodInfo m9997_MI;
extern "C" t1200 * m9997 (t1901 * __this, t126 * p0, MethodInfo* method)
{
	t1906 * V_0 = {0};
	{
		t126 * L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1854_TI));
		t2* L_1 = ((t1854_SFs*)InitializedTypeInfo(&t1854_TI)->static_fields)->f3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1906_TI));
		t1906 * L_2 = (t1906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1906_TI));
		m10013(L_2, L_0, L_1, (t158*)(t158*)NULL, &m10013_MI);
		V_0 = L_2;
		t1906 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10010_MI, L_3);
		return ((t1200 *)Castclass(L_4, InitializedTypeInfo(&t1200_TI)));
	}
}
extern MethodInfo m9998_MI;
extern "C" t1902 * m9998 (t1901 * __this, t1581 * p0, t126 * p1, t9 * p2, t1852 * p3, MethodInfo* method)
{
	{
		t1581 * L_0 = p0;
		t126 * L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t9 * L_2 = m10086(NULL, L_0, L_1, &m10086_MI);
		t1902 * L_3 = m10071(NULL, L_2, &m10071_MI);
		return L_3;
	}
}
extern MethodInfo m9999_MI;
extern "C" void m9999 (t1901 * __this, t9 * p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m10000_MI;
extern "C" bool m10000 (t1901 * __this, t1852 * p0, t9 * p1, MethodInfo* method)
{
	{
		return 1;
	}
}
#include "t1903.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1903_TI;
#include "t1903MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t1904.h"
#include "t1905.h"
extern TypeInfo t58_TI;
extern TypeInfo t1914_TI;
#include "t58MD.h"
extern Il2CppType t1200_0_0_0;
extern MethodInfo m10003_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m10004_MI;
extern MethodInfo m12037_MI;
extern MethodInfo m10009_MI;


extern MethodInfo m10001_MI;
extern "C" void m10001 (t1902 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10003(__this, L_0, L_1, NULL, &m10003_MI);
		return;
	}
}
extern MethodInfo m10002_MI;
extern "C" void m10002 (t1902 * __this, t126 * p0, t1905 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t58 L_1 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		m10003(__this, L_0, L_1, NULL, &m10003_MI);
		t1905 * L_2 = p1;
		__this->f3 = L_2;
		return;
	}
}
extern "C" void m10003 (t1902 * __this, t126 * p0, t58 p1, t9 * p2, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t126 * L_0 = p0;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7729_MI, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		t126 * L_2 = p0;
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral2119, &m2885_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		t126 * L_5 = p0;
		__this->f0 = L_5;
		t58 L_6 = p1;
		t58 L_7 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_8 = m4280(NULL, L_6, L_7, &m4280_MI);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		t169 * L_9 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_9, (t2*) &_stringLiteral2120, &m5706_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
extern "C" t126 * m10004 (t9 * __this , t9 * p0, MethodInfo* method)
{
	typedef t126 * (*m10004_ftn) (t9 *);
	static m10004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10004_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m10005_MI;
extern "C" t126 * m10005 (t1902 * __this, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7728_MI, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(&t1200_0_0_0), &m329_MI);
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
		t126 * L_6 = m10004(NULL, L_5, &m10004_MI);
		return L_6;
	}
}
extern "C" void m10006 (t1902 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	{
		t9 * L_0 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10010_MI, __this);
		V_0 = L_0;
		t9 * L_1 = V_0;
		t1093 * L_2 = p0;
		t1094  L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		m10075(NULL, L_1, L_2, L_3, &m10075_MI);
		return;
	}
}
extern MethodInfo m10007_MI;
extern "C" t1904 * m10007 (t1902 * __this, MethodInfo* method)
{
	{
		t1904 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10008_MI;
extern "C" void m10008 (t1902 * __this, t1904 * p0, MethodInfo* method)
{
	{
		t1904 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10009 (t1902 * __this, t2* p0, MethodInfo* method)
{
	typedef t9 * (*m10009_ftn) (t1902 *, t2*);
	static m10009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m10009_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t9 * m10010 (t1902 * __this, MethodInfo* method)
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
		V_1 = ((t9 *)IsInst(__this, InitializedTypeInfo(&t1914_TI)));
		t9 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		t9 * L_2 = V_1;
		t2* L_3 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12037_MI, L_2);
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
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1200_0_0_0), &m329_MI);
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_6);
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
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		t126 * L_11 = (__this->f0);
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		t2* L_13 = V_0;
		t9 * L_14 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(&m10009_MI, __this, L_13);
		__this->f4 = L_14;
	}

IL_005a:
	{
		t9 * L_15 = (__this->f4);
		return L_15;
	}
}
extern MethodInfo m10011_MI;
extern "C" void m10011 (t1902 * __this, int32_t p0, MethodInfo* method)
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

#include "t1919.h"
extern TypeInfo t1905_TI;
extern TypeInfo t1904_TI;
extern TypeInfo t1919_TI;
#include "t1904MD.h"
#include "t1905MD.h"
extern Il2CppType t9_0_0_0;
extern MethodInfo m12038_MI;
extern MethodInfo m10047_MI;
extern MethodInfo m10028_MI;
extern MethodInfo m10039_MI;
extern MethodInfo m7753_MI;
extern MethodInfo m10089_MI;


extern MethodInfo m10012_MI;
extern "C" void m10012 (t1906 * __this, t126 * p0, t1905 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t1905 * L_1 = p1;
		m10002(__this, L_0, L_1, &m10002_MI);
		t1905 * L_2 = p1;
		t9 * L_3 = m10028(L_2, &m10028_MI);
		__this->f7 = L_3;
		__this->f8 = 0;
		t1905 * L_4 = p1;
		t2* L_5 = m10039(L_4, &m10039_MI);
		__this->f2 = L_5;
		return;
	}
}
extern "C" void m10013 (t1906 * __this, t126 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		m10001(__this, L_0, &m10001_MI);
		__this->f8 = 0;
		t126 * L_1 = p0;
		t2* L_2 = p1;
		t158* L_3 = p2;
		t1844 * L_4 = m9777(NULL, L_1, L_2, L_3, &m9777_MI);
		__this->f9 = L_4;
		return;
	}
}
extern MethodInfo m10014_MI;
extern "C" void m10014 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_0 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t821 * L_1 = (t821 *)VirtFuncInvoker1< t821 *, t2* >::Invoke(&m7753_MI, L_0, (t2*) &_stringLiteral2121);
		((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f5 = L_1;
		t126 * L_2 = m329(NULL, LoadTypeToken(&t9_0_0_0), &m329_MI);
		t821 * L_3 = (t821 *)VirtFuncInvoker1< t821 *, t2* >::Invoke(&m7753_MI, L_2, (t2*) &_stringLiteral2122);
		((t1906_SFs*)InitializedTypeInfo(&t1906_TI)->static_fields)->f6 = L_3;
		return;
	}
}
extern MethodInfo m10015_MI;
extern "C" t2* m10015 (t1906 * __this, MethodInfo* method)
{
	t1581 * V_0 = {0};
	{
		t1904 * L_0 = (__this->f3);
		if (!((t1905 *)IsInst(L_0, InitializedTypeInfo(&t1905_TI))))
		{
			goto IL_002e;
		}
	}
	{
		t1904 * L_1 = (__this->f3);
		t1581 * L_2 = (t1581 *)VirtFuncInvoker1< t1581 *, t126 * >::Invoke(&m12038_MI, L_1, (t126 *)NULL);
		V_0 = L_2;
		t1581 * L_3 = V_0;
		t9 * L_4 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10047_MI, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		t1581 * L_5 = V_0;
		t9 * L_6 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10047_MI, L_5);
		t2* L_7 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12037_MI, L_6);
		return L_7;
	}

IL_002e:
	{
		t126 * L_8 = m10005(__this, &m10005_MI);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4465_MI, L_8);
		return L_9;
	}
}
extern MethodInfo m10016_MI;
extern "C" void m10016 (t1906 * __this, MethodInfo* method)
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
			t1904 * L_0 = (__this->f3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			t1904 * L_1 = (__this->f3);
			if (((t1919 *)IsInst(L_1, InitializedTypeInfo(&t1919_TI))))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			t1904 * L_2 = (__this->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
			m10089(NULL, L_2, &m10089_MI);
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
#include "t1907.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1907_TI;
#include "t1907MD.h"

extern TypeInfo t2175_TI;
extern TypeInfo t2176_TI;
extern Il2CppType t2176_0_0_0;
extern Il2CppType t2175_0_0_0;
extern MethodInfo m5829_MI;
extern MethodInfo m12039_MI;
extern MethodInfo m12040_MI;
extern MethodInfo m12041_MI;


extern MethodInfo m10017_MI;
extern "C" void m10017 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1161_TI));
		t1161 * L_0 = (t1161 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1161_TI));
		m5698(L_0, &m5698_MI);
		((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern MethodInfo m10018_MI;
extern TypeInfo* t2175_TI_var;
extern "C" void m10018 (t9 * __this , t9 * p0, t1581 * p1, MethodInfo* method)
{
	static bool m10018_init;
	if (!m10018_init)
	{
		t2175_TI_var = il2cpp_codegen_class_from_type(&t2175_0_0_0);
		m10018_init = true;
	}
	t2175* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
		t1161 * L_0 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_3 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_5 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2176_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_5, L_6);
			V_0 = ((t2175*)Castclass(L_7, t2175_TI_var));
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
		m1069(NULL, L_8, &m1069_MI);
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
		t2175* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1581 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1581 * >::Invoke(&m12039_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2175* L_16 = V_0;
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
extern MethodInfo m10019_MI;
extern TypeInfo* t2175_TI_var;
extern "C" void m10019 (t9 * __this , t9 * p0, t1581 * p1, MethodInfo* method)
{
	static bool m10019_init;
	if (!m10019_init)
	{
		t2175_TI_var = il2cpp_codegen_class_from_type(&t2175_0_0_0);
		m10019_init = true;
	}
	t2175* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
		t1161 * L_0 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_3 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_5 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2176_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_5, L_6);
			V_0 = ((t2175*)Castclass(L_7, t2175_TI_var));
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
		m1069(NULL, L_8, &m1069_MI);
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
		t2175* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		t1581 * L_13 = p1;
		InterfaceActionInvoker2< t9 *, t1581 * >::Invoke(&m12040_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		t2175* L_16 = V_0;
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
extern MethodInfo m10020_MI;
extern TypeInfo* t2175_TI_var;
extern "C" void m10020 (t9 * __this , t9 * p0, MethodInfo* method)
{
	static bool m10020_init;
	if (!m10020_init)
	{
		t2175_TI_var = il2cpp_codegen_class_from_type(&t2175_0_0_0);
		m10020_init = true;
	}
	t2175* V_0 = {0};
	t9 * V_1 = {0};
	int32_t V_2 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
		t1161 * L_0 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m5848_MI, L_0);
		V_1 = L_1;
		t9 * L_2 = V_1;
		m1067(NULL, L_2, &m1067_MI);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_3 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m5694_MI, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1907_TI));
			t1161 * L_5 = ((t1907_SFs*)InitializedTypeInfo(&t1907_TI)->static_fields)->f0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
			t126 * L_6 = m329(NULL, LoadTypeToken(&t2176_0_0_0), &m329_MI);
			t121 * L_7 = (t121 *)VirtFuncInvoker1< t121 *, t126 * >::Invoke(&m5829_MI, L_5, L_6);
			V_0 = ((t2175*)Castclass(L_7, t2175_TI_var));
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
		m1069(NULL, L_8, &m1069_MI);
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
		t2175* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		t9 * L_12 = p0;
		InterfaceActionInvoker1< t9 * >::Invoke(&m12041_MI, (*(t9 **)(t9 **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		t2175* L_15 = V_0;
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
extern TypeInfo t1908_TI;
#include "t1908MD.h"

#include "t1909MD.h"
extern MethodInfo m10105_MI;
extern MethodInfo m10104_MI;
extern MethodInfo m10021_MI;


extern "C" t2* m10021 (t1908 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10022_MI;
extern "C" t1910* m10022 (t1908 * __this, MethodInfo* method)
{
	{
		return (t1910*)NULL;
	}
}
extern MethodInfo m10023_MI;
extern "C" t126 * m10023 (t1908 * __this, MethodInfo* method)
{
	{
		t126 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10024_MI;
extern "C" t2* m10024 (t1908 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m10105(__this, &m10105_MI);
		t2* L_1 = m10104(__this, &m10104_MI);
		t2* L_2 = m10021(__this, &m10021_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m399(NULL, L_0, L_1, L_2, &m399_MI);
		return L_3;
	}
}
#include "t1911.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1911_TI;
#include "t1911MD.h"



extern MethodInfo m10025_MI;
extern "C" void m10025 (t1911 * __this, t9 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10026_MI;
extern "C" t9 * m10026 (t1911 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



extern MethodInfo m10027_MI;
extern "C" void m10027 (t1904 * __this, t2* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t9 * m10028 (t1904 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10029_MI;
extern "C" void m10029 (t1904 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m10030_MI;
extern "C" t2* m10030 (t1904 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m10031_MI;
extern "C" void m10031 (t1904 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10032_MI;
extern "C" bool m10032 (t1904 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return ((((int32_t)((((t9*)(t2*)L_0) == ((t9*)(t9 *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10033_MI;
extern "C" bool m10033 (t1904 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m10034_MI;
extern "C" void m10034 (t1904 * __this, bool p0, MethodInfo* method)
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

#include "t1912.h"
extern TypeInfo t1912_TI;
extern TypeInfo t1915_TI;
#include "t1912MD.h"
extern MethodInfo m11875_MI;
extern MethodInfo m11871_MI;
extern MethodInfo m10049_MI;
extern MethodInfo m10045_MI;
extern MethodInfo m12042_MI;


extern MethodInfo m10035_MI;
extern "C" void m10035 (t1905 * __this, t2* p0, t1581 * p1, MethodInfo* method)
{
	t9 * V_0 = {0};
	t1905 * G_B2_0 = {0};
	t1905 * G_B1_0 = {0};
	t9 * G_B3_0 = {0};
	t1905 * G_B3_1 = {0};
	{
		t2* L_0 = p0;
		m10027(__this, L_0, &m10027_MI);
		t1581 * L_1 = p1;
		__this->f3 = L_1;
		t1581 * L_2 = (__this->f3);
		t9 * L_3 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10045_MI, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		t1581 * L_4 = (__this->f3);
		t9 * L_5 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m10045_MI, L_4);
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m12042_MI, L_5);
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
extern MethodInfo m10036_MI;
extern "C" t1200 * m10036 (t1905 * __this, MethodInfo* method)
{
	{
		t1912 * L_0 = (__this->f5);
		t9 * L_1 = (t9 *)VirtFuncInvoker0< t9 * >::Invoke(&m11875_MI, L_0);
		return ((t1200 *)Castclass(L_1, InitializedTypeInfo(&t1200_TI)));
	}
}
extern MethodInfo m10037_MI;
extern "C" void m10037 (t1905 * __this, t1200 * p0, MethodInfo* method)
{
	{
		t1200 * L_0 = p0;
		t1912 * L_1 = (t1912 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1912_TI));
		m11871(L_1, L_0, &m11871_MI);
		__this->f5 = L_1;
		return;
	}
}
extern MethodInfo m10038_MI;
extern "C" t1581 * m10038 (t1905 * __this, t126 * p0, MethodInfo* method)
{
	{
		t1581 * L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t2* m10039 (t1905 * __this, MethodInfo* method)
{
	{
		t1581 * L_0 = (__this->f3);
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m10049_MI, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t1913_TI;
extern TypeInfo t184_TI;
extern TypeInfo t899_TI;
extern TypeInfo t884_TI;
#include "t884MD.h"
extern Il2CppType t1914_0_0_0;
extern Il2CppType t1915_0_0_0;
extern Il2CppType t1913_0_0_0;
extern MethodInfo m10053_MI;
extern MethodInfo m10308_MI;
extern MethodInfo m10310_MI;
extern MethodInfo m11947_MI;
extern MethodInfo m4289_MI;
extern MethodInfo m10298_MI;
extern MethodInfo m10066_MI;


extern MethodInfo m10040_MI;
extern "C" void m10040 (t1581 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m10053(__this, &m10053_MI);
		return;
	}
}
extern MethodInfo m10041_MI;
extern TypeInfo* t713_TI_var;
extern MethodInfo* m5747_MI_var;
extern MethodInfo* m5748_MI_var;
extern MethodInfo* m5749_MI_var;
extern "C" void m10041 (t1581 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	static bool m10041_init;
	if (!m10041_init)
	{
		t713_TI_var = il2cpp_codegen_class_from_type(&t713_0_0_0);
		m5747_MI_var = il2cpp_codegen_genericmethod_get_method(&m5747_GM);
		m5748_MI_var = il2cpp_codegen_genericmethod_get_method(&m5748_GM);
		m5749_MI_var = il2cpp_codegen_genericmethod_get_method(&m5749_GM);
		m10041_init = true;
	}
	t1967 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t9 * V_3 = {0};
	t2* V_4 = {0};
	t713 * V_5 = {0};
	int32_t V_6 = 0;
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		t1967 * L_1 = m10299(L_0, &m10299_MI);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		t1967 * L_2 = V_0;
		t2* L_3 = m10308(L_2, &m10308_MI);
		V_4 = L_3;
		t2* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		t713 * L_5 = ((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		t713 * L_6 = (t713 *)il2cpp_codegen_object_new (t713_TI_var);
		m5747(L_6, 6, m5747_MI_var);
		V_5 = L_6;
		t713 * L_7 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_7, (t2*) &_stringLiteral438, 0);
		t713 * L_8 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_8, (t2*) &_stringLiteral2123, 1);
		t713 * L_9 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_9, (t2*) &_stringLiteral2124, 2);
		t713 * L_10 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_10, (t2*) &_stringLiteral2125, 3);
		t713 * L_11 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_11, (t2*) &_stringLiteral2117, 4);
		t713 * L_12 = V_5;
		VirtActionInvoker2< t2*, int32_t >::Invoke(m5748_MI_var, L_12, (t2*) &_stringLiteral2126, 5);
		t713 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		t713 * L_14 = ((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f8;
		t2* L_15 = V_4;
		bool L_16 = (bool)VirtFuncInvoker2< bool, t2*, int32_t* >::Invoke(m5749_MI_var, L_14, L_15, (&V_6));
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
		t1967 * L_18 = V_0;
		t9 * L_19 = m10310(L_18, &m10310_MI);
		__this->f1 = ((t2*)Castclass(L_19, (&t2_TI)));
		goto IL_0155;
	}

IL_00d4:
	{
		t1967 * L_20 = V_0;
		t9 * L_21 = m10310(L_20, &m10310_MI);
		__this->f2 = ((t9 *)Castclass(L_21, InitializedTypeInfo(&t1914_TI)));
		goto IL_0155;
	}

IL_00ea:
	{
		t1967 * L_22 = V_0;
		t9 * L_23 = m10310(L_22, &m10310_MI);
		__this->f0 = ((t9 *)Castclass(L_23, InitializedTypeInfo(&t1913_TI)));
		goto IL_0155;
	}

IL_00fd:
	{
		t1967 * L_24 = V_0;
		t9 * L_25 = m10310(L_24, &m10310_MI);
		__this->f3 = ((t9 *)Castclass(L_25, InitializedTypeInfo(&t1915_TI)));
		goto IL_0155;
	}

IL_0110:
	{
		t1967 * L_26 = V_0;
		t9 * L_27 = m10310(L_26, &m10310_MI);
		V_3 = L_27;
		t9 * L_28 = V_3;
		if (!((t2*)IsInst(L_28, (&t2_TI))))
		{
			goto IL_012e;
		}
	}
	{
		t9 * L_29 = V_3;
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11947_MI, ((t9 *)Castclass(L_29, InitializedTypeInfo(&t184_TI))), (t9 *)NULL);
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
		t1967 * L_33 = V_0;
		t9 * L_34 = m10310(L_33, &m10310_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int32_t L_35 = m4289(NULL, L_34, &m4289_MI);
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
		t1967 * L_37 = V_0;
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(&m10311_MI, L_37);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		int32_t L_41 = ((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f6;
		__this->f4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
extern MethodInfo m10042_MI;
extern "C" void m10042 (t9 * __this , MethodInfo* method)
{
	{
		((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f6 = 1;
		((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f7 = 2;
		return;
	}
}
extern MethodInfo m10043_MI;
extern "C" bool m10043 (t1581 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		int32_t L_1 = ((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m10044_MI;
extern "C" t9 * m10044 (t1581 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t9 * m10045 (t1581 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m10046_MI;
extern "C" void m10046 (t1581 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t9 * m10047 (t1581 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m10048_MI;
extern "C" void m10048 (t1581 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" t2* m10049 (t1581 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m10050_MI;
extern "C" void m10050 (t1581 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" void m10051 (t1581 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		t1093 * L_0 = p0;
		t126 * L_1 = m2486(__this, &m2486_MI);
		m10298(L_0, L_1, &m10298_MI);
		t1093 * L_2 = p0;
		t2* L_3 = (__this->f1);
		m5715(L_2, (t2*) &_stringLiteral438, L_3, &m5715_MI);
		t1093 * L_4 = p0;
		t9 * L_5 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_6 = m329(NULL, LoadTypeToken(&t1914_0_0_0), &m329_MI);
		m5700(L_4, (t2*) &_stringLiteral2123, L_5, L_6, &m5700_MI);
		t1093 * L_7 = p0;
		t9 * L_8 = (__this->f3);
		t126 * L_9 = m329(NULL, LoadTypeToken(&t1915_0_0_0), &m329_MI);
		m5700(L_7, (t2*) &_stringLiteral2125, L_8, L_9, &m5700_MI);
		t1093 * L_10 = p0;
		t9 * L_11 = (__this->f0);
		t126 * L_12 = m329(NULL, LoadTypeToken(&t1913_0_0_0), &m329_MI);
		m5700(L_10, (t2*) &_stringLiteral2124, L_11, L_12, &m5700_MI);
		t1093 * L_13 = p0;
		int32_t L_14 = (__this->f4);
		m5702(L_13, (t2*) &_stringLiteral2126, L_14, &m5702_MI);
		return;
	}
}
extern MethodInfo m10052_MI;
extern "C" t9 * m10052 (t1581 * __this, t1094  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1581_TI));
		int32_t L_1 = ((t1581_SFs*)InitializedTypeInfo(&t1581_TI)->static_fields)->f6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1918_TI));
		t9 * L_2 = m10066(NULL, __this, &m10066_MI);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
extern "C" void m10053 (t1581 * __this, MethodInfo* method)
{
	{
		t1853 * L_0 = (t1853 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1853_TI));
		m9788(L_0, &m9788_MI);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m10054_MI;
extern "C" t126 * m10054 (t1581 * __this, MethodInfo* method)
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
		t2* L_2 = (t2*)InterfaceFuncInvoker0< t2* >::Invoke(&m12037_MI, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m7742(NULL, L_2, &m7742_MI);
		__this->f5 = L_3;
	}

IL_001e:
	{
		t126 * L_4 = (__this->f5);
		return L_4;
	}
}
#include "t1916.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m11101_MI;
extern MethodInfo m5707_MI;


extern MethodInfo m10055_MI;
extern "C" void m10055 (t9 * __this , MethodInfo* method)
{
	{
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f0 = (t2*)NULL;
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f1 = (t2*)NULL;
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f2 = (t2*)NULL;
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f3 = 0;
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f4 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		t1149 * L_0 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_0, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f5 = L_0;
		t1149 * L_1 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_1, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f6 = L_1;
		t1149 * L_2 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_2, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f7 = L_2;
		t1149 * L_3 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_3, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f8 = L_3;
		t1149 * L_4 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_4, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f9 = L_4;
		t1149 * L_5 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_5, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f10 = L_5;
		t1149 * L_6 = (t1149 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1149_TI));
		m5883(L_6, &m5883_MI);
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f11 = L_6;
		return;
	}
}
extern MethodInfo m10056_MI;
extern "C" t2* m10056 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t2* L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" t2* m10057 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t2* L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t2* L_1 = m11101(NULL, &m11101_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t2* L_2 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f2;
		return L_2;
	}
}
extern "C" t1908 * m10058 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t1149 * V_0 = {0};
	t1908 * V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
		t1149 * L_0 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f9;
		V_0 = L_0;
		t1149 * L_1 = V_0;
		m1067(NULL, L_1, &m1067_MI);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1916_TI));
			t1149 * L_2 = ((t1916_SFs*)InitializedTypeInfo(&t1916_TI)->static_fields)->f6;
			t126 * L_3 = p0;
			t9 * L_4 = (t9 *)VirtFuncInvoker1< t9 *, t9 * >::Invoke(&m5707_MI, L_2, L_3);
			V_1 = ((t1908 *)IsInst(L_4, InitializedTypeInfo(&t1908_TI)));
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
		t1149 * L_5 = V_0;
		m1069(NULL, L_5, &m1069_MI);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0028:
	{
		t1908 * L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
