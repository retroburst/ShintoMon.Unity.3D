#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t688.h"
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
extern TypeInfo t688_TI;
#include "t688MD.h"


#include "t121.h"

#include "t689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t689_TI;
#include "t689MD.h"

#include "t690.h"
#include "t122.h"
#include "t173MD.h"
extern MethodInfo m3627_MI;


extern MethodInfo m3172_MI;
extern "C" void m3172 (t689 * __this, MethodInfo* method)
{
	{
		m3627(__this, &m3627_MI);
		return;
	}
}
extern MethodInfo m3173_MI;
extern "C" t690 * m3173 (t689 * __this, MethodInfo* method)
{
	typedef t690 * (*m3173_ftn) (t689 *);
	static m3173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3174_MI;
extern "C" void m3174 (t689 * __this, MethodInfo* method)
{
	typedef void (*m3174_ftn) (t689 *);
	static m3174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
#include "t691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t691_TI;
#include "t691MD.h"

#include "t57.h"
#include "t2.h"
#include "t126.h"
#include "UnityEngine_ArrayTypes.h"
#include "t690MD.h"
extern MethodInfo m3178_MI;
extern MethodInfo m3180_MI;


extern MethodInfo m3175_MI;
extern "C" void m3175 (t691 * __this, MethodInfo* method)
{
	{
		m3627(__this, &m3627_MI);
		return;
	}
}
extern MethodInfo m3176_MI;
extern "C" t57 * m3176 (t691 * __this, MethodInfo* method)
{
	{
		t690 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t57 * L_3 = m3178(L_0, L_1, L_2, &m3178_MI);
		return L_3;
	}
}
extern MethodInfo m3177_MI;
extern "C" t131* m3177 (t691 * __this, MethodInfo* method)
{
	{
		t690 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t131* L_3 = m3180(L_0, L_1, L_2, &m3180_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t690_TI;

#include "t885.h"
#include "t125.h"
#include "t570.h"
extern TypeInfo t885_TI;
extern TypeInfo t570_TI;
#include "t885MD.h"
#include "t2MD.h"
#include "t570MD.h"
extern MethodInfo m4269_MI;
extern MethodInfo m2763_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m3179_MI;


extern "C" t57 * m3178 (t690 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t885 * L_1 = (t885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t885_TI));
		m4269(L_1, (t2*) &_stringLiteral152, &m4269_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2763(L_2, &m2763_MI);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		t570 * L_4 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_4, (t2*) &_stringLiteral153, &m2949_MI);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0027:
	{
		t126 * L_5 = p1;
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		t885 * L_6 = (t885 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t885_TI));
		m4269(L_6, (t2*) &_stringLiteral154, &m4269_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t2* L_7 = p0;
		t126 * L_8 = p1;
		t57 * L_9 = m3179(__this, L_7, L_8, &m3179_MI);
		return L_9;
	}
}
extern "C" t57 * m3179 (t690 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3179_ftn) (t690 *, t2*, t126 *);
	static m3179_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3179_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t131* m3180 (t690 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t131* (*m3180_ftn) (t690 *, t2*, t126 *);
	static m3180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t177_TI;
#include "t177MD.h"



#include "t67.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t67_TI;
#include "t67MD.h"



#include "t42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t42_TI;
#include "t42MD.h"

#include "mscorlib_ArrayTypes.h"
extern MethodInfo m434_MI;


extern MethodInfo m489_MI;
extern "C" int32_t m489 (t42 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3181_MI;
extern "C" void m3181 (t42 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3182_MI;
extern "C" t2* m3182 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m3182_ftn) (int32_t);
	static m3182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m434 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m434_ftn) (t2*);
	static m434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::NameToLayer(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3183_MI;
extern "C" int32_t m3183 (t9 * __this , t221* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	t2* V_1 = {0};
	t221* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		t221* L_0 = p0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		t221* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		V_1 = (*(t2**)(t2**)SZArrayLdElema(L_1, L_3));
		t2* L_4 = V_1;
		int32_t L_5 = m434(NULL, L_4, &m434_MI);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_4;
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_002b:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_3;
		t221* L_11 = V_2;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((t121 *)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
extern MethodInfo m433_MI;
extern "C" int32_t m433 (t9 * __this , t42  p0, MethodInfo* method)
{
	{
		int32_t L_0 = ((&p0)->f0);
		return L_0;
	}
}
extern MethodInfo m482_MI;
extern "C" t42  m482 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t42  V_0 = {0};
	{
		int32_t L_0 = p0;
		(&V_0)->f0 = L_0;
		t42  L_1 = V_0;
		return L_1;
	}
}
#include "t311.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t311_TI;
#include "t311MD.h"



#include "t692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t692_TI;
#include "t692MD.h"



#include "t161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t161_TI;
#include "t161MD.h"

#include "t124.h"
#include "t162.h"


extern MethodInfo m517_MI;
extern "C" bool m517 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m517_ftn) ();
	static m517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_supportsRenderTextures()");
	return _il2cpp_icall_func();
}
extern MethodInfo m527_MI;
extern "C" bool m527 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m527_ftn) (int32_t);
	static m527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3184_MI;
extern "C" t2* m3184 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3184_ftn) ();
	static m3184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
#include "t176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t176_TI;
#include "t176MD.h"

#include "t123.h"
#include "t693MD.h"
extern MethodInfo m3751_MI;


extern MethodInfo m596_MI;
extern "C" void m596 (t176 * __this, float p0, MethodInfo* method)
{
	{
		m3751(__this, &m3751_MI);
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
void t176_marshal(const t176& unmarshaled, t176_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t176_marshal_back(const t176_marshaled& marshaled, t176& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
void t176_marshal_cleanup(t176_marshaled& marshaled)
{
}
#include "t175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t175_TI;
#include "t175MD.h"



extern MethodInfo m595_MI;
extern "C" void m595 (t175 * __this, MethodInfo* method)
{
	{
		m3751(__this, &m3751_MI);
		return;
	}
}
#include "t172.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t172_TI;
#include "t172MD.h"



extern MethodInfo m589_MI;
extern "C" void m589 (t172 * __this, MethodInfo* method)
{
	{
		m3751(__this, &m3751_MI);
		return;
	}
}
#include "t171.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t171_TI;
#include "t171MD.h"

#include "t9.h"
extern TypeInfo t9_TI;
extern TypeInfo t122_TI;
#include "t9MD.h"
extern MethodInfo m3186_MI;
extern MethodInfo m646_MI;


extern MethodInfo m3185_MI;
extern "C" void m3185 (t171 * __this, MethodInfo* method)
{
	{
		m3751(__this, &m3751_MI);
		return;
	}
}
extern "C" void m3186 (t171 * __this, MethodInfo* method)
{
	typedef void (*m3186_ftn) (t171 *);
	static m3186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3187_MI;
extern "C" void m3187 (t171 * __this, MethodInfo* method)
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
		m3186(__this, &m3186_MI);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Coroutine
void t171_marshal(const t171& unmarshaled, t171_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t171_marshal_back(const t171_marshaled& marshaled, t171& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Coroutine
void t171_marshal_cleanup(t171_marshaled& marshaled)
{
}
#include "t694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t694_TI;
#include "t694MD.h"

#include "t57MD.h"
extern MethodInfo m3705_MI;
extern MethodInfo m3189_MI;
extern MethodInfo m3192_MI;


extern MethodInfo m3188_MI;
extern "C" void m3188 (t694 * __this, MethodInfo* method)
{
	{
		m3705(__this, &m3705_MI);
		m3189(NULL, __this, &m3189_MI);
		return;
	}
}
extern "C" void m3189 (t9 * __this , t694 * p0, MethodInfo* method)
{
	typedef void (*m3189_ftn) (t694 *);
	static m3189_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3189_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3190_MI;
extern "C" t694 * m3190 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t694 * (*m3190_ftn) (t2*);
	static m3190_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3190_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3191_MI;
extern "C" t694 * m3191 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t694 * L_1 = m3192(NULL, L_0, &m3192_MI);
		return L_1;
	}
}
extern "C" t694 * m3192 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t694 * (*m3192_ftn) (t126 *);
	static m3192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void t694_marshal(const t694& unmarshaled, t694_marshaled& marshaled)
{
}
void t694_marshal_back(const t694_marshaled& marshaled, t694& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void t694_marshal_cleanup(t694_marshaled& marshaled)
{
}
#include "t159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t159_TI;
#include "t159MD.h"

#include "t695.h"


extern MethodInfo m486_MI;
extern "C" int32_t m486 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m486_ftn) ();
	static m486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_pixelLightCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m487_MI;
extern "C" void m487 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m487_ftn) (int32_t);
	static m487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::set_pixelLightCount(System.Int32)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m586_MI;
extern "C" void m586 (t9 * __this , float p0, MethodInfo* method)
{
	typedef void (*m586_ftn) (float);
	static m586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::set_shadowDistance(System.Single)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3193_MI;
extern "C" int32_t m3193 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3193_ftn) ();
	static m3193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_activeColorSpace()");
	return _il2cpp_icall_func();
}
#include "t36.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t36_TI;
#include "t36MD.h"

#include "t13.h"


extern MethodInfo m419_MI;
extern "C" t37* m419 (t36 * __this, MethodInfo* method)
{
	typedef t37* (*m419_ftn) (t36 *);
	static m419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_vertices()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m421_MI;
extern "C" void m421 (t36 * __this, t37* p0, MethodInfo* method)
{
	typedef void (*m421_ftn) (t36 *, t37*);
	static m421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m420_MI;
extern "C" t37* m420 (t36 * __this, MethodInfo* method)
{
	typedef t37* (*m420_ftn) (t36 *);
	static m420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::get_normals()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m422_MI;
extern "C" void m422 (t36 * __this, t37* p0, MethodInfo* method)
{
	typedef void (*m422_ftn) (t36 *, t37*);
	static m422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])");
	_il2cpp_icall_func(__this, p0);
}
#include "t696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t696_TI;
#include "t696MD.h"

#include "t47.h"
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t47_TI;
#include "t125MD.h"
#include "t123MD.h"
#include "t47MD.h"
extern MethodInfo m3202_MI;
extern MethodInfo m4270_MI;
extern MethodInfo m3204_MI;
extern MethodInfo m3206_MI;
extern MethodInfo m3208_MI;
extern MethodInfo m3194_MI;
extern MethodInfo m4271_MI;
extern MethodInfo m3196_MI;
extern MethodInfo m3198_MI;
extern MethodInfo m3200_MI;
extern MethodInfo m4272_MI;
extern MethodInfo m413_MI;
extern MethodInfo m3531_MI;
extern MethodInfo m3535_MI;
extern MethodInfo m3212_MI;


extern "C" float m3194 (t696 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3195_MI;
extern "C" void m3195 (t696 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m3196 (t696 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3197_MI;
extern "C" void m3197 (t696 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3198 (t696 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3199_MI;
extern "C" void m3199 (t696 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m3200 (t696 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3201_MI;
extern "C" void m3201 (t696 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3202 (t696 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3203_MI;
extern "C" void m3203 (t696 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m3204 (t696 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3205_MI;
extern "C" void m3205 (t696 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" int32_t m3206 (t696 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3207_MI;
extern "C" void m3207 (t696 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" int32_t m3208 (t696 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3209_MI;
extern "C" void m3209 (t696 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3210_MI;
extern "C" int32_t m3210 (t696 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		int32_t L_0 = m3202(__this, &m3202_MI);
		V_0 = L_0;
		int32_t L_1 = m4270((&V_0), &m4270_MI);
		int32_t L_2 = m3204(__this, &m3204_MI);
		V_1 = L_2;
		int32_t L_3 = m4270((&V_1), &m4270_MI);
		int32_t L_4 = m3206(__this, &m3206_MI);
		V_2 = L_4;
		int32_t L_5 = m4270((&V_2), &m4270_MI);
		int32_t L_6 = m3208(__this, &m3208_MI);
		V_3 = L_6;
		int32_t L_7 = m4270((&V_3), &m4270_MI);
		float L_8 = m3194(__this, &m3194_MI);
		V_4 = L_8;
		int32_t L_9 = m4271((&V_4), &m4271_MI);
		float L_10 = m3196(__this, &m3196_MI);
		V_5 = L_10;
		int32_t L_11 = m4271((&V_5), &m4271_MI);
		float L_12 = m3198(__this, &m3198_MI);
		V_6 = L_12;
		int32_t L_13 = m4271((&V_6), &m4271_MI);
		float L_14 = m3200(__this, &m3200_MI);
		V_7 = L_14;
		int32_t L_15 = m4271((&V_7), &m4271_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
extern MethodInfo m3211_MI;
extern "C" bool m3211 (t696 * __this, t9 * p0, MethodInfo* method)
{
	t696  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t47  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t696_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t696 *)((t696 *)UnBox (L_1, InitializedTypeInfo(&t696_TI)))));
		int32_t L_2 = m3202(__this, &m3202_MI);
		V_1 = L_2;
		int32_t L_3 = m3202((&V_0), &m3202_MI);
		bool L_4 = m4272((&V_1), L_3, &m4272_MI);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = m3204(__this, &m3204_MI);
		V_2 = L_5;
		int32_t L_6 = m3204((&V_0), &m3204_MI);
		bool L_7 = m4272((&V_2), L_6, &m4272_MI);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = m3206(__this, &m3206_MI);
		V_3 = L_8;
		int32_t L_9 = m3206((&V_0), &m3206_MI);
		bool L_10 = m4272((&V_3), L_9, &m4272_MI);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = m3208(__this, &m3208_MI);
		V_4 = L_11;
		int32_t L_12 = m3208((&V_0), &m3208_MI);
		bool L_13 = m4272((&V_4), L_12, &m4272_MI);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = m3194(__this, &m3194_MI);
		float L_15 = m3196(__this, &m3196_MI);
		float L_16 = m3198(__this, &m3198_MI);
		float L_17 = m3200(__this, &m3200_MI);
		m413((&V_5), L_14, L_15, L_16, L_17, &m413_MI);
		float L_18 = m3194((&V_0), &m3194_MI);
		float L_19 = m3196((&V_0), &m3196_MI);
		float L_20 = m3198((&V_0), &m3198_MI);
		float L_21 = m3200((&V_0), &m3200_MI);
		t47  L_22 = {0};
		m413(&L_22, L_18, L_19, L_20, L_21, &m413_MI);
		t47  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t47_TI), &L_23);
		bool L_25 = m3531((&V_5), L_24, &m3531_MI);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B8_0 = 0;
	}

IL_00cc:
	{
		return G_B8_0;
	}
}
extern "C" bool m3212 (t9 * __this , t696  p0, t696  p1, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = m3202((&p0), &m3202_MI);
		int32_t L_1 = m3202((&p1), &m3202_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = m3204((&p0), &m3204_MI);
		int32_t L_3 = m3204((&p1), &m3204_MI);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = m3206((&p0), &m3206_MI);
		int32_t L_5 = m3206((&p1), &m3206_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = m3208((&p0), &m3208_MI);
		int32_t L_7 = m3208((&p1), &m3208_MI);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = m3194((&p0), &m3194_MI);
		float L_9 = m3196((&p0), &m3196_MI);
		float L_10 = m3198((&p0), &m3198_MI);
		float L_11 = m3200((&p0), &m3200_MI);
		t47  L_12 = {0};
		m413(&L_12, L_8, L_9, L_10, L_11, &m413_MI);
		float L_13 = m3194((&p1), &m3194_MI);
		float L_14 = m3196((&p1), &m3196_MI);
		float L_15 = m3198((&p1), &m3198_MI);
		float L_16 = m3200((&p1), &m3200_MI);
		t47  L_17 = {0};
		m413(&L_17, L_13, L_14, L_15, L_16, &m413_MI);
		bool L_18 = m3535(NULL, L_12, L_17, &m3535_MI);
		G_B6_0 = ((int32_t)(L_18));
		goto IL_0096;
	}

IL_0095:
	{
		G_B6_0 = 0;
	}

IL_0096:
	{
		return G_B6_0;
	}
}
extern MethodInfo m3213_MI;
extern "C" bool m3213 (t9 * __this , t696  p0, t696  p1, MethodInfo* method)
{
	{
		t696  L_0 = p0;
		t696  L_1 = p1;
		bool L_2 = m3212(NULL, L_0, L_1, &m3212_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t144_TI;
#include "t144MD.h"

#include "t40.h"


extern MethodInfo m484_MI;
extern "C" bool m484 (t144 * __this, MethodInfo* method)
{
	typedef bool (*m484_ftn) (t144 *);
	static m484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_enabled()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m407_MI;
extern "C" t40 * m407 (t144 * __this, MethodInfo* method)
{
	typedef t40 * (*m407_ftn) (t144 *);
	static m407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sharedMaterial()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2593_MI;
extern "C" int32_t m2593 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2593_ftn) (t144 *);
	static m2593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2594_MI;
extern "C" int32_t m2594 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2594_ftn) (t144 *);
	static m2594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
#include "t149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t149_TI;
#include "t149MD.h"



extern MethodInfo m452_MI;
extern "C" t40 * m452 (t149 * __this, MethodInfo* method)
{
	typedef t40 * (*m452_ftn) (t149 *);
	static m452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Skybox::get_material()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m453_MI;
extern "C" void m453 (t149 * __this, t40 * p0, MethodInfo* method)
{
	typedef void (*m453_ftn) (t149 *, t40 *);
	static m453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Skybox::set_material(UnityEngine.Material)");
	_il2cpp_icall_func(__this, p0);
}
#include "t140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t140_TI;
#include "t140MD.h"



extern MethodInfo m385_MI;
extern "C" int32_t m385 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m385_ftn) ();
	static m385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	return _il2cpp_icall_func();
}
extern MethodInfo m621_MI;
extern "C" int32_t m621 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m621_ftn) ();
	static m621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2963_MI;
extern "C" float m2963 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2963_ftn) ();
	static m2963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2963_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	return _il2cpp_icall_func();
}
#include "t153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t153_TI;
#include "t153MD.h"



extern MethodInfo m454_MI;
extern "C" void m454 (t9 * __this , bool p0, MethodInfo* method)
{
	typedef void (*m454_ftn) (bool);
	static m454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GL::set_invertCulling(System.Boolean)");
	_il2cpp_icall_func(p0);
}
#include "t148.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t148_TI;
#include "t148MD.h"

#include "t138.h"
extern TypeInfo t138_TI;
#include "t138MD.h"
extern MethodInfo m3215_MI;
extern MethodInfo m379_MI;
extern MethodInfo m3216_MI;


extern MethodInfo m3214_MI;
extern "C" void m3214 (t148 * __this, MethodInfo* method)
{
	{
		m3705(__this, &m3705_MI);
		return;
	}
}
extern "C" int32_t m3215 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3215_ftn) (t148 *);
	static m3215_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3215_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m3216 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3216_ftn) (t148 *);
	static m3216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2744_MI;
extern "C" int32_t m2744 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3215(NULL, __this, &m3215_MI);
		return L_0;
	}
}
extern MethodInfo m3217_MI;
extern "C" void m3217 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral155, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m2746_MI;
extern "C" int32_t m2746 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3216(NULL, __this, &m3216_MI);
		return L_0;
	}
}
extern MethodInfo m3218_MI;
extern "C" void m3218 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral155, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t439.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t439_TI;
#include "t439MD.h"

#include "t43.h"


extern MethodInfo m2650_MI;
extern "C" t439 * m2650 (t9 * __this , MethodInfo* method)
{
	typedef t439 * (*m2650_ftn) ();
	static m2650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2747_MI;
extern "C" t43  m2747 (t439 * __this, float p0, float p1, MethodInfo* method)
{
	typedef t43  (*m2747_ftn) (t439 *, float, float);
	static m2747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t44_TI;
#include "t44MD.h"

extern MethodInfo m3220_MI;
extern MethodInfo m3221_MI;
extern MethodInfo m3222_MI;
extern MethodInfo m3223_MI;
extern MethodInfo m3219_MI;
extern MethodInfo m3226_MI;
extern MethodInfo m3228_MI;
extern MethodInfo m3229_MI;
extern MethodInfo m3230_MI;
extern MethodInfo m3224_MI;


extern MethodInfo m441_MI;
extern "C" void m441 (t44 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m3214(__this, &m3214_MI);
		m3219(NULL, __this, &m3219_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3226_MI, __this, L_0);
		int32_t L_1 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3228_MI, __this, L_1);
		int32_t L_2 = p2;
		m3229(__this, L_2, &m3229_MI);
		m3230(__this, 7, &m3230_MI);
		int32_t L_3 = m3193(NULL, &m3193_MI);
		m3224(NULL, __this, ((((int32_t)L_3) == ((int32_t)1))? 1 : 0), &m3224_MI);
		return;
	}
}
extern "C" void m3219 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef void (*m3219_ftn) (t44 *);
	static m3219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(p0);
}
extern "C" int32_t m3220 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3220_ftn) (t44 *);
	static m3220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3221 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3221_ftn) (t44 *, int32_t);
	static m3221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m3222 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3222_ftn) (t44 *);
	static m3222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3223 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3223_ftn) (t44 *, int32_t);
	static m3223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3224 (t9 * __this , t44 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3224_ftn) (t44 *, bool);
	static m3224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3225_MI;
extern "C" int32_t m3225 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3220(NULL, __this, &m3220_MI);
		return L_0;
	}
}
extern "C" void m3226 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3221(NULL, __this, L_0, &m3221_MI);
		return;
	}
}
extern MethodInfo m3227_MI;
extern "C" int32_t m3227 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3222(NULL, __this, &m3222_MI);
		return L_0;
	}
}
extern "C" void m3228 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3223(NULL, __this, L_0, &m3223_MI);
		return;
	}
}
extern "C" void m3229 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3229_ftn) (t44 *, int32_t);
	static m3229_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3229_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_depth(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m513_MI;
extern "C" void m513 (t44 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m513_ftn) (t44 *, bool);
	static m513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3230 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3230_ftn) (t44 *, int32_t);
	static m3230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)");
	_il2cpp_icall_func(__this, p0);
}
#include "t697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t697_TI;
#include "t697MD.h"



#include "t698.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t698_TI;
#include "t698MD.h"



#include "t197.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t197_TI;
#include "t197MD.h"



#include "t699.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t699_TI;
#include "t699MD.h"

extern MethodInfo m3232_MI;


extern MethodInfo m3231_MI;
extern "C" t698 * m3231 (t699 * __this, t13  p0, MethodInfo* method)
{
	{
		t698 * L_0 = m3232(NULL, __this, (&p0), &m3232_MI);
		return L_0;
	}
}
extern "C" t698 * m3232 (t9 * __this , t699 * p0, t13 * p1, MethodInfo* method)
{
	typedef t698 * (*m3232_ftn) (t699 *, t13 *);
	static m3232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t700_TI;
#include "t700MD.h"



extern MethodInfo m3233_MI;
extern "C" void m3233 (t700 * __this, t43  p0, float p1, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t701_TI;
#include "t701MD.h"



extern MethodInfo m3234_MI;
extern "C" void m3234 (t701 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t702_TI;
#include "t702MD.h"

extern MethodInfo m336_MI;
extern MethodInfo m3236_MI;
extern MethodInfo m3237_MI;


extern MethodInfo m3235_MI;
extern "C" void m3235 (t702 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3236(__this, &m3236_MI);
		return;
	}
}
extern "C" void m3236 (t702 * __this, MethodInfo* method)
{
	typedef void (*m3236_ftn) (t702 *);
	static m3236_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3236_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3237 (t702 * __this, MethodInfo* method)
{
	typedef void (*m3237_ftn) (t702 *);
	static m3237_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3237_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3238_MI;
extern "C" void m3238 (t702 * __this, MethodInfo* method)
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
		m3237(__this, &m3237_MI);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.Gradient
void t702_marshal(const t702& unmarshaled, t702_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t702_marshal_back(const t702_marshaled& marshaled, t702& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void t702_marshal_cleanup(t702_marshaled& marshaled)
{
}
#include "t703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t703_TI;
#include "t703MD.h"



extern MethodInfo m3239_MI;
extern "C" void m3239 (t703 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t704.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t704_TI;
#include "t704MD.h"

#include "t58.h"
#include "t477.h"


extern MethodInfo m3240_MI;
extern "C" void m3240 (t704 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3241_MI;
extern "C" void m3241 (t704 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3241((t704 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, int32_t p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t9 * __this, int32_t p0, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern "C" void pinvoke_delegate_wrapper_t704(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3242_MI;
extern "C" t9 * m3242 (t704 * __this, int32_t p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3243_MI;
extern "C" void m3243 (t704 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t705.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t705_TI;
#include "t705MD.h"

#include "t272.h"
#include "t706.h"
#include "t707.h"
#include "t708.h"
#include "t710.h"
#include "t711.h"
#include "t485.h"
#include "t603.h"
extern TypeInfo t721_TI;
extern TypeInfo t2_TI;
extern TypeInfo t707_TI;
extern TypeInfo t272_TI;
extern TypeInfo t713_TI;
extern TypeInfo t715_TI;
extern TypeInfo t710_TI;
#include "t721MD.h"
#include "t706MD.h"
#include "t707MD.h"
#include "t272MD.h"
#include "t713MD.h"
#include "t485MD.h"
#include "t709MD.h"
extern Il2CppType t715_0_0_0;
extern MethodInfo m3302_MI;
extern MethodInfo m406_MI;
extern MethodInfo m3296_MI;
extern MethodInfo m3361_MI;
extern MethodInfo m4273_MI;
extern MethodInfo m4266_MI;
extern MethodInfo m1132_MI;
extern MethodInfo m3245_MI;
extern MethodInfo m3254_MI;
extern MethodInfo m3247_MI;
extern MethodInfo m3427_MI;
extern MethodInfo m3423_MI;
extern MethodInfo m3250_MI;
extern MethodInfo m3251_MI;
extern MethodInfo m3256_MI;
extern MethodInfo m3246_MI;
extern MethodInfo m3257_MI;


extern MethodInfo m3244_MI;
extern "C" void m3244 (t9 * __this , MethodInfo* method)
{
	{
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f0 = (10.0f);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral156);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f4 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral157);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f5 = L_1;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral158);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f6 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral159);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f7 = L_3;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral160);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f8 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral161);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f9 = L_5;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, (t2*) &_stringLiteral162);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f10 = L_6;
		t707 * L_7 = (t707 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t707_TI));
		m4266(L_7, &m4266_MI);
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f11 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t272_TI));
		t272  L_8 = m1132(NULL, &m1132_MI);
		m3245(NULL, L_8, &m3245_MI);
		return;
	}
}
extern "C" void m3245 (t9 * __this , t272  p0, MethodInfo* method)
{
	{
		t272  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern "C" void m3246 (t9 * __this , t706 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		m3302(NULL, &m3302_MI);
		t706 * L_0 = p0;
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		t706 * L_2 = m3296(NULL, &m3296_MI);
		p0 = L_2;
	}

IL_0017:
	{
		t706 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f2 = L_3;
		t706 * L_4 = p0;
		m3361(L_4, &m3361_MI);
		return;
	}
}
extern "C" t706 * m3247 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		m3302(NULL, &m3302_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		t706 * L_0 = ((t705_SFs*)InitializedTypeInfo(&t705_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3248_MI;
extern "C" void m3248 (t9 * __this , bool p0, MethodInfo* method)
{
	typedef void (*m3248_ftn) (bool);
	static m3248_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3248_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3249_MI;
extern TypeInfo* t715_TI_var;
extern "C" void m3249 (t9 * __this , t704 * p0, int32_t p1, t706 * p2, int32_t p3, float p4, float p5, t708 * p6, MethodInfo* method)
{
	static bool m3249_init;
	if (!m3249_init)
	{
		t715_TI_var = il2cpp_codegen_class_from_type(&t715_0_0_0);
		m3249_init = true;
	}
	t706 * V_0 = {0};
	t715* V_1 = {0};
	{
		int32_t L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3254(NULL, L_0, 1, &m3254_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		t706 * L_1 = m3247(NULL, &m3247_MI);
		V_0 = L_1;
		t485 * L_2 = m3427(NULL, &m3427_MI);
		int32_t L_3 = m3423(L_2, &m3423_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_4 = p3;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		t715* L_5 = ((t715*)SZArrayNew(t715_TI_var, 2));
		float L_6 = p4;
		t710 * L_7 = m3250(NULL, L_6, &m3250_MI);
		ArrayElementTypeCheck (L_5, L_7);
		*((t710 **)(t710 **)SZArrayLdElema(L_5, 0)) = (t710 *)L_7;
		t715* L_8 = L_5;
		float L_9 = p5;
		t710 * L_10 = m3251(NULL, L_9, &m3251_MI);
		ArrayElementTypeCheck (L_8, L_10);
		*((t710 **)(t710 **)SZArrayLdElema(L_8, 1)) = (t710 *)L_10;
		V_1 = L_8;
		int32_t L_11 = p1;
		t708 * L_12 = p6;
		t715* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3256(NULL, L_11, L_12, L_13, &m3256_MI);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = p1;
		t708 * L_15 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3256(NULL, L_14, L_15, (t715*)(t715*)NULL, &m3256_MI);
	}

IL_0056:
	{
		t706 * L_16 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		m3246(NULL, L_16, &m3246_MI);
		t704 * L_17 = p0;
		int32_t L_18 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3241_MI, L_17, L_18);
		t485 * L_19 = m3427(NULL, &m3427_MI);
		int32_t L_20 = m3423(L_19, &m3423_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3257(NULL, &m3257_MI);
	}

IL_0078:
	{
		t706 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		m3246(NULL, L_21, &m3246_MI);
		return;
	}
}
#include "t709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t709_TI;

#include "t719.h"
#include "t710MD.h"
extern MethodInfo m3292_MI;


extern "C" t710 * m3250 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t710 * L_3 = (t710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t710_TI));
		m3292(L_3, 0, L_2, &m3292_MI);
		return L_3;
	}
}
extern "C" t710 * m3251 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t710 * L_3 = (t710 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t710_TI));
		m3292(L_3, 1, L_2, &m3292_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t711_TI;
#include "t711MD.h"

#include "t712.h"
#include "t884.h"
extern TypeInfo t712_TI;
extern TypeInfo t884_TI;
#include "t712MD.h"
#include "t884MD.h"
extern MethodInfo m3277_MI;
extern MethodInfo m4274_MI;


extern MethodInfo m3252_MI;
extern "C" void m3252 (t711 * __this, MethodInfo* method)
{
	{
		t712 * L_0 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_0, &m3277_MI);
		__this->f0 = L_0;
		t707 * L_1 = (t707 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t707_TI));
		m4266(L_1, &m4266_MI);
		__this->f1 = L_1;
		t712 * L_2 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_2, &m3277_MI);
		__this->f2 = L_2;
		m336(__this, &m336_MI);
		t707 * L_3 = (__this->f1);
		t712 * L_4 = (__this->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_3, L_4);
		return;
	}
}
#include "t713.h"
#ifndef _MSC_VER
#else
#endif

#include "t714.h"
#include "t448.h"
#include "t716.h"
#include "t886.h"
#include "t717.h"
extern TypeInfo t708_TI;
extern TypeInfo t714_TI;
extern TypeInfo t448_TI;
extern TypeInfo t716_TI;
extern TypeInfo t129_TI;
extern TypeInfo t886_TI;
extern TypeInfo t137_TI;
#include "t708MD.h"
#include "t714MD.h"
#include "t448MD.h"
#include "t716MD.h"
#include "t129MD.h"
#include "t717MD.h"
#include "t886MD.h"
extern Il2CppType t714_0_0_0;
extern Il2CppType t886_0_0_0;
extern MethodInfo m3389_MI;
extern MethodInfo m3404_MI;
extern MethodInfo m4275_MI;
extern MethodInfo m2860_MI;
extern MethodInfo m4276_MI;
extern MethodInfo m4277_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m3268_MI;
extern MethodInfo m3279_MI;
extern MethodInfo m3282_MI;
extern MethodInfo m2962_MI;
extern MethodInfo m3283_MI;
extern MethodInfo m3284_MI;
extern MethodInfo m3285_MI;
extern MethodInfo m3259_MI;
extern MethodInfo m3260_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3281_MI;
extern MethodInfo m2659_MI;
extern MethodInfo m620_MI;
extern MethodInfo m2660_MI;
extern MethodInfo m3261_MI;
extern MethodInfo m2654_MI;
extern MethodInfo m2655_MI;
extern MethodInfo m3262_MI;
extern MethodInfo m3263_MI;
extern Il2CppGenericMethod m4275_GM;
extern Il2CppGenericMethod m4276_GM;
extern Il2CppGenericMethod m4277_GM;
extern Il2CppGenericMethod m4279_GM;
extern Il2CppGenericMethod m4280_GM;
extern Il2CppGenericMethod m4281_GM;


extern MethodInfo m3253_MI;
extern TypeInfo* t714_TI_var;
extern MethodInfo* m4275_MI_var;
extern "C" void m3253 (t9 * __this , MethodInfo* method)
{
	static bool m3253_init;
	if (!m3253_init)
	{
		t714_TI_var = il2cpp_codegen_class_from_type(&t714_0_0_0);
		m4275_MI_var = il2cpp_codegen_genericmethod_get_method(&m4275_GM);
		m3253_init = true;
	}
	{
		t714 * L_0 = (t714 *)il2cpp_codegen_object_new (t714_TI_var);
		m4275(L_0, m4275_MI_var);
		((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f0 = L_0;
		t714 * L_1 = (t714 *)il2cpp_codegen_object_new (t714_TI_var);
		m4275(L_1, m4275_MI_var);
		((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f1 = L_1;
		t711 * L_2 = (t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t711_TI));
		m3252(L_2, &m3252_MI);
		((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2 = L_2;
		t448  L_3 = {0};
		m2860(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), &m2860_MI);
		((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f3 = L_3;
		return;
	}
}
extern MethodInfo* m4276_MI_var;
extern MethodInfo* m4277_MI_var;
extern "C" t711 * m3254 (t9 * __this , int32_t p0, bool p1, MethodInfo* method)
{
	static bool m3254_init;
	if (!m3254_init)
	{
		m4276_MI_var = il2cpp_codegen_genericmethod_get_method(&m4276_GM);
		m4277_MI_var = il2cpp_codegen_genericmethod_get_method(&m4277_GM);
		m3254_init = true;
	}
	t714 * V_0 = {0};
	t711 * V_1 = {0};
	t714 * G_B3_0 = {0};
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t714 * L_1 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t714 * L_2 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		t714 * L_3 = V_0;
		int32_t L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, t711 ** >::Invoke(m4276_MI_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		t711 * L_6 = (t711 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t711_TI));
		m3252(L_6, &m3252_MI);
		V_1 = L_6;
		t714 * L_7 = V_0;
		int32_t L_8 = p0;
		t711 * L_9 = V_1;
		VirtActionInvoker2< int32_t, t711 * >::Invoke(m4277_MI_var, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_10 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_11 = V_1;
		t712 * L_12 = (L_11->f0);
		L_10->f0 = L_12;
		t711 * L_13 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_14 = V_1;
		t707 * L_15 = (L_14->f1);
		L_13->f1 = L_15;
		t711 * L_16 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_17 = V_1;
		t712 * L_18 = (L_17->f2);
		L_16->f2 = L_18;
		t711 * L_19 = V_1;
		return L_19;
	}
}
extern MethodInfo m3255_MI;
extern "C" void m3255 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t711 * V_0 = {0};
	t712 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_1 = m3254(NULL, L_0, 0, &m3254_MI);
		V_0 = L_1;
		t485 * L_2 = m3427(NULL, &m3427_MI);
		int32_t L_3 = m3423(L_2, &m3423_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_4 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_5 = V_0;
		t712 * L_6 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_6, &m3277_MI);
		t712 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t712 * L_8 = V_1;
		L_4->f0 = L_8;
		t711 * L_9 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t707 * L_10 = (L_9->f1);
		VirtActionInvoker0::Invoke(&m4278_MI, L_10);
		t711 * L_11 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t707 * L_12 = (L_11->f1);
		t711 * L_13 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_14 = (L_13->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_12, L_14);
		t711 * L_15 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_16 = V_0;
		t712 * L_17 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_17, &m3277_MI);
		t712 * L_18 = L_17;
		V_1 = L_18;
		L_16->f2 = L_18;
		t712 * L_19 = V_1;
		L_15->f2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_20 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_21 = V_0;
		t712 * L_22 = (L_21->f0);
		L_20->f0 = L_22;
		t711 * L_23 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_24 = V_0;
		t707 * L_25 = (L_24->f1);
		L_23->f1 = L_25;
		t711 * L_26 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_27 = V_0;
		t712 * L_28 = (L_27->f2);
		L_26->f2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
extern "C" void m3256 (t9 * __this , int32_t p0, t708 * p1, t715* p2, MethodInfo* method)
{
	t711 * V_0 = {0};
	t712 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_1 = m3254(NULL, L_0, 1, &m3254_MI);
		V_0 = L_1;
		t485 * L_2 = m3427(NULL, &m3427_MI);
		int32_t L_3 = m3423(L_2, &m3423_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_4 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_5 = V_0;
		t712 * L_6 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_6, &m3277_MI);
		t712 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t712 * L_8 = V_1;
		L_4->f0 = L_8;
		t711 * L_9 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_10 = (L_9->f0);
		t708 * L_11 = p1;
		m3268(L_10, L_11, &m3268_MI);
		t711 * L_12 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_13 = (L_12->f0);
		int32_t L_14 = p0;
		L_13->f16 = L_14;
		t715* L_15 = p2;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_16 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_17 = (L_16->f0);
		t715* L_18 = p2;
		VirtActionInvoker1< t715* >::Invoke(&m3279_MI, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_19 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t707 * L_20 = (L_19->f1);
		VirtActionInvoker0::Invoke(&m4278_MI, L_20);
		t711 * L_21 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t707 * L_22 = (L_21->f1);
		t711 * L_23 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_24 = (L_23->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4274_MI, L_22, L_24);
		t711 * L_25 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_26 = V_0;
		t712 * L_27 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3277(L_27, &m3277_MI);
		t712 * L_28 = L_27;
		V_1 = L_28;
		L_26->f2 = L_28;
		t712 * L_29 = V_1;
		L_25->f2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_30 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_31 = V_0;
		t712 * L_32 = (L_31->f0);
		L_30->f0 = L_32;
		t711 * L_33 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_34 = V_0;
		t707 * L_35 = (L_34->f1);
		L_33->f1 = L_35;
		t711 * L_36 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t711 * L_37 = V_0;
		t712 * L_38 = (L_37->f2);
		L_36->f2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
extern "C" void m3257 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_0 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_1 = (L_0->f0);
		int32_t L_2 = (L_1->f16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_3 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_4 = (L_3->f0);
		VirtActionInvoker0::Invoke(&m3282_MI, L_4);
		t711 * L_5 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_6 = (L_5->f0);
		int32_t L_7 = m385(NULL, &m385_MI);
		t711 * L_8 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_9 = (L_8->f0);
		float L_10 = (L_9->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_11 = m2962(NULL, (((float)L_7)), L_10, &m2962_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3283_MI, L_6, (0.0f), L_11);
		t711 * L_12 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_13 = (L_12->f0);
		VirtActionInvoker0::Invoke(&m3284_MI, L_13);
		t711 * L_14 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_15 = (L_14->f0);
		int32_t L_16 = m621(NULL, &m621_MI);
		t711 * L_17 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_18 = (L_17->f0);
		float L_19 = (L_18->f3);
		float L_20 = m2962(NULL, (((float)L_16)), L_19, &m2962_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3285_MI, L_15, (0.0f), L_20);
		t711 * L_21 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_22 = (L_21->f2);
		m3259(NULL, L_22, &m3259_MI);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_23 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_24 = (L_23->f0);
		m3260(NULL, L_24, &m3260_MI);
		t711 * L_25 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_26 = (L_25->f2);
		m3259(NULL, L_26, &m3259_MI);
	}

IL_00c1:
	{
		return;
	}
}
extern MethodInfo m3258_MI;
extern "C" void m3258 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t711 * L_0 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_1 = (L_0->f0);
		VirtActionInvoker0::Invoke(&m3282_MI, L_1);
		t711 * L_2 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_3 = (L_2->f0);
		int32_t L_4 = m385(NULL, &m385_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3283_MI, L_3, (0.0f), (((float)L_4)));
		t711 * L_5 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_6 = (L_5->f0);
		VirtActionInvoker0::Invoke(&m3284_MI, L_6);
		t711 * L_7 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_8 = (L_7->f0);
		int32_t L_9 = m621(NULL, &m621_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3285_MI, L_8, (0.0f), (((float)L_9)));
		t711 * L_10 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f2;
		t712 * L_11 = (L_10->f2);
		m3259(NULL, L_11, &m3259_MI);
		return;
	}
}
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern "C" void m3259 (t9 * __this , t712 * p0, MethodInfo* method)
{
	static bool m3259_init;
	if (!m3259_init)
	{
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3259_init = true;
	}
	t712 * V_0 = {0};
	t886  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t712 * L_0 = p0;
		t717 * L_1 = (L_0->f10);
		t886  L_2 = m4279(L_1, m4279_MI_var);
		V_1 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_0011:
		{
			t716 * L_3 = m4280((&V_1), m4280_MI_var);
			V_0 = ((t712 *)Castclass(L_3, InitializedTypeInfo(&t712_TI)));
			t712 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			m3260(NULL, L_4, &m3260_MI);
		}

IL_0024:
		{
			bool L_5 = m4281((&V_1), m4281_MI_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		t886  L_6 = V_1;
		t886  L_7 = L_6;
		t9 * L_8 = Box(t886_TI_var, &L_7);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_8);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0041:
	{
		t712 * L_9 = p0;
		m3281(L_9, &m3281_MI);
		return;
	}
}
extern "C" void m3260 (t9 * __this , t712 * p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t448  V_4 = {0};
	{
		t712 * L_0 = p0;
		bool L_1 = (L_0->f15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		t712 * L_2 = p0;
		float L_3 = (L_2->f0);
		V_0 = L_3;
		t712 * L_4 = p0;
		float L_5 = (L_4->f1);
		V_1 = L_5;
		t712 * L_6 = p0;
		VirtActionInvoker0::Invoke(&m3282_MI, L_6);
		t712 * L_7 = p0;
		t712 * L_8 = p0;
		t448 * L_9 = &(L_8->f4);
		float L_10 = m2659(L_9, &m2659_MI);
		t712 * L_11 = p0;
		float L_12 = (L_11->f1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_15 = m620(NULL, L_12, L_13, L_14, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3283_MI, L_7, L_10, L_15);
		t712 * L_16 = p0;
		float L_17 = (L_16->f2);
		V_2 = L_17;
		t712 * L_18 = p0;
		float L_19 = (L_18->f3);
		V_3 = L_19;
		t712 * L_20 = p0;
		VirtActionInvoker0::Invoke(&m3284_MI, L_20);
		t712 * L_21 = p0;
		t712 * L_22 = p0;
		t448 * L_23 = &(L_22->f4);
		float L_24 = m2660(L_23, &m2660_MI);
		t712 * L_25 = p0;
		float L_26 = (L_25->f3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = m620(NULL, L_26, L_27, L_28, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3285_MI, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		t712 * L_30 = p0;
		VirtActionInvoker0::Invoke(&m3282_MI, L_30);
		t712 * L_31 = p0;
		int32_t L_32 = (L_31->f16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t448  L_33 = m3261(NULL, L_32, &m3261_MI);
		V_4 = L_33;
		t712 * L_34 = p0;
		float L_35 = m2659((&V_4), &m2659_MI);
		float L_36 = m2654((&V_4), &m2654_MI);
		t712 * L_37 = p0;
		float L_38 = (L_37->f0);
		t712 * L_39 = p0;
		float L_40 = (L_39->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_41 = m620(NULL, L_36, L_38, L_40, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3283_MI, L_34, L_35, L_41);
		t712 * L_42 = p0;
		VirtActionInvoker0::Invoke(&m3284_MI, L_42);
		t712 * L_43 = p0;
		float L_44 = m2660((&V_4), &m2660_MI);
		float L_45 = m2655((&V_4), &m2655_MI);
		t712 * L_46 = p0;
		float L_47 = (L_46->f2);
		t712 * L_48 = p0;
		float L_49 = (L_48->f3);
		float L_50 = m620(NULL, L_45, L_47, L_49, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3285_MI, L_43, L_44, L_50);
		t712 * L_51 = p0;
		int32_t L_52 = (L_51->f16);
		t712 * L_53 = p0;
		t448  L_54 = (L_53->f4);
		m3262(NULL, L_52, L_54, &m3262_MI);
	}

IL_00e8:
	{
		return;
	}
}
extern "C" t448  m3261 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t448  (*m3261_ftn) (int32_t);
	static m3261_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3261_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3262 (t9 * __this , int32_t p0, t448  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3263(NULL, L_0, (&p1), &m3263_MI);
		return;
	}
}
extern "C" void m3263 (t9 * __this , int32_t p0, t448 * p1, MethodInfo* method)
{
	typedef void (*m3263_ftn) (int32_t, t448 *);
	static m3263_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3263_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3264_MI;
extern "C" t708 * m3264 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t708 * L_0 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_1, &m3389_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		t708 * L_2 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f4;
		m3404(L_2, 0, &m3404_MI);
		t708 * L_3 = ((t713_SFs*)InitializedTypeInfo(&t713_TI)->static_fields)->f4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t544.h"
extern TypeInfo t158_TI;
#include "t742MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3274_MI;
extern MethodInfo m3267_MI;
extern MethodInfo m3398_MI;
extern MethodInfo m3410_MI;
extern MethodInfo m2726_MI;
extern MethodInfo m2725_MI;
extern MethodInfo m2724_MI;
extern MethodInfo m2722_MI;
extern MethodInfo m3401_MI;
extern MethodInfo m3403_MI;
extern MethodInfo m3402_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m610_MI;
extern MethodInfo m3394_MI;
extern MethodInfo m2550_MI;
extern MethodInfo m2743_MI;
extern MethodInfo m2745_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m515_MI;


extern MethodInfo m3265_MI;
extern "C" void m3265 (t716 * __this, float p0, float p1, float p2, float p3, t708 * p4, MethodInfo* method)
{
	{
		t448  L_0 = {0};
		m2860(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m2860_MI);
		__this->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_1 = m3410(NULL, &m3410_MI);
		__this->f7 = L_1;
		m336(__this, &m336_MI);
		float L_2 = p0;
		__this->f0 = L_2;
		float L_3 = p1;
		__this->f1 = L_3;
		float L_4 = p2;
		__this->f2 = L_4;
		float L_5 = p3;
		__this->f3 = L_5;
		t708 * L_6 = p4;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_7 = m3410(NULL, &m3410_MI);
		p4 = L_7;
	}

IL_005b:
	{
		t708 * L_8 = p4;
		m3268(__this, L_8, &m3268_MI);
		return;
	}
}
extern MethodInfo m3266_MI;
extern "C" void m3266 (t9 * __this , MethodInfo* method)
{
	{
		t448  L_0 = {0};
		m2860(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), &m2860_MI);
		((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f8 = L_0;
		((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9 = 0;
		return;
	}
}
extern "C" t708 * m3267 (t716 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3268 (t716 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f7 = L_0;
		t708 * L_1 = p0;
		VirtActionInvoker1< t708 * >::Invoke(&m3274_MI, __this, L_1);
		return;
	}
}
extern MethodInfo m3269_MI;
extern "C" t544 * m3269 (t716 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = m3267(__this, &m3267_MI);
		t544 * L_1 = m3398(L_0, &m3398_MI);
		return L_1;
	}
}
extern MethodInfo m3270_MI;
extern "C" void m3270 (t716 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3271_MI;
extern "C" void m3271 (t716 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3272_MI;
extern "C" void m3272 (t716 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2726(L_0, L_1, &m2726_MI);
		t448 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2725(L_2, L_3, &m2725_MI);
		return;
	}
}
extern MethodInfo m3273_MI;
extern "C" void m3273 (t716 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2724(L_0, L_1, &m2724_MI);
		t448 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2722(L_2, L_3, &m2722_MI);
		return;
	}
}
extern "C" void m3274 (t716 * __this, t708 * p0, MethodInfo* method)
{
	t716 * G_B3_0 = {0};
	t716 * G_B1_0 = {0};
	t716 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	t716 * G_B4_1 = {0};
	t716 * G_B7_0 = {0};
	t716 * G_B5_0 = {0};
	t716 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t716 * G_B8_1 = {0};
	{
		t708 * L_0 = p0;
		float L_1 = m3401(L_0, &m3401_MI);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		t708 * L_2 = p0;
		bool L_3 = m3403(L_2, &m3403_MI);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		G_B4_1->f5 = G_B4_0;
		t708 * L_4 = p0;
		float L_5 = m3402(L_4, &m3402_MI);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		t708 * L_6 = p0;
		bool L_7 = m3405(L_6, &m3405_MI);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_004a;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_004b:
	{
		G_B8_1->f6 = G_B8_0;
		t708 * L_8 = p0;
		__this->f7 = L_8;
		return;
	}
}
extern MethodInfo m3275_MI;
extern "C" void m3275 (t716 * __this, t715* p0, MethodInfo* method)
{
	t710 * V_0 = {0};
	t715* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		t715* L_0 = p0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		t715* L_1 = p0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		t715* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t710 **)(t710 **)SZArrayLdElema(L_2, L_4));
		t710 * L_5 = V_0;
		int32_t L_6 = (L_5->f0);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7 == 0)
		{
			goto IL_0046;
		}
		if (L_7 == 1)
		{
			goto IL_006e;
		}
		if (L_7 == 2)
		{
			goto IL_0096;
		}
		if (L_7 == 3)
		{
			goto IL_00c9;
		}
		if (L_7 == 4)
		{
			goto IL_0103;
		}
		if (L_7 == 5)
		{
			goto IL_0136;
		}
		if (L_7 == 6)
		{
			goto IL_0170;
		}
		if (L_7 == 7)
		{
			goto IL_0186;
		}
	}
	{
		goto IL_019c;
	}

IL_0046:
	{
		t710 * L_8 = V_0;
		t9 * L_9 = (L_8->f1);
		float L_10 = ((*(float*)((float*)UnBox (L_9, InitializedTypeInfo(&t123_TI)))));
		V_4 = L_10;
		__this->f1 = L_10;
		float L_11 = V_4;
		__this->f0 = L_11;
		__this->f5 = 0;
		goto IL_019c;
	}

IL_006e:
	{
		t710 * L_12 = V_0;
		t9 * L_13 = (L_12->f1);
		float L_14 = ((*(float*)((float*)UnBox (L_13, InitializedTypeInfo(&t123_TI)))));
		V_4 = L_14;
		__this->f3 = L_14;
		float L_15 = V_4;
		__this->f2 = L_15;
		__this->f6 = 0;
		goto IL_019c;
	}

IL_0096:
	{
		t710 * L_16 = V_0;
		t9 * L_17 = (L_16->f1);
		__this->f0 = ((*(float*)((float*)UnBox (L_17, InitializedTypeInfo(&t123_TI)))));
		float L_18 = (__this->f1);
		float L_19 = (__this->f0);
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00c4;
		}
	}
	{
		float L_20 = (__this->f0);
		__this->f1 = L_20;
	}

IL_00c4:
	{
		goto IL_019c;
	}

IL_00c9:
	{
		t710 * L_21 = V_0;
		t9 * L_22 = (L_21->f1);
		__this->f1 = ((*(float*)((float*)UnBox (L_22, InitializedTypeInfo(&t123_TI)))));
		float L_23 = (__this->f0);
		float L_24 = (__this->f1);
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00f7;
		}
	}
	{
		float L_25 = (__this->f1);
		__this->f0 = L_25;
	}

IL_00f7:
	{
		__this->f5 = 0;
		goto IL_019c;
	}

IL_0103:
	{
		t710 * L_26 = V_0;
		t9 * L_27 = (L_26->f1);
		__this->f2 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&t123_TI)))));
		float L_28 = (__this->f3);
		float L_29 = (__this->f2);
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_0131;
		}
	}
	{
		float L_30 = (__this->f2);
		__this->f3 = L_30;
	}

IL_0131:
	{
		goto IL_019c;
	}

IL_0136:
	{
		t710 * L_31 = V_0;
		t9 * L_32 = (L_31->f1);
		__this->f3 = ((*(float*)((float*)UnBox (L_32, InitializedTypeInfo(&t123_TI)))));
		float L_33 = (__this->f2);
		float L_34 = (__this->f3);
		if ((!(((float)L_33) > ((float)L_34))))
		{
			goto IL_0164;
		}
	}
	{
		float L_35 = (__this->f3);
		__this->f2 = L_35;
	}

IL_0164:
	{
		__this->f6 = 0;
		goto IL_019c;
	}

IL_0170:
	{
		t710 * L_36 = V_0;
		t9 * L_37 = (L_36->f1);
		__this->f5 = ((*(int32_t*)((int32_t*)UnBox (L_37, InitializedTypeInfo(&t125_TI)))));
		goto IL_019c;
	}

IL_0186:
	{
		t710 * L_38 = V_0;
		t9 * L_39 = (L_38->f1);
		__this->f6 = ((*(int32_t*)((int32_t*)UnBox (L_39, InitializedTypeInfo(&t125_TI)))));
		goto IL_019c;
	}

IL_019c:
	{
		int32_t L_40 = V_2;
		V_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_41 = V_2;
		t715* L_42 = V_1;
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((t121 *)L_42)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		float L_43 = (__this->f1);
		if ((((float)L_43) == ((float)(0.0f))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_44 = (__this->f1);
		float L_45 = (__this->f0);
		if ((!(((float)L_44) < ((float)L_45))))
		{
			goto IL_01d6;
		}
	}
	{
		float L_46 = (__this->f0);
		__this->f1 = L_46;
	}

IL_01d6:
	{
		float L_47 = (__this->f3);
		if ((((float)L_47) == ((float)(0.0f))))
		{
			goto IL_0203;
		}
	}
	{
		float L_48 = (__this->f3);
		float L_49 = (__this->f2);
		if ((!(((float)L_48) < ((float)L_49))))
		{
			goto IL_0203;
		}
	}
	{
		float L_50 = (__this->f2);
		__this->f3 = L_50;
	}

IL_0203:
	{
		return;
	}
}
extern MethodInfo m3276_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3276 (t716 * __this, MethodInfo* method)
{
	static bool m3276_init;
	if (!m3276_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3276_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	t158* G_B5_1 = {0};
	t158* G_B5_2 = {0};
	t2* G_B5_3 = {0};
	int32_t G_B5_4 = 0;
	t158* G_B5_5 = {0};
	t158* G_B5_6 = {0};
	int32_t G_B4_0 = 0;
	t158* G_B4_1 = {0};
	t158* G_B4_2 = {0};
	t2* G_B4_3 = {0};
	int32_t G_B4_4 = 0;
	t158* G_B4_5 = {0};
	t158* G_B4_6 = {0};
	t2* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	t158* G_B6_2 = {0};
	t158* G_B6_3 = {0};
	t2* G_B6_4 = {0};
	int32_t G_B6_5 = 0;
	t158* G_B6_6 = {0};
	t158* G_B6_7 = {0};
	int32_t G_B8_0 = 0;
	t158* G_B8_1 = {0};
	t158* G_B8_2 = {0};
	int32_t G_B7_0 = 0;
	t158* G_B7_1 = {0};
	t158* G_B7_2 = {0};
	t2* G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	t158* G_B9_2 = {0};
	t158* G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	t158* G_B11_1 = {0};
	t158* G_B11_2 = {0};
	int32_t G_B10_0 = 0;
	t158* G_B10_1 = {0};
	t158* G_B10_2 = {0};
	t2* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	t158* G_B12_2 = {0};
	t158* G_B12_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		t2* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m610(NULL, L_1, (t2*) &_stringLiteral163, &m610_MI);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t716_TI));
		int32_t L_5 = ((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000d;
		}
	}
	{
		t158* L_6 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)12)));
		t2* L_7 = V_0;
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 0)) = (t9 *)L_7;
		t158* L_8 = L_6;
		t158* L_9 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t708 * L_10 = m3267(__this, &m3267_MI);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (t2*) &_stringLiteral164;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (t2*) &_stringLiteral164;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		t708 * L_11 = m3267(__this, &m3267_MI);
		t2* L_12 = m3394(L_11, &m3394_MI);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		G_B6_6 = G_B4_5;
		G_B6_7 = G_B4_6;
		goto IL_0062;
	}

IL_005d:
	{
		G_B6_0 = (t2*) &_stringLiteral165;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
		G_B6_6 = G_B5_5;
		G_B6_7 = G_B5_6;
	}

IL_0062:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t9 *)G_B6_0;
		t158* L_13 = G_B6_3;
		t126 * L_14 = m2550(__this, &m2550_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 1)) = (t9 *)L_14;
		t158* L_15 = L_13;
		t448 * L_16 = &(__this->f4);
		float L_17 = m2659(L_16, &m2659_MI);
		float L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t123_TI), &L_18);
		ArrayElementTypeCheck (L_15, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 2)) = (t9 *)L_19;
		t158* L_20 = L_15;
		t448 * L_21 = &(__this->f4);
		float L_22 = m2743(L_21, &m2743_MI);
		float L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t123_TI), &L_23);
		ArrayElementTypeCheck (L_20, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 3)) = (t9 *)L_24;
		t158* L_25 = L_20;
		t448 * L_26 = &(__this->f4);
		float L_27 = m2660(L_26, &m2660_MI);
		float L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t123_TI), &L_28);
		ArrayElementTypeCheck (L_25, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)L_29;
		t158* L_30 = L_25;
		t448 * L_31 = &(__this->f4);
		float L_32 = m2745(L_31, &m2745_MI);
		float L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t123_TI), &L_33);
		ArrayElementTypeCheck (L_30, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 5)) = (t9 *)L_34;
		t2* L_35 = m3626(NULL, G_B6_4, L_30, &m3626_MI);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(G_B6_6, G_B6_5)) = (t9 *)L_35;
		t158* L_36 = G_B6_7;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral166);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, 2)) = (t9 *)(t2*) &_stringLiteral166;
		t158* L_37 = L_36;
		float L_38 = (__this->f0);
		float L_39 = L_38;
		t9 * L_40 = Box(InitializedTypeInfo(&t123_TI), &L_39);
		ArrayElementTypeCheck (L_37, L_40);
		*((t9 **)(t9 **)SZArrayLdElema(L_37, 3)) = (t9 *)L_40;
		t158* L_41 = L_37;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral167);
		*((t9 **)(t9 **)SZArrayLdElema(L_41, 4)) = (t9 *)(t2*) &_stringLiteral167;
		t158* L_42 = L_41;
		float L_43 = (__this->f1);
		float L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t123_TI), &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 5)) = (t9 *)L_45;
		t158* L_46 = L_42;
		int32_t L_47 = (__this->f5);
		G_B7_0 = 6;
		G_B7_1 = L_46;
		G_B7_2 = L_46;
		if (!L_47)
		{
			G_B8_0 = 6;
			G_B8_1 = L_46;
			G_B8_2 = L_46;
			goto IL_0101;
		}
	}
	{
		G_B9_0 = (t2*) &_stringLiteral168;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0106;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_48 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B9_0 = L_48;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0106:
	{
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B9_2, G_B9_1)) = (t9 *)G_B9_0;
		t158* L_49 = G_B9_3;
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral169);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 7)) = (t9 *)(t2*) &_stringLiteral169;
		t158* L_50 = L_49;
		float L_51 = (__this->f2);
		float L_52 = L_51;
		t9 * L_53 = Box(InitializedTypeInfo(&t123_TI), &L_52);
		ArrayElementTypeCheck (L_50, L_53);
		*((t9 **)(t9 **)SZArrayLdElema(L_50, 8)) = (t9 *)L_53;
		t158* L_54 = L_50;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral167);
		*((t9 **)(t9 **)SZArrayLdElema(L_54, ((int32_t)9))) = (t9 *)(t2*) &_stringLiteral167;
		t158* L_55 = L_54;
		float L_56 = (__this->f3);
		float L_57 = L_56;
		t9 * L_58 = Box(InitializedTypeInfo(&t123_TI), &L_57);
		ArrayElementTypeCheck (L_55, L_58);
		*((t9 **)(t9 **)SZArrayLdElema(L_55, ((int32_t)10))) = (t9 *)L_58;
		t158* L_59 = L_55;
		int32_t L_60 = (__this->f6);
		G_B10_0 = ((int32_t)11);
		G_B10_1 = L_59;
		G_B10_2 = L_59;
		if (!L_60)
		{
			G_B11_0 = ((int32_t)11);
			G_B11_1 = L_59;
			G_B11_2 = L_59;
			goto IL_014d;
		}
	}
	{
		G_B12_0 = (t2*) &_stringLiteral168;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0152;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_61 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B12_0 = L_61;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0152:
	{
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B12_2, G_B12_1)) = (t9 *)G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_62 = m515(NULL, G_B12_3, &m515_MI);
		return L_62;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo t717_TI;
extern TypeInfo t544_TI;
#include "t544MD.h"
extern Il2CppType t717_0_0_0;
extern MethodInfo m4282_MI;
extern MethodInfo m2984_MI;
extern MethodInfo m2979_MI;
extern MethodInfo m3380_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3382_MI;
extern MethodInfo m2980_MI;
extern MethodInfo m3383_MI;
extern MethodInfo m3384_MI;
extern MethodInfo m3385_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m3399_MI;
extern MethodInfo m2970_MI;
extern MethodInfo m2801_MI;
extern MethodInfo m608_MI;
extern MethodInfo m4284_MI;
extern MethodInfo m2799_MI;
extern MethodInfo m3278_MI;
extern MethodInfo m585_MI;
extern MethodInfo m2862_MI;
extern MethodInfo m2971_MI;
extern MethodInfo m399_MI;
extern Il2CppGenericMethod m4282_GM;
extern Il2CppGenericMethod m4283_GM;
extern Il2CppGenericMethod m4284_GM;


extern TypeInfo* t717_TI_var;
extern MethodInfo* m4282_MI_var;
extern "C" void m3277 (t712 * __this, MethodInfo* method)
{
	static bool m3277_init;
	if (!m3277_init)
	{
		t717_TI_var = il2cpp_codegen_class_from_type(&t717_0_0_0);
		m4282_MI_var = il2cpp_codegen_genericmethod_get_method(&m4282_GM);
		m3277_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t717_TI_var);
		t717 * L_0 = (t717 *)il2cpp_codegen_object_new (t717_TI_var);
		m4282(L_0, m4282_MI_var);
		__this->f10 = L_0;
		__this->f11 = 1;
		__this->f14 = 1;
		__this->f16 = (-1);
		__this->f18 = ((int32_t)100);
		__this->f19 = ((int32_t)100);
		__this->f22 = (100.0f);
		__this->f23 = (100.0f);
		__this->f24 = (100.0f);
		__this->f25 = (100.0f);
		t544 * L_1 = (t544 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t544_TI));
		m2984(L_1, &m2984_MI);
		__this->f26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_2 = m3410(NULL, &m3410_MI);
		m3265(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, &m3265_MI);
		return;
	}
}
extern "C" t544 * m3278 (t712 * __this, MethodInfo* method)
{
	{
		t544 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m3279 (t712 * __this, t715* p0, MethodInfo* method)
{
	t710 * V_0 = {0};
	t715* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t715* L_0 = p0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		t715* L_1 = p0;
		m3275(__this, L_1, &m3275_MI);
		t715* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		t715* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t710 **)(t710 **)SZArrayLdElema(L_3, L_5));
		t710 * L_6 = V_0;
		int32_t L_7 = (L_6->f0);
		V_3 = L_7;
		int32_t L_8 = V_3;
		if (L_8 == 0)
		{
			goto IL_0065;
		}
		if (L_8 == 1)
		{
			goto IL_0071;
		}
		if (L_8 == 2)
		{
			goto IL_0065;
		}
		if (L_8 == 3)
		{
			goto IL_0065;
		}
		if (L_8 == 4)
		{
			goto IL_0071;
		}
		if (L_8 == 5)
		{
			goto IL_0071;
		}
		if (L_8 == 6)
		{
			goto IL_0094;
		}
		if (L_8 == 7)
		{
			goto IL_0094;
		}
		if (L_8 == 8)
		{
			goto IL_0094;
		}
		if (L_8 == 9)
		{
			goto IL_0094;
		}
		if (L_8 == 10)
		{
			goto IL_0094;
		}
		if (L_8 == 11)
		{
			goto IL_0094;
		}
		if (L_8 == 12)
		{
			goto IL_0094;
		}
		if (L_8 == 13)
		{
			goto IL_007d;
		}
	}
	{
		goto IL_0094;
	}

IL_0065:
	{
		__this->f21 = 1;
		goto IL_0094;
	}

IL_0071:
	{
		__this->f20 = 1;
		goto IL_0094;
	}

IL_007d:
	{
		t710 * L_9 = V_0;
		t9 * L_10 = (L_9->f1);
		__this->f13 = (((float)((*(int32_t*)((int32_t*)UnBox (L_10, InitializedTypeInfo(&t125_TI)))))));
		goto IL_0094;
	}

IL_0094:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0098:
	{
		int32_t L_12 = V_2;
		t715* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
extern MethodInfo m3280_MI;
extern "C" void m3280 (t712 * __this, t708 * p0, MethodInfo* method)
{
	t544 * V_0 = {0};
	{
		t708 * L_0 = p0;
		m3274(__this, L_0, &m3274_MI);
		t708 * L_1 = p0;
		t544 * L_2 = m3398(L_1, &m3398_MI);
		V_0 = L_2;
		t544 * L_3 = (__this->f26);
		t544 * L_4 = V_0;
		int32_t L_5 = m2979(L_4, &m2979_MI);
		m3380(L_3, L_5, &m3380_MI);
		t544 * L_6 = (__this->f26);
		t544 * L_7 = V_0;
		int32_t L_8 = m3381(L_7, &m3381_MI);
		m3382(L_6, L_8, &m3382_MI);
		t544 * L_9 = (__this->f26);
		t544 * L_10 = V_0;
		int32_t L_11 = m2980(L_10, &m2980_MI);
		m3383(L_9, L_11, &m3383_MI);
		t544 * L_12 = (__this->f26);
		t544 * L_13 = V_0;
		int32_t L_14 = m3384(L_13, &m3384_MI);
		m3385(L_12, L_14, &m3385_MI);
		return;
	}
}
extern "C" void m3281 (t712 * __this, MethodInfo* method)
{
	{
		__this->f17 = 0;
		return;
	}
}
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4283_MI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern MethodInfo* m4284_MI_var;
extern "C" void m3282 (t712 * __this, MethodInfo* method)
{
	static bool m3282_init;
	if (!m3282_init)
	{
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4283_MI_var = il2cpp_codegen_genericmethod_get_method(&m4283_GM);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m3282_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	t716 * V_3 = {0};
	t886  V_4 = {0};
	t544 * V_5 = {0};
	int32_t V_6 = 0;
	t716 * V_7 = {0};
	t886  V_8 = {0};
	t544 * V_9 = {0};
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	t712 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	t712 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	t712 * G_B40_3 = {0};
	{
		t717 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t708 * L_2 = m3267(__this, &m3267_MI);
		t544 * L_3 = m3399(L_2, &m3399_MI);
		int32_t L_4 = m2970(L_3, &m2970_MI);
		float L_5 = (((float)L_4));
		V_13 = L_5;
		__this->f0 = L_5;
		float L_6 = V_13;
		__this->f1 = L_6;
		return;
	}

IL_0033:
	{
		__this->f22 = (0.0f);
		__this->f23 = (0.0f);
		V_0 = 0;
		V_1 = 0;
		__this->f18 = 0;
		V_2 = 1;
		bool L_7 = (__this->f11);
		if (!L_7)
		{
			goto IL_016a;
		}
	}
	{
		t717 * L_8 = (__this->f10);
		t886  L_9 = m4279(L_8, m4279_MI_var);
		V_4 = L_9;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0125;
		}

IL_0073:
		{
			t716 * L_10 = m4280((&V_4), m4280_MI_var);
			V_3 = L_10;
			t716 * L_11 = V_3;
			VirtActionInvoker0::Invoke(&m3270_MI, L_11);
			t716 * L_12 = V_3;
			t544 * L_13 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_12);
			V_5 = L_13;
			t716 * L_14 = V_3;
			t708 * L_15 = m3267(L_14, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_16 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_15) == ((t9*)(t708 *)L_16)))
			{
				goto IL_0112;
			}
		}

IL_0099:
		{
			bool L_17 = V_2;
			if (L_17)
			{
				goto IL_00c0;
			}
		}

IL_009f:
		{
			t544 * L_18 = V_5;
			int32_t L_19 = m2979(L_18, &m2979_MI);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_21 = m2801(NULL, L_19, L_20, &m2801_MI);
			V_0 = L_21;
			t544 * L_22 = V_5;
			int32_t L_23 = m3381(L_22, &m3381_MI);
			int32_t L_24 = V_1;
			int32_t L_25 = m2801(NULL, L_23, L_24, &m2801_MI);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			t544 * L_26 = V_5;
			int32_t L_27 = m2979(L_26, &m2979_MI);
			V_0 = L_27;
			t544 * L_28 = V_5;
			int32_t L_29 = m3381(L_28, &m3381_MI);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			t716 * L_30 = V_3;
			float L_31 = (L_30->f0);
			t544 * L_32 = V_5;
			int32_t L_33 = m2970(L_32, &m2970_MI);
			float L_34 = (__this->f22);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_35 = m608(NULL, ((float)((float)L_31+(float)(((float)L_33)))), L_34, &m608_MI);
			__this->f22 = L_35;
			t716 * L_36 = V_3;
			float L_37 = (L_36->f1);
			t544 * L_38 = V_5;
			int32_t L_39 = m2970(L_38, &m2970_MI);
			float L_40 = (__this->f23);
			float L_41 = m608(NULL, ((float)((float)L_37+(float)(((float)L_39)))), L_40, &m608_MI);
			__this->f23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->f18);
			t716 * L_43 = V_3;
			int32_t L_44 = (L_43->f5);
			__this->f18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = m4281((&V_4), m4281_MI_var);
			if (L_45)
			{
				goto IL_0073;
			}
		}

IL_0131:
		{
			IL2CPP_LEAVE(0x143, FINALLY_0136);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0136;
	}

FINALLY_0136:
	{ // begin finally (depth: 1)
		t886  L_46 = V_4;
		t886  L_47 = L_46;
		t9 * L_48 = Box(t886_TI_var, &L_47);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_48);
		IL2CPP_END_FINALLY(310)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(310)
	{
		IL2CPP_JUMP_TBL(0x143, IL_0143)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0143:
	{
		float L_49 = (__this->f22);
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		__this->f22 = ((float)((float)L_49-(float)(((float)((int32_t)((int32_t)L_50+(int32_t)L_51))))));
		float L_52 = (__this->f23);
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		__this->f23 = ((float)((float)L_52-(float)(((float)((int32_t)((int32_t)L_53+(int32_t)L_54))))));
		goto IL_02ea;
	}

IL_016a:
	{
		V_6 = 0;
		t717 * L_55 = (__this->f10);
		t886  L_56 = m4279(L_55, m4279_MI_var);
		V_8 = L_56;
	}

IL_017a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0273;
		}

IL_017f:
		{
			t716 * L_57 = m4280((&V_8), m4280_MI_var);
			V_7 = L_57;
			t716 * L_58 = V_7;
			VirtActionInvoker0::Invoke(&m3270_MI, L_58);
			t716 * L_59 = V_7;
			t544 * L_60 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_59);
			V_9 = L_60;
			t716 * L_61 = V_7;
			t708 * L_62 = m3267(L_61, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_63 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_62) == ((t9*)(t708 *)L_63)))
			{
				goto IL_0237;
			}
		}

IL_01a9:
		{
			bool L_64 = V_2;
			if (L_64)
			{
				goto IL_01d2;
			}
		}

IL_01af:
		{
			int32_t L_65 = V_6;
			t544 * L_66 = V_9;
			int32_t L_67 = m2979(L_66, &m2979_MI);
			if ((((int32_t)L_65) <= ((int32_t)L_67)))
			{
				goto IL_01c4;
			}
		}

IL_01bd:
		{
			int32_t L_68 = V_6;
			G_B22_0 = L_68;
			goto IL_01cb;
		}

IL_01c4:
		{
			t544 * L_69 = V_9;
			int32_t L_70 = m2979(L_69, &m2979_MI);
			G_B22_0 = L_70;
		}

IL_01cb:
		{
			V_10 = G_B22_0;
			goto IL_01d7;
		}

IL_01d2:
		{
			V_10 = 0;
			V_2 = 0;
		}

IL_01d7:
		{
			float L_71 = (__this->f22);
			t716 * L_72 = V_7;
			float L_73 = (L_72->f0);
			float L_74 = (__this->f13);
			int32_t L_75 = V_10;
			__this->f22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->f23);
			t716 * L_77 = V_7;
			float L_78 = (L_77->f1);
			float L_79 = (__this->f13);
			int32_t L_80 = V_10;
			__this->f23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			t544 * L_81 = V_9;
			int32_t L_82 = m3381(L_81, &m3381_MI);
			V_6 = L_82;
			int32_t L_83 = (__this->f18);
			t716 * L_84 = V_7;
			int32_t L_85 = (L_84->f5);
			__this->f18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->f22);
			t716 * L_87 = V_7;
			float L_88 = (L_87->f0);
			__this->f22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->f23);
			t716 * L_90 = V_7;
			float L_91 = (L_90->f1);
			__this->f23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->f18);
			t716 * L_93 = V_7;
			int32_t L_94 = (L_93->f5);
			__this->f18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = m4281((&V_8), m4281_MI_var);
			if (L_95)
			{
				goto IL_017f;
			}
		}

IL_027f:
		{
			IL2CPP_LEAVE(0x291, FINALLY_0284);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0284;
	}

FINALLY_0284:
	{ // begin finally (depth: 1)
		t886  L_96 = V_8;
		t886  L_97 = L_96;
		t9 * L_98 = Box(t886_TI_var, &L_97);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_98);
		IL2CPP_END_FINALLY(644)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(644)
	{
		IL2CPP_JUMP_TBL(0x291, IL_0291)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0291:
	{
		float L_99 = (__this->f22);
		float L_100 = (__this->f13);
		__this->f22 = ((float)((float)L_99-(float)L_100));
		float L_101 = (__this->f23);
		float L_102 = (__this->f13);
		__this->f23 = ((float)((float)L_101-(float)L_102));
		t717 * L_103 = (__this->f10);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		t717 * L_105 = (__this->f10);
		t716 * L_106 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_105, 0);
		t544 * L_107 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_106);
		int32_t L_108 = m2979(L_107, &m2979_MI);
		V_0 = L_108;
		int32_t L_109 = V_6;
		V_1 = L_109;
		goto IL_02ea;
	}

IL_02e6:
	{
		int32_t L_110 = 0;
		V_1 = L_110;
		V_0 = L_110;
	}

IL_02ea:
	{
		V_11 = (0.0f);
		V_12 = (0.0f);
		t708 * L_111 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_112 = m3410(NULL, &m3410_MI);
		if ((!(((t9*)(t708 *)L_111) == ((t9*)(t708 *)L_112))))
		{
			goto IL_0313;
		}
	}
	{
		bool L_113 = (__this->f20);
		if (!L_113)
		{
			goto IL_034a;
		}
	}

IL_0313:
	{
		t708 * L_114 = m3267(__this, &m3267_MI);
		t544 * L_115 = m3399(L_114, &m3399_MI);
		int32_t L_116 = m2979(L_115, &m2979_MI);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_118 = m2799(NULL, L_116, L_117, &m2799_MI);
		V_11 = (((float)L_118));
		t708 * L_119 = m3267(__this, &m3267_MI);
		t544 * L_120 = m3399(L_119, &m3399_MI);
		int32_t L_121 = m3381(L_120, &m3381_MI);
		int32_t L_122 = V_1;
		int32_t L_123 = m2799(NULL, L_121, L_122, &m2799_MI);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		t544 * L_124 = (__this->f26);
		int32_t L_125 = V_0;
		m3380(L_124, L_125, &m3380_MI);
		t544 * L_126 = (__this->f26);
		int32_t L_127 = V_1;
		m3382(L_126, L_127, &m3382_MI);
		float L_128 = (0.0f);
		V_12 = L_128;
		V_11 = L_128;
	}

IL_036c:
	{
		float L_129 = (__this->f0);
		float L_130 = (__this->f22);
		float L_131 = V_11;
		float L_132 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_133 = m608(NULL, L_129, ((float)((float)((float)((float)L_130+(float)L_131))+(float)L_132)), &m608_MI);
		__this->f0 = L_133;
		float L_134 = (__this->f1);
		if ((!(((float)L_134) == ((float)(0.0f)))))
		{
			goto IL_03db;
		}
	}
	{
		int32_t L_135 = (__this->f5);
		int32_t L_136 = (__this->f18);
		t708 * L_137 = m3267(__this, &m3267_MI);
		bool L_138 = m3403(L_137, &m3403_MI);
		G_B38_0 = L_136;
		G_B38_1 = L_135;
		G_B38_2 = __this;
		if (!L_138)
		{
			G_B39_0 = L_136;
			G_B39_1 = L_135;
			G_B39_2 = __this;
			goto IL_03bc;
		}
	}
	{
		G_B40_0 = 1;
		G_B40_1 = G_B38_0;
		G_B40_2 = G_B38_1;
		G_B40_3 = G_B38_2;
		goto IL_03bd;
	}

IL_03bc:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
		G_B40_2 = G_B39_1;
		G_B40_3 = G_B39_2;
	}

IL_03bd:
	{
		G_B40_3->f5 = ((int32_t)((int32_t)G_B40_2+(int32_t)((int32_t)((int32_t)G_B40_1+(int32_t)G_B40_0))));
		float L_139 = (__this->f23);
		float L_140 = V_11;
		float L_141 = V_12;
		__this->f1 = ((float)((float)((float)((float)L_139+(float)L_140))+(float)L_141));
		goto IL_03e2;
	}

IL_03db:
	{
		__this->f5 = 0;
	}

IL_03e2:
	{
		float L_142 = (__this->f1);
		float L_143 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_144 = m608(NULL, L_142, L_143, &m608_MI);
		__this->f1 = L_144;
		t708 * L_145 = m3267(__this, &m3267_MI);
		float L_146 = m3401(L_145, &m3401_MI);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		t708 * L_147 = m3267(__this, &m3267_MI);
		float L_148 = m3401(L_147, &m3401_MI);
		float L_149 = L_148;
		V_13 = L_149;
		__this->f0 = L_149;
		float L_150 = V_13;
		__this->f1 = L_150;
		__this->f5 = 0;
	}

IL_0431:
	{
		return;
	}
}
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern MethodInfo* m4283_MI_var;
extern MethodInfo* m4284_MI_var;
extern "C" void m3283 (t712 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3283_init;
	if (!m3283_init)
	{
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m4283_MI_var = il2cpp_codegen_genericmethod_get_method(&m4283_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m3283_init = true;
	}
	t544 * V_0 = {0};
	t716 * V_1 = {0};
	t886  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	t716 * V_8 = {0};
	t886  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	t716 * V_17 = {0};
	t886  V_18 = {0};
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B39_0 = 0;
	{
		float L_0 = p0;
		float L_1 = p1;
		m3272(__this, L_0, L_1, &m3272_MI);
		bool L_2 = (__this->f12);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		p0 = (0.0f);
	}

IL_001a:
	{
		t708 * L_3 = m3267(__this, &m3267_MI);
		t544 * L_4 = m3399(L_3, &m3399_MI);
		V_0 = L_4;
		bool L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		t708 * L_6 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_7 = m3410(NULL, &m3410_MI);
		if ((((t9*)(t708 *)L_6) == ((t9*)(t708 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		t717 * L_8 = (__this->f10);
		t886  L_9 = m4279(L_8, m4279_MI_var);
		V_2 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c9;
		}

IL_0052:
		{
			t716 * L_10 = m4280((&V_2), m4280_MI_var);
			V_1 = L_10;
			t716 * L_11 = V_1;
			t544 * L_12 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_11);
			int32_t L_13 = m2979(L_12, &m2979_MI);
			t544 * L_14 = V_0;
			int32_t L_15 = m2979(L_14, &m2979_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_16 = m2799(NULL, L_13, L_15, &m2799_MI);
			V_3 = (((float)L_16));
			float L_17 = p0;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = p1;
			t716 * L_20 = V_1;
			t544 * L_21 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_20);
			int32_t L_22 = m3381(L_21, &m3381_MI);
			t544 * L_23 = V_0;
			int32_t L_24 = m3381(L_23, &m3381_MI);
			int32_t L_25 = m2799(NULL, L_22, L_24, &m2799_MI);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			t716 * L_27 = V_1;
			int32_t L_28 = (L_27->f5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			t716 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			VirtActionInvoker2< float, float >::Invoke(&m3272_MI, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			t716 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			t716 * L_35 = V_1;
			float L_36 = (L_35->f0);
			t716 * L_37 = V_1;
			float L_38 = (L_37->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_39 = m620(NULL, L_34, L_36, L_38, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3272_MI, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = m4281((&V_2), m4281_MI_var);
			if (L_40)
			{
				goto IL_0052;
			}
		}

IL_00d5:
		{
			IL2CPP_LEAVE(0xE6, FINALLY_00da);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00da;
	}

FINALLY_00da:
	{ // begin finally (depth: 1)
		t886  L_41 = V_2;
		t886  L_42 = L_41;
		t9 * L_43 = Box(t886_TI_var, &L_42);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_43);
		IL2CPP_END_FINALLY(218)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(218)
	{
		IL2CPP_JUMP_TBL(0xE6, IL_00e6)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00e6:
	{
		goto IL_01b6;
	}

IL_00eb:
	{
		float L_44 = p0;
		t544 * L_45 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3278_MI, __this);
		int32_t L_46 = m2979(L_45, &m2979_MI);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = p1;
		t544 * L_48 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3278_MI, __this);
		int32_t L_49 = m2970(L_48, &m2970_MI);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		t717 * L_50 = (__this->f10);
		t886  L_51 = m4279(L_50, m4279_MI_var);
		V_9 = L_51;
	}

IL_0118:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0198;
		}

IL_011d:
		{
			t716 * L_52 = m4280((&V_9), m4280_MI_var);
			V_8 = L_52;
			t716 * L_53 = V_8;
			int32_t L_54 = (L_53->f5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			t716 * L_55 = V_8;
			float L_56 = V_6;
			t716 * L_57 = V_8;
			t544 * L_58 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_57);
			int32_t L_59 = m2979(L_58, &m2979_MI);
			float L_60 = V_7;
			t716 * L_61 = V_8;
			t544 * L_62 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_61);
			int32_t L_63 = m2970(L_62, &m2970_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3272_MI, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			t716 * L_64 = V_8;
			float L_65 = V_6;
			t716 * L_66 = V_8;
			t544 * L_67 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_66);
			int32_t L_68 = m2979(L_67, &m2979_MI);
			float L_69 = V_7;
			t716 * L_70 = V_8;
			t544 * L_71 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_70);
			int32_t L_72 = m2970(L_71, &m2970_MI);
			t716 * L_73 = V_8;
			float L_74 = (L_73->f0);
			t716 * L_75 = V_8;
			float L_76 = (L_75->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_77 = m620(NULL, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3272_MI, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = m4281((&V_9), m4281_MI_var);
			if (L_78)
			{
				goto IL_011d;
			}
		}

IL_01a4:
		{
			IL2CPP_LEAVE(0x1B6, FINALLY_01a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_01a9;
	}

FINALLY_01a9:
	{ // begin finally (depth: 1)
		t886  L_79 = V_9;
		t886  L_80 = L_79;
		t9 * L_81 = Box(t886_TI_var, &L_80);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_81);
		IL2CPP_END_FINALLY(425)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(425)
	{
		IL2CPP_JUMP_TBL(0x1B6, IL_01b6)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_01b6:
	{
		goto IL_03b0;
	}

IL_01bb:
	{
		t708 * L_82 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_83 = m3410(NULL, &m3410_MI);
		if ((((t9*)(t708 *)L_82) == ((t9*)(t708 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		t544 * L_84 = V_0;
		int32_t L_85 = m2979(L_84, &m2979_MI);
		V_10 = (((float)L_85));
		t544 * L_86 = V_0;
		int32_t L_87 = m3381(L_86, &m3381_MI);
		V_11 = (((float)L_87));
		t717 * L_88 = (__this->f10);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		t717 * L_91 = (__this->f10);
		t716 * L_92 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_91, 0);
		t544 * L_93 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_92);
		int32_t L_94 = m2979(L_93, &m2979_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_95 = m608(NULL, L_90, (((float)L_94)), &m608_MI);
		V_10 = L_95;
		float L_96 = V_11;
		t717 * L_97 = (__this->f10);
		t717 * L_98 = (__this->f10);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_98);
		t716 * L_100 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		t544 * L_101 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_100);
		int32_t L_102 = m3381(L_101, &m3381_MI);
		float L_103 = m608(NULL, L_96, (((float)L_102)), &m608_MI);
		V_11 = L_103;
	}

IL_0239:
	{
		float L_104 = p0;
		float L_105 = V_10;
		p0 = ((float)((float)L_104+(float)L_105));
		float L_106 = p1;
		float L_107 = V_11;
		float L_108 = V_10;
		p1 = ((float)((float)L_106-(float)((float)((float)L_107+(float)L_108))));
	}

IL_0248:
	{
		float L_109 = p1;
		float L_110 = (__this->f13);
		t717 * L_111 = (__this->f10);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_111);
		V_12 = ((float)((float)L_109-(float)((float)((float)L_110*(float)(((float)((int32_t)((int32_t)L_112-(int32_t)1))))))));
		V_13 = (0.0f);
		float L_113 = (__this->f22);
		float L_114 = (__this->f23);
		if ((((float)L_113) == ((float)L_114)))
		{
			goto IL_02a1;
		}
	}
	{
		float L_115 = V_12;
		float L_116 = (__this->f22);
		float L_117 = (__this->f23);
		float L_118 = (__this->f22);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_119 = m620(NULL, ((float)((float)((float)((float)L_115-(float)L_116))/(float)((float)((float)L_117-(float)L_118)))), (0.0f), (1.0f), &m620_MI);
		V_13 = L_119;
	}

IL_02a1:
	{
		V_14 = (0.0f);
		float L_120 = V_12;
		float L_121 = (__this->f23);
		if ((!(((float)L_120) > ((float)L_121))))
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_122 = (__this->f18);
		if ((((int32_t)L_122) <= ((int32_t)0)))
		{
			goto IL_02d4;
		}
	}
	{
		float L_123 = V_12;
		float L_124 = (__this->f23);
		int32_t L_125 = (__this->f18);
		V_14 = ((float)((float)((float)((float)L_123-(float)L_124))/(float)(((float)L_125))));
	}

IL_02d4:
	{
		V_15 = 0;
		V_16 = 1;
		t717 * L_126 = (__this->f10);
		t886  L_127 = m4279(L_126, m4279_MI_var);
		V_18 = L_127;
	}

IL_02e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0392;
		}

IL_02ec:
		{
			t716 * L_128 = m4280((&V_18), m4280_MI_var);
			V_17 = L_128;
			t716 * L_129 = V_17;
			float L_130 = (L_129->f0);
			t716 * L_131 = V_17;
			float L_132 = (L_131->f1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_134 = m585(NULL, L_130, L_132, L_133, &m585_MI);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			t716 * L_137 = V_17;
			int32_t L_138 = (L_137->f5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			t716 * L_139 = V_17;
			t708 * L_140 = m3267(L_139, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_141 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_140) == ((t9*)(t708 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			t716 * L_142 = V_17;
			t544 * L_143 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_142);
			int32_t L_144 = m2979(L_143, &m2979_MI);
			V_20 = L_144;
			bool L_145 = V_16;
			if (!L_145)
			{
				goto IL_0348;
			}
		}

IL_0342:
		{
			V_20 = 0;
			V_16 = 0;
		}

IL_0348:
		{
			int32_t L_146 = V_15;
			int32_t L_147 = V_20;
			if ((((int32_t)L_146) <= ((int32_t)L_147)))
			{
				goto IL_0358;
			}
		}

IL_0351:
		{
			int32_t L_148 = V_15;
			G_B39_0 = L_148;
			goto IL_035a;
		}

IL_0358:
		{
			int32_t L_149 = V_20;
			G_B39_0 = L_149;
		}

IL_035a:
		{
			V_21 = G_B39_0;
			float L_150 = p0;
			int32_t L_151 = V_21;
			p0 = ((float)((float)L_150+(float)(((float)L_151))));
			t716 * L_152 = V_17;
			t544 * L_153 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_152);
			int32_t L_154 = m3381(L_153, &m3381_MI);
			V_15 = L_154;
		}

IL_0371:
		{
			t716 * L_155 = V_17;
			float L_156 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			VirtActionInvoker2< float, float >::Invoke(&m3272_MI, L_155, L_157, L_159);
			float L_160 = p0;
			float L_161 = V_19;
			float L_162 = (__this->f13);
			p0 = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = m4281((&V_18), m4281_MI_var);
			if (L_163)
			{
				goto IL_02ec;
			}
		}

IL_039e:
		{
			IL2CPP_LEAVE(0x3B0, FINALLY_03a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_03a3;
	}

FINALLY_03a3:
	{ // begin finally (depth: 1)
		t886  L_164 = V_18;
		t886  L_165 = L_164;
		t9 * L_166 = Box(t886_TI_var, &L_165);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_166);
		IL2CPP_END_FINALLY(931)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(931)
	{
		IL2CPP_JUMP_TBL(0x3B0, IL_03b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_03b0:
	{
		return;
	}
}
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4283_MI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern MethodInfo* m4284_MI_var;
extern "C" void m3284 (t712 * __this, MethodInfo* method)
{
	static bool m3284_init;
	if (!m3284_init)
	{
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4283_MI_var = il2cpp_codegen_genericmethod_get_method(&m4283_GM);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m3284_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t716 * V_4 = {0};
	t886  V_5 = {0};
	t544 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t716 * V_9 = {0};
	t886  V_10 = {0};
	t544 * V_11 = {0};
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	t712 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	t712 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	t712 * G_B37_3 = {0};
	{
		t717 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t708 * L_2 = m3267(__this, &m3267_MI);
		t544 * L_3 = m3399(L_2, &m3399_MI);
		int32_t L_4 = m2971(L_3, &m2971_MI);
		float L_5 = (((float)L_4));
		V_14 = L_5;
		__this->f2 = L_5;
		float L_6 = V_14;
		__this->f3 = L_6;
		return;
	}

IL_0033:
	{
		float L_7 = (0.0f);
		V_14 = L_7;
		__this->f25 = L_7;
		float L_8 = V_14;
		__this->f24 = L_8;
		V_0 = 0;
		V_1 = 0;
		__this->f19 = 0;
		bool L_9 = (__this->f11);
		if (!L_9)
		{
			goto IL_01d4;
		}
	}
	{
		V_2 = 0;
		V_3 = 1;
		t717 * L_10 = (__this->f10);
		t886  L_11 = m4279(L_10, m4279_MI_var);
		V_5 = L_11;
	}

IL_0070:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0075:
		{
			t716 * L_12 = m4280((&V_5), m4280_MI_var);
			V_4 = L_12;
			t716 * L_13 = V_4;
			VirtActionInvoker0::Invoke(&m3271_MI, L_13);
			t716 * L_14 = V_4;
			t544 * L_15 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_14);
			V_6 = L_15;
			t716 * L_16 = V_4;
			t708 * L_17 = m3267(L_16, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_18 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_17) == ((t9*)(t708 *)L_18)))
			{
				goto IL_011d;
			}
		}

IL_009f:
		{
			bool L_19 = V_3;
			if (L_19)
			{
				goto IL_00b9;
			}
		}

IL_00a5:
		{
			int32_t L_20 = V_2;
			t544 * L_21 = V_6;
			int32_t L_22 = m2980(L_21, &m2980_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_23 = m2799(NULL, L_20, L_22, &m2799_MI);
			V_7 = L_23;
			goto IL_00be;
		}

IL_00b9:
		{
			V_7 = 0;
			V_3 = 0;
		}

IL_00be:
		{
			float L_24 = (__this->f24);
			t716 * L_25 = V_4;
			float L_26 = (L_25->f2);
			float L_27 = (__this->f13);
			int32_t L_28 = V_7;
			__this->f24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->f25);
			t716 * L_30 = V_4;
			float L_31 = (L_30->f3);
			float L_32 = (__this->f13);
			int32_t L_33 = V_7;
			__this->f25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			t544 * L_34 = V_6;
			int32_t L_35 = m3384(L_34, &m3384_MI);
			V_2 = L_35;
			int32_t L_36 = (__this->f19);
			t716 * L_37 = V_4;
			int32_t L_38 = (L_37->f6);
			__this->f19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->f24);
			t716 * L_40 = V_4;
			float L_41 = (L_40->f2);
			__this->f24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->f25);
			t716 * L_43 = V_4;
			float L_44 = (L_43->f3);
			__this->f25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->f19);
			t716 * L_46 = V_4;
			int32_t L_47 = (L_46->f6);
			__this->f19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = m4281((&V_5), m4281_MI_var);
			if (L_48)
			{
				goto IL_0075;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x177, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		t886  L_49 = V_5;
		t886  L_50 = L_49;
		t9 * L_51 = Box(t886_TI_var, &L_50);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_51);
		IL2CPP_END_FINALLY(362)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x177, IL_0177)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0177:
	{
		float L_52 = (__this->f24);
		float L_53 = (__this->f13);
		__this->f24 = ((float)((float)L_52-(float)L_53));
		float L_54 = (__this->f25);
		float L_55 = (__this->f13);
		__this->f25 = ((float)((float)L_54-(float)L_55));
		t717 * L_56 = (__this->f10);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		t717 * L_58 = (__this->f10);
		t716 * L_59 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_58, 0);
		t544 * L_60 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_59);
		int32_t L_61 = m2980(L_60, &m2980_MI);
		V_0 = L_61;
		int32_t L_62 = V_2;
		V_1 = L_62;
		goto IL_01cf;
	}

IL_01cb:
	{
		int32_t L_63 = 0;
		V_0 = L_63;
		V_1 = L_63;
	}

IL_01cf:
	{
		goto IL_02b0;
	}

IL_01d4:
	{
		V_8 = 1;
		t717 * L_64 = (__this->f10);
		t886  L_65 = m4279(L_64, m4279_MI_var);
		V_10 = L_65;
	}

IL_01e4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0292;
		}

IL_01e9:
		{
			t716 * L_66 = m4280((&V_10), m4280_MI_var);
			V_9 = L_66;
			t716 * L_67 = V_9;
			VirtActionInvoker0::Invoke(&m3271_MI, L_67);
			t716 * L_68 = V_9;
			t544 * L_69 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_68);
			V_11 = L_69;
			t716 * L_70 = V_9;
			t708 * L_71 = m3267(L_70, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_72 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_71) == ((t9*)(t708 *)L_72)))
			{
				goto IL_027e;
			}
		}

IL_0213:
		{
			bool L_73 = V_8;
			if (L_73)
			{
				goto IL_023b;
			}
		}

IL_021a:
		{
			t544 * L_74 = V_11;
			int32_t L_75 = m2980(L_74, &m2980_MI);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_77 = m2801(NULL, L_75, L_76, &m2801_MI);
			V_0 = L_77;
			t544 * L_78 = V_11;
			int32_t L_79 = m3384(L_78, &m3384_MI);
			int32_t L_80 = V_1;
			int32_t L_81 = m2801(NULL, L_79, L_80, &m2801_MI);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			t544 * L_82 = V_11;
			int32_t L_83 = m2980(L_82, &m2980_MI);
			V_0 = L_83;
			t544 * L_84 = V_11;
			int32_t L_85 = m3384(L_84, &m3384_MI);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			t716 * L_86 = V_9;
			float L_87 = (L_86->f2);
			float L_88 = (__this->f24);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_89 = m608(NULL, L_87, L_88, &m608_MI);
			__this->f24 = L_89;
			t716 * L_90 = V_9;
			float L_91 = (L_90->f3);
			float L_92 = (__this->f25);
			float L_93 = m608(NULL, L_91, L_92, &m608_MI);
			__this->f25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->f19);
			t716 * L_95 = V_9;
			int32_t L_96 = (L_95->f6);
			__this->f19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = m4281((&V_10), m4281_MI_var);
			if (L_97)
			{
				goto IL_01e9;
			}
		}

IL_029e:
		{
			IL2CPP_LEAVE(0x2B0, FINALLY_02a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_02a3;
	}

FINALLY_02a3:
	{ // begin finally (depth: 1)
		t886  L_98 = V_10;
		t886  L_99 = L_98;
		t9 * L_100 = Box(t886_TI_var, &L_99);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_100);
		IL2CPP_END_FINALLY(675)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(675)
	{
		IL2CPP_JUMP_TBL(0x2B0, IL_02b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_02b0:
	{
		V_12 = (0.0f);
		V_13 = (0.0f);
		t708 * L_101 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_102 = m3410(NULL, &m3410_MI);
		if ((!(((t9*)(t708 *)L_101) == ((t9*)(t708 *)L_102))))
		{
			goto IL_02d9;
		}
	}
	{
		bool L_103 = (__this->f21);
		if (!L_103)
		{
			goto IL_0310;
		}
	}

IL_02d9:
	{
		t708 * L_104 = m3267(__this, &m3267_MI);
		t544 * L_105 = m3399(L_104, &m3399_MI);
		int32_t L_106 = m2980(L_105, &m2980_MI);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_108 = m2799(NULL, L_106, L_107, &m2799_MI);
		V_12 = (((float)L_108));
		t708 * L_109 = m3267(__this, &m3267_MI);
		t544 * L_110 = m3399(L_109, &m3399_MI);
		int32_t L_111 = m3384(L_110, &m3384_MI);
		int32_t L_112 = V_1;
		int32_t L_113 = m2799(NULL, L_111, L_112, &m2799_MI);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		t544 * L_114 = (__this->f26);
		int32_t L_115 = V_0;
		m3383(L_114, L_115, &m3383_MI);
		t544 * L_116 = (__this->f26);
		int32_t L_117 = V_1;
		m3385(L_116, L_117, &m3385_MI);
		float L_118 = (0.0f);
		V_13 = L_118;
		V_12 = L_118;
	}

IL_0332:
	{
		float L_119 = (__this->f2);
		float L_120 = (__this->f24);
		float L_121 = V_12;
		float L_122 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_123 = m608(NULL, L_119, ((float)((float)((float)((float)L_120+(float)L_121))+(float)L_122)), &m608_MI);
		__this->f2 = L_123;
		float L_124 = (__this->f3);
		if ((!(((float)L_124) == ((float)(0.0f)))))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_125 = (__this->f6);
		int32_t L_126 = (__this->f19);
		t708 * L_127 = m3267(__this, &m3267_MI);
		bool L_128 = m3405(L_127, &m3405_MI);
		G_B35_0 = L_126;
		G_B35_1 = L_125;
		G_B35_2 = __this;
		if (!L_128)
		{
			G_B36_0 = L_126;
			G_B36_1 = L_125;
			G_B36_2 = __this;
			goto IL_0382;
		}
	}
	{
		G_B37_0 = 1;
		G_B37_1 = G_B35_0;
		G_B37_2 = G_B35_1;
		G_B37_3 = G_B35_2;
		goto IL_0383;
	}

IL_0382:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
		G_B37_2 = G_B36_1;
		G_B37_3 = G_B36_2;
	}

IL_0383:
	{
		G_B37_3->f6 = ((int32_t)((int32_t)G_B37_2+(int32_t)((int32_t)((int32_t)G_B37_1+(int32_t)G_B37_0))));
		float L_129 = (__this->f25);
		float L_130 = V_12;
		float L_131 = V_13;
		__this->f3 = ((float)((float)((float)((float)L_129+(float)L_130))+(float)L_131));
		goto IL_03a8;
	}

IL_03a1:
	{
		__this->f6 = 0;
	}

IL_03a8:
	{
		float L_132 = (__this->f3);
		float L_133 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_134 = m608(NULL, L_132, L_133, &m608_MI);
		__this->f3 = L_134;
		t708 * L_135 = m3267(__this, &m3267_MI);
		float L_136 = m3402(L_135, &m3402_MI);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		t708 * L_137 = m3267(__this, &m3267_MI);
		float L_138 = m3402(L_137, &m3402_MI);
		float L_139 = L_138;
		V_14 = L_139;
		__this->f2 = L_139;
		float L_140 = V_14;
		__this->f3 = L_140;
		__this->f6 = 0;
	}

IL_03f7:
	{
		return;
	}
}
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4283_MI_var;
extern MethodInfo* m4284_MI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern "C" void m3285 (t712 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3285_init;
	if (!m3285_init)
	{
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4283_MI_var = il2cpp_codegen_genericmethod_get_method(&m4283_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3285_init = true;
	}
	t544 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	t716 * V_8 = {0};
	t886  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	t716 * V_13 = {0};
	t886  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	t716 * V_20 = {0};
	t886  V_21 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B22_0 = 0;
	{
		float L_0 = p0;
		float L_1 = p1;
		m3273(__this, L_0, L_1, &m3273_MI);
		t717 * L_2 = (__this->f10);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		t708 * L_4 = m3267(__this, &m3267_MI);
		t544 * L_5 = m3399(L_4, &m3399_MI);
		V_0 = L_5;
		bool L_6 = (__this->f12);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		p0 = (0.0f);
	}

IL_0037:
	{
		bool L_7 = (__this->f11);
		if (!L_7)
		{
			goto IL_022f;
		}
	}
	{
		t708 * L_8 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_9 = m3410(NULL, &m3410_MI);
		if ((((t9*)(t708 *)L_8) == ((t9*)(t708 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		t544 * L_10 = V_0;
		int32_t L_11 = m2980(L_10, &m2980_MI);
		V_1 = (((float)L_11));
		t544 * L_12 = V_0;
		int32_t L_13 = m3384(L_12, &m3384_MI);
		V_2 = (((float)L_13));
		t717 * L_14 = (__this->f10);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		t717 * L_17 = (__this->f10);
		t716 * L_18 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_17, 0);
		t544 * L_19 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_18);
		int32_t L_20 = m2980(L_19, &m2980_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_21 = m608(NULL, L_16, (((float)L_20)), &m608_MI);
		V_1 = L_21;
		float L_22 = V_2;
		t717 * L_23 = (__this->f10);
		t717 * L_24 = (__this->f10);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_24);
		t716 * L_26 = (t716 *)VirtFuncInvoker1< t716 *, int32_t >::Invoke(m4284_MI_var, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		t544 * L_27 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_26);
		int32_t L_28 = m3384(L_27, &m3384_MI);
		float L_29 = m608(NULL, L_22, (((float)L_28)), &m608_MI);
		V_2 = L_29;
	}

IL_00ba:
	{
		float L_30 = p0;
		float L_31 = V_1;
		p0 = ((float)((float)L_30+(float)L_31));
		float L_32 = p1;
		float L_33 = V_2;
		float L_34 = V_1;
		p1 = ((float)((float)L_32-(float)((float)((float)L_33+(float)L_34))));
	}

IL_00c6:
	{
		float L_35 = p1;
		float L_36 = (__this->f13);
		t717 * L_37 = (__this->f10);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4283_MI_var, L_37);
		V_3 = ((float)((float)L_35-(float)((float)((float)L_36*(float)(((float)((int32_t)((int32_t)L_38-(int32_t)1))))))));
		V_4 = (0.0f);
		float L_39 = (__this->f24);
		float L_40 = (__this->f25);
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_011d;
		}
	}
	{
		float L_41 = V_3;
		float L_42 = (__this->f24);
		float L_43 = (__this->f25);
		float L_44 = (__this->f24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_45 = m620(NULL, ((float)((float)((float)((float)L_41-(float)L_42))/(float)((float)((float)L_43-(float)L_44)))), (0.0f), (1.0f), &m620_MI);
		V_4 = L_45;
	}

IL_011d:
	{
		V_5 = (0.0f);
		float L_46 = V_3;
		float L_47 = (__this->f25);
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_48 = (__this->f19);
		if ((((int32_t)L_48) <= ((int32_t)0)))
		{
			goto IL_014e;
		}
	}
	{
		float L_49 = V_3;
		float L_50 = (__this->f25);
		int32_t L_51 = (__this->f19);
		V_5 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)(((float)L_51))));
	}

IL_014e:
	{
		V_6 = 0;
		V_7 = 1;
		t717 * L_52 = (__this->f10);
		t886  L_53 = m4279(L_52, m4279_MI_var);
		V_9 = L_53;
	}

IL_0161:
	try
	{ // begin try (depth: 1)
		{
			goto IL_020c;
		}

IL_0166:
		{
			t716 * L_54 = m4280((&V_9), m4280_MI_var);
			V_8 = L_54;
			t716 * L_55 = V_8;
			float L_56 = (L_55->f2);
			t716 * L_57 = V_8;
			float L_58 = (L_57->f3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_60 = m585(NULL, L_56, L_58, L_59, &m585_MI);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			t716 * L_63 = V_8;
			int32_t L_64 = (L_63->f6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			t716 * L_65 = V_8;
			t708 * L_66 = m3267(L_65, &m3267_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			t708 * L_67 = m3264(NULL, &m3264_MI);
			if ((((t9*)(t708 *)L_66) == ((t9*)(t708 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			t716 * L_68 = V_8;
			t544 * L_69 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_68);
			int32_t L_70 = m2980(L_69, &m2980_MI);
			V_11 = L_70;
			bool L_71 = V_7;
			if (!L_71)
			{
				goto IL_01c2;
			}
		}

IL_01bc:
		{
			V_11 = 0;
			V_7 = 0;
		}

IL_01c2:
		{
			int32_t L_72 = V_6;
			int32_t L_73 = V_11;
			if ((((int32_t)L_72) <= ((int32_t)L_73)))
			{
				goto IL_01d2;
			}
		}

IL_01cb:
		{
			int32_t L_74 = V_6;
			G_B22_0 = L_74;
			goto IL_01d4;
		}

IL_01d2:
		{
			int32_t L_75 = V_11;
			G_B22_0 = L_75;
		}

IL_01d4:
		{
			V_12 = G_B22_0;
			float L_76 = p0;
			int32_t L_77 = V_12;
			p0 = ((float)((float)L_76+(float)(((float)L_77))));
			t716 * L_78 = V_8;
			t544 * L_79 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_78);
			int32_t L_80 = m3384(L_79, &m3384_MI);
			V_6 = L_80;
		}

IL_01eb:
		{
			t716 * L_81 = V_8;
			float L_82 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			VirtActionInvoker2< float, float >::Invoke(&m3273_MI, L_81, L_83, L_85);
			float L_86 = p0;
			float L_87 = V_10;
			float L_88 = (__this->f13);
			p0 = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = m4281((&V_9), m4281_MI_var);
			if (L_89)
			{
				goto IL_0166;
			}
		}

IL_0218:
		{
			IL2CPP_LEAVE(0x22A, FINALLY_021d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_021d;
	}

FINALLY_021d:
	{ // begin finally (depth: 1)
		t886  L_90 = V_9;
		t886  L_91 = L_90;
		t9 * L_92 = Box(t886_TI_var, &L_91);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_92);
		IL2CPP_END_FINALLY(541)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(541)
	{
		IL2CPP_JUMP_TBL(0x22A, IL_022a)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_022a:
	{
		goto IL_03c1;
	}

IL_022f:
	{
		t708 * L_93 = m3267(__this, &m3267_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_94 = m3410(NULL, &m3410_MI);
		if ((((t9*)(t708 *)L_93) == ((t9*)(t708 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		t717 * L_95 = (__this->f10);
		t886  L_96 = m4279(L_95, m4279_MI_var);
		V_14 = L_96;
	}

IL_024c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d3;
		}

IL_0251:
		{
			t716 * L_97 = m4280((&V_14), m4280_MI_var);
			V_13 = L_97;
			t716 * L_98 = V_13;
			t544 * L_99 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_98);
			int32_t L_100 = m2980(L_99, &m2980_MI);
			t544 * L_101 = V_0;
			int32_t L_102 = m2980(L_101, &m2980_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_103 = m2799(NULL, L_100, L_102, &m2799_MI);
			V_15 = (((float)L_103));
			float L_104 = p0;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = p1;
			t716 * L_107 = V_13;
			t544 * L_108 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_107);
			int32_t L_109 = m3384(L_108, &m3384_MI);
			t544 * L_110 = V_0;
			int32_t L_111 = m3384(L_110, &m3384_MI);
			int32_t L_112 = m2799(NULL, L_109, L_111, &m2799_MI);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			t716 * L_114 = V_13;
			int32_t L_115 = (L_114->f6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			t716 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			VirtActionInvoker2< float, float >::Invoke(&m3273_MI, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			t716 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			t716 * L_122 = V_13;
			float L_123 = (L_122->f2);
			t716 * L_124 = V_13;
			float L_125 = (L_124->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_126 = m620(NULL, L_121, L_123, L_125, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3273_MI, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = m4281((&V_14), m4281_MI_var);
			if (L_127)
			{
				goto IL_0251;
			}
		}

IL_02df:
		{
			IL2CPP_LEAVE(0x2F1, FINALLY_02e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_02e4;
	}

FINALLY_02e4:
	{ // begin finally (depth: 1)
		t886  L_128 = V_14;
		t886  L_129 = L_128;
		t9 * L_130 = Box(t886_TI_var, &L_129);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_130);
		IL2CPP_END_FINALLY(740)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(740)
	{
		IL2CPP_JUMP_TBL(0x2F1, IL_02f1)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_02f1:
	{
		goto IL_03c1;
	}

IL_02f6:
	{
		float L_131 = p0;
		t544 * L_132 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3278_MI, __this);
		int32_t L_133 = m2980(L_132, &m2980_MI);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = p1;
		t544 * L_135 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3278_MI, __this);
		int32_t L_136 = m2971(L_135, &m2971_MI);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		t717 * L_137 = (__this->f10);
		t886  L_138 = m4279(L_137, m4279_MI_var);
		V_21 = L_138;
	}

IL_0323:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03a3;
		}

IL_0328:
		{
			t716 * L_139 = m4280((&V_21), m4280_MI_var);
			V_20 = L_139;
			t716 * L_140 = V_20;
			int32_t L_141 = (L_140->f6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			t716 * L_142 = V_20;
			float L_143 = V_18;
			t716 * L_144 = V_20;
			t544 * L_145 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_144);
			int32_t L_146 = m2980(L_145, &m2980_MI);
			float L_147 = V_19;
			t716 * L_148 = V_20;
			t544 * L_149 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_148);
			int32_t L_150 = m2971(L_149, &m2971_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3273_MI, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			t716 * L_151 = V_20;
			float L_152 = V_18;
			t716 * L_153 = V_20;
			t544 * L_154 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_153);
			int32_t L_155 = m2980(L_154, &m2980_MI);
			float L_156 = V_19;
			t716 * L_157 = V_20;
			t544 * L_158 = (t544 *)VirtFuncInvoker0< t544 * >::Invoke(&m3269_MI, L_157);
			int32_t L_159 = m2971(L_158, &m2971_MI);
			t716 * L_160 = V_20;
			float L_161 = (L_160->f2);
			t716 * L_162 = V_20;
			float L_163 = (L_162->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_164 = m620(NULL, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3273_MI, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = m4281((&V_21), m4281_MI_var);
			if (L_165)
			{
				goto IL_0328;
			}
		}

IL_03af:
		{
			IL2CPP_LEAVE(0x3C1, FINALLY_03b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_03b4;
	}

FINALLY_03b4:
	{ // begin finally (depth: 1)
		t886  L_166 = V_21;
		t886  L_167 = L_166;
		t9 * L_168 = Box(t886_TI_var, &L_167);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_168);
		IL2CPP_END_FINALLY(948)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(948)
	{
		IL2CPP_JUMP_TBL(0x3C1, IL_03c1)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_03c1:
	{
		return;
	}
}
extern MethodInfo m3286_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4279_MI_var;
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4281_MI_var;
extern "C" t2* m3286 (t712 * __this, MethodInfo* method)
{
	static bool m3286_init;
	if (!m3286_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4279_MI_var = il2cpp_codegen_genericmethod_get_method(&m4279_GM);
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3286_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	t716 * V_3 = {0};
	t886  V_4 = {0};
	t2* V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0023;
	}

IL_0013:
	{
		t2* L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m610(NULL, L_2, (t2*) &_stringLiteral163, &m610_MI);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t716_TI));
		int32_t L_6 = ((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		t2* L_7 = V_0;
		V_5 = L_7;
		t158* L_8 = ((t158*)SZArrayNew(t158_TI_var, 5));
		t2* L_9 = V_5;
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 0)) = (t9 *)L_9;
		t158* L_10 = L_8;
		t2* L_11 = m3276(__this, &m3276_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 1)) = (t9 *)L_11;
		t158* L_12 = L_10;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral170);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 2)) = (t9 *)(t2*) &_stringLiteral170;
		t158* L_13 = L_12;
		float L_14 = (__this->f24);
		float L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t123_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 3)) = (t9 *)L_16;
		t158* L_17 = L_13;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral171);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 4)) = (t9 *)(t2*) &_stringLiteral171;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m515(NULL, L_17, &m515_MI);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t716_TI));
		int32_t L_19 = ((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9;
		((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		t717 * L_20 = (__this->f10);
		t886  L_21 = m4279(L_20, m4279_MI_var);
		V_4 = L_21;
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0087:
		{
			t716 * L_22 = m4280((&V_4), m4280_MI_var);
			V_3 = L_22;
			t2* L_23 = V_0;
			t716 * L_24 = V_3;
			t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m3276_MI, L_24);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_26 = m399(NULL, L_23, L_25, (t2*) &_stringLiteral172, &m399_MI);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = m4281((&V_4), m4281_MI_var);
			if (L_27)
			{
				goto IL_0087;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00b2;
	}

FINALLY_00b2:
	{ // begin finally (depth: 1)
		t886  L_28 = V_4;
		t886  L_29 = L_28;
		t9 * L_30 = Box(t886_TI_var, &L_29);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_30);
		IL2CPP_END_FINALLY(178)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(178)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00bf:
	{
		t2* L_31 = V_0;
		t2* L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_33 = m399(NULL, L_31, L_32, (t2*) &_stringLiteral173, &m399_MI);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t716_TI));
		int32_t L_34 = ((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9;
		((t716_SFs*)InitializedTypeInfo(&t716_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		t2* L_35 = V_0;
		return L_35;
	}
}
#include "t718.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t718_TI;
#include "t718MD.h"

extern MethodInfo m3289_MI;
extern MethodInfo m3290_MI;


extern MethodInfo m3287_MI;
extern "C" void m3287 (t718 * __this, MethodInfo* method)
{
	{
		__this->f33 = 1;
		__this->f34 = 1;
		m3277(__this, &m3277_MI);
		return;
	}
}
extern MethodInfo m3288_MI;
extern "C" void m3288 (t718 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = (__this->f0);
		V_0 = L_0;
		float L_1 = (__this->f1);
		V_1 = L_1;
		bool L_2 = (__this->f33);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->f0 = (0.0f);
		__this->f1 = (0.0f);
	}

IL_002f:
	{
		m3282(__this, &m3282_MI);
		float L_3 = (__this->f0);
		__this->f27 = L_3;
		float L_4 = (__this->f1);
		__this->f28 = L_4;
		bool L_5 = (__this->f33);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		float L_6 = (__this->f0);
		if ((!(((float)L_6) > ((float)(32.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		__this->f0 = (32.0f);
	}

IL_0073:
	{
		float L_7 = V_0;
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_0085;
		}
	}
	{
		float L_8 = V_0;
		__this->f0 = L_8;
	}

IL_0085:
	{
		float L_9 = V_1;
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_10 = V_1;
		__this->f1 = L_10;
		__this->f5 = 0;
	}

IL_009e:
	{
		return;
	}
}
extern "C" void m3289 (t718 * __this, float p0, float p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = (__this->f36);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = p1;
		t708 * L_2 = (__this->f38);
		float L_3 = m3401(L_2, &m3401_MI);
		t708 * L_4 = (__this->f38);
		t544 * L_5 = m3398(L_4, &m3398_MI);
		int32_t L_6 = m2979(L_5, &m2979_MI);
		G_B3_0 = ((float)((float)((float)((float)L_1-(float)L_3))-(float)(((float)L_6))));
		goto IL_0030;
	}

IL_002f:
	{
		float L_7 = p1;
		G_B3_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B3_0;
		bool L_8 = (__this->f33);
		if (!L_8)
		{
			goto IL_0091;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->f27);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0091;
		}
	}
	{
		__this->f35 = 1;
		float L_11 = (__this->f27);
		__this->f0 = L_11;
		float L_12 = (__this->f28);
		__this->f1 = L_12;
		float L_13 = p0;
		float L_14 = (__this->f27);
		m3283(__this, L_13, L_14, &m3283_MI);
		t448 * L_15 = &(__this->f4);
		float L_16 = p1;
		m2725(L_15, L_16, &m2725_MI);
		float L_17 = (__this->f27);
		__this->f31 = L_17;
		goto IL_00d6;
	}

IL_0091:
	{
		__this->f35 = 0;
		bool L_18 = (__this->f33);
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = (__this->f27);
		__this->f0 = L_19;
		float L_20 = (__this->f28);
		__this->f1 = L_20;
	}

IL_00bb:
	{
		float L_21 = p0;
		float L_22 = V_0;
		m3283(__this, L_21, L_22, &m3283_MI);
		t448 * L_23 = &(__this->f4);
		float L_24 = p1;
		m2725(L_23, L_24, &m2725_MI);
		float L_25 = V_0;
		__this->f31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
extern "C" void m3290 (t718 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (__this->f2);
		V_0 = L_0;
		float L_1 = (__this->f3);
		V_1 = L_1;
		bool L_2 = (__this->f34);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		__this->f2 = (0.0f);
		__this->f3 = (0.0f);
	}

IL_002f:
	{
		m3284(__this, &m3284_MI);
		float L_3 = (__this->f2);
		__this->f29 = L_3;
		float L_4 = (__this->f3);
		__this->f30 = L_4;
		bool L_5 = (__this->f35);
		if (!L_5)
		{
			goto IL_0092;
		}
	}
	{
		t708 * L_6 = (__this->f37);
		float L_7 = m3402(L_6, &m3402_MI);
		t708 * L_8 = (__this->f37);
		t544 * L_9 = m3398(L_8, &m3398_MI);
		int32_t L_10 = m2980(L_9, &m2980_MI);
		V_2 = ((float)((float)L_7+(float)(((float)L_10))));
		float L_11 = (__this->f2);
		float L_12 = V_2;
		__this->f2 = ((float)((float)L_11+(float)L_12));
		float L_13 = (__this->f3);
		float L_14 = V_2;
		__this->f3 = ((float)((float)L_13+(float)L_14));
	}

IL_0092:
	{
		bool L_15 = (__this->f34);
		if (!L_15)
		{
			goto IL_00e3;
		}
	}
	{
		float L_16 = (__this->f2);
		if ((!(((float)L_16) > ((float)(32.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		__this->f2 = (32.0f);
	}

IL_00b8:
	{
		float L_17 = V_0;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_18 = V_0;
		__this->f2 = L_18;
	}

IL_00ca:
	{
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_20 = V_1;
		__this->f3 = L_20;
		__this->f6 = 0;
	}

IL_00e3:
	{
		return;
	}
}
extern MethodInfo m3291_MI;
extern "C" void m3291 (t718 * __this, float p0, float p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = p1;
		V_0 = L_0;
		bool L_1 = (__this->f35);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		float L_2 = V_0;
		t708 * L_3 = (__this->f37);
		float L_4 = m3402(L_3, &m3402_MI);
		t708 * L_5 = (__this->f37);
		t544 * L_6 = m3398(L_5, &m3398_MI);
		int32_t L_7 = m2980(L_6, &m2980_MI);
		V_0 = ((float)((float)L_2-(float)((float)((float)L_4+(float)(((float)L_7))))));
	}

IL_002d:
	{
		bool L_8 = (__this->f34);
		if (!L_8)
		{
			goto IL_0139;
		}
	}
	{
		float L_9 = V_0;
		float L_10 = (__this->f29);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0139;
		}
	}
	{
		bool L_11 = (__this->f35);
		if (L_11)
		{
			goto IL_00db;
		}
	}
	{
		bool L_12 = (__this->f36);
		if (L_12)
		{
			goto IL_00db;
		}
	}
	{
		t448 * L_13 = &(__this->f4);
		float L_14 = m2654(L_13, &m2654_MI);
		t708 * L_15 = (__this->f38);
		float L_16 = m3401(L_15, &m3401_MI);
		t708 * L_17 = (__this->f38);
		t544 * L_18 = m3398(L_17, &m3398_MI);
		int32_t L_19 = m2979(L_18, &m2979_MI);
		__this->f31 = ((float)((float)((float)((float)L_14-(float)L_16))-(float)(((float)L_19))));
		float L_20 = (__this->f31);
		float L_21 = (__this->f27);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00a6;
		}
	}
	{
		float L_22 = (__this->f27);
		__this->f31 = L_22;
	}

IL_00a6:
	{
		t448 * L_23 = &(__this->f4);
		float L_24 = m2654(L_23, &m2654_MI);
		V_1 = L_24;
		t448 * L_25 = &(__this->f4);
		float L_26 = m2659(L_25, &m2659_MI);
		float L_27 = (__this->f31);
		VirtActionInvoker2< float, float >::Invoke(&m3289_MI, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(&m3290_MI, __this);
		t448 * L_28 = &(__this->f4);
		float L_29 = V_1;
		m2725(L_28, L_29, &m2725_MI);
	}

IL_00db:
	{
		float L_30 = (__this->f2);
		V_2 = L_30;
		float L_31 = (__this->f3);
		V_3 = L_31;
		float L_32 = (__this->f29);
		__this->f2 = L_32;
		float L_33 = (__this->f30);
		__this->f3 = L_33;
		float L_34 = p0;
		float L_35 = (__this->f29);
		m3285(__this, L_34, L_35, &m3285_MI);
		float L_36 = V_2;
		__this->f2 = L_36;
		float L_37 = V_3;
		__this->f3 = L_37;
		t448 * L_38 = &(__this->f4);
		float L_39 = p1;
		m2722(L_38, L_39, &m2722_MI);
		float L_40 = (__this->f29);
		__this->f32 = L_40;
		goto IL_0177;
	}

IL_0139:
	{
		bool L_41 = (__this->f34);
		if (!L_41)
		{
			goto IL_015c;
		}
	}
	{
		float L_42 = (__this->f29);
		__this->f2 = L_42;
		float L_43 = (__this->f30);
		__this->f3 = L_43;
	}

IL_015c:
	{
		float L_44 = p0;
		float L_45 = V_0;
		m3285(__this, L_44, L_45, &m3285_MI);
		t448 * L_46 = &(__this->f4);
		float L_47 = p1;
		m2722(L_46, L_47, &m2722_MI);
		float L_48 = V_0;
		__this->f32 = L_48;
	}

IL_0177:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t719_TI;
#include "t719MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m3292 (t710 * __this, int32_t p0, t9 * p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		__this->f0 = L_0;
		t9 * L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t720_TI;
#include "t720MD.h"



#include "t721.h"
#ifndef _MSC_VER
#else
#endif

#include "t28.h"
extern TypeInfo t598_TI;
#include "t28MD.h"
#include "t598MD.h"
extern MethodInfo m1242_MI;
extern MethodInfo m3297_MI;
extern MethodInfo m3366_MI;
extern MethodInfo m3299_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m3303_MI;


extern MethodInfo m3293_MI;
extern "C" void m3293 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = m1242(NULL, &m1242_MI);
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f2 = L_0;
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f3 = 0;
		return;
	}
}
extern MethodInfo m3294_MI;
extern "C" t2* m3294 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3294_ftn) ();
	static m3294_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3294_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3295_MI;
extern "C" void m3295 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef void (*m3295_ftn) (t2*);
	static m3295_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3295_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(p0);
}
extern "C" t706 * m3296 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		int32_t L_0 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f0;
		t706 * L_1 = m3297(NULL, L_0, &m3297_MI);
		return L_1;
	}
}
extern "C" t706 * m3297 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t706 * (*m3297_ftn) (int32_t);
	static m3297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3298_MI;
extern "C" void m3298 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f0 = L_0;
		int32_t L_1 = p1;
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		m3246(NULL, (t706 *)NULL, &m3246_MI);
		int32_t L_2 = p2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
		m3254(NULL, L_3, 0, &m3254_MI);
		int32_t L_4 = p1;
		m3255(NULL, L_4, &m3255_MI);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t705_TI));
		m3248(NULL, 0, &m3248_MI);
		return;
	}
}
extern "C" void m3299 (t9 * __this , MethodInfo* method)
{
	typedef void (*m3299_ftn) ();
	static m3299_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3299_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
extern MethodInfo m3300_MI;
extern "C" void m3300 (t9 * __this , int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
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
			t485 * L_0 = m3427(NULL, &m3427_MI);
			int32_t L_1 = m3423(L_0, &m3423_MI);
			if ((!(((uint32_t)L_1) == ((uint32_t)8))))
			{
				goto IL_0042;
			}
		}

IL_0010:
		{
			int32_t L_2 = p0;
			V_0 = L_2;
			int32_t L_3 = V_0;
			if (L_3 == 0)
			{
				goto IL_0029;
			}
			if (L_3 == 1)
			{
				goto IL_002e;
			}
			if (L_3 == 2)
			{
				goto IL_0038;
			}
		}

IL_0024:
		{
			goto IL_0042;
		}

IL_0029:
		{
			goto IL_0042;
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			m3257(NULL, &m3257_MI);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			m3258(NULL, &m3258_MI);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
			int32_t L_4 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t713_TI));
			m3254(NULL, L_4, 0, &m3254_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t598_TI));
			m3366(NULL, &m3366_MI);
			IL2CPP_LEAVE(0x5E, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		m3299(NULL, &m3299_MI);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_005e:
	{
		return;
	}
}
extern MethodInfo m3301_MI;
extern "C" bool m3301 (t9 * __this , t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		t138 * L_1 = p0;
		if (((t720 *)IsInst(L_1, InitializedTypeInfo(&t720_TI))))
		{
			goto IL_0025;
		}
	}
	{
		t138 * L_2 = p0;
		t138 * L_3 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4285_MI, L_2);
		if (((t720 *)IsInst(L_3, InitializedTypeInfo(&t720_TI))))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		m3299(NULL, &m3299_MI);
		return 1;
	}
}
extern "C" void m3302 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		int32_t L_0 = m3303(NULL, &m3303_MI);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t570 * L_1 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_1, (t2*) &_stringLiteral174, &m2949_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" int32_t m3303 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3303_ftn) ();
	static m3303_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3303_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
#include "t722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t722_TI;
#include "t722MD.h"

extern TypeInfo t43_TI;
#include "t43MD.h"
extern MethodInfo m2643_MI;
extern MethodInfo m3454_MI;


extern MethodInfo m3304_MI;
extern "C" void m3304 (t722 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		__this->f1 = 1;
		t43  L_0 = m2643(NULL, &m2643_MI);
		__this->f2 = L_0;
		__this->f3 = (-1.0f);
		t43  L_1 = {0};
		m3454(&L_1, (0.5f), (0.5f), (1.0f), &m3454_MI);
		__this->f4 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
#include "t723.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t723_TI;
#include "t723MD.h"



extern MethodInfo m3305_MI;
extern "C" void m3305 (t723 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3306_MI;
extern "C" void m3306 (t723 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3306((t723 *)__this->f9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,(MethodInfo*)(__this->f3.f0));
}
extern "C" void pinvoke_delegate_wrapper_t723(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3307_MI;
extern "C" t9 * m3307 (t723 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3308_MI;
extern "C" void m3308 (t723 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t706_TI;

#include "t431.h"
#include "t887.h"
#include "t725.h"
#include "t726.h"
#include "t888.h"
#include "t889.h"
extern TypeInfo t724_TI;
extern TypeInfo t887_TI;
extern TypeInfo t725_TI;
extern TypeInfo t603_TI;
extern TypeInfo t889_TI;
#include "t143MD.h"
#include "t887MD.h"
#include "t725MD.h"
#include "t726MD.h"
#include "t888MD.h"
extern Il2CppType t724_0_0_0;
extern Il2CppType t725_0_0_0;
extern Il2CppType t889_0_0_0;
extern MethodInfo m333_MI;
extern MethodInfo m3409_MI;
extern MethodInfo m3357_MI;
extern MethodInfo m611_MI;
extern MethodInfo m3358_MI;
extern MethodInfo m4286_MI;
extern MethodInfo m4287_MI;
extern MethodInfo m4288_MI;
extern MethodInfo m3395_MI;
extern MethodInfo m3356_MI;
extern MethodInfo m3406_MI;
extern MethodInfo m3396_MI;
extern MethodInfo m3457_MI;
extern MethodInfo m3374_MI;
extern MethodInfo m3360_MI;
extern MethodInfo m425_MI;
extern MethodInfo m1219_MI;
extern MethodInfo m400_MI;
extern MethodInfo m4289_MI;
extern MethodInfo m3311_MI;
extern Il2CppGenericMethod m4287_GM;
extern Il2CppGenericMethod m4288_GM;
extern Il2CppGenericMethod m4289_GM;
extern Il2CppGenericMethod m4290_GM;
extern Il2CppGenericMethod m4291_GM;


extern MethodInfo m3309_MI;
extern TypeInfo* t724_TI_var;
extern "C" void m3309 (t706 * __this, MethodInfo* method)
{
	static bool m3309_init;
	if (!m3309_init)
	{
		t724_TI_var = il2cpp_codegen_class_from_type(&t724_0_0_0);
		m3309_init = true;
	}
	{
		t722 * L_0 = (t722 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t722_TI));
		m3304(L_0, &m3304_MI);
		__this->f24 = L_0;
		m3188(__this, &m3188_MI);
		__this->f23 = ((t724*)SZArrayNew(t724_TI_var, 1));
		return;
	}
}
extern MethodInfo m3310_MI;
extern "C" void m3310 (t706 * __this, MethodInfo* method)
{
	{
		m3357(__this, &m3357_MI);
		return;
	}
}
extern "C" t431 * m3311 (t706 * __this, MethodInfo* method)
{
	{
		t431 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3312_MI;
extern "C" void m3312 (t706 * __this, t431 * p0, MethodInfo* method)
{
	{
		t431 * L_0 = p0;
		__this->f2 = L_0;
		t706 * L_1 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f28;
		bool L_2 = m333(NULL, L_1, __this, &m333_MI);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		t431 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		m3409(NULL, L_3, &m3409_MI);
	}

IL_0022:
	{
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3313_MI;
extern "C" t708 * m3313 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3314_MI;
extern "C" void m3314 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f3 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3315_MI;
extern "C" t708 * m3315 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3316_MI;
extern "C" void m3316 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f6 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3317_MI;
extern "C" t708 * m3317 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3318_MI;
extern "C" void m3318 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f7 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3319_MI;
extern "C" t708 * m3319 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3320_MI;
extern "C" void m3320 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f8 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3321_MI;
extern "C" t708 * m3321 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3322_MI;
extern "C" void m3322 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f4 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3323_MI;
extern "C" t708 * m3323 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3324_MI;
extern "C" void m3324 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f5 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3325_MI;
extern "C" t708 * m3325 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m3326_MI;
extern "C" void m3326 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f9 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3327_MI;
extern "C" t708 * m3327 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m3328_MI;
extern "C" void m3328 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f10 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3329_MI;
extern "C" t708 * m3329 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m3330_MI;
extern "C" void m3330 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f11 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3331_MI;
extern "C" t708 * m3331 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m3332_MI;
extern "C" void m3332 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f12 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3333_MI;
extern "C" t708 * m3333 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m3334_MI;
extern "C" void m3334 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f13 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3335_MI;
extern "C" t708 * m3335 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m3336_MI;
extern "C" void m3336 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f14 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3337_MI;
extern "C" t708 * m3337 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m3338_MI;
extern "C" void m3338 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f15 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3339_MI;
extern "C" t708 * m3339 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m3340_MI;
extern "C" void m3340 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f16 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3341_MI;
extern "C" t708 * m3341 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m3342_MI;
extern "C" void m3342 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f17 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3343_MI;
extern "C" t708 * m3343 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m3344_MI;
extern "C" void m3344 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f18 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3345_MI;
extern "C" t708 * m3345 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m3346_MI;
extern "C" void m3346 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f19 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3347_MI;
extern "C" t708 * m3347 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m3348_MI;
extern "C" void m3348 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f20 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3349_MI;
extern "C" t708 * m3349 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m3350_MI;
extern "C" void m3350 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f21 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3351_MI;
extern "C" t708 * m3351 (t706 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m3352_MI;
extern "C" void m3352 (t706 * __this, t708 * p0, MethodInfo* method)
{
	{
		t708 * L_0 = p0;
		__this->f22 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3353_MI;
extern "C" t724* m3353 (t706 * __this, MethodInfo* method)
{
	{
		t724* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m3354_MI;
extern "C" void m3354 (t706 * __this, t724* p0, MethodInfo* method)
{
	{
		t724* L_0 = p0;
		__this->f23 = L_0;
		m3357(__this, &m3357_MI);
		return;
	}
}
extern MethodInfo m3355_MI;
extern "C" t722 * m3355 (t706 * __this, MethodInfo* method)
{
	{
		t722 * L_0 = (__this->f24);
		return L_0;
	}
}
extern "C" t708 * m3356 (t9 * __this , MethodInfo* method)
{
	{
		t708 * L_0 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_1, &m3389_MI);
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f25 = L_1;
	}

IL_0014:
	{
		t708 * L_2 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f25;
		return L_2;
	}
}
extern "C" void m3357 (t706 * __this, MethodInfo* method)
{
	{
		t724* L_0 = (__this->f23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m611(NULL, (t2*) &_stringLiteral175, &m611_MI);
	}

IL_0015:
	{
		m3358(__this, &m3358_MI);
		return;
	}
}
extern TypeInfo* t725_TI_var;
extern MethodInfo* m4287_MI_var;
extern MethodInfo* m4288_MI_var;
extern "C" void m3358 (t706 * __this, MethodInfo* method)
{
	static bool m3358_init;
	if (!m3358_init)
	{
		t725_TI_var = il2cpp_codegen_class_from_type(&t725_0_0_0);
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m4288_MI_var = il2cpp_codegen_genericmethod_get_method(&m4288_GM);
		m3358_init = true;
	}
	int32_t V_0 = 0;
	{
		t708 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_1, &m3389_MI);
		__this->f3 = L_1;
	}

IL_0016:
	{
		t708 * L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_3 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_3, &m3389_MI);
		__this->f4 = L_3;
	}

IL_002c:
	{
		t708 * L_4 = (__this->f5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_5 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_5, &m3389_MI);
		__this->f5 = L_5;
	}

IL_0042:
	{
		t708 * L_6 = (__this->f6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_7 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_7, &m3389_MI);
		__this->f6 = L_7;
	}

IL_0058:
	{
		t708 * L_8 = (__this->f9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_9 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_9, &m3389_MI);
		__this->f9 = L_9;
	}

IL_006e:
	{
		t708 * L_10 = (__this->f7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_11 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_11, &m3389_MI);
		__this->f7 = L_11;
	}

IL_0084:
	{
		t708 * L_12 = (__this->f8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_13 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_13, &m3389_MI);
		__this->f8 = L_13;
	}

IL_009a:
	{
		t708 * L_14 = (__this->f10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_15 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_15, &m3389_MI);
		__this->f10 = L_15;
	}

IL_00b0:
	{
		t708 * L_16 = (__this->f11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_17 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_17, &m3389_MI);
		__this->f11 = L_17;
	}

IL_00c6:
	{
		t708 * L_18 = (__this->f12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_19 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_19, &m3389_MI);
		__this->f12 = L_19;
	}

IL_00dc:
	{
		t708 * L_20 = (__this->f13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_21 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_21, &m3389_MI);
		__this->f13 = L_21;
	}

IL_00f2:
	{
		t708 * L_22 = (__this->f14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_23 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_23, &m3389_MI);
		__this->f14 = L_23;
	}

IL_0108:
	{
		t708 * L_24 = (__this->f15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_25 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_25, &m3389_MI);
		__this->f15 = L_25;
	}

IL_011e:
	{
		t708 * L_26 = (__this->f16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_27 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_27, &m3389_MI);
		__this->f16 = L_27;
	}

IL_0134:
	{
		t708 * L_28 = (__this->f17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_29 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_29, &m3389_MI);
		__this->f17 = L_29;
	}

IL_014a:
	{
		t708 * L_30 = (__this->f18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_31 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_31, &m3389_MI);
		__this->f18 = L_31;
	}

IL_0160:
	{
		t708 * L_32 = (__this->f19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_33 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_33, &m3389_MI);
		__this->f19 = L_33;
	}

IL_0176:
	{
		t708 * L_34 = (__this->f20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_35 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_35, &m3389_MI);
		__this->f20 = L_35;
	}

IL_018c:
	{
		t708 * L_36 = (__this->f21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_37 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_37, &m3389_MI);
		__this->f21 = L_37;
	}

IL_01a2:
	{
		t708 * L_38 = (__this->f22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_39 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_39, &m3389_MI);
		__this->f22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t887_TI));
		t887 * L_40 = m4286(NULL, &m4286_MI);
		t725 * L_41 = (t725 *)il2cpp_codegen_object_new (t725_TI_var);
		m4287(L_41, L_40, m4287_MI_var);
		__this->f26 = L_41;
		t725 * L_42 = (__this->f26);
		t708 * L_43 = (__this->f3);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_42, (t2*) &_stringLiteral176, L_43);
		t708 * L_44 = (__this->f3);
		m3395(L_44, (t2*) &_stringLiteral176, &m3395_MI);
		t725 * L_45 = (__this->f26);
		t708 * L_46 = (__this->f4);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_45, (t2*) &_stringLiteral177, L_46);
		t708 * L_47 = (__this->f4);
		m3395(L_47, (t2*) &_stringLiteral177, &m3395_MI);
		t725 * L_48 = (__this->f26);
		t708 * L_49 = (__this->f5);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_48, (t2*) &_stringLiteral178, L_49);
		t708 * L_50 = (__this->f5);
		m3395(L_50, (t2*) &_stringLiteral178, &m3395_MI);
		t725 * L_51 = (__this->f26);
		t708 * L_52 = (__this->f6);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_51, (t2*) &_stringLiteral179, L_52);
		t708 * L_53 = (__this->f6);
		m3395(L_53, (t2*) &_stringLiteral179, &m3395_MI);
		t725 * L_54 = (__this->f26);
		t708 * L_55 = (__this->f9);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_54, (t2*) &_stringLiteral180, L_55);
		t708 * L_56 = (__this->f9);
		m3395(L_56, (t2*) &_stringLiteral180, &m3395_MI);
		t725 * L_57 = (__this->f26);
		t708 * L_58 = (__this->f7);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_57, (t2*) &_stringLiteral181, L_58);
		t708 * L_59 = (__this->f7);
		m3395(L_59, (t2*) &_stringLiteral181, &m3395_MI);
		t725 * L_60 = (__this->f26);
		t708 * L_61 = (__this->f8);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_60, (t2*) &_stringLiteral182, L_61);
		t708 * L_62 = (__this->f8);
		m3395(L_62, (t2*) &_stringLiteral182, &m3395_MI);
		t725 * L_63 = (__this->f26);
		t708 * L_64 = (__this->f10);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_63, (t2*) &_stringLiteral183, L_64);
		t708 * L_65 = (__this->f10);
		m3395(L_65, (t2*) &_stringLiteral183, &m3395_MI);
		t725 * L_66 = (__this->f26);
		t708 * L_67 = (__this->f11);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_66, (t2*) &_stringLiteral184, L_67);
		t708 * L_68 = (__this->f11);
		m3395(L_68, (t2*) &_stringLiteral184, &m3395_MI);
		t725 * L_69 = (__this->f26);
		t708 * L_70 = (__this->f12);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_69, (t2*) &_stringLiteral185, L_70);
		t708 * L_71 = (__this->f12);
		m3395(L_71, (t2*) &_stringLiteral185, &m3395_MI);
		t725 * L_72 = (__this->f26);
		t708 * L_73 = (__this->f13);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_72, (t2*) &_stringLiteral186, L_73);
		t708 * L_74 = (__this->f13);
		m3395(L_74, (t2*) &_stringLiteral186, &m3395_MI);
		t725 * L_75 = (__this->f26);
		t708 * L_76 = (__this->f14);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_75, (t2*) &_stringLiteral187, L_76);
		t708 * L_77 = (__this->f14);
		m3395(L_77, (t2*) &_stringLiteral187, &m3395_MI);
		t725 * L_78 = (__this->f26);
		t708 * L_79 = (__this->f15);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_78, (t2*) &_stringLiteral188, L_79);
		t708 * L_80 = (__this->f15);
		m3395(L_80, (t2*) &_stringLiteral188, &m3395_MI);
		t725 * L_81 = (__this->f26);
		t708 * L_82 = (__this->f16);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_81, (t2*) &_stringLiteral189, L_82);
		t708 * L_83 = (__this->f16);
		m3395(L_83, (t2*) &_stringLiteral189, &m3395_MI);
		t725 * L_84 = (__this->f26);
		t708 * L_85 = (__this->f17);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_84, (t2*) &_stringLiteral190, L_85);
		t708 * L_86 = (__this->f17);
		m3395(L_86, (t2*) &_stringLiteral190, &m3395_MI);
		t725 * L_87 = (__this->f26);
		t708 * L_88 = (__this->f18);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_87, (t2*) &_stringLiteral191, L_88);
		t708 * L_89 = (__this->f18);
		m3395(L_89, (t2*) &_stringLiteral191, &m3395_MI);
		t725 * L_90 = (__this->f26);
		t708 * L_91 = (__this->f19);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_90, (t2*) &_stringLiteral192, L_91);
		t708 * L_92 = (__this->f19);
		m3395(L_92, (t2*) &_stringLiteral192, &m3395_MI);
		t725 * L_93 = (__this->f26);
		t708 * L_94 = (__this->f20);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_93, (t2*) &_stringLiteral193, L_94);
		t708 * L_95 = (__this->f20);
		m3395(L_95, (t2*) &_stringLiteral193, &m3395_MI);
		t725 * L_96 = (__this->f26);
		t708 * L_97 = (__this->f21);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_96, (t2*) &_stringLiteral194, L_97);
		t708 * L_98 = (__this->f21);
		m3395(L_98, (t2*) &_stringLiteral194, &m3395_MI);
		t725 * L_99 = (__this->f26);
		t708 * L_100 = (__this->f22);
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_99, (t2*) &_stringLiteral195, L_100);
		t708 * L_101 = (__this->f22);
		m3395(L_101, (t2*) &_stringLiteral195, &m3395_MI);
		t724* L_102 = (__this->f23);
		if (!L_102)
		{
			goto IL_0516;
		}
	}
	{
		V_0 = 0;
		goto IL_0508;
	}

IL_04d2:
	{
		t724* L_103 = (__this->f23);
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		if ((*(t708 **)(t708 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		t725 * L_106 = (__this->f26);
		t724* L_107 = (__this->f23);
		int32_t L_108 = V_0;
		int32_t L_109 = L_108;
		t2* L_110 = m3394((*(t708 **)(t708 **)SZArrayLdElema(L_107, L_109)), &m3394_MI);
		t724* L_111 = (__this->f23);
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		VirtActionInvoker2< t2*, t708 * >::Invoke(m4288_MI_var, L_106, L_110, (*(t708 **)(t708 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		t724* L_116 = (__this->f23);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((t121 *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		t708 * L_117 = m3356(NULL, &m3356_MI);
		m3406(L_117, 1, &m3406_MI);
		t708 * L_118 = m3356(NULL, &m3356_MI);
		t726 * L_119 = m3396(L_118, &m3396_MI);
		t43  L_120 = m3457(NULL, &m3457_MI);
		m3374(L_119, L_120, &m3374_MI);
		return;
	}
}
extern MethodInfo m3359_MI;
extern TypeInfo* t158_TI_var;
extern "C" t708 * m3359 (t706 * __this, t2* p0, MethodInfo* method)
{
	static bool m3359_init;
	if (!m3359_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3359_init = true;
	}
	t708 * V_0 = {0};
	{
		t2* L_0 = p0;
		t708 * L_1 = m3360(__this, L_0, &m3360_MI);
		V_0 = L_1;
		t708 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		t708 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		t158* L_4 = ((t158*)SZArrayNew(t158_TI_var, 6));
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral196);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 0)) = (t9 *)(t2*) &_stringLiteral196;
		t158* L_5 = L_4;
		t2* L_6 = p0;
		ArrayElementTypeCheck (L_5, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_5, 1)) = (t9 *)L_6;
		t158* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral197);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)(t2*) &_stringLiteral197;
		t158* L_8 = L_7;
		t2* L_9 = m425(__this, &m425_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_9;
		t158* L_10 = L_8;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral198);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 4)) = (t9 *)(t2*) &_stringLiteral198;
		t158* L_11 = L_10;
		t485 * L_12 = m3427(NULL, &m3427_MI);
		int32_t L_13 = m3423(L_12, &m3423_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t603_TI), &L_14);
		ArrayElementTypeCheck (L_11, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, 5)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m515(NULL, L_11, &m515_MI);
		m1219(NULL, L_16, &m1219_MI);
		t708 * L_17 = m3356(NULL, &m3356_MI);
		return L_17;
	}
}
extern MethodInfo* m4289_MI_var;
extern "C" t708 * m3360 (t706 * __this, t2* p0, MethodInfo* method)
{
	static bool m3360_init;
	if (!m3360_init)
	{
		m4289_MI_var = il2cpp_codegen_genericmethod_get_method(&m4289_GM);
		m3360_init = true;
	}
	t708 * V_0 = {0};
	{
		bool L_0 = m333(NULL, __this, (t57 *)NULL, &m333_MI);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral199, &m400_MI);
		return (t708 *)NULL;
	}

IL_0018:
	{
		t725 * L_1 = (__this->f26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		m3358(__this, &m3358_MI);
	}

IL_0029:
	{
		t725 * L_2 = (__this->f26);
		t2* L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker2< bool, t2*, t708 ** >::Invoke(m4289_MI_var, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t708 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (t708 *)NULL;
	}
}
extern "C" void m3361 (t706 * __this, MethodInfo* method)
{
	{
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f28 = __this;
		t431 * L_0 = m3311(__this, &m3311_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		m3409(NULL, L_0, &m3409_MI);
		t723 * L_1 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t723 * L_2 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f27;
		VirtActionInvoker0::Invoke(&m3306_MI, L_2);
	}

IL_0025:
	{
		return;
	}
}
extern MethodInfo m3362_MI;
extern TypeInfo* t889_TI_var;
extern MethodInfo* m4290_MI_var;
extern MethodInfo* m4291_MI_var;
extern "C" t9 * m3362 (t706 * __this, MethodInfo* method)
{
	static bool m3362_init;
	if (!m3362_init)
	{
		t889_TI_var = il2cpp_codegen_class_from_type(&t889_0_0_0);
		m4290_MI_var = il2cpp_codegen_genericmethod_get_method(&m4290_GM);
		m4291_MI_var = il2cpp_codegen_genericmethod_get_method(&m4291_GM);
		m3362_init = true;
	}
	{
		t725 * L_0 = (__this->f26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		m3358(__this, &m3358_MI);
	}

IL_0011:
	{
		t725 * L_1 = (__this->f26);
		t888 * L_2 = m4290(L_1, m4290_MI_var);
		t889  L_3 = m4291(L_2, m4291_MI_var);
		t889  L_4 = L_3;
		t9 * L_5 = Box(t889_TI_var, &L_4);
		return (t9 *)L_5;
	}
}
#include "t598.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2768_MI;
extern MethodInfo m3363_MI;


extern "C" void m3363 (t598 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f0 = L_0;
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" void m2768 (t598 * __this, t2* p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f0 = L_0;
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_1;
		m336(__this, &m336_MI);
		t2* L_2 = p0;
		__this->f0 = L_2;
		return;
	}
}
extern MethodInfo m3364_MI;
extern "C" void m3364 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t598 * L_1 = (t598 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t598_TI));
		m2768(L_1, L_0, &m2768_MI);
		((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f3 = L_1;
		t598 * L_2 = (t598 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t598_TI));
		m3363(L_2, &m3363_MI);
		((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f4 = L_2;
		t598 * L_3 = (t598 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t598_TI));
		m3363(L_3, &m3363_MI);
		((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f5 = L_3;
		t598 * L_4 = (t598 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t598_TI));
		m3363(L_4, &m3363_MI);
		((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f6 = L_4;
		return;
	}
}
extern MethodInfo m2767_MI;
extern "C" t2* m2767 (t598 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3365_MI;
extern "C" void m3365 (t598 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3366 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t598_TI));
		t598 * L_0 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f4;
		L_0->f0 = (t2*)NULL;
		t598 * L_1 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_1->f2 = L_2;
		t598 * L_3 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f5;
		L_3->f1 = (t148 *)NULL;
		t598 * L_4 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f5;
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_4->f2 = L_5;
		t598 * L_6 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f6;
		L_6->f0 = (t2*)NULL;
		t598 * L_7 = ((t598_SFs*)InitializedTypeInfo(&t598_TI)->static_fields)->f6;
		L_7->f1 = (t148 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t726_TI;

extern MethodInfo m3373_MI;
extern MethodInfo m3370_MI;
extern MethodInfo m3372_MI;
extern MethodInfo m3371_MI;


extern MethodInfo m3367_MI;
extern "C" void m3367 (t726 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3370(__this, &m3370_MI);
		return;
	}
}
extern MethodInfo m3368_MI;
extern "C" void m3368 (t726 * __this, t708 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t708 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		t439 * L_2 = m3372(__this, &m3372_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m3369_MI;
extern "C" void m3369 (t726 * __this, MethodInfo* method)
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
			t708 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3371(__this, &m3371_MI);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m3370 (t726 * __this, MethodInfo* method)
{
	typedef void (*m3370_ftn) (t726 *);
	static m3370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3371 (t726 * __this, MethodInfo* method)
{
	typedef void (*m3371_ftn) (t726 *);
	static m3371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t439 * m3372 (t726 * __this, MethodInfo* method)
{
	typedef t439 * (*m3372_ftn) (t726 *);
	static m3372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3373 (t726 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3373_ftn) (t726 *, t43 *);
	static m3373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3374 (t726 * __this, t43  p0, MethodInfo* method)
{
	{
		m3373(__this, (&p0), &m3373_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3378_MI;
extern MethodInfo m3379_MI;
extern MethodInfo m3387_MI;


extern "C" void m2984 (t544 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3378(__this, &m3378_MI);
		return;
	}
}
extern MethodInfo m3375_MI;
extern "C" void m3375 (t544 * __this, t708 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t708 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m3376_MI;
extern "C" void m3376 (t544 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3378(__this, &m3378_MI);
		int32_t L_0 = p0;
		m3380(__this, L_0, &m3380_MI);
		int32_t L_1 = p1;
		m3382(__this, L_1, &m3382_MI);
		int32_t L_2 = p2;
		m3383(__this, L_2, &m3383_MI);
		int32_t L_3 = p3;
		m3385(__this, L_3, &m3385_MI);
		return;
	}
}
extern MethodInfo m3377_MI;
extern "C" void m3377 (t544 * __this, MethodInfo* method)
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
			t708 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3379(__this, &m3379_MI);
		}

IL_0011:
		{
			IL2CPP_LEAVE(0x1D, FINALLY_0016);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_001d:
	{
		return;
	}
}
extern "C" void m3378 (t544 * __this, MethodInfo* method)
{
	typedef void (*m3378_ftn) (t544 *);
	static m3378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3379 (t544 * __this, MethodInfo* method)
{
	typedef void (*m3379_ftn) (t544 *);
	static m3379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m2979 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m2979_ftn) (t544 *);
	static m2979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3380 (t544 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3380_ftn) (t544 *, int32_t);
	static m3380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3381 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m3381_ftn) (t544 *);
	static m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3382 (t544 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3382_ftn) (t544 *, int32_t);
	static m3382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2980 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m2980_ftn) (t544 *);
	static m2980_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2980_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3383 (t544 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3383_ftn) (t544 *, int32_t);
	static m3383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3384 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m3384_ftn) (t544 *);
	static m3384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3385 (t544 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3385_ftn) (t544 *, int32_t);
	static m3385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2970 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m2970_ftn) (t544 *);
	static m2970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2970_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2971 (t544 * __this, MethodInfo* method)
{
	typedef int32_t (*m2971_ftn) (t544 *);
	static m2971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2971_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3386_MI;
extern "C" t448  m3386 (t544 * __this, t448  p0, MethodInfo* method)
{
	{
		t448  L_0 = m3387(NULL, __this, (&p0), &m3387_MI);
		return L_0;
	}
}
extern "C" t448  m3387 (t9 * __this , t544 * p0, t448 * p1, MethodInfo* method)
{
	typedef t448  (*m3387_ftn) (t544 *, t448 *);
	static m3387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3388_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3388 (t544 * __this, MethodInfo* method)
{
	static bool m3388_init;
	if (!m3388_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3388_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		int32_t L_1 = m2979(__this, &m2979_MI);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		int32_t L_5 = m3381(__this, &m3381_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		int32_t L_9 = m2980(__this, &m2980_MI);
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		int32_t L_13 = m3384(__this, &m3384_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral200, L_12, &m3626_MI);
		return L_16;
	}
}
#include "t432.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t432_TI;
#include "t432MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3397_MI;
extern MethodInfo m3400_MI;
extern MethodInfo m3407_MI;
extern MethodInfo m3392_MI;
extern MethodInfo m3393_MI;
extern MethodInfo m3412_MI;
extern MethodInfo m3413_MI;
extern MethodInfo m3415_MI;
extern MethodInfo m3417_MI;


extern "C" void m3389 (t708 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3392(__this, &m3392_MI);
		return;
	}
}
extern MethodInfo m3390_MI;
extern "C" void m3390 (t9 * __this , MethodInfo* method)
{
	{
		((t708_SFs*)InitializedTypeInfo(&t708_TI)->static_fields)->f14 = 1;
		return;
	}
}
extern MethodInfo m3391_MI;
extern "C" void m3391 (t708 * __this, MethodInfo* method)
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
		m3393(__this, &m3393_MI);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0012:
	{
		return;
	}
}
extern "C" void m3392 (t708 * __this, MethodInfo* method)
{
	typedef void (*m3392_ftn) (t708 *);
	static m3392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3393 (t708 * __this, MethodInfo* method)
{
	typedef void (*m3393_ftn) (t708 *);
	static m3393_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3393_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t2* m3394 (t708 * __this, MethodInfo* method)
{
	typedef t2* (*m3394_ftn) (t708 *);
	static m3394_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3394_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3395 (t708 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3395_ftn) (t708 *, t2*);
	static m3395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t726 * m3396 (t708 * __this, MethodInfo* method)
{
	{
		t726 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3397(__this, 0, &m3397_MI);
		t726 * L_2 = (t726 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t726_TI));
		m3368(L_2, __this, L_1, &m3368_MI);
		__this->f1 = L_2;
	}

IL_001e:
	{
		t726 * L_3 = (__this->f1);
		return L_3;
	}
}
extern "C" t58 m3397 (t708 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3397_ftn) (t708 *, int32_t);
	static m3397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t544 * m3398 (t708 * __this, MethodInfo* method)
{
	{
		t544 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3400(__this, 1, &m3400_MI);
		t544 * L_2 = (t544 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t544_TI));
		m3375(L_2, __this, L_1, &m3375_MI);
		__this->f11 = L_2;
	}

IL_001e:
	{
		t544 * L_3 = (__this->f11);
		return L_3;
	}
}
extern "C" t544 * m3399 (t708 * __this, MethodInfo* method)
{
	{
		t544 * L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3400(__this, 2, &m3400_MI);
		t544 * L_2 = (t544 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t544_TI));
		m3375(L_2, __this, L_1, &m3375_MI);
		__this->f10 = L_2;
	}

IL_001e:
	{
		t544 * L_3 = (__this->f10);
		return L_3;
	}
}
extern "C" t58 m3400 (t708 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3400_ftn) (t708 *, int32_t);
	static m3400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" float m3401 (t708 * __this, MethodInfo* method)
{
	typedef float (*m3401_ftn) (t708 *);
	static m3401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m3402 (t708 * __this, MethodInfo* method)
{
	typedef float (*m3402_ftn) (t708 *);
	static m3402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3403 (t708 * __this, MethodInfo* method)
{
	typedef bool (*m3403_ftn) (t708 *);
	static m3403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3404 (t708 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3404_ftn) (t708 *, bool);
	static m3404_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3404_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m3405 (t708 * __this, MethodInfo* method)
{
	typedef bool (*m3405_ftn) (t708 *);
	static m3405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3406 (t708 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3406_ftn) (t708 *, bool);
	static m3406_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3406_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" float m3407 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef float (*m3407_ftn) (t58);
	static m3407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3408_MI;
extern "C" float m3408 (t708 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		float L_1 = m3407(NULL, L_0, &m3407_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = roundf(L_1);
		return L_2;
	}
}
extern "C" void m3409 (t9 * __this , t431 * p0, MethodInfo* method)
{
	typedef void (*m3409_ftn) (t431 *);
	static m3409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(p0);
}
extern "C" t708 * m3410 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_0 = ((t708_SFs*)InitializedTypeInfo(&t708_TI)->static_fields)->f15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_1 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3389(L_1, &m3389_MI);
		((t708_SFs*)InitializedTypeInfo(&t708_TI)->static_fields)->f15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		t708 * L_2 = ((t708_SFs*)InitializedTypeInfo(&t708_TI)->static_fields)->f15;
		return L_2;
	}
}
extern MethodInfo m3411_MI;
extern "C" t28  m3411 (t708 * __this, t448  p0, t598 * p1, int32_t p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t448  L_1 = p0;
		t598 * L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		m3412(NULL, L_0, L_1, L_2, L_3, (&V_0), &m3412_MI);
		t28  L_4 = V_0;
		return L_4;
	}
}
extern "C" void m3412 (t9 * __this , t58 p0, t448  p1, t598 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t598 * L_1 = p2;
		int32_t L_2 = p3;
		t28 * L_3 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		m3413(NULL, L_0, (&p1), L_1, L_2, L_3, &m3413_MI);
		return;
	}
}
extern "C" void m3413 (t9 * __this , t58 p0, t448 * p1, t598 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	typedef void (*m3413_ftn) (t58, t448 *, t598 *, int32_t, t28 *);
	static m3413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3413_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m3414_MI;
extern "C" t28  m3414 (t708 * __this, t598 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t598 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		m3415(NULL, L_0, L_1, (&V_0), &m3415_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern "C" void m3415 (t9 * __this , t58 p0, t598 * p1, t28 * p2, MethodInfo* method)
{
	typedef void (*m3415_ftn) (t58, t598 *, t28 *);
	static m3415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3416_MI;
extern "C" float m3416 (t708 * __this, t598 * p0, float p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t598 * L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t708_TI));
		float L_3 = m3417(NULL, L_0, L_1, L_2, &m3417_MI);
		return L_3;
	}
}
extern "C" float m3417 (t9 * __this , t58 p0, t598 * p1, float p2, MethodInfo* method)
{
	typedef float (*m3417_ftn) (t58, t598 *, float);
	static m3417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3418_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3418 (t708 * __this, MethodInfo* method)
{
	static bool m3418_init;
	if (!m3418_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3418_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_1 = m3394(__this, &m3394_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t2* L_2 = m3626(NULL, (t2*) &_stringLiteral201, L_0, &m3626_MI);
		return L_2;
	}
}
#include "t486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t486_TI;
#include "t486MD.h"



#include "t482.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t482_TI;
#include "t482MD.h"

extern MethodInfo m3419_MI;


extern MethodInfo m2837_MI;
extern "C" t482 * m2837 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, MethodInfo* method)
{
	t2* V_0 = {0};
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		bool L_4 = p3;
		bool L_5 = p4;
		bool L_6 = V_1;
		t2* L_7 = V_0;
		t482 * L_8 = m3419(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3419_MI);
		return L_8;
	}
}
extern MethodInfo m2838_MI;
extern "C" t482 * m2838 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	t2* V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		t2* L_1 = p0;
		int32_t L_2 = p1;
		bool L_3 = p2;
		bool L_4 = p3;
		bool L_5 = V_2;
		bool L_6 = V_1;
		t2* L_7 = V_0;
		t482 * L_8 = m3419(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3419_MI);
		return L_8;
	}
}
extern "C" t482 * m3419 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, bool p5, t2* p6, MethodInfo* method)
{
	{
		return (t482 *)NULL;
	}
}
extern MethodInfo m2761_MI;
extern "C" t2* m2761 (t482 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m2762_MI;
extern "C" void m2762 (t482 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2836_MI;
extern "C" void m2836 (t9 * __this , bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2760_MI;
extern "C" bool m2760 (t482 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2835_MI;
extern "C" void m2835 (t482 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2780_MI;
extern "C" bool m2780 (t482 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m2776_MI;
extern "C" bool m2776 (t482 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2775_MI;
extern "C" bool m2775 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t485_TI;

#include "t602.h"
#include "t309.h"
#include "t298.h"
extern TypeInfo t28_TI;
extern TypeInfo t602_TI;
extern TypeInfo t298_TI;
extern MethodInfo m3425_MI;
extern MethodInfo m3420_MI;
extern MethodInfo m3422_MI;
extern MethodInfo m2772_MI;
extern MethodInfo m3428_MI;
extern MethodInfo m3430_MI;
extern MethodInfo m2792_MI;
extern MethodInfo m3431_MI;
extern MethodInfo m3424_MI;
extern MethodInfo m3440_MI;
extern MethodInfo m2791_MI;
extern MethodInfo m4292_MI;
extern MethodInfo m3030_MI;
extern MethodInfo m2793_MI;
extern MethodInfo m3426_MI;
extern MethodInfo m511_MI;


extern "C" void m2772 (t485 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3420(__this, &m3420_MI);
		return;
	}
}
extern "C" void m3420 (t485 * __this, MethodInfo* method)
{
	typedef void (*m3420_ftn) (t485 *);
	static m3420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3421_MI;
extern "C" void m3421 (t485 * __this, MethodInfo* method)
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
		m3422(__this, &m3422_MI);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0012:
	{
		return;
	}
}
extern "C" void m3422 (t485 * __this, MethodInfo* method)
{
	typedef void (*m3422_ftn) (t485 *);
	static m3422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2795_MI;
extern "C" int32_t m2795 (t485 * __this, MethodInfo* method)
{
	typedef int32_t (*m2795_ftn) (t485 *);
	static m2795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2795_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3423 (t485 * __this, MethodInfo* method)
{
	typedef int32_t (*m3423_ftn) (t485 *);
	static m3423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
extern "C" t28  m3424 (t485 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3425(__this, (&V_0), &m3425_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3425 (t485 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3425_ftn) (t485 *, t28 *);
	static m3425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2791 (t485 * __this, MethodInfo* method)
{
	typedef int32_t (*m2791_ftn) (t485 *);
	static m2791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
extern "C" uint16_t m2793 (t485 * __this, MethodInfo* method)
{
	typedef uint16_t (*m2793_ftn) (t485 *);
	static m2793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m3426 (t485 * __this, MethodInfo* method)
{
	typedef t2* (*m3426_ftn) (t485 *);
	static m3426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2792 (t485 * __this, MethodInfo* method)
{
	typedef int32_t (*m2792_ftn) (t485 *);
	static m2792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
extern "C" t485 * m3427 (t9 * __this , MethodInfo* method)
{
	{
		t485 * L_0 = ((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" void m3428 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef void (*m3428_ftn) (t58);
	static m3428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3429_MI;
extern "C" void m3429 (t9 * __this , MethodInfo* method)
{
	{
		t485 * L_0 = ((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t485 * L_1 = (t485 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t485_TI));
		m2772(L_1, &m2772_MI);
		((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f2 = L_1;
	}

IL_0014:
	{
		t485 * L_2 = ((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f2;
		((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f1 = L_2;
		t485 * L_3 = ((t485_SFs*)InitializedTypeInfo(&t485_TI)->static_fields)->f2;
		t58 L_4 = (L_3->f0);
		m3428(NULL, L_4, &m3428_MI);
		return;
	}
}
extern MethodInfo m2796_MI;
extern "C" bool m2796 (t9 * __this , t485 * p0, MethodInfo* method)
{
	typedef bool (*m2796_ftn) (t485 *);
	static m2796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3430 (t485 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m3423(__this, &m3423_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
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
extern "C" bool m3431 (t485 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = m3423(__this, &m3423_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 1;
	}

IL_0022:
	{
		return G_B5_0;
	}
}
extern MethodInfo m3432_MI;
extern "C" int32_t m3432 (t485 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = m3430(__this, &m3430_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = m2792(__this, &m2792_MI);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = m3431(__this, &m3431_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t28  L_3 = m3424(__this, &m3424_MI);
		V_1 = L_3;
		int32_t L_4 = m3440((&V_1), &m3440_MI);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = m2791(__this, &m2791_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3433_MI;
extern "C" bool m3433 (t485 * __this, t9 * p0, MethodInfo* method)
{
	t485 * V_0 = {0};
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		t9 * L_1 = p0;
		bool L_2 = m4292(NULL, __this, L_1, &m4292_MI);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return 1;
	}

IL_0016:
	{
		t9 * L_3 = p0;
		t126 * L_4 = m2550(L_3, &m2550_MI);
		t126 * L_5 = m2550(__this, &m2550_MI);
		if ((((t9*)(t126 *)L_4) == ((t9*)(t126 *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		t9 * L_6 = p0;
		V_0 = ((t485 *)Castclass(L_6, InitializedTypeInfo(&t485_TI)));
		int32_t L_7 = m3423(__this, &m3423_MI);
		t485 * L_8 = V_0;
		int32_t L_9 = m3423(L_8, &m3423_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = m2791(__this, &m2791_MI);
		t485 * L_11 = V_0;
		int32_t L_12 = m2791(L_11, &m2791_MI);
		if ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)-33)))) == ((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)-33))))))
		{
			goto IL_005a;
		}
	}

IL_0058:
	{
		return 0;
	}

IL_005a:
	{
		bool L_13 = m3430(__this, &m3430_MI);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = m2792(__this, &m2792_MI);
		t485 * L_15 = V_0;
		int32_t L_16 = m2792(L_15, &m2792_MI);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = m3431(__this, &m3431_MI);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		t28  L_18 = m3424(__this, &m3424_MI);
		t485 * L_19 = V_0;
		t28  L_20 = m3424(L_19, &m3424_MI);
		bool L_21 = m3030(NULL, L_18, L_20, &m3030_MI);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
extern MethodInfo m3434_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3434 (t485 * __this, MethodInfo* method)
{
	static bool m3434_init;
	if (!m3434_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3434_init = true;
	}
	{
		bool L_0 = m3430(__this, &m3430_MI);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = m2793(__this, &m2793_MI);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_3 = m3423(__this, &m3423_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t603_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m2791(__this, &m2791_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t602_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 1)) = (t9 *)L_9;
		t158* L_10 = L_6;
		int32_t L_11 = m2792(__this, &m2792_MI);
		int32_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t298_TI), &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 2)) = (t9 *)L_13;
		t2* L_14 = m3626(NULL, (t2*) &_stringLiteral202, L_10, &m3626_MI);
		return L_14;
	}

IL_0051:
	{
		t158* L_15 = ((t158*)SZArrayNew(t158_TI_var, 8));
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral203);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 0)) = (t9 *)(t2*) &_stringLiteral203;
		t158* L_16 = L_15;
		int32_t L_17 = m3423(__this, &m3423_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t603_TI), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 1)) = (t9 *)L_19;
		t158* L_20 = L_16;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral204);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 2)) = (t9 *)(t2*) &_stringLiteral204;
		t158* L_21 = L_20;
		uint16_t L_22 = m2793(__this, &m2793_MI);
		int32_t L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t125_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 3)) = (t9 *)L_24;
		t158* L_25 = L_21;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral205);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)(t2*) &_stringLiteral205;
		t158* L_26 = L_25;
		int32_t L_27 = m2791(__this, &m2791_MI);
		int32_t L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t602_TI), &L_28);
		ArrayElementTypeCheck (L_26, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 5)) = (t9 *)L_29;
		t158* L_30 = L_26;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral206);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 6)) = (t9 *)(t2*) &_stringLiteral206;
		t158* L_31 = L_30;
		int32_t L_32 = m2792(__this, &m2792_MI);
		int32_t L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t298_TI), &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 7)) = (t9 *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m515(NULL, L_31, &m515_MI);
		t2* L_36 = m3626(NULL, L_35, ((t158*)SZArrayNew(t158_TI_var, 0)), &m3626_MI);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = m3431(__this, &m3431_MI);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		t158* L_38 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_39 = m3423(__this, &m3423_MI);
		int32_t L_40 = L_39;
		t9 * L_41 = Box(InitializedTypeInfo(&t603_TI), &L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((t9 **)(t9 **)SZArrayLdElema(L_38, 0)) = (t9 *)L_41;
		t158* L_42 = L_38;
		t28  L_43 = m3424(__this, &m3424_MI);
		t28  L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t28_TI), &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 1)) = (t9 *)L_45;
		t158* L_46 = L_42;
		int32_t L_47 = m2791(__this, &m2791_MI);
		int32_t L_48 = L_47;
		t9 * L_49 = Box(InitializedTypeInfo(&t602_TI), &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		*((t9 **)(t9 **)SZArrayLdElema(L_46, 2)) = (t9 *)L_49;
		t2* L_50 = m3626(NULL, (t2*) &_stringLiteral207, L_46, &m3626_MI);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = m3423(__this, &m3423_MI);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = m3423(__this, &m3423_MI);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		t158* L_53 = ((t158*)SZArrayNew(t158_TI_var, 2));
		int32_t L_54 = m3423(__this, &m3423_MI);
		int32_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t603_TI), &L_55);
		ArrayElementTypeCheck (L_53, L_56);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 0)) = (t9 *)L_56;
		t158* L_57 = L_53;
		t2* L_58 = m3426(__this, &m3426_MI);
		ArrayElementTypeCheck (L_57, L_58);
		*((t9 **)(t9 **)SZArrayLdElema(L_57, 1)) = (t9 *)L_58;
		t2* L_59 = m3626(NULL, (t2*) &_stringLiteral208, L_57, &m3626_MI);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_60 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_61 = m3423(__this, &m3423_MI);
		int32_t L_62 = L_61;
		t9 * L_63 = Box(InitializedTypeInfo(&t603_TI), &L_62);
		t2* L_64 = m511(NULL, L_60, L_63, &m511_MI);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void t485_marshal(const t485& unmarshaled, t485_marshaled& marshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
void t485_marshal_back(const t485_marshaled& marshaled, t485& unmarshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void t485_marshal_cleanup(t485_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t298MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t603MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t602MD.h"



#include "t179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t179_TI;
#include "t179MD.h"

extern MethodInfo m3437_MI;
extern MethodInfo m3435_MI;
extern MethodInfo m3436_MI;


extern MethodInfo m640_MI;
extern "C" void m640 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3435(NULL, (&p0), (&p1), &m3435_MI);
		return;
	}
}
extern "C" void m3435 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef void (*m3435_ftn) (t13 *, t13 *);
	static m3435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m644_MI;
extern "C" void m644 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p1;
		m3436(NULL, (&p0), L_0, &m3436_MI);
		return;
	}
}
extern "C" void m3436 (t9 * __this , t13 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3436_ftn) (t13 *, float);
	static m3436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawWireSphere(UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3437 (t9 * __this , t43 * p0, MethodInfo* method)
{
	typedef void (*m3437_ftn) (t43 *);
	static m3437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m639_MI;
extern "C" void m639 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		m3437(NULL, (&p0), &m3437_MI);
		return;
	}
}
#include "t157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t157_TI;
#include "t157MD.h"



#ifndef _MSC_VER
#else
#endif

#include "t890.h"
extern TypeInfo t890_TI;
extern TypeInfo t13_TI;
#include "t890MD.h"
#include "t13MD.h"
extern MethodInfo m4293_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m2969_MI;
extern MethodInfo m1247_MI;
extern MethodInfo m2790_MI;
extern MethodInfo m4294_MI;
extern MethodInfo m1245_MI;
extern MethodInfo m3442_MI;
extern MethodInfo m357_MI;


extern "C" void m392 (t28 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		return;
	}
}
extern MethodInfo m2737_MI;
extern "C" float m2737 (t28 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		float L_3 = (__this->f1);
		return L_3;
	}

IL_001b:
	{
		float L_4 = (__this->f2);
		return L_4;
	}

IL_0022:
	{
		t890 * L_5 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_5, (t2*) &_stringLiteral209, &m4293_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2748_MI;
extern "C" void m2748 (t28 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		float L_3 = p1;
		__this->f1 = L_3;
		goto IL_0037;
	}

IL_0020:
	{
		float L_4 = p1;
		__this->f2 = L_4;
		goto IL_0037;
	}

IL_002c:
	{
		t890 * L_5 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_5, (t2*) &_stringLiteral209, &m4293_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
extern MethodInfo m2824_MI;
extern "C" t28  m2824 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), &m392_MI);
		return L_4;
	}
}
extern "C" void m3438 (t28 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = m1247(__this, &m1247_MI);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		t28  L_3 = m2790(NULL, (*(t28 *)__this), L_2, &m2790_MI);
		*__this = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		t28  L_4 = m1242(NULL, &m1242_MI);
		*__this = L_4;
	}

IL_0034:
	{
		return;
	}
}
extern MethodInfo m393_MI;
extern "C" t28  m393 (t28 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f2);
		m392((&V_0), L_0, L_1, &m392_MI);
		m3438((&V_0), &m3438_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m3439_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3439 (t28 * __this, MethodInfo* method)
{
	static bool m3439_init;
	if (!m3439_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3439_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3626(NULL, (t2*) &_stringLiteral210, L_4, &m3626_MI);
		return L_8;
	}
}
extern "C" int32_t m3440 (t28 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4271(L_0, &m4271_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4271(L_2, &m4271_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3441_MI;
extern "C" bool m3441 (t28 * __this, t9 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t28_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t28 *)((t28 *)UnBox (L_1, InitializedTypeInfo(&t28_TI)))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m4294(L_2, L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4294(L_5, L_6, &m4294_MI);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return G_B5_0;
	}
}
extern MethodInfo m2569_MI;
extern "C" float m2569 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m1247 (t28 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
extern MethodInfo m2529_MI;
extern "C" float m2529 (t28 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m3442 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" t28  m1242 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (0.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2733_MI;
extern "C" t28  m2733 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (1.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2973_MI;
extern "C" t28  m2973 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2736_MI;
extern "C" t28  m2736 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), &m392_MI);
		return L_4;
	}
}
extern "C" t28  m1245 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), &m392_MI);
		return L_4;
	}
}
extern MethodInfo m2734_MI;
extern "C" t28  m2734 (t9 * __this , t28  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), &m392_MI);
		return L_4;
	}
}
extern "C" t28  m2790 (t9 * __this , t28  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), &m392_MI);
		return L_4;
	}
}
extern "C" bool m3030 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1245(NULL, L_0, L_1, &m1245_MI);
		float L_3 = m3442(NULL, L_2, &m3442_MI);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern MethodInfo m2816_MI;
extern "C" bool m2816 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1245(NULL, L_0, L_1, &m1245_MI);
		float L_3 = m3442(NULL, L_2, &m3442_MI);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m617_MI;
extern "C" t28  m617 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern MethodInfo m388_MI;
extern "C" t13  m388 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		t13  L_2 = {0};
		m357(&L_2, L_0, L_1, (0.0f), &m357_MI);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t130MD.h"
extern MethodInfo m3446_MI;
extern MethodInfo m2710_MI;
extern MethodInfo m334_MI;
extern MethodInfo m3443_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3449_MI;
extern MethodInfo m635_MI;
extern MethodInfo m476_MI;
extern MethodInfo m475_MI;
extern MethodInfo m458_MI;
extern MethodInfo m353_MI;
extern MethodInfo m3450_MI;
extern MethodInfo m354_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m2907_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3451_MI;


extern "C" void m357 (t13 * __this, float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		float L_2 = p2;
		__this->f3 = L_2;
		return;
	}
}
extern MethodInfo m616_MI;
extern "C" void m616 (t13 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		__this->f3 = (0.0f);
		return;
	}
}
extern MethodInfo m634_MI;
extern "C" t13  m634 (t9 * __this , t13  p0, t13  p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2710(NULL, L_0, &m2710_MI);
		p2 = L_1;
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		float L_4 = ((&p0)->f1);
		float L_5 = p2;
		float L_6 = ((&p0)->f2);
		float L_7 = ((&p1)->f2);
		float L_8 = ((&p0)->f2);
		float L_9 = p2;
		float L_10 = ((&p0)->f3);
		float L_11 = ((&p1)->f3);
		float L_12 = ((&p0)->f3);
		float L_13 = p2;
		t13  L_14 = {0};
		m357(&L_14, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), &m357_MI);
		return L_14;
	}
}
extern MethodInfo m622_MI;
extern "C" t13  m622 (t9 * __this , t13  p0, t13  p1, t13 * p2, float p3, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = m334(NULL, &m334_MI);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		t13  L_1 = p0;
		t13  L_2 = p1;
		t13 * L_3 = p2;
		float L_4 = p3;
		float L_5 = V_1;
		float L_6 = V_0;
		t13  L_7 = m3443(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m3443_MI);
		return L_7;
	}
}
extern "C" t13  m3443 (t9 * __this , t13  p0, t13  p1, t13 * p2, float p3, float p4, float p5, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	t13  V_3 = {0};
	t13  V_4 = {0};
	float V_5 = 0.0f;
	t13  V_6 = {0};
	t13  V_7 = {0};
	{
		float L_0 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m608(NULL, (0.0001f), L_0, &m608_MI);
		p3 = L_1;
		float L_2 = p3;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = p5;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		t13  L_11 = p0;
		t13  L_12 = p1;
		t13  L_13 = m352(NULL, L_11, L_12, &m352_MI);
		V_3 = L_13;
		t13  L_14 = p1;
		V_4 = L_14;
		float L_15 = p4;
		float L_16 = p3;
		V_5 = ((float)((float)L_15*(float)L_16));
		t13  L_17 = V_3;
		float L_18 = V_5;
		t13  L_19 = m3449(NULL, L_17, L_18, &m3449_MI);
		V_3 = L_19;
		t13  L_20 = p0;
		t13  L_21 = V_3;
		t13  L_22 = m352(NULL, L_20, L_21, &m352_MI);
		p1 = L_22;
		t13 * L_23 = p2;
		float L_24 = V_0;
		t13  L_25 = V_3;
		t13  L_26 = m635(NULL, L_24, L_25, &m635_MI);
		t13  L_27 = m476(NULL, (*(t13 *)L_23), L_26, &m476_MI);
		float L_28 = p5;
		t13  L_29 = m475(NULL, L_27, L_28, &m475_MI);
		V_6 = L_29;
		t13 * L_30 = p2;
		t13 * L_31 = p2;
		float L_32 = V_0;
		t13  L_33 = V_6;
		t13  L_34 = m635(NULL, L_32, L_33, &m635_MI);
		t13  L_35 = m352(NULL, (*(t13 *)L_31), L_34, &m352_MI);
		float L_36 = V_2;
		t13  L_37 = m475(NULL, L_35, L_36, &m475_MI);
		*L_30 = L_37;
		t13  L_38 = p1;
		t13  L_39 = V_3;
		t13  L_40 = V_6;
		t13  L_41 = m476(NULL, L_39, L_40, &m476_MI);
		float L_42 = V_2;
		t13  L_43 = m475(NULL, L_41, L_42, &m475_MI);
		t13  L_44 = m476(NULL, L_38, L_43, &m476_MI);
		V_7 = L_44;
		t13  L_45 = V_4;
		t13  L_46 = p0;
		t13  L_47 = m352(NULL, L_45, L_46, &m352_MI);
		t13  L_48 = V_7;
		t13  L_49 = V_4;
		t13  L_50 = m352(NULL, L_48, L_49, &m352_MI);
		float L_51 = m458(NULL, L_47, L_50, &m458_MI);
		if ((!(((float)L_51) > ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		t13  L_52 = V_4;
		V_7 = L_52;
		t13 * L_53 = p2;
		t13  L_54 = V_7;
		t13  L_55 = V_4;
		t13  L_56 = m352(NULL, L_54, L_55, &m352_MI);
		float L_57 = p5;
		t13  L_58 = m353(NULL, L_56, L_57, &m353_MI);
		*L_53 = L_58;
	}

IL_00eb:
	{
		t13  L_59 = V_7;
		return L_59;
	}
}
extern MethodInfo m2879_MI;
extern "C" float m2879 (t13 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0020;
		}
		if (L_1 == 2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		float L_2 = (__this->f1);
		return L_2;
	}

IL_0020:
	{
		float L_3 = (__this->f2);
		return L_3;
	}

IL_0027:
	{
		float L_4 = (__this->f3);
		return L_4;
	}

IL_002e:
	{
		t890 * L_5 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_5, (t2*) &_stringLiteral211, &m4293_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2880_MI;
extern "C" void m2880 (t13 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0019;
		}
		if (L_1 == 1)
		{
			goto IL_0025;
		}
		if (L_1 == 2)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		float L_2 = p1;
		__this->f1 = L_2;
		goto IL_0048;
	}

IL_0025:
	{
		float L_3 = p1;
		__this->f2 = L_3;
		goto IL_0048;
	}

IL_0031:
	{
		float L_4 = p1;
		__this->f3 = L_4;
		goto IL_0048;
	}

IL_003d:
	{
		t890 * L_5 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_5, (t2*) &_stringLiteral211, &m4293_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
extern MethodInfo m3444_MI;
extern "C" int32_t m3444 (t13 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4271(L_0, &m4271_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4271(L_2, &m4271_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4271(L_4, &m4271_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
extern MethodInfo m3445_MI;
extern "C" bool m3445 (t13 * __this, t9 * p0, MethodInfo* method)
{
	t13  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t13_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t13 *)((t13 *)UnBox (L_1, InitializedTypeInfo(&t13_TI)))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m4294(L_2, L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4294(L_5, L_6, &m4294_MI);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4294(L_8, L_9, &m4294_MI);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return G_B6_0;
	}
}
extern "C" t13  m3446 (t9 * __this , t13  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t13  L_0 = p0;
		float L_1 = m3450(NULL, L_0, &m3450_MI);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		t13  L_3 = p0;
		float L_4 = V_0;
		t13  L_5 = m353(NULL, L_3, L_4, &m353_MI);
		return L_5;
	}

IL_001a:
	{
		t13  L_6 = m354(NULL, &m354_MI);
		return L_6;
	}
}
extern "C" t13  m386 (t13 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m3446(NULL, (*(t13 *)__this), &m3446_MI);
		return L_0;
	}
}
extern MethodInfo m3447_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3447 (t13 * __this, MethodInfo* method)
{
	static bool m3447_init;
	if (!m3447_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3447_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = (__this->f3);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t2* L_12 = m3626(NULL, (t2*) &_stringLiteral212, L_8, &m3626_MI);
		return L_12;
	}
}
extern MethodInfo m3448_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3448 (t13 * __this, t2* p0, MethodInfo* method)
{
	static bool m3448_init;
	if (!m3448_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3448_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		float* L_1 = &(__this->f1);
		t2* L_2 = p0;
		t2* L_3 = m4295(L_1, L_2, &m4295_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f2);
		t2* L_6 = p0;
		t2* L_7 = m4295(L_5, L_6, &m4295_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f3);
		t2* L_10 = p0;
		t2* L_11 = m4295(L_9, L_10, &m4295_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t2* L_12 = m3626(NULL, (t2*) &_stringLiteral213, L_8, &m3626_MI);
		return L_12;
	}
}
extern "C" float m458 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern MethodInfo m2590_MI;
extern "C" float m2590 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		m357((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), &m357_MI);
		float L_6 = ((&V_0)->f1);
		float L_7 = ((&V_0)->f1);
		float L_8 = ((&V_0)->f2);
		float L_9 = ((&V_0)->f2);
		float L_10 = ((&V_0)->f3);
		float L_11 = ((&V_0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
extern "C" t13  m3449 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = m2907((&p0), &m2907_MI);
		float L_1 = p1;
		float L_2 = p1;
		if ((!(((float)L_0) > ((float)((float)((float)L_1*(float)L_2))))))
		{
			goto IL_001d;
		}
	}
	{
		t13  L_3 = m386((&p0), &m386_MI);
		float L_4 = p1;
		t13  L_5 = m475(NULL, L_3, L_4, &m475_MI);
		return L_5;
	}

IL_001d:
	{
		t13  L_6 = p0;
		return L_6;
	}
}
extern "C" float m3450 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p0)->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
extern MethodInfo m636_MI;
extern "C" float m636 (t13 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		float L_4 = (__this->f3);
		float L_5 = (__this->f3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
extern "C" float m3451 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p0)->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern "C" float m2907 (t13 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		float L_4 = (__this->f3);
		float L_5 = (__this->f3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
extern MethodInfo m2889_MI;
extern "C" t13  m2889 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = m2962(NULL, L_0, L_1, &m2962_MI);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m2962(NULL, L_3, L_4, &m2962_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m2962(NULL, L_6, L_7, &m2962_MI);
		t13  L_9 = {0};
		m357(&L_9, L_2, L_5, L_8, &m357_MI);
		return L_9;
	}
}
extern MethodInfo m2890_MI;
extern "C" t13  m2890 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = m608(NULL, L_0, L_1, &m608_MI);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m608(NULL, L_3, L_4, &m608_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m608(NULL, L_6, L_7, &m608_MI);
		t13  L_9 = {0};
		m357(&L_9, L_2, L_5, L_8, &m357_MI);
		return L_9;
	}
}
extern "C" t13  m354 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (0.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m626_MI;
extern "C" t13  m626 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (0.0f), (1.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m3452_MI;
extern "C" t13  m3452 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (0.0f), (-1.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m579_MI;
extern "C" t13  m579 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (1.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2911_MI;
extern "C" t13  m2911 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (-1.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2909_MI;
extern "C" t13  m2909 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (-1.0f), (0.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2910_MI;
extern "C" t13  m2910 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (1.0f), (0.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern "C" t13  m476 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		t13  L_6 = {0};
		m357(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), &m357_MI);
		return L_6;
	}
}
extern "C" t13  m352 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		t13  L_6 = {0};
		m357(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), &m357_MI);
		return L_6;
	}
}
extern MethodInfo m580_MI;
extern "C" t13  m580 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		float L_2 = ((&p0)->f3);
		t13  L_3 = {0};
		m357(&L_3, ((-L_0)), ((-L_1)), ((-L_2)), &m357_MI);
		return L_3;
	}
}
extern "C" t13  m475 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		t13  L_6 = {0};
		m357(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), &m357_MI);
		return L_6;
	}
}
extern "C" t13  m635 (t9 * __this , float p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p1)->f1);
		float L_1 = p0;
		float L_2 = ((&p1)->f2);
		float L_3 = p0;
		float L_4 = ((&p1)->f3);
		float L_5 = p0;
		t13  L_6 = {0};
		m357(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), &m357_MI);
		return L_6;
	}
}
extern "C" t13  m353 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		t13  L_6 = {0};
		m357(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), &m357_MI);
		return L_6;
	}
}
extern MethodInfo m3453_MI;
extern "C" bool m3453 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = p1;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		float L_3 = m3451(NULL, L_2, &m3451_MI);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern MethodInfo m382_MI;
extern "C" bool m382 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = p1;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		float L_3 = m3451(NULL, L_2, &m3451_MI);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m638_MI;
extern MethodInfo m3458_MI;
extern MethodInfo m3530_MI;


extern "C" void m638 (t43 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		float L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern "C" void m3454 (t43 * __this, float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		__this->f3 = (1.0f);
		return;
	}
}
extern MethodInfo m3455_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3455 (t43 * __this, MethodInfo* method)
{
	static bool m3455_init;
	if (!m3455_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3455_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = (__this->f0);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f1);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = (__this->f2);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = (__this->f3);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral214, L_12, &m3626_MI);
		return L_16;
	}
}
extern MethodInfo m3456_MI;
extern "C" int32_t m3456 (t43 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	{
		t47  L_0 = m3458(NULL, (*(t43 *)__this), &m3458_MI);
		V_0 = L_0;
		int32_t L_1 = m3530((&V_0), &m3530_MI);
		return L_1;
	}
}
extern MethodInfo m2669_MI;
extern "C" bool m2669 (t43 * __this, t9 * p0, MethodInfo* method)
{
	t43  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t43_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t43 *)((t43 *)UnBox (L_1, InitializedTypeInfo(&t43_TI)))));
		float* L_2 = &(__this->f0);
		float L_3 = ((&V_0)->f0);
		bool L_4 = m4294(L_2, L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f1);
		float L_6 = ((&V_0)->f1);
		bool L_7 = m4294(L_5, L_6, &m4294_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f2);
		float L_9 = ((&V_0)->f2);
		bool L_10 = m4294(L_8, L_9, &m4294_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f3);
		float L_12 = ((&V_0)->f3);
		bool L_13 = m4294(L_11, L_12, &m4294_MI);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern MethodInfo m2604_MI;
extern "C" t43  m2604 (t9 * __this , t43  p0, t43  p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2710(NULL, L_0, &m2710_MI);
		p2 = L_1;
		float L_2 = ((&p0)->f0);
		float L_3 = ((&p1)->f0);
		float L_4 = ((&p0)->f0);
		float L_5 = p2;
		float L_6 = ((&p0)->f1);
		float L_7 = ((&p1)->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = p2;
		float L_10 = ((&p0)->f2);
		float L_11 = ((&p1)->f2);
		float L_12 = ((&p0)->f2);
		float L_13 = p2;
		float L_14 = ((&p0)->f3);
		float L_15 = ((&p1)->f3);
		float L_16 = ((&p0)->f3);
		float L_17 = p2;
		t43  L_18 = {0};
		m638(&L_18, ((float)((float)L_2+(float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5)))), ((float)((float)L_6+(float)((float)((float)((float)((float)L_7-(float)L_8))*(float)L_9)))), ((float)((float)L_10+(float)((float)((float)((float)((float)L_11-(float)L_12))*(float)L_13)))), ((float)((float)L_14+(float)((float)((float)((float)((float)L_15-(float)L_16))*(float)L_17)))), &m638_MI);
		return L_18;
	}
}
extern "C" t43  m3457 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (1.0f), (0.0f), (0.0f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern MethodInfo m643_MI;
extern "C" t43  m643 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (0.0f), (1.0f), (0.0f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern "C" t43  m2643 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (1.0f), (1.0f), (1.0f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern MethodInfo m436_MI;
extern "C" t43  m436 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern MethodInfo m637_MI;
extern "C" t43  m637 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (1.0f), (0.921568632f), (0.0156862754f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern MethodInfo m423_MI;
extern "C" t43  m423 (t9 * __this , MethodInfo* method)
{
	{
		t43  L_0 = {0};
		m638(&L_0, (0.5f), (0.5f), (0.5f), (1.0f), &m638_MI);
		return L_0;
	}
}
extern MethodInfo m2903_MI;
extern "C" t43  m2903 (t9 * __this , t43  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		float L_1 = p1;
		float L_2 = ((&p0)->f1);
		float L_3 = p1;
		float L_4 = ((&p0)->f2);
		float L_5 = p1;
		float L_6 = ((&p0)->f3);
		float L_7 = p1;
		t43  L_8 = {0};
		m638(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), &m638_MI);
		return L_8;
	}
}
extern "C" t47  m3458 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f3);
		t47  L_4 = {0};
		m413(&L_4, L_0, L_1, L_2, L_3, &m413_MI);
		return L_4;
	}
}
#include "t566.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t566_TI;
#include "t566MD.h"

#include "t582.h"
extern TypeInfo t582_TI;
extern MethodInfo m2625_MI;


extern "C" void m2625 (t566 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, MethodInfo* method)
{
	{
		uint8_t L_0 = p0;
		__this->f0 = L_0;
		uint8_t L_1 = p1;
		__this->f1 = L_1;
		uint8_t L_2 = p2;
		__this->f2 = L_2;
		uint8_t L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern MethodInfo m3459_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3459 (t566 * __this, MethodInfo* method)
{
	static bool m3459_init;
	if (!m3459_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3459_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		uint8_t L_1 = (__this->f0);
		uint8_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t582_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		uint8_t L_5 = (__this->f1);
		uint8_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t582_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint8_t L_9 = (__this->f2);
		uint8_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t582_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		uint8_t L_13 = (__this->f3);
		uint8_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t582_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral215, L_12, &m3626_MI);
		return L_16;
	}
}
extern MethodInfo m2661_MI;
extern "C" t566  m2661 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2710(NULL, L_0, &m2710_MI);
		float L_2 = ((&p0)->f1);
		float L_3 = m2710(NULL, L_2, &m2710_MI);
		float L_4 = ((&p0)->f2);
		float L_5 = m2710(NULL, L_4, &m2710_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = m2710(NULL, L_6, &m2710_MI);
		t566  L_8 = {0};
		m2625(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), &m2625_MI);
		return L_8;
	}
}
extern MethodInfo m2626_MI;
extern "C" t43  m2626 (t9 * __this , t566  p0, MethodInfo* method)
{
	{
		uint8_t L_0 = ((&p0)->f0);
		uint8_t L_1 = ((&p0)->f1);
		uint8_t L_2 = ((&p0)->f2);
		uint8_t L_3 = ((&p0)->f3);
		t43  L_4 = {0};
		m638(&L_4, ((float)((float)(((float)L_0))/(float)(255.0f))), ((float)((float)(((float)L_1))/(float)(255.0f))), ((float)((float)(((float)L_2))/(float)(255.0f))), ((float)((float)(((float)L_3))/(float)(255.0f))), &m638_MI);
		return L_4;
	}
}
#include "t93.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t93_TI;
#include "t93MD.h"

extern MethodInfo m1146_MI;
extern MethodInfo m3466_MI;
extern MethodInfo m3461_MI;
extern MethodInfo m3462_MI;
extern MethodInfo m3468_MI;
extern MethodInfo m3467_MI;
extern MethodInfo m3469_MI;
extern MethodInfo m3460_MI;


extern "C" void m1146 (t93 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		float L_2 = p2;
		__this->f3 = L_2;
		float L_3 = p3;
		__this->f4 = L_3;
		return;
	}
}
extern MethodInfo m1092_MI;
extern "C" t93  m1092 (t9 * __this , MethodInfo* method)
{
	{
		t93  L_0 = {0};
		m1146(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), &m1146_MI);
		return L_0;
	}
}
extern "C" float m3460 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f4);
		float L_7 = ((&p1)->f4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
extern MethodInfo m641_MI;
extern "C" t93  m641 (t9 * __this , t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t13  L_0 = m579(NULL, &m579_MI);
		V_0 = L_0;
		t93  L_1 = m3461(NULL, (&p0), (&V_0), &m3461_MI);
		return L_1;
	}
}
extern "C" t93  m3461 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef t93  (*m3461_ftn) (t13 *, t13 *);
	static m3461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2904_MI;
extern "C" t93  m2904 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3462(NULL, (&p0), &m3462_MI);
		return L_0;
	}
}
extern "C" t93  m3462 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t93  (*m3462_ftn) (t93 *);
	static m3462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3463_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3463 (t93 * __this, MethodInfo* method)
{
	static bool m3463_init;
	if (!m3463_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3463_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = (__this->f3);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = (__this->f4);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral216, L_12, &m3626_MI);
		return L_16;
	}
}
extern MethodInfo m3464_MI;
extern "C" t13  m3464 (t93 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m3466(NULL, (*(t93 *)__this), &m3466_MI);
		t13  L_1 = m475(NULL, L_0, (57.29578f), &m475_MI);
		return L_1;
	}
}
extern MethodInfo m623_MI;
extern "C" t93  m623 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		float L_2 = p2;
		t13  L_3 = {0};
		m357(&L_3, L_0, L_1, L_2, &m357_MI);
		t13  L_4 = m475(NULL, L_3, (0.0174532924f), &m475_MI);
		t93  L_5 = m3468(NULL, L_4, &m3468_MI);
		return L_5;
	}
}
extern MethodInfo m3465_MI;
extern "C" t93  m3465 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.0174532924f), &m475_MI);
		t93  L_2 = m3468(NULL, L_1, &m3468_MI);
		return L_2;
	}
}
extern "C" t13  m3466 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3467(NULL, (&p0), &m3467_MI);
		return L_0;
	}
}
extern "C" t13  m3467 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t13  (*m3467_ftn) (t93 *);
	static m3467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t93  m3468 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3469(NULL, (&p0), &m3469_MI);
		return L_0;
	}
}
extern "C" t93  m3469 (t9 * __this , t13 * p0, MethodInfo* method)
{
	typedef t93  (*m3469_ftn) (t13 *);
	static m3469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3470_MI;
extern "C" int32_t m3470 (t93 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4271(L_0, &m4271_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4271(L_2, &m4271_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4271(L_4, &m4271_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4271(L_6, &m4271_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3471_MI;
extern "C" bool m3471 (t93 * __this, t9 * p0, MethodInfo* method)
{
	t93  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t93_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t93 *)((t93 *)UnBox (L_1, InitializedTypeInfo(&t93_TI)))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m4294(L_2, L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4294(L_5, L_6, &m4294_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4294(L_8, L_9, &m4294_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4294(L_11, L_12, &m4294_MI);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern MethodInfo m624_MI;
extern "C" t93  m624 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f4);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f4);
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f2);
		float L_8 = ((&p0)->f4);
		float L_9 = ((&p1)->f2);
		float L_10 = ((&p0)->f2);
		float L_11 = ((&p1)->f4);
		float L_12 = ((&p0)->f3);
		float L_13 = ((&p1)->f1);
		float L_14 = ((&p0)->f1);
		float L_15 = ((&p1)->f3);
		float L_16 = ((&p0)->f4);
		float L_17 = ((&p1)->f3);
		float L_18 = ((&p0)->f3);
		float L_19 = ((&p1)->f4);
		float L_20 = ((&p0)->f1);
		float L_21 = ((&p1)->f2);
		float L_22 = ((&p0)->f2);
		float L_23 = ((&p1)->f1);
		float L_24 = ((&p0)->f4);
		float L_25 = ((&p1)->f4);
		float L_26 = ((&p0)->f1);
		float L_27 = ((&p1)->f1);
		float L_28 = ((&p0)->f2);
		float L_29 = ((&p1)->f2);
		float L_30 = ((&p0)->f3);
		float L_31 = ((&p1)->f3);
		t93  L_32 = {0};
		m1146(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), &m1146_MI);
		return L_32;
	}
}
extern MethodInfo m627_MI;
extern "C" t13  m627 (t9 * __this , t93  p0, t13  p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	t13  V_12 = {0};
	{
		float L_0 = ((&p0)->f1);
		V_0 = ((float)((float)L_0*(float)(2.0f)));
		float L_1 = ((&p0)->f2);
		V_1 = ((float)((float)L_1*(float)(2.0f)));
		float L_2 = ((&p0)->f3);
		V_2 = ((float)((float)L_2*(float)(2.0f)));
		float L_3 = ((&p0)->f1);
		float L_4 = V_0;
		V_3 = ((float)((float)L_3*(float)L_4));
		float L_5 = ((&p0)->f2);
		float L_6 = V_1;
		V_4 = ((float)((float)L_5*(float)L_6));
		float L_7 = ((&p0)->f3);
		float L_8 = V_2;
		V_5 = ((float)((float)L_7*(float)L_8));
		float L_9 = ((&p0)->f1);
		float L_10 = V_1;
		V_6 = ((float)((float)L_9*(float)L_10));
		float L_11 = ((&p0)->f1);
		float L_12 = V_2;
		V_7 = ((float)((float)L_11*(float)L_12));
		float L_13 = ((&p0)->f2);
		float L_14 = V_2;
		V_8 = ((float)((float)L_13*(float)L_14));
		float L_15 = ((&p0)->f4);
		float L_16 = V_0;
		V_9 = ((float)((float)L_15*(float)L_16));
		float L_17 = ((&p0)->f4);
		float L_18 = V_1;
		V_10 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((&p0)->f4);
		float L_20 = V_2;
		V_11 = ((float)((float)L_19*(float)L_20));
		float L_21 = V_4;
		float L_22 = V_5;
		float L_23 = ((&p1)->f1);
		float L_24 = V_6;
		float L_25 = V_11;
		float L_26 = ((&p1)->f2);
		float L_27 = V_7;
		float L_28 = V_10;
		float L_29 = ((&p1)->f3);
		(&V_12)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_21+(float)L_22))))*(float)L_23))+(float)((float)((float)((float)((float)L_24-(float)L_25))*(float)L_26))))+(float)((float)((float)((float)((float)L_27+(float)L_28))*(float)L_29))));
		float L_30 = V_6;
		float L_31 = V_11;
		float L_32 = ((&p1)->f1);
		float L_33 = V_3;
		float L_34 = V_5;
		float L_35 = ((&p1)->f2);
		float L_36 = V_8;
		float L_37 = V_9;
		float L_38 = ((&p1)->f3);
		(&V_12)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))*(float)L_32))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_33+(float)L_34))))*(float)L_35))))+(float)((float)((float)((float)((float)L_36-(float)L_37))*(float)L_38))));
		float L_39 = V_7;
		float L_40 = V_10;
		float L_41 = ((&p1)->f1);
		float L_42 = V_8;
		float L_43 = V_9;
		float L_44 = ((&p1)->f2);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = ((&p1)->f3);
		(&V_12)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_39-(float)L_40))*(float)L_41))+(float)((float)((float)((float)((float)L_42+(float)L_43))*(float)L_44))))+(float)((float)((float)((float)((float)(1.0f)-(float)((float)((float)L_45+(float)L_46))))*(float)L_47))));
		t13  L_48 = V_12;
		return L_48;
	}
}
extern MethodInfo m2815_MI;
extern "C" bool m2815 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
{
	{
		t93  L_0 = p0;
		t93  L_1 = p1;
		float L_2 = m3460(NULL, L_0, L_1, &m3460_MI);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2758_MI;
extern MethodInfo m2757_MI;


extern "C" void m2860 (t448 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		float L_2 = p2;
		__this->f2 = L_2;
		float L_3 = p3;
		__this->f3 = L_3;
		return;
	}
}
extern "C" float m2659 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2726 (t448 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m2660 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2724 (t448 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m2735_MI;
extern "C" t28  m2735 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		float L_1 = (__this->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern MethodInfo m2865_MI;
extern "C" t28  m2865 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = m2659(__this, &m2659_MI);
		float L_1 = (__this->f2);
		float L_2 = m2660(__this, &m2660_MI);
		float L_3 = (__this->f3);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), &m392_MI);
		return L_4;
	}
}
extern "C" float m2654 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2725 (t448 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2655 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2722 (t448 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m2718_MI;
extern "C" t28  m2718 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f3);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern "C" float m2758 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m2757 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m2743 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f0);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern "C" float m2745 (t448 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		float L_1 = (__this->f1);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern MethodInfo m3472_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3472 (t448 * __this, MethodInfo* method)
{
	static bool m3472_init;
	if (!m3472_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3472_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = m2659(__this, &m2659_MI);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = m2660(__this, &m2660_MI);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = m2654(__this, &m2654_MI);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = m2655(__this, &m2655_MI);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral217, L_12, &m3626_MI);
		return L_16;
	}
}
extern MethodInfo m3473_MI;
extern "C" bool m3473 (t448 * __this, t13  p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = m2758(__this, &m2758_MI);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = m2743(__this, &m2743_MI);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = m2757(__this, &m2757_MI);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&p0)->f2);
		float L_7 = m2745(__this, &m2745_MI);
		G_B5_0 = ((((float)L_6) < ((float)L_7))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 0;
	}

IL_0048:
	{
		return G_B5_0;
	}
}
extern MethodInfo m3474_MI;
extern "C" int32_t m3474 (t448 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = m2659(__this, &m2659_MI);
		V_0 = L_0;
		int32_t L_1 = m4271((&V_0), &m4271_MI);
		float L_2 = m2654(__this, &m2654_MI);
		V_1 = L_2;
		int32_t L_3 = m4271((&V_1), &m4271_MI);
		float L_4 = m2660(__this, &m2660_MI);
		V_2 = L_4;
		int32_t L_5 = m4271((&V_2), &m4271_MI);
		float L_6 = m2655(__this, &m2655_MI);
		V_3 = L_6;
		int32_t L_7 = m4271((&V_3), &m4271_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3475_MI;
extern "C" bool m3475 (t448 * __this, t9 * p0, MethodInfo* method)
{
	t448  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t448_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t448 *)((t448 *)UnBox (L_1, InitializedTypeInfo(&t448_TI)))));
		float L_2 = m2659(__this, &m2659_MI);
		V_1 = L_2;
		float L_3 = m2659((&V_0), &m2659_MI);
		bool L_4 = m4294((&V_1), L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = m2660(__this, &m2660_MI);
		V_2 = L_5;
		float L_6 = m2660((&V_0), &m2660_MI);
		bool L_7 = m4294((&V_2), L_6, &m4294_MI);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = m2654(__this, &m2654_MI);
		V_3 = L_8;
		float L_9 = m2654((&V_0), &m2654_MI);
		bool L_10 = m4294((&V_3), L_9, &m4294_MI);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = m2655(__this, &m2655_MI);
		V_4 = L_11;
		float L_12 = m2655((&V_0), &m2655_MI);
		bool L_13 = m4294((&V_4), L_12, &m4294_MI);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_007b;
	}

IL_007a:
	{
		G_B7_0 = 0;
	}

IL_007b:
	{
		return G_B7_0;
	}
}
extern MethodInfo m2859_MI;
extern "C" bool m2859 (t9 * __this , t448  p0, t448  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = m2659((&p0), &m2659_MI);
		float L_1 = m2659((&p1), &m2659_MI);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = m2660((&p0), &m2660_MI);
		float L_3 = m2660((&p1), &m2660_MI);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = m2654((&p0), &m2654_MI);
		float L_5 = m2654((&p1), &m2654_MI);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = m2655((&p0), &m2655_MI);
		float L_7 = m2655((&p1), &m2655_MI);
		G_B5_0 = ((((float)L_6) == ((float)L_7))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		return G_B5_0;
	}
}
#include "t46.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t46_TI;
#include "t46MD.h"

extern MethodInfo m472_MI;
extern MethodInfo m473_MI;
extern MethodInfo m3480_MI;
extern MethodInfo m3482_MI;
extern MethodInfo m3488_MI;
extern MethodInfo m3481_MI;
extern MethodInfo m3483_MI;
extern MethodInfo m3485_MI;
extern MethodInfo m3476_MI;
extern MethodInfo m3477_MI;
extern MethodInfo m3495_MI;
extern MethodInfo m3496_MI;
extern MethodInfo m3501_MI;


extern "C" float m3476 (t46 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = m472(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), &m472_MI);
		return L_2;
	}
}
extern "C" void m3477 (t46 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = p2;
		m473(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), L_2, &m473_MI);
		return;
	}
}
extern "C" float m472 (t46 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0054;
		}
		if (L_1 == 2)
		{
			goto IL_005b;
		}
		if (L_1 == 3)
		{
			goto IL_0062;
		}
		if (L_1 == 4)
		{
			goto IL_0069;
		}
		if (L_1 == 5)
		{
			goto IL_0070;
		}
		if (L_1 == 6)
		{
			goto IL_0077;
		}
		if (L_1 == 7)
		{
			goto IL_007e;
		}
		if (L_1 == 8)
		{
			goto IL_0085;
		}
		if (L_1 == 9)
		{
			goto IL_008c;
		}
		if (L_1 == 10)
		{
			goto IL_0093;
		}
		if (L_1 == 11)
		{
			goto IL_009a;
		}
		if (L_1 == 12)
		{
			goto IL_00a1;
		}
		if (L_1 == 13)
		{
			goto IL_00a8;
		}
		if (L_1 == 14)
		{
			goto IL_00af;
		}
		if (L_1 == 15)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00bd;
	}

IL_004d:
	{
		float L_2 = (__this->f0);
		return L_2;
	}

IL_0054:
	{
		float L_3 = (__this->f1);
		return L_3;
	}

IL_005b:
	{
		float L_4 = (__this->f2);
		return L_4;
	}

IL_0062:
	{
		float L_5 = (__this->f3);
		return L_5;
	}

IL_0069:
	{
		float L_6 = (__this->f4);
		return L_6;
	}

IL_0070:
	{
		float L_7 = (__this->f5);
		return L_7;
	}

IL_0077:
	{
		float L_8 = (__this->f6);
		return L_8;
	}

IL_007e:
	{
		float L_9 = (__this->f7);
		return L_9;
	}

IL_0085:
	{
		float L_10 = (__this->f8);
		return L_10;
	}

IL_008c:
	{
		float L_11 = (__this->f9);
		return L_11;
	}

IL_0093:
	{
		float L_12 = (__this->f10);
		return L_12;
	}

IL_009a:
	{
		float L_13 = (__this->f11);
		return L_13;
	}

IL_00a1:
	{
		float L_14 = (__this->f12);
		return L_14;
	}

IL_00a8:
	{
		float L_15 = (__this->f13);
		return L_15;
	}

IL_00af:
	{
		float L_16 = (__this->f14);
		return L_16;
	}

IL_00b6:
	{
		float L_17 = (__this->f15);
		return L_17;
	}

IL_00bd:
	{
		t890 * L_18 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_18, (t2*) &_stringLiteral218, &m4293_MI);
		il2cpp_codegen_raise_exception(L_18);
	}
}
extern "C" void m473 (t46 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_004d;
		}
		if (L_1 == 1)
		{
			goto IL_0059;
		}
		if (L_1 == 2)
		{
			goto IL_0065;
		}
		if (L_1 == 3)
		{
			goto IL_0071;
		}
		if (L_1 == 4)
		{
			goto IL_007d;
		}
		if (L_1 == 5)
		{
			goto IL_0089;
		}
		if (L_1 == 6)
		{
			goto IL_0095;
		}
		if (L_1 == 7)
		{
			goto IL_00a1;
		}
		if (L_1 == 8)
		{
			goto IL_00ad;
		}
		if (L_1 == 9)
		{
			goto IL_00b9;
		}
		if (L_1 == 10)
		{
			goto IL_00c5;
		}
		if (L_1 == 11)
		{
			goto IL_00d1;
		}
		if (L_1 == 12)
		{
			goto IL_00dd;
		}
		if (L_1 == 13)
		{
			goto IL_00e9;
		}
		if (L_1 == 14)
		{
			goto IL_00f5;
		}
		if (L_1 == 15)
		{
			goto IL_0101;
		}
	}
	{
		goto IL_010d;
	}

IL_004d:
	{
		float L_2 = p1;
		__this->f0 = L_2;
		goto IL_0118;
	}

IL_0059:
	{
		float L_3 = p1;
		__this->f1 = L_3;
		goto IL_0118;
	}

IL_0065:
	{
		float L_4 = p1;
		__this->f2 = L_4;
		goto IL_0118;
	}

IL_0071:
	{
		float L_5 = p1;
		__this->f3 = L_5;
		goto IL_0118;
	}

IL_007d:
	{
		float L_6 = p1;
		__this->f4 = L_6;
		goto IL_0118;
	}

IL_0089:
	{
		float L_7 = p1;
		__this->f5 = L_7;
		goto IL_0118;
	}

IL_0095:
	{
		float L_8 = p1;
		__this->f6 = L_8;
		goto IL_0118;
	}

IL_00a1:
	{
		float L_9 = p1;
		__this->f7 = L_9;
		goto IL_0118;
	}

IL_00ad:
	{
		float L_10 = p1;
		__this->f8 = L_10;
		goto IL_0118;
	}

IL_00b9:
	{
		float L_11 = p1;
		__this->f9 = L_11;
		goto IL_0118;
	}

IL_00c5:
	{
		float L_12 = p1;
		__this->f10 = L_12;
		goto IL_0118;
	}

IL_00d1:
	{
		float L_13 = p1;
		__this->f11 = L_13;
		goto IL_0118;
	}

IL_00dd:
	{
		float L_14 = p1;
		__this->f12 = L_14;
		goto IL_0118;
	}

IL_00e9:
	{
		float L_15 = p1;
		__this->f13 = L_15;
		goto IL_0118;
	}

IL_00f5:
	{
		float L_16 = p1;
		__this->f14 = L_16;
		goto IL_0118;
	}

IL_0101:
	{
		float L_17 = p1;
		__this->f15 = L_17;
		goto IL_0118;
	}

IL_010d:
	{
		t890 * L_18 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_18, (t2*) &_stringLiteral218, &m4293_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
extern MethodInfo m3478_MI;
extern "C" int32_t m3478 (t46 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	t47  V_1 = {0};
	t47  V_2 = {0};
	t47  V_3 = {0};
	{
		t47  L_0 = m3488(__this, 0, &m3488_MI);
		V_0 = L_0;
		int32_t L_1 = m3530((&V_0), &m3530_MI);
		t47  L_2 = m3488(__this, 1, &m3488_MI);
		V_1 = L_2;
		int32_t L_3 = m3530((&V_1), &m3530_MI);
		t47  L_4 = m3488(__this, 2, &m3488_MI);
		V_2 = L_4;
		int32_t L_5 = m3530((&V_2), &m3530_MI);
		t47  L_6 = m3488(__this, 3, &m3488_MI);
		V_3 = L_6;
		int32_t L_7 = m3530((&V_3), &m3530_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3479_MI;
extern "C" bool m3479 (t46 * __this, t9 * p0, MethodInfo* method)
{
	t46  V_0 = {0};
	t47  V_1 = {0};
	t47  V_2 = {0};
	t47  V_3 = {0};
	t47  V_4 = {0};
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t46_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t46 *)((t46 *)UnBox (L_1, InitializedTypeInfo(&t46_TI)))));
		t47  L_2 = m3488(__this, 0, &m3488_MI);
		V_1 = L_2;
		t47  L_3 = m3488((&V_0), 0, &m3488_MI);
		t47  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t47_TI), &L_4);
		bool L_6 = m3531((&V_1), L_5, &m3531_MI);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_7 = m3488(__this, 1, &m3488_MI);
		V_2 = L_7;
		t47  L_8 = m3488((&V_0), 1, &m3488_MI);
		t47  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t47_TI), &L_9);
		bool L_11 = m3531((&V_2), L_10, &m3531_MI);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_12 = m3488(__this, 2, &m3488_MI);
		V_3 = L_12;
		t47  L_13 = m3488((&V_0), 2, &m3488_MI);
		t47  L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t47_TI), &L_14);
		bool L_16 = m3531((&V_3), L_15, &m3531_MI);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_17 = m3488(__this, 3, &m3488_MI);
		V_4 = L_17;
		t47  L_18 = m3488((&V_0), 3, &m3488_MI);
		t47  L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t47_TI), &L_19);
		bool L_21 = m3531((&V_4), L_20, &m3531_MI);
		G_B7_0 = ((int32_t)(L_21));
		goto IL_0097;
	}

IL_0096:
	{
		G_B7_0 = 0;
	}

IL_0097:
	{
		return G_B7_0;
	}
}
extern "C" t46  m3480 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3481(NULL, (&p0), &m3481_MI);
		return L_0;
	}
}
extern "C" t46  m3481 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3481_ftn) (t46 *);
	static m3481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t46  m3482 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3483(NULL, (&p0), &m3483_MI);
		return L_0;
	}
}
extern "C" t46  m3483 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3483_ftn) (t46 *);
	static m3483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3484_MI;
extern "C" bool m3484 (t9 * __this , t46  p0, t46 * p1, MethodInfo* method)
{
	{
		t46 * L_0 = p1;
		bool L_1 = m3485(NULL, (&p0), L_0, &m3485_MI);
		return L_1;
	}
}
extern "C" bool m3485 (t9 * __this , t46 * p0, t46 * p1, MethodInfo* method)
{
	typedef bool (*m3485_ftn) (t46 *, t46 *);
	static m3485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m469_MI;
extern "C" t46  m469 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3480(NULL, (*(t46 *)__this), &m3480_MI);
		return L_0;
	}
}
extern MethodInfo m3486_MI;
extern "C" t46  m3486 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3482(NULL, (*(t46 *)__this), &m3482_MI);
		return L_0;
	}
}
extern MethodInfo m3487_MI;
extern "C" bool m3487 (t46 * __this, MethodInfo* method)
{
	typedef bool (*m3487_ftn) (t46 *);
	static m3487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47  m3488 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3476(__this, 0, L_0, &m3476_MI);
		int32_t L_2 = p0;
		float L_3 = m3476(__this, 1, L_2, &m3476_MI);
		int32_t L_4 = p0;
		float L_5 = m3476(__this, 2, L_4, &m3476_MI);
		int32_t L_6 = p0;
		float L_7 = m3476(__this, 3, L_6, &m3476_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3489_MI;
extern "C" t47  m3489 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3476(__this, L_0, 0, &m3476_MI);
		int32_t L_2 = p0;
		float L_3 = m3476(__this, L_2, 1, &m3476_MI);
		int32_t L_4 = p0;
		float L_5 = m3476(__this, L_4, 2, &m3476_MI);
		int32_t L_6 = p0;
		float L_7 = m3476(__this, L_6, 3, &m3476_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3490_MI;
extern "C" void m3490 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3477(__this, 0, L_0, L_1, &m3477_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3477(__this, 1, L_2, L_3, &m3477_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3477(__this, 2, L_4, L_5, &m3477_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3477(__this, 3, L_6, L_7, &m3477_MI);
		return;
	}
}
extern MethodInfo m3491_MI;
extern "C" void m3491 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3477(__this, L_0, 0, L_1, &m3477_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3477(__this, L_2, 1, L_3, &m3477_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3477(__this, L_4, 2, L_5, &m3477_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3477(__this, L_6, 3, L_7, &m3477_MI);
		return;
	}
}
extern MethodInfo m460_MI;
extern "C" t13  m460 (t46 * __this, t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	float V_1 = 0.0f;
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		float L_6 = (__this->f12);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = (__this->f5);
		float L_10 = ((&p0)->f2);
		float L_11 = (__this->f9);
		float L_12 = ((&p0)->f3);
		float L_13 = (__this->f13);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->f2);
		float L_15 = ((&p0)->f1);
		float L_16 = (__this->f6);
		float L_17 = ((&p0)->f2);
		float L_18 = (__this->f10);
		float L_19 = ((&p0)->f3);
		float L_20 = (__this->f14);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		float L_21 = (__this->f3);
		float L_22 = ((&p0)->f1);
		float L_23 = (__this->f7);
		float L_24 = ((&p0)->f2);
		float L_25 = (__this->f11);
		float L_26 = ((&p0)->f3);
		float L_27 = (__this->f15);
		V_1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)L_23*(float)L_24))))+(float)((float)((float)L_25*(float)L_26))))+(float)L_27));
		float L_28 = V_1;
		V_1 = ((float)((float)(1.0f)/(float)L_28));
		t13 * L_29 = (&V_0);
		float L_30 = (L_29->f1);
		float L_31 = V_1;
		L_29->f1 = ((float)((float)L_30*(float)L_31));
		t13 * L_32 = (&V_0);
		float L_33 = (L_32->f2);
		float L_34 = V_1;
		L_32->f2 = ((float)((float)L_33*(float)L_34));
		t13 * L_35 = (&V_0);
		float L_36 = (L_35->f3);
		float L_37 = V_1;
		L_35->f3 = ((float)((float)L_36*(float)L_37));
		t13  L_38 = V_0;
		return L_38;
	}
}
extern MethodInfo m2888_MI;
extern "C" t13  m2888 (t46 * __this, t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		float L_6 = (__this->f12);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)L_6));
		float L_7 = (__this->f1);
		float L_8 = ((&p0)->f1);
		float L_9 = (__this->f5);
		float L_10 = ((&p0)->f2);
		float L_11 = (__this->f9);
		float L_12 = ((&p0)->f3);
		float L_13 = (__this->f13);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_7*(float)L_8))+(float)((float)((float)L_9*(float)L_10))))+(float)((float)((float)L_11*(float)L_12))))+(float)L_13));
		float L_14 = (__this->f2);
		float L_15 = ((&p0)->f1);
		float L_16 = (__this->f6);
		float L_17 = ((&p0)->f2);
		float L_18 = (__this->f10);
		float L_19 = ((&p0)->f3);
		float L_20 = (__this->f14);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_14*(float)L_15))+(float)((float)((float)L_16*(float)L_17))))+(float)((float)((float)L_18*(float)L_19))))+(float)L_20));
		t13  L_21 = V_0;
		return L_21;
	}
}
extern MethodInfo m477_MI;
extern "C" t13  m477 (t46 * __this, t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		float L_0 = (__this->f0);
		float L_1 = ((&p0)->f1);
		float L_2 = (__this->f4);
		float L_3 = ((&p0)->f2);
		float L_4 = (__this->f8);
		float L_5 = ((&p0)->f3);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
		float L_6 = (__this->f1);
		float L_7 = ((&p0)->f1);
		float L_8 = (__this->f5);
		float L_9 = ((&p0)->f2);
		float L_10 = (__this->f9);
		float L_11 = ((&p0)->f3);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11))));
		float L_12 = (__this->f2);
		float L_13 = ((&p0)->f1);
		float L_14 = (__this->f6);
		float L_15 = ((&p0)->f2);
		float L_16 = (__this->f10);
		float L_17 = ((&p0)->f3);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)L_12*(float)L_13))+(float)((float)((float)L_14*(float)L_15))))+(float)((float)((float)L_16*(float)L_17))));
		t13  L_18 = V_0;
		return L_18;
	}
}
extern MethodInfo m3492_MI;
extern "C" t46  m3492 (t9 * __this , t13  p0, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t46_TI), (&V_0));
		float L_0 = ((&p0)->f1);
		(&V_0)->f0 = L_0;
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		float L_1 = ((&p0)->f2);
		(&V_0)->f5 = L_1;
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		float L_2 = ((&p0)->f3);
		(&V_0)->f10 = L_2;
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (1.0f);
		t46  L_3 = V_0;
		return L_3;
	}
}
extern MethodInfo m459_MI;
extern "C" t46  m459 (t9 * __this , MethodInfo* method)
{
	t46  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t46_TI), (&V_0));
		(&V_0)->f0 = (0.0f);
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		(&V_0)->f5 = (0.0f);
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		(&V_0)->f10 = (0.0f);
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (0.0f);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m3493_MI;
extern "C" t46  m3493 (t9 * __this , MethodInfo* method)
{
	t46  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t46_TI), (&V_0));
		(&V_0)->f0 = (1.0f);
		(&V_0)->f4 = (0.0f);
		(&V_0)->f8 = (0.0f);
		(&V_0)->f12 = (0.0f);
		(&V_0)->f1 = (0.0f);
		(&V_0)->f5 = (1.0f);
		(&V_0)->f9 = (0.0f);
		(&V_0)->f13 = (0.0f);
		(&V_0)->f2 = (0.0f);
		(&V_0)->f6 = (0.0f);
		(&V_0)->f10 = (1.0f);
		(&V_0)->f14 = (0.0f);
		(&V_0)->f3 = (0.0f);
		(&V_0)->f7 = (0.0f);
		(&V_0)->f11 = (0.0f);
		(&V_0)->f15 = (1.0f);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m3494_MI;
extern "C" void m3494 (t46 * __this, t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = p1;
		t13  L_2 = p2;
		t46  L_3 = m3495(NULL, L_0, L_1, L_2, &m3495_MI);
		*__this = L_3;
		return;
	}
}
extern "C" t46  m3495 (t9 * __this , t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t46  L_0 = m3496(NULL, (&p0), (&p1), (&p2), &m3496_MI);
		return L_0;
	}
}
extern "C" t46  m3496 (t9 * __this , t13 * p0, t93 * p1, t13 * p2, MethodInfo* method)
{
	typedef t46  (*m3496_ftn) (t13 *, t93 *, t13 *);
	static m3496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3497_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3497 (t46 * __this, MethodInfo* method)
{
	static bool m3497_init;
	if (!m3497_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3497_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)16)));
		float L_1 = (__this->f0);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f4);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = (__this->f8);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = (__this->f12);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t158* L_16 = L_12;
		float L_17 = (__this->f1);
		float L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t123_TI), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 4)) = (t9 *)L_19;
		t158* L_20 = L_16;
		float L_21 = (__this->f5);
		float L_22 = L_21;
		t9 * L_23 = Box(InitializedTypeInfo(&t123_TI), &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 5)) = (t9 *)L_23;
		t158* L_24 = L_20;
		float L_25 = (__this->f9);
		float L_26 = L_25;
		t9 * L_27 = Box(InitializedTypeInfo(&t123_TI), &L_26);
		ArrayElementTypeCheck (L_24, L_27);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 6)) = (t9 *)L_27;
		t158* L_28 = L_24;
		float L_29 = (__this->f13);
		float L_30 = L_29;
		t9 * L_31 = Box(InitializedTypeInfo(&t123_TI), &L_30);
		ArrayElementTypeCheck (L_28, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 7)) = (t9 *)L_31;
		t158* L_32 = L_28;
		float L_33 = (__this->f2);
		float L_34 = L_33;
		t9 * L_35 = Box(InitializedTypeInfo(&t123_TI), &L_34);
		ArrayElementTypeCheck (L_32, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 8)) = (t9 *)L_35;
		t158* L_36 = L_32;
		float L_37 = (__this->f6);
		float L_38 = L_37;
		t9 * L_39 = Box(InitializedTypeInfo(&t123_TI), &L_38);
		ArrayElementTypeCheck (L_36, L_39);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t9 *)L_39;
		t158* L_40 = L_36;
		float L_41 = (__this->f10);
		float L_42 = L_41;
		t9 * L_43 = Box(InitializedTypeInfo(&t123_TI), &L_42);
		ArrayElementTypeCheck (L_40, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t9 *)L_43;
		t158* L_44 = L_40;
		float L_45 = (__this->f14);
		float L_46 = L_45;
		t9 * L_47 = Box(InitializedTypeInfo(&t123_TI), &L_46);
		ArrayElementTypeCheck (L_44, L_47);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t9 *)L_47;
		t158* L_48 = L_44;
		float L_49 = (__this->f3);
		float L_50 = L_49;
		t9 * L_51 = Box(InitializedTypeInfo(&t123_TI), &L_50);
		ArrayElementTypeCheck (L_48, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t9 *)L_51;
		t158* L_52 = L_48;
		float L_53 = (__this->f7);
		float L_54 = L_53;
		t9 * L_55 = Box(InitializedTypeInfo(&t123_TI), &L_54);
		ArrayElementTypeCheck (L_52, L_55);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t9 *)L_55;
		t158* L_56 = L_52;
		float L_57 = (__this->f11);
		float L_58 = L_57;
		t9 * L_59 = Box(InitializedTypeInfo(&t123_TI), &L_58);
		ArrayElementTypeCheck (L_56, L_59);
		*((t9 **)(t9 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t9 *)L_59;
		t158* L_60 = L_56;
		float L_61 = (__this->f15);
		float L_62 = L_61;
		t9 * L_63 = Box(InitializedTypeInfo(&t123_TI), &L_62);
		ArrayElementTypeCheck (L_60, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t9 *)L_63;
		t2* L_64 = m3626(NULL, (t2*) &_stringLiteral219, L_60, &m3626_MI);
		return L_64;
	}
}
extern MethodInfo m3498_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3498 (t46 * __this, t2* p0, MethodInfo* method)
{
	static bool m3498_init;
	if (!m3498_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3498_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)16)));
		float* L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m4295(L_1, L_2, &m4295_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f4);
		t2* L_6 = p0;
		t2* L_7 = m4295(L_5, L_6, &m4295_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f8);
		t2* L_10 = p0;
		t2* L_11 = m4295(L_9, L_10, &m4295_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float* L_13 = &(__this->f12);
		t2* L_14 = p0;
		t2* L_15 = m4295(L_13, L_14, &m4295_MI);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t158* L_16 = L_12;
		float* L_17 = &(__this->f1);
		t2* L_18 = p0;
		t2* L_19 = m4295(L_17, L_18, &m4295_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 4)) = (t9 *)L_19;
		t158* L_20 = L_16;
		float* L_21 = &(__this->f5);
		t2* L_22 = p0;
		t2* L_23 = m4295(L_21, L_22, &m4295_MI);
		ArrayElementTypeCheck (L_20, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 5)) = (t9 *)L_23;
		t158* L_24 = L_20;
		float* L_25 = &(__this->f9);
		t2* L_26 = p0;
		t2* L_27 = m4295(L_25, L_26, &m4295_MI);
		ArrayElementTypeCheck (L_24, L_27);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 6)) = (t9 *)L_27;
		t158* L_28 = L_24;
		float* L_29 = &(__this->f13);
		t2* L_30 = p0;
		t2* L_31 = m4295(L_29, L_30, &m4295_MI);
		ArrayElementTypeCheck (L_28, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 7)) = (t9 *)L_31;
		t158* L_32 = L_28;
		float* L_33 = &(__this->f2);
		t2* L_34 = p0;
		t2* L_35 = m4295(L_33, L_34, &m4295_MI);
		ArrayElementTypeCheck (L_32, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 8)) = (t9 *)L_35;
		t158* L_36 = L_32;
		float* L_37 = &(__this->f6);
		t2* L_38 = p0;
		t2* L_39 = m4295(L_37, L_38, &m4295_MI);
		ArrayElementTypeCheck (L_36, L_39);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t9 *)L_39;
		t158* L_40 = L_36;
		float* L_41 = &(__this->f10);
		t2* L_42 = p0;
		t2* L_43 = m4295(L_41, L_42, &m4295_MI);
		ArrayElementTypeCheck (L_40, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t9 *)L_43;
		t158* L_44 = L_40;
		float* L_45 = &(__this->f14);
		t2* L_46 = p0;
		t2* L_47 = m4295(L_45, L_46, &m4295_MI);
		ArrayElementTypeCheck (L_44, L_47);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t9 *)L_47;
		t158* L_48 = L_44;
		float* L_49 = &(__this->f3);
		t2* L_50 = p0;
		t2* L_51 = m4295(L_49, L_50, &m4295_MI);
		ArrayElementTypeCheck (L_48, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t9 *)L_51;
		t158* L_52 = L_48;
		float* L_53 = &(__this->f7);
		t2* L_54 = p0;
		t2* L_55 = m4295(L_53, L_54, &m4295_MI);
		ArrayElementTypeCheck (L_52, L_55);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t9 *)L_55;
		t158* L_56 = L_52;
		float* L_57 = &(__this->f11);
		t2* L_58 = p0;
		t2* L_59 = m4295(L_57, L_58, &m4295_MI);
		ArrayElementTypeCheck (L_56, L_59);
		*((t9 **)(t9 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t9 *)L_59;
		t158* L_60 = L_56;
		float* L_61 = &(__this->f15);
		t2* L_62 = p0;
		t2* L_63 = m4295(L_61, L_62, &m4295_MI);
		ArrayElementTypeCheck (L_60, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t9 *)L_63;
		t2* L_64 = m3626(NULL, (t2*) &_stringLiteral220, L_60, &m3626_MI);
		return L_64;
	}
}
extern MethodInfo m3499_MI;
extern "C" t46  m3499 (t9 * __this , float p0, float p1, float p2, float p3, float p4, float p5, MethodInfo* method)
{
	typedef t46  (*m3499_ftn) (float, float, float, float, float, float);
	static m3499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m3500_MI;
extern "C" t46  m3500 (t9 * __this , float p0, float p1, float p2, float p3, MethodInfo* method)
{
	typedef t46  (*m3500_ftn) (float, float, float, float);
	static m3500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m462_MI;
extern "C" t46  m462 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t46_TI), (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		float L_2 = ((&p0)->f4);
		float L_3 = ((&p1)->f1);
		float L_4 = ((&p0)->f8);
		float L_5 = ((&p1)->f2);
		float L_6 = ((&p0)->f12);
		float L_7 = ((&p1)->f3);
		(&V_0)->f0 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&p0)->f0);
		float L_9 = ((&p1)->f4);
		float L_10 = ((&p0)->f4);
		float L_11 = ((&p1)->f5);
		float L_12 = ((&p0)->f8);
		float L_13 = ((&p1)->f6);
		float L_14 = ((&p0)->f12);
		float L_15 = ((&p1)->f7);
		(&V_0)->f4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&p0)->f0);
		float L_17 = ((&p1)->f8);
		float L_18 = ((&p0)->f4);
		float L_19 = ((&p1)->f9);
		float L_20 = ((&p0)->f8);
		float L_21 = ((&p1)->f10);
		float L_22 = ((&p0)->f12);
		float L_23 = ((&p1)->f11);
		(&V_0)->f8 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&p0)->f0);
		float L_25 = ((&p1)->f12);
		float L_26 = ((&p0)->f4);
		float L_27 = ((&p1)->f13);
		float L_28 = ((&p0)->f8);
		float L_29 = ((&p1)->f14);
		float L_30 = ((&p0)->f12);
		float L_31 = ((&p1)->f15);
		(&V_0)->f12 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		float L_32 = ((&p0)->f1);
		float L_33 = ((&p1)->f0);
		float L_34 = ((&p0)->f5);
		float L_35 = ((&p1)->f1);
		float L_36 = ((&p0)->f9);
		float L_37 = ((&p1)->f2);
		float L_38 = ((&p0)->f13);
		float L_39 = ((&p1)->f3);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_32*(float)L_33))+(float)((float)((float)L_34*(float)L_35))))+(float)((float)((float)L_36*(float)L_37))))+(float)((float)((float)L_38*(float)L_39))));
		float L_40 = ((&p0)->f1);
		float L_41 = ((&p1)->f4);
		float L_42 = ((&p0)->f5);
		float L_43 = ((&p1)->f5);
		float L_44 = ((&p0)->f9);
		float L_45 = ((&p1)->f6);
		float L_46 = ((&p0)->f13);
		float L_47 = ((&p1)->f7);
		(&V_0)->f5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_40*(float)L_41))+(float)((float)((float)L_42*(float)L_43))))+(float)((float)((float)L_44*(float)L_45))))+(float)((float)((float)L_46*(float)L_47))));
		float L_48 = ((&p0)->f1);
		float L_49 = ((&p1)->f8);
		float L_50 = ((&p0)->f5);
		float L_51 = ((&p1)->f9);
		float L_52 = ((&p0)->f9);
		float L_53 = ((&p1)->f10);
		float L_54 = ((&p0)->f13);
		float L_55 = ((&p1)->f11);
		(&V_0)->f9 = ((float)((float)((float)((float)((float)((float)((float)((float)L_48*(float)L_49))+(float)((float)((float)L_50*(float)L_51))))+(float)((float)((float)L_52*(float)L_53))))+(float)((float)((float)L_54*(float)L_55))));
		float L_56 = ((&p0)->f1);
		float L_57 = ((&p1)->f12);
		float L_58 = ((&p0)->f5);
		float L_59 = ((&p1)->f13);
		float L_60 = ((&p0)->f9);
		float L_61 = ((&p1)->f14);
		float L_62 = ((&p0)->f13);
		float L_63 = ((&p1)->f15);
		(&V_0)->f13 = ((float)((float)((float)((float)((float)((float)((float)((float)L_56*(float)L_57))+(float)((float)((float)L_58*(float)L_59))))+(float)((float)((float)L_60*(float)L_61))))+(float)((float)((float)L_62*(float)L_63))));
		float L_64 = ((&p0)->f2);
		float L_65 = ((&p1)->f0);
		float L_66 = ((&p0)->f6);
		float L_67 = ((&p1)->f1);
		float L_68 = ((&p0)->f10);
		float L_69 = ((&p1)->f2);
		float L_70 = ((&p0)->f14);
		float L_71 = ((&p1)->f3);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))+(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))+(float)((float)((float)L_70*(float)L_71))));
		float L_72 = ((&p0)->f2);
		float L_73 = ((&p1)->f4);
		float L_74 = ((&p0)->f6);
		float L_75 = ((&p1)->f5);
		float L_76 = ((&p0)->f10);
		float L_77 = ((&p1)->f6);
		float L_78 = ((&p0)->f14);
		float L_79 = ((&p1)->f7);
		(&V_0)->f6 = ((float)((float)((float)((float)((float)((float)((float)((float)L_72*(float)L_73))+(float)((float)((float)L_74*(float)L_75))))+(float)((float)((float)L_76*(float)L_77))))+(float)((float)((float)L_78*(float)L_79))));
		float L_80 = ((&p0)->f2);
		float L_81 = ((&p1)->f8);
		float L_82 = ((&p0)->f6);
		float L_83 = ((&p1)->f9);
		float L_84 = ((&p0)->f10);
		float L_85 = ((&p1)->f10);
		float L_86 = ((&p0)->f14);
		float L_87 = ((&p1)->f11);
		(&V_0)->f10 = ((float)((float)((float)((float)((float)((float)((float)((float)L_80*(float)L_81))+(float)((float)((float)L_82*(float)L_83))))+(float)((float)((float)L_84*(float)L_85))))+(float)((float)((float)L_86*(float)L_87))));
		float L_88 = ((&p0)->f2);
		float L_89 = ((&p1)->f12);
		float L_90 = ((&p0)->f6);
		float L_91 = ((&p1)->f13);
		float L_92 = ((&p0)->f10);
		float L_93 = ((&p1)->f14);
		float L_94 = ((&p0)->f14);
		float L_95 = ((&p1)->f15);
		(&V_0)->f14 = ((float)((float)((float)((float)((float)((float)((float)((float)L_88*(float)L_89))+(float)((float)((float)L_90*(float)L_91))))+(float)((float)((float)L_92*(float)L_93))))+(float)((float)((float)L_94*(float)L_95))));
		float L_96 = ((&p0)->f3);
		float L_97 = ((&p1)->f0);
		float L_98 = ((&p0)->f7);
		float L_99 = ((&p1)->f1);
		float L_100 = ((&p0)->f11);
		float L_101 = ((&p1)->f2);
		float L_102 = ((&p0)->f15);
		float L_103 = ((&p1)->f3);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_96*(float)L_97))+(float)((float)((float)L_98*(float)L_99))))+(float)((float)((float)L_100*(float)L_101))))+(float)((float)((float)L_102*(float)L_103))));
		float L_104 = ((&p0)->f3);
		float L_105 = ((&p1)->f4);
		float L_106 = ((&p0)->f7);
		float L_107 = ((&p1)->f5);
		float L_108 = ((&p0)->f11);
		float L_109 = ((&p1)->f6);
		float L_110 = ((&p0)->f15);
		float L_111 = ((&p1)->f7);
		(&V_0)->f7 = ((float)((float)((float)((float)((float)((float)((float)((float)L_104*(float)L_105))+(float)((float)((float)L_106*(float)L_107))))+(float)((float)((float)L_108*(float)L_109))))+(float)((float)((float)L_110*(float)L_111))));
		float L_112 = ((&p0)->f3);
		float L_113 = ((&p1)->f8);
		float L_114 = ((&p0)->f7);
		float L_115 = ((&p1)->f9);
		float L_116 = ((&p0)->f11);
		float L_117 = ((&p1)->f10);
		float L_118 = ((&p0)->f15);
		float L_119 = ((&p1)->f11);
		(&V_0)->f11 = ((float)((float)((float)((float)((float)((float)((float)((float)L_112*(float)L_113))+(float)((float)((float)L_114*(float)L_115))))+(float)((float)((float)L_116*(float)L_117))))+(float)((float)((float)L_118*(float)L_119))));
		float L_120 = ((&p0)->f3);
		float L_121 = ((&p1)->f12);
		float L_122 = ((&p0)->f7);
		float L_123 = ((&p1)->f13);
		float L_124 = ((&p0)->f11);
		float L_125 = ((&p1)->f14);
		float L_126 = ((&p0)->f15);
		float L_127 = ((&p1)->f15);
		(&V_0)->f15 = ((float)((float)((float)((float)((float)((float)((float)((float)L_120*(float)L_121))+(float)((float)((float)L_122*(float)L_123))))+(float)((float)((float)L_124*(float)L_125))))+(float)((float)((float)L_126*(float)L_127))));
		t46  L_128 = V_0;
		return L_128;
	}
}
extern MethodInfo m470_MI;
extern "C" t47  m470 (t9 * __this , t46  p0, t47  p1, MethodInfo* method)
{
	t47  V_0 = {0};
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f4);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f8);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f12);
		float L_7 = ((&p1)->f4);
		(&V_0)->f1 = ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
		float L_8 = ((&p0)->f1);
		float L_9 = ((&p1)->f1);
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f2);
		float L_12 = ((&p0)->f9);
		float L_13 = ((&p1)->f3);
		float L_14 = ((&p0)->f13);
		float L_15 = ((&p1)->f4);
		(&V_0)->f2 = ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))+(float)((float)((float)L_14*(float)L_15))));
		float L_16 = ((&p0)->f2);
		float L_17 = ((&p1)->f1);
		float L_18 = ((&p0)->f6);
		float L_19 = ((&p1)->f2);
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f3);
		float L_22 = ((&p0)->f14);
		float L_23 = ((&p1)->f4);
		(&V_0)->f3 = ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))+(float)((float)((float)L_22*(float)L_23))));
		float L_24 = ((&p0)->f3);
		float L_25 = ((&p1)->f1);
		float L_26 = ((&p0)->f7);
		float L_27 = ((&p1)->f2);
		float L_28 = ((&p0)->f11);
		float L_29 = ((&p1)->f3);
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f4);
		(&V_0)->f4 = ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))+(float)((float)((float)L_26*(float)L_27))))+(float)((float)((float)L_28*(float)L_29))))+(float)((float)((float)L_30*(float)L_31))));
		t47  L_32 = V_0;
		return L_32;
	}
}
extern "C" bool m3501 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t47  L_0 = m3488((&p0), 0, &m3488_MI);
		t47  L_1 = m3488((&p1), 0, &m3488_MI);
		bool L_2 = m3535(NULL, L_0, L_1, &m3535_MI);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_3 = m3488((&p0), 1, &m3488_MI);
		t47  L_4 = m3488((&p1), 1, &m3488_MI);
		bool L_5 = m3535(NULL, L_3, L_4, &m3535_MI);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_6 = m3488((&p0), 2, &m3488_MI);
		t47  L_7 = m3488((&p1), 2, &m3488_MI);
		bool L_8 = m3535(NULL, L_6, L_7, &m3535_MI);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_9 = m3488((&p0), 3, &m3488_MI);
		t47  L_10 = m3488((&p1), 3, &m3488_MI);
		bool L_11 = m3535(NULL, L_9, L_10, &m3535_MI);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		return G_B5_0;
	}
}
extern MethodInfo m3502_MI;
extern "C" bool m3502 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	{
		t46  L_0 = p0;
		t46  L_1 = p1;
		bool L_2 = m3501(NULL, L_0, L_1, &m3501_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t504.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t504_TI;
#include "t504MD.h"

#include "t74.h"
extern MethodInfo m2883_MI;
extern MethodInfo m3505_MI;
extern MethodInfo m2892_MI;
extern MethodInfo m3509_MI;
extern MethodInfo m2874_MI;
extern MethodInfo m3506_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m2891_MI;
extern MethodInfo m3515_MI;
extern MethodInfo m3514_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m3517_MI;
extern MethodInfo m3521_MI;
extern MethodInfo m3520_MI;
extern MethodInfo m3525_MI;
extern MethodInfo m3524_MI;
extern MethodInfo m3529_MI;


extern MethodInfo m2882_MI;
extern "C" void m2882 (t504 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		t13  L_1 = p1;
		t13  L_2 = m475(NULL, L_1, (0.5f), &m475_MI);
		__this->f1 = L_2;
		return;
	}
}
extern MethodInfo m3503_MI;
extern "C" int32_t m3503 (t504 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		t13  L_0 = m2883(__this, &m2883_MI);
		V_0 = L_0;
		int32_t L_1 = m3444((&V_0), &m3444_MI);
		t13  L_2 = m3505(__this, &m3505_MI);
		V_1 = L_2;
		int32_t L_3 = m3444((&V_1), &m3444_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3504_MI;
extern "C" bool m3504 (t504 * __this, t9 * p0, MethodInfo* method)
{
	t504  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t504_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t504 *)((t504 *)UnBox (L_1, InitializedTypeInfo(&t504_TI)))));
		t13  L_2 = m2883(__this, &m2883_MI);
		V_1 = L_2;
		t13  L_3 = m2883((&V_0), &m2883_MI);
		t13  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t13_TI), &L_4);
		bool L_6 = m3445((&V_1), L_5, &m3445_MI);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		t13  L_7 = m3505(__this, &m3505_MI);
		V_2 = L_7;
		t13  L_8 = m3505((&V_0), &m3505_MI);
		t13  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t13_TI), &L_9);
		bool L_11 = m3445((&V_2), L_10, &m3445_MI);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 0;
	}

IL_0050:
	{
		return G_B5_0;
	}
}
extern "C" t13  m2883 (t504 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2885 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m2873_MI;
extern "C" t13  m2873 (t504 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		t13  L_1 = m475(NULL, L_0, (2.0f), &m475_MI);
		return L_1;
	}
}
extern MethodInfo m2884_MI;
extern "C" void m2884 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.5f), &m475_MI);
		__this->f1 = L_1;
		return;
	}
}
extern "C" t13  m3505 (t504 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3506 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t13  m2874 (t504 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2883(__this, &m2883_MI);
		t13  L_1 = m3505(__this, &m3505_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		return L_2;
	}
}
extern MethodInfo m3507_MI;
extern "C" void m3507 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m2892(__this, &m2892_MI);
		m3509(__this, L_0, L_1, &m3509_MI);
		return;
	}
}
extern "C" t13  m2892 (t504 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2883(__this, &m2883_MI);
		t13  L_1 = m3505(__this, &m3505_MI);
		t13  L_2 = m476(NULL, L_0, L_1, &m476_MI);
		return L_2;
	}
}
extern MethodInfo m3508_MI;
extern "C" void m3508 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2874(__this, &m2874_MI);
		t13  L_1 = p0;
		m3509(__this, L_0, L_1, &m3509_MI);
		return;
	}
}
extern "C" void m3509 (t504 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p1;
		t13  L_1 = p0;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		t13  L_3 = m475(NULL, L_2, (0.5f), &m475_MI);
		m3506(__this, L_3, &m3506_MI);
		t13  L_4 = p0;
		t13  L_5 = m3505(__this, &m3505_MI);
		t13  L_6 = m476(NULL, L_4, L_5, &m476_MI);
		m2885(__this, L_6, &m2885_MI);
		return;
	}
}
extern "C" void m2891 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2874(__this, &m2874_MI);
		t13  L_1 = p0;
		t13  L_2 = m2889(NULL, L_0, L_1, &m2889_MI);
		t13  L_3 = m2892(__this, &m2892_MI);
		t13  L_4 = p0;
		t13  L_5 = m2890(NULL, L_3, L_4, &m2890_MI);
		m3509(__this, L_2, L_5, &m3509_MI);
		return;
	}
}
extern MethodInfo m3510_MI;
extern "C" void m3510 (t504 * __this, t504  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2883((&p0), &m2883_MI);
		t13  L_1 = m3505((&p0), &m3505_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		m2891(__this, L_2, &m2891_MI);
		t13  L_3 = m2883((&p0), &m2883_MI);
		t13  L_4 = m3505((&p0), &m3505_MI);
		t13  L_5 = m476(NULL, L_3, L_4, &m476_MI);
		m2891(__this, L_5, &m2891_MI);
		return;
	}
}
extern MethodInfo m3511_MI;
extern "C" void m3511 (t504 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		p0 = ((float)((float)L_0*(float)(0.5f)));
		t13  L_1 = m3505(__this, &m3505_MI);
		float L_2 = p0;
		float L_3 = p0;
		float L_4 = p0;
		t13  L_5 = {0};
		m357(&L_5, L_2, L_3, L_4, &m357_MI);
		t13  L_6 = m476(NULL, L_1, L_5, &m476_MI);
		m3506(__this, L_6, &m3506_MI);
		return;
	}
}
extern MethodInfo m3512_MI;
extern "C" void m3512 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3505(__this, &m3505_MI);
		t13  L_1 = p0;
		t13  L_2 = m475(NULL, L_1, (0.5f), &m475_MI);
		t13  L_3 = m476(NULL, L_0, L_2, &m476_MI);
		m3506(__this, L_3, &m3506_MI);
		return;
	}
}
extern MethodInfo m3513_MI;
extern "C" bool m3513 (t504 * __this, t504  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	t13  V_3 = {0};
	t13  V_4 = {0};
	t13  V_5 = {0};
	t13  V_6 = {0};
	t13  V_7 = {0};
	t13  V_8 = {0};
	t13  V_9 = {0};
	t13  V_10 = {0};
	t13  V_11 = {0};
	int32_t G_B7_0 = 0;
	{
		t13  L_0 = m2874(__this, &m2874_MI);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		t13  L_2 = m2892((&p0), &m2892_MI);
		V_1 = L_2;
		float L_3 = ((&V_1)->f1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_4 = m2892(__this, &m2892_MI);
		V_2 = L_4;
		float L_5 = ((&V_2)->f1);
		t13  L_6 = m2874((&p0), &m2874_MI);
		V_3 = L_6;
		float L_7 = ((&V_3)->f1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_8 = m2874(__this, &m2874_MI);
		V_4 = L_8;
		float L_9 = ((&V_4)->f2);
		t13  L_10 = m2892((&p0), &m2892_MI);
		V_5 = L_10;
		float L_11 = ((&V_5)->f2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_12 = m2892(__this, &m2892_MI);
		V_6 = L_12;
		float L_13 = ((&V_6)->f2);
		t13  L_14 = m2874((&p0), &m2874_MI);
		V_7 = L_14;
		float L_15 = ((&V_7)->f2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_16 = m2874(__this, &m2874_MI);
		V_8 = L_16;
		float L_17 = ((&V_8)->f3);
		t13  L_18 = m2892((&p0), &m2892_MI);
		V_9 = L_18;
		float L_19 = ((&V_9)->f3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_20 = m2892(__this, &m2892_MI);
		V_10 = L_20;
		float L_21 = ((&V_10)->f3);
		t13  L_22 = m2874((&p0), &m2874_MI);
		V_11 = L_22;
		float L_23 = ((&V_11)->f3);
		G_B7_0 = ((((int32_t)((!(((float)L_21) >= ((float)L_23)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B7_0 = 0;
	}

IL_00d7:
	{
		return G_B7_0;
	}
}
extern "C" bool m3514 (t9 * __this , t504  p0, t13  p1, MethodInfo* method)
{
	{
		bool L_0 = m3515(NULL, (&p0), (&p1), &m3515_MI);
		return L_0;
	}
}
extern "C" bool m3515 (t9 * __this , t504 * p0, t13 * p1, MethodInfo* method)
{
	typedef bool (*m3515_ftn) (t504 *, t13 *);
	static m3515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3516_MI;
extern "C" bool m3516 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		bool L_1 = m3514(NULL, (*(t504 *)__this), L_0, &m3514_MI);
		return L_1;
	}
}
extern "C" float m3517 (t9 * __this , t504  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = m3518(NULL, (&p0), (&p1), &m3518_MI);
		return L_0;
	}
}
extern "C" float m3518 (t9 * __this , t504 * p0, t13 * p1, MethodInfo* method)
{
	typedef float (*m3518_ftn) (t504 *, t13 *);
	static m3518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3519_MI;
extern "C" float m3519 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		float L_1 = m3517(NULL, (*(t504 *)__this), L_0, &m3517_MI);
		return L_1;
	}
}
extern "C" bool m3520 (t9 * __this , t74 * p0, t504 * p1, float* p2, MethodInfo* method)
{
	{
		t74 * L_0 = p0;
		t504 * L_1 = p1;
		float* L_2 = p2;
		bool L_3 = m3521(NULL, L_0, L_1, L_2, &m3521_MI);
		return L_3;
	}
}
extern "C" bool m3521 (t9 * __this , t74 * p0, t504 * p1, float* p2, MethodInfo* method)
{
	typedef bool (*m3521_ftn) (t74 *, t504 *, float*);
	static m3521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3522_MI;
extern "C" bool m3522 (t504 * __this, t74  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = m3520(NULL, (&p0), __this, (&V_0), &m3520_MI);
		return L_0;
	}
}
extern MethodInfo m3523_MI;
extern "C" bool m3523 (t504 * __this, t74  p0, float* p1, MethodInfo* method)
{
	{
		float* L_0 = p1;
		bool L_1 = m3520(NULL, (&p0), __this, L_0, &m3520_MI);
		return L_1;
	}
}
extern "C" t13  m3524 (t9 * __this , t504 * p0, t13 * p1, MethodInfo* method)
{
	{
		t504 * L_0 = p0;
		t13 * L_1 = p1;
		t13  L_2 = m3525(NULL, L_0, L_1, &m3525_MI);
		return L_2;
	}
}
extern "C" t13  m3525 (t9 * __this , t504 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3525_ftn) (t504 *, t13 *);
	static m3525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3526_MI;
extern "C" t13  m3526 (t504 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3524(NULL, __this, (&p0), &m3524_MI);
		return L_0;
	}
}
extern MethodInfo m3527_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3527 (t504 * __this, MethodInfo* method)
{
	static bool m3527_init;
	if (!m3527_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3527_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t13  L_1 = (__this->f0);
		t13  L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t13_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		t13  L_5 = (__this->f1);
		t13  L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t13_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3626(NULL, (t2*) &_stringLiteral221, L_4, &m3626_MI);
		return L_8;
	}
}
extern MethodInfo m3528_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3528 (t504 * __this, t2* p0, MethodInfo* method)
{
	static bool m3528_init;
	if (!m3528_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3528_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t13 * L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m3448(L_1, L_2, &m3448_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		t13 * L_5 = &(__this->f1);
		t2* L_6 = p0;
		t2* L_7 = m3448(L_5, L_6, &m3448_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3626(NULL, (t2*) &_stringLiteral221, L_4, &m3626_MI);
		return L_8;
	}
}
extern "C" bool m3529 (t9 * __this , t504  p0, t504  p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t13  L_0 = m2883((&p0), &m2883_MI);
		t13  L_1 = m2883((&p1), &m2883_MI);
		bool L_2 = m3453(NULL, L_0, L_1, &m3453_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t13  L_3 = m3505((&p0), &m3505_MI);
		t13  L_4 = m3505((&p1), &m3505_MI);
		bool L_5 = m3453(NULL, L_3, L_4, &m3453_MI);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2878_MI;
extern "C" bool m2878 (t9 * __this , t504  p0, t504  p1, MethodInfo* method)
{
	{
		t504  L_0 = p0;
		t504  L_1 = p1;
		bool L_2 = m3529(NULL, L_0, L_1, &m3529_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m471_MI;
extern MethodInfo m3534_MI;
extern MethodInfo m3533_MI;


extern "C" void m413 (t47 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		float L_1 = p1;
		__this->f2 = L_1;
		float L_2 = p2;
		__this->f3 = L_2;
		float L_3 = p3;
		__this->f4 = L_3;
		return;
	}
}
extern MethodInfo m474_MI;
extern "C" float m474 (t47 * __this, int32_t p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0024;
		}
		if (L_1 == 2)
		{
			goto IL_002b;
		}
		if (L_1 == 3)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_001d:
	{
		float L_2 = (__this->f1);
		return L_2;
	}

IL_0024:
	{
		float L_3 = (__this->f2);
		return L_3;
	}

IL_002b:
	{
		float L_4 = (__this->f3);
		return L_4;
	}

IL_0032:
	{
		float L_5 = (__this->f4);
		return L_5;
	}

IL_0039:
	{
		t890 * L_6 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_6, (t2*) &_stringLiteral222, &m4293_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m2738_MI;
extern "C" void m2738 (t47 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001d;
		}
		if (L_1 == 1)
		{
			goto IL_0029;
		}
		if (L_1 == 2)
		{
			goto IL_0035;
		}
		if (L_1 == 3)
		{
			goto IL_0041;
		}
	}
	{
		goto IL_004d;
	}

IL_001d:
	{
		float L_2 = p1;
		__this->f1 = L_2;
		goto IL_0058;
	}

IL_0029:
	{
		float L_3 = p1;
		__this->f2 = L_3;
		goto IL_0058;
	}

IL_0035:
	{
		float L_4 = p1;
		__this->f3 = L_4;
		goto IL_0058;
	}

IL_0041:
	{
		float L_5 = p1;
		__this->f4 = L_5;
		goto IL_0058;
	}

IL_004d:
	{
		t890 * L_6 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_6, (t2*) &_stringLiteral222, &m4293_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m3530 (t47 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4271(L_0, &m4271_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4271(L_2, &m4271_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4271(L_4, &m4271_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4271(L_6, &m4271_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern "C" bool m3531 (t47 * __this, t9 * p0, MethodInfo* method)
{
	t47  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t47_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t47 *)((t47 *)UnBox (L_1, InitializedTypeInfo(&t47_TI)))));
		float* L_2 = &(__this->f1);
		float L_3 = ((&V_0)->f1);
		bool L_4 = m4294(L_2, L_3, &m4294_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4294(L_5, L_6, &m4294_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4294(L_8, L_9, &m4294_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4294(L_11, L_12, &m4294_MI);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return G_B7_0;
	}
}
extern MethodInfo m3532_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3532 (t47 * __this, MethodInfo* method)
{
	static bool m3532_init;
	if (!m3532_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3532_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = (__this->f1);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = (__this->f2);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = (__this->f3);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = (__this->f4);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral216, L_12, &m3626_MI);
		return L_16;
	}
}
extern "C" float m471 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f4);
		float L_7 = ((&p1)->f4);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))+(float)((float)((float)L_6*(float)L_7))));
	}
}
extern "C" float m3533 (t9 * __this , t47  p0, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p0;
		float L_2 = m471(NULL, L_0, L_1, &m471_MI);
		return L_2;
	}
}
extern MethodInfo m2713_MI;
extern "C" float m2713 (t47 * __this, MethodInfo* method)
{
	{
		float L_0 = m471(NULL, (*(t47 *)__this), (*(t47 *)__this), &m471_MI);
		return L_0;
	}
}
extern MethodInfo m2719_MI;
extern "C" t47  m2719 (t9 * __this , MethodInfo* method)
{
	{
		t47  L_0 = {0};
		m413(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m413_MI);
		return L_0;
	}
}
extern "C" t47  m3534 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		float L_4 = ((&p0)->f3);
		float L_5 = ((&p1)->f3);
		float L_6 = ((&p0)->f4);
		float L_7 = ((&p1)->f4);
		t47  L_8 = {0};
		m413(&L_8, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), ((float)((float)L_6-(float)L_7)), &m413_MI);
		return L_8;
	}
}
extern MethodInfo m411_MI;
extern "C" t47  m411 (t9 * __this , t47  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		float L_6 = ((&p0)->f4);
		float L_7 = p1;
		t47  L_8 = {0};
		m413(&L_8, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), ((float)((float)L_6*(float)L_7)), &m413_MI);
		return L_8;
	}
}
extern MethodInfo m2732_MI;
extern "C" t47  m2732 (t9 * __this , t47  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = p1;
		float L_2 = ((&p0)->f2);
		float L_3 = p1;
		float L_4 = ((&p0)->f3);
		float L_5 = p1;
		float L_6 = ((&p0)->f4);
		float L_7 = p1;
		t47  L_8 = {0};
		m413(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), &m413_MI);
		return L_8;
	}
}
extern "C" bool m3535 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p1;
		t47  L_2 = m3534(NULL, L_0, L_1, &m3534_MI);
		float L_3 = m3533(NULL, L_2, &m3533_MI);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern MethodInfo m481_MI;
extern "C" t47  m481 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		float L_2 = ((&p0)->f3);
		t47  L_3 = {0};
		m413(&L_3, L_0, L_1, L_2, (0.0f), &m413_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t74_TI;
#include "t74MD.h"



extern MethodInfo m581_MI;
extern "C" void m581 (t74 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		t13  L_1 = m386((&p1), &m386_MI);
		__this->f1 = L_1;
		return;
	}
}
extern MethodInfo m563_MI;
extern "C" t13  m563 (t74 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m564_MI;
extern "C" t13  m564 (t74 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m558_MI;
extern "C" t13  m558 (t74 * __this, float p0, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		t13  L_1 = (__this->f1);
		float L_2 = p0;
		t13  L_3 = m475(NULL, L_1, L_2, &m475_MI);
		t13  L_4 = m476(NULL, L_0, L_3, &m476_MI);
		return L_4;
	}
}
extern MethodInfo m3536_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3536 (t74 * __this, MethodInfo* method)
{
	static bool m3536_init;
	if (!m3536_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3536_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t13  L_1 = (__this->f0);
		t13  L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t13_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		t13  L_5 = (__this->f1);
		t13  L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t13_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3626(NULL, (t2*) &_stringLiteral223, L_4, &m3626_MI);
		return L_8;
	}
}
#include "t599.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t599_TI;
#include "t599MD.h"

extern MethodInfo m3537_MI;
extern MethodInfo m3538_MI;
extern MethodInfo m2567_MI;


extern MethodInfo m2782_MI;
extern "C" void m2782 (t599 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m3446(NULL, L_0, &m3446_MI);
		__this->f0 = L_1;
		t13  L_2 = p0;
		t13  L_3 = p1;
		float L_4 = m458(NULL, L_2, L_3, &m458_MI);
		__this->f1 = ((-L_4));
		return;
	}
}
extern "C" t13  m3537 (t599 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m3538 (t599 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2783_MI;
extern "C" bool m2783 (t599 * __this, t74  p0, float* p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t13  L_0 = m564((&p0), &m564_MI);
		t13  L_1 = m3537(__this, &m3537_MI);
		float L_2 = m458(NULL, L_0, L_1, &m458_MI);
		V_0 = L_2;
		t13  L_3 = m563((&p0), &m563_MI);
		t13  L_4 = m3537(__this, &m3537_MI);
		float L_5 = m458(NULL, L_3, L_4, &m458_MI);
		float L_6 = m3538(__this, &m3538_MI);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		bool L_8 = m2567(NULL, L_7, (0.0f), &m2567_MI);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		float* L_9 = p1;
		*((float*)(L_9)) = (float)(0.0f);
		return 0;
	}

IL_0047:
	{
		float* L_10 = p1;
		float L_11 = V_1;
		float L_12 = V_0;
		*((float*)(L_10)) = (float)((float)((float)L_11/(float)L_12));
		float* L_13 = p1;
		return ((((float)(*((float*)L_13))) > ((float)(0.0f)))? 1 : 0);
	}
}
#include "t728.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t728_TI;
#include "t728MD.h"



extern MethodInfo m3539_MI;
extern "C" void m3539 (t9 * __this , MethodInfo* method)
{
	{
		((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f0 = (1.17549435E-38f);
		((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f1 = (1.401298E-45f);
		float L_0 = ((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f1;
		((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
#include "t129.h"
#ifndef _MSC_VER
#else
#endif

#include "t156.h"
#include "t160MD.h"
extern MethodInfo m4296_MI;
extern MethodInfo m4297_MI;
extern MethodInfo m4298_MI;
extern MethodInfo m4299_MI;
extern MethodInfo m4300_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m4302_MI;
extern MethodInfo m4303_MI;
extern MethodInfo m4304_MI;
extern MethodInfo m4305_MI;
extern MethodInfo m412_MI;
extern MethodInfo m583_MI;
extern MethodInfo m2881_MI;
extern MethodInfo m2876_MI;
extern MethodInfo m2825_MI;


extern MethodInfo m3540_MI;
extern "C" void m3540 (t9 * __this , MethodInfo* method)
{
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t728_TI));
		bool L_0 = ((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t728_TI));
		float L_1 = ((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f0;
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t728_TI));
		float L_2 = ((t728_SFs*)InitializedTypeInfo(&t728_TI)->static_fields)->f1;
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((t129_SFs*)InitializedTypeInfo(&t129_TI)->static_fields)->f0 = G_B3_0;
		return;
	}
}
extern MethodInfo m2740_MI;
extern "C" float m2740 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2739_MI;
extern "C" float m2739 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = cos((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m383_MI;
extern "C" float m383 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = atan2((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
extern "C" float m2969 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sqrt((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m583 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = fabsf(L_0);
		return (((float)L_1));
	}
}
extern "C" float m2962 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m2801 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" float m608 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		float L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		float L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern "C" int32_t m2799 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = p0;
		G_B3_0 = L_2;
		goto IL_000e;
	}

IL_000d:
	{
		int32_t L_3 = p1;
		G_B3_0 = L_3;
	}

IL_000e:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2877_MI;
extern "C" float m2877 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
extern MethodInfo m2961_MI;
extern "C" float m2961 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = m4302(NULL, (((double)L_0)), (((double)L_1)), &m4302_MI);
		return (((float)L_2));
	}
}
extern "C" float m2825 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2862 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2968_MI;
extern "C" int32_t m2968 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = ceil((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern MethodInfo m439_MI;
extern "C" int32_t m439 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern MethodInfo m2721_MI;
extern "C" int32_t m2721 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" float m2881 (t9 * __this , float p0, MethodInfo* method)
{
	float G_B3_0 = 0.0f;
	{
		float L_0 = p0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (-1.0f);
	}

IL_001a:
	{
		return G_B3_0;
	}
}
extern "C" float m620 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		float L_2 = p1;
		p0 = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		float L_3 = p0;
		float L_4 = p2;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		float L_5 = p2;
		p0 = L_5;
	}

IL_0019:
	{
		float L_6 = p0;
		return L_6;
	}
}
extern MethodInfo m356_MI;
extern "C" int32_t m356 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_2 = p1;
		p0 = L_2;
		goto IL_0019;
	}

IL_000f:
	{
		int32_t L_3 = p0;
		int32_t L_4 = p2;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_5 = p2;
		p0 = L_5;
	}

IL_0019:
	{
		int32_t L_6 = p0;
		return L_6;
	}
}
extern "C" float m2710 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (0.0f);
	}

IL_0011:
	{
		float L_1 = p0;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		return (1.0f);
	}

IL_0022:
	{
		float L_2 = p0;
		return L_2;
	}
}
extern "C" float m585 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		float L_2 = p0;
		float L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_4 = m2710(NULL, L_3, &m2710_MI);
		return ((float)((float)L_0+(float)((float)((float)((float)((float)L_1-(float)L_2))*(float)L_4))));
	}
}
extern MethodInfo m625_MI;
extern "C" float m625 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = p1;
		float L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = m412(NULL, ((float)((float)L_0-(float)L_1)), (360.0f), &m412_MI);
		V_0 = L_2;
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(180.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		float L_4 = V_0;
		V_0 = ((float)((float)L_4-(float)(360.0f)));
	}

IL_0021:
	{
		float L_5 = p0;
		float L_6 = V_0;
		float L_7 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_8 = m2710(NULL, L_7, &m2710_MI);
		return ((float)((float)L_5+(float)((float)((float)L_6*(float)L_8))));
	}
}
extern MethodInfo m335_MI;
extern "C" float m335 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		float L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = p2;
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		float L_4 = p1;
		return L_4;
	}

IL_0010:
	{
		float L_5 = p0;
		float L_6 = p1;
		float L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_8 = m2881(NULL, ((float)((float)L_6-(float)L_7)), &m2881_MI);
		float L_9 = p2;
		return ((float)((float)L_5+(float)((float)((float)L_8*(float)L_9))));
	}
}
extern "C" bool m2567 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p1;
		float L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = p0;
		float L_4 = fabsf(L_3);
		float L_5 = p1;
		float L_6 = fabsf(L_5);
		float L_7 = m608(NULL, L_4, L_6, &m608_MI);
		float L_8 = ((t129_SFs*)InitializedTypeInfo(&t129_TI)->static_fields)->f0;
		float L_9 = m608(NULL, ((float)((float)(1.0E-06f)*(float)L_7)), ((float)((float)L_8*(float)(8.0f))), &m608_MI);
		return ((((float)L_2) < ((float)L_9))? 1 : 0);
	}
}
extern MethodInfo m584_MI;
extern "C" float m584 (t9 * __this , float p0, float p1, float* p2, float p3, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = m334(NULL, &m334_MI);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = p0;
		float L_2 = p1;
		float* L_3 = p2;
		float L_4 = p3;
		float L_5 = V_1;
		float L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_7 = m2876(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m2876_MI);
		return L_7;
	}
}
extern "C" float m2876 (t9 * __this , float p0, float p1, float* p2, float p3, float p4, float p5, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		float L_0 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m608(NULL, (0.0001f), L_0, &m608_MI);
		p3 = L_1;
		float L_2 = p3;
		V_0 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_0;
		float L_4 = p5;
		V_1 = ((float)((float)L_3*(float)L_4));
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7 = V_1;
		float L_8 = V_1;
		float L_9 = V_1;
		float L_10 = V_1;
		V_2 = ((float)((float)(1.0f)/(float)((float)((float)((float)((float)((float)((float)(1.0f)+(float)L_5))+(float)((float)((float)((float)((float)(0.48f)*(float)L_6))*(float)L_7))))+(float)((float)((float)((float)((float)((float)((float)(0.235f)*(float)L_8))*(float)L_9))*(float)L_10))))));
		float L_11 = p0;
		float L_12 = p1;
		V_3 = ((float)((float)L_11-(float)L_12));
		float L_13 = p1;
		V_4 = L_13;
		float L_14 = p4;
		float L_15 = p3;
		V_5 = ((float)((float)L_14*(float)L_15));
		float L_16 = V_3;
		float L_17 = V_5;
		float L_18 = V_5;
		float L_19 = m620(NULL, L_16, ((-L_17)), L_18, &m620_MI);
		V_3 = L_19;
		float L_20 = p0;
		float L_21 = V_3;
		p1 = ((float)((float)L_20-(float)L_21));
		float* L_22 = p2;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = p5;
		V_6 = ((float)((float)((float)((float)(*((float*)L_22))+(float)((float)((float)L_23*(float)L_24))))*(float)L_25));
		float* L_26 = p2;
		float* L_27 = p2;
		float L_28 = V_0;
		float L_29 = V_6;
		float L_30 = V_2;
		*((float*)(L_26)) = (float)((float)((float)((float)((float)(*((float*)L_27))-(float)((float)((float)L_28*(float)L_29))))*(float)L_30));
		float L_31 = p1;
		float L_32 = V_3;
		float L_33 = V_6;
		float L_34 = V_2;
		V_7 = ((float)((float)L_31+(float)((float)((float)((float)((float)L_32+(float)L_33))*(float)L_34))));
		float L_35 = V_4;
		float L_36 = p0;
		float L_37 = V_7;
		float L_38 = V_4;
		if ((!(((uint32_t)((((float)((float)((float)L_35-(float)L_36))) > ((float)(0.0f)))? 1 : 0)) == ((uint32_t)((((float)L_37) > ((float)L_38))? 1 : 0)))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_39 = V_4;
		V_7 = L_39;
		float* L_40 = p2;
		float L_41 = V_7;
		float L_42 = V_4;
		float L_43 = p5;
		*((float*)(L_40)) = (float)((float)((float)((float)((float)L_41-(float)L_42))/(float)L_43));
	}

IL_00a0:
	{
		float L_44 = V_7;
		return L_44;
	}
}
extern "C" float m412 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_3 = floorf(((float)((float)L_1/(float)L_2)));
		float L_4 = p1;
		return ((float)((float)L_0-(float)((float)((float)L_3*(float)L_4))));
	}
}
extern MethodInfo m384_MI;
extern "C" float m384 (t9 * __this , float p0, float p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_002f;
		}
	}
	{
		float L_2 = p2;
		float L_3 = p0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		return (0.0f);
	}

IL_0014:
	{
		float L_4 = p2;
		float L_5 = p1;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0021;
		}
	}
	{
		return (1.0f);
	}

IL_0021:
	{
		float L_6 = p2;
		float L_7 = p0;
		p2 = ((float)((float)L_6-(float)L_7));
		float L_8 = p2;
		float L_9 = p1;
		float L_10 = p0;
		p2 = ((float)((float)L_8/(float)((float)((float)L_9-(float)L_10))));
		float L_11 = p2;
		return L_11;
	}

IL_002f:
	{
		float L_12 = p0;
		float L_13 = p1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_005e;
		}
	}
	{
		float L_14 = p2;
		float L_15 = p1;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		return (1.0f);
	}

IL_0043:
	{
		float L_16 = p2;
		float L_17 = p0;
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0050;
		}
	}
	{
		return (0.0f);
	}

IL_0050:
	{
		float L_18 = p2;
		float L_19 = p1;
		float L_20 = p0;
		float L_21 = p1;
		return ((float)((float)(1.0f)-(float)((float)((float)((float)((float)L_18-(float)L_19))/(float)((float)((float)L_20-(float)L_21))))));
	}

IL_005e:
	{
		return (0.0f);
	}
}
#include "t609.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t609_TI;
#include "t609MD.h"



#include "t499.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t499_TI;
#include "t499MD.h"

#include "t441.h"


extern MethodInfo m2864_MI;
extern "C" void m2864 (t499 * __this, t57 * p0, t441 * p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2863_MI;
extern "C" void m2863 (t499 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#include "t615.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t615_TI;
#include "t615MD.h"



#include "t614.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t614_TI;
#include "t614MD.h"



#include "t618.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t618_TI;
#include "t618MD.h"



extern MethodInfo m2995_MI;
extern "C" void m2995 (t618 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3541_MI;
extern "C" void m3541 (t618 * __this, t441 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3541((t618 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t441 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t441 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t618(Il2CppObject* delegate, t441 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t441 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
extern MethodInfo m3542_MI;
extern "C" t9 * m3542 (t618 * __this, t441 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3543_MI;
extern "C" void m3543 (t618 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t441_TI;
#include "t441MD.h"

#include "t297.h"
#include "t45.h"
#include "t297MD.h"
#include "t133MD.h"
#include "t45MD.h"
extern MethodInfo m3545_MI;
extern MethodInfo m3546_MI;
extern MethodInfo m3547_MI;
extern MethodInfo m3548_MI;
extern MethodInfo m3549_MI;
extern MethodInfo m3550_MI;
extern MethodInfo m3551_MI;
extern MethodInfo m3552_MI;
extern MethodInfo m3553_MI;
extern MethodInfo m3554_MI;
extern MethodInfo m3555_MI;
extern MethodInfo m1106_MI;
extern MethodInfo m1107_MI;
extern MethodInfo m2653_MI;
extern MethodInfo m3557_MI;
extern MethodInfo m350_MI;
extern MethodInfo m2905_MI;
extern MethodInfo m2727_MI;
extern MethodInfo m2821_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2728_MI;
extern MethodInfo m2819_MI;
extern MethodInfo m2729_MI;
extern MethodInfo m2818_MI;
extern MethodInfo m2723_MI;
extern MethodInfo m2822_MI;
extern MethodInfo m3558_MI;
extern MethodInfo m530_MI;


extern MethodInfo m2996_MI;
extern "C" void m2996 (t9 * __this , t618 * p0, MethodInfo* method)
{
	{
		t618 * L_0 = ((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2;
		t618 * L_1 = p0;
		t297 * L_2 = m1106(NULL, L_0, L_1, &m1106_MI);
		((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2 = ((t618 *)Castclass(L_2, InitializedTypeInfo(&t618_TI)));
		return;
	}
}
extern MethodInfo m3544_MI;
extern "C" void m3544 (t9 * __this , t618 * p0, MethodInfo* method)
{
	{
		t618 * L_0 = ((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2;
		t618 * L_1 = p0;
		t297 * L_2 = m1107(NULL, L_0, L_1, &m1107_MI);
		((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2 = ((t618 *)Castclass(L_2, InitializedTypeInfo(&t618_TI)));
		return;
	}
}
extern "C" void m3545 (t441 * __this, t448 * p0, MethodInfo* method)
{
	typedef void (*m3545_ftn) (t441 *, t448 *);
	static m3545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t448  m2653 (t441 * __this, MethodInfo* method)
{
	t448  V_0 = {0};
	{
		m3545(__this, (&V_0), &m3545_MI);
		t448  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3546 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3546_ftn) (t441 *, t28 *);
	static m3546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3547 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3547_ftn) (t441 *, t28 *);
	static m3547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2727 (t441 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3546(__this, (&V_0), &m3546_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2821 (t441 * __this, t28  p0, MethodInfo* method)
{
	{
		m3547(__this, (&p0), &m3547_MI);
		return;
	}
}
extern "C" void m3548 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3548_ftn) (t441 *, t28 *);
	static m3548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3549 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3549_ftn) (t441 *, t28 *);
	static m3549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2817 (t441 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3548(__this, (&V_0), &m3548_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2728 (t441 * __this, t28  p0, MethodInfo* method)
{
	{
		m3549(__this, (&p0), &m3549_MI);
		return;
	}
}
extern "C" void m3550 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3550_ftn) (t441 *, t28 *);
	static m3550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3551 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3551_ftn) (t441 *, t28 *);
	static m3551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2818 (t441 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3550(__this, (&V_0), &m3550_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2822 (t441 * __this, t28  p0, MethodInfo* method)
{
	{
		m3551(__this, (&p0), &m3551_MI);
		return;
	}
}
extern "C" void m3552 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3552_ftn) (t441 *, t28 *);
	static m3552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3553 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3553_ftn) (t441 *, t28 *);
	static m3553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2819 (t441 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3552(__this, (&V_0), &m3552_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2729 (t441 * __this, t28  p0, MethodInfo* method)
{
	{
		m3553(__this, (&p0), &m3553_MI);
		return;
	}
}
extern "C" void m3554 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3554_ftn) (t441 *, t28 *);
	static m3554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3555 (t441 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3555_ftn) (t441 *, t28 *);
	static m3555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2723 (t441 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3554(__this, (&V_0), &m3554_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2823_MI;
extern "C" void m2823 (t441 * __this, t28  p0, MethodInfo* method)
{
	{
		m3555(__this, (&p0), &m3555_MI);
		return;
	}
}
extern MethodInfo m3556_MI;
extern "C" void m3556 (t9 * __this , t441 * p0, MethodInfo* method)
{
	{
		t618 * L_0 = ((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t618 * L_1 = ((t441_SFs*)InitializedTypeInfo(&t441_TI)->static_fields)->f2;
		t441 * L_2 = p0;
		VirtActionInvoker1< t441 * >::Invoke(&m3541_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m3557 (t441 * __this, t37* p0, MethodInfo* method)
{
	t448  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		t37* L_0 = p0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t37* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		m400(NULL, (t2*) &_stringLiteral224, &m400_MI);
		return;
	}

IL_001a:
	{
		t448  L_2 = m2653(__this, &m2653_MI);
		V_0 = L_2;
		float L_3 = m2659((&V_0), &m2659_MI);
		V_1 = L_3;
		float L_4 = m2660((&V_0), &m2660_MI);
		V_2 = L_4;
		float L_5 = m2743((&V_0), &m2743_MI);
		V_3 = L_5;
		float L_6 = m2745((&V_0), &m2745_MI);
		V_4 = L_6;
		t37* L_7 = p0;
		float L_8 = V_1;
		float L_9 = V_2;
		t13  L_10 = {0};
		m357(&L_10, L_8, L_9, (0.0f), &m357_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_7, 0)) = L_10;
		t37* L_11 = p0;
		float L_12 = V_1;
		float L_13 = V_4;
		t13  L_14 = {0};
		m357(&L_14, L_12, L_13, (0.0f), &m357_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_11, 1)) = L_14;
		t37* L_15 = p0;
		float L_16 = V_3;
		float L_17 = V_4;
		t13  L_18 = {0};
		m357(&L_18, L_16, L_17, (0.0f), &m357_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_15, 2)) = L_18;
		t37* L_19 = p0;
		float L_20 = V_3;
		float L_21 = V_2;
		t13  L_22 = {0};
		m357(&L_22, L_20, L_21, (0.0f), &m357_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_19, 3)) = L_22;
		return;
	}
}
extern MethodInfo m2887_MI;
extern "C" void m2887 (t441 * __this, t37* p0, MethodInfo* method)
{
	t45 * V_0 = {0};
	int32_t V_1 = 0;
	{
		t37* L_0 = p0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		t37* L_1 = p0;
		if ((((int32_t)(((int32_t)(((t121 *)L_1)->max_length)))) >= ((int32_t)4)))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		m400(NULL, (t2*) &_stringLiteral225, &m400_MI);
		return;
	}

IL_001a:
	{
		t37* L_2 = p0;
		m3557(__this, L_2, &m3557_MI);
		t45 * L_3 = m350(__this, &m350_MI);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0051;
	}

IL_002f:
	{
		t37* L_4 = p0;
		int32_t L_5 = V_1;
		t45 * L_6 = V_0;
		t37* L_7 = p0;
		int32_t L_8 = V_1;
		t13  L_9 = m2905(L_6, (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_7, L_8))), &m2905_MI);
		*((t13 *)(t13 *)SZArrayLdElema(L_4, L_5)) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
extern MethodInfo m2991_MI;
extern "C" void m2991 (t441 * __this, int32_t p0, float p1, float p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	t28  V_3 = {0};
	t28  V_4 = {0};
	t28  V_5 = {0};
	t28  V_6 = {0};
	t28  V_7 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	t28 * G_B12_1 = {0};
	int32_t G_B11_0 = 0;
	t28 * G_B11_1 = {0};
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	t28 * G_B13_2 = {0};
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = p0;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}

IL_000e:
	{
		G_B4_0 = 1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 0;
	}

IL_0015:
	{
		V_0 = G_B4_0;
		int32_t L_2 = p0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = p0;
		G_B7_0 = ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B7_0 = 1;
	}

IL_0024:
	{
		V_1 = G_B7_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B10_0 = 1;
		goto IL_0032;
	}

IL_0031:
	{
		G_B10_0 = 0;
	}

IL_0032:
	{
		V_2 = (((float)G_B10_0));
		t28  L_5 = m2727(__this, &m2727_MI);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		m2748((&V_3), L_6, L_7, &m2748_MI);
		t28  L_8 = V_3;
		m2821(__this, L_8, &m2821_MI);
		t28  L_9 = m2817(__this, &m2817_MI);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		m2748((&V_3), L_10, L_11, &m2748_MI);
		t28  L_12 = V_3;
		m2728(__this, L_12, &m2728_MI);
		t28  L_13 = m2819(__this, &m2819_MI);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = p2;
		m2748((&V_4), L_14, L_15, &m2748_MI);
		t28  L_16 = V_4;
		m2729(__this, L_16, &m2729_MI);
		t28  L_17 = m2818(__this, &m2818_MI);
		V_5 = L_17;
		int32_t L_18 = V_0;
		bool L_19 = V_1;
		G_B11_0 = L_18;
		G_B11_1 = (&V_5);
		if (!L_19)
		{
			G_B12_0 = L_18;
			G_B12_1 = (&V_5);
			goto IL_00ac;
		}
	}
	{
		float L_20 = p1;
		float L_21 = p2;
		t28  L_22 = m2723(__this, &m2723_MI);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = m2737((&V_6), L_23, &m2737_MI);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = p1;
		float L_26 = p2;
		t28  L_27 = m2723(__this, &m2723_MI);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = m2737((&V_7), L_28, &m2737_MI);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		m2748(G_B13_2, G_B13_1, G_B13_0, &m2748_MI);
		t28  L_30 = V_5;
		m2822(__this, L_30, &m2822_MI);
		return;
	}
}
extern MethodInfo m2958_MI;
extern "C" void m2958 (t441 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		t28  L_1 = m2819(__this, &m2819_MI);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = p1;
		t28  L_4 = m3558(__this, &m3558_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = m2737((&V_2), L_5, &m2737_MI);
		t28  L_7 = m2817(__this, &m2817_MI);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = m2737((&V_3), L_8, &m2737_MI);
		t28  L_10 = m2727(__this, &m2727_MI);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = m2737((&V_4), L_11, &m2737_MI);
		m2748((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), &m2748_MI);
		t28  L_13 = V_1;
		m2729(__this, L_13, &m2729_MI);
		return;
	}
}
extern "C" t28  m3558 (t441 * __this, MethodInfo* method)
{
	t441 * V_0 = {0};
	t448  V_1 = {0};
	{
		t45 * L_0 = m530(__this, &m530_MI);
		V_0 = ((t441 *)IsInst(L_0, InitializedTypeInfo(&t441_TI)));
		t441 * L_1 = V_0;
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		t28  L_3 = m1242(NULL, &m1242_MI);
		return L_3;
	}

IL_001d:
	{
		t441 * L_4 = V_0;
		t448  L_5 = m2653(L_4, &m2653_MI);
		V_1 = L_5;
		t28  L_6 = m2718((&V_1), &m2718_MI);
		return L_6;
	}
}
#include "t729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t729_TI;
#include "t729MD.h"

#include "t730MD.h"
extern MethodInfo m3561_MI;


extern MethodInfo m3559_MI;
extern "C" void m3559 (t729 * __this, MethodInfo* method)
{
	{
		m3627(__this, &m3627_MI);
		return;
	}
}
extern MethodInfo m3560_MI;
extern "C" t57 * m3560 (t729 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		t126 * L_1 = (__this->f2);
		t57 * L_2 = m3561(NULL, L_0, L_1, &m3561_MI);
		return L_2;
	}
}
#include "t730.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t730_TI;



extern "C" t57 * m3561 (t9 * __this , t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3561_ftn) (t2*, t126 *);
	static m3561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t731.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t731_TI;
#include "t731MD.h"

#include "t732MD.h"
extern MethodInfo m4306_MI;


extern MethodInfo m3562_MI;
extern "C" void m3562 (t731 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t193.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t193_TI;
#include "t193MD.h"



extern MethodInfo m677_MI;
extern "C" void m677 (t193 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t62_TI;
#include "t62MD.h"



extern MethodInfo m417_MI;
extern "C" void m417 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef void (*m417_ftn) (t2*);
	static m417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::EnableKeyword(System.String)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m418_MI;
extern "C" void m418 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef void (*m418_ftn) (t2*);
	static m418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::DisableKeyword(System.String)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m526_MI;
extern "C" void m526 (t62 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m526_ftn) (t62 *, int32_t);
	static m526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::set_maximumLOD(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3563_MI;
extern "C" int32_t m3563 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3563_ftn) (t2*);
	static m3563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;
#include "t40MD.h"

extern MethodInfo m3570_MI;
extern MethodInfo m3577_MI;
extern MethodInfo m3565_MI;
extern MethodInfo m3566_MI;
extern MethodInfo m3568_MI;
extern MethodInfo m3564_MI;
extern MethodInfo m3567_MI;
extern MethodInfo m3569_MI;
extern MethodInfo m3571_MI;
extern MethodInfo m3573_MI;
extern MethodInfo m3574_MI;
extern MethodInfo m3572_MI;
extern MethodInfo m3575_MI;
extern MethodInfo m3576_MI;


extern MethodInfo m2927_MI;
extern "C" void m2927 (t40 * __this, t40 * p0, MethodInfo* method)
{
	{
		m3705(__this, &m3705_MI);
		t40 * L_0 = p0;
		m3577(NULL, __this, L_0, &m3577_MI);
		return;
	}
}
extern MethodInfo m525_MI;
extern "C" t62 * m525 (t40 * __this, MethodInfo* method)
{
	typedef t62 * (*m525_ftn) (t40 *);
	static m525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::get_shader()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2934_MI;
extern "C" t148 * m2934 (t40 * __this, MethodInfo* method)
{
	{
		t148 * L_0 = m3570(__this, (t2*) &_stringLiteral226, &m3570_MI);
		return L_0;
	}
}
extern "C" void m3564 (t40 * __this, t2* p0, t43  p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		t43  L_2 = p1;
		m3565(__this, L_1, L_2, &m3565_MI);
		return;
	}
}
extern "C" void m3565 (t40 * __this, int32_t p0, t43  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3566(NULL, __this, L_0, (&p1), &m3566_MI);
		return;
	}
}
extern "C" void m3566 (t9 * __this , t40 * p0, int32_t p1, t43 * p2, MethodInfo* method)
{
	typedef void (*m3566_ftn) (t40 *, int32_t, t43 *);
	static m3566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t43  m3567 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		t43  L_2 = m3568(__this, L_1, &m3568_MI);
		return L_2;
	}
}
extern "C" t43  m3568 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t43  (*m3568_ftn) (t40 *, int32_t);
	static m3568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m414_MI;
extern "C" void m414 (t40 * __this, t2* p0, t47  p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p1)->f2);
		float L_3 = ((&p1)->f3);
		float L_4 = ((&p1)->f4);
		t43  L_5 = {0};
		m638(&L_5, L_1, L_2, L_3, L_4, &m638_MI);
		m3564(__this, L_0, L_5, &m3564_MI);
		return;
	}
}
extern MethodInfo m408_MI;
extern "C" t47  m408 (t40 * __this, t2* p0, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t2* L_0 = p0;
		t43  L_1 = m3567(__this, L_0, &m3567_MI);
		V_0 = L_1;
		float L_2 = ((&V_0)->f0);
		float L_3 = ((&V_0)->f1);
		float L_4 = ((&V_0)->f2);
		float L_5 = ((&V_0)->f3);
		t47  L_6 = {0};
		m413(&L_6, L_2, L_3, L_4, L_5, &m413_MI);
		return L_6;
	}
}
extern MethodInfo m449_MI;
extern "C" void m449 (t40 * __this, t2* p0, t148 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		t148 * L_2 = p1;
		m3569(__this, L_1, L_2, &m3569_MI);
		return;
	}
}
extern "C" void m3569 (t40 * __this, int32_t p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m3569_ftn) (t40 *, int32_t, t148 *);
	static m3569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t148 * m3570 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		t148 * L_2 = m3571(__this, L_1, &m3571_MI);
		return L_2;
	}
}
extern "C" t148 * m3571 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t148 * (*m3571_ftn) (t40 *, int32_t);
	static m3571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3572 (t40 * __this, t2* p0, float p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		float L_2 = p1;
		m3573(__this, L_1, L_2, &m3573_MI);
		return;
	}
}
extern "C" void m3573 (t40 * __this, int32_t p0, float p1, MethodInfo* method)
{
	typedef void (*m3573_ftn) (t40 *, int32_t, float);
	static m3573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m409_MI;
extern "C" float m409 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		float L_2 = m3574(__this, L_1, &m3574_MI);
		return L_2;
	}
}
extern "C" float m3574 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef float (*m3574_ftn) (t40 *, int32_t);
	static m3574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetFloat(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2928_MI;
extern "C" void m2928 (t40 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3572(__this, L_0, (((float)L_1)), &m3572_MI);
		return;
	}
}
extern MethodInfo m450_MI;
extern "C" bool m450 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3563(NULL, L_0, &m3563_MI);
		bool L_2 = m3575(__this, L_1, &m3575_MI);
		return L_2;
	}
}
extern "C" bool m3575 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3575_ftn) (t40 *, int32_t);
	static m3575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t2* m3576 (t40 * __this, t2* p0, bool p1, t2* p2, MethodInfo* method)
{
	typedef t2* (*m3576_ftn) (t40 *, t2*, bool, t2*);
	static m3576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)");
	return _il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m518_MI;
extern "C" t2* m518 (t40 * __this, t2* p0, bool p1, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t2* L_1 = p0;
		bool L_2 = p1;
		t2* L_3 = V_0;
		t2* L_4 = m3576(__this, L_1, L_2, L_3, &m3576_MI);
		return L_4;
	}
}
extern "C" void m3577 (t9 * __this , t40 * p0, t40 * p1, MethodInfo* method)
{
	typedef void (*m3577_ftn) (t40 *, t40 *);
	static m3577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(p0, p1);
}
#include "t733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t733_TI;
#include "t733MD.h"

extern MethodInfo m3579_MI;
extern MethodInfo m3580_MI;
extern MethodInfo m3582_MI;
extern MethodInfo m3583_MI;
extern MethodInfo m3585_MI;
extern MethodInfo m3586_MI;
extern MethodInfo m3594_MI;


extern MethodInfo m3578_MI;
extern "C" void m3578 (t733 * __this, MethodInfo* method)
{
	{
		m3579(NULL, __this, &m3579_MI);
		return;
	}
}
extern "C" void m3579 (t9 * __this , t733 * p0, MethodInfo* method)
{
	{
		t733 * L_0 = p0;
		m3580(NULL, L_0, &m3580_MI);
		return;
	}
}
extern "C" void m3580 (t9 * __this , t733 * p0, MethodInfo* method)
{
	typedef void (*m3580_ftn) (t733 *);
	static m3580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3581_MI;
extern "C" void m3581 (t733 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		m3582(NULL, L_0, __this, &m3582_MI);
		return;
	}
}
extern "C" void m3582 (t9 * __this , t43  p0, t733 * p1, MethodInfo* method)
{
	{
		t733 * L_0 = p1;
		m3583(NULL, (&p0), L_0, &m3583_MI);
		return;
	}
}
extern "C" void m3583 (t9 * __this , t43 * p0, t733 * p1, MethodInfo* method)
{
	typedef void (*m3583_ftn) (t43 *, t733 *);
	static m3583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3584_MI;
extern "C" void m3584 (t733 * __this, t13  p0, t43  p1, float p2, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t43  L_0 = p1;
		float L_1 = p2;
		t43  L_2 = m2903(NULL, L_0, ((float)((float)(2.0f)*(float)L_1)), &m2903_MI);
		V_0 = L_2;
		t13  L_3 = p0;
		t43  L_4 = V_0;
		m3585(NULL, L_3, L_4, __this, &m3585_MI);
		return;
	}
}
extern "C" void m3585 (t9 * __this , t13  p0, t43  p1, t733 * p2, MethodInfo* method)
{
	{
		t733 * L_0 = p2;
		m3586(NULL, (&p0), (&p1), L_0, &m3586_MI);
		return;
	}
}
extern "C" void m3586 (t9 * __this , t13 * p0, t43 * p1, t733 * p2, MethodInfo* method)
{
	typedef void (*m3586_ftn) (t13 *, t43 *, t733 *);
	static m3586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3587_MI;
extern "C" float m3587 (t733 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_0087;
		}
		if (L_3 == 2)
		{
			goto IL_008e;
		}
		if (L_3 == 3)
		{
			goto IL_0095;
		}
		if (L_3 == 4)
		{
			goto IL_009c;
		}
		if (L_3 == 5)
		{
			goto IL_00a3;
		}
		if (L_3 == 6)
		{
			goto IL_00aa;
		}
		if (L_3 == 7)
		{
			goto IL_00b1;
		}
		if (L_3 == 8)
		{
			goto IL_00b8;
		}
		if (L_3 == 9)
		{
			goto IL_00bf;
		}
		if (L_3 == 10)
		{
			goto IL_00c6;
		}
		if (L_3 == 11)
		{
			goto IL_00cd;
		}
		if (L_3 == 12)
		{
			goto IL_00d4;
		}
		if (L_3 == 13)
		{
			goto IL_00db;
		}
		if (L_3 == 14)
		{
			goto IL_00e2;
		}
		if (L_3 == 15)
		{
			goto IL_00e9;
		}
		if (L_3 == 16)
		{
			goto IL_00f0;
		}
		if (L_3 == 17)
		{
			goto IL_00f7;
		}
		if (L_3 == 18)
		{
			goto IL_00fe;
		}
		if (L_3 == 19)
		{
			goto IL_0105;
		}
		if (L_3 == 20)
		{
			goto IL_010c;
		}
		if (L_3 == 21)
		{
			goto IL_0113;
		}
		if (L_3 == 22)
		{
			goto IL_011a;
		}
		if (L_3 == 23)
		{
			goto IL_0121;
		}
		if (L_3 == 24)
		{
			goto IL_0128;
		}
		if (L_3 == 25)
		{
			goto IL_012f;
		}
		if (L_3 == 26)
		{
			goto IL_0136;
		}
	}
	{
		goto IL_013d;
	}

IL_0080:
	{
		float L_4 = (__this->f0);
		return L_4;
	}

IL_0087:
	{
		float L_5 = (__this->f1);
		return L_5;
	}

IL_008e:
	{
		float L_6 = (__this->f2);
		return L_6;
	}

IL_0095:
	{
		float L_7 = (__this->f3);
		return L_7;
	}

IL_009c:
	{
		float L_8 = (__this->f4);
		return L_8;
	}

IL_00a3:
	{
		float L_9 = (__this->f5);
		return L_9;
	}

IL_00aa:
	{
		float L_10 = (__this->f6);
		return L_10;
	}

IL_00b1:
	{
		float L_11 = (__this->f7);
		return L_11;
	}

IL_00b8:
	{
		float L_12 = (__this->f8);
		return L_12;
	}

IL_00bf:
	{
		float L_13 = (__this->f9);
		return L_13;
	}

IL_00c6:
	{
		float L_14 = (__this->f10);
		return L_14;
	}

IL_00cd:
	{
		float L_15 = (__this->f11);
		return L_15;
	}

IL_00d4:
	{
		float L_16 = (__this->f12);
		return L_16;
	}

IL_00db:
	{
		float L_17 = (__this->f13);
		return L_17;
	}

IL_00e2:
	{
		float L_18 = (__this->f14);
		return L_18;
	}

IL_00e9:
	{
		float L_19 = (__this->f15);
		return L_19;
	}

IL_00f0:
	{
		float L_20 = (__this->f16);
		return L_20;
	}

IL_00f7:
	{
		float L_21 = (__this->f17);
		return L_21;
	}

IL_00fe:
	{
		float L_22 = (__this->f18);
		return L_22;
	}

IL_0105:
	{
		float L_23 = (__this->f19);
		return L_23;
	}

IL_010c:
	{
		float L_24 = (__this->f20);
		return L_24;
	}

IL_0113:
	{
		float L_25 = (__this->f21);
		return L_25;
	}

IL_011a:
	{
		float L_26 = (__this->f22);
		return L_26;
	}

IL_0121:
	{
		float L_27 = (__this->f23);
		return L_27;
	}

IL_0128:
	{
		float L_28 = (__this->f24);
		return L_28;
	}

IL_012f:
	{
		float L_29 = (__this->f25);
		return L_29;
	}

IL_0136:
	{
		float L_30 = (__this->f26);
		return L_30;
	}

IL_013d:
	{
		t890 * L_31 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_31, (t2*) &_stringLiteral227, &m4293_MI);
		il2cpp_codegen_raise_exception(L_31);
	}
}
extern MethodInfo m3588_MI;
extern "C" void m3588 (t733 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)9)))+(int32_t)L_1));
		int32_t L_2 = V_0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (L_3 == 0)
		{
			goto IL_0080;
		}
		if (L_3 == 1)
		{
			goto IL_008c;
		}
		if (L_3 == 2)
		{
			goto IL_0098;
		}
		if (L_3 == 3)
		{
			goto IL_00a4;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00bc;
		}
		if (L_3 == 6)
		{
			goto IL_00c8;
		}
		if (L_3 == 7)
		{
			goto IL_00d4;
		}
		if (L_3 == 8)
		{
			goto IL_00e0;
		}
		if (L_3 == 9)
		{
			goto IL_00ec;
		}
		if (L_3 == 10)
		{
			goto IL_00f8;
		}
		if (L_3 == 11)
		{
			goto IL_0104;
		}
		if (L_3 == 12)
		{
			goto IL_0110;
		}
		if (L_3 == 13)
		{
			goto IL_011c;
		}
		if (L_3 == 14)
		{
			goto IL_0128;
		}
		if (L_3 == 15)
		{
			goto IL_0134;
		}
		if (L_3 == 16)
		{
			goto IL_0140;
		}
		if (L_3 == 17)
		{
			goto IL_014c;
		}
		if (L_3 == 18)
		{
			goto IL_0158;
		}
		if (L_3 == 19)
		{
			goto IL_0164;
		}
		if (L_3 == 20)
		{
			goto IL_0170;
		}
		if (L_3 == 21)
		{
			goto IL_017c;
		}
		if (L_3 == 22)
		{
			goto IL_0188;
		}
		if (L_3 == 23)
		{
			goto IL_0194;
		}
		if (L_3 == 24)
		{
			goto IL_01a0;
		}
		if (L_3 == 25)
		{
			goto IL_01ac;
		}
		if (L_3 == 26)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01c4;
	}

IL_0080:
	{
		float L_4 = p2;
		__this->f0 = L_4;
		goto IL_01cf;
	}

IL_008c:
	{
		float L_5 = p2;
		__this->f1 = L_5;
		goto IL_01cf;
	}

IL_0098:
	{
		float L_6 = p2;
		__this->f2 = L_6;
		goto IL_01cf;
	}

IL_00a4:
	{
		float L_7 = p2;
		__this->f3 = L_7;
		goto IL_01cf;
	}

IL_00b0:
	{
		float L_8 = p2;
		__this->f4 = L_8;
		goto IL_01cf;
	}

IL_00bc:
	{
		float L_9 = p2;
		__this->f5 = L_9;
		goto IL_01cf;
	}

IL_00c8:
	{
		float L_10 = p2;
		__this->f6 = L_10;
		goto IL_01cf;
	}

IL_00d4:
	{
		float L_11 = p2;
		__this->f7 = L_11;
		goto IL_01cf;
	}

IL_00e0:
	{
		float L_12 = p2;
		__this->f8 = L_12;
		goto IL_01cf;
	}

IL_00ec:
	{
		float L_13 = p2;
		__this->f9 = L_13;
		goto IL_01cf;
	}

IL_00f8:
	{
		float L_14 = p2;
		__this->f10 = L_14;
		goto IL_01cf;
	}

IL_0104:
	{
		float L_15 = p2;
		__this->f11 = L_15;
		goto IL_01cf;
	}

IL_0110:
	{
		float L_16 = p2;
		__this->f12 = L_16;
		goto IL_01cf;
	}

IL_011c:
	{
		float L_17 = p2;
		__this->f13 = L_17;
		goto IL_01cf;
	}

IL_0128:
	{
		float L_18 = p2;
		__this->f14 = L_18;
		goto IL_01cf;
	}

IL_0134:
	{
		float L_19 = p2;
		__this->f15 = L_19;
		goto IL_01cf;
	}

IL_0140:
	{
		float L_20 = p2;
		__this->f16 = L_20;
		goto IL_01cf;
	}

IL_014c:
	{
		float L_21 = p2;
		__this->f17 = L_21;
		goto IL_01cf;
	}

IL_0158:
	{
		float L_22 = p2;
		__this->f18 = L_22;
		goto IL_01cf;
	}

IL_0164:
	{
		float L_23 = p2;
		__this->f19 = L_23;
		goto IL_01cf;
	}

IL_0170:
	{
		float L_24 = p2;
		__this->f20 = L_24;
		goto IL_01cf;
	}

IL_017c:
	{
		float L_25 = p2;
		__this->f21 = L_25;
		goto IL_01cf;
	}

IL_0188:
	{
		float L_26 = p2;
		__this->f22 = L_26;
		goto IL_01cf;
	}

IL_0194:
	{
		float L_27 = p2;
		__this->f23 = L_27;
		goto IL_01cf;
	}

IL_01a0:
	{
		float L_28 = p2;
		__this->f24 = L_28;
		goto IL_01cf;
	}

IL_01ac:
	{
		float L_29 = p2;
		__this->f25 = L_29;
		goto IL_01cf;
	}

IL_01b8:
	{
		float L_30 = p2;
		__this->f26 = L_30;
		goto IL_01cf;
	}

IL_01c4:
	{
		t890 * L_31 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4293(L_31, (t2*) &_stringLiteral227, &m4293_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
extern MethodInfo m3589_MI;
extern "C" int32_t m3589 (t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->f0);
		int32_t L_2 = m4271(L_1, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->f1);
		int32_t L_5 = m4271(L_4, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->f2);
		int32_t L_8 = m4271(L_7, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->f3);
		int32_t L_11 = m4271(L_10, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->f4);
		int32_t L_14 = m4271(L_13, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->f5);
		int32_t L_17 = m4271(L_16, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->f6);
		int32_t L_20 = m4271(L_19, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->f7);
		int32_t L_23 = m4271(L_22, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->f8);
		int32_t L_26 = m4271(L_25, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->f9);
		int32_t L_29 = m4271(L_28, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->f10);
		int32_t L_32 = m4271(L_31, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->f11);
		int32_t L_35 = m4271(L_34, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->f12);
		int32_t L_38 = m4271(L_37, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->f13);
		int32_t L_41 = m4271(L_40, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->f14);
		int32_t L_44 = m4271(L_43, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->f15);
		int32_t L_47 = m4271(L_46, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->f16);
		int32_t L_50 = m4271(L_49, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->f17);
		int32_t L_53 = m4271(L_52, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->f18);
		int32_t L_56 = m4271(L_55, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->f19);
		int32_t L_59 = m4271(L_58, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->f20);
		int32_t L_62 = m4271(L_61, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->f21);
		int32_t L_65 = m4271(L_64, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->f22);
		int32_t L_68 = m4271(L_67, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->f23);
		int32_t L_71 = m4271(L_70, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->f24);
		int32_t L_74 = m4271(L_73, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->f25);
		int32_t L_77 = m4271(L_76, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->f26);
		int32_t L_80 = m4271(L_79, &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
extern MethodInfo m3590_MI;
extern "C" bool m3590 (t733 * __this, t9 * p0, MethodInfo* method)
{
	t733  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t733_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		V_0 = ((*(t733 *)((t733 *)UnBox (L_1, InitializedTypeInfo(&t733_TI)))));
		t733  L_2 = V_0;
		bool L_3 = m3594(NULL, (*(t733 *)__this), L_2, &m3594_MI);
		return L_3;
	}
}
extern MethodInfo m3591_MI;
extern "C" t733  m3591 (t9 * __this , t733  p0, float p1, MethodInfo* method)
{
	t733  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t733_TI), (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = p1;
		(&V_0)->f0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&p0)->f1);
		float L_3 = p1;
		(&V_0)->f1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&p0)->f2);
		float L_5 = p1;
		(&V_0)->f2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&p0)->f3);
		float L_7 = p1;
		(&V_0)->f3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&p0)->f4);
		float L_9 = p1;
		(&V_0)->f4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&p0)->f5);
		float L_11 = p1;
		(&V_0)->f5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&p0)->f6);
		float L_13 = p1;
		(&V_0)->f6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&p0)->f7);
		float L_15 = p1;
		(&V_0)->f7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&p0)->f8);
		float L_17 = p1;
		(&V_0)->f8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&p0)->f9);
		float L_19 = p1;
		(&V_0)->f9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&p0)->f10);
		float L_21 = p1;
		(&V_0)->f10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&p0)->f11);
		float L_23 = p1;
		(&V_0)->f11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&p0)->f12);
		float L_25 = p1;
		(&V_0)->f12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&p0)->f13);
		float L_27 = p1;
		(&V_0)->f13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&p0)->f14);
		float L_29 = p1;
		(&V_0)->f14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&p0)->f15);
		float L_31 = p1;
		(&V_0)->f15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&p0)->f16);
		float L_33 = p1;
		(&V_0)->f16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&p0)->f17);
		float L_35 = p1;
		(&V_0)->f17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&p0)->f18);
		float L_37 = p1;
		(&V_0)->f18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&p0)->f19);
		float L_39 = p1;
		(&V_0)->f19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&p0)->f20);
		float L_41 = p1;
		(&V_0)->f20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&p0)->f21);
		float L_43 = p1;
		(&V_0)->f21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&p0)->f22);
		float L_45 = p1;
		(&V_0)->f22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&p0)->f23);
		float L_47 = p1;
		(&V_0)->f23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&p0)->f24);
		float L_49 = p1;
		(&V_0)->f24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&p0)->f25);
		float L_51 = p1;
		(&V_0)->f25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&p0)->f26);
		float L_53 = p1;
		(&V_0)->f26 = ((float)((float)L_52*(float)L_53));
		t733  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3592_MI;
extern "C" t733  m3592 (t9 * __this , float p0, t733  p1, MethodInfo* method)
{
	t733  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t733_TI), (&V_0));
		float L_0 = ((&p1)->f0);
		float L_1 = p0;
		(&V_0)->f0 = ((float)((float)L_0*(float)L_1));
		float L_2 = ((&p1)->f1);
		float L_3 = p0;
		(&V_0)->f1 = ((float)((float)L_2*(float)L_3));
		float L_4 = ((&p1)->f2);
		float L_5 = p0;
		(&V_0)->f2 = ((float)((float)L_4*(float)L_5));
		float L_6 = ((&p1)->f3);
		float L_7 = p0;
		(&V_0)->f3 = ((float)((float)L_6*(float)L_7));
		float L_8 = ((&p1)->f4);
		float L_9 = p0;
		(&V_0)->f4 = ((float)((float)L_8*(float)L_9));
		float L_10 = ((&p1)->f5);
		float L_11 = p0;
		(&V_0)->f5 = ((float)((float)L_10*(float)L_11));
		float L_12 = ((&p1)->f6);
		float L_13 = p0;
		(&V_0)->f6 = ((float)((float)L_12*(float)L_13));
		float L_14 = ((&p1)->f7);
		float L_15 = p0;
		(&V_0)->f7 = ((float)((float)L_14*(float)L_15));
		float L_16 = ((&p1)->f8);
		float L_17 = p0;
		(&V_0)->f8 = ((float)((float)L_16*(float)L_17));
		float L_18 = ((&p1)->f9);
		float L_19 = p0;
		(&V_0)->f9 = ((float)((float)L_18*(float)L_19));
		float L_20 = ((&p1)->f10);
		float L_21 = p0;
		(&V_0)->f10 = ((float)((float)L_20*(float)L_21));
		float L_22 = ((&p1)->f11);
		float L_23 = p0;
		(&V_0)->f11 = ((float)((float)L_22*(float)L_23));
		float L_24 = ((&p1)->f12);
		float L_25 = p0;
		(&V_0)->f12 = ((float)((float)L_24*(float)L_25));
		float L_26 = ((&p1)->f13);
		float L_27 = p0;
		(&V_0)->f13 = ((float)((float)L_26*(float)L_27));
		float L_28 = ((&p1)->f14);
		float L_29 = p0;
		(&V_0)->f14 = ((float)((float)L_28*(float)L_29));
		float L_30 = ((&p1)->f15);
		float L_31 = p0;
		(&V_0)->f15 = ((float)((float)L_30*(float)L_31));
		float L_32 = ((&p1)->f16);
		float L_33 = p0;
		(&V_0)->f16 = ((float)((float)L_32*(float)L_33));
		float L_34 = ((&p1)->f17);
		float L_35 = p0;
		(&V_0)->f17 = ((float)((float)L_34*(float)L_35));
		float L_36 = ((&p1)->f18);
		float L_37 = p0;
		(&V_0)->f18 = ((float)((float)L_36*(float)L_37));
		float L_38 = ((&p1)->f19);
		float L_39 = p0;
		(&V_0)->f19 = ((float)((float)L_38*(float)L_39));
		float L_40 = ((&p1)->f20);
		float L_41 = p0;
		(&V_0)->f20 = ((float)((float)L_40*(float)L_41));
		float L_42 = ((&p1)->f21);
		float L_43 = p0;
		(&V_0)->f21 = ((float)((float)L_42*(float)L_43));
		float L_44 = ((&p1)->f22);
		float L_45 = p0;
		(&V_0)->f22 = ((float)((float)L_44*(float)L_45));
		float L_46 = ((&p1)->f23);
		float L_47 = p0;
		(&V_0)->f23 = ((float)((float)L_46*(float)L_47));
		float L_48 = ((&p1)->f24);
		float L_49 = p0;
		(&V_0)->f24 = ((float)((float)L_48*(float)L_49));
		float L_50 = ((&p1)->f25);
		float L_51 = p0;
		(&V_0)->f25 = ((float)((float)L_50*(float)L_51));
		float L_52 = ((&p1)->f26);
		float L_53 = p0;
		(&V_0)->f26 = ((float)((float)L_52*(float)L_53));
		t733  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3593_MI;
extern "C" t733  m3593 (t9 * __this , t733  p0, t733  p1, MethodInfo* method)
{
	t733  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t733_TI), (&V_0));
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		(&V_0)->f0 = ((float)((float)L_0+(float)L_1));
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		(&V_0)->f1 = ((float)((float)L_2+(float)L_3));
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f2);
		(&V_0)->f2 = ((float)((float)L_4+(float)L_5));
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		(&V_0)->f3 = ((float)((float)L_6+(float)L_7));
		float L_8 = ((&p0)->f4);
		float L_9 = ((&p1)->f4);
		(&V_0)->f4 = ((float)((float)L_8+(float)L_9));
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f5);
		(&V_0)->f5 = ((float)((float)L_10+(float)L_11));
		float L_12 = ((&p0)->f6);
		float L_13 = ((&p1)->f6);
		(&V_0)->f6 = ((float)((float)L_12+(float)L_13));
		float L_14 = ((&p0)->f7);
		float L_15 = ((&p1)->f7);
		(&V_0)->f7 = ((float)((float)L_14+(float)L_15));
		float L_16 = ((&p0)->f8);
		float L_17 = ((&p1)->f8);
		(&V_0)->f8 = ((float)((float)L_16+(float)L_17));
		float L_18 = ((&p0)->f9);
		float L_19 = ((&p1)->f9);
		(&V_0)->f9 = ((float)((float)L_18+(float)L_19));
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f10);
		(&V_0)->f10 = ((float)((float)L_20+(float)L_21));
		float L_22 = ((&p0)->f11);
		float L_23 = ((&p1)->f11);
		(&V_0)->f11 = ((float)((float)L_22+(float)L_23));
		float L_24 = ((&p0)->f12);
		float L_25 = ((&p1)->f12);
		(&V_0)->f12 = ((float)((float)L_24+(float)L_25));
		float L_26 = ((&p0)->f13);
		float L_27 = ((&p1)->f13);
		(&V_0)->f13 = ((float)((float)L_26+(float)L_27));
		float L_28 = ((&p0)->f14);
		float L_29 = ((&p1)->f14);
		(&V_0)->f14 = ((float)((float)L_28+(float)L_29));
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f15);
		(&V_0)->f15 = ((float)((float)L_30+(float)L_31));
		float L_32 = ((&p0)->f16);
		float L_33 = ((&p1)->f16);
		(&V_0)->f16 = ((float)((float)L_32+(float)L_33));
		float L_34 = ((&p0)->f17);
		float L_35 = ((&p1)->f17);
		(&V_0)->f17 = ((float)((float)L_34+(float)L_35));
		float L_36 = ((&p0)->f18);
		float L_37 = ((&p1)->f18);
		(&V_0)->f18 = ((float)((float)L_36+(float)L_37));
		float L_38 = ((&p0)->f19);
		float L_39 = ((&p1)->f19);
		(&V_0)->f19 = ((float)((float)L_38+(float)L_39));
		float L_40 = ((&p0)->f20);
		float L_41 = ((&p1)->f20);
		(&V_0)->f20 = ((float)((float)L_40+(float)L_41));
		float L_42 = ((&p0)->f21);
		float L_43 = ((&p1)->f21);
		(&V_0)->f21 = ((float)((float)L_42+(float)L_43));
		float L_44 = ((&p0)->f22);
		float L_45 = ((&p1)->f22);
		(&V_0)->f22 = ((float)((float)L_44+(float)L_45));
		float L_46 = ((&p0)->f23);
		float L_47 = ((&p1)->f23);
		(&V_0)->f23 = ((float)((float)L_46+(float)L_47));
		float L_48 = ((&p0)->f24);
		float L_49 = ((&p1)->f24);
		(&V_0)->f24 = ((float)((float)L_48+(float)L_49));
		float L_50 = ((&p0)->f25);
		float L_51 = ((&p1)->f25);
		(&V_0)->f25 = ((float)((float)L_50+(float)L_51));
		float L_52 = ((&p0)->f26);
		float L_53 = ((&p1)->f26);
		(&V_0)->f26 = ((float)((float)L_52+(float)L_53));
		t733  L_54 = V_0;
		return L_54;
	}
}
extern "C" bool m3594 (t9 * __this , t733  p0, t733  p1, MethodInfo* method)
{
	int32_t G_B28_0 = 0;
	{
		float L_0 = ((&p0)->f0);
		float L_1 = ((&p1)->f0);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0200;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = ((&p1)->f1);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_0200;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = ((&p1)->f2);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_0200;
		}
	}
	{
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		if ((!(((float)L_6) == ((float)L_7))))
		{
			goto IL_0200;
		}
	}
	{
		float L_8 = ((&p0)->f4);
		float L_9 = ((&p1)->f4);
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0200;
		}
	}
	{
		float L_10 = ((&p0)->f5);
		float L_11 = ((&p1)->f5);
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0200;
		}
	}
	{
		float L_12 = ((&p0)->f6);
		float L_13 = ((&p1)->f6);
		if ((!(((float)L_12) == ((float)L_13))))
		{
			goto IL_0200;
		}
	}
	{
		float L_14 = ((&p0)->f7);
		float L_15 = ((&p1)->f7);
		if ((!(((float)L_14) == ((float)L_15))))
		{
			goto IL_0200;
		}
	}
	{
		float L_16 = ((&p0)->f8);
		float L_17 = ((&p1)->f8);
		if ((!(((float)L_16) == ((float)L_17))))
		{
			goto IL_0200;
		}
	}
	{
		float L_18 = ((&p0)->f9);
		float L_19 = ((&p1)->f9);
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0200;
		}
	}
	{
		float L_20 = ((&p0)->f10);
		float L_21 = ((&p1)->f10);
		if ((!(((float)L_20) == ((float)L_21))))
		{
			goto IL_0200;
		}
	}
	{
		float L_22 = ((&p0)->f11);
		float L_23 = ((&p1)->f11);
		if ((!(((float)L_22) == ((float)L_23))))
		{
			goto IL_0200;
		}
	}
	{
		float L_24 = ((&p0)->f12);
		float L_25 = ((&p1)->f12);
		if ((!(((float)L_24) == ((float)L_25))))
		{
			goto IL_0200;
		}
	}
	{
		float L_26 = ((&p0)->f13);
		float L_27 = ((&p1)->f13);
		if ((!(((float)L_26) == ((float)L_27))))
		{
			goto IL_0200;
		}
	}
	{
		float L_28 = ((&p0)->f14);
		float L_29 = ((&p1)->f14);
		if ((!(((float)L_28) == ((float)L_29))))
		{
			goto IL_0200;
		}
	}
	{
		float L_30 = ((&p0)->f15);
		float L_31 = ((&p1)->f15);
		if ((!(((float)L_30) == ((float)L_31))))
		{
			goto IL_0200;
		}
	}
	{
		float L_32 = ((&p0)->f16);
		float L_33 = ((&p1)->f16);
		if ((!(((float)L_32) == ((float)L_33))))
		{
			goto IL_0200;
		}
	}
	{
		float L_34 = ((&p0)->f17);
		float L_35 = ((&p1)->f17);
		if ((!(((float)L_34) == ((float)L_35))))
		{
			goto IL_0200;
		}
	}
	{
		float L_36 = ((&p0)->f18);
		float L_37 = ((&p1)->f18);
		if ((!(((float)L_36) == ((float)L_37))))
		{
			goto IL_0200;
		}
	}
	{
		float L_38 = ((&p0)->f19);
		float L_39 = ((&p1)->f19);
		if ((!(((float)L_38) == ((float)L_39))))
		{
			goto IL_0200;
		}
	}
	{
		float L_40 = ((&p0)->f20);
		float L_41 = ((&p1)->f20);
		if ((!(((float)L_40) == ((float)L_41))))
		{
			goto IL_0200;
		}
	}
	{
		float L_42 = ((&p0)->f21);
		float L_43 = ((&p1)->f21);
		if ((!(((float)L_42) == ((float)L_43))))
		{
			goto IL_0200;
		}
	}
	{
		float L_44 = ((&p0)->f22);
		float L_45 = ((&p1)->f22);
		if ((!(((float)L_44) == ((float)L_45))))
		{
			goto IL_0200;
		}
	}
	{
		float L_46 = ((&p0)->f23);
		float L_47 = ((&p1)->f23);
		if ((!(((float)L_46) == ((float)L_47))))
		{
			goto IL_0200;
		}
	}
	{
		float L_48 = ((&p0)->f24);
		float L_49 = ((&p1)->f24);
		if ((!(((float)L_48) == ((float)L_49))))
		{
			goto IL_0200;
		}
	}
	{
		float L_50 = ((&p0)->f25);
		float L_51 = ((&p1)->f25);
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_0200;
		}
	}
	{
		float L_52 = ((&p0)->f26);
		float L_53 = ((&p1)->f26);
		G_B28_0 = ((((float)L_52) == ((float)L_53))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B28_0 = 0;
	}

IL_0201:
	{
		return G_B28_0;
	}
}
extern MethodInfo m3595_MI;
extern "C" bool m3595 (t9 * __this , t733  p0, t733  p1, MethodInfo* method)
{
	{
		t733  L_0 = p0;
		t733  L_1 = p1;
		bool L_2 = m3594(NULL, L_0, L_1, &m3594_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t463.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t463_TI;
#include "t463MD.h"



extern MethodInfo m2717_MI;
extern "C" t448  m2717 (t463 * __this, MethodInfo* method)
{
	typedef t448  (*m2717_ftn) (t463 *);
	static m2717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2714_MI;
extern "C" float m2714 (t463 * __this, MethodInfo* method)
{
	typedef float (*m2714_ftn) (t463 *);
	static m2714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2711_MI;
extern "C" t439 * m2711 (t463 * __this, MethodInfo* method)
{
	typedef t439 * (*m2711_ftn) (t463 *);
	static m2711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2742_MI;
extern "C" t448  m2742 (t463 * __this, MethodInfo* method)
{
	typedef t448  (*m2742_ftn) (t463 *);
	static m2742_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2742_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2712_MI;
extern "C" t47  m2712 (t463 * __this, MethodInfo* method)
{
	typedef t47  (*m2712_ftn) (t463 *);
	static m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
#include "t576.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t576_TI;
#include "t576MD.h"



#include "t596.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t596_TI;
#include "t596MD.h"

extern MethodInfo m3596_MI;


extern MethodInfo m2731_MI;
extern "C" t47  m2731 (t9 * __this , t463 * p0, MethodInfo* method)
{
	typedef t47  (*m2731_ftn) (t463 *);
	static m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2730_MI;
extern "C" t47  m2730 (t9 * __this , t463 * p0, MethodInfo* method)
{
	typedef t47  (*m2730_ftn) (t463 *);
	static m2730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2720_MI;
extern "C" t47  m2720 (t9 * __this , t463 * p0, MethodInfo* method)
{
	typedef t47  (*m2720_ftn) (t463 *);
	static m2720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2716_MI;
extern "C" t28  m2716 (t9 * __this , t463 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t463 * L_0 = p0;
		m3596(NULL, L_0, (&V_0), &m3596_MI);
		t28  L_1 = V_0;
		return L_1;
	}
}
extern "C" void m3596 (t9 * __this , t463 * p0, t28 * p1, MethodInfo* method)
{
	typedef void (*m3596_ftn) (t463 *, t28 *);
	static m3596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1);
}
#include "t734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t734_TI;
#include "t734MD.h"

#include "t735.h"
#include "t332.h"
#include "t736.h"
#include "t738.h"
#include "t891.h"
#include "t892.h"
#include "t893.h"
#include "t894.h"
extern TypeInfo t332_TI;
extern TypeInfo t736_TI;
extern TypeInfo t737_TI;
extern TypeInfo t735_TI;
extern TypeInfo t318_TI;
extern TypeInfo t309_TI;
extern TypeInfo t221_TI;
extern TypeInfo t893_TI;
extern TypeInfo t892_TI;
extern TypeInfo t894_TI;
#include "t332MD.h"
#include "t736MD.h"
#include "t738MD.h"
#include "t735MD.h"
#include "t893MD.h"
#include "t892MD.h"
#include "t894MD.h"
extern Il2CppType t735_0_0_0;
extern Il2CppType t318_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t893_0_0_0;
extern MethodInfo m3609_MI;
extern MethodInfo m1256_MI;
extern MethodInfo m3603_MI;
extern MethodInfo m3611_MI;
extern MethodInfo m3607_MI;
extern MethodInfo m3606_MI;
extern MethodInfo m4307_MI;
extern MethodInfo m4308_MI;
extern MethodInfo m3616_MI;
extern MethodInfo m3610_MI;
extern MethodInfo m3617_MI;
extern MethodInfo m3601_MI;
extern MethodInfo m3600_MI;
extern MethodInfo m3602_MI;
extern MethodInfo m4309_MI;
extern MethodInfo m4310_MI;
extern MethodInfo m4311_MI;
extern MethodInfo m2805_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m2834_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m4314_MI;
extern MethodInfo m4315_MI;
extern MethodInfo m4316_MI;
extern MethodInfo m4317_MI;
extern MethodInfo m4318_MI;
extern MethodInfo m4319_MI;
extern MethodInfo m4320_MI;
extern MethodInfo m4321_MI;
extern MethodInfo m4322_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m4324_MI;
extern Il2CppGenericMethod m4309_GM;
extern Il2CppGenericMethod m4316_GM;
extern Il2CppGenericMethod m4325_GM;
extern Il2CppGenericMethod m4326_GM;
extern Il2CppGenericMethod m4327_GM;
extern Il2CppGenericMethod m4328_GM;
extern Il2CppGenericMethod m4329_GM;
extern Il2CppGenericMethod m4318_GM;
extern Il2CppGenericMethod m4322_GM;


extern MethodInfo m3597_MI;
extern "C" void m3597 (t734 * __this, t2* p0, t738 * p1, MethodInfo* method)
{
	t221* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t738 * L_0 = p1;
		t735 * L_1 = m3616(L_0, &m3616_MI);
		t221* L_2 = m3610(NULL, L_1, &m3610_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		t738 * L_4 = p1;
		t737* L_5 = m3617(L_4, &m3617_MI);
		t221* L_6 = V_0;
		m3601(__this, L_3, L_5, L_6, &m3601_MI);
		return;
	}
}
extern MethodInfo m3598_MI;
extern "C" void m3598 (t734 * __this, MethodInfo* method)
{
	{
		m3600(__this, 1, &m3600_MI);
		return;
	}
}
extern MethodInfo m3599_MI;
extern "C" void m3599 (t734 * __this, MethodInfo* method)
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
		m3600(__this, 0, &m3600_MI);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0013:
	{
		return;
	}
}
extern "C" void m3600 (t734 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3600_ftn) (t734 *, bool);
	static m3600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3601 (t734 * __this, t2* p0, t737* p1, t221* p2, MethodInfo* method)
{
	typedef void (*m3601_ftn) (t734 *, t2*, t737*, t221*);
	static m3601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t735 * m3602 (t734 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3609(__this, &m3609_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t332 * L_1 = (t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t332_TI));
		m1256(L_1, (t2*) &_stringLiteral228, &m1256_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t2* L_2 = m3603(__this, &m3603_MI);
		t735 * L_3 = m3611(NULL, L_2, &m3611_MI);
		return L_3;
	}
}
extern "C" t2* m3603 (t734 * __this, MethodInfo* method)
{
	typedef t2* (*m3603_ftn) (t734 *);
	static m3603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3604_MI;
extern "C" t2* m3604 (t734 * __this, MethodInfo* method)
{
	t737* V_0 = {0};
	{
		bool L_0 = m3609(__this, &m3609_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t332 * L_1 = (t332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t332_TI));
		m1256(L_1, (t2*) &_stringLiteral229, &m1256_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t737* L_2 = m3607(__this, &m3607_MI);
		V_0 = L_2;
		t736 * L_3 = m3606(__this, &m3606_MI);
		t737* L_4 = V_0;
		t737* L_5 = V_0;
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t737*, int32_t, int32_t >::Invoke(&m4307_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		return L_6;
	}
}
extern MethodInfo m3605_MI;
extern "C" t736 * m3605 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_0 = m4308(NULL, &m4308_MI);
		return L_0;
	}
}
extern TypeInfo* t318_TI_var;
extern MethodInfo* m4309_MI_var;
extern "C" t736 * m3606 (t734 * __this, MethodInfo* method)
{
	static bool m3606_init;
	if (!m3606_init)
	{
		t318_TI_var = il2cpp_codegen_class_from_type(&t318_0_0_0);
		m4309_MI_var = il2cpp_codegen_genericmethod_get_method(&m4309_GM);
		m3606_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2* V_3 = {0};
	int32_t V_4 = 0;
	t736 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*)NULL;
		t735 * L_0 = m3602(__this, &m3602_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t2*, t2** >::Invoke(m4309_MI_var, L_0, (t2*) &_stringLiteral230, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		t2* L_2 = V_0;
		int32_t L_3 = m4310(L_2, (t2*) &_stringLiteral231, 5, &m4310_MI);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		t2* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = m4311(L_5, ((int32_t)61), L_6, &m4311_MI);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		t2* L_9 = V_0;
		int32_t L_10 = V_2;
		t2* L_11 = m2805(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), &m2805_MI);
		t2* L_12 = m4312(L_11, &m4312_MI);
		t318* L_13 = ((t318*)SZArrayNew(t318_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		t318* L_14 = L_13;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		t2* L_15 = m4313(L_12, L_14, &m4313_MI);
		t2* L_16 = m4312(L_15, &m4312_MI);
		V_3 = L_16;
		t2* L_17 = V_3;
		int32_t L_18 = m2834(L_17, ((int32_t)59), &m2834_MI);
		V_4 = L_18;
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) <= ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		t2* L_20 = V_3;
		int32_t L_21 = V_4;
		t2* L_22 = m2779(L_20, 0, L_21, &m2779_MI);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			t2* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_24 = m4314(NULL, L_23, &m4314_MI);
			V_5 = L_24;
			goto IL_00b6;
		}

IL_0090:
		{
			; // IL_0090: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t138 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&t138_TI, e.ex->object.klass))
			goto CATCH_0095;
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		t2* L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_26 = m399(NULL, (t2*) &_stringLiteral232, L_25, (t2*) &_stringLiteral136, &m399_MI);
		m611(NULL, L_26, &m611_MI);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_27 = m4315(NULL, &m4315_MI);
		return L_27;
	}

IL_00b6:
	{
		t736 * L_28 = V_5;
		return L_28;
	}
}
extern "C" t737* m3607 (t734 * __this, MethodInfo* method)
{
	typedef t737* (*m3607_ftn) (t734 *);
	static m3607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3608_MI;
extern "C" t2* m3608 (t734 * __this, MethodInfo* method)
{
	typedef t2* (*m3608_ftn) (t734 *);
	static m3608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3609 (t734 * __this, MethodInfo* method)
{
	typedef bool (*m3609_ftn) (t734 *);
	static m3609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t893_TI_var;
extern MethodInfo* m4316_MI_var;
extern MethodInfo* m4325_MI_var;
extern MethodInfo* m4326_MI_var;
extern MethodInfo* m4327_MI_var;
extern MethodInfo* m4328_MI_var;
extern MethodInfo* m4329_MI_var;
extern "C" t221* m3610 (t9 * __this , t735 * p0, MethodInfo* method)
{
	static bool m3610_init;
	if (!m3610_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t893_TI_var = il2cpp_codegen_class_from_type(&t893_0_0_0);
		m4316_MI_var = il2cpp_codegen_genericmethod_get_method(&m4316_GM);
		m4325_MI_var = il2cpp_codegen_genericmethod_get_method(&m4325_GM);
		m4326_MI_var = il2cpp_codegen_genericmethod_get_method(&m4326_GM);
		m4327_MI_var = il2cpp_codegen_genericmethod_get_method(&m4327_GM);
		m4328_MI_var = il2cpp_codegen_genericmethod_get_method(&m4328_GM);
		m4329_MI_var = il2cpp_codegen_genericmethod_get_method(&m4329_GM);
		m3610_init = true;
	}
	t221* V_0 = {0};
	int32_t V_1 = 0;
	t892  V_2 = {0};
	t893  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t735 * L_0 = p0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (t221*)NULL;
	}

IL_0008:
	{
		t735 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4316_MI_var, L_1);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		t735 * L_3 = p0;
		t893  L_4 = m4325(L_3, m4325_MI_var);
		V_3 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_0024:
		{
			t892  L_5 = m4326((&V_3), m4326_MI_var);
			V_2 = L_5;
			t221* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t2* L_9 = m4327((&V_2), m4327_MI_var);
			t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4317_MI, L_9);
			ArrayElementTypeCheck (L_6, L_10);
			*((t2**)(t2**)SZArrayLdElema(L_6, L_8)) = (t2*)L_10;
			t221* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			t2* L_14 = m4328((&V_2), m4328_MI_var);
			t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4317_MI, L_14);
			ArrayElementTypeCheck (L_11, L_15);
			*((t2**)(t2**)SZArrayLdElema(L_11, L_13)) = (t2*)L_15;
		}

IL_0052:
		{
			bool L_16 = m4329((&V_3), m4329_MI_var);
			if (L_16)
			{
				goto IL_0024;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		t893  L_17 = V_3;
		t893  L_18 = L_17;
		t9 * L_19 = Box(t893_TI_var, &L_18);
		InterfaceActionInvoker0::Invoke(&m365_MI, L_19);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006f:
	{
		t221* L_20 = V_0;
		return L_20;
	}
}
extern TypeInfo* t735_TI_var;
extern MethodInfo* m4318_MI_var;
extern MethodInfo* m4322_MI_var;
extern "C" t735 * m3611 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m3611_init;
	if (!m3611_init)
	{
		t735_TI_var = il2cpp_codegen_class_from_type(&t735_0_0_0);
		m4318_MI_var = il2cpp_codegen_genericmethod_get_method(&m4318_GM);
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m3611_init = true;
	}
	t735 * V_0 = {0};
	t894 * V_1 = {0};
	int32_t V_2 = 0;
	t2* V_3 = {0};
	int32_t V_4 = 0;
	t2* V_5 = {0};
	t2* V_6 = {0};
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t570 * L_1 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_1, (t2*) &_stringLiteral233, &m2949_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t735 * L_2 = (t735 *)il2cpp_codegen_object_new (t735_TI_var);
		m4318(L_2, m4318_MI_var);
		V_0 = L_2;
		t2* L_3 = p0;
		t894 * L_4 = (t894 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t894_TI));
		m4319(L_4, L_3, &m4319_MI);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		t894 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4320_MI, L_5);
		V_3 = L_6;
		t2* L_7 = V_3;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00a2;
	}

IL_0032:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		t2* L_10 = V_3;
		bool L_11 = m4321(L_10, (t2*) &_stringLiteral234, &m4321_MI);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		t735 * L_12 = V_0;
		t2* L_13 = V_3;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_12, (t2*) &_stringLiteral235, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		t2* L_14 = V_3;
		int32_t L_15 = m4323(L_14, (t2*) &_stringLiteral236, &m4323_MI);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0020;
	}

IL_0077:
	{
		t2* L_17 = V_3;
		int32_t L_18 = V_4;
		t2* L_19 = m2779(L_17, 0, L_18, &m2779_MI);
		t2* L_20 = m4324(L_19, &m4324_MI);
		V_5 = L_20;
		t2* L_21 = V_3;
		int32_t L_22 = V_4;
		t2* L_23 = m2805(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), &m2805_MI);
		V_6 = L_23;
		t735 * L_24 = V_0;
		t2* L_25 = V_5;
		t2* L_26 = V_6;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		t735 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t738_TI;

#include "t895.h"
#include "t31.h"
#include "t739.h"
extern TypeInfo t895_TI;
extern TypeInfo t31_TI;
extern TypeInfo t740_TI;
extern TypeInfo t739_TI;
#include "t895MD.h"
#include "t31MD.h"
#include "t740MD.h"
#include "t739MD.h"
#include "t178MD.h"
extern Il2CppType t31_0_0_0;
extern Il2CppType t739_0_0_0;
extern Il2CppType t737_0_0_0;
extern MethodInfo m4330_MI;
extern MethodInfo m4331_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m3621_MI;
extern MethodInfo m4335_MI;
extern MethodInfo m4336_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m4338_MI;
extern MethodInfo m3620_MI;
extern MethodInfo m4339_MI;
extern MethodInfo m398_MI;
extern MethodInfo m1204_MI;
extern MethodInfo m3614_MI;
extern MethodInfo m402_MI;
extern MethodInfo m4340_MI;
extern MethodInfo m4341_MI;
extern MethodInfo m4342_MI;
extern MethodInfo m3613_MI;
extern Il2CppGenericMethod m4333_GM;
extern Il2CppGenericMethod m4336_GM;
extern Il2CppGenericMethod m4337_GM;
extern Il2CppGenericMethod m4339_GM;
extern Il2CppGenericMethod m398_GM;
extern Il2CppGenericMethod m402_GM;
extern Il2CppGenericMethod m4340_GM;


extern MethodInfo m3612_MI;
extern TypeInfo* t739_TI_var;
extern TypeInfo* t31_TI_var;
extern TypeInfo* t737_TI_var;
extern MethodInfo* m4339_MI_var;
extern MethodInfo* m398_MI_var;
extern "C" void m3612 (t738 * __this, MethodInfo* method)
{
	static bool m3612_init;
	if (!m3612_init)
	{
		t739_TI_var = il2cpp_codegen_class_from_type(&t739_0_0_0);
		t31_TI_var = il2cpp_codegen_class_from_type(&t31_0_0_0);
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m4339_MI_var = il2cpp_codegen_genericmethod_get_method(&m4339_GM);
		m398_MI_var = il2cpp_codegen_genericmethod_get_method(&m398_GM);
		m3612_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(t739_TI_var);
		t739 * L_0 = (t739 *)il2cpp_codegen_object_new (t739_TI_var);
		m4339(L_0, m4339_MI_var);
		__this->f0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(t31_TI_var);
		t31 * L_1 = (t31 *)il2cpp_codegen_object_new (t31_TI_var);
		m398(L_1, m398_MI_var);
		__this->f1 = L_1;
		t31 * L_2 = (t31 *)il2cpp_codegen_object_new (t31_TI_var);
		m398(L_2, m398_MI_var);
		__this->f2 = L_2;
		t31 * L_3 = (t31 *)il2cpp_codegen_object_new (t31_TI_var);
		m398(L_3, m398_MI_var);
		__this->f3 = L_3;
		__this->f4 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = m1204(NULL, ((int32_t)48), ((int32_t)110), &m1204_MI);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)7));
	}

IL_005c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)6));
	}

IL_0068:
	{
		t737* L_9 = (__this->f4);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10)) = (uint8_t)(((uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0076:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)40))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
extern "C" void m3613 (t738 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	t736 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_0 = m4315(NULL, &m4315_MI);
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = p1;
		t736 * L_3 = V_0;
		m3614(__this, L_1, L_2, L_3, &m3614_MI);
		return;
	}
}
extern MethodInfo* m402_MI_var;
extern MethodInfo* m4340_MI_var;
extern "C" void m3614 (t738 * __this, t2* p0, t2* p1, t736 * p2, MethodInfo* method)
{
	static bool m3614_init;
	if (!m3614_init)
	{
		m402_MI_var = il2cpp_codegen_genericmethod_get_method(&m402_GM);
		m4340_MI_var = il2cpp_codegen_genericmethod_get_method(&m4340_GM);
		m3614_init = true;
	}
	{
		t31 * L_0 = (__this->f1);
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_0, L_1);
		t31 * L_2 = (__this->f2);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_2, (t2*)NULL);
		t739 * L_3 = (__this->f0);
		t736 * L_4 = p2;
		t2* L_5 = p1;
		t737* L_6 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_4, L_5);
		VirtActionInvoker1< t737* >::Invoke(m4340_MI_var, L_3, L_6);
		t31 * L_7 = (__this->f3);
		t736 * L_8 = p2;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4341_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, (t2*) &_stringLiteral251, L_9, (t2*) &_stringLiteral239, &m399_MI);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_7, L_10);
		return;
	}
}
extern MethodInfo m3615_MI;
extern "C" void m3615 (t738 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4342((&p1), &m4342_MI);
		m3613(__this, L_0, L_1, &m3613_MI);
		return;
	}
}
extern TypeInfo* t735_TI_var;
extern MethodInfo* m4318_MI_var;
extern MethodInfo* m4322_MI_var;
extern "C" t735 * m3616 (t738 * __this, MethodInfo* method)
{
	static bool m3616_init;
	if (!m3616_init)
	{
		t735_TI_var = il2cpp_codegen_class_from_type(&t735_0_0_0);
		m4318_MI_var = il2cpp_codegen_genericmethod_get_method(&m4318_GM);
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m3616_init = true;
	}
	t735 * V_0 = {0};
	{
		t735 * L_0 = (t735 *)il2cpp_codegen_object_new (t735_TI_var);
		m4318(L_0, m4318_MI_var);
		V_0 = L_0;
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t735 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
		t736 * L_3 = m4315(NULL, &m4315_MI);
		t737* L_4 = (__this->f4);
		t737* L_5 = (__this->f4);
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t737*, int32_t, int32_t >::Invoke(&m4307_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, (t2*) &_stringLiteral238, L_6, (t2*) &_stringLiteral239, &m399_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_2, (t2*) &_stringLiteral237, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		t735 * L_8 = V_0;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_8, (t2*) &_stringLiteral237, (t2*) &_stringLiteral240);
	}

IL_0059:
	{
		t735 * L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t221_TI_var;
extern MethodInfo* m4333_MI_var;
extern MethodInfo* m4336_MI_var;
extern MethodInfo* m4337_MI_var;
extern "C" t737* m3617 (t738 * __this, MethodInfo* method)
{
	static bool m3617_init;
	if (!m3617_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m4333_MI_var = il2cpp_codegen_genericmethod_get_method(&m4333_GM);
		m4336_MI_var = il2cpp_codegen_genericmethod_get_method(&m4336_GM);
		m4337_MI_var = il2cpp_codegen_genericmethod_get_method(&m4337_GM);
		m3617_init = true;
	}
	t737* V_0 = {0};
	t737* V_1 = {0};
	t737* V_2 = {0};
	t737* V_3 = {0};
	t737* V_4 = {0};
	t737* V_5 = {0};
	t895 * V_6 = {0};
	int32_t V_7 = 0;
	t737* V_8 = {0};
	t2* V_9 = {0};
	t2* V_10 = {0};
	t737* V_11 = {0};
	t2* V_12 = {0};
	t737* V_13 = {0};
	t737* V_14 = {0};
	t737* V_15 = {0};
	t737* V_16 = {0};
	t895 * V_17 = {0};
	int32_t V_18 = 0;
	t737* V_19 = {0};
	t737* V_20 = {0};
	t737* V_21 = {0};
	t737* V_22 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->f5);
		if (!L_0)
		{
			goto IL_0311;
		}
	}
	{
		t736 * L_1 = m3605(NULL, &m3605_MI);
		t737* L_2 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_1, (t2*) &_stringLiteral241);
		V_0 = L_2;
		t736 * L_3 = m3605(NULL, &m3605_MI);
		t737* L_4 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_3, (t2*) &_stringLiteral242);
		V_1 = L_4;
		t736 * L_5 = m3605(NULL, &m3605_MI);
		t737* L_6 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_5, (t2*) &_stringLiteral243);
		V_2 = L_6;
		t736 * L_7 = m3605(NULL, &m3605_MI);
		t737* L_8 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_7, (t2*) &_stringLiteral244);
		V_3 = L_8;
		t736 * L_9 = m3605(NULL, &m3605_MI);
		t737* L_10 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_9, (t2*) &_stringLiteral239);
		V_4 = L_10;
		t736 * L_11 = m3605(NULL, &m3605_MI);
		t737* L_12 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_11, (t2*) &_stringLiteral245);
		V_5 = L_12;
		t895 * L_13 = (t895 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t895_TI));
		m4331(L_13, ((int32_t)1024), &m4331_MI);
		V_6 = L_13;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_0297;
		}

IL_0081:
		{
			t895 * L_14 = V_6;
			t737* L_15 = V_1;
			t737* L_16 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_14, L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))));
			t895 * L_17 = V_6;
			t737* L_18 = V_0;
			t737* L_19 = V_0;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_17, L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))));
			t895 * L_20 = V_6;
			t737* L_21 = (__this->f4);
			t737* L_22 = (__this->f4);
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_20, L_21, 0, (((int32_t)(((t121 *)L_22)->max_length))));
			t895 * L_23 = V_6;
			t737* L_24 = V_1;
			t737* L_25 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_23, L_24, 0, (((int32_t)(((t121 *)L_25)->max_length))));
			t895 * L_26 = V_6;
			t737* L_27 = V_2;
			t737* L_28 = V_2;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_26, L_27, 0, (((int32_t)(((t121 *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_29 = m4315(NULL, &m4315_MI);
			t31 * L_30 = (__this->f3);
			int32_t L_31 = V_7;
			t2* L_32 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4333_MI_var, L_30, L_31);
			t737* L_33 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_29, L_32);
			V_8 = L_33;
			t895 * L_34 = V_6;
			t737* L_35 = V_8;
			t737* L_36 = V_8;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_34, L_35, 0, (((int32_t)(((t121 *)L_36)->max_length))));
			t895 * L_37 = V_6;
			t737* L_38 = V_1;
			t737* L_39 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_37, L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))));
			t895 * L_40 = V_6;
			t737* L_41 = V_3;
			t737* L_42 = V_3;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_40, L_41, 0, (((int32_t)(((t121 *)L_42)->max_length))));
			t736 * L_43 = m4315(NULL, &m4315_MI);
			t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4334_MI, L_43);
			V_9 = L_44;
			t31 * L_45 = (__this->f1);
			int32_t L_46 = V_7;
			t2* L_47 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4333_MI_var, L_45, L_46);
			V_10 = L_47;
			t2* L_48 = V_10;
			t736 * L_49 = m4315(NULL, &m4315_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			bool L_50 = m3624(NULL, L_48, L_49, &m3624_MI);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			t2* L_51 = V_10;
			int32_t L_52 = m4323(L_51, (t2*) &_stringLiteral246, &m4323_MI);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			t221* L_53 = ((t221*)SZArrayNew(t221_TI_var, 5));
			ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral246);
			*((t2**)(t2**)SZArrayLdElema(L_53, 0)) = (t2*)(t2*) &_stringLiteral246;
			t221* L_54 = L_53;
			t2* L_55 = V_9;
			ArrayElementTypeCheck (L_54, L_55);
			*((t2**)(t2**)SZArrayLdElema(L_54, 1)) = (t2*)L_55;
			t221* L_56 = L_54;
			ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral247);
			*((t2**)(t2**)SZArrayLdElema(L_56, 2)) = (t2*)(t2*) &_stringLiteral247;
			t221* L_57 = L_56;
			t2* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_59 = m4315(NULL, &m4315_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t2* L_60 = m3621(NULL, L_58, L_59, &m3621_MI);
			ArrayElementTypeCheck (L_57, L_60);
			*((t2**)(t2**)SZArrayLdElema(L_57, 3)) = (t2*)L_60;
			t221* L_61 = L_57;
			ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral248);
			*((t2**)(t2**)SZArrayLdElema(L_61, 4)) = (t2*)(t2*) &_stringLiteral248;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_62 = m4335(NULL, L_61, &m4335_MI);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_63 = m4315(NULL, &m4315_MI);
			t2* L_64 = V_10;
			t737* L_65 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_63, L_64);
			V_11 = L_65;
			t895 * L_66 = V_6;
			t737* L_67 = V_11;
			t737* L_68 = V_11;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_66, L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))));
			t895 * L_69 = V_6;
			t737* L_70 = V_4;
			t737* L_71 = V_4;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_69, L_70, 0, (((int32_t)(((t121 *)L_71)->max_length))));
			t31 * L_72 = (__this->f2);
			int32_t L_73 = V_7;
			t2* L_74 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4333_MI_var, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			t31 * L_75 = (__this->f2);
			int32_t L_76 = V_7;
			t2* L_77 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4333_MI_var, L_75, L_76);
			V_12 = L_77;
			t2* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_79 = m4315(NULL, &m4315_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			bool L_80 = m3624(NULL, L_78, L_79, &m3624_MI);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			t2* L_81 = V_12;
			int32_t L_82 = m4323(L_81, (t2*) &_stringLiteral246, &m4323_MI);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			t221* L_83 = ((t221*)SZArrayNew(t221_TI_var, 5));
			ArrayElementTypeCheck (L_83, (t2*) &_stringLiteral246);
			*((t2**)(t2**)SZArrayLdElema(L_83, 0)) = (t2*)(t2*) &_stringLiteral246;
			t221* L_84 = L_83;
			t2* L_85 = V_9;
			ArrayElementTypeCheck (L_84, L_85);
			*((t2**)(t2**)SZArrayLdElema(L_84, 1)) = (t2*)L_85;
			t221* L_86 = L_84;
			ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral247);
			*((t2**)(t2**)SZArrayLdElema(L_86, 2)) = (t2*)(t2*) &_stringLiteral247;
			t221* L_87 = L_86;
			t2* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_89 = m4315(NULL, &m4315_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t2* L_90 = m3621(NULL, L_88, L_89, &m3621_MI);
			ArrayElementTypeCheck (L_87, L_90);
			*((t2**)(t2**)SZArrayLdElema(L_87, 3)) = (t2*)L_90;
			t221* L_91 = L_87;
			ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral248);
			*((t2**)(t2**)SZArrayLdElema(L_91, 4)) = (t2*)(t2*) &_stringLiteral248;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_92 = m4335(NULL, L_91, &m4335_MI);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_93 = m4315(NULL, &m4315_MI);
			t2* L_94 = V_12;
			t737* L_95 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_93, L_94);
			V_13 = L_95;
			t895 * L_96 = V_6;
			t737* L_97 = V_5;
			t737* L_98 = V_5;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_96, L_97, 0, (((int32_t)(((t121 *)L_98)->max_length))));
			t895 * L_99 = V_6;
			t737* L_100 = V_13;
			t737* L_101 = V_13;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_99, L_100, 0, (((int32_t)(((t121 *)L_101)->max_length))));
			t895 * L_102 = V_6;
			t737* L_103 = V_4;
			t737* L_104 = V_4;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_102, L_103, 0, (((int32_t)(((t121 *)L_104)->max_length))));
		}

IL_025c:
		{
			t895 * L_105 = V_6;
			t737* L_106 = V_1;
			t737* L_107 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_105, L_106, 0, (((int32_t)(((t121 *)L_107)->max_length))));
			t895 * L_108 = V_6;
			t737* L_109 = V_1;
			t737* L_110 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_108, L_109, 0, (((int32_t)(((t121 *)L_110)->max_length))));
			t739 * L_111 = (__this->f0);
			int32_t L_112 = V_7;
			t737* L_113 = (t737*)VirtFuncInvoker1< t737*, int32_t >::Invoke(m4336_MI_var, L_111, L_112);
			V_14 = L_113;
			t895 * L_114 = V_6;
			t737* L_115 = V_14;
			t737* L_116 = V_14;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_114, L_115, 0, (((int32_t)(((t121 *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			t739 * L_119 = (__this->f0);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4337_MI_var, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			t895 * L_121 = V_6;
			t737* L_122 = V_1;
			t737* L_123 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_121, L_122, 0, (((int32_t)(((t121 *)L_123)->max_length))));
			t895 * L_124 = V_6;
			t737* L_125 = V_0;
			t737* L_126 = V_0;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_124, L_125, 0, (((int32_t)(((t121 *)L_126)->max_length))));
			t895 * L_127 = V_6;
			t737* L_128 = (__this->f4);
			t737* L_129 = (__this->f4);
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_127, L_128, 0, (((int32_t)(((t121 *)L_129)->max_length))));
			t895 * L_130 = V_6;
			t737* L_131 = V_0;
			t737* L_132 = V_0;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_130, L_131, 0, (((int32_t)(((t121 *)L_132)->max_length))));
			t895 * L_133 = V_6;
			t737* L_134 = V_1;
			t737* L_135 = V_1;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_133, L_134, 0, (((int32_t)(((t121 *)L_135)->max_length))));
			t895 * L_136 = V_6;
			t737* L_137 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m4338_MI, L_136);
			V_22 = L_137;
			IL2CPP_LEAVE(0x3F7, FINALLY_0302);
		}

IL_02fd:
		{
			; // IL_02fd: leave IL_0311
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0302;
	}

FINALLY_0302:
	{ // begin finally (depth: 1)
		{
			t895 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			t895 * L_139 = V_6;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_139);
		}

IL_0310:
		{
			IL2CPP_END_FINALLY(770)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(770)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0311:
	{
		t736 * L_140 = m3605(NULL, &m3605_MI);
		t737* L_141 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_140, (t2*) &_stringLiteral249);
		V_15 = L_141;
		t736 * L_142 = m3605(NULL, &m3605_MI);
		t737* L_143 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_142, (t2*) &_stringLiteral250);
		V_16 = L_143;
		t895 * L_144 = (t895 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t895_TI));
		m4331(L_144, ((int32_t)1024), &m4331_MI);
		V_17 = L_144;
	}

IL_033f:
	try
	{ // begin try (depth: 1)
		{
			V_18 = 0;
			goto IL_03c3;
		}

IL_0347:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t736_TI));
			t736 * L_145 = m4315(NULL, &m4315_MI);
			t31 * L_146 = (__this->f1);
			int32_t L_147 = V_18;
			t2* L_148 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4333_MI_var, L_146, L_147);
			t737* L_149 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t737* L_150 = m3620(NULL, L_149, &m3620_MI);
			V_19 = L_150;
			t739 * L_151 = (__this->f0);
			int32_t L_152 = V_18;
			t737* L_153 = (t737*)VirtFuncInvoker1< t737*, int32_t >::Invoke(m4336_MI_var, L_151, L_152);
			V_20 = L_153;
			t737* L_154 = V_20;
			t737* L_155 = m3620(NULL, L_154, &m3620_MI);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			t895 * L_157 = V_17;
			t737* L_158 = V_15;
			t737* L_159 = V_15;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_157, L_158, 0, (((int32_t)(((t121 *)L_159)->max_length))));
		}

IL_0393:
		{
			t895 * L_160 = V_17;
			t737* L_161 = V_19;
			t737* L_162 = V_19;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_160, L_161, 0, (((int32_t)(((t121 *)L_162)->max_length))));
			t895 * L_163 = V_17;
			t737* L_164 = V_16;
			t737* L_165 = V_16;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_163, L_164, 0, (((int32_t)(((t121 *)L_165)->max_length))));
			t895 * L_166 = V_17;
			t737* L_167 = V_21;
			t737* L_168 = V_21;
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, L_166, L_167, 0, (((int32_t)(((t121 *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			t739 * L_171 = (__this->f0);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4337_MI_var, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			t895 * L_173 = V_17;
			t737* L_174 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m4338_MI, L_173);
			V_22 = L_174;
			IL2CPP_LEAVE(0x3F7, FINALLY_03e8);
		}

IL_03e3:
		{
			; // IL_03e3: leave IL_03f7
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_03e8;
	}

FINALLY_03e8:
	{ // begin finally (depth: 1)
		{
			t895 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			t895 * L_176 = V_17;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_176);
		}

IL_03f6:
		{
			IL2CPP_END_FINALLY(1000)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1000)
	{
		IL2CPP_JUMP_TBL(0x3F7, IL_03f7)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_03f7:
	{
		t737* L_177 = V_22;
		return L_177;
	}
}
#include "t740.h"
#ifndef _MSC_VER
#else
#endif

#include "t121MD.h"
extern MethodInfo m3622_MI;
extern MethodInfo m4343_MI;
extern MethodInfo m3623_MI;
extern MethodInfo m3619_MI;
extern MethodInfo m3625_MI;
struct t121;
#include "t132.h"
extern "C" int32_t m4344_gshared (t9 * __this , t737* p0, uint8_t p1, MethodInfo* method);
#define m4344(__this , p0, p1, method) (( int32_t (*) (t9 * , t737*, uint8_t, MethodInfo*))m4344_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m4344_GM;


extern MethodInfo m3618_MI;
extern "C" void m3618 (t9 * __this , MethodInfo* method)
{
	{
		t736 * L_0 = m3605(NULL, &m3605_MI);
		t737* L_1 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_0, (t2*) &_stringLiteral252);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f0 = L_1;
		t736 * L_2 = m3605(NULL, &m3605_MI);
		t737* L_3 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_2, (t2*) &_stringLiteral253);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1 = L_3;
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f2 = ((int32_t)37);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3 = ((int32_t)43);
		t736 * L_4 = m3605(NULL, &m3605_MI);
		t737* L_5 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_4, (t2*) &_stringLiteral254);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f4 = L_5;
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f5 = ((int32_t)61);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f6 = ((int32_t)95);
		t736 * L_6 = m3605(NULL, &m3605_MI);
		t737* L_7 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_6, (t2*) &_stringLiteral255);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f7 = L_7;
		return;
	}
}
extern TypeInfo* t737_TI_var;
extern "C" t737* m3619 (t9 * __this , uint8_t p0, t737* p1, MethodInfo* method)
{
	static bool m3619_init;
	if (!m3619_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m3619_init = true;
	}
	t737* V_0 = {0};
	{
		V_0 = ((t737*)SZArrayNew(t737_TI_var, 2));
		t737* L_0 = V_0;
		t737* L_1 = p1;
		uint8_t L_2 = p0;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		t737* L_4 = V_0;
		t737* L_5 = p1;
		uint8_t L_6 = p0;
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		t737* L_8 = V_0;
		return L_8;
	}
}
extern "C" t737* m3620 (t9 * __this , t737* p0, MethodInfo* method)
{
	{
		t737* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		uint8_t L_1 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f2;
		uint8_t L_2 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3;
		t737* L_3 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f4;
		t737* L_4 = m3622(NULL, L_0, L_1, L_2, L_3, 0, &m3622_MI);
		return L_4;
	}
}
extern "C" t2* m3621 (t9 * __this , t2* p0, t736 * p1, MethodInfo* method)
{
	t737* V_0 = {0};
	{
		t736 * L_0 = p1;
		t2* L_1 = p0;
		t737* L_2 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		uint8_t L_3 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f5;
		uint8_t L_4 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f6;
		t737* L_5 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f7;
		t737* L_6 = m3622(NULL, L_2, L_3, L_4, L_5, 1, &m3622_MI);
		V_0 = L_6;
		t736 * L_7 = m3605(NULL, &m3605_MI);
		t737* L_8 = V_0;
		t737* L_9 = V_0;
		t2* L_10 = (t2*)VirtFuncInvoker3< t2*, t737*, int32_t, int32_t >::Invoke(&m4307_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return L_10;
	}
}
extern "C" t737* m3622 (t9 * __this , t737* p0, uint8_t p1, uint8_t p2, t737* p3, bool p4, MethodInfo* method)
{
	t895 * V_0 = {0};
	int32_t V_1 = 0;
	t737* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	t895 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	t895 * G_B8_1 = {0};
	t737* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t895 * G_B10_2 = {0};
	{
		t737* L_0 = p0;
		t895 * L_1 = (t895 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t895_TI));
		m4331(L_1, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))*(int32_t)2)), &m4331_MI);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			t737* L_2 = p0;
			int32_t L_3 = V_1;
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			t895 * L_5 = V_0;
			uint8_t L_6 = p2;
			VirtActionInvoker1< uint8_t >::Invoke(&m4343_MI, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			t737* L_7 = p0;
			int32_t L_8 = V_1;
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			t737* L_10 = p0;
			int32_t L_11 = V_1;
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			t737* L_13 = p3;
			t737* L_14 = p0;
			int32_t L_15 = V_1;
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			bool L_17 = m3623(NULL, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), &m3623_MI);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			t895 * L_18 = V_0;
			uint8_t L_19 = p1;
			VirtActionInvoker1< uint8_t >::Invoke(&m4343_MI, L_18, L_19);
			t895 * L_20 = V_0;
			t737* L_21 = p0;
			int32_t L_22 = V_1;
			int32_t L_23 = L_22;
			bool L_24 = p4;
			G_B8_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
			G_B8_1 = L_20;
			if (!L_24)
			{
				G_B9_0 = ((int32_t)((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23))));
				G_B9_1 = L_20;
				goto IL_0066;
			}
		}

IL_005c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t737* L_25 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t737* L_26 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
			t737* L_27 = m3619(NULL, G_B10_1, G_B10_0, &m3619_MI);
			VirtActionInvoker3< t737*, int32_t, int32_t >::Invoke(&m4332_MI, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			t895 * L_28 = V_0;
			t737* L_29 = p0;
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			VirtActionInvoker1< uint8_t >::Invoke(&m4343_MI, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			t737* L_34 = p0;
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t121 *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			t895 * L_35 = V_0;
			t737* L_36 = (t737*)VirtFuncInvoker0< t737* >::Invoke(&m4338_MI, L_35);
			V_2 = L_36;
			IL2CPP_LEAVE(0xB0, FINALLY_00a3);
		}

IL_009e:
		{
			; // IL_009e: leave IL_00b0
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		{
			t895 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			t895 * L_38 = V_0;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_38);
		}

IL_00af:
		{
			IL2CPP_END_FINALLY(163)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_00b0:
	{
		t737* L_39 = V_2;
		return L_39;
	}
}
extern MethodInfo* m4344_MI_var;
extern "C" bool m3623 (t9 * __this , t737* p0, uint8_t p1, MethodInfo* method)
{
	static bool m3623_init;
	if (!m3623_init)
	{
		m4344_MI_var = il2cpp_codegen_genericmethod_get_method(&m4344_GM);
		m3623_init = true;
	}
	{
		t737* L_0 = p0;
		uint8_t L_1 = p1;
		int32_t L_2 = m4344(NULL, L_0, L_1, m4344_MI_var);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m3624 (t9 * __this , t2* p0, t736 * p1, MethodInfo* method)
{
	{
		t736 * L_0 = p1;
		t2* L_1 = p0;
		t737* L_2 = (t737*)VirtFuncInvoker1< t737*, t2* >::Invoke(&m4330_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		bool L_3 = m3625(NULL, L_2, &m3625_MI);
		return L_3;
	}
}
extern "C" bool m3625 (t9 * __this , t737* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		t737* L_0 = p0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		t737* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_5))) <= ((int32_t)((int32_t)126))))
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		return 0;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		t737* L_8 = p0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
#include "t741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t741_TI;
#include "t741MD.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void t741_marshal(const t741& unmarshaled, t741_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t741_marshal_back(const t741_marshaled& marshaled, t741& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void t741_marshal_cleanup(t741_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t742.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t742_TI;

extern MethodInfo m2948_MI;


extern "C" t2* m3626 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		return L_2;
	}
}
#include "t173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t173_TI;

extern MethodInfo m3628_MI;


extern "C" void m3627 (t173 * __this, MethodInfo* method)
{
	{
		m3751(__this, &m3751_MI);
		return;
	}
}
extern "C" void m3628 (t173 * __this, MethodInfo* method)
{
	typedef void (*m3628_ftn) (t173 *);
	static m3628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3629_MI;
extern "C" void m3629 (t173 * __this, MethodInfo* method)
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
		m3628(__this, &m3628_MI);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		m646(__this, &m646_MI);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void t173_marshal(const t173& unmarshaled, t173_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t173_marshal_back(const t173_marshaled& marshaled, t173& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void t173_marshal_cleanup(t173_marshaled& marshaled)
{
}
#include "t743.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t743_TI;
#include "t743MD.h"



extern MethodInfo m3630_MI;
extern "C" void m3630 (t743 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3631_MI;
extern "C" void m3631 (t743 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3631((t743 *)__this->f9,p0, p1, p2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2* p1, int32_t p2, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1, p2,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t743(Il2CppObject* delegate, t2* p0, t2* p1, int32_t p2)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	char* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string(p0);

	// Marshaling of parameter 'p1' to native representation
	char* _p1_marshaled = { 0 };
	_p1_marshaled = il2cpp_codegen_marshal_string(p1);

	// Marshaling of parameter 'p2' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled, _p1_marshaled, p2);

	// Marshaling cleanup of parameter 'p0' native representation
	il2cpp_codegen_marshal_free(_p0_marshaled);
	_p0_marshaled = NULL;

	// Marshaling cleanup of parameter 'p1' native representation
	il2cpp_codegen_marshal_free(_p1_marshaled);
	_p1_marshaled = NULL;

	// Marshaling cleanup of parameter 'p2' native representation

}
extern MethodInfo m3632_MI;
extern "C" t9 * m3632 (t743 * __this, t2* p0, t2* p1, int32_t p2, t477 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = Box(InitializedTypeInfo(&t692_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m3633_MI;
extern "C" void m3633 (t743 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t174_TI;
#include "t174MD.h"

extern MethodInfo m3634_MI;


extern MethodInfo m1122_MI;
extern "C" void m1122 (t9 * __this , MethodInfo* method)
{
	typedef void (*m1122_ftn) ();
	static m1122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
extern MethodInfo m629_MI;
extern "C" int32_t m629 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m629_ftn) ();
	static m629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
extern MethodInfo m593_MI;
extern "C" t2* m593 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m593_ftn) ();
	static m593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
extern MethodInfo m630_MI;
extern "C" void m630 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3634(NULL, (t2*)NULL, L_0, 0, 1, &m3634_MI);
		return;
	}
}
extern MethodInfo m594_MI;
extern "C" t173 * m594 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t173 * L_1 = m3634(NULL, L_0, (-1), 0, 0, &m3634_MI);
		return L_1;
	}
}
extern "C" t173 * m3634 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t173 * (*m3634_ftn) (t2*, int32_t, bool, bool);
	static m3634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m642_MI;
extern "C" bool m642 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m642_ftn) ();
	static m642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2858_MI;
extern "C" bool m2858 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2858_ftn) ();
	static m2858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1147_MI;
extern "C" int32_t m1147 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m1147_ftn) ();
	static m1147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1123_MI;
extern "C" t2* m1123 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m1123_ftn) ();
	static m1123_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1123_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3635_MI;
extern "C" void m3635 (t9 * __this , t2* p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	t743 * V_0 = {0};
	t743 * V_1 = {0};
	{
		bool L_0 = p3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t743 * L_1 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f0;
		V_0 = L_1;
		t743 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		t743 * L_3 = V_0;
		t2* L_4 = p0;
		t2* L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3631_MI, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		t743 * L_7 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f1;
		V_1 = L_7;
		t743 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		t743 * L_9 = V_1;
		t2* L_10 = p0;
		t2* L_11 = p1;
		int32_t L_12 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3631_MI, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
#include "t145.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t145_TI;
#include "t145MD.h"

extern MethodInfo m3716_MI;


extern MethodInfo m3636_MI;
extern "C" void m3636 (t145 * __this, MethodInfo* method)
{
	{
		m3716(__this, &m3716_MI);
		return;
	}
}
extern MethodInfo m416_MI;
extern "C" bool m416 (t145 * __this, MethodInfo* method)
{
	typedef bool (*m416_ftn) (t145 *);
	static m416_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m416_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m437_MI;
extern "C" void m437 (t145 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m437_ftn) (t145 *, bool);
	static m437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2528_MI;
extern "C" bool m2528 (t145 * __this, MethodInfo* method)
{
	typedef bool (*m2528_ftn) (t145 *);
	static m2528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
#include "t151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t151_TI;
#include "t151MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
