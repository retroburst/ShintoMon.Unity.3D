#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo t5167_TI;

#include "t1783.h"
#include "t125.h"
#include "t122.h"

#include "t121.h"

#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5168_TI;

#include "t124.h"
#include "mscorlib_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5169_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5170_TI;



#include "t3874.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3874_TI;
#include "t3874MD.h"

#include "t9.h"
#include "t2.h"
#include "t1332.h"
extern TypeInfo t2595_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t121MD.h"
extern Il2CppType t3874_0_0_0;
extern MethodInfo m5685_MI;
extern MethodInfo m5689_MI;
struct t121;
#include "t896.h"
struct t121;
extern "C" t9 * m24739_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24739(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
#define m28508(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24399_GM;
extern Il2CppGenericMethod m28508_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5171_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5172_TI;

#include "t1754.h"


#include "t3875.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3875_TI;
#include "t3875MD.h"

extern TypeInfo t1754_TI;
extern Il2CppType t3875_0_0_0;
struct t121;
#define m28519(__this, p0, method) (( t1754 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24404_GM;
extern Il2CppGenericMethod m28519_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5173_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5174_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5175_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5176_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5177_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5178_TI;



#include "t3876.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3876_TI;
#include "t3876MD.h"

extern TypeInfo t2587_TI;
extern Il2CppType t3876_0_0_0;
struct t121;
#define m28530(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24409_GM;
extern Il2CppGenericMethod m28530_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5179_TI;



#include "t3877.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3877_TI;
#include "t3877MD.h"

#include "t58.h"
#include "t463.h"


extern Il2CppGenericMethod m24410_GM;
extern "C" void m24410_gshared (t3877 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24411_GM;
extern "C" t9 * m24411_gshared (t3877 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24411((t3877 *)__this->f9,p0, method);
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
extern Il2CppGenericMethod m24412_GM;
extern "C" t9 * m24412_gshared (t3877 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern Il2CppGenericMethod m24413_GM;
extern "C" t9 * m24413_gshared (t3877 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t3878.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3878_TI;
#include "t3878MD.h"



extern Il2CppGenericMethod m24414_GM;
extern "C" void m24414_gshared (t3878 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24415_GM;
extern "C" t9 * m24415_gshared (t3878 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24415((t3878 *)__this->f9, method);
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
extern Il2CppGenericMethod m24416_GM;
extern "C" t9 * m24416_gshared (t3878 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern Il2CppGenericMethod m24417_GM;
extern "C" t9 * m24417_gshared (t3878 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5180_TI;

#include "t1883.h"


#include "t3879.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3879_TI;
#include "t3879MD.h"

extern TypeInfo t1883_TI;
extern Il2CppType t3879_0_0_0;
struct t121;
#define m28543(__this, p0, method) (( t1883 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24422_GM;
extern Il2CppGenericMethod m28543_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5181_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5182_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5183_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5184_TI;



#include "t3880.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3880_TI;
#include "t3880MD.h"

extern TypeInfo t2176_TI;
extern Il2CppType t3880_0_0_0;
struct t121;
#define m28554(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24427_GM;
extern Il2CppGenericMethod m28554_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5185_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5186_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5187_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5188_TI;



#include "t3881.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3881_TI;
#include "t3881MD.h"

extern TypeInfo t2170_TI;
extern Il2CppType t3881_0_0_0;
struct t121;
#define m28565(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24432_GM;
extern Il2CppGenericMethod m28565_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5189_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5190_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5191_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5192_TI;

#include "t269.h"


#include "t3882.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3882_TI;
#include "t3882MD.h"

extern TypeInfo t269_TI;
extern Il2CppType t3882_0_0_0;
struct t121;
extern "C" t269  m28576_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28576(__this, p0, method) (( t269  (*) (t121 *, int32_t, MethodInfo*))m28576_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24437_GM;
extern Il2CppGenericMethod m28576_GM;


extern Il2CppGenericMethod m24433_GM;
extern "C" void m24433_gshared (t3882 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24434_GM;
extern "C" t9 * m24434_gshared (t3882 * __this, MethodInfo* method)
{
	{
		t269  L_0 = (( t269  (*) (t3882 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t269  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24435_GM;
extern "C" void m24435_gshared (t3882 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24436_GM;
extern "C" bool m24436_gshared (t3882 * __this, MethodInfo* method)
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
		int32_t L_2 = m5689(L_1, &m5689_MI);
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
extern "C" t269  m24437_gshared (t3882 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
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
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t269  L_8 = (( t269  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5193_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5194_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5195_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5196_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5197_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5198_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2640_TI;



#include "t3883.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3883_TI;
#include "t3883MD.h"

extern Il2CppType t3883_0_0_0;
extern Il2CppType t2640_0_0_0;
struct t121;
#define m28587(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24442_GM;
extern Il2CppGenericMethod m28587_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5199_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5200_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5201_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5202_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2641_TI;



#include "t3884.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3884_TI;
#include "t3884MD.h"

extern Il2CppType t3884_0_0_0;
extern Il2CppType t2641_0_0_0;
struct t121;
#define m28598(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24447_GM;
extern Il2CppGenericMethod m28598_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5203_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5204_TI;

#include "t897.h"


#include "t3885.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3885_TI;
#include "t3885MD.h"

extern TypeInfo t897_TI;
extern Il2CppType t3885_0_0_0;
struct t121;
extern "C" t897  m28609_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28609(__this, p0, method) (( t897  (*) (t121 *, int32_t, MethodInfo*))m28609_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24452_GM;
extern Il2CppGenericMethod m28609_GM;


extern Il2CppGenericMethod m24448_GM;
extern "C" void m24448_gshared (t3885 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24449_GM;
extern "C" t9 * m24449_gshared (t3885 * __this, MethodInfo* method)
{
	{
		t897  L_0 = (( t897  (*) (t3885 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t897  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24450_GM;
extern "C" void m24450_gshared (t3885 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24451_GM;
extern "C" bool m24451_gshared (t3885 * __this, MethodInfo* method)
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
		int32_t L_2 = m5689(L_1, &m5689_MI);
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
extern "C" t897  m24452_gshared (t3885 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
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
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t897  L_8 = (( t897  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5205_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5206_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5207_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5208_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5209_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5210_TI;



#include "t3886.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3886_TI;
#include "t3886MD.h"

extern TypeInfo t2243_TI;
extern Il2CppType t3886_0_0_0;
extern Il2CppType t2243_0_0_0;
struct t121;
#define m28620(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24457_GM;
extern Il2CppGenericMethod m28620_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5211_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5212_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5213_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5214_TI;



#include "t3887.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3887_TI;
#include "t3887MD.h"

extern TypeInfo t2244_TI;
extern Il2CppType t3887_0_0_0;
extern Il2CppType t2244_0_0_0;
struct t121;
#define m28631(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24462_GM;
extern Il2CppGenericMethod m28631_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5215_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5216_TI;

#include "t297.h"


#include "t3888.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3888_TI;
#include "t3888MD.h"

extern TypeInfo t297_TI;
extern Il2CppType t3888_0_0_0;
struct t121;
extern "C" t297  m28642_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28642(__this, p0, method) (( t297  (*) (t121 *, int32_t, MethodInfo*))m28642_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24467_GM;
extern Il2CppGenericMethod m28642_GM;


extern Il2CppGenericMethod m24463_GM;
extern "C" void m24463_gshared (t3888 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24464_GM;
extern "C" t9 * m24464_gshared (t3888 * __this, MethodInfo* method)
{
	{
		t297  L_0 = (( t297  (*) (t3888 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t297  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24465_GM;
extern "C" void m24465_gshared (t3888 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24466_GM;
extern "C" bool m24466_gshared (t3888 * __this, MethodInfo* method)
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
		int32_t L_2 = m5689(L_1, &m5689_MI);
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
extern "C" t297  m24467_gshared (t3888 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral1249, &m5685_MI);
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
		t1332 * L_3 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_3, (t2*) &_stringLiteral1250, &m5685_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		t121 * L_4 = (__this->f0);
		t121 * L_5 = (__this->f0);
		int32_t L_6 = m5689(L_5, &m5689_MI);
		int32_t L_7 = (__this->f1);
		t297  L_8 = (( t297  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5217_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5218_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5219_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5220_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5221_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5222_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2659_TI;



#include "t3889.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3889_TI;
#include "t3889MD.h"

extern Il2CppType t3889_0_0_0;
extern Il2CppType t2659_0_0_0;
struct t121;
#define m28653(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24472_GM;
extern Il2CppGenericMethod m28653_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5223_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5224_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5225_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5226_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2660_TI;



#include "t3890.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3890_TI;
#include "t3890MD.h"

extern Il2CppType t3890_0_0_0;
extern Il2CppType t2660_0_0_0;
struct t121;
#define m28664(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24477_GM;
extern Il2CppGenericMethod m28664_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5227_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5228_TI;

#include "t1926.h"


#include "t3891.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3891_TI;
#include "t3891MD.h"

extern TypeInfo t1926_TI;
extern Il2CppType t3891_0_0_0;
struct t121;
struct t121;
#include "t568.h"
extern "C" uint8_t m25304_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m25304(__this, p0, method) (( uint8_t (*) (t121 *, int32_t, MethodInfo*))m25304_gshared)(__this, p0, method)
#define m28675(__this, p0, method) (( uint8_t (*) (t121 *, int32_t, MethodInfo*))m25304_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24482_GM;
extern Il2CppGenericMethod m28675_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5229_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5230_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5231_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5232_TI;

#include "t2124.h"


#include "t3892.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3892_TI;
#include "t3892MD.h"

extern TypeInfo t2124_TI;
extern Il2CppType t3892_0_0_0;
struct t121;
#define m28686(__this, p0, method) (( t2124 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24487_GM;
extern Il2CppGenericMethod m28686_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5233_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5234_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5235_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2014_TI;

#include "t2017.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4161_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4159_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4160_TI;



#include "t3893.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3893_TI;
#include "t3893MD.h"

extern TypeInfo t2017_TI;
extern Il2CppType t3893_0_0_0;
struct t121;
#define m28697(__this, p0, method) (( t2017 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24492_GM;
extern Il2CppGenericMethod m28697_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5236_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5237_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5238_TI;



#ifdef __clang__
#pragma clang diagnostic pop
#endif
