#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2984.h"
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
extern TypeInfo t2984_TI;
#include "t2984MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t2975.h"
#include "t125.h"
#include "t470.h"

#include "t121.h"

extern Il2CppGenericMethod m15623_GM;
extern "C" void m15623_gshared (t2984 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15624_GM;
extern "C" t2975  m15624_gshared (t2984 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15624((t2984 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2975  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2975  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15625_GM;
extern "C" t9 * m15625_gshared (t2984 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15626_GM;
extern "C" t2975  m15626_gshared (t2984 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2975 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2985.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2985_TI;
#include "t2985MD.h"

#include "t1164.h"
#include "t2979.h"
#include "t2972.h"
#include "t124.h"
extern TypeInfo t2979_TI;
extern TypeInfo t1161_TI;
extern TypeInfo t1164_TI;
extern TypeInfo t2975_TI;
extern TypeInfo t125_TI;
extern TypeInfo t9_TI;
extern TypeInfo t124_TI;
#include "t2979MD.h"
#include "t2975MD.h"
#include "t9MD.h"
#include "t2972MD.h"
extern Il2CppType t2979_0_0_0;
extern Il2CppType t2985_0_0_0;
extern MethodInfo m12001_MI;
extern MethodInfo m15629_MI;
extern MethodInfo m336_MI;
extern Il2CppGenericMethod m15586_GM;
extern Il2CppGenericMethod m15551_GM;
extern Il2CppGenericMethod m15553_GM;
extern Il2CppGenericMethod m15629_GM;
extern Il2CppGenericMethod m15547_GM;
extern Il2CppGenericMethod m15585_GM;


extern Il2CppGenericMethod m15627_GM;
extern "C" void m15627_gshared (t2985 * __this, t2972 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2972 * L_0 = p0;
		t2979  L_1 = (( t2979  (*) (t2972 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m15628_GM;
extern "C" bool m15628_gshared (t2985 * __this, MethodInfo* method)
{
	{
		t2979 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2979 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern "C" t1164  m15629_gshared (t2985 * __this, MethodInfo* method)
{
	{
		t2979  L_0 = (__this->f0);
		t2979  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1164  L_3 = (t1164 )InterfaceFuncInvoker0< t1164  >::Invoke(&m12001_MI, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m15630_GM;
extern "C" t9 * m15630_gshared (t2985 * __this, MethodInfo* method)
{
	t2975  V_0 = {0};
	{
		t2979 * L_0 = &(__this->f0);
		t2975  L_1 = (( t2975  (*) (t2979 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		t9 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
extern Il2CppGenericMethod m15631_GM;
extern "C" t9 * m15631_gshared (t2985 * __this, MethodInfo* method)
{
	t2975  V_0 = {0};
	{
		t2979 * L_0 = &(__this->f0);
		t2975  L_1 = (( t2975  (*) (t2979 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2975 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m15632_GM;
extern "C" t9 * m15632_gshared (t2985 * __this, MethodInfo* method)
{
	{
		t1164  L_0 = (t1164 )VirtFuncInvoker0< t1164  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		t1164  L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t1164_TI), &L_1);
		return L_2;
	}
}
#include "t2986.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2986_TI;
#include "t2986MD.h"

#include "t126.h"
#include "t127.h"
#include "mscorlib_ArrayTypes.h"
#include "t2988.h"
extern TypeInfo t126_TI;
extern TypeInfo t152_TI;
extern TypeInfo t2988_TI;
#include "t126MD.h"
#include "t1347MD.h"
#include "t2988MD.h"
extern Il2CppType t2986_0_0_0;
extern Il2CppType t2204_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2534_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2988_0_0_0;
extern MethodInfo m329_MI;
extern MethodInfo m4474_MI;
extern MethodInfo m4472_MI;
extern MethodInfo m11112_MI;
extern MethodInfo m15641_MI;
extern MethodInfo m29174_MI;
extern MethodInfo m29175_MI;
extern Il2CppGenericMethod m15641_GM;
extern Il2CppGenericMethod m29174_GM;
extern Il2CppGenericMethod m29175_GM;


extern Il2CppGenericMethod m15633_GM;
extern "C" void m15633_gshared (t2986 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m15634_GM;
extern "C" void m15634_gshared (t9 * __this , MethodInfo* method)
{
	t2988 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2988 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (t2988 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((t2986_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern Il2CppGenericMethod m15635_GM;
extern "C" int32_t m15635_gshared (t2986 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern Il2CppGenericMethod m15636_GM;
extern "C" bool m15636_gshared (t2986 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern Il2CppGenericMethod m15637_GM;
extern "C" t2986 * m15637_gshared (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2986 * L_0 = ((t2986_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#include "t2987.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2987_TI;
#include "t2987MD.h"

extern TypeInfo t2204_TI;
extern MethodInfo m672_MI;
extern MethodInfo m29176_MI;
extern Il2CppGenericMethod m29176_GM;


extern Il2CppGenericMethod m15638_GM;
extern "C" void m15638_gshared (t2987 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2986 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m15639_GM;
extern "C" int32_t m15639_gshared (t2987 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern Il2CppGenericMethod m15640_GM;
extern "C" bool m15640_gshared (t2987 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t9*)(t9 *)L_5) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = p1;
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m671_MI;


extern "C" void m15641_gshared (t2988 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2986 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m15642_GM;
extern "C" int32_t m15642_gshared (t2988 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m672_MI, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)));
		return L_3;
	}
}
extern Il2CppGenericMethod m15643_GM;
extern "C" bool m15643_gshared (t2988 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((t9*)(t9 *)L_5) == ((t9*)(t9 *)NULL))? 1 : 0);
	}

IL_0012:
	{
		int32_t L_6 = p1;
		int32_t L_7 = L_6;
		t9 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, t9 * >::Invoke(&m671_MI, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&p0)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4622_TI;

#include "t2989.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4623_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4005_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2989_TI;
#include "t2989MD.h"

#include "t305.h"
#include "t279.h"
#include "t2.h"
extern TypeInfo t221_TI;
extern TypeInfo t2_TI;
extern TypeInfo t305_TI;
extern TypeInfo t279_TI;
#include "t2MD.h"
extern Il2CppType t221_0_0_0;
extern Il2CppType t279_0_0_0;
extern MethodInfo m673_MI;
extern MethodInfo m4294_MI;
extern Il2CppGenericMethod m15646_GM;
extern Il2CppGenericMethod m15648_GM;
extern Il2CppGenericMethod m15645_GM;
extern Il2CppGenericMethod m15647_GM;


#ifndef _MSC_VER
#else
#endif
#include "t279MD.h"



#include "t2990.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2990_TI;
#include "t2990MD.h"



extern Il2CppGenericMethod m15650_GM;
extern "C" void m15650_gshared (t2990 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15651_GM;
extern "C" t9 * m15651_gshared (t2990 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15651((t2990 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	typedef t9 * (*FunctionPointerType) (t9 * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15653_GM;
extern "C" t9 * m15653_gshared (t2990 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern Il2CppGenericMethod m15655_GM;
extern "C" t9 * m15655_gshared (t2990 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2991.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2991_TI;
#include "t2991MD.h"

#include "t1341.h"
extern TypeInfo t1341_TI;
#include "t1341MD.h"
#include "t121MD.h"
extern Il2CppType t2991_0_0_0;
extern Il2CppType t2989_0_0_0;
extern MethodInfo m5714_MI;
extern MethodInfo m5718_MI;
struct t121;
#include "t903.h"
extern "C" t2989  m26073_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26073(__this, p0, method) (( t2989  (*) (t121 *, int32_t, MethodInfo*))m26073_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15660_GM;
extern Il2CppGenericMethod m26073_GM;


extern Il2CppGenericMethod m15656_GM;
extern "C" void m15656_gshared (t2991 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15657_GM;
extern "C" t9 * m15657_gshared (t2991 * __this, MethodInfo* method)
{
	{
		t2989  L_0 = (( t2989  (*) (t2991 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2989  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m15658_GM;
extern "C" void m15658_gshared (t2991 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15659_GM;
extern "C" bool m15659_gshared (t2991 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5718(L_1, &m5718_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t2989  m15660_gshared (t2991 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_1, (t2*) &_stringLiteral1244, &m5714_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_3, (t2*) &_stringLiteral1245, &m5714_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5718(L_5, &m5718_MI);
		int32_t L_7 = (__this->f1);
		t2989  L_8 = (( t2989  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4628_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4003_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4002_TI;

#include "System.Core_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4629_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4012_TI;



#include "t2992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2992_TI;
#include "t2992MD.h"

extern Il2CppType t2992_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24933_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24933(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
#define m26084(__this, p0, method) (( t279 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15665_GM;
extern Il2CppGenericMethod m26084_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4630_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4631_TI;

#include "t471.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4632_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4633_TI;



#include "t2993.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2993_TI;
#include "t2993MD.h"

extern TypeInfo t471_TI;
extern Il2CppType t2993_0_0_0;
struct t121;
#define m26095(__this, p0, method) (( t471 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15670_GM;
extern Il2CppGenericMethod m26095_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4634_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4635_TI;

#include "t293.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4636_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4637_TI;



#include "t2994.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2994_TI;
#include "t2994MD.h"

extern TypeInfo t293_TI;
extern Il2CppType t2994_0_0_0;
struct t121;
#define m26106(__this, p0, method) (( t293 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15675_GM;
extern Il2CppGenericMethod m26106_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4638_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4639_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4640_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4641_TI;



#include "t2995.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2995_TI;
#include "t2995MD.h"

extern TypeInfo t623_TI;
extern Il2CppType t2995_0_0_0;
struct t121;
#define m26117(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15680_GM;
extern Il2CppGenericMethod m26117_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4642_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2970_TI;



#include "t2996.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2996_TI;
#include "t2996MD.h"

#include "t278.h"
#include "t132.h"
#include "t169.h"
#include "t2997.h"
#include "UnityEngine_ArrayTypes.h"
#include "t2999.h"
extern TypeInfo t998_TI;
extern TypeInfo t278_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t2997_TI;
extern TypeInfo t275_TI;
extern TypeInfo t122_TI;
extern TypeInfo t2999_TI;
#include "t278MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t2999MD.h"
#include "t2997MD.h"
extern Il2CppType t278_0_0_0;
extern Il2CppType t2997_0_0_0;
extern Il2CppType t275_0_0_0;
extern Il2CppType t2996_0_0_0;
extern Il2CppType t2999_0_0_0;
extern MethodInfo m11998_MI;
extern MethodInfo m15501_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5735_MI;
extern MethodInfo m1191_MI;
extern MethodInfo m15692_MI;
extern MethodInfo m15514_MI;
extern MethodInfo m15712_MI;
extern MethodInfo m15695_MI;
struct t278;
#include "t138.h"
#include "t563.h"
struct t2972;
#include "t2980.h"
extern "C" void m26064_gshared (t2972 * __this, t121 * p0, int32_t p1, t2980 * p2, MethodInfo* method);
#define m26064(__this, p0, p1, p2, method) (( void (*) (t2972 *, t121 *, int32_t, t2980 *, MethodInfo*))m26064_gshared)(__this, p0, p1, p2, method)
#define m26128(__this, p0, p1, p2, method) (( void (*) (t278 *, t121 *, int32_t, t2999 *, MethodInfo*))m26064_gshared)(__this, p0, p1, p2, method)
struct t278;
#include "t1668.h"
extern "C" void m26129 (t278 * __this, t275* p0, int32_t p1, t2999 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15501_GM;
extern Il2CppGenericMethod m1191_GM;
extern Il2CppGenericMethod m15693_GM;
extern Il2CppGenericMethod m15692_GM;
extern Il2CppGenericMethod m15510_GM;
extern Il2CppGenericMethod m15514_GM;
extern Il2CppGenericMethod m15712_GM;
extern Il2CppGenericMethod m26128_GM;
extern Il2CppGenericMethod m26129_GM;
extern Il2CppGenericMethod m15695_GM;


#ifndef _MSC_VER
#else
#endif

#include "t2998.h"
extern TypeInfo t2998_TI;
#include "t2998MD.h"
extern Il2CppType t2998_0_0_0;
extern Il2CppGenericMethod m15707_GM;
extern Il2CppGenericMethod m15546_GM;
extern Il2CppGenericMethod m15711_GM;
extern Il2CppGenericMethod m15705_GM;


#ifndef _MSC_VER
#else
#endif

#include "t1530.h"
extern TypeInfo t1668_TI;
extern TypeInfo t1530_TI;
#include "t1164MD.h"
#include "t1530MD.h"
extern MethodInfo m5715_MI;
extern MethodInfo m15644_MI;
extern MethodInfo m6912_MI;
extern Il2CppGenericMethod m15710_GM;
extern Il2CppGenericMethod m15708_GM;
extern Il2CppGenericMethod m15709_GM;
extern Il2CppGenericMethod m15644_GM;


#ifndef _MSC_VER
#else
#endif



#include "t3000.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3000_TI;
#include "t3000MD.h"

#include "t3001.h"
#include "t3002.h"
extern TypeInfo t3001_TI;
extern TypeInfo t2969_TI;
extern TypeInfo t3002_TI;
#include "t3002MD.h"
#include "t3001MD.h"
extern Il2CppType t3001_0_0_0;
extern Il2CppType t2969_0_0_0;
extern Il2CppType t3000_0_0_0;
extern Il2CppType t3002_0_0_0;
extern MethodInfo m15727_MI;
extern MethodInfo m15516_MI;
extern MethodInfo m15735_MI;
extern MethodInfo m15730_MI;
struct t278;
struct t2972;
#include "t2983.h"
extern "C" void m26067_gshared (t2972 * __this, t121 * p0, int32_t p1, t2983 * p2, MethodInfo* method);
#define m26067(__this, p0, p1, p2, method) (( void (*) (t2972 *, t121 *, int32_t, t2983 *, MethodInfo*))m26067_gshared)(__this, p0, p1, p2, method)
#define m26131(__this, p0, p1, p2, method) (( void (*) (t278 *, t121 *, int32_t, t3002 *, MethodInfo*))m26067_gshared)(__this, p0, p1, p2, method)
struct t278;
extern "C" void m26132 (t278 * __this, t2969* p0, int32_t p1, t3002 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15526_GM;
extern Il2CppGenericMethod m15728_GM;
extern Il2CppGenericMethod m15727_GM;
extern Il2CppGenericMethod m15516_GM;
extern Il2CppGenericMethod m15735_GM;
extern Il2CppGenericMethod m26131_GM;
extern Il2CppGenericMethod m26132_GM;
extern Il2CppGenericMethod m15730_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2971.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2971_TI;
#include "t2971MD.h"



#include "t3003.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3003_TI;
#include "t3003MD.h"



#include "t3004.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3004_TI;
#include "t3004MD.h"



extern Il2CppGenericMethod m15744_GM;
extern "C" void m15744_gshared (t3004 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15746_GM;
extern "C" t2989  m15746_gshared (t3004 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15746((t3004 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2989  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2989  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15748_GM;
extern "C" t9 * m15748_gshared (t3004 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15750_GM;
extern "C" t2989  m15750_gshared (t3004 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2989 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t3005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3005_TI;
#include "t3005MD.h"

extern Il2CppType t3005_0_0_0;
extern MethodInfo m15753_MI;
extern Il2CppGenericMethod m15706_GM;
extern Il2CppGenericMethod m15753_GM;


#include "t3006.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3006_TI;
#include "t3006MD.h"

#include "t3007.h"
extern TypeInfo t3007_TI;
#include "t3007MD.h"
extern Il2CppType t3006_0_0_0;
extern Il2CppType t4643_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t3007_0_0_0;
extern MethodInfo m15762_MI;
extern MethodInfo m29177_MI;
extern MethodInfo m29178_MI;
extern Il2CppGenericMethod m15762_GM;
extern Il2CppGenericMethod m29177_GM;
extern Il2CppGenericMethod m29178_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4643_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15757_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4624_TI;



#include "t3008.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3008_TI;
#include "t3008MD.h"

#include "t3009.h"
extern TypeInfo t3009_TI;
#include "t3009MD.h"
extern Il2CppType t3008_0_0_0;
extern Il2CppType t4644_0_0_0;
extern Il2CppType t3009_0_0_0;
extern MethodInfo m15770_MI;
extern MethodInfo m29179_MI;
extern MethodInfo m29168_MI;
extern Il2CppGenericMethod m15770_GM;
extern Il2CppGenericMethod m29179_GM;
extern Il2CppGenericMethod m29168_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4644_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15765_GM;


#include "t283.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t283_TI;
#include "t283MD.h"

#include "t3018.h"
#include "t3022.h"
#include "t281.h"
#include "t205.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "t1669.h"
#include "t3014.h"
#include "t1100.h"
#include "t1101.h"
#include "t3013.h"
#include "t3025.h"
#include "t3020.h"
#include "t3027.h"
#include "t3028.h"
#include "t3030.h"
extern TypeInfo t281_TI;
extern TypeInfo t205_TI;
extern TypeInfo t3012_TI;
extern TypeInfo t1669_TI;
extern TypeInfo t3018_TI;
extern TypeInfo t3022_TI;
extern TypeInfo t4645_TI;
extern TypeInfo t4646_TI;
extern TypeInfo t4017_TI;
extern TypeInfo t3014_TI;
extern TypeInfo t76_TI;
extern TypeInfo t137_TI;
extern TypeInfo t4016_TI;
extern TypeInfo t4210_TI;
extern TypeInfo t3013_TI;
extern TypeInfo t3025_TI;
extern TypeInfo t3020_TI;
extern TypeInfo t3027_TI;
extern TypeInfo t903_TI;
extern TypeInfo t3028_TI;
extern TypeInfo t1095_TI;
extern TypeInfo t2515_TI;
extern TypeInfo t3010_TI;
extern TypeInfo t3011_TI;
extern TypeInfo t563_TI;
extern TypeInfo t1158_TI;
extern TypeInfo t3030_TI;
extern TypeInfo t4647_TI;
#include "t1669MD.h"
#include "t3018MD.h"
#include "t3022MD.h"
#include "t3014MD.h"
#include "t3013MD.h"
#include "t3025MD.h"
#include "t3020MD.h"
#include "t3027MD.h"
#include "t903MD.h"
#include "t3028MD.h"
#include "t563MD.h"
#include "t1158MD.h"
#include "t3030MD.h"
#include "t1100MD.h"
extern Il2CppType t283_0_0_0;
extern Il2CppType t3012_0_0_0;
extern Il2CppType t3018_0_0_0;
extern Il2CppType t3022_0_0_0;
extern Il2CppType t4645_0_0_0;
extern Il2CppType t4646_0_0_0;
extern Il2CppType t4017_0_0_0;
extern Il2CppType t4016_0_0_0;
extern Il2CppType t3014_0_0_0;
extern Il2CppType t4210_0_0_0;
extern Il2CppType t3013_0_0_0;
extern Il2CppType t3025_0_0_0;
extern Il2CppType t3020_0_0_0;
extern Il2CppType t3027_0_0_0;
extern Il2CppType t3028_0_0_0;
extern Il2CppType t1095_0_0_0;
extern Il2CppType t2515_0_0_0;
extern Il2CppType t3010_0_0_0;
extern Il2CppType t3011_0_0_0;
extern Il2CppType t3030_0_0_0;
extern Il2CppType t4647_0_0_0;
extern Il2CppType t281_0_0_0;
extern Il2CppType t205_0_0_0;
extern MethodInfo m15807_MI;
extern MethodInfo m1199_MI;
extern MethodInfo m15797_MI;
extern MethodInfo m29180_MI;
extern MethodInfo m29181_MI;
extern MethodInfo m8349_MI;
extern MethodInfo m15841_MI;
extern MethodInfo m15876_MI;
extern MethodInfo m29182_MI;
extern MethodInfo m29183_MI;
extern MethodInfo m29184_MI;
extern MethodInfo m1197_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m15811_MI;
extern MethodInfo m15819_MI;
extern MethodInfo m15899_MI;
extern MethodInfo m15801_MI;
extern MethodInfo m15903_MI;
extern MethodInfo m15860_MI;
extern MethodInfo m15911_MI;
extern MethodInfo m5722_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m15796_MI;
extern MethodInfo m15820_MI;
extern MethodInfo m8528_MI;
extern MethodInfo m7711_MI;
extern MethodInfo m1162_MI;
extern MethodInfo m29185_MI;
extern MethodInfo m5731_MI;
extern MethodInfo m5744_MI;
extern MethodInfo m5743_MI;
extern MethodInfo m5732_MI;
extern MethodInfo m7799_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5720_MI;
extern MethodInfo m7762_MI;
extern MethodInfo m15812_MI;
extern MethodInfo m26186_MI;
struct t283;
extern "C" void m26178 (t283 * __this, t4210* p0, int32_t p1, t3013 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t283;
struct t2972;
#include "t3026.h"
extern "C" void m26181_gshared (t2972 * __this, t121 * p0, int32_t p1, t3026 * p2, MethodInfo* method);
#define m26181(__this, p0, p1, p2, method) (( void (*) (t2972 *, t121 *, int32_t, t3026 *, MethodInfo*))m26181_gshared)(__this, p0, p1, p2, method)
#define m26180(__this, p0, p1, p2, method) (( void (*) (t283 *, t121 *, int32_t, t3025 *, MethodInfo*))m26181_gshared)(__this, p0, p1, p2, method)
struct t283;
extern "C" void m26183 (t283 * __this, t4016* p0, int32_t p1, t3025 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15813_GM;
extern Il2CppGenericMethod m15814_GM;
extern Il2CppGenericMethod m15807_GM;
extern Il2CppGenericMethod m15815_GM;
extern Il2CppGenericMethod m1199_GM;
extern Il2CppGenericMethod m15816_GM;
extern Il2CppGenericMethod m15797_GM;
extern Il2CppGenericMethod m29180_GM;
extern Il2CppGenericMethod m29181_GM;
extern Il2CppGenericMethod m15805_GM;
extern Il2CppGenericMethod m15841_GM;
extern Il2CppGenericMethod m15876_GM;
extern Il2CppGenericMethod m15798_GM;
extern Il2CppGenericMethod m15776_GM;
extern Il2CppGenericMethod m29182_GM;
extern Il2CppGenericMethod m29183_GM;
extern Il2CppGenericMethod m29184_GM;
extern Il2CppGenericMethod m15821_GM;
extern Il2CppGenericMethod m15823_GM;
extern Il2CppGenericMethod m1197_GM;
extern Il2CppGenericMethod m15811_GM;
extern Il2CppGenericMethod m15817_GM;
extern Il2CppGenericMethod m15804_GM;
extern Il2CppGenericMethod m15800_GM;
extern Il2CppGenericMethod m15819_GM;
extern Il2CppGenericMethod m15899_GM;
extern Il2CppGenericMethod m26178_GM;
extern Il2CppGenericMethod m15801_GM;
extern Il2CppGenericMethod m15903_GM;
extern Il2CppGenericMethod m26180_GM;
extern Il2CppGenericMethod m15860_GM;
extern Il2CppGenericMethod m15911_GM;
extern Il2CppGenericMethod m15921_GM;
extern Il2CppGenericMethod m15799_GM;
extern Il2CppGenericMethod m15796_GM;
extern Il2CppGenericMethod m15820_GM;
extern Il2CppGenericMethod m26183_GM;
extern Il2CppGenericMethod m15929_GM;
extern Il2CppGenericMethod m29185_GM;
extern Il2CppGenericMethod m15812_GM;
extern Il2CppGenericMethod m26186_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15822_GM;
extern Il2CppGenericMethod m15824_GM;


#include "t3015.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3015_TI;
#include "t3015MD.h"

extern Il2CppType t3015_0_0_0;
struct t121;
extern "C" t3014  m26140_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26140(__this, p0, method) (( t3014  (*) (t121 *, int32_t, MethodInfo*))m26140_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15830_GM;
extern Il2CppGenericMethod m26140_GM;


extern Il2CppGenericMethod m15826_GM;
extern "C" void m15826_gshared (t3015 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15827_GM;
extern "C" t9 * m15827_gshared (t3015 * __this, MethodInfo* method)
{
	{
		t3014  L_0 = (( t3014  (*) (t3015 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3014  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m15828_GM;
extern "C" void m15828_gshared (t3015 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15829_GM;
extern "C" bool m15829_gshared (t3015 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		t121 * L_1 = (__this->f0);
		int32_t L_2 = m5718(L_1, &m5718_MI);
		__this->f1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->f1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->f1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->f1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
extern "C" t3014  m15830_gshared (t3015 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1341 * L_1 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_1, (t2*) &_stringLiteral1244, &m5714_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->f1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		t1341 * L_3 = (t1341 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1341_TI));
		m5714(L_3, (t2*) &_stringLiteral1245, &m5714_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5718(L_5, &m5718_MI);
		int32_t L_7 = (__this->f1);
		t3014  L_8 = (( t3014  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4648_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4015_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4013_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4649_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4018_TI;



#include "t3016.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3016_TI;
#include "t3016MD.h"

extern Il2CppType t3016_0_0_0;
struct t121;
struct t121;
extern "C" int32_t m25131_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25131(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m25131_gshared)(__this, p0, method)
#define m26151(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m25131_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15835_GM;
extern Il2CppGenericMethod m26151_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4650_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4014_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4020_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4019_TI;



#include "t3017.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3017_TI;
#include "t3017MD.h"

extern Il2CppType t3017_0_0_0;
struct t121;
#define m26162(__this, p0, method) (( t205 * (*) (t121 *, int32_t, MethodInfo*))m24933_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15840_GM;
extern Il2CppGenericMethod m26162_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3033_TI;



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3019.h"
#include "t3021.h"
extern TypeInfo t3019_TI;
extern TypeInfo t3021_TI;
#include "t3021MD.h"
#include "t3019MD.h"
extern Il2CppType t3019_0_0_0;
extern Il2CppType t3021_0_0_0;
extern MethodInfo m15852_MI;
extern MethodInfo m15802_MI;
extern MethodInfo m15872_MI;
extern MethodInfo m15855_MI;
struct t283;
#define m26173(__this, p0, p1, p2, method) (( void (*) (t283 *, t121 *, int32_t, t3021 *, MethodInfo*))m26064_gshared)(__this, p0, p1, p2, method)
struct t283;
extern "C" void m26174 (t283 * __this, t3010* p0, int32_t p1, t3021 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15853_GM;
extern Il2CppGenericMethod m15852_GM;
extern Il2CppGenericMethod m15802_GM;
extern Il2CppGenericMethod m15872_GM;
extern Il2CppGenericMethod m26173_GM;
extern Il2CppGenericMethod m26174_GM;
extern Il2CppGenericMethod m15855_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15867_GM;
extern Il2CppGenericMethod m15818_GM;
extern Il2CppGenericMethod m15871_GM;
extern Il2CppGenericMethod m15865_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15870_GM;
extern Il2CppGenericMethod m15868_GM;
extern Il2CppGenericMethod m15869_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3023.h"
#include "t3024.h"
extern TypeInfo t3023_TI;
extern TypeInfo t3024_TI;
#include "t3024MD.h"
#include "t3023MD.h"
extern Il2CppType t3023_0_0_0;
extern Il2CppType t3024_0_0_0;
extern MethodInfo m15887_MI;
extern MethodInfo m15803_MI;
extern MethodInfo m15895_MI;
extern MethodInfo m15890_MI;
struct t283;
#define m26176(__this, p0, p1, p2, method) (( void (*) (t283 *, t121 *, int32_t, t3024 *, MethodInfo*))m26067_gshared)(__this, p0, p1, p2, method)
struct t283;
extern "C" void m26177 (t283 * __this, t3011* p0, int32_t p1, t3024 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15808_GM;
extern Il2CppGenericMethod m15888_GM;
extern Il2CppGenericMethod m15887_GM;
extern Il2CppGenericMethod m15803_GM;
extern Il2CppGenericMethod m15895_GM;
extern Il2CppGenericMethod m26176_GM;
extern Il2CppGenericMethod m26177_GM;
extern Il2CppGenericMethod m15890_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3026_TI;
#include "t3026MD.h"



extern Il2CppGenericMethod m15904_GM;
extern "C" void m15904_gshared (t3026 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15906_GM;
extern "C" t3014  m15906_gshared (t3026 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15906((t3026 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3014  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t3014  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15908_GM;
extern "C" t9 * m15908_gshared (t3026 * __this, int32_t p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15910_GM;
extern "C" t3014  m15910_gshared (t3026 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3014 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15913_MI;
extern Il2CppGenericMethod m15866_GM;
extern Il2CppGenericMethod m15913_GM;


#ifndef _MSC_VER
#else
#endif

#include "t3029.h"
extern TypeInfo t3029_TI;
#include "t3029MD.h"
extern Il2CppType t4651_0_0_0;
extern Il2CppType t3029_0_0_0;
extern MethodInfo m15922_MI;
extern MethodInfo m29186_MI;
extern MethodInfo m29187_MI;
extern Il2CppGenericMethod m15922_GM;
extern Il2CppGenericMethod m29186_GM;
extern Il2CppGenericMethod m29187_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4651_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15917_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3031.h"
extern TypeInfo t3031_TI;
#include "t3031MD.h"
extern Il2CppType t4652_0_0_0;
extern Il2CppType t3031_0_0_0;
extern MethodInfo m15930_MI;
extern MethodInfo m29188_MI;
extern Il2CppGenericMethod m15930_GM;
extern Il2CppGenericMethod m29188_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4652_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15925_GM;


#include "t284.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t284_TI;
#include "t284MD.h"

#include "t323.h"
#include "t3032.h"
#include "t3035.h"
#include "t3036.h"
#include "t3037.h"
#include "t3039.h"
extern TypeInfo t878_TI;
extern TypeInfo t2122_TI;
extern TypeInfo t323_TI;
extern TypeInfo t3032_TI;
extern TypeInfo t3035_TI;
extern TypeInfo t3036_TI;
extern TypeInfo t3037_TI;
#include "t160MD.h"
#include "t3032MD.h"
#include "t3035MD.h"
#include "t3036MD.h"
#include "t323MD.h"
#include "t3037MD.h"
extern Il2CppType t284_0_0_0;
extern Il2CppType t4014_0_0_0;
extern Il2CppType t323_0_0_0;
extern Il2CppType t4020_0_0_0;
extern Il2CppType t4019_0_0_0;
extern Il2CppType t3032_0_0_0;
extern Il2CppType t3035_0_0_0;
extern Il2CppType t3036_0_0_0;
extern Il2CppType t3037_0_0_0;
extern MethodInfo m1201_MI;
extern MethodInfo m15980_MI;
extern MethodInfo m5899_MI;
extern MethodInfo m29189_MI;
extern MethodInfo m15952_MI;
extern MethodInfo m15959_MI;
extern MethodInfo m15965_MI;
extern MethodInfo m15968_MI;
extern MethodInfo m15970_MI;
extern MethodInfo m6904_MI;
extern MethodInfo m29190_MI;
extern MethodInfo m29191_MI;
extern MethodInfo m29192_MI;
extern MethodInfo m15985_MI;
extern MethodInfo m16052_MI;
extern MethodInfo m16056_MI;
extern MethodInfo m15981_MI;
extern MethodInfo m15972_MI;
extern MethodInfo m6936_MI;
extern MethodInfo m5941_MI;
struct t121;
struct t121;
extern "C" void m25348_gshared (t9 * __this , t158** p0, int32_t p1, MethodInfo* method);
#define m25348(__this , p0, p1, method) (( void (*) (t9 * , t158**, int32_t, MethodInfo*))m25348_gshared)(__this , p0, p1, method)
#define m26185(__this , p0, p1, method) (( void (*) (t9 * , t3011**, int32_t, MethodInfo*))m25348_gshared)(__this , p0, p1, method)
struct t121;
struct t121;
#include "t2175.h"
extern "C" int32_t m11999_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m11999(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m11999_gshared)(__this , p0, p1, p2, p3, method)
#define m26187(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t3011*, t205 *, int32_t, int32_t, MethodInfo*))m11999_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
extern "C" void m25351_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, t9* p3, MethodInfo* method);
#define m25351(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t158*, int32_t, int32_t, t9*, MethodInfo*))m25351_gshared)(__this , p0, p1, p2, p3, method)
#define m26189(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t3011*, int32_t, int32_t, t9*, MethodInfo*))m25351_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
#include "t2779.h"
extern "C" void m25458_gshared (t9 * __this , t158* p0, int32_t p1, t2779 * p2, MethodInfo* method);
#define m25458(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, t2779 *, MethodInfo*))m25458_gshared)(__this , p0, p1, p2, method)
#define m26197(__this , p0, p1, p2, method) (( void (*) (t9 * , t3011*, int32_t, t3039 *, MethodInfo*))m25458_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m1201_GM;
extern Il2CppGenericMethod m15980_GM;
extern Il2CppGenericMethod m26185_GM;
extern Il2CppGenericMethod m15967_GM;
extern Il2CppGenericMethod m15969_GM;
extern Il2CppGenericMethod m15955_GM;
extern Il2CppGenericMethod m29189_GM;
extern Il2CppGenericMethod m15954_GM;
extern Il2CppGenericMethod m1202_GM;
extern Il2CppGenericMethod m15952_GM;
extern Il2CppGenericMethod m15959_GM;
extern Il2CppGenericMethod m15965_GM;
extern Il2CppGenericMethod m15968_GM;
extern Il2CppGenericMethod m15970_GM;
extern Il2CppGenericMethod m15953_GM;
extern Il2CppGenericMethod m15978_GM;
extern Il2CppGenericMethod m15979_GM;
extern Il2CppGenericMethod m29190_GM;
extern Il2CppGenericMethod m29191_GM;
extern Il2CppGenericMethod m29192_GM;
extern Il2CppGenericMethod m15985_GM;
extern Il2CppGenericMethod m26187_GM;
extern Il2CppGenericMethod m15962_GM;
extern Il2CppGenericMethod m15963_GM;
extern Il2CppGenericMethod m16052_GM;
extern Il2CppGenericMethod m16056_GM;
extern Il2CppGenericMethod m15981_GM;
extern Il2CppGenericMethod m15966_GM;
extern Il2CppGenericMethod m15972_GM;
extern Il2CppGenericMethod m16062_GM;
extern Il2CppGenericMethod m26189_GM;
extern Il2CppGenericMethod m26197_GM;


#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5721_MI;
extern MethodInfo m2511_MI;
extern MethodInfo m4410_MI;
extern Il2CppGenericMethod m15984_GM;


#ifndef _MSC_VER
#else
#endif

extern TypeInfo t121_TI;
extern TypeInfo t665_TI;
#include "t3034MD.h"
extern Il2CppType t3033_0_0_0;
extern MethodInfo m16014_MI;
extern MethodInfo m561_MI;
extern MethodInfo m29193_MI;
extern MethodInfo m5710_MI;
extern MethodInfo m4369_MI;
extern MethodInfo m29194_MI;
extern MethodInfo m29195_MI;
extern Il2CppGenericMethod m16014_GM;
extern Il2CppGenericMethod m29193_GM;
extern Il2CppGenericMethod m16046_GM;
extern Il2CppGenericMethod m29194_GM;
extern Il2CppGenericMethod m29195_GM;


#include "t3034.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3034_TI;

extern TypeInfo t999_TI;
extern Il2CppType t3034_0_0_0;
extern MethodInfo m29196_MI;
extern MethodInfo m16045_MI;
extern MethodInfo m15933_MI;
extern MethodInfo m16038_MI;
extern MethodInfo m16036_MI;
extern MethodInfo m16041_MI;
extern MethodInfo m16032_MI;
extern MethodInfo m29197_MI;
extern MethodInfo m29198_MI;
extern MethodInfo m29199_MI;
extern MethodInfo m29200_MI;
extern MethodInfo m12301_MI;
extern MethodInfo m12302_MI;
extern Il2CppGenericMethod m29196_GM;
extern Il2CppGenericMethod m16049_GM;
extern Il2CppGenericMethod m16050_GM;
extern Il2CppGenericMethod m16047_GM;
extern Il2CppGenericMethod m16045_GM;
extern Il2CppGenericMethod m15933_GM;
extern Il2CppGenericMethod m16038_GM;
extern Il2CppGenericMethod m16048_GM;
extern Il2CppGenericMethod m16036_GM;
extern Il2CppGenericMethod m16041_GM;
extern Il2CppGenericMethod m16032_GM;
extern Il2CppGenericMethod m29197_GM;
extern Il2CppGenericMethod m29198_GM;
extern Il2CppGenericMethod m29199_GM;
extern Il2CppGenericMethod m29200_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3038.h"
extern TypeInfo t3038_TI;
#include "t3038MD.h"
extern Il2CppType t4304_0_0_0;
extern Il2CppType t2445_0_0_0;
extern Il2CppType t3038_0_0_0;
extern MethodInfo m16063_MI;
extern MethodInfo m29201_MI;
extern MethodInfo m11138_MI;
extern Il2CppGenericMethod m16063_GM;
extern Il2CppGenericMethod m29201_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4303_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4304_TI;



#ifndef _MSC_VER
#else
#endif

extern TypeInfo t185_TI;
extern MethodInfo m26195_MI;
extern MethodInfo m11969_MI;
extern Il2CppGenericMethod m16059_GM;
extern Il2CppGenericMethod m26195_GM;


#ifdef __clang__
#pragma clang diagnostic pop
#endif
