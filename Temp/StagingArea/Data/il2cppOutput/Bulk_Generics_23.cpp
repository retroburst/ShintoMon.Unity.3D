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
extern TypeInfo t5012_TI;

#include "t327.h"

#include "t121.h"

#include "t3829.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3829_TI;
#include "t3829MD.h"

#include "t9.h"
#include "t125.h"
#include "t2.h"
#include "t1332.h"
#include "t122.h"
#include "t124.h"
extern TypeInfo t327_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t121MD.h"
extern Il2CppType t3829_0_0_0;
extern MethodInfo m5685_MI;
extern MethodInfo m5689_MI;
struct t121;
#include "t896.h"
extern "C" int16_t m28051_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28051(__this, p0, method) (( int16_t (*) (t121 *, int32_t, MethodInfo*))m28051_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24177_GM;
extern Il2CppGenericMethod m28051_GM;


extern Il2CppGenericMethod m24173_GM;
extern "C" void m24173_gshared (t3829 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24174_GM;
extern "C" t9 * m24174_gshared (t3829 * __this, MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (t3829 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24175_GM;
extern "C" void m24175_gshared (t3829 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24176_GM;
extern "C" bool m24176_gshared (t3829 * __this, MethodInfo* method)
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
extern "C" int16_t m24177_gshared (t3829 * __this, MethodInfo* method)
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
		int16_t L_8 = (( int16_t (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5013_TI;

#include "mscorlib_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5014_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5015_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5016_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5017_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5018_TI;



#include "t3830.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3830_TI;
#include "t3830MD.h"

extern TypeInfo t2215_TI;
extern Il2CppType t3830_0_0_0;
extern Il2CppType t2215_0_0_0;
struct t121;
struct t121;
extern "C" t9 * m24739_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24739(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
#define m28062(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24182_GM;
extern Il2CppGenericMethod m28062_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5019_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5020_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5021_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5022_TI;



#include "t3831.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3831_TI;
#include "t3831MD.h"

extern TypeInfo t2216_TI;
extern Il2CppType t3831_0_0_0;
extern Il2CppType t2216_0_0_0;
struct t121;
#define m28073(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24187_GM;
extern Il2CppGenericMethod m28073_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5023_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5024_TI;

#include "t186.h"


#include "t3832.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3832_TI;
#include "t3832MD.h"

extern TypeInfo t186_TI;
extern Il2CppType t3832_0_0_0;
struct t121;
extern "C" int8_t m28084_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28084(__this, p0, method) (( int8_t (*) (t121 *, int32_t, MethodInfo*))m28084_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24192_GM;
extern Il2CppGenericMethod m28084_GM;


extern Il2CppGenericMethod m24188_GM;
extern "C" void m24188_gshared (t3832 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24189_GM;
extern "C" t9 * m24189_gshared (t3832 * __this, MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (t3832 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24190_GM;
extern "C" void m24190_gshared (t3832 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24191_GM;
extern "C" bool m24191_gshared (t3832 * __this, MethodInfo* method)
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
extern "C" int8_t m24192_gshared (t3832 * __this, MethodInfo* method)
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
		int8_t L_8 = (( int8_t (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5025_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5026_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5027_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5028_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5029_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5030_TI;



#include "t3833.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3833_TI;
#include "t3833MD.h"

extern TypeInfo t2212_TI;
extern Il2CppType t3833_0_0_0;
extern Il2CppType t2212_0_0_0;
struct t121;
#define m28095(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24197_GM;
extern Il2CppGenericMethod m28095_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5031_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5032_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5033_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5034_TI;



#include "t3834.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3834_TI;
#include "t3834MD.h"

extern TypeInfo t2213_TI;
extern Il2CppType t3834_0_0_0;
extern Il2CppType t2213_0_0_0;
struct t121;
#define m28106(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24202_GM;
extern Il2CppGenericMethod m28106_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5035_TI;



#include "t3835.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3835_TI;
#include "t3835MD.h"

#include "t58.h"
#include "t463.h"


extern Il2CppGenericMethod m24203_GM;
extern "C" void m24203_gshared (t3835 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24204_GM;
extern "C" t9 * m24204_gshared (t3835 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24204((t3835 *)__this->f9,p0, method);
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
extern Il2CppGenericMethod m24205_GM;
extern "C" t9 * m24205_gshared (t3835 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern Il2CppGenericMethod m24206_GM;
extern "C" t9 * m24206_gshared (t3835 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t3836.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3836_TI;
#include "t3836MD.h"

#include "t138.h"
#include "t3837.h"
#include "t169.h"
extern TypeInfo t896_TI;
extern TypeInfo t194_TI;
extern TypeInfo t121_TI;
extern TypeInfo t122_TI;
extern TypeInfo t125_TI;
extern TypeInfo t3837_TI;
extern TypeInfo t169_TI;
#include "t896MD.h"
#include "t9MD.h"
#include "t3837MD.h"
#include "t169MD.h"
extern Il2CppType t3836_0_0_0;
extern Il2CppType t3837_0_0_0;
extern MethodInfo m5693_MI;
extern MethodInfo m336_MI;
extern MethodInfo m24217_MI;
extern MethodInfo m5874_MI;
extern MethodInfo m24223_MI;
extern MethodInfo m5706_MI;
struct t121;
#include "t132.h"
extern "C" int32_t m11995_gshared (t9 * __this , t158* p0, t9 * p1, MethodInfo* method);
#define m11995(__this , p0, p1, method) (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))m11995_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m24222_GM;
extern Il2CppGenericMethod m24217_GM;
extern Il2CppGenericMethod m11995_GM;
extern Il2CppGenericMethod m24223_GM;


extern Il2CppGenericMethod m24207_GM;
extern "C" void m24207_gshared (t3836 * __this, t158* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t158* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern Il2CppGenericMethod m24208_GM;
extern "C" t9 * m24208_gshared (t3836 * __this, MethodInfo* method)
{
	{
		t9* L_0 = (t9*)VirtFuncInvoker0< t9* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
extern Il2CppGenericMethod m24209_GM;
extern "C" t9 * m24209_gshared (t3836 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t158* L_1 = (__this->f0);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((t121 *)L_1)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_2, (t2*) &_stringLiteral401, &m5693_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		t158* L_3 = (__this->f0);
		int32_t L_4 = p0;
		int32_t L_5 = L_4;
		return (*(t9 **)(t9 **)SZArrayLdElema(L_3, L_5));
	}
}
extern Il2CppGenericMethod m24210_GM;
extern "C" void m24210_gshared (t3836 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24211_GM;
extern "C" int32_t m24211_gshared (t3836 * __this, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		return (((int32_t)(((t121 *)L_0)->max_length)));
	}
}
extern Il2CppGenericMethod m24212_GM;
extern "C" bool m24212_gshared (t3836 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m24213_GM;
extern "C" void m24213_gshared (t3836 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24214_GM;
extern "C" void m24214_gshared (t3836 * __this, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24215_GM;
extern "C" bool m24215_gshared (t3836 * __this, t9 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		t9 * L_1 = p0;
		int32_t L_2 = (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern Il2CppGenericMethod m24216_GM;
extern "C" void m24216_gshared (t3836 * __this, t158* p0, int32_t p1, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		t158* L_1 = p0;
		int32_t L_2 = p1;
		VirtActionInvoker2< t121 *, int32_t >::Invoke(&m5874_MI, L_0, (t121 *)(t121 *)L_1, L_2);
		return;
	}
}
extern "C" t9* m24217_gshared (t3836 * __this, MethodInfo* method)
{
	t3837 * V_0 = {0};
	{
		t3837 * L_0 = (t3837 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (t3837 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		t3837 * L_1 = V_0;
		L_1->f3 = __this;
		t3837 * L_2 = V_0;
		return L_2;
	}
}
extern Il2CppGenericMethod m24218_GM;
extern "C" int32_t m24218_gshared (t3836 * __this, t9 * p0, MethodInfo* method)
{
	{
		t158* L_0 = (__this->f0);
		t9 * L_1 = p0;
		int32_t L_2 = (( int32_t (*) (t9 * , t158*, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL, L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
extern Il2CppGenericMethod m24219_GM;
extern "C" void m24219_gshared (t3836 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24220_GM;
extern "C" bool m24220_gshared (t3836 * __this, t9 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24221_GM;
extern "C" void m24221_gshared (t3836 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (( t138 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern "C" t138 * m24222_gshared (t9 * __this , MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1253, &m5706_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t168.h"
extern TypeInfo t9_TI;


extern "C" void m24223_gshared (t3837 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m24224_GM;
extern "C" t9 * m24224_gshared (t3837 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		return L_0;
	}
}
extern Il2CppGenericMethod m24225_GM;
extern "C" t9 * m24225_gshared (t3837 * __this, MethodInfo* method)
{
	{
		t9 * L_0 = (__this->f2);
		t9 * L_1 = L_0;
		return ((t9 *)L_1);
	}
}
extern Il2CppGenericMethod m24226_GM;
extern "C" bool m24226_gshared (t3837 * __this, MethodInfo* method)
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
			goto IL_001e;
		}
		if (L_1 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->f0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		t3836 * L_2 = (__this->f3);
		t158* L_3 = (L_2->f0);
		int32_t L_4 = (__this->f0);
		int32_t L_5 = L_4;
		__this->f2 = (*(t9 **)(t9 **)SZArrayLdElema(L_3, L_5));
		__this->f1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_6 = (__this->f0);
		__this->f0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_7 = (__this->f0);
		t3836 * L_8 = (__this->f3);
		t158* L_9 = (L_8->f0);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->f1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
extern Il2CppGenericMethod m24227_GM;
extern "C" void m24227_gshared (t3837 * __this, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5036_TI;

#include "t821.h"


#include "t3838.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3838_TI;
#include "t3838MD.h"

extern TypeInfo t821_TI;
extern Il2CppType t3838_0_0_0;
struct t121;
#define m28145(__this, p0, method) (( t821 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24232_GM;
extern Il2CppGenericMethod m28145_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5037_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5038_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5039_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5040_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5041_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5042_TI;



#include "t3839.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3839_TI;
#include "t3839MD.h"

extern TypeInfo t2585_TI;
extern Il2CppType t3839_0_0_0;
struct t121;
#define m28156(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24237_GM;
extern Il2CppGenericMethod m28156_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5043_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5044_TI;

#include "t1589.h"


#include "t3840.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3840_TI;
#include "t3840MD.h"

extern TypeInfo t1589_TI;
extern Il2CppType t3840_0_0_0;
struct t121;
extern "C" t1589  m28167_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28167(__this, p0, method) (( t1589  (*) (t121 *, int32_t, MethodInfo*))m28167_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24242_GM;
extern Il2CppGenericMethod m28167_GM;


extern Il2CppGenericMethod m24238_GM;
extern "C" void m24238_gshared (t3840 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24239_GM;
extern "C" t9 * m24239_gshared (t3840 * __this, MethodInfo* method)
{
	{
		t1589  L_0 = (( t1589  (*) (t3840 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1589  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24240_GM;
extern "C" void m24240_gshared (t3840 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24241_GM;
extern "C" bool m24241_gshared (t3840 * __this, MethodInfo* method)
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
extern "C" t1589  m24242_gshared (t3840 * __this, MethodInfo* method)
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
		t1589  L_8 = (( t1589  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5045_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5046_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5047_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5048_TI;

#include "t1592.h"


#include "t3841.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3841_TI;
#include "t3841MD.h"

extern TypeInfo t1592_TI;
extern Il2CppType t3841_0_0_0;
struct t121;
#define m28178(__this, p0, method) (( t1592 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24247_GM;
extern Il2CppGenericMethod m28178_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5049_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5050_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5051_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5052_TI;

#include "t1593.h"


#include "t3842.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3842_TI;
#include "t3842MD.h"

extern TypeInfo t1593_TI;
extern Il2CppType t3842_0_0_0;
struct t121;
#define m28189(__this, p0, method) (( t1593 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24252_GM;
extern Il2CppGenericMethod m28189_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5053_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5054_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5055_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5056_TI;

#include "t1595.h"


#include "t3843.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3843_TI;
#include "t3843MD.h"

extern TypeInfo t1595_TI;
extern Il2CppType t3843_0_0_0;
struct t121;
#define m28200(__this, p0, method) (( t1595 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24257_GM;
extern Il2CppGenericMethod m28200_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5057_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5058_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5059_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5060_TI;

#include "t1612.h"


#include "t3844.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3844_TI;
#include "t3844MD.h"

extern TypeInfo t1612_TI;
extern Il2CppType t3844_0_0_0;
struct t121;
#define m28211(__this, p0, method) (( t1612 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24262_GM;
extern Il2CppGenericMethod m28211_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5061_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5062_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5063_TI;



#include "t3845.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3845_TI;
#include "t3845MD.h"



#include "t3846.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3846_TI;
#include "t3846MD.h"



#include "t3847.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3847_TI;
#include "t3847MD.h"

extern TypeInfo t4253_TI;
#include "t2759MD.h"
extern Il2CppType t4253_0_0_0;
extern MethodInfo m25262_MI;
extern Il2CppGenericMethod m13528_GM;
extern Il2CppGenericMethod m25262_GM;


extern Il2CppGenericMethod m24263_GM;
extern "C" void m24263_gshared (t3847 * __this, MethodInfo* method)
{
	{
		(( void (*) (t2759 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m24264_GM;
extern "C" int32_t m24264_gshared (t3847 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t9 * L_0 = p0;
		t9 * L_1 = L_0;
		if (((t9 *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_2 = p1;
		t9 * L_3 = L_2;
		if (((t9 *)L_3))
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
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		t9 * L_4 = p1;
		t9 * L_5 = L_4;
		if (((t9 *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		t9 * L_6 = p1;
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (*(&p0)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5064_TI;

#include "t1669.h"


#include "t3848.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3848_TI;
#include "t3848MD.h"

extern TypeInfo t1669_TI;
extern Il2CppType t3848_0_0_0;
struct t121;
extern "C" t1669  m28222_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28222(__this, p0, method) (( t1669  (*) (t121 *, int32_t, MethodInfo*))m28222_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24269_GM;
extern Il2CppGenericMethod m28222_GM;


extern Il2CppGenericMethod m24265_GM;
extern "C" void m24265_gshared (t3848 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24266_GM;
extern "C" t9 * m24266_gshared (t3848 * __this, MethodInfo* method)
{
	{
		t1669  L_0 = (( t1669  (*) (t3848 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1669  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24267_GM;
extern "C" void m24267_gshared (t3848 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24268_GM;
extern "C" bool m24268_gshared (t3848 * __this, MethodInfo* method)
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
extern "C" t1669  m24269_gshared (t3848 * __this, MethodInfo* method)
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
		t1669  L_8 = (( t1669  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5065_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5066_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5067_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5068_TI;

#include "t1678.h"


#include "t3849.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3849_TI;
#include "t3849MD.h"

extern TypeInfo t1678_TI;
extern Il2CppType t3849_0_0_0;
struct t121;
extern "C" t1678  m28233_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m28233(__this, p0, method) (( t1678  (*) (t121 *, int32_t, MethodInfo*))m28233_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24274_GM;
extern Il2CppGenericMethod m28233_GM;


extern Il2CppGenericMethod m24270_GM;
extern "C" void m24270_gshared (t3849 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24271_GM;
extern "C" t9 * m24271_gshared (t3849 * __this, MethodInfo* method)
{
	{
		t1678  L_0 = (( t1678  (*) (t3849 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1678  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24272_GM;
extern "C" void m24272_gshared (t3849 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24273_GM;
extern "C" bool m24273_gshared (t3849 * __this, MethodInfo* method)
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
extern "C" t1678  m24274_gshared (t3849 * __this, MethodInfo* method)
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
		t1678  L_8 = (( t1678  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5069_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5070_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5071_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5072_TI;

#include "t929.h"


#include "t3850.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3850_TI;
#include "t3850MD.h"

extern TypeInfo t929_TI;
extern Il2CppType t3850_0_0_0;
struct t121;
#define m28244(__this, p0, method) (( t929 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24279_GM;
extern Il2CppGenericMethod m28244_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5073_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5074_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5075_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5076_TI;

#include "t1690.h"


#include "t3851.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3851_TI;
#include "t3851MD.h"

extern TypeInfo t1690_TI;
extern Il2CppType t3851_0_0_0;
struct t121;
#define m28255(__this, p0, method) (( t1690 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24284_GM;
extern Il2CppGenericMethod m28255_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5077_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5078_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5079_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5080_TI;

#include "t1740.h"


#include "t3852.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3852_TI;
#include "t3852MD.h"

extern TypeInfo t1740_TI;
extern Il2CppType t3852_0_0_0;
struct t121;
#define m28266(__this, p0, method) (( t1740 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24289_GM;
extern Il2CppGenericMethod m28266_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5081_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5082_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5083_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5084_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5085_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5086_TI;



#include "t3853.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3853_TI;
#include "t3853MD.h"

extern TypeInfo t2592_TI;
extern Il2CppType t3853_0_0_0;
struct t121;
#define m28277(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24294_GM;
extern Il2CppGenericMethod m28277_GM;


#ifdef __clang__
#pragma clang diagnostic pop
#endif
