#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t2989.h"
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
extern TypeInfo t2989_TI;
#include "t2989MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t2980.h"
#include "t125.h"
#include "t477.h"

#include "t121.h"

extern Il2CppGenericMethod m15657_GM;
extern "C" void m15657_gshared (t2989 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15658_GM;
extern "C" t2980  m15658_gshared (t2989 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15658((t2989 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2980  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2980  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15659_GM;
extern "C" t9 * m15659_gshared (t2989 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15660_GM;
extern "C" t2980  m15660_gshared (t2989 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2980 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t2990.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2990_TI;
#include "t2990MD.h"

#include "t1170.h"
#include "t2984.h"
#include "t2977.h"
#include "t124.h"
extern TypeInfo t2984_TI;
extern TypeInfo t1167_TI;
extern TypeInfo t1170_TI;
extern TypeInfo t2980_TI;
extern TypeInfo t125_TI;
extern TypeInfo t9_TI;
extern TypeInfo t124_TI;
#include "t2984MD.h"
#include "t2980MD.h"
#include "t9MD.h"
#include "t2977MD.h"
extern Il2CppType t2984_0_0_0;
extern Il2CppType t2990_0_0_0;
extern MethodInfo m12040_MI;
extern MethodInfo m15663_MI;
extern MethodInfo m336_MI;
extern Il2CppGenericMethod m15620_GM;
extern Il2CppGenericMethod m15585_GM;
extern Il2CppGenericMethod m15587_GM;
extern Il2CppGenericMethod m15663_GM;
extern Il2CppGenericMethod m15581_GM;
extern Il2CppGenericMethod m15619_GM;


extern Il2CppGenericMethod m15661_GM;
extern "C" void m15661_gshared (t2990 * __this, t2977 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t2977 * L_0 = p0;
		t2984  L_1 = (( t2984  (*) (t2977 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m15662_GM;
extern "C" bool m15662_gshared (t2990 * __this, MethodInfo* method)
{
	{
		t2984 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern "C" t1170  m15663_gshared (t2990 * __this, MethodInfo* method)
{
	{
		t2984  L_0 = (__this->f0);
		t2984  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1170  L_3 = (t1170 )InterfaceFuncInvoker0< t1170  >::Invoke(&m12040_MI, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m15664_GM;
extern "C" t9 * m15664_gshared (t2990 * __this, MethodInfo* method)
{
	t2980  V_0 = {0};
	{
		t2984 * L_0 = &(__this->f0);
		t2980  L_1 = (( t2980  (*) (t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (t2980 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		t9 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
extern Il2CppGenericMethod m15665_GM;
extern "C" t9 * m15665_gshared (t2990 * __this, MethodInfo* method)
{
	t2980  V_0 = {0};
	{
		t2984 * L_0 = &(__this->f0);
		t2980  L_1 = (( t2980  (*) (t2984 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		t9 * L_2 = (( t9 * (*) (t2980 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		t9 * L_3 = L_2;
		return ((t9 *)L_3);
	}
}
extern Il2CppGenericMethod m15666_GM;
extern "C" t9 * m15666_gshared (t2990 * __this, MethodInfo* method)
{
	{
		t1170  L_0 = (t1170 )VirtFuncInvoker0< t1170  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		t1170  L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t1170_TI), &L_1);
		return L_2;
	}
}
#include "t2991.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2991_TI;
#include "t2991MD.h"

#include "t126.h"
#include "t127.h"
#include "mscorlib_ArrayTypes.h"
#include "t2993.h"
extern TypeInfo t126_TI;
extern TypeInfo t152_TI;
extern TypeInfo t2993_TI;
#include "t126MD.h"
#include "t1353MD.h"
#include "t2993MD.h"
extern Il2CppType t2991_0_0_0;
extern Il2CppType t2210_0_0_0;
extern Il2CppType t125_0_0_0;
extern Il2CppType t2540_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t2993_0_0_0;
extern MethodInfo m329_MI;
extern MethodInfo m4515_MI;
extern MethodInfo m4513_MI;
extern MethodInfo m11153_MI;
extern MethodInfo m15675_MI;
extern MethodInfo m29211_MI;
extern MethodInfo m29212_MI;
extern Il2CppGenericMethod m15675_GM;
extern Il2CppGenericMethod m29211_GM;
extern Il2CppGenericMethod m29212_GM;


extern Il2CppGenericMethod m15667_GM;
extern "C" void m15667_gshared (t2991 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m15668_GM;
extern "C" void m15668_gshared (t9 * __this , MethodInfo* method)
{
	t2993 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t2993 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (t2993 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((t2991_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern Il2CppGenericMethod m15669_GM;
extern "C" int32_t m15669_gshared (t2991 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
extern Il2CppGenericMethod m15670_GM;
extern "C" bool m15670_gshared (t2991 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = p1;
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(int32_t*)((int32_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
extern Il2CppGenericMethod m15671_GM;
extern "C" t2991 * m15671_gshared (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t2991 * L_0 = ((t2991_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#include "t2992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2992_TI;
#include "t2992MD.h"

extern TypeInfo t2210_TI;
extern MethodInfo m672_MI;
extern MethodInfo m29213_MI;
extern Il2CppGenericMethod m29213_GM;


extern Il2CppGenericMethod m15672_GM;
extern "C" void m15672_gshared (t2992 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2991 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m15673_GM;
extern "C" int32_t m15673_gshared (t2992 * __this, int32_t p0, MethodInfo* method)
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
extern Il2CppGenericMethod m15674_GM;
extern "C" bool m15674_gshared (t2992 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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


extern "C" void m15675_gshared (t2993 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2991 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m15676_GM;
extern "C" int32_t m15676_gshared (t2993 * __this, int32_t p0, MethodInfo* method)
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
extern Il2CppGenericMethod m15677_GM;
extern "C" bool m15677_gshared (t2993 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
extern TypeInfo t4627_TI;

#include "t2994.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4628_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4010_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2994_TI;
#include "t2994MD.h"

#include "t311.h"
#include "t281.h"
#include "t2.h"
extern TypeInfo t221_TI;
extern TypeInfo t2_TI;
extern TypeInfo t311_TI;
extern TypeInfo t281_TI;
#include "t2MD.h"
extern Il2CppType t221_0_0_0;
extern Il2CppType t281_0_0_0;
extern MethodInfo m673_MI;
extern MethodInfo m4335_MI;
extern Il2CppGenericMethod m15680_GM;
extern Il2CppGenericMethod m15682_GM;
extern Il2CppGenericMethod m15679_GM;
extern Il2CppGenericMethod m15681_GM;


#ifndef _MSC_VER
#else
#endif
#include "t281MD.h"



#include "t2995.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2995_TI;
#include "t2995MD.h"



extern Il2CppGenericMethod m15684_GM;
extern "C" void m15684_gshared (t2995 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15685_GM;
extern "C" t9 * m15685_gshared (t2995 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15685((t2995 *)__this->f9, method);
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
extern Il2CppGenericMethod m15687_GM;
extern "C" t9 * m15687_gshared (t2995 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern Il2CppGenericMethod m15689_GM;
extern "C" t9 * m15689_gshared (t2995 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2996.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2996_TI;
#include "t2996MD.h"

#include "t1347.h"
extern TypeInfo t1347_TI;
#include "t1347MD.h"
#include "t121MD.h"
extern Il2CppType t2996_0_0_0;
extern Il2CppType t2994_0_0_0;
extern MethodInfo m5755_MI;
extern MethodInfo m5759_MI;
struct t121;
#include "t909.h"
extern "C" t2994  m26114_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26114(__this, p0, method) (( t2994  (*) (t121 *, int32_t, MethodInfo*))m26114_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15694_GM;
extern Il2CppGenericMethod m26114_GM;


extern Il2CppGenericMethod m15690_GM;
extern "C" void m15690_gshared (t2996 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15691_GM;
extern "C" t9 * m15691_gshared (t2996 * __this, MethodInfo* method)
{
	{
		t2994  L_0 = (( t2994  (*) (t2996 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t2994  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m15692_GM;
extern "C" void m15692_gshared (t2996 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15693_GM;
extern "C" bool m15693_gshared (t2996 * __this, MethodInfo* method)
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
		int32_t L_2 = m5759(L_1, &m5759_MI);
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
extern "C" t2994  m15694_gshared (t2996 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1245, &m5755_MI);
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
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_3, (t2*) &_stringLiteral1246, &m5755_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5759(L_5, &m5759_MI);
		int32_t L_7 = (__this->f1);
		t2994  L_8 = (( t2994  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4633_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4008_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4007_TI;

#include "System.Core_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4634_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4017_TI;



#include "t2997.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2997_TI;
#include "t2997MD.h"

extern Il2CppType t2997_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24967_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24967(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
#define m26125(__this, p0, method) (( t281 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15699_GM;
extern Il2CppGenericMethod m26125_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4635_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4636_TI;

#include "t478.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4637_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4638_TI;



#include "t2998.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2998_TI;
#include "t2998MD.h"

extern TypeInfo t478_TI;
extern Il2CppType t2998_0_0_0;
struct t121;
#define m26136(__this, p0, method) (( t478 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15704_GM;
extern Il2CppGenericMethod m26136_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4639_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4640_TI;

#include "t297.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4641_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4642_TI;



#include "t2999.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2999_TI;
#include "t2999MD.h"

extern TypeInfo t297_TI;
extern Il2CppType t2999_0_0_0;
struct t121;
#define m26147(__this, p0, method) (( t297 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15709_GM;
extern Il2CppGenericMethod m26147_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4643_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4644_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4645_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4646_TI;



#include "t3000.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3000_TI;
#include "t3000MD.h"

extern TypeInfo t630_TI;
extern Il2CppType t3000_0_0_0;
struct t121;
#define m26158(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15714_GM;
extern Il2CppGenericMethod m26158_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4647_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2975_TI;



#include "t3001.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3001_TI;
#include "t3001MD.h"

#include "t280.h"
#include "t132.h"
#include "t169.h"
#include "t3002.h"
#include "UnityEngine_ArrayTypes.h"
#include "t3004.h"
extern TypeInfo t1004_TI;
extern TypeInfo t280_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t3002_TI;
extern TypeInfo t277_TI;
extern TypeInfo t122_TI;
extern TypeInfo t3004_TI;
#include "t280MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t3004MD.h"
#include "t3002MD.h"
extern Il2CppType t280_0_0_0;
extern Il2CppType t3002_0_0_0;
extern Il2CppType t277_0_0_0;
extern Il2CppType t3001_0_0_0;
extern Il2CppType t3004_0_0_0;
extern MethodInfo m12037_MI;
extern MethodInfo m15535_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5776_MI;
extern MethodInfo m1228_MI;
extern MethodInfo m15726_MI;
extern MethodInfo m15548_MI;
extern MethodInfo m15746_MI;
extern MethodInfo m15729_MI;
struct t280;
#include "t138.h"
#include "t570.h"
struct t2977;
#include "t2985.h"
extern "C" void m26105_gshared (t2977 * __this, t121 * p0, int32_t p1, t2985 * p2, MethodInfo* method);
#define m26105(__this, p0, p1, p2, method) (( void (*) (t2977 *, t121 *, int32_t, t2985 *, MethodInfo*))m26105_gshared)(__this, p0, p1, p2, method)
#define m26169(__this, p0, p1, p2, method) (( void (*) (t280 *, t121 *, int32_t, t3004 *, MethodInfo*))m26105_gshared)(__this, p0, p1, p2, method)
struct t280;
#include "t1674.h"
extern "C" void m26170 (t280 * __this, t277* p0, int32_t p1, t3004 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15535_GM;
extern Il2CppGenericMethod m1228_GM;
extern Il2CppGenericMethod m15727_GM;
extern Il2CppGenericMethod m15726_GM;
extern Il2CppGenericMethod m15544_GM;
extern Il2CppGenericMethod m15548_GM;
extern Il2CppGenericMethod m15746_GM;
extern Il2CppGenericMethod m26169_GM;
extern Il2CppGenericMethod m26170_GM;
extern Il2CppGenericMethod m15729_GM;


#ifndef _MSC_VER
#else
#endif

#include "t3003.h"
extern TypeInfo t3003_TI;
#include "t3003MD.h"
extern Il2CppType t3003_0_0_0;
extern Il2CppGenericMethod m15741_GM;
extern Il2CppGenericMethod m15580_GM;
extern Il2CppGenericMethod m15745_GM;
extern Il2CppGenericMethod m15739_GM;


#ifndef _MSC_VER
#else
#endif

#include "t1536.h"
extern TypeInfo t1674_TI;
extern TypeInfo t1536_TI;
#include "t1170MD.h"
#include "t1536MD.h"
extern MethodInfo m5756_MI;
extern MethodInfo m15678_MI;
extern MethodInfo m6953_MI;
extern Il2CppGenericMethod m15744_GM;
extern Il2CppGenericMethod m15742_GM;
extern Il2CppGenericMethod m15743_GM;
extern Il2CppGenericMethod m15678_GM;


#ifndef _MSC_VER
#else
#endif



#include "t3005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3005_TI;
#include "t3005MD.h"

#include "t3006.h"
#include "t3007.h"
extern TypeInfo t3006_TI;
extern TypeInfo t2974_TI;
extern TypeInfo t3007_TI;
#include "t3007MD.h"
#include "t3006MD.h"
extern Il2CppType t3006_0_0_0;
extern Il2CppType t2974_0_0_0;
extern Il2CppType t3005_0_0_0;
extern Il2CppType t3007_0_0_0;
extern MethodInfo m15761_MI;
extern MethodInfo m15550_MI;
extern MethodInfo m15769_MI;
extern MethodInfo m15764_MI;
struct t280;
struct t2977;
#include "t2988.h"
extern "C" void m26108_gshared (t2977 * __this, t121 * p0, int32_t p1, t2988 * p2, MethodInfo* method);
#define m26108(__this, p0, p1, p2, method) (( void (*) (t2977 *, t121 *, int32_t, t2988 *, MethodInfo*))m26108_gshared)(__this, p0, p1, p2, method)
#define m26172(__this, p0, p1, p2, method) (( void (*) (t280 *, t121 *, int32_t, t3007 *, MethodInfo*))m26108_gshared)(__this, p0, p1, p2, method)
struct t280;
extern "C" void m26173 (t280 * __this, t2974* p0, int32_t p1, t3007 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15560_GM;
extern Il2CppGenericMethod m15762_GM;
extern Il2CppGenericMethod m15761_GM;
extern Il2CppGenericMethod m15550_GM;
extern Il2CppGenericMethod m15769_GM;
extern Il2CppGenericMethod m26172_GM;
extern Il2CppGenericMethod m26173_GM;
extern Il2CppGenericMethod m15764_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#include "t2976.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2976_TI;
#include "t2976MD.h"



#include "t3008.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3008_TI;
#include "t3008MD.h"



#include "t3009.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3009_TI;
#include "t3009MD.h"



extern Il2CppGenericMethod m15778_GM;
extern "C" void m15778_gshared (t3009 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15780_GM;
extern "C" t2994  m15780_gshared (t3009 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15780((t3009 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t2994  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t2994  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15782_GM;
extern "C" t9 * m15782_gshared (t3009 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15784_GM;
extern "C" t2994  m15784_gshared (t3009 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t2994 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t3010.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3010_TI;
#include "t3010MD.h"

extern Il2CppType t3010_0_0_0;
extern MethodInfo m15787_MI;
extern Il2CppGenericMethod m15740_GM;
extern Il2CppGenericMethod m15787_GM;


#include "t3011.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3011_TI;
#include "t3011MD.h"

#include "t3012.h"
extern TypeInfo t3012_TI;
#include "t3012MD.h"
extern Il2CppType t3011_0_0_0;
extern Il2CppType t4648_0_0_0;
extern Il2CppType t311_0_0_0;
extern Il2CppType t3012_0_0_0;
extern MethodInfo m15796_MI;
extern MethodInfo m29214_MI;
extern MethodInfo m29215_MI;
extern Il2CppGenericMethod m15796_GM;
extern Il2CppGenericMethod m29214_GM;
extern Il2CppGenericMethod m29215_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4648_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15791_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4629_TI;



#include "t3013.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3013_TI;
#include "t3013MD.h"

#include "t3014.h"
extern TypeInfo t3014_TI;
#include "t3014MD.h"
extern Il2CppType t3013_0_0_0;
extern Il2CppType t4649_0_0_0;
extern Il2CppType t3014_0_0_0;
extern MethodInfo m15804_MI;
extern MethodInfo m29216_MI;
extern MethodInfo m29205_MI;
extern Il2CppGenericMethod m15804_GM;
extern Il2CppGenericMethod m29216_GM;
extern Il2CppGenericMethod m29205_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4649_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15799_GM;


#include "t285.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t285_TI;
#include "t285MD.h"

#include "t3023.h"
#include "t3027.h"
#include "t283.h"
#include "t206.h"
#include "Assembly-CSharp_ArrayTypes.h"
#include "t1675.h"
#include "t3019.h"
#include "t1106.h"
#include "t1107.h"
#include "t3018.h"
#include "t3030.h"
#include "t3025.h"
#include "t3032.h"
#include "t3033.h"
#include "t3035.h"
extern TypeInfo t283_TI;
extern TypeInfo t206_TI;
extern TypeInfo t3017_TI;
extern TypeInfo t1675_TI;
extern TypeInfo t3023_TI;
extern TypeInfo t3027_TI;
extern TypeInfo t4650_TI;
extern TypeInfo t4651_TI;
extern TypeInfo t4022_TI;
extern TypeInfo t3019_TI;
extern TypeInfo t76_TI;
extern TypeInfo t137_TI;
extern TypeInfo t4021_TI;
extern TypeInfo t4215_TI;
extern TypeInfo t3018_TI;
extern TypeInfo t3030_TI;
extern TypeInfo t3025_TI;
extern TypeInfo t3032_TI;
extern TypeInfo t909_TI;
extern TypeInfo t3033_TI;
extern TypeInfo t1101_TI;
extern TypeInfo t2521_TI;
extern TypeInfo t3015_TI;
extern TypeInfo t3016_TI;
extern TypeInfo t570_TI;
extern TypeInfo t1164_TI;
extern TypeInfo t3035_TI;
extern TypeInfo t4652_TI;
#include "t1675MD.h"
#include "t3023MD.h"
#include "t3027MD.h"
#include "t3019MD.h"
#include "t3018MD.h"
#include "t3030MD.h"
#include "t3025MD.h"
#include "t3032MD.h"
#include "t909MD.h"
#include "t3033MD.h"
#include "t570MD.h"
#include "t1164MD.h"
#include "t3035MD.h"
#include "t1106MD.h"
extern Il2CppType t285_0_0_0;
extern Il2CppType t3017_0_0_0;
extern Il2CppType t3023_0_0_0;
extern Il2CppType t3027_0_0_0;
extern Il2CppType t4650_0_0_0;
extern Il2CppType t4651_0_0_0;
extern Il2CppType t4022_0_0_0;
extern Il2CppType t4021_0_0_0;
extern Il2CppType t3019_0_0_0;
extern Il2CppType t4215_0_0_0;
extern Il2CppType t3018_0_0_0;
extern Il2CppType t3030_0_0_0;
extern Il2CppType t3025_0_0_0;
extern Il2CppType t3032_0_0_0;
extern Il2CppType t3033_0_0_0;
extern Il2CppType t1101_0_0_0;
extern Il2CppType t2521_0_0_0;
extern Il2CppType t3015_0_0_0;
extern Il2CppType t3016_0_0_0;
extern Il2CppType t3035_0_0_0;
extern Il2CppType t4652_0_0_0;
extern Il2CppType t283_0_0_0;
extern Il2CppType t206_0_0_0;
extern MethodInfo m15841_MI;
extern MethodInfo m1236_MI;
extern MethodInfo m15831_MI;
extern MethodInfo m29217_MI;
extern MethodInfo m29218_MI;
extern MethodInfo m8390_MI;
extern MethodInfo m15875_MI;
extern MethodInfo m15910_MI;
extern MethodInfo m29219_MI;
extern MethodInfo m29220_MI;
extern MethodInfo m29221_MI;
extern MethodInfo m1234_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m15845_MI;
extern MethodInfo m15853_MI;
extern MethodInfo m15933_MI;
extern MethodInfo m15835_MI;
extern MethodInfo m15937_MI;
extern MethodInfo m15894_MI;
extern MethodInfo m15945_MI;
extern MethodInfo m5763_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m15830_MI;
extern MethodInfo m15854_MI;
extern MethodInfo m8569_MI;
extern MethodInfo m7752_MI;
extern MethodInfo m1199_MI;
extern MethodInfo m29222_MI;
extern MethodInfo m5772_MI;
extern MethodInfo m5785_MI;
extern MethodInfo m5784_MI;
extern MethodInfo m5773_MI;
extern MethodInfo m7840_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5761_MI;
extern MethodInfo m7803_MI;
extern MethodInfo m15846_MI;
extern MethodInfo m26227_MI;
struct t285;
extern "C" void m26219 (t285 * __this, t4215* p0, int32_t p1, t3018 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t285;
struct t2977;
#include "t3031.h"
extern "C" void m26222_gshared (t2977 * __this, t121 * p0, int32_t p1, t3031 * p2, MethodInfo* method);
#define m26222(__this, p0, p1, p2, method) (( void (*) (t2977 *, t121 *, int32_t, t3031 *, MethodInfo*))m26222_gshared)(__this, p0, p1, p2, method)
#define m26221(__this, p0, p1, p2, method) (( void (*) (t285 *, t121 *, int32_t, t3030 *, MethodInfo*))m26222_gshared)(__this, p0, p1, p2, method)
struct t285;
extern "C" void m26224 (t285 * __this, t4021* p0, int32_t p1, t3030 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15847_GM;
extern Il2CppGenericMethod m15848_GM;
extern Il2CppGenericMethod m15841_GM;
extern Il2CppGenericMethod m15849_GM;
extern Il2CppGenericMethod m1236_GM;
extern Il2CppGenericMethod m15850_GM;
extern Il2CppGenericMethod m15831_GM;
extern Il2CppGenericMethod m29217_GM;
extern Il2CppGenericMethod m29218_GM;
extern Il2CppGenericMethod m15839_GM;
extern Il2CppGenericMethod m15875_GM;
extern Il2CppGenericMethod m15910_GM;
extern Il2CppGenericMethod m15832_GM;
extern Il2CppGenericMethod m15810_GM;
extern Il2CppGenericMethod m29219_GM;
extern Il2CppGenericMethod m29220_GM;
extern Il2CppGenericMethod m29221_GM;
extern Il2CppGenericMethod m15855_GM;
extern Il2CppGenericMethod m15857_GM;
extern Il2CppGenericMethod m1234_GM;
extern Il2CppGenericMethod m15845_GM;
extern Il2CppGenericMethod m15851_GM;
extern Il2CppGenericMethod m15838_GM;
extern Il2CppGenericMethod m15834_GM;
extern Il2CppGenericMethod m15853_GM;
extern Il2CppGenericMethod m15933_GM;
extern Il2CppGenericMethod m26219_GM;
extern Il2CppGenericMethod m15835_GM;
extern Il2CppGenericMethod m15937_GM;
extern Il2CppGenericMethod m26221_GM;
extern Il2CppGenericMethod m15894_GM;
extern Il2CppGenericMethod m15945_GM;
extern Il2CppGenericMethod m15955_GM;
extern Il2CppGenericMethod m15833_GM;
extern Il2CppGenericMethod m15830_GM;
extern Il2CppGenericMethod m15854_GM;
extern Il2CppGenericMethod m26224_GM;
extern Il2CppGenericMethod m15963_GM;
extern Il2CppGenericMethod m29222_GM;
extern Il2CppGenericMethod m15846_GM;
extern Il2CppGenericMethod m26227_GM;


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

extern Il2CppGenericMethod m15856_GM;
extern Il2CppGenericMethod m15858_GM;


#include "t3020.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3020_TI;
#include "t3020MD.h"

extern Il2CppType t3020_0_0_0;
struct t121;
extern "C" t3019  m26181_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m26181(__this, p0, method) (( t3019  (*) (t121 *, int32_t, MethodInfo*))m26181_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15864_GM;
extern Il2CppGenericMethod m26181_GM;


extern Il2CppGenericMethod m15860_GM;
extern "C" void m15860_gshared (t3020 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15861_GM;
extern "C" t9 * m15861_gshared (t3020 * __this, MethodInfo* method)
{
	{
		t3019  L_0 = (( t3019  (*) (t3020 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3019  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m15862_GM;
extern "C" void m15862_gshared (t3020 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m15863_GM;
extern "C" bool m15863_gshared (t3020 * __this, MethodInfo* method)
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
		int32_t L_2 = m5759(L_1, &m5759_MI);
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
extern "C" t3019  m15864_gshared (t3020 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1347 * L_1 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_1, (t2*) &_stringLiteral1245, &m5755_MI);
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
		t1347 * L_3 = (t1347 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1347_TI));
		m5755(L_3, (t2*) &_stringLiteral1246, &m5755_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5759(L_5, &m5759_MI);
		int32_t L_7 = (__this->f1);
		t3019  L_8 = (( t3019  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4653_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4020_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4018_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4654_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4023_TI;



#include "t3021.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3021_TI;
#include "t3021MD.h"

extern Il2CppType t3021_0_0_0;
struct t121;
struct t121;
extern "C" int32_t m25165_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25165(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m25165_gshared)(__this, p0, method)
#define m26192(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m25165_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15869_GM;
extern Il2CppGenericMethod m26192_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4655_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4019_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4025_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4024_TI;



#include "t3022.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3022_TI;
#include "t3022MD.h"

extern Il2CppType t3022_0_0_0;
struct t121;
#define m26203(__this, p0, method) (( t206 * (*) (t121 *, int32_t, MethodInfo*))m24967_gshared)(__this, p0, method)
extern Il2CppGenericMethod m15874_GM;
extern Il2CppGenericMethod m26203_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3038_TI;



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3024.h"
#include "t3026.h"
extern TypeInfo t3024_TI;
extern TypeInfo t3026_TI;
#include "t3026MD.h"
#include "t3024MD.h"
extern Il2CppType t3024_0_0_0;
extern Il2CppType t3026_0_0_0;
extern MethodInfo m15886_MI;
extern MethodInfo m15836_MI;
extern MethodInfo m15906_MI;
extern MethodInfo m15889_MI;
struct t285;
#define m26214(__this, p0, p1, p2, method) (( void (*) (t285 *, t121 *, int32_t, t3026 *, MethodInfo*))m26105_gshared)(__this, p0, p1, p2, method)
struct t285;
extern "C" void m26215 (t285 * __this, t3015* p0, int32_t p1, t3026 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15887_GM;
extern Il2CppGenericMethod m15886_GM;
extern Il2CppGenericMethod m15836_GM;
extern Il2CppGenericMethod m15906_GM;
extern Il2CppGenericMethod m26214_GM;
extern Il2CppGenericMethod m26215_GM;
extern Il2CppGenericMethod m15889_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15901_GM;
extern Il2CppGenericMethod m15852_GM;
extern Il2CppGenericMethod m15905_GM;
extern Il2CppGenericMethod m15899_GM;


#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15904_GM;
extern Il2CppGenericMethod m15902_GM;
extern Il2CppGenericMethod m15903_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3028.h"
#include "t3029.h"
extern TypeInfo t3028_TI;
extern TypeInfo t3029_TI;
#include "t3029MD.h"
#include "t3028MD.h"
extern Il2CppType t3028_0_0_0;
extern Il2CppType t3029_0_0_0;
extern MethodInfo m15921_MI;
extern MethodInfo m15837_MI;
extern MethodInfo m15929_MI;
extern MethodInfo m15924_MI;
struct t285;
#define m26217(__this, p0, p1, p2, method) (( void (*) (t285 *, t121 *, int32_t, t3029 *, MethodInfo*))m26108_gshared)(__this, p0, p1, p2, method)
struct t285;
extern "C" void m26218 (t285 * __this, t3016* p0, int32_t p1, t3029 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m15842_GM;
extern Il2CppGenericMethod m15922_GM;
extern Il2CppGenericMethod m15921_GM;
extern Il2CppGenericMethod m15837_GM;
extern Il2CppGenericMethod m15929_GM;
extern Il2CppGenericMethod m26217_GM;
extern Il2CppGenericMethod m26218_GM;
extern Il2CppGenericMethod m15924_GM;


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
extern TypeInfo t3031_TI;
#include "t3031MD.h"



extern Il2CppGenericMethod m15938_GM;
extern "C" void m15938_gshared (t3031 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m15940_GM;
extern "C" t3019  m15940_gshared (t3031 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m15940((t3031 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3019  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t3019  (*FunctionPointerType) (t9 * __this, int32_t p0, t9 * p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m15942_GM;
extern "C" t9 * m15942_gshared (t3031 * __this, int32_t p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m15944_GM;
extern "C" t3019  m15944_gshared (t3031 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3019 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m15947_MI;
extern Il2CppGenericMethod m15900_GM;
extern Il2CppGenericMethod m15947_GM;


#ifndef _MSC_VER
#else
#endif

#include "t3034.h"
extern TypeInfo t3034_TI;
#include "t3034MD.h"
extern Il2CppType t4656_0_0_0;
extern Il2CppType t3034_0_0_0;
extern MethodInfo m15956_MI;
extern MethodInfo m29223_MI;
extern MethodInfo m29224_MI;
extern Il2CppGenericMethod m15956_GM;
extern Il2CppGenericMethod m29223_GM;
extern Il2CppGenericMethod m29224_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4656_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15951_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3036.h"
extern TypeInfo t3036_TI;
#include "t3036MD.h"
extern Il2CppType t4657_0_0_0;
extern Il2CppType t3036_0_0_0;
extern MethodInfo m15964_MI;
extern MethodInfo m29225_MI;
extern Il2CppGenericMethod m15964_GM;
extern Il2CppGenericMethod m29225_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4657_TI;



#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m15959_GM;


#include "t286.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t286_TI;
#include "t286MD.h"

#include "t329.h"
#include "t3037.h"
#include "t3040.h"
#include "t3041.h"
#include "t3042.h"
#include "t3044.h"
extern TypeInfo t885_TI;
extern TypeInfo t2128_TI;
extern TypeInfo t329_TI;
extern TypeInfo t3037_TI;
extern TypeInfo t3040_TI;
extern TypeInfo t3041_TI;
extern TypeInfo t3042_TI;
#include "t160MD.h"
#include "t3037MD.h"
#include "t3040MD.h"
#include "t3041MD.h"
#include "t329MD.h"
#include "t3042MD.h"
extern Il2CppType t286_0_0_0;
extern Il2CppType t4019_0_0_0;
extern Il2CppType t329_0_0_0;
extern Il2CppType t4025_0_0_0;
extern Il2CppType t4024_0_0_0;
extern Il2CppType t3037_0_0_0;
extern Il2CppType t3040_0_0_0;
extern Il2CppType t3041_0_0_0;
extern Il2CppType t3042_0_0_0;
extern MethodInfo m1238_MI;
extern MethodInfo m16014_MI;
extern MethodInfo m5940_MI;
extern MethodInfo m29226_MI;
extern MethodInfo m15986_MI;
extern MethodInfo m15993_MI;
extern MethodInfo m15999_MI;
extern MethodInfo m16002_MI;
extern MethodInfo m16004_MI;
extern MethodInfo m6945_MI;
extern MethodInfo m29227_MI;
extern MethodInfo m29228_MI;
extern MethodInfo m29229_MI;
extern MethodInfo m16019_MI;
extern MethodInfo m16086_MI;
extern MethodInfo m16090_MI;
extern MethodInfo m16015_MI;
extern MethodInfo m16006_MI;
extern MethodInfo m6977_MI;
extern MethodInfo m5982_MI;
struct t121;
struct t121;
extern "C" void m25382_gshared (t9 * __this , t158** p0, int32_t p1, MethodInfo* method);
#define m25382(__this , p0, p1, method) (( void (*) (t9 * , t158**, int32_t, MethodInfo*))m25382_gshared)(__this , p0, p1, method)
#define m26226(__this , p0, p1, method) (( void (*) (t9 * , t3016**, int32_t, MethodInfo*))m25382_gshared)(__this , p0, p1, method)
struct t121;
struct t121;
#include "t2181.h"
extern "C" int32_t m12038_gshared (t9 * __this , t158* p0, t9 * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define m12038(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t158*, t9 *, int32_t, int32_t, MethodInfo*))m12038_gshared)(__this , p0, p1, p2, p3, method)
#define m26228(__this , p0, p1, p2, p3, method) (( int32_t (*) (t9 * , t3016*, t206 *, int32_t, int32_t, MethodInfo*))m12038_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
extern "C" void m25385_gshared (t9 * __this , t158* p0, int32_t p1, int32_t p2, t9* p3, MethodInfo* method);
#define m25385(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t158*, int32_t, int32_t, t9*, MethodInfo*))m25385_gshared)(__this , p0, p1, p2, p3, method)
#define m26230(__this , p0, p1, p2, p3, method) (( void (*) (t9 * , t3016*, int32_t, int32_t, t9*, MethodInfo*))m25385_gshared)(__this , p0, p1, p2, p3, method)
struct t121;
struct t121;
#include "t2785.h"
extern "C" void m25492_gshared (t9 * __this , t158* p0, int32_t p1, t2785 * p2, MethodInfo* method);
#define m25492(__this , p0, p1, p2, method) (( void (*) (t9 * , t158*, int32_t, t2785 *, MethodInfo*))m25492_gshared)(__this , p0, p1, p2, method)
#define m26238(__this , p0, p1, p2, method) (( void (*) (t9 * , t3016*, int32_t, t3044 *, MethodInfo*))m25492_gshared)(__this , p0, p1, p2, method)
extern Il2CppGenericMethod m1238_GM;
extern Il2CppGenericMethod m16014_GM;
extern Il2CppGenericMethod m26226_GM;
extern Il2CppGenericMethod m16001_GM;
extern Il2CppGenericMethod m16003_GM;
extern Il2CppGenericMethod m15989_GM;
extern Il2CppGenericMethod m29226_GM;
extern Il2CppGenericMethod m15988_GM;
extern Il2CppGenericMethod m1239_GM;
extern Il2CppGenericMethod m15986_GM;
extern Il2CppGenericMethod m15993_GM;
extern Il2CppGenericMethod m15999_GM;
extern Il2CppGenericMethod m16002_GM;
extern Il2CppGenericMethod m16004_GM;
extern Il2CppGenericMethod m15987_GM;
extern Il2CppGenericMethod m16012_GM;
extern Il2CppGenericMethod m16013_GM;
extern Il2CppGenericMethod m29227_GM;
extern Il2CppGenericMethod m29228_GM;
extern Il2CppGenericMethod m29229_GM;
extern Il2CppGenericMethod m16019_GM;
extern Il2CppGenericMethod m26228_GM;
extern Il2CppGenericMethod m15996_GM;
extern Il2CppGenericMethod m15997_GM;
extern Il2CppGenericMethod m16086_GM;
extern Il2CppGenericMethod m16090_GM;
extern Il2CppGenericMethod m16015_GM;
extern Il2CppGenericMethod m16000_GM;
extern Il2CppGenericMethod m16006_GM;
extern Il2CppGenericMethod m16096_GM;
extern Il2CppGenericMethod m26230_GM;
extern Il2CppGenericMethod m26238_GM;


#ifndef _MSC_VER
#else
#endif

extern MethodInfo m5762_MI;
extern MethodInfo m2550_MI;
extern MethodInfo m4451_MI;
extern Il2CppGenericMethod m16018_GM;


#ifndef _MSC_VER
#else
#endif

extern TypeInfo t121_TI;
extern TypeInfo t672_TI;
#include "t3039MD.h"
extern Il2CppType t3038_0_0_0;
extern MethodInfo m16048_MI;
extern MethodInfo m561_MI;
extern MethodInfo m29230_MI;
extern MethodInfo m5751_MI;
extern MethodInfo m4410_MI;
extern MethodInfo m29231_MI;
extern MethodInfo m29232_MI;
extern Il2CppGenericMethod m16048_GM;
extern Il2CppGenericMethod m29230_GM;
extern Il2CppGenericMethod m16080_GM;
extern Il2CppGenericMethod m29231_GM;
extern Il2CppGenericMethod m29232_GM;


#include "t3039.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3039_TI;

extern TypeInfo t1005_TI;
extern Il2CppType t3039_0_0_0;
extern MethodInfo m29233_MI;
extern MethodInfo m16079_MI;
extern MethodInfo m15967_MI;
extern MethodInfo m16072_MI;
extern MethodInfo m16070_MI;
extern MethodInfo m16075_MI;
extern MethodInfo m16066_MI;
extern MethodInfo m29234_MI;
extern MethodInfo m29235_MI;
extern MethodInfo m29236_MI;
extern MethodInfo m29237_MI;
extern MethodInfo m12340_MI;
extern MethodInfo m12341_MI;
extern Il2CppGenericMethod m29233_GM;
extern Il2CppGenericMethod m16083_GM;
extern Il2CppGenericMethod m16084_GM;
extern Il2CppGenericMethod m16081_GM;
extern Il2CppGenericMethod m16079_GM;
extern Il2CppGenericMethod m15967_GM;
extern Il2CppGenericMethod m16072_GM;
extern Il2CppGenericMethod m16082_GM;
extern Il2CppGenericMethod m16070_GM;
extern Il2CppGenericMethod m16075_GM;
extern Il2CppGenericMethod m16066_GM;
extern Il2CppGenericMethod m29234_GM;
extern Il2CppGenericMethod m29235_GM;
extern Il2CppGenericMethod m29236_GM;
extern Il2CppGenericMethod m29237_GM;


#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif



#ifndef _MSC_VER
#else
#endif

#include "t3043.h"
extern TypeInfo t3043_TI;
#include "t3043MD.h"
extern Il2CppType t4309_0_0_0;
extern Il2CppType t2451_0_0_0;
extern Il2CppType t3043_0_0_0;
extern MethodInfo m16097_MI;
extern MethodInfo m29238_MI;
extern MethodInfo m11179_MI;
extern Il2CppGenericMethod m16097_GM;
extern Il2CppGenericMethod m29238_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4308_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4309_TI;



#ifndef _MSC_VER
#else
#endif

extern TypeInfo t185_TI;
extern MethodInfo m26236_MI;
extern MethodInfo m12008_MI;
extern Il2CppGenericMethod m16093_GM;
extern Il2CppGenericMethod m26236_GM;


#ifdef __clang__
#pragma clang diagnostic pop
#endif
