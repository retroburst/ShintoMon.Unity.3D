#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t3797.h"
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
extern TypeInfo t3797_TI;
#include "t3797MD.h"

#include "t124.h"
#include "t9.h"
#include "t1196.h"
#include "t125.h"
#include "t122.h"
#include "t2.h"
#include "t132.h"
#include "t169.h"
#include "t3798.h"
#include "t121.h"
#include "mscorlib_ArrayTypes.h"
#include "t3799.h"
#include "t58.h"
extern TypeInfo t991_TI;
extern TypeInfo t9_TI;
extern TypeInfo t1196_TI;
extern TypeInfo t125_TI;
extern TypeInfo t132_TI;
extern TypeInfo t169_TI;
extern TypeInfo t3798_TI;
extern TypeInfo t1197_TI;
extern TypeInfo t124_TI;
extern TypeInfo t122_TI;
extern TypeInfo t3799_TI;
#include "t1196MD.h"
#include "t9MD.h"
#include "t132MD.h"
#include "t169MD.h"
#include "t3799MD.h"
#include "t3798MD.h"
extern Il2CppType t1196_0_0_0;
extern Il2CppType t3798_0_0_0;
extern Il2CppType t1197_0_0_0;
extern Il2CppType t3797_0_0_0;
extern Il2CppType t3799_0_0_0;
extern MethodInfo m11969_MI;
extern MethodInfo m23861_MI;
extern MethodInfo m336_MI;
extern MethodInfo m339_MI;
extern MethodInfo m5706_MI;
extern MethodInfo m23943_MI;
extern MethodInfo m23869_MI;
extern MethodInfo m23951_MI;
extern MethodInfo m23946_MI;
struct t1196;
#include "t126.h"
#include "t138.h"
#include "t127.h"
#include "t556.h"
struct t2781;
#include "t2781.h"
#include "t2794.h"
extern "C" void m25339_gshared (t2781 * __this, t121 * p0, int32_t p1, t2794 * p2, MethodInfo* method);
#define m25339(__this, p0, p1, p2, method) (( void (*) (t2781 *, t121 *, int32_t, t2794 *, MethodInfo*))m25339_gshared)(__this, p0, p1, p2, method)
#define m27879(__this, p0, p1, p2, method) (( void (*) (t1196 *, t121 *, int32_t, t3799 *, MethodInfo*))m25339_gshared)(__this, p0, p1, p2, method)
struct t1196;
#include "t1659.h"
extern "C" void m27880 (t1196 * __this, t1197* p0, int32_t p1, t3799 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m23861_GM;
extern Il2CppGenericMethod m23874_GM;
extern Il2CppGenericMethod m23944_GM;
extern Il2CppGenericMethod m23943_GM;
extern Il2CppGenericMethod m23866_GM;
extern Il2CppGenericMethod m23869_GM;
extern Il2CppGenericMethod m23951_GM;
extern Il2CppGenericMethod m27879_GM;
extern Il2CppGenericMethod m27880_GM;
extern Il2CppGenericMethod m23946_GM;


#ifndef _MSC_VER
#else
#endif

#include "t3795.h"
#include "t3791.h"
extern TypeInfo t3795_TI;
#include "t3795MD.h"
#include "t3791MD.h"
extern Il2CppType t3795_0_0_0;
extern Il2CppGenericMethod m23924_GM;
extern Il2CppGenericMethod m23889_GM;
extern Il2CppGenericMethod m23884_GM;
extern Il2CppGenericMethod m23927_GM;
extern Il2CppGenericMethod m23921_GM;


#ifndef _MSC_VER
#else
#endif

#include "t463.h"


#include "t3790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3790_TI;
#include "t3790MD.h"

#include "t1155.h"


#include "t3800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3800_TI;
#include "t3800MD.h"



#include "t3801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3801_TI;
#include "t3801MD.h"

#include "t568.h"


extern Il2CppGenericMethod m23960_GM;
extern "C" void m23960_gshared (t3801 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m23962_GM;
extern "C" t3791  m23962_gshared (t3801 * __this, t9 * p0, uint8_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m23962((t3801 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3791  (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t3791  (*FunctionPointerType) (t9 * __this, t9 * p0, uint8_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t3791  (*FunctionPointerType) (t9 * __this, uint8_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern Il2CppGenericMethod m23964_GM;
extern "C" t9 * m23964_gshared (t3801 * __this, t9 * p0, uint8_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t568_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m23966_GM;
extern "C" t3791  m23966_gshared (t3801 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3791 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t3802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3802_TI;
#include "t3802MD.h"

extern TypeInfo t1152_TI;
extern TypeInfo t1155_TI;
extern TypeInfo t3791_TI;
extern TypeInfo t2_TI;
extern Il2CppType t3802_0_0_0;
extern MethodInfo m11972_MI;
extern MethodInfo m23969_MI;
extern Il2CppGenericMethod m23922_GM;
extern Il2CppGenericMethod m23887_GM;
extern Il2CppGenericMethod m23969_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4957_TI;

#include "t1173.h"


#include "t3803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3803_TI;
#include "t3803MD.h"

#include "t1332.h"
extern TypeInfo t1173_TI;
extern TypeInfo t1332_TI;
#include "t1332MD.h"
#include "t121MD.h"
extern Il2CppType t3803_0_0_0;
extern MethodInfo m5685_MI;
extern MethodInfo m5689_MI;
struct t121;
#include "t896.h"
struct t121;
extern "C" t9 * m24739_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24739(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
#define m27888(__this, p0, method) (( t1173 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m23977_GM;
extern Il2CppGenericMethod m27888_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4958_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4959_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4960_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4961_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4962_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4963_TI;



#include "t3804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3804_TI;
#include "t3804MD.h"

extern TypeInfo t1099_TI;
extern Il2CppType t3804_0_0_0;
struct t121;
#define m27899(__this, p0, method) (( t9 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m23982_GM;
extern Il2CppGenericMethod m27899_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4964_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4965_TI;

#include "t1230.h"


#include "t3805.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3805_TI;
#include "t3805MD.h"

extern TypeInfo t1230_TI;
extern Il2CppType t3805_0_0_0;
struct t121;
extern "C" t1230  m27910_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m27910(__this, p0, method) (( t1230  (*) (t121 *, int32_t, MethodInfo*))m27910_gshared)(__this, p0, method)
extern Il2CppGenericMethod m23987_GM;
extern Il2CppGenericMethod m27910_GM;


extern Il2CppGenericMethod m23983_GM;
extern "C" void m23983_gshared (t3805 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m23984_GM;
extern "C" t9 * m23984_gshared (t3805 * __this, MethodInfo* method)
{
	{
		t1230  L_0 = (( t1230  (*) (t3805 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1230  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m23985_GM;
extern "C" void m23985_gshared (t3805 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m23986_GM;
extern "C" bool m23986_gshared (t3805 * __this, MethodInfo* method)
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
extern "C" t1230  m23987_gshared (t3805 * __this, MethodInfo* method)
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
		t1230  L_8 = (( t1230  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4966_TI;

#include "System_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4967_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4968_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4969_TI;

#include "t1255.h"


#include "t3806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3806_TI;
#include "t3806MD.h"

extern TypeInfo t1255_TI;
extern Il2CppType t3806_0_0_0;
struct t121;
#define m27921(__this, p0, method) (( t1255 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m23992_GM;
extern Il2CppGenericMethod m27921_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4970_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4971_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4972_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4973_TI;

#include "t1258.h"


#include "t3807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3807_TI;
#include "t3807MD.h"

extern TypeInfo t1258_TI;
extern Il2CppType t3807_0_0_0;
struct t121;
#define m27932(__this, p0, method) (( t1258 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m23997_GM;
extern Il2CppGenericMethod m27932_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4974_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4975_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4976_TI;



#include "t1266.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1266_TI;
#include "t1266MD.h"

#include "t3811.h"
#include "t3815.h"
#include "t1660.h"
#include "t3809.h"
#include "t1093.h"
#include "t1094.h"
#include "t3808.h"
#include "t3817.h"
#include "t3813.h"
#include "t3818.h"
#include "t2976.h"
extern TypeInfo t2963_TI;
extern TypeInfo t1659_TI;
extern TypeInfo t1660_TI;
extern TypeInfo t3811_TI;
extern TypeInfo t3815_TI;
extern TypeInfo t4977_TI;
extern TypeInfo t4978_TI;
extern TypeInfo t4158_TI;
extern TypeInfo t3809_TI;
extern TypeInfo t76_TI;
extern TypeInfo t137_TI;
extern TypeInfo t4157_TI;
extern TypeInfo t4172_TI;
extern TypeInfo t3808_TI;
extern TypeInfo t3817_TI;
extern TypeInfo t3813_TI;
extern TypeInfo t3818_TI;
extern TypeInfo t896_TI;
extern TypeInfo t2976_TI;
extern TypeInfo t1088_TI;
extern TypeInfo t2506_TI;
extern TypeInfo t556_TI;
extern TypeInfo t1149_TI;
extern TypeInfo t126_TI;
#include "t1660MD.h"
#include "t3811MD.h"
#include "t3815MD.h"
#include "t3809MD.h"
#include "t3808MD.h"
#include "t3817MD.h"
#include "t3813MD.h"
#include "t3818MD.h"
#include "t896MD.h"
#include "t2976MD.h"
#include "t556MD.h"
#include "t1149MD.h"
#include "t1093MD.h"
#include "t126MD.h"
#include "t2MD.h"
#include "t1155MD.h"
extern Il2CppType t1266_0_0_0;
extern Il2CppType t2963_0_0_0;
extern Il2CppType t3811_0_0_0;
extern Il2CppType t3815_0_0_0;
extern Il2CppType t4977_0_0_0;
extern Il2CppType t4978_0_0_0;
extern Il2CppType t4158_0_0_0;
extern Il2CppType t4157_0_0_0;
extern Il2CppType t3809_0_0_0;
extern Il2CppType t4172_0_0_0;
extern Il2CppType t3808_0_0_0;
extern Il2CppType t3817_0_0_0;
extern Il2CppType t3813_0_0_0;
extern Il2CppType t3818_0_0_0;
extern Il2CppType t2976_0_0_0;
extern Il2CppType t1088_0_0_0;
extern Il2CppType t2506_0_0_0;
extern Il2CppType t125_0_0_0;
extern MethodInfo m24035_MI;
extern MethodInfo m24023_MI;
extern MethodInfo m24024_MI;
extern MethodInfo m28929_MI;
extern MethodInfo m28930_MI;
extern MethodInfo m8320_MI;
extern MethodInfo m24059_MI;
extern MethodInfo m24094_MI;
extern MethodInfo m29455_MI;
extern MethodInfo m29456_MI;
extern MethodInfo m29457_MI;
extern MethodInfo m24033_MI;
extern MethodInfo m364_MI;
extern MethodInfo m365_MI;
extern MethodInfo m24039_MI;
extern MethodInfo m24047_MI;
extern MethodInfo m24113_MI;
extern MethodInfo m24028_MI;
extern MethodInfo m24117_MI;
extern MethodInfo m24078_MI;
extern MethodInfo m24121_MI;
extern MethodInfo m5693_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m24022_MI;
extern MethodInfo m24048_MI;
extern MethodInfo m8499_MI;
extern MethodInfo m7682_MI;
extern MethodInfo m1146_MI;
extern MethodInfo m5702_MI;
extern MethodInfo m5715_MI;
extern MethodInfo m5714_MI;
extern MethodInfo m329_MI;
extern MethodInfo m5703_MI;
extern MethodInfo m7770_MI;
extern MethodInfo m610_MI;
extern MethodInfo m5691_MI;
extern MethodInfo m7733_MI;
extern MethodInfo m24040_MI;
extern MethodInfo m28935_MI;
extern MethodInfo m5686_MI;
struct t1266;
extern "C" void m27956 (t1266 * __this, t4172* p0, int32_t p1, t3808 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t1266;
extern "C" void m27958_gshared (t1266 * __this, t121 * p0, int32_t p1, t3817 * p2, MethodInfo* method);
#define m27958(__this, p0, p1, p2, method) (( void (*) (t1266 *, t121 *, int32_t, t3817 *, MethodInfo*))m27958_gshared)(__this, p0, p1, p2, method)
struct t1266;
extern "C" void m27959 (t1266 * __this, t4157* p0, int32_t p1, t3817 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m24041_GM;
extern Il2CppGenericMethod m24042_GM;
extern Il2CppGenericMethod m24035_GM;
extern Il2CppGenericMethod m24043_GM;
extern Il2CppGenericMethod m24023_GM;
extern Il2CppGenericMethod m24044_GM;
extern Il2CppGenericMethod m24024_GM;
extern Il2CppGenericMethod m28929_GM;
extern Il2CppGenericMethod m28930_GM;
extern Il2CppGenericMethod m24032_GM;
extern Il2CppGenericMethod m24059_GM;
extern Il2CppGenericMethod m24094_GM;
extern Il2CppGenericMethod m24025_GM;
extern Il2CppGenericMethod m24002_GM;
extern Il2CppGenericMethod m29455_GM;
extern Il2CppGenericMethod m29456_GM;
extern Il2CppGenericMethod m29457_GM;
extern Il2CppGenericMethod m24049_GM;
extern Il2CppGenericMethod m24051_GM;
extern Il2CppGenericMethod m24033_GM;
extern Il2CppGenericMethod m24039_GM;
extern Il2CppGenericMethod m24045_GM;
extern Il2CppGenericMethod m24031_GM;
extern Il2CppGenericMethod m24027_GM;
extern Il2CppGenericMethod m24047_GM;
extern Il2CppGenericMethod m24113_GM;
extern Il2CppGenericMethod m27956_GM;
extern Il2CppGenericMethod m24028_GM;
extern Il2CppGenericMethod m24117_GM;
extern Il2CppGenericMethod m27958_GM;
extern Il2CppGenericMethod m24078_GM;
extern Il2CppGenericMethod m24121_GM;
extern Il2CppGenericMethod m15599_GM;
extern Il2CppGenericMethod m24026_GM;
extern Il2CppGenericMethod m24022_GM;
extern Il2CppGenericMethod m24048_GM;
extern Il2CppGenericMethod m27959_GM;
extern Il2CppGenericMethod m24040_GM;
extern Il2CppGenericMethod m28935_GM;


extern Il2CppGenericMethod m23998_GM;
extern "C" void m23998_gshared (t1266 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		(( void (*) (t1266 *, int32_t, t9*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (t9*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m23999_GM;
extern "C" void m23999_gshared (t1266 * __this, t9* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t9* L_0 = p0;
		(( void (*) (t1266 *, int32_t, t9*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m24000_GM;
extern "C" void m24000_gshared (t1266 * __this, t9* p0, MethodInfo* method)
{
	{
		t9* L_0 = p0;
		(( void (*) (t1266 *, t9*, t9*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (t9*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern Il2CppGenericMethod m24001_GM;
extern "C" void m24001_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		(( void (*) (t1266 *, int32_t, t9*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (t9*)NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern "C" void m24002_gshared (t1266 * __this, t9* p0, t9* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t3809  V_1 = {0};
	t9* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		m336(__this, &m336_MI);
		t9* L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t9* L_2 = p0;
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		t9* L_5 = p1;
		(( void (*) (t1266 *, int32_t, t9*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t9* L_6 = p0;
		t9* L_7 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6);
		V_2 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			t9* L_8 = V_2;
			t3809  L_9 = (t3809 )InterfaceFuncInvoker0< t3809  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			int32_t L_10 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			int32_t L_11 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
		}

IL_0047:
		{
			t9* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			t9* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			t9* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_005c:
	{
		return;
	}
}
extern Il2CppGenericMethod m24003_GM;
extern "C" void m24003_gshared (t1266 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1093 * L_0 = p0;
		__this->f13 = L_0;
		return;
	}
}
extern Il2CppGenericMethod m24004_GM;
extern "C" t9* m24004_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3811 * L_0 = (( t3811 * (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
extern Il2CppGenericMethod m24005_GM;
extern "C" t9* m24005_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3815 * L_0 = (( t3815 * (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
extern Il2CppGenericMethod m24006_GM;
extern "C" t9 * m24006_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		t9 * L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		t9 * L_3 = p0;
		int32_t L_4 = (( int32_t (*) (t1266 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_5 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
extern Il2CppGenericMethod m24007_GM;
extern "C" void m24007_gshared (t1266 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (( int32_t (*) (t1266 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t9 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t1266 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
extern Il2CppGenericMethod m24008_GM;
extern "C" void m24008_gshared (t1266 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		int32_t L_1 = (( int32_t (*) (t1266 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		t9 * L_2 = p1;
		int32_t L_3 = (( int32_t (*) (t1266 *, t9 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
extern Il2CppGenericMethod m24009_GM;
extern "C" bool m24009_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		if (!((t9 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t9 * L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24010_GM;
extern "C" void m24010_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		if (!((t9 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		t9 * L_3 = p0;
		VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
extern Il2CppGenericMethod m24011_GM;
extern "C" bool m24011_gshared (t1266 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24012_GM;
extern "C" t9 * m24012_gshared (t1266 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
extern Il2CppGenericMethod m24013_GM;
extern "C" bool m24013_gshared (t1266 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24014_GM;
extern "C" void m24014_gshared (t1266 * __this, t3809  p0, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_1 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
extern Il2CppGenericMethod m24015_GM;
extern "C" bool m24015_gshared (t1266 * __this, t3809  p0, MethodInfo* method)
{
	{
		t3809  L_0 = p0;
		bool L_1 = (( bool (*) (t1266 *, t3809 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
extern Il2CppGenericMethod m24016_GM;
extern "C" void m24016_gshared (t1266 * __this, t4157* p0, int32_t p1, MethodInfo* method)
{
	{
		t4157* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t1266 *, t4157*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
extern Il2CppGenericMethod m24017_GM;
extern "C" bool m24017_gshared (t1266 * __this, t3809  p0, MethodInfo* method)
{
	{
		t3809  L_0 = p0;
		bool L_1 = (( bool (*) (t1266 *, t3809 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m24018_GM;
extern TypeInfo* t4172_TI_var;
extern "C" void m24018_gshared (t1266 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	static bool m24018_init;
	if (!m24018_init)
	{
		t4172_TI_var = il2cpp_codegen_class_from_type(&t4172_0_0_0);
		m24018_init = true;
	}
	t4157* V_0 = {0};
	t4172* V_1 = {0};
	int32_t G_B5_0 = 0;
	t4172* G_B5_1 = {0};
	t1266 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t4172* G_B4_1 = {0};
	t1266 * G_B4_2 = {0};
	{
		t121 * L_0 = p0;
		V_0 = ((t4157*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		t4157* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t4157* L_2 = V_0;
		int32_t L_3 = p1;
		(( void (*) (t1266 *, t4157*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		t121 * L_4 = p0;
		int32_t L_5 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t121 * L_6 = p0;
		V_1 = ((t4172*)IsInst(L_6, t4172_TI_var));
		t4172* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		t4172* L_8 = V_1;
		int32_t L_9 = p1;
		t3808 * L_10 = ((t1266_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((t1266 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((t1266 *)(__this));
			goto IL_0040;
		}
	}
	{
		t58 L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		t3808 * L_12 = (t3808 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (t3808 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((t1266_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((t1266 *)(G_B4_2));
	}

IL_0040:
	{
		t3808 * L_13 = ((t1266_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->f15;
		(( void (*) (t1266 *, t4172*, int32_t, t3808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		t121 * L_14 = p0;
		int32_t L_15 = p1;
		t58 L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t3817 * L_17 = (t3817 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t3817 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t1266 *, t121 *, int32_t, t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
extern Il2CppGenericMethod m24019_GM;
extern "C" t9 * m24019_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3813  L_0 = {0};
		(( void (*) (t3813 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t3813  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m24020_GM;
extern "C" t9* m24020_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3813  L_0 = {0};
		(( void (*) (t3813 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		t3813  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m24021_GM;
extern "C" t9 * m24021_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3818 * L_0 = (t3818 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (t3818 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
extern "C" int32_t m24022_gshared (t1266 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f10);
		return L_0;
	}
}
extern "C" int32_t m24023_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1088* L_7 = (__this->f4);
		int32_t L_8 = V_0;
		t1088* L_9 = (__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		t2506* L_11 = (__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (((t1659 *)(t1659 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		t9* L_15 = (__this->f12);
		t1088* L_16 = (__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		t1088* L_21 = (__this->f7);
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		t2506* L_24 = (__this->f5);
		int32_t L_25 = V_1;
		int32_t L_26 = (((t1659 *)(t1659 *)SZArrayLdElema(L_24, L_25))->f1);
		V_1 = L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		t1660 * L_28 = (t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1660_TI));
		m8320(L_28, &m8320_MI);
		il2cpp_codegen_raise_exception(L_28);
	}
}
extern "C" void m24024_gshared (t1266 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1088* L_8 = (__this->f4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_8)->max_length)))));
		t1088* L_9 = (__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		t2506* L_13 = (__this->f5);
		int32_t L_14 = V_2;
		int32_t L_15 = (((t1659 *)(t1659 *)SZArrayLdElema(L_13, L_14))->f0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		t9* L_17 = (__this->f12);
		t1088* L_18 = (__this->f6);
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = p0;
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		t2506* L_24 = (__this->f5);
		int32_t L_25 = V_2;
		int32_t L_26 = (((t1659 *)(t1659 *)SZArrayLdElema(L_24, L_25))->f1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (__this->f10);
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = L_30;
		__this->f10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (__this->f11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_33 = V_0;
		t1088* L_34 = (__this->f4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (__this->f9);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (__this->f8);
		int32_t L_38 = L_37;
		V_4 = L_38;
		__this->f8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		t2506* L_40 = (__this->f5);
		int32_t L_41 = V_2;
		int32_t L_42 = (((t1659 *)(t1659 *)SZArrayLdElema(L_40, L_41))->f1);
		__this->f9 = L_42;
	}

IL_0101:
	{
		t2506* L_43 = (__this->f5);
		int32_t L_44 = V_2;
		t1088* L_45 = (__this->f4);
		int32_t L_46 = V_1;
		int32_t L_47 = L_46;
		((t1659 *)(t1659 *)SZArrayLdElema(L_43, L_44))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		t1088* L_48 = (__this->f4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		t2506* L_51 = (__this->f5);
		int32_t L_52 = V_2;
		int32_t L_53 = V_0;
		((t1659 *)(t1659 *)SZArrayLdElema(L_51, L_52))->f0 = L_53;
		t1088* L_54 = (__this->f6);
		int32_t L_55 = V_2;
		int32_t L_56 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		t2506* L_58 = (__this->f5);
		int32_t L_59 = V_3;
		t2506* L_60 = (__this->f5);
		int32_t L_61 = V_2;
		int32_t L_62 = (((t1659 *)(t1659 *)SZArrayLdElema(L_60, L_61))->f1);
		((t1659 *)(t1659 *)SZArrayLdElema(L_58, L_59))->f1 = L_62;
		t2506* L_63 = (__this->f5);
		int32_t L_64 = V_2;
		t1088* L_65 = (__this->f4);
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		((t1659 *)(t1659 *)SZArrayLdElema(L_63, L_64))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		t1088* L_68 = (__this->f4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		t1088* L_71 = (__this->f7);
		int32_t L_72 = V_2;
		int32_t L_73 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_71, L_72)) = (int32_t)L_73;
		int32_t L_74 = (__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
extern TypeInfo* t2976_TI_var;
extern "C" void m24025_gshared (t1266 * __this, int32_t p0, t9* p1, MethodInfo* method)
{
	static bool m24025_init;
	if (!m24025_init)
	{
		t2976_TI_var = il2cpp_codegen_class_from_type(&t2976_0_0_0);
		m24025_init = true;
	}
	t9* V_0 = {0};
	t1266 * G_B4_0 = {0};
	t1266 * G_B3_0 = {0};
	t9* G_B5_0 = {0};
	t1266 * G_B5_1 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		t896 * L_1 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m5693(L_1, (t2*) &_stringLiteral400, &m5693_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t9* L_2 = p1;
		G_B3_0 = ((t1266 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((t1266 *)(__this));
			goto IL_0018;
		}
	}
	{
		t9* L_3 = p1;
		V_0 = L_3;
		t9* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((t1266 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2976_TI_var);
		t2976 * L_5 = (( t2976 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((t9*)(L_5));
		G_B5_1 = ((t1266 *)(G_B4_0));
	}

IL_001d:
	{
		G_B5_1->f12 = G_B5_0;
		int32_t L_6 = p0;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		p0 = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = p0;
		p0 = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = p0;
		(( void (*) (t1266 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->f14 = 0;
		return;
	}
}
extern TypeInfo* t1088_TI_var;
extern TypeInfo* t2506_TI_var;
extern "C" void m24026_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	static bool m24026_init;
	if (!m24026_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		t2506_TI_var = il2cpp_codegen_class_from_type(&t2506_0_0_0);
		m24026_init = true;
	}
	{
		int32_t L_0 = p0;
		__this->f4 = ((t1088*)SZArrayNew(t1088_TI_var, L_0));
		int32_t L_1 = p0;
		__this->f5 = ((t2506*)SZArrayNew(t2506_TI_var, L_1));
		__this->f9 = (-1);
		int32_t L_2 = p0;
		__this->f6 = ((t1088*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = p0;
		__this->f7 = ((t1088*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->f8 = 0;
		t1088* L_4 = (__this->f4);
		__this->f11 = (((int32_t)((float)((float)(((float)(((int32_t)(((t121 *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->f11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		t1088* L_6 = (__this->f4);
		if ((((int32_t)(((int32_t)(((t121 *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->f11 = 1;
	}

IL_006e:
	{
		return;
	}
}
extern "C" void m24027_gshared (t1266 * __this, t121 * p0, int32_t p1, MethodInfo* method)
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
		int32_t L_4 = p1;
		t121 * L_5 = p0;
		int32_t L_6 = m5689(L_5, &m5689_MI);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		t556 * L_7 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_7, (t2*) &_stringLiteral402, &m2885_MI);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		t121 * L_8 = p0;
		int32_t L_9 = m5689(L_8, &m5689_MI);
		int32_t L_10 = p1;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		t556 * L_12 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_12, (t2*) &_stringLiteral403, &m2885_MI);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
extern "C" t3809  m24028_gshared (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		t3809  L_2 = {0};
		(( void (*) (t3809 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
extern Il2CppGenericMethod m24029_GM;
extern "C" int32_t m24029_gshared (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		return L_0;
	}
}
extern Il2CppGenericMethod m24030_GM;
extern "C" int32_t m24030_gshared (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		return L_0;
	}
}
extern "C" void m24031_gshared (t1266 * __this, t4157* p0, int32_t p1, MethodInfo* method)
{
	{
		t4157* L_0 = p0;
		int32_t L_1 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (t121 *)(t121 *)L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		t4157* L_2 = p0;
		int32_t L_3 = p1;
		t58 L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		t3817 * L_5 = (t3817 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (t3817 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (t1266 *, t4157*, int32_t, t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
extern TypeInfo* t1088_TI_var;
extern TypeInfo* t2506_TI_var;
extern "C" void m24032_gshared (t1266 * __this, MethodInfo* method)
{
	static bool m24032_init;
	if (!m24032_init)
	{
		t1088_TI_var = il2cpp_codegen_class_from_type(&t1088_0_0_0);
		t2506_TI_var = il2cpp_codegen_class_from_type(&t2506_0_0_0);
		m24032_init = true;
	}
	int32_t V_0 = 0;
	t1088* V_1 = {0};
	t2506* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	t1088* V_7 = {0};
	t1088* V_8 = {0};
	int32_t V_9 = 0;
	{
		t1088* L_0 = (__this->f4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t1149_TI));
		int32_t L_1 = m8499(NULL, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), &m8499_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((t1088*)SZArrayNew(t1088_TI_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((t2506*)SZArrayNew(t2506_TI_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		t1088* L_4 = (__this->f4);
		int32_t L_5 = V_3;
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		t2506* L_7 = V_2;
		int32_t L_8 = V_4;
		t9* L_9 = (__this->f12);
		t1088* L_10 = (__this->f6);
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((t1659 *)(t1659 *)SZArrayLdElema(L_7, L_8))->f0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		t2506* L_18 = V_2;
		int32_t L_19 = V_4;
		t1088* L_20 = V_1;
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		((t1659 *)(t1659 *)SZArrayLdElema(L_18, L_19))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		t1088* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		t2506* L_26 = (__this->f5);
		int32_t L_27 = V_4;
		int32_t L_28 = (((t1659 *)(t1659 *)SZArrayLdElema(L_26, L_27))->f1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		t1088* L_32 = (__this->f4);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((t121 *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		t1088* L_33 = V_1;
		__this->f4 = L_33;
		t2506* L_34 = V_2;
		__this->f5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((t1088*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((t1088*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		t1088* L_37 = (__this->f6);
		t1088* L_38 = V_7;
		int32_t L_39 = (__this->f8);
		m7682(NULL, (t121 *)(t121 *)L_37, 0, (t121 *)(t121 *)L_38, 0, L_39, &m7682_MI);
		t1088* L_40 = (__this->f7);
		t1088* L_41 = V_8;
		int32_t L_42 = (__this->f8);
		m7682(NULL, (t121 *)(t121 *)L_40, 0, (t121 *)(t121 *)L_41, 0, L_42, &m7682_MI);
		t1088* L_43 = V_7;
		__this->f6 = L_43;
		t1088* L_44 = V_8;
		__this->f7 = L_44;
		int32_t L_45 = V_0;
		__this->f11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
extern "C" void m24033_gshared (t1266 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1088* L_8 = (__this->f4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_8)->max_length)))));
		t1088* L_9 = (__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		t2506* L_12 = (__this->f5);
		int32_t L_13 = V_2;
		int32_t L_14 = (((t1659 *)(t1659 *)SZArrayLdElema(L_12, L_13))->f0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		t9* L_16 = (__this->f12);
		t1088* L_17 = (__this->f6);
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		int32_t L_20 = p0;
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		t556 * L_22 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_22, (t2*) &_stringLiteral1381, &m2885_MI);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		t2506* L_23 = (__this->f5);
		int32_t L_24 = V_2;
		int32_t L_25 = (((t1659 *)(t1659 *)SZArrayLdElema(L_23, L_24))->f1);
		V_2 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (__this->f10);
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = L_28;
		__this->f10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (__this->f11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_31 = V_0;
		t1088* L_32 = (__this->f4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (__this->f9);
		V_2 = L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (__this->f8);
		int32_t L_36 = L_35;
		V_3 = L_36;
		__this->f8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		t2506* L_38 = (__this->f5);
		int32_t L_39 = V_2;
		int32_t L_40 = (((t1659 *)(t1659 *)SZArrayLdElema(L_38, L_39))->f1);
		__this->f9 = L_40;
	}

IL_00f9:
	{
		t2506* L_41 = (__this->f5);
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		((t1659 *)(t1659 *)SZArrayLdElema(L_41, L_42))->f0 = L_43;
		t2506* L_44 = (__this->f5);
		int32_t L_45 = V_2;
		t1088* L_46 = (__this->f4);
		int32_t L_47 = V_1;
		int32_t L_48 = L_47;
		((t1659 *)(t1659 *)SZArrayLdElema(L_44, L_45))->f1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		t1088* L_49 = (__this->f4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		t1088* L_52 = (__this->f6);
		int32_t L_53 = V_2;
		int32_t L_54 = p0;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		t1088* L_55 = (__this->f7);
		int32_t L_56 = V_2;
		int32_t L_57 = p1;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_55, L_56)) = (int32_t)L_57;
		int32_t L_58 = (__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
extern Il2CppGenericMethod m24034_GM;
extern "C" void m24034_gshared (t1266 * __this, MethodInfo* method)
{
	{
		__this->f10 = 0;
		t1088* L_0 = (__this->f4);
		t1088* L_1 = (__this->f4);
		m1146(NULL, (t121 *)(t121 *)L_0, 0, (((int32_t)(((t121 *)L_1)->max_length))), &m1146_MI);
		t1088* L_2 = (__this->f6);
		t1088* L_3 = (__this->f6);
		m1146(NULL, (t121 *)(t121 *)L_2, 0, (((int32_t)(((t121 *)L_3)->max_length))), &m1146_MI);
		t1088* L_4 = (__this->f7);
		t1088* L_5 = (__this->f7);
		m1146(NULL, (t121 *)(t121 *)L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))), &m1146_MI);
		t2506* L_6 = (__this->f5);
		t2506* L_7 = (__this->f5);
		m1146(NULL, (t121 *)(t121 *)L_6, 0, (((int32_t)(((t121 *)L_7)->max_length))), &m1146_MI);
		__this->f9 = (-1);
		__this->f8 = 0;
		int32_t L_8 = (__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
extern "C" bool m24035_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1088* L_7 = (__this->f4);
		int32_t L_8 = V_0;
		t1088* L_9 = (__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		t2506* L_11 = (__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (((t1659 *)(t1659 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		t9* L_15 = (__this->f12);
		t1088* L_16 = (__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		t2506* L_21 = (__this->f5);
		int32_t L_22 = V_1;
		int32_t L_23 = (((t1659 *)(t1659 *)SZArrayLdElema(L_21, L_22))->f1);
		V_1 = L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24036_GM;
extern TypeInfo* t2976_TI_var;
extern "C" bool m24036_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	static bool m24036_init;
	if (!m24036_init)
	{
		t2976_TI_var = il2cpp_codegen_class_from_type(&t2976_0_0_0);
		m24036_init = true;
	}
	t9* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2976_TI_var);
		t2976 * L_0 = (( t2976 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		t1088* L_1 = (__this->f4);
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		t9* L_4 = V_0;
		t1088* L_5 = (__this->f7);
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		int32_t L_8 = p0;
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		t2506* L_10 = (__this->f5);
		int32_t L_11 = V_2;
		int32_t L_12 = (((t1659 *)(t1659 *)SZArrayLdElema(L_10, L_11))->f1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		t1088* L_16 = (__this->f4);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((t121 *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24037_GM;
extern "C" void m24037_gshared (t1266 * __this, t1093 * p0, t1094  p1, MethodInfo* method)
{
	t4157* V_0 = {0};
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
		int32_t L_3 = (__this->f14);
		m5702(L_2, (t2*) &_stringLiteral420, L_3, &m5702_MI);
		t1093 * L_4 = p0;
		t9* L_5 = (__this->f12);
		m5715(L_4, (t2*) &_stringLiteral422, L_5, &m5715_MI);
		V_0 = (t4157*)NULL;
		int32_t L_6 = (__this->f10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->f10);
		V_0 = ((t4157*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		t4157* L_8 = V_0;
		(( void (*) (t1266 *, t4157*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		t1093 * L_9 = p0;
		t1088* L_10 = (__this->f4);
		m5702(L_9, (t2*) &_stringLiteral1382, (((int32_t)(((t121 *)L_10)->max_length))), &m5702_MI);
		t1093 * L_11 = p0;
		t4157* L_12 = V_0;
		m5715(L_11, (t2*) &_stringLiteral1383, (t9 *)(t9 *)L_12, &m5715_MI);
		return;
	}
}
extern Il2CppGenericMethod m24038_GM;
extern "C" void m24038_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t4157* V_1 = {0};
	int32_t V_2 = 0;
	{
		t1093 * L_0 = (__this->f13);
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
		t1093 * L_1 = (__this->f13);
		int32_t L_2 = m5714(L_1, (t2*) &_stringLiteral420, &m5714_MI);
		__this->f14 = L_2;
		t1093 * L_3 = (__this->f13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_4 = m329(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), &m329_MI);
		t9 * L_5 = m5703(L_3, (t2*) &_stringLiteral422, L_4, &m5703_MI);
		__this->f12 = ((t9*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)));
		t1093 * L_6 = (__this->f13);
		int32_t L_7 = m5714(L_6, (t2*) &_stringLiteral1382, &m5714_MI);
		V_0 = L_7;
		t1093 * L_8 = (__this->f13);
		t126 * L_9 = m329(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), &m329_MI);
		t9 * L_10 = m5703(L_8, (t2*) &_stringLiteral1383, L_9, &m5703_MI);
		V_1 = ((t4157*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (t1266 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->f10 = 0;
		t4157* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		t4157* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((t3809 *)(t3809 *)SZArrayLdElema(L_14, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t4157* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((t3809 *)(t3809 *)SZArrayLdElema(L_17, L_18)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		t4157* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((t121 *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->f13 = (t1093 *)NULL;
		return;
	}
}
extern "C" bool m24039_gshared (t1266 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		t1088* L_8 = (__this->f4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_8)->max_length)))));
		t1088* L_9 = (__this->f4);
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		t2506* L_13 = (__this->f5);
		int32_t L_14 = V_2;
		int32_t L_15 = (((t1659 *)(t1659 *)SZArrayLdElema(L_13, L_14))->f0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		t9* L_17 = (__this->f12);
		t1088* L_18 = (__this->f6);
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = p0;
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		t2506* L_24 = (__this->f5);
		int32_t L_25 = V_2;
		int32_t L_26 = (((t1659 *)(t1659 *)SZArrayLdElema(L_24, L_25))->f1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (__this->f10);
		__this->f10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		t1088* L_31 = (__this->f4);
		int32_t L_32 = V_1;
		t2506* L_33 = (__this->f5);
		int32_t L_34 = V_2;
		int32_t L_35 = (((t1659 *)(t1659 *)SZArrayLdElema(L_33, L_34))->f1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		t2506* L_36 = (__this->f5);
		int32_t L_37 = V_3;
		t2506* L_38 = (__this->f5);
		int32_t L_39 = V_2;
		int32_t L_40 = (((t1659 *)(t1659 *)SZArrayLdElema(L_38, L_39))->f1);
		((t1659 *)(t1659 *)SZArrayLdElema(L_36, L_37))->f1 = L_40;
	}

IL_00e9:
	{
		t2506* L_41 = (__this->f5);
		int32_t L_42 = V_2;
		int32_t L_43 = (__this->f9);
		((t1659 *)(t1659 *)SZArrayLdElema(L_41, L_42))->f1 = L_43;
		int32_t L_44 = V_2;
		__this->f9 = L_44;
		t2506* L_45 = (__this->f5);
		int32_t L_46 = V_2;
		((t1659 *)(t1659 *)SZArrayLdElema(L_45, L_46))->f0 = 0;
		t1088* L_47 = (__this->f6);
		int32_t L_48 = V_2;
		Initobj (InitializedTypeInfo(&t125_TI), (&V_4));
		int32_t L_49 = V_4;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		t1088* L_50 = (__this->f7);
		int32_t L_51 = V_2;
		Initobj (InitializedTypeInfo(&t125_TI), (&V_5));
		int32_t L_52 = V_5;
		*((int32_t*)(int32_t*)SZArrayLdElema(L_50, L_51)) = (int32_t)L_52;
		int32_t L_53 = (__this->f14);
		__this->f14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
extern "C" bool m24040_gshared (t1266 * __this, int32_t p0, int32_t* p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		t9* L_4 = (__this->f12);
		int32_t L_5 = p0;
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		t1088* L_7 = (__this->f4);
		int32_t L_8 = V_0;
		t1088* L_9 = (__this->f4);
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((t121 *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		t2506* L_11 = (__this->f5);
		int32_t L_12 = V_1;
		int32_t L_13 = (((t1659 *)(t1659 *)SZArrayLdElema(L_11, L_12))->f0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		t9* L_15 = (__this->f12);
		t1088* L_16 = (__this->f6);
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		int32_t L_19 = p0;
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t* L_21 = p1;
		t1088* L_22 = (__this->f7);
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		*L_21 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		t2506* L_25 = (__this->f5);
		int32_t L_26 = V_1;
		int32_t L_27 = (((t1659 *)(t1659 *)SZArrayLdElema(L_25, L_26))->f1);
		V_1 = L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_29 = p1;
		Initobj (InitializedTypeInfo(&t125_TI), (&V_2));
		int32_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
extern "C" t3811 * m24041_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3811 * L_0 = (t3811 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (t3811 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
extern "C" t3815 * m24042_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3815 * L_0 = (t3815 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (t3815 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
extern "C" int32_t m24043_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral409, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		t9 * L_2 = p0;
		if (((t9 *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_3 = m329(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), &m329_MI);
		t2* L_4 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m610(NULL, (t2*) &_stringLiteral1384, L_4, &m610_MI);
		t556 * L_6 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_6, L_5, (t2*) &_stringLiteral409, &m5691_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		t9 * L_7 = p0;
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
extern "C" int32_t m24044_gshared (t1266 * __this, t9 * p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_1 = m329(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), &m329_MI);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&m7733_MI, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&t125_TI), (&V_0));
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		t9 * L_4 = p0;
		if (((t9 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t126_TI));
		t126 * L_5 = m329(NULL, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), &m329_MI);
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m7770_MI, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m610(NULL, (t2*) &_stringLiteral1384, L_6, &m610_MI);
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m5691(L_8, L_7, (t2*) &_stringLiteral611, &m5691_MI);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		t9 * L_9 = p0;
		return ((*(int32_t*)((int32_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
extern TypeInfo* t2976_TI_var;
extern "C" bool m24045_gshared (t1266 * __this, t3809  p0, MethodInfo* method)
{
	static bool m24045_init;
	if (!m24045_init)
	{
		t2976_TI_var = il2cpp_codegen_class_from_type(&t2976_0_0_0);
		m24045_init = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(t2976_TI_var);
		t2976 * L_2 = (( t2976 * (*) (t9 * , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		int32_t L_3 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&p0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_4 = V_0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
extern Il2CppGenericMethod m24046_GM;
extern "C" t3813  m24046_gshared (t1266 * __this, MethodInfo* method)
{
	{
		t3813  L_0 = {0};
		(( void (*) (t3813 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
extern "C" t1155  m24047_gshared (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		t1155  L_6 = {0};
		m5686(&L_6, L_2, L_5, &m5686_MI);
		return L_6;
	}
}
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

extern TypeInfo t221_TI;
extern Il2CppType t221_0_0_0;
extern MethodInfo m673_MI;
extern MethodInfo m4269_MI;
extern Il2CppGenericMethod m24050_GM;
extern Il2CppGenericMethod m24052_GM;


extern "C" void m24048_gshared (t3809 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		(( void (*) (t3809 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = p1;
		(( void (*) (t3809 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C" int32_t m24049_gshared (t3809 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m24050_gshared (t3809 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" int32_t m24051_gshared (t3809 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m24052_gshared (t3809 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern Il2CppGenericMethod m24053_GM;
extern TypeInfo* t221_TI_var;
extern "C" t2* m24053_gshared (t3809 * __this, MethodInfo* method)
{
	static bool m24053_init;
	if (!m24053_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m24053_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	t221* G_B2_1 = {0};
	t221* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	t221* G_B1_1 = {0};
	t221* G_B1_2 = {0};
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t221* G_B3_2 = {0};
	t221* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	t221* G_B5_1 = {0};
	t221* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	t221* G_B4_1 = {0};
	t221* G_B4_2 = {0};
	t2* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t221* G_B6_2 = {0};
	t221* G_B6_3 = {0};
	{
		t221* L_0 = ((t221*)SZArrayNew(t221_TI_var, 5));
		ArrayElementTypeCheck (L_0, (t2*) &_stringLiteral344);
		*((t2**)(t2**)SZArrayLdElema(L_0, 0)) = (t2*)(t2*) &_stringLiteral344;
		t221* L_1 = L_0;
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		t9 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_5;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t2**)(t2**)SZArrayLdElema(G_B3_2, G_B3_1)) = (t2*)G_B3_0;
		t221* L_8 = G_B3_3;
		ArrayElementTypeCheck (L_8, (t2*) &_stringLiteral388);
		*((t2**)(t2**)SZArrayLdElema(L_8, 2)) = (t2*)(t2*) &_stringLiteral388;
		t221* L_9 = L_8;
		int32_t L_10 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_11 = L_10;
		t9 * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_13;
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_15 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t2**)(t2**)SZArrayLdElema(G_B6_2, G_B6_1)) = (t2*)G_B6_0;
		t221* L_16 = G_B6_3;
		ArrayElementTypeCheck (L_16, (t2*) &_stringLiteral345);
		*((t2**)(t2**)SZArrayLdElema(L_16, 4)) = (t2*)(t2*) &_stringLiteral345;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_17 = m4269(NULL, L_16, &m4269_MI);
		return L_17;
	}
}
#include "t3810.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3810_TI;
#include "t3810MD.h"

extern Il2CppType t3810_0_0_0;
struct t121;
extern "C" t3809  m27943_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m27943(__this, p0, method) (( t3809  (*) (t121 *, int32_t, MethodInfo*))m27943_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24058_GM;
extern Il2CppGenericMethod m27943_GM;


extern Il2CppGenericMethod m24054_GM;
extern "C" void m24054_gshared (t3810 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24055_GM;
extern "C" t9 * m24055_gshared (t3810 * __this, MethodInfo* method)
{
	{
		t3809  L_0 = (( t3809  (*) (t3810 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3809  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24056_GM;
extern "C" void m24056_gshared (t3810 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24057_GM;
extern "C" bool m24057_gshared (t3810 * __this, MethodInfo* method)
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
extern "C" t3809  m24058_gshared (t3810 * __this, MethodInfo* method)
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
		t3809  L_8 = (( t3809  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4979_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4156_TI;



#ifndef _MSC_VER
#else
#endif

#include "t3812.h"
#include "t3814.h"
extern TypeInfo t3812_TI;
extern TypeInfo t3814_TI;
#include "t3814MD.h"
#include "t3812MD.h"
extern Il2CppType t3812_0_0_0;
extern Il2CppType t3814_0_0_0;
extern MethodInfo m24070_MI;
extern MethodInfo m24029_MI;
extern MethodInfo m24090_MI;
extern MethodInfo m24073_MI;
struct t1266;
extern "C" void m27954_gshared (t1266 * __this, t121 * p0, int32_t p1, t3814 * p2, MethodInfo* method);
#define m27954(__this, p0, p1, p2, method) (( void (*) (t1266 *, t121 *, int32_t, t3814 *, MethodInfo*))m27954_gshared)(__this, p0, p1, p2, method)
struct t1266;
extern "C" void m27955 (t1266 * __this, t1088* p0, int32_t p1, t3814 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m24071_GM;
extern Il2CppGenericMethod m24070_GM;
extern Il2CppGenericMethod m24090_GM;
extern Il2CppGenericMethod m27954_GM;
extern Il2CppGenericMethod m27955_GM;
extern Il2CppGenericMethod m24073_GM;


extern "C" void m24059_gshared (t3811 * __this, t1266 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1266 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1266 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m24060_GM;
extern "C" void m24060_gshared (t3811 * __this, int32_t p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24061_GM;
extern "C" void m24061_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24062_GM;
extern "C" bool m24062_gshared (t3811 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24063_GM;
extern "C" bool m24063_gshared (t3811 * __this, int32_t p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24064_GM;
extern "C" t9* m24064_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t3812  L_0 = (( t3812  (*) (t3811 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t3812  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m24065_GM;
extern "C" void m24065_gshared (t3811 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t1088* V_0 = {0};
	{
		t121 * L_0 = p0;
		V_0 = ((t1088*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t1088* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t1088* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t1088*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		t1266 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1266 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t3814 * L_11 = (t3814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t3814 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1266 *, t121 *, int32_t, t3814 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m24066_GM;
extern "C" t9 * m24066_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t3812  L_0 = (( t3812  (*) (t3811 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t3812  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m24067_GM;
extern "C" bool m24067_gshared (t3811 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m24068_GM;
extern "C" bool m24068_gshared (t3811 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24069_GM;
extern "C" t9 * m24069_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11969_MI, L_0);
		return L_1;
	}
}
extern "C" void m24070_gshared (t3811 * __this, t1088* p0, int32_t p1, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t1088* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1266 * L_3 = (__this->f0);
		t1088* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t3814 * L_7 = (t3814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t3814 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1266 *, t1088*, int32_t, t3814 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t3812  m24071_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t3812  L_1 = {0};
		(( void (*) (t3812 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m24072_GM;
extern "C" int32_t m24072_gshared (t3811 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod m24085_GM;
extern Il2CppGenericMethod m24089_GM;
extern Il2CppGenericMethod m24083_GM;


extern "C" void m24073_gshared (t3812 * __this, t1266 * p0, MethodInfo* method)
{
	{
		t1266 * L_0 = p0;
		t3813  L_1 = (( t3813  (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m24074_GM;
extern "C" t9 * m24074_gshared (t3812 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		int32_t L_1 = (( int32_t (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		t9 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m24075_GM;
extern "C" void m24075_gshared (t3812 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m24076_GM;
extern "C" bool m24076_gshared (t3812 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m24077_GM;
extern "C" int32_t m24077_gshared (t3812 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		t3809 * L_1 = &(L_0->f3);
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t1521.h"
extern TypeInfo t1521_TI;
#include "t1521MD.h"
extern MethodInfo m6883_MI;
extern Il2CppGenericMethod m24088_GM;
extern Il2CppGenericMethod m24086_GM;
extern Il2CppGenericMethod m24087_GM;


extern "C" void m24078_gshared (t3813 * __this, t1266 * p0, MethodInfo* method)
{
	{
		t1266 * L_0 = p0;
		__this->f0 = L_0;
		t1266 * L_1 = p0;
		int32_t L_2 = (L_1->f14);
		__this->f2 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m24079_GM;
extern "C" t9 * m24079_gshared (t3813 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3809  L_0 = (__this->f3);
		t3809  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24080_GM;
extern "C" t1155  m24080_gshared (t3813 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3809 * L_0 = &(__this->f3);
		int32_t L_1 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		t9 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		t3809 * L_4 = &(__this->f3);
		int32_t L_5 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_6 = L_5;
		t9 * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		t1155  L_8 = {0};
		m5686(&L_8, L_3, L_7, &m5686_MI);
		return L_8;
	}
}
extern Il2CppGenericMethod m24081_GM;
extern "C" t9 * m24081_gshared (t3813 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24082_GM;
extern "C" t9 * m24082_gshared (t3813 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
extern "C" bool m24083_gshared (t3813 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->f1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		t1266 * L_4 = (__this->f0);
		t2506* L_5 = (L_4->f5);
		int32_t L_6 = V_0;
		int32_t L_7 = (((t1659 *)(t1659 *)SZArrayLdElema(L_5, L_6))->f0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		t1266 * L_8 = (__this->f0);
		t1088* L_9 = (L_8->f6);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		t1266 * L_12 = (__this->f0);
		t1088* L_13 = (L_12->f7);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		t3809  L_16 = {0};
		(( void (*) (t3809 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->f3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->f1);
		t1266 * L_18 = (__this->f0);
		int32_t L_19 = (L_18->f8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->f1 = (-1);
		return 0;
	}
}
extern Il2CppGenericMethod m24084_GM;
extern "C" t3809  m24084_gshared (t3813 * __this, MethodInfo* method)
{
	{
		t3809  L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" int32_t m24085_gshared (t3813 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3809 * L_0 = &(__this->f3);
		int32_t L_1 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
extern "C" int32_t m24086_gshared (t3813 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t3809 * L_0 = &(__this->f3);
		int32_t L_1 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern "C" void m24087_gshared (t3813 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		t1521 * L_1 = (t1521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1521_TI));
		m6883(L_1, (t2*)NULL, &m6883_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		t1266 * L_2 = (__this->f0);
		int32_t L_3 = (L_2->f14);
		int32_t L_4 = (__this->f2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		t1332 * L_5 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_5, (t2*) &_stringLiteral1385, &m5685_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
extern "C" void m24088_gshared (t3813 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->f1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		t1332 * L_1 = (t1332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t1332_TI));
		m5685(L_1, (t2*) &_stringLiteral404, &m5685_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
extern "C" void m24089_gshared (t3813 * __this, MethodInfo* method)
{
	{
		__this->f0 = (t1266 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m24090_gshared (t3814 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24091_GM;
extern "C" int32_t m24091_gshared (t3814 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24091((t3814 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef int32_t (*FunctionPointerType) (t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m24092_GM;
extern "C" t9 * m24092_gshared (t3814 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m24093_GM;
extern "C" int32_t m24093_gshared (t3814 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

#include "t3816.h"
extern TypeInfo t3816_TI;
#include "t3816MD.h"
extern Il2CppType t3816_0_0_0;
extern MethodInfo m24105_MI;
extern MethodInfo m24030_MI;
extern MethodInfo m24108_MI;
extern Il2CppGenericMethod m24106_GM;
extern Il2CppGenericMethod m24105_GM;
extern Il2CppGenericMethod m24108_GM;


extern "C" void m24094_gshared (t3815 * __this, t1266 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1266 * L_0 = p0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral1379, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		t1266 * L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern Il2CppGenericMethod m24095_GM;
extern "C" void m24095_gshared (t3815 * __this, int32_t p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24096_GM;
extern "C" void m24096_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24097_GM;
extern "C" bool m24097_gshared (t3815 * __this, int32_t p0, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		int32_t L_1 = p0;
		bool L_2 = (( bool (*) (t1266 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
extern Il2CppGenericMethod m24098_GM;
extern "C" bool m24098_gshared (t3815 * __this, int32_t p0, MethodInfo* method)
{
	{
		t169 * L_0 = (t169 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t169_TI));
		m5706(L_0, (t2*) &_stringLiteral1386, &m5706_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern Il2CppGenericMethod m24099_GM;
extern "C" t9* m24099_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t3816  L_0 = (( t3816  (*) (t3815 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t3816  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9*)L_2;
	}
}
extern Il2CppGenericMethod m24100_GM;
extern "C" void m24100_gshared (t3815 * __this, t121 * p0, int32_t p1, MethodInfo* method)
{
	t1088* V_0 = {0};
	{
		t121 * L_0 = p0;
		V_0 = ((t1088*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		t1088* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t1088* L_2 = V_0;
		int32_t L_3 = p1;
		VirtActionInvoker2< t1088*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		t1266 * L_4 = (__this->f0);
		t121 * L_5 = p0;
		int32_t L_6 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1266 * L_7 = (__this->f0);
		t121 * L_8 = p0;
		int32_t L_9 = p1;
		t58 L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t3814 * L_11 = (t3814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t3814 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1266 *, t121 *, int32_t, t3814 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
extern Il2CppGenericMethod m24101_GM;
extern "C" t9 * m24101_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t3816  L_0 = (( t3816  (*) (t3815 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		t3816  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (t9 *)L_2;
	}
}
extern Il2CppGenericMethod m24102_GM;
extern "C" bool m24102_gshared (t3815 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern Il2CppGenericMethod m24103_GM;
extern "C" bool m24103_gshared (t3815 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern Il2CppGenericMethod m24104_GM;
extern "C" t9 * m24104_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t9 * L_1 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m11969_MI, L_0);
		return L_1;
	}
}
extern "C" void m24105_gshared (t3815 * __this, t1088* p0, int32_t p1, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t1088* L_1 = p0;
		int32_t L_2 = p1;
		(( void (*) (t1266 *, t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (t121 *)(t121 *)L_1, L_2, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		t1266 * L_3 = (__this->f0);
		t1088* L_4 = p0;
		int32_t L_5 = p1;
		t58 L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		t3814 * L_7 = (t3814 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (t3814 *, t9 *, t58, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (t1266 *, t1088*, int32_t, t3814 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
extern "C" t3816  m24106_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		t3816  L_1 = {0};
		(( void (*) (t3816 *, t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
extern Il2CppGenericMethod m24107_GM;
extern "C" int32_t m24107_gshared (t3815 * __this, MethodInfo* method)
{
	{
		t1266 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m24108_gshared (t3816 * __this, t1266 * p0, MethodInfo* method)
{
	{
		t1266 * L_0 = p0;
		t3813  L_1 = (( t3813  (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m24109_GM;
extern "C" t9 * m24109_gshared (t3816 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		int32_t L_1 = (( int32_t (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		t9 * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m24110_GM;
extern "C" void m24110_gshared (t3816 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		(( void (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
extern Il2CppGenericMethod m24111_GM;
extern "C" bool m24111_gshared (t3816 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
extern Il2CppGenericMethod m24112_GM;
extern "C" int32_t m24112_gshared (t3816 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		t3809 * L_1 = &(L_0->f3);
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m24113_gshared (t3808 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24114_GM;
extern "C" t1155  m24114_gshared (t3808 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24114((t3808 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1155  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t1155  (*FunctionPointerType) (t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m24115_GM;
extern "C" t9 * m24115_gshared (t3808 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m24116_GM;
extern "C" t1155  m24116_gshared (t3808 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t1155 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



extern "C" void m24117_gshared (t3817 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern Il2CppGenericMethod m24118_GM;
extern "C" t3809  m24118_gshared (t3817 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m24118((t3817 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t3809  (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	typedef t3809  (*FunctionPointerType) (t9 * __this, int32_t p0, int32_t p1, MethodInfo* method);
	return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
}
extern Il2CppGenericMethod m24119_GM;
extern "C" t9 * m24119_gshared (t3817 * __this, int32_t p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	__d_args[1] = Box(InitializedTypeInfo(&t125_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern Il2CppGenericMethod m24120_GM;
extern "C" t3809  m24120_gshared (t3817 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(t3809 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m24123_MI;
extern Il2CppGenericMethod m24123_GM;


extern "C" void m24121_gshared (t3818 * __this, t1266 * p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t1266 * L_0 = p0;
		t3813  L_1 = (( t3813  (*) (t1266 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->f0 = L_1;
		return;
	}
}
extern Il2CppGenericMethod m24122_GM;
extern "C" bool m24122_gshared (t3818 * __this, MethodInfo* method)
{
	{
		t3813 * L_0 = &(__this->f0);
		bool L_1 = (( bool (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
extern "C" t1155  m24123_gshared (t3818 * __this, MethodInfo* method)
{
	{
		t3813  L_0 = (__this->f0);
		t3813  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		t1155  L_3 = (t1155 )InterfaceFuncInvoker0< t1155  >::Invoke(&m11972_MI, L_2);
		return L_3;
	}
}
extern Il2CppGenericMethod m24124_GM;
extern "C" t9 * m24124_gshared (t3818 * __this, MethodInfo* method)
{
	t3809  V_0 = {0};
	{
		t3813 * L_0 = &(__this->f0);
		t3809  L_1 = (( t3809  (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		t9 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
extern Il2CppGenericMethod m24125_GM;
extern "C" t9 * m24125_gshared (t3818 * __this, MethodInfo* method)
{
	t3809  V_0 = {0};
	{
		t3813 * L_0 = &(__this->f0);
		t3809  L_1 = (( t3809  (*) (t3813 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (t3809 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		t9 * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
extern Il2CppGenericMethod m24126_GM;
extern "C" t9 * m24126_gshared (t3818 * __this, MethodInfo* method)
{
	{
		t1155  L_0 = (t1155 )VirtFuncInvoker0< t1155  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		t1155  L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t1155_TI), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2646_TI;



#include "t3819.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3819_TI;
#include "t3819MD.h"

#include "t3820.h"
extern TypeInfo t152_TI;
extern TypeInfo t3820_TI;
#include "t1338MD.h"
#include "t3820MD.h"
extern Il2CppType t3819_0_0_0;
extern Il2CppType t2194_0_0_0;
extern Il2CppType t2436_0_0_0;
extern Il2CppType t152_0_0_0;
extern Il2CppType t3820_0_0_0;
extern MethodInfo m4449_MI;
extern MethodInfo m4447_MI;
extern MethodInfo m11083_MI;
extern MethodInfo m24131_MI;
extern MethodInfo m29458_MI;
extern MethodInfo m11109_MI;
extern Il2CppGenericMethod m24131_GM;
extern Il2CppGenericMethod m29458_GM;


extern Il2CppGenericMethod m24127_GM;
extern "C" void m24127_gshared (t3819 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern Il2CppGenericMethod m24128_GM;
extern "C" void m24128_gshared (t9 * __this , MethodInfo* method)
{
	t3820 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (t3820 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (t3820 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((t3819_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
extern Il2CppGenericMethod m24129_GM;
extern "C" int32_t m24129_gshared (t3819 * __this, t9 * p0, t9 * p1, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		t9 * L_1 = p1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		t9 * L_2 = p1;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		t9 * L_3 = p0;
		if (!((t9 *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		t9 * L_4 = p1;
		if (!((t9 *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		t9 * L_5 = p0;
		t9 * L_6 = p1;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		t556 * L_8 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m11109(L_8, &m11109_MI);
		il2cpp_codegen_raise_exception(L_8);
	}
}
extern Il2CppGenericMethod m24130_GM;
extern "C" t3819 * m24130_gshared (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		t3819 * L_0 = ((t3819_SFs*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->f0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t2194_TI;
extern TypeInfo t185_TI;
extern MethodInfo m29459_MI;
extern MethodInfo m11940_MI;
extern Il2CppGenericMethod m29459_GM;


extern "C" void m24131_gshared (t3820 * __this, MethodInfo* method)
{
	{
		(( void (*) (t3819 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
extern Il2CppGenericMethod m24132_GM;
extern "C" int32_t m24132_gshared (t3820 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = p1;
		int32_t L_4 = L_3;
		t9 * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
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
		int32_t L_6 = p1;
		int32_t L_7 = L_6;
		t9 * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_9 = p0;
		int32_t L_10 = L_9;
		t9 * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((t9*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = p0;
		int32_t L_13 = L_12;
		t9 * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = p1;
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((t9*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = p0;
		int32_t L_18 = L_17;
		t9 * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((t9 *)IsInst(L_19, InitializedTypeInfo(&t185_TI))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = p0;
		int32_t L_21 = L_20;
		t9 * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = p1;
		int32_t L_24 = L_23;
		t9 * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, t9 * >::Invoke(&m11940_MI, ((t9 *)Castclass(L_22, InitializedTypeInfo(&t185_TI))), L_25);
		return L_26;
	}

IL_0062:
	{
		t556 * L_27 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_27, (t2*) &_stringLiteral1378, &m2885_MI);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4980_TI;

#include "t1284.h"


#include "t3821.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3821_TI;
#include "t3821MD.h"

extern TypeInfo t1284_TI;
extern Il2CppType t3821_0_0_0;
struct t121;
extern "C" t1284  m27963_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m27963(__this, p0, method) (( t1284  (*) (t121 *, int32_t, MethodInfo*))m27963_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24137_GM;
extern Il2CppGenericMethod m27963_GM;


extern Il2CppGenericMethod m24133_GM;
extern "C" void m24133_gshared (t3821 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24134_GM;
extern "C" t9 * m24134_gshared (t3821 * __this, MethodInfo* method)
{
	{
		t1284  L_0 = (( t1284  (*) (t3821 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1284  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24135_GM;
extern "C" void m24135_gshared (t3821 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24136_GM;
extern "C" bool m24136_gshared (t3821 * __this, MethodInfo* method)
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
extern "C" t1284  m24137_gshared (t3821 * __this, MethodInfo* method)
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
		t1284  L_8 = (( t1284  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4981_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4982_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4983_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4984_TI;

#include "t1320.h"


#include "t3822.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3822_TI;
#include "t3822MD.h"

extern TypeInfo t1320_TI;
extern Il2CppType t3822_0_0_0;
struct t121;
extern "C" t1320  m27974_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m27974(__this, p0, method) (( t1320  (*) (t121 *, int32_t, MethodInfo*))m27974_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24142_GM;
extern Il2CppGenericMethod m27974_GM;


extern Il2CppGenericMethod m24138_GM;
extern "C" void m24138_gshared (t3822 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24139_GM;
extern "C" t9 * m24139_gshared (t3822 * __this, MethodInfo* method)
{
	{
		t1320  L_0 = (( t1320  (*) (t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		t1320  L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24140_GM;
extern "C" void m24140_gshared (t3822 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24141_GM;
extern "C" bool m24141_gshared (t3822 * __this, MethodInfo* method)
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
extern "C" t1320  m24142_gshared (t3822 * __this, MethodInfo* method)
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
		t1320  L_8 = (( t1320  (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4985_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4986_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4987_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4988_TI;

#include "t168.h"


#include "t3823.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3823_TI;
#include "t3823MD.h"

extern TypeInfo t168_TI;
extern Il2CppType t3823_0_0_0;
struct t121;
extern "C" uint32_t m27985_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m27985(__this, p0, method) (( uint32_t (*) (t121 *, int32_t, MethodInfo*))m27985_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24147_GM;
extern Il2CppGenericMethod m27985_GM;


extern Il2CppGenericMethod m24143_GM;
extern "C" void m24143_gshared (t3823 * __this, t121 * p0, MethodInfo* method)
{
	{
		t121 * L_0 = p0;
		__this->f0 = L_0;
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24144_GM;
extern "C" t9 * m24144_gshared (t3823 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (t3823 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		t9 * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
extern Il2CppGenericMethod m24145_GM;
extern "C" void m24145_gshared (t3823 * __this, MethodInfo* method)
{
	{
		__this->f1 = ((int32_t)-2);
		return;
	}
}
extern Il2CppGenericMethod m24146_GM;
extern "C" bool m24146_gshared (t3823 * __this, MethodInfo* method)
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
extern "C" uint32_t m24147_gshared (t3823 * __this, MethodInfo* method)
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
		uint32_t L_8 = (( uint32_t (*) (t121 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4989_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4990_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4991_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4992_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4993_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4994_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2204_TI;



#include "t3824.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3824_TI;
#include "t3824MD.h"

extern Il2CppType t3824_0_0_0;
extern Il2CppType t2204_0_0_0;
struct t121;
#define m27996(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24152_GM;
extern Il2CppGenericMethod m27996_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4995_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4996_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4997_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4998_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2205_TI;



#include "t3825.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3825_TI;
#include "t3825MD.h"

extern Il2CppType t3825_0_0_0;
extern Il2CppType t2205_0_0_0;
struct t121;
#define m28007(__this, p0, method) (( t9* (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24157_GM;
extern Il2CppGenericMethod m28007_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4999_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5000_TI;

#include "t1400.h"


#include "t3826.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3826_TI;
#include "t3826MD.h"

extern TypeInfo t1400_TI;
extern Il2CppType t3826_0_0_0;
struct t121;
#define m28018(__this, p0, method) (( t1400 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24162_GM;
extern Il2CppGenericMethod m28018_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5001_TI;

#include "Mono.Security_ArrayTypes.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5002_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5003_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5004_TI;

#include "t1520.h"


#include "t3827.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3827_TI;
#include "t3827MD.h"

extern TypeInfo t1520_TI;
extern Il2CppType t3827_0_0_0;
struct t121;
#define m28029(__this, p0, method) (( t1520 * (*) (t121 *, int32_t, MethodInfo*))m24739_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24167_GM;
extern Il2CppGenericMethod m28029_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5005_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5006_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5007_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5008_TI;

#include "t1493.h"


#include "t3828.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t3828_TI;
#include "t3828MD.h"

extern TypeInfo t1493_TI;
extern Il2CppType t3828_0_0_0;
struct t121;
struct t121;
extern "C" int32_t m24937_gshared (t121 * __this, int32_t p0, MethodInfo* method);
#define m24937(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m24937_gshared)(__this, p0, method)
#define m28040(__this, p0, method) (( int32_t (*) (t121 *, int32_t, MethodInfo*))m24937_gshared)(__this, p0, method)
extern Il2CppGenericMethod m24172_GM;
extern Il2CppGenericMethod m28040_GM;


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5009_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5010_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t5011_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2212_TI;

#include "t186.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2213_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2215_TI;

#include "t327.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2216_TI;



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2243_TI;

#include "t897.h"


#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2244_TI;



#ifdef __clang__
#pragma clang diagnostic pop
#endif
