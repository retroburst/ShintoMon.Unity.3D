#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t674.h"
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
extern TypeInfo t674_TI;
#include "t674MD.h"


#include "t121.h"

#include "t675.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t675_TI;
#include "t675MD.h"

#include "t676.h"
#include "t122.h"
#include "t173MD.h"
extern MethodInfo m3563_MI;


extern MethodInfo m3108_MI;
extern "C" void m3108 (t675 * __this, MethodInfo* method)
{
	{
		m3563(__this, &m3563_MI);
		return;
	}
}
extern MethodInfo m3109_MI;
extern "C" t676 * m3109 (t675 * __this, MethodInfo* method)
{
	typedef t676 * (*m3109_ftn) (t675 *);
	static m3109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3110_MI;
extern "C" void m3110 (t675 * __this, MethodInfo* method)
{
	typedef void (*m3110_ftn) (t675 *);
	static m3110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
#include "t677.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t677_TI;
#include "t677MD.h"

#include "t57.h"
#include "t2.h"
#include "t126.h"
#include "UnityEngine_ArrayTypes.h"
#include "t676MD.h"
extern MethodInfo m3114_MI;
extern MethodInfo m3116_MI;


extern MethodInfo m3111_MI;
extern "C" void m3111 (t677 * __this, MethodInfo* method)
{
	{
		m3563(__this, &m3563_MI);
		return;
	}
}
extern MethodInfo m3112_MI;
extern "C" t57 * m3112 (t677 * __this, MethodInfo* method)
{
	{
		t676 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t57 * L_3 = m3114(L_0, L_1, L_2, &m3114_MI);
		return L_3;
	}
}
extern MethodInfo m3113_MI;
extern "C" t131* m3113 (t677 * __this, MethodInfo* method)
{
	{
		t676 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t131* L_3 = m3116(L_0, L_1, L_2, &m3116_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t676_TI;

#include "t871.h"
#include "t125.h"
#include "t556.h"
extern TypeInfo t871_TI;
extern TypeInfo t556_TI;
#include "t871MD.h"
#include "t2MD.h"
#include "t556MD.h"
extern MethodInfo m4203_MI;
extern MethodInfo m2699_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m3115_MI;


extern "C" t57 * m3114 (t676 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t871 * L_1 = (t871 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t871_TI));
		m4203(L_1, (t2*) &_stringLiteral157, &m4203_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2699(L_2, &m2699_MI);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		t556 * L_4 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_4, (t2*) &_stringLiteral158, &m2885_MI);
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
		t871 * L_6 = (t871 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t871_TI));
		m4203(L_6, (t2*) &_stringLiteral159, &m4203_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t2* L_7 = p0;
		t126 * L_8 = p1;
		t57 * L_9 = m3115(__this, L_7, L_8, &m3115_MI);
		return L_9;
	}
}
extern "C" t57 * m3115 (t676 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3115_ftn) (t676 *, t2*, t126 *);
	static m3115_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3115_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t131* m3116 (t676 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t131* (*m3116_ftn) (t676 *, t2*, t126 *);
	static m3116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
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
extern MethodInfo m3117_MI;
extern "C" void m3117 (t42 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3118_MI;
extern "C" t2* m3118 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m3118_ftn) (int32_t);
	static m3118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
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
extern MethodInfo m3119_MI;
extern "C" int32_t m3119 (t9 * __this , t221* p0, MethodInfo* method)
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
#include "t298.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t298_TI;
#include "t298MD.h"



#include "t678.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t678_TI;
#include "t678MD.h"



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
extern MethodInfo m3120_MI;
extern "C" t2* m3120 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3120_ftn) ();
	static m3120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
#include "t176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t176_TI;
#include "t176MD.h"

#include "t123.h"
#include "t679MD.h"
extern MethodInfo m3687_MI;


extern MethodInfo m596_MI;
extern "C" void m596 (t176 * __this, float p0, MethodInfo* method)
{
	{
		m3687(__this, &m3687_MI);
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
		m3687(__this, &m3687_MI);
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
		m3687(__this, &m3687_MI);
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
extern MethodInfo m3122_MI;
extern MethodInfo m646_MI;


extern MethodInfo m3121_MI;
extern "C" void m3121 (t171 * __this, MethodInfo* method)
{
	{
		m3687(__this, &m3687_MI);
		return;
	}
}
extern "C" void m3122 (t171 * __this, MethodInfo* method)
{
	typedef void (*m3122_ftn) (t171 *);
	static m3122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3123_MI;
extern "C" void m3123 (t171 * __this, MethodInfo* method)
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
		m3122(__this, &m3122_MI);
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
#include "t680.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t680_TI;
#include "t680MD.h"

#include "t57MD.h"
extern MethodInfo m3641_MI;
extern MethodInfo m3125_MI;
extern MethodInfo m3128_MI;


extern MethodInfo m3124_MI;
extern "C" void m3124 (t680 * __this, MethodInfo* method)
{
	{
		m3641(__this, &m3641_MI);
		m3125(NULL, __this, &m3125_MI);
		return;
	}
}
extern "C" void m3125 (t9 * __this , t680 * p0, MethodInfo* method)
{
	typedef void (*m3125_ftn) (t680 *);
	static m3125_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3125_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3126_MI;
extern "C" t680 * m3126 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t680 * (*m3126_ftn) (t2*);
	static m3126_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3126_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3127_MI;
extern "C" t680 * m3127 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t680 * L_1 = m3128(NULL, L_0, &m3128_MI);
		return L_1;
	}
}
extern "C" t680 * m3128 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t680 * (*m3128_ftn) (t126 *);
	static m3128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void t680_marshal(const t680& unmarshaled, t680_marshaled& marshaled)
{
}
void t680_marshal_back(const t680_marshaled& marshaled, t680& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void t680_marshal_cleanup(t680_marshaled& marshaled)
{
}
#include "t159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t159_TI;
#include "t159MD.h"

#include "t681.h"


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
extern MethodInfo m3129_MI;
extern "C" int32_t m3129 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3129_ftn) ();
	static m3129_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3129_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_activeColorSpace()");
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
#include "t682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t682_TI;
#include "t682MD.h"

#include "t47.h"
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t47_TI;
#include "t125MD.h"
#include "t123MD.h"
#include "t47MD.h"
extern MethodInfo m3138_MI;
extern MethodInfo m4204_MI;
extern MethodInfo m3140_MI;
extern MethodInfo m3142_MI;
extern MethodInfo m3144_MI;
extern MethodInfo m3130_MI;
extern MethodInfo m4205_MI;
extern MethodInfo m3132_MI;
extern MethodInfo m3134_MI;
extern MethodInfo m3136_MI;
extern MethodInfo m4206_MI;
extern MethodInfo m413_MI;
extern MethodInfo m3467_MI;
extern MethodInfo m3471_MI;
extern MethodInfo m3148_MI;


extern "C" float m3130 (t682 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3131_MI;
extern "C" void m3131 (t682 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m3132 (t682 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3133_MI;
extern "C" void m3133 (t682 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3134 (t682 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3135_MI;
extern "C" void m3135 (t682 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m3136 (t682 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3137_MI;
extern "C" void m3137 (t682 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3138 (t682 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3139_MI;
extern "C" void m3139 (t682 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m3140 (t682 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3141_MI;
extern "C" void m3141 (t682 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" int32_t m3142 (t682 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3143_MI;
extern "C" void m3143 (t682 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" int32_t m3144 (t682 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3145_MI;
extern "C" void m3145 (t682 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3146_MI;
extern "C" int32_t m3146 (t682 * __this, MethodInfo* method)
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
		int32_t L_0 = m3138(__this, &m3138_MI);
		V_0 = L_0;
		int32_t L_1 = m4204((&V_0), &m4204_MI);
		int32_t L_2 = m3140(__this, &m3140_MI);
		V_1 = L_2;
		int32_t L_3 = m4204((&V_1), &m4204_MI);
		int32_t L_4 = m3142(__this, &m3142_MI);
		V_2 = L_4;
		int32_t L_5 = m4204((&V_2), &m4204_MI);
		int32_t L_6 = m3144(__this, &m3144_MI);
		V_3 = L_6;
		int32_t L_7 = m4204((&V_3), &m4204_MI);
		float L_8 = m3130(__this, &m3130_MI);
		V_4 = L_8;
		int32_t L_9 = m4205((&V_4), &m4205_MI);
		float L_10 = m3132(__this, &m3132_MI);
		V_5 = L_10;
		int32_t L_11 = m4205((&V_5), &m4205_MI);
		float L_12 = m3134(__this, &m3134_MI);
		V_6 = L_12;
		int32_t L_13 = m4205((&V_6), &m4205_MI);
		float L_14 = m3136(__this, &m3136_MI);
		V_7 = L_14;
		int32_t L_15 = m4205((&V_7), &m4205_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
extern MethodInfo m3147_MI;
extern "C" bool m3147 (t682 * __this, t9 * p0, MethodInfo* method)
{
	t682  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t47  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t682_TI))))
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
		V_0 = ((*(t682 *)((t682 *)UnBox (L_1, InitializedTypeInfo(&t682_TI)))));
		int32_t L_2 = m3138(__this, &m3138_MI);
		V_1 = L_2;
		int32_t L_3 = m3138((&V_0), &m3138_MI);
		bool L_4 = m4206((&V_1), L_3, &m4206_MI);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = m3140(__this, &m3140_MI);
		V_2 = L_5;
		int32_t L_6 = m3140((&V_0), &m3140_MI);
		bool L_7 = m4206((&V_2), L_6, &m4206_MI);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = m3142(__this, &m3142_MI);
		V_3 = L_8;
		int32_t L_9 = m3142((&V_0), &m3142_MI);
		bool L_10 = m4206((&V_3), L_9, &m4206_MI);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = m3144(__this, &m3144_MI);
		V_4 = L_11;
		int32_t L_12 = m3144((&V_0), &m3144_MI);
		bool L_13 = m4206((&V_4), L_12, &m4206_MI);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = m3130(__this, &m3130_MI);
		float L_15 = m3132(__this, &m3132_MI);
		float L_16 = m3134(__this, &m3134_MI);
		float L_17 = m3136(__this, &m3136_MI);
		m413((&V_5), L_14, L_15, L_16, L_17, &m413_MI);
		float L_18 = m3130((&V_0), &m3130_MI);
		float L_19 = m3132((&V_0), &m3132_MI);
		float L_20 = m3134((&V_0), &m3134_MI);
		float L_21 = m3136((&V_0), &m3136_MI);
		t47  L_22 = {0};
		m413(&L_22, L_18, L_19, L_20, L_21, &m413_MI);
		t47  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t47_TI), &L_23);
		bool L_25 = m3467((&V_5), L_24, &m3467_MI);
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
extern "C" bool m3148 (t9 * __this , t682  p0, t682  p1, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = m3138((&p0), &m3138_MI);
		int32_t L_1 = m3138((&p1), &m3138_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = m3140((&p0), &m3140_MI);
		int32_t L_3 = m3140((&p1), &m3140_MI);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = m3142((&p0), &m3142_MI);
		int32_t L_5 = m3142((&p1), &m3142_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = m3144((&p0), &m3144_MI);
		int32_t L_7 = m3144((&p1), &m3144_MI);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = m3130((&p0), &m3130_MI);
		float L_9 = m3132((&p0), &m3132_MI);
		float L_10 = m3134((&p0), &m3134_MI);
		float L_11 = m3136((&p0), &m3136_MI);
		t47  L_12 = {0};
		m413(&L_12, L_8, L_9, L_10, L_11, &m413_MI);
		float L_13 = m3130((&p1), &m3130_MI);
		float L_14 = m3132((&p1), &m3132_MI);
		float L_15 = m3134((&p1), &m3134_MI);
		float L_16 = m3136((&p1), &m3136_MI);
		t47  L_17 = {0};
		m413(&L_17, L_13, L_14, L_15, L_16, &m413_MI);
		bool L_18 = m3471(NULL, L_12, L_17, &m3471_MI);
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
extern MethodInfo m3149_MI;
extern "C" bool m3149 (t9 * __this , t682  p0, t682  p1, MethodInfo* method)
{
	{
		t682  L_0 = p0;
		t682  L_1 = p1;
		bool L_2 = m3148(NULL, L_0, L_1, &m3148_MI);
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
extern MethodInfo m2529_MI;
extern "C" int32_t m2529 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2529_ftn) (t144 *);
	static m2529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2530_MI;
extern "C" int32_t m2530 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2530_ftn) (t144 *);
	static m2530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
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
extern MethodInfo m2899_MI;
extern "C" float m2899 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2899_ftn) ();
	static m2899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
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
extern MethodInfo m3151_MI;
extern MethodInfo m379_MI;
extern MethodInfo m3152_MI;


extern MethodInfo m3150_MI;
extern "C" void m3150 (t148 * __this, MethodInfo* method)
{
	{
		m3641(__this, &m3641_MI);
		return;
	}
}
extern "C" int32_t m3151 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3151_ftn) (t148 *);
	static m3151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m3152 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3152_ftn) (t148 *);
	static m3152_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3152_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2680_MI;
extern "C" int32_t m2680 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3151(NULL, __this, &m3151_MI);
		return L_0;
	}
}
extern MethodInfo m3153_MI;
extern "C" void m3153 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral160, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m2682_MI;
extern "C" int32_t m2682 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3152(NULL, __this, &m3152_MI);
		return L_0;
	}
}
extern MethodInfo m3154_MI;
extern "C" void m3154 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral160, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t425.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t425_TI;
#include "t425MD.h"

#include "t43.h"


extern MethodInfo m2586_MI;
extern "C" t425 * m2586 (t9 * __this , MethodInfo* method)
{
	typedef t425 * (*m2586_ftn) ();
	static m2586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2683_MI;
extern "C" t43  m2683 (t425 * __this, float p0, float p1, MethodInfo* method)
{
	typedef t43  (*m2683_ftn) (t425 *, float, float);
	static m2683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t44_TI;
#include "t44MD.h"

extern MethodInfo m3156_MI;
extern MethodInfo m3157_MI;
extern MethodInfo m3158_MI;
extern MethodInfo m3159_MI;
extern MethodInfo m3155_MI;
extern MethodInfo m3162_MI;
extern MethodInfo m3164_MI;
extern MethodInfo m3165_MI;
extern MethodInfo m3166_MI;
extern MethodInfo m3160_MI;


extern MethodInfo m441_MI;
extern "C" void m441 (t44 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m3150(__this, &m3150_MI);
		m3155(NULL, __this, &m3155_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3162_MI, __this, L_0);
		int32_t L_1 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3164_MI, __this, L_1);
		int32_t L_2 = p2;
		m3165(__this, L_2, &m3165_MI);
		m3166(__this, 7, &m3166_MI);
		int32_t L_3 = m3129(NULL, &m3129_MI);
		m3160(NULL, __this, ((((int32_t)L_3) == ((int32_t)1))? 1 : 0), &m3160_MI);
		return;
	}
}
extern "C" void m3155 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef void (*m3155_ftn) (t44 *);
	static m3155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3155_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(p0);
}
extern "C" int32_t m3156 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3156_ftn) (t44 *);
	static m3156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3157 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3157_ftn) (t44 *, int32_t);
	static m3157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m3158 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3158_ftn) (t44 *);
	static m3158_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3158_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3159 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3159_ftn) (t44 *, int32_t);
	static m3159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3160 (t9 * __this , t44 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3160_ftn) (t44 *, bool);
	static m3160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3161_MI;
extern "C" int32_t m3161 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3156(NULL, __this, &m3156_MI);
		return L_0;
	}
}
extern "C" void m3162 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3157(NULL, __this, L_0, &m3157_MI);
		return;
	}
}
extern MethodInfo m3163_MI;
extern "C" int32_t m3163 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3158(NULL, __this, &m3158_MI);
		return L_0;
	}
}
extern "C" void m3164 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3159(NULL, __this, L_0, &m3159_MI);
		return;
	}
}
extern "C" void m3165 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3165_ftn) (t44 *, int32_t);
	static m3165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_depth(System.Int32)");
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
extern "C" void m3166 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3166_ftn) (t44 *, int32_t);
	static m3166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)");
	_il2cpp_icall_func(__this, p0);
}
#include "t683.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t683_TI;
#include "t683MD.h"



#include "t684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t684_TI;
#include "t684MD.h"



#include "t197.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t197_TI;
#include "t197MD.h"



#include "t685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t685_TI;
#include "t685MD.h"

extern MethodInfo m3168_MI;


extern MethodInfo m3167_MI;
extern "C" t684 * m3167 (t685 * __this, t13  p0, MethodInfo* method)
{
	{
		t684 * L_0 = m3168(NULL, __this, (&p0), &m3168_MI);
		return L_0;
	}
}
extern "C" t684 * m3168 (t9 * __this , t685 * p0, t13 * p1, MethodInfo* method)
{
	typedef t684 * (*m3168_ftn) (t685 *, t13 *);
	static m3168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t686_TI;
#include "t686MD.h"



extern MethodInfo m3169_MI;
extern "C" void m3169 (t686 * __this, t43  p0, float p1, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t687_TI;
#include "t687MD.h"



extern MethodInfo m3170_MI;
extern "C" void m3170 (t687 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t688_TI;
#include "t688MD.h"

extern MethodInfo m336_MI;
extern MethodInfo m3172_MI;
extern MethodInfo m3173_MI;


extern MethodInfo m3171_MI;
extern "C" void m3171 (t688 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3172(__this, &m3172_MI);
		return;
	}
}
extern "C" void m3172 (t688 * __this, MethodInfo* method)
{
	typedef void (*m3172_ftn) (t688 *);
	static m3172_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3172_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3173 (t688 * __this, MethodInfo* method)
{
	typedef void (*m3173_ftn) (t688 *);
	static m3173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3174_MI;
extern "C" void m3174 (t688 * __this, MethodInfo* method)
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
		m3173(__this, &m3173_MI);
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
void t688_marshal(const t688& unmarshaled, t688_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t688_marshal_back(const t688_marshaled& marshaled, t688& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void t688_marshal_cleanup(t688_marshaled& marshaled)
{
}
#include "t689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t689_TI;
#include "t689MD.h"



extern MethodInfo m3175_MI;
extern "C" void m3175 (t689 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t690_TI;
#include "t690MD.h"

#include "t58.h"
#include "t463.h"


extern MethodInfo m3176_MI;
extern "C" void m3176 (t690 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3177_MI;
extern "C" void m3177 (t690 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3177((t690 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t690(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3178_MI;
extern "C" t9 * m3178 (t690 * __this, int32_t p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3179_MI;
extern "C" void m3179 (t690 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t691_TI;
#include "t691MD.h"

#include "t269.h"
#include "t692.h"
#include "t693.h"
#include "t694.h"
#include "t696.h"
#include "t697.h"
#include "t471.h"
#include "t589.h"
extern TypeInfo t707_TI;
extern TypeInfo t2_TI;
extern TypeInfo t693_TI;
extern TypeInfo t269_TI;
extern TypeInfo t699_TI;
extern TypeInfo t701_TI;
extern TypeInfo t696_TI;
#include "t707MD.h"
#include "t692MD.h"
#include "t693MD.h"
#include "t269MD.h"
#include "t699MD.h"
#include "t471MD.h"
#include "t695MD.h"
extern Il2CppType t701_0_0_0;
extern MethodInfo m3238_MI;
extern MethodInfo m406_MI;
extern MethodInfo m3232_MI;
extern MethodInfo m3297_MI;
extern MethodInfo m4207_MI;
extern MethodInfo m4200_MI;
extern MethodInfo m1084_MI;
extern MethodInfo m3181_MI;
extern MethodInfo m3190_MI;
extern MethodInfo m3183_MI;
extern MethodInfo m3363_MI;
extern MethodInfo m3359_MI;
extern MethodInfo m3186_MI;
extern MethodInfo m3187_MI;
extern MethodInfo m3192_MI;
extern MethodInfo m3182_MI;
extern MethodInfo m3193_MI;


extern MethodInfo m3180_MI;
extern "C" void m3180 (t9 * __this , MethodInfo* method)
{
	{
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f0 = (10.0f);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral161);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f4 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral162);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f5 = L_1;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral163);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f6 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral164);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f7 = L_3;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral165);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f8 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral166);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f9 = L_5;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, (t2*) &_stringLiteral167);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f10 = L_6;
		t693 * L_7 = (t693 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t693_TI));
		m4200(L_7, &m4200_MI);
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f11 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t269_TI));
		t269  L_8 = m1084(NULL, &m1084_MI);
		m3181(NULL, L_8, &m3181_MI);
		return;
	}
}
extern "C" void m3181 (t9 * __this , t269  p0, MethodInfo* method)
{
	{
		t269  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern "C" void m3182 (t9 * __this , t692 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		m3238(NULL, &m3238_MI);
		t692 * L_0 = p0;
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		t692 * L_2 = m3232(NULL, &m3232_MI);
		p0 = L_2;
	}

IL_0017:
	{
		t692 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f2 = L_3;
		t692 * L_4 = p0;
		m3297(L_4, &m3297_MI);
		return;
	}
}
extern "C" t692 * m3183 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		m3238(NULL, &m3238_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		t692 * L_0 = ((t691_SFs*)InitializedTypeInfo(&t691_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3184_MI;
extern "C" void m3184 (t9 * __this , bool p0, MethodInfo* method)
{
	typedef void (*m3184_ftn) (bool);
	static m3184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3185_MI;
extern TypeInfo* t701_TI_var;
extern "C" void m3185 (t9 * __this , t690 * p0, int32_t p1, t692 * p2, int32_t p3, float p4, float p5, t694 * p6, MethodInfo* method)
{
	static bool m3185_init;
	if (!m3185_init)
	{
		t701_TI_var = il2cpp_codegen_class_from_type(&t701_0_0_0);
		m3185_init = true;
	}
	t692 * V_0 = {0};
	t701* V_1 = {0};
	{
		int32_t L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3190(NULL, L_0, 1, &m3190_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		t692 * L_1 = m3183(NULL, &m3183_MI);
		V_0 = L_1;
		t471 * L_2 = m3363(NULL, &m3363_MI);
		int32_t L_3 = m3359(L_2, &m3359_MI);
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
		t701* L_5 = ((t701*)SZArrayNew(t701_TI_var, 2));
		float L_6 = p4;
		t696 * L_7 = m3186(NULL, L_6, &m3186_MI);
		ArrayElementTypeCheck (L_5, L_7);
		*((t696 **)(t696 **)SZArrayLdElema(L_5, 0)) = (t696 *)L_7;
		t701* L_8 = L_5;
		float L_9 = p5;
		t696 * L_10 = m3187(NULL, L_9, &m3187_MI);
		ArrayElementTypeCheck (L_8, L_10);
		*((t696 **)(t696 **)SZArrayLdElema(L_8, 1)) = (t696 *)L_10;
		V_1 = L_8;
		int32_t L_11 = p1;
		t694 * L_12 = p6;
		t701* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3192(NULL, L_11, L_12, L_13, &m3192_MI);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = p1;
		t694 * L_15 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3192(NULL, L_14, L_15, (t701*)(t701*)NULL, &m3192_MI);
	}

IL_0056:
	{
		t692 * L_16 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		m3182(NULL, L_16, &m3182_MI);
		t690 * L_17 = p0;
		int32_t L_18 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3177_MI, L_17, L_18);
		t471 * L_19 = m3363(NULL, &m3363_MI);
		int32_t L_20 = m3359(L_19, &m3359_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3193(NULL, &m3193_MI);
	}

IL_0078:
	{
		t692 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		m3182(NULL, L_21, &m3182_MI);
		return;
	}
}
#include "t695.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t695_TI;

#include "t705.h"
#include "t696MD.h"
extern MethodInfo m3228_MI;


extern "C" t696 * m3186 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t696 * L_3 = (t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t696_TI));
		m3228(L_3, 0, L_2, &m3228_MI);
		return L_3;
	}
}
extern "C" t696 * m3187 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t696 * L_3 = (t696 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t696_TI));
		m3228(L_3, 1, L_2, &m3228_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t697_TI;
#include "t697MD.h"

#include "t698.h"
#include "t870.h"
extern TypeInfo t698_TI;
extern TypeInfo t870_TI;
#include "t698MD.h"
#include "t870MD.h"
extern MethodInfo m3213_MI;
extern MethodInfo m4208_MI;


extern MethodInfo m3188_MI;
extern "C" void m3188 (t697 * __this, MethodInfo* method)
{
	{
		t698 * L_0 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_0, &m3213_MI);
		__this->f0 = L_0;
		t693 * L_1 = (t693 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t693_TI));
		m4200(L_1, &m4200_MI);
		__this->f1 = L_1;
		t698 * L_2 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_2, &m3213_MI);
		__this->f2 = L_2;
		m336(__this, &m336_MI);
		t693 * L_3 = (__this->f1);
		t698 * L_4 = (__this->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_3, L_4);
		return;
	}
}
#include "t699.h"
#ifndef _MSC_VER
#else
#endif

#include "t700.h"
#include "t434.h"
#include "t702.h"
#include "t872.h"
#include "t703.h"
extern TypeInfo t694_TI;
extern TypeInfo t700_TI;
extern TypeInfo t434_TI;
extern TypeInfo t702_TI;
extern TypeInfo t129_TI;
extern TypeInfo t872_TI;
extern TypeInfo t137_TI;
#include "t694MD.h"
#include "t700MD.h"
#include "t434MD.h"
#include "t702MD.h"
#include "t129MD.h"
#include "t703MD.h"
#include "t872MD.h"
extern Il2CppType t700_0_0_0;
extern Il2CppType t872_0_0_0;
extern MethodInfo m3325_MI;
extern MethodInfo m3340_MI;
extern MethodInfo m4209_MI;
extern MethodInfo m2796_MI;
extern MethodInfo m4210_MI;
extern MethodInfo m4211_MI;
extern MethodInfo m4212_MI;
extern MethodInfo m3204_MI;
extern MethodInfo m3215_MI;
extern MethodInfo m3218_MI;
extern MethodInfo m2898_MI;
extern MethodInfo m3219_MI;
extern MethodInfo m3220_MI;
extern MethodInfo m3221_MI;
extern MethodInfo m3195_MI;
extern MethodInfo m3196_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3217_MI;
extern MethodInfo m2595_MI;
extern MethodInfo m620_MI;
extern MethodInfo m2596_MI;
extern MethodInfo m3197_MI;
extern MethodInfo m2590_MI;
extern MethodInfo m2591_MI;
extern MethodInfo m3198_MI;
extern MethodInfo m3199_MI;
extern Il2CppGenericMethod m4209_GM;
extern Il2CppGenericMethod m4210_GM;
extern Il2CppGenericMethod m4211_GM;
extern Il2CppGenericMethod m4213_GM;
extern Il2CppGenericMethod m4214_GM;
extern Il2CppGenericMethod m4215_GM;


extern MethodInfo m3189_MI;
extern TypeInfo* t700_TI_var;
extern MethodInfo* m4209_MI_var;
extern "C" void m3189 (t9 * __this , MethodInfo* method)
{
	static bool m3189_init;
	if (!m3189_init)
	{
		t700_TI_var = il2cpp_codegen_class_from_type(&t700_0_0_0);
		m4209_MI_var = il2cpp_codegen_genericmethod_get_method(&m4209_GM);
		m3189_init = true;
	}
	{
		t700 * L_0 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m4209(L_0, m4209_MI_var);
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f0 = L_0;
		t700 * L_1 = (t700 *)il2cpp_codegen_object_new (t700_TI_var);
		m4209(L_1, m4209_MI_var);
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f1 = L_1;
		t697 * L_2 = (t697 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t697_TI));
		m3188(L_2, &m3188_MI);
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2 = L_2;
		t434  L_3 = {0};
		m2796(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), &m2796_MI);
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f3 = L_3;
		return;
	}
}
extern MethodInfo* m4210_MI_var;
extern MethodInfo* m4211_MI_var;
extern "C" t697 * m3190 (t9 * __this , int32_t p0, bool p1, MethodInfo* method)
{
	static bool m3190_init;
	if (!m3190_init)
	{
		m4210_MI_var = il2cpp_codegen_genericmethod_get_method(&m4210_GM);
		m4211_MI_var = il2cpp_codegen_genericmethod_get_method(&m4211_GM);
		m3190_init = true;
	}
	t700 * V_0 = {0};
	t697 * V_1 = {0};
	t700 * G_B3_0 = {0};
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t700 * L_1 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t700 * L_2 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		t700 * L_3 = V_0;
		int32_t L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, t697 ** >::Invoke(m4210_MI_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		t697 * L_6 = (t697 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t697_TI));
		m3188(L_6, &m3188_MI);
		V_1 = L_6;
		t700 * L_7 = V_0;
		int32_t L_8 = p0;
		t697 * L_9 = V_1;
		VirtActionInvoker2< int32_t, t697 * >::Invoke(m4211_MI_var, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_10 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_11 = V_1;
		t698 * L_12 = (L_11->f0);
		L_10->f0 = L_12;
		t697 * L_13 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_14 = V_1;
		t693 * L_15 = (L_14->f1);
		L_13->f1 = L_15;
		t697 * L_16 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_17 = V_1;
		t698 * L_18 = (L_17->f2);
		L_16->f2 = L_18;
		t697 * L_19 = V_1;
		return L_19;
	}
}
extern MethodInfo m3191_MI;
extern "C" void m3191 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t697 * V_0 = {0};
	t698 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_1 = m3190(NULL, L_0, 0, &m3190_MI);
		V_0 = L_1;
		t471 * L_2 = m3363(NULL, &m3363_MI);
		int32_t L_3 = m3359(L_2, &m3359_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_4 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_5 = V_0;
		t698 * L_6 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_6, &m3213_MI);
		t698 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t698 * L_8 = V_1;
		L_4->f0 = L_8;
		t697 * L_9 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t693 * L_10 = (L_9->f1);
		VirtActionInvoker0::Invoke(&m4212_MI, L_10);
		t697 * L_11 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t693 * L_12 = (L_11->f1);
		t697 * L_13 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_14 = (L_13->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_12, L_14);
		t697 * L_15 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_16 = V_0;
		t698 * L_17 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_17, &m3213_MI);
		t698 * L_18 = L_17;
		V_1 = L_18;
		L_16->f2 = L_18;
		t698 * L_19 = V_1;
		L_15->f2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_20 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_21 = V_0;
		t698 * L_22 = (L_21->f0);
		L_20->f0 = L_22;
		t697 * L_23 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_24 = V_0;
		t693 * L_25 = (L_24->f1);
		L_23->f1 = L_25;
		t697 * L_26 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_27 = V_0;
		t698 * L_28 = (L_27->f2);
		L_26->f2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
extern "C" void m3192 (t9 * __this , int32_t p0, t694 * p1, t701* p2, MethodInfo* method)
{
	t697 * V_0 = {0};
	t698 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_1 = m3190(NULL, L_0, 1, &m3190_MI);
		V_0 = L_1;
		t471 * L_2 = m3363(NULL, &m3363_MI);
		int32_t L_3 = m3359(L_2, &m3359_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_4 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_5 = V_0;
		t698 * L_6 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_6, &m3213_MI);
		t698 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t698 * L_8 = V_1;
		L_4->f0 = L_8;
		t697 * L_9 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_10 = (L_9->f0);
		t694 * L_11 = p1;
		m3204(L_10, L_11, &m3204_MI);
		t697 * L_12 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_13 = (L_12->f0);
		int32_t L_14 = p0;
		L_13->f16 = L_14;
		t701* L_15 = p2;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_16 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_17 = (L_16->f0);
		t701* L_18 = p2;
		VirtActionInvoker1< t701* >::Invoke(&m3215_MI, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_19 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t693 * L_20 = (L_19->f1);
		VirtActionInvoker0::Invoke(&m4212_MI, L_20);
		t697 * L_21 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t693 * L_22 = (L_21->f1);
		t697 * L_23 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_24 = (L_23->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4208_MI, L_22, L_24);
		t697 * L_25 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_26 = V_0;
		t698 * L_27 = (t698 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t698_TI));
		m3213(L_27, &m3213_MI);
		t698 * L_28 = L_27;
		V_1 = L_28;
		L_26->f2 = L_28;
		t698 * L_29 = V_1;
		L_25->f2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_30 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_31 = V_0;
		t698 * L_32 = (L_31->f0);
		L_30->f0 = L_32;
		t697 * L_33 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_34 = V_0;
		t693 * L_35 = (L_34->f1);
		L_33->f1 = L_35;
		t697 * L_36 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t697 * L_37 = V_0;
		t698 * L_38 = (L_37->f2);
		L_36->f2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
extern "C" void m3193 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_0 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_1 = (L_0->f0);
		int32_t L_2 = (L_1->f16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_3 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_4 = (L_3->f0);
		VirtActionInvoker0::Invoke(&m3218_MI, L_4);
		t697 * L_5 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_6 = (L_5->f0);
		int32_t L_7 = m385(NULL, &m385_MI);
		t697 * L_8 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_9 = (L_8->f0);
		float L_10 = (L_9->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_11 = m2898(NULL, (((float)L_7)), L_10, &m2898_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3219_MI, L_6, (0.0f), L_11);
		t697 * L_12 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_13 = (L_12->f0);
		VirtActionInvoker0::Invoke(&m3220_MI, L_13);
		t697 * L_14 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_15 = (L_14->f0);
		int32_t L_16 = m621(NULL, &m621_MI);
		t697 * L_17 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_18 = (L_17->f0);
		float L_19 = (L_18->f3);
		float L_20 = m2898(NULL, (((float)L_16)), L_19, &m2898_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3221_MI, L_15, (0.0f), L_20);
		t697 * L_21 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_22 = (L_21->f2);
		m3195(NULL, L_22, &m3195_MI);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_23 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_24 = (L_23->f0);
		m3196(NULL, L_24, &m3196_MI);
		t697 * L_25 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_26 = (L_25->f2);
		m3195(NULL, L_26, &m3195_MI);
	}

IL_00c1:
	{
		return;
	}
}
extern MethodInfo m3194_MI;
extern "C" void m3194 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t697 * L_0 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_1 = (L_0->f0);
		VirtActionInvoker0::Invoke(&m3218_MI, L_1);
		t697 * L_2 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_3 = (L_2->f0);
		int32_t L_4 = m385(NULL, &m385_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3219_MI, L_3, (0.0f), (((float)L_4)));
		t697 * L_5 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_6 = (L_5->f0);
		VirtActionInvoker0::Invoke(&m3220_MI, L_6);
		t697 * L_7 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_8 = (L_7->f0);
		int32_t L_9 = m621(NULL, &m621_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3221_MI, L_8, (0.0f), (((float)L_9)));
		t697 * L_10 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f2;
		t698 * L_11 = (L_10->f2);
		m3195(NULL, L_11, &m3195_MI);
		return;
	}
}
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern "C" void m3195 (t9 * __this , t698 * p0, MethodInfo* method)
{
	static bool m3195_init;
	if (!m3195_init)
	{
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m3195_init = true;
	}
	t698 * V_0 = {0};
	t872  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t698 * L_0 = p0;
		t703 * L_1 = (L_0->f10);
		t872  L_2 = m4213(L_1, m4213_MI_var);
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
			t702 * L_3 = m4214((&V_1), m4214_MI_var);
			V_0 = ((t698 *)Castclass(L_3, InitializedTypeInfo(&t698_TI)));
			t698 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			m3196(NULL, L_4, &m3196_MI);
		}

IL_0024:
		{
			bool L_5 = m4215((&V_1), m4215_MI_var);
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
		t872  L_6 = V_1;
		t872  L_7 = L_6;
		t9 * L_8 = Box(t872_TI_var, &L_7);
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
		t698 * L_9 = p0;
		m3217(L_9, &m3217_MI);
		return;
	}
}
extern "C" void m3196 (t9 * __this , t698 * p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t434  V_4 = {0};
	{
		t698 * L_0 = p0;
		bool L_1 = (L_0->f15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		t698 * L_2 = p0;
		float L_3 = (L_2->f0);
		V_0 = L_3;
		t698 * L_4 = p0;
		float L_5 = (L_4->f1);
		V_1 = L_5;
		t698 * L_6 = p0;
		VirtActionInvoker0::Invoke(&m3218_MI, L_6);
		t698 * L_7 = p0;
		t698 * L_8 = p0;
		t434 * L_9 = &(L_8->f4);
		float L_10 = m2595(L_9, &m2595_MI);
		t698 * L_11 = p0;
		float L_12 = (L_11->f1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_15 = m620(NULL, L_12, L_13, L_14, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3219_MI, L_7, L_10, L_15);
		t698 * L_16 = p0;
		float L_17 = (L_16->f2);
		V_2 = L_17;
		t698 * L_18 = p0;
		float L_19 = (L_18->f3);
		V_3 = L_19;
		t698 * L_20 = p0;
		VirtActionInvoker0::Invoke(&m3220_MI, L_20);
		t698 * L_21 = p0;
		t698 * L_22 = p0;
		t434 * L_23 = &(L_22->f4);
		float L_24 = m2596(L_23, &m2596_MI);
		t698 * L_25 = p0;
		float L_26 = (L_25->f3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = m620(NULL, L_26, L_27, L_28, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3221_MI, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		t698 * L_30 = p0;
		VirtActionInvoker0::Invoke(&m3218_MI, L_30);
		t698 * L_31 = p0;
		int32_t L_32 = (L_31->f16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t434  L_33 = m3197(NULL, L_32, &m3197_MI);
		V_4 = L_33;
		t698 * L_34 = p0;
		float L_35 = m2595((&V_4), &m2595_MI);
		float L_36 = m2590((&V_4), &m2590_MI);
		t698 * L_37 = p0;
		float L_38 = (L_37->f0);
		t698 * L_39 = p0;
		float L_40 = (L_39->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_41 = m620(NULL, L_36, L_38, L_40, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3219_MI, L_34, L_35, L_41);
		t698 * L_42 = p0;
		VirtActionInvoker0::Invoke(&m3220_MI, L_42);
		t698 * L_43 = p0;
		float L_44 = m2596((&V_4), &m2596_MI);
		float L_45 = m2591((&V_4), &m2591_MI);
		t698 * L_46 = p0;
		float L_47 = (L_46->f2);
		t698 * L_48 = p0;
		float L_49 = (L_48->f3);
		float L_50 = m620(NULL, L_45, L_47, L_49, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3221_MI, L_43, L_44, L_50);
		t698 * L_51 = p0;
		int32_t L_52 = (L_51->f16);
		t698 * L_53 = p0;
		t434  L_54 = (L_53->f4);
		m3198(NULL, L_52, L_54, &m3198_MI);
	}

IL_00e8:
	{
		return;
	}
}
extern "C" t434  m3197 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t434  (*m3197_ftn) (int32_t);
	static m3197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3198 (t9 * __this , int32_t p0, t434  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3199(NULL, L_0, (&p1), &m3199_MI);
		return;
	}
}
extern "C" void m3199 (t9 * __this , int32_t p0, t434 * p1, MethodInfo* method)
{
	typedef void (*m3199_ftn) (int32_t, t434 *);
	static m3199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3200_MI;
extern "C" t694 * m3200 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t694 * L_0 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_1 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_1, &m3325_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		t694 * L_2 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f4;
		m3340(L_2, 0, &m3340_MI);
		t694 * L_3 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t530.h"
extern TypeInfo t158_TI;
#include "t728MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3210_MI;
extern MethodInfo m3203_MI;
extern MethodInfo m3334_MI;
extern MethodInfo m3346_MI;
extern MethodInfo m2662_MI;
extern MethodInfo m2661_MI;
extern MethodInfo m2660_MI;
extern MethodInfo m2658_MI;
extern MethodInfo m3337_MI;
extern MethodInfo m3339_MI;
extern MethodInfo m3338_MI;
extern MethodInfo m3341_MI;
extern MethodInfo m610_MI;
extern MethodInfo m3330_MI;
extern MethodInfo m2486_MI;
extern MethodInfo m2679_MI;
extern MethodInfo m2681_MI;
extern MethodInfo m3562_MI;
extern MethodInfo m515_MI;


extern MethodInfo m3201_MI;
extern "C" void m3201 (t702 * __this, float p0, float p1, float p2, float p3, t694 * p4, MethodInfo* method)
{
	{
		t434  L_0 = {0};
		m2796(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m2796_MI);
		__this->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_1 = m3346(NULL, &m3346_MI);
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
		t694 * L_6 = p4;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_7 = m3346(NULL, &m3346_MI);
		p4 = L_7;
	}

IL_005b:
	{
		t694 * L_8 = p4;
		m3204(__this, L_8, &m3204_MI);
		return;
	}
}
extern MethodInfo m3202_MI;
extern "C" void m3202 (t9 * __this , MethodInfo* method)
{
	{
		t434  L_0 = {0};
		m2796(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), &m2796_MI);
		((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f8 = L_0;
		((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9 = 0;
		return;
	}
}
extern "C" t694 * m3203 (t702 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3204 (t702 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f7 = L_0;
		t694 * L_1 = p0;
		VirtActionInvoker1< t694 * >::Invoke(&m3210_MI, __this, L_1);
		return;
	}
}
extern MethodInfo m3205_MI;
extern "C" t530 * m3205 (t702 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = m3203(__this, &m3203_MI);
		t530 * L_1 = m3334(L_0, &m3334_MI);
		return L_1;
	}
}
extern MethodInfo m3206_MI;
extern "C" void m3206 (t702 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3207_MI;
extern "C" void m3207 (t702 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3208_MI;
extern "C" void m3208 (t702 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2662(L_0, L_1, &m2662_MI);
		t434 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2661(L_2, L_3, &m2661_MI);
		return;
	}
}
extern MethodInfo m3209_MI;
extern "C" void m3209 (t702 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2660(L_0, L_1, &m2660_MI);
		t434 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2658(L_2, L_3, &m2658_MI);
		return;
	}
}
extern "C" void m3210 (t702 * __this, t694 * p0, MethodInfo* method)
{
	t702 * G_B3_0 = {0};
	t702 * G_B1_0 = {0};
	t702 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	t702 * G_B4_1 = {0};
	t702 * G_B7_0 = {0};
	t702 * G_B5_0 = {0};
	t702 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t702 * G_B8_1 = {0};
	{
		t694 * L_0 = p0;
		float L_1 = m3337(L_0, &m3337_MI);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		t694 * L_2 = p0;
		bool L_3 = m3339(L_2, &m3339_MI);
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
		t694 * L_4 = p0;
		float L_5 = m3338(L_4, &m3338_MI);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		t694 * L_6 = p0;
		bool L_7 = m3341(L_6, &m3341_MI);
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
		t694 * L_8 = p0;
		__this->f7 = L_8;
		return;
	}
}
extern MethodInfo m3211_MI;
extern "C" void m3211 (t702 * __this, t701* p0, MethodInfo* method)
{
	t696 * V_0 = {0};
	t701* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		t701* L_0 = p0;
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
		t701* L_1 = p0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		t701* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t696 **)(t696 **)SZArrayLdElema(L_2, L_4));
		t696 * L_5 = V_0;
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
		t696 * L_8 = V_0;
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
		t696 * L_12 = V_0;
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
		t696 * L_16 = V_0;
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
		t696 * L_21 = V_0;
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
		t696 * L_26 = V_0;
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
		t696 * L_31 = V_0;
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
		t696 * L_36 = V_0;
		t9 * L_37 = (L_36->f1);
		__this->f5 = ((*(int32_t*)((int32_t*)UnBox (L_37, InitializedTypeInfo(&t125_TI)))));
		goto IL_019c;
	}

IL_0186:
	{
		t696 * L_38 = V_0;
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
		t701* L_42 = V_1;
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
extern MethodInfo m3212_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3212 (t702 * __this, MethodInfo* method)
{
	static bool m3212_init;
	if (!m3212_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3212_init = true;
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
		t2* L_2 = m610(NULL, L_1, (t2*) &_stringLiteral168, &m610_MI);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t702_TI));
		int32_t L_5 = ((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9;
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
		t694 * L_10 = m3203(__this, &m3203_MI);
		G_B4_0 = 0;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		G_B4_3 = (t2*) &_stringLiteral169;
		G_B4_4 = 1;
		G_B4_5 = L_8;
		G_B4_6 = L_8;
		if (!L_10)
		{
			G_B5_0 = 0;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			G_B5_3 = (t2*) &_stringLiteral169;
			G_B5_4 = 1;
			G_B5_5 = L_8;
			G_B5_6 = L_8;
			goto IL_005d;
		}
	}
	{
		t694 * L_11 = m3203(__this, &m3203_MI);
		t2* L_12 = m3330(L_11, &m3330_MI);
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
		G_B6_0 = (t2*) &_stringLiteral170;
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
		t126 * L_14 = m2486(__this, &m2486_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 1)) = (t9 *)L_14;
		t158* L_15 = L_13;
		t434 * L_16 = &(__this->f4);
		float L_17 = m2595(L_16, &m2595_MI);
		float L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t123_TI), &L_18);
		ArrayElementTypeCheck (L_15, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 2)) = (t9 *)L_19;
		t158* L_20 = L_15;
		t434 * L_21 = &(__this->f4);
		float L_22 = m2679(L_21, &m2679_MI);
		float L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t123_TI), &L_23);
		ArrayElementTypeCheck (L_20, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 3)) = (t9 *)L_24;
		t158* L_25 = L_20;
		t434 * L_26 = &(__this->f4);
		float L_27 = m2596(L_26, &m2596_MI);
		float L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t123_TI), &L_28);
		ArrayElementTypeCheck (L_25, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)L_29;
		t158* L_30 = L_25;
		t434 * L_31 = &(__this->f4);
		float L_32 = m2681(L_31, &m2681_MI);
		float L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t123_TI), &L_33);
		ArrayElementTypeCheck (L_30, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 5)) = (t9 *)L_34;
		t2* L_35 = m3562(NULL, G_B6_4, L_30, &m3562_MI);
		ArrayElementTypeCheck (G_B6_6, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(G_B6_6, G_B6_5)) = (t9 *)L_35;
		t158* L_36 = G_B6_7;
		ArrayElementTypeCheck (L_36, (t2*) &_stringLiteral171);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, 2)) = (t9 *)(t2*) &_stringLiteral171;
		t158* L_37 = L_36;
		float L_38 = (__this->f0);
		float L_39 = L_38;
		t9 * L_40 = Box(InitializedTypeInfo(&t123_TI), &L_39);
		ArrayElementTypeCheck (L_37, L_40);
		*((t9 **)(t9 **)SZArrayLdElema(L_37, 3)) = (t9 *)L_40;
		t158* L_41 = L_37;
		ArrayElementTypeCheck (L_41, (t2*) &_stringLiteral172);
		*((t9 **)(t9 **)SZArrayLdElema(L_41, 4)) = (t9 *)(t2*) &_stringLiteral172;
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
		G_B9_0 = (t2*) &_stringLiteral173;
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
		ArrayElementTypeCheck (L_49, (t2*) &_stringLiteral174);
		*((t9 **)(t9 **)SZArrayLdElema(L_49, 7)) = (t9 *)(t2*) &_stringLiteral174;
		t158* L_50 = L_49;
		float L_51 = (__this->f2);
		float L_52 = L_51;
		t9 * L_53 = Box(InitializedTypeInfo(&t123_TI), &L_52);
		ArrayElementTypeCheck (L_50, L_53);
		*((t9 **)(t9 **)SZArrayLdElema(L_50, 8)) = (t9 *)L_53;
		t158* L_54 = L_50;
		ArrayElementTypeCheck (L_54, (t2*) &_stringLiteral172);
		*((t9 **)(t9 **)SZArrayLdElema(L_54, ((int32_t)9))) = (t9 *)(t2*) &_stringLiteral172;
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
		G_B12_0 = (t2*) &_stringLiteral173;
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

extern TypeInfo t703_TI;
extern TypeInfo t530_TI;
#include "t530MD.h"
extern Il2CppType t703_0_0_0;
extern MethodInfo m4216_MI;
extern MethodInfo m2920_MI;
extern MethodInfo m2915_MI;
extern MethodInfo m3316_MI;
extern MethodInfo m3317_MI;
extern MethodInfo m3318_MI;
extern MethodInfo m2916_MI;
extern MethodInfo m3319_MI;
extern MethodInfo m3320_MI;
extern MethodInfo m3321_MI;
extern MethodInfo m4217_MI;
extern MethodInfo m3335_MI;
extern MethodInfo m2906_MI;
extern MethodInfo m2737_MI;
extern MethodInfo m608_MI;
extern MethodInfo m4218_MI;
extern MethodInfo m2735_MI;
extern MethodInfo m3214_MI;
extern MethodInfo m585_MI;
extern MethodInfo m2798_MI;
extern MethodInfo m2907_MI;
extern MethodInfo m399_MI;
extern Il2CppGenericMethod m4216_GM;
extern Il2CppGenericMethod m4217_GM;
extern Il2CppGenericMethod m4218_GM;


extern TypeInfo* t703_TI_var;
extern MethodInfo* m4216_MI_var;
extern "C" void m3213 (t698 * __this, MethodInfo* method)
{
	static bool m3213_init;
	if (!m3213_init)
	{
		t703_TI_var = il2cpp_codegen_class_from_type(&t703_0_0_0);
		m4216_MI_var = il2cpp_codegen_genericmethod_get_method(&m4216_GM);
		m3213_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t703_TI_var);
		t703 * L_0 = (t703 *)il2cpp_codegen_object_new (t703_TI_var);
		m4216(L_0, m4216_MI_var);
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
		t530 * L_1 = (t530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t530_TI));
		m2920(L_1, &m2920_MI);
		__this->f26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_2 = m3346(NULL, &m3346_MI);
		m3201(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, &m3201_MI);
		return;
	}
}
extern "C" t530 * m3214 (t698 * __this, MethodInfo* method)
{
	{
		t530 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m3215 (t698 * __this, t701* p0, MethodInfo* method)
{
	t696 * V_0 = {0};
	t701* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t701* L_0 = p0;
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
		t701* L_1 = p0;
		m3211(__this, L_1, &m3211_MI);
		t701* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		t701* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t696 **)(t696 **)SZArrayLdElema(L_3, L_5));
		t696 * L_6 = V_0;
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
		t696 * L_9 = V_0;
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
		t701* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
extern MethodInfo m3216_MI;
extern "C" void m3216 (t698 * __this, t694 * p0, MethodInfo* method)
{
	t530 * V_0 = {0};
	{
		t694 * L_0 = p0;
		m3210(__this, L_0, &m3210_MI);
		t694 * L_1 = p0;
		t530 * L_2 = m3334(L_1, &m3334_MI);
		V_0 = L_2;
		t530 * L_3 = (__this->f26);
		t530 * L_4 = V_0;
		int32_t L_5 = m2915(L_4, &m2915_MI);
		m3316(L_3, L_5, &m3316_MI);
		t530 * L_6 = (__this->f26);
		t530 * L_7 = V_0;
		int32_t L_8 = m3317(L_7, &m3317_MI);
		m3318(L_6, L_8, &m3318_MI);
		t530 * L_9 = (__this->f26);
		t530 * L_10 = V_0;
		int32_t L_11 = m2916(L_10, &m2916_MI);
		m3319(L_9, L_11, &m3319_MI);
		t530 * L_12 = (__this->f26);
		t530 * L_13 = V_0;
		int32_t L_14 = m3320(L_13, &m3320_MI);
		m3321(L_12, L_14, &m3321_MI);
		return;
	}
}
extern "C" void m3217 (t698 * __this, MethodInfo* method)
{
	{
		__this->f17 = 0;
		return;
	}
}
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4217_MI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern MethodInfo* m4218_MI_var;
extern "C" void m3218 (t698 * __this, MethodInfo* method)
{
	static bool m3218_init;
	if (!m3218_init)
	{
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4217_MI_var = il2cpp_codegen_genericmethod_get_method(&m4217_GM);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m4218_MI_var = il2cpp_codegen_genericmethod_get_method(&m4218_GM);
		m3218_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	t702 * V_3 = {0};
	t872  V_4 = {0};
	t530 * V_5 = {0};
	int32_t V_6 = 0;
	t702 * V_7 = {0};
	t872  V_8 = {0};
	t530 * V_9 = {0};
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
	t698 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	t698 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	t698 * G_B40_3 = {0};
	{
		t703 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t694 * L_2 = m3203(__this, &m3203_MI);
		t530 * L_3 = m3335(L_2, &m3335_MI);
		int32_t L_4 = m2906(L_3, &m2906_MI);
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
		t703 * L_8 = (__this->f10);
		t872  L_9 = m4213(L_8, m4213_MI_var);
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
			t702 * L_10 = m4214((&V_4), m4214_MI_var);
			V_3 = L_10;
			t702 * L_11 = V_3;
			VirtActionInvoker0::Invoke(&m3206_MI, L_11);
			t702 * L_12 = V_3;
			t530 * L_13 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_12);
			V_5 = L_13;
			t702 * L_14 = V_3;
			t694 * L_15 = m3203(L_14, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_16 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_15) == ((t9*)(t694 *)L_16)))
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
			t530 * L_18 = V_5;
			int32_t L_19 = m2915(L_18, &m2915_MI);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_21 = m2737(NULL, L_19, L_20, &m2737_MI);
			V_0 = L_21;
			t530 * L_22 = V_5;
			int32_t L_23 = m3317(L_22, &m3317_MI);
			int32_t L_24 = V_1;
			int32_t L_25 = m2737(NULL, L_23, L_24, &m2737_MI);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			t530 * L_26 = V_5;
			int32_t L_27 = m2915(L_26, &m2915_MI);
			V_0 = L_27;
			t530 * L_28 = V_5;
			int32_t L_29 = m3317(L_28, &m3317_MI);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			t702 * L_30 = V_3;
			float L_31 = (L_30->f0);
			t530 * L_32 = V_5;
			int32_t L_33 = m2906(L_32, &m2906_MI);
			float L_34 = (__this->f22);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_35 = m608(NULL, ((float)((float)L_31+(float)(((float)L_33)))), L_34, &m608_MI);
			__this->f22 = L_35;
			t702 * L_36 = V_3;
			float L_37 = (L_36->f1);
			t530 * L_38 = V_5;
			int32_t L_39 = m2906(L_38, &m2906_MI);
			float L_40 = (__this->f23);
			float L_41 = m608(NULL, ((float)((float)L_37+(float)(((float)L_39)))), L_40, &m608_MI);
			__this->f23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->f18);
			t702 * L_43 = V_3;
			int32_t L_44 = (L_43->f5);
			__this->f18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = m4215((&V_4), m4215_MI_var);
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
		t872  L_46 = V_4;
		t872  L_47 = L_46;
		t9 * L_48 = Box(t872_TI_var, &L_47);
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
		t703 * L_55 = (__this->f10);
		t872  L_56 = m4213(L_55, m4213_MI_var);
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
			t702 * L_57 = m4214((&V_8), m4214_MI_var);
			V_7 = L_57;
			t702 * L_58 = V_7;
			VirtActionInvoker0::Invoke(&m3206_MI, L_58);
			t702 * L_59 = V_7;
			t530 * L_60 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_59);
			V_9 = L_60;
			t702 * L_61 = V_7;
			t694 * L_62 = m3203(L_61, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_63 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_62) == ((t9*)(t694 *)L_63)))
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
			t530 * L_66 = V_9;
			int32_t L_67 = m2915(L_66, &m2915_MI);
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
			t530 * L_69 = V_9;
			int32_t L_70 = m2915(L_69, &m2915_MI);
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
			t702 * L_72 = V_7;
			float L_73 = (L_72->f0);
			float L_74 = (__this->f13);
			int32_t L_75 = V_10;
			__this->f22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->f23);
			t702 * L_77 = V_7;
			float L_78 = (L_77->f1);
			float L_79 = (__this->f13);
			int32_t L_80 = V_10;
			__this->f23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			t530 * L_81 = V_9;
			int32_t L_82 = m3317(L_81, &m3317_MI);
			V_6 = L_82;
			int32_t L_83 = (__this->f18);
			t702 * L_84 = V_7;
			int32_t L_85 = (L_84->f5);
			__this->f18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->f22);
			t702 * L_87 = V_7;
			float L_88 = (L_87->f0);
			__this->f22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->f23);
			t702 * L_90 = V_7;
			float L_91 = (L_90->f1);
			__this->f23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->f18);
			t702 * L_93 = V_7;
			int32_t L_94 = (L_93->f5);
			__this->f18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = m4215((&V_8), m4215_MI_var);
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
		t872  L_96 = V_8;
		t872  L_97 = L_96;
		t9 * L_98 = Box(t872_TI_var, &L_97);
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
		t703 * L_103 = (__this->f10);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		t703 * L_105 = (__this->f10);
		t702 * L_106 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_105, 0);
		t530 * L_107 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_106);
		int32_t L_108 = m2915(L_107, &m2915_MI);
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
		t694 * L_111 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_112 = m3346(NULL, &m3346_MI);
		if ((!(((t9*)(t694 *)L_111) == ((t9*)(t694 *)L_112))))
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
		t694 * L_114 = m3203(__this, &m3203_MI);
		t530 * L_115 = m3335(L_114, &m3335_MI);
		int32_t L_116 = m2915(L_115, &m2915_MI);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_118 = m2735(NULL, L_116, L_117, &m2735_MI);
		V_11 = (((float)L_118));
		t694 * L_119 = m3203(__this, &m3203_MI);
		t530 * L_120 = m3335(L_119, &m3335_MI);
		int32_t L_121 = m3317(L_120, &m3317_MI);
		int32_t L_122 = V_1;
		int32_t L_123 = m2735(NULL, L_121, L_122, &m2735_MI);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		t530 * L_124 = (__this->f26);
		int32_t L_125 = V_0;
		m3316(L_124, L_125, &m3316_MI);
		t530 * L_126 = (__this->f26);
		int32_t L_127 = V_1;
		m3318(L_126, L_127, &m3318_MI);
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
		t694 * L_137 = m3203(__this, &m3203_MI);
		bool L_138 = m3339(L_137, &m3339_MI);
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
		t694 * L_145 = m3203(__this, &m3203_MI);
		float L_146 = m3337(L_145, &m3337_MI);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		t694 * L_147 = m3203(__this, &m3203_MI);
		float L_148 = m3337(L_147, &m3337_MI);
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
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern MethodInfo* m4217_MI_var;
extern MethodInfo* m4218_MI_var;
extern "C" void m3219 (t698 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3219_init;
	if (!m3219_init)
	{
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m4217_MI_var = il2cpp_codegen_genericmethod_get_method(&m4217_GM);
		m4218_MI_var = il2cpp_codegen_genericmethod_get_method(&m4218_GM);
		m3219_init = true;
	}
	t530 * V_0 = {0};
	t702 * V_1 = {0};
	t872  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	t702 * V_8 = {0};
	t872  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	t702 * V_17 = {0};
	t872  V_18 = {0};
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
		m3208(__this, L_0, L_1, &m3208_MI);
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
		t694 * L_3 = m3203(__this, &m3203_MI);
		t530 * L_4 = m3335(L_3, &m3335_MI);
		V_0 = L_4;
		bool L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		t694 * L_6 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_7 = m3346(NULL, &m3346_MI);
		if ((((t9*)(t694 *)L_6) == ((t9*)(t694 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		t703 * L_8 = (__this->f10);
		t872  L_9 = m4213(L_8, m4213_MI_var);
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
			t702 * L_10 = m4214((&V_2), m4214_MI_var);
			V_1 = L_10;
			t702 * L_11 = V_1;
			t530 * L_12 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_11);
			int32_t L_13 = m2915(L_12, &m2915_MI);
			t530 * L_14 = V_0;
			int32_t L_15 = m2915(L_14, &m2915_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_16 = m2735(NULL, L_13, L_15, &m2735_MI);
			V_3 = (((float)L_16));
			float L_17 = p0;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = p1;
			t702 * L_20 = V_1;
			t530 * L_21 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_20);
			int32_t L_22 = m3317(L_21, &m3317_MI);
			t530 * L_23 = V_0;
			int32_t L_24 = m3317(L_23, &m3317_MI);
			int32_t L_25 = m2735(NULL, L_22, L_24, &m2735_MI);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			t702 * L_27 = V_1;
			int32_t L_28 = (L_27->f5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			t702 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			VirtActionInvoker2< float, float >::Invoke(&m3208_MI, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			t702 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			t702 * L_35 = V_1;
			float L_36 = (L_35->f0);
			t702 * L_37 = V_1;
			float L_38 = (L_37->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_39 = m620(NULL, L_34, L_36, L_38, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3208_MI, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = m4215((&V_2), m4215_MI_var);
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
		t872  L_41 = V_2;
		t872  L_42 = L_41;
		t9 * L_43 = Box(t872_TI_var, &L_42);
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
		t530 * L_45 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3214_MI, __this);
		int32_t L_46 = m2915(L_45, &m2915_MI);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = p1;
		t530 * L_48 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3214_MI, __this);
		int32_t L_49 = m2906(L_48, &m2906_MI);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		t703 * L_50 = (__this->f10);
		t872  L_51 = m4213(L_50, m4213_MI_var);
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
			t702 * L_52 = m4214((&V_9), m4214_MI_var);
			V_8 = L_52;
			t702 * L_53 = V_8;
			int32_t L_54 = (L_53->f5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			t702 * L_55 = V_8;
			float L_56 = V_6;
			t702 * L_57 = V_8;
			t530 * L_58 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_57);
			int32_t L_59 = m2915(L_58, &m2915_MI);
			float L_60 = V_7;
			t702 * L_61 = V_8;
			t530 * L_62 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_61);
			int32_t L_63 = m2906(L_62, &m2906_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3208_MI, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			t702 * L_64 = V_8;
			float L_65 = V_6;
			t702 * L_66 = V_8;
			t530 * L_67 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_66);
			int32_t L_68 = m2915(L_67, &m2915_MI);
			float L_69 = V_7;
			t702 * L_70 = V_8;
			t530 * L_71 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_70);
			int32_t L_72 = m2906(L_71, &m2906_MI);
			t702 * L_73 = V_8;
			float L_74 = (L_73->f0);
			t702 * L_75 = V_8;
			float L_76 = (L_75->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_77 = m620(NULL, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3208_MI, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = m4215((&V_9), m4215_MI_var);
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
		t872  L_79 = V_9;
		t872  L_80 = L_79;
		t9 * L_81 = Box(t872_TI_var, &L_80);
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
		t694 * L_82 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_83 = m3346(NULL, &m3346_MI);
		if ((((t9*)(t694 *)L_82) == ((t9*)(t694 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		t530 * L_84 = V_0;
		int32_t L_85 = m2915(L_84, &m2915_MI);
		V_10 = (((float)L_85));
		t530 * L_86 = V_0;
		int32_t L_87 = m3317(L_86, &m3317_MI);
		V_11 = (((float)L_87));
		t703 * L_88 = (__this->f10);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		t703 * L_91 = (__this->f10);
		t702 * L_92 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_91, 0);
		t530 * L_93 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_92);
		int32_t L_94 = m2915(L_93, &m2915_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_95 = m608(NULL, L_90, (((float)L_94)), &m608_MI);
		V_10 = L_95;
		float L_96 = V_11;
		t703 * L_97 = (__this->f10);
		t703 * L_98 = (__this->f10);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_98);
		t702 * L_100 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		t530 * L_101 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_100);
		int32_t L_102 = m3317(L_101, &m3317_MI);
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
		t703 * L_111 = (__this->f10);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_111);
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
		t703 * L_126 = (__this->f10);
		t872  L_127 = m4213(L_126, m4213_MI_var);
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
			t702 * L_128 = m4214((&V_18), m4214_MI_var);
			V_17 = L_128;
			t702 * L_129 = V_17;
			float L_130 = (L_129->f0);
			t702 * L_131 = V_17;
			float L_132 = (L_131->f1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_134 = m585(NULL, L_130, L_132, L_133, &m585_MI);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			t702 * L_137 = V_17;
			int32_t L_138 = (L_137->f5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			t702 * L_139 = V_17;
			t694 * L_140 = m3203(L_139, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_141 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_140) == ((t9*)(t694 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			t702 * L_142 = V_17;
			t530 * L_143 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_142);
			int32_t L_144 = m2915(L_143, &m2915_MI);
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
			t702 * L_152 = V_17;
			t530 * L_153 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_152);
			int32_t L_154 = m3317(L_153, &m3317_MI);
			V_15 = L_154;
		}

IL_0371:
		{
			t702 * L_155 = V_17;
			float L_156 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			VirtActionInvoker2< float, float >::Invoke(&m3208_MI, L_155, L_157, L_159);
			float L_160 = p0;
			float L_161 = V_19;
			float L_162 = (__this->f13);
			p0 = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = m4215((&V_18), m4215_MI_var);
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
		t872  L_164 = V_18;
		t872  L_165 = L_164;
		t9 * L_166 = Box(t872_TI_var, &L_165);
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
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4217_MI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern MethodInfo* m4218_MI_var;
extern "C" void m3220 (t698 * __this, MethodInfo* method)
{
	static bool m3220_init;
	if (!m3220_init)
	{
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4217_MI_var = il2cpp_codegen_genericmethod_get_method(&m4217_GM);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m4218_MI_var = il2cpp_codegen_genericmethod_get_method(&m4218_GM);
		m3220_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t702 * V_4 = {0};
	t872  V_5 = {0};
	t530 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t702 * V_9 = {0};
	t872  V_10 = {0};
	t530 * V_11 = {0};
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
	t698 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	t698 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	t698 * G_B37_3 = {0};
	{
		t703 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t694 * L_2 = m3203(__this, &m3203_MI);
		t530 * L_3 = m3335(L_2, &m3335_MI);
		int32_t L_4 = m2907(L_3, &m2907_MI);
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
		t703 * L_10 = (__this->f10);
		t872  L_11 = m4213(L_10, m4213_MI_var);
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
			t702 * L_12 = m4214((&V_5), m4214_MI_var);
			V_4 = L_12;
			t702 * L_13 = V_4;
			VirtActionInvoker0::Invoke(&m3207_MI, L_13);
			t702 * L_14 = V_4;
			t530 * L_15 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_14);
			V_6 = L_15;
			t702 * L_16 = V_4;
			t694 * L_17 = m3203(L_16, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_18 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_17) == ((t9*)(t694 *)L_18)))
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
			t530 * L_21 = V_6;
			int32_t L_22 = m2916(L_21, &m2916_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_23 = m2735(NULL, L_20, L_22, &m2735_MI);
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
			t702 * L_25 = V_4;
			float L_26 = (L_25->f2);
			float L_27 = (__this->f13);
			int32_t L_28 = V_7;
			__this->f24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->f25);
			t702 * L_30 = V_4;
			float L_31 = (L_30->f3);
			float L_32 = (__this->f13);
			int32_t L_33 = V_7;
			__this->f25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			t530 * L_34 = V_6;
			int32_t L_35 = m3320(L_34, &m3320_MI);
			V_2 = L_35;
			int32_t L_36 = (__this->f19);
			t702 * L_37 = V_4;
			int32_t L_38 = (L_37->f6);
			__this->f19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->f24);
			t702 * L_40 = V_4;
			float L_41 = (L_40->f2);
			__this->f24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->f25);
			t702 * L_43 = V_4;
			float L_44 = (L_43->f3);
			__this->f25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->f19);
			t702 * L_46 = V_4;
			int32_t L_47 = (L_46->f6);
			__this->f19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = m4215((&V_5), m4215_MI_var);
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
		t872  L_49 = V_5;
		t872  L_50 = L_49;
		t9 * L_51 = Box(t872_TI_var, &L_50);
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
		t703 * L_56 = (__this->f10);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		t703 * L_58 = (__this->f10);
		t702 * L_59 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_58, 0);
		t530 * L_60 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_59);
		int32_t L_61 = m2916(L_60, &m2916_MI);
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
		t703 * L_64 = (__this->f10);
		t872  L_65 = m4213(L_64, m4213_MI_var);
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
			t702 * L_66 = m4214((&V_10), m4214_MI_var);
			V_9 = L_66;
			t702 * L_67 = V_9;
			VirtActionInvoker0::Invoke(&m3207_MI, L_67);
			t702 * L_68 = V_9;
			t530 * L_69 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_68);
			V_11 = L_69;
			t702 * L_70 = V_9;
			t694 * L_71 = m3203(L_70, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_72 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_71) == ((t9*)(t694 *)L_72)))
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
			t530 * L_74 = V_11;
			int32_t L_75 = m2916(L_74, &m2916_MI);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_77 = m2737(NULL, L_75, L_76, &m2737_MI);
			V_0 = L_77;
			t530 * L_78 = V_11;
			int32_t L_79 = m3320(L_78, &m3320_MI);
			int32_t L_80 = V_1;
			int32_t L_81 = m2737(NULL, L_79, L_80, &m2737_MI);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			t530 * L_82 = V_11;
			int32_t L_83 = m2916(L_82, &m2916_MI);
			V_0 = L_83;
			t530 * L_84 = V_11;
			int32_t L_85 = m3320(L_84, &m3320_MI);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			t702 * L_86 = V_9;
			float L_87 = (L_86->f2);
			float L_88 = (__this->f24);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_89 = m608(NULL, L_87, L_88, &m608_MI);
			__this->f24 = L_89;
			t702 * L_90 = V_9;
			float L_91 = (L_90->f3);
			float L_92 = (__this->f25);
			float L_93 = m608(NULL, L_91, L_92, &m608_MI);
			__this->f25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->f19);
			t702 * L_95 = V_9;
			int32_t L_96 = (L_95->f6);
			__this->f19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = m4215((&V_10), m4215_MI_var);
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
		t872  L_98 = V_10;
		t872  L_99 = L_98;
		t9 * L_100 = Box(t872_TI_var, &L_99);
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
		t694 * L_101 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_102 = m3346(NULL, &m3346_MI);
		if ((!(((t9*)(t694 *)L_101) == ((t9*)(t694 *)L_102))))
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
		t694 * L_104 = m3203(__this, &m3203_MI);
		t530 * L_105 = m3335(L_104, &m3335_MI);
		int32_t L_106 = m2916(L_105, &m2916_MI);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_108 = m2735(NULL, L_106, L_107, &m2735_MI);
		V_12 = (((float)L_108));
		t694 * L_109 = m3203(__this, &m3203_MI);
		t530 * L_110 = m3335(L_109, &m3335_MI);
		int32_t L_111 = m3320(L_110, &m3320_MI);
		int32_t L_112 = V_1;
		int32_t L_113 = m2735(NULL, L_111, L_112, &m2735_MI);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		t530 * L_114 = (__this->f26);
		int32_t L_115 = V_0;
		m3319(L_114, L_115, &m3319_MI);
		t530 * L_116 = (__this->f26);
		int32_t L_117 = V_1;
		m3321(L_116, L_117, &m3321_MI);
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
		t694 * L_127 = m3203(__this, &m3203_MI);
		bool L_128 = m3341(L_127, &m3341_MI);
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
		t694 * L_135 = m3203(__this, &m3203_MI);
		float L_136 = m3338(L_135, &m3338_MI);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		t694 * L_137 = m3203(__this, &m3203_MI);
		float L_138 = m3338(L_137, &m3338_MI);
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
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4217_MI_var;
extern MethodInfo* m4218_MI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern "C" void m3221 (t698 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3221_init;
	if (!m3221_init)
	{
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4217_MI_var = il2cpp_codegen_genericmethod_get_method(&m4217_GM);
		m4218_MI_var = il2cpp_codegen_genericmethod_get_method(&m4218_GM);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m3221_init = true;
	}
	t530 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	t702 * V_8 = {0};
	t872  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	t702 * V_13 = {0};
	t872  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	t702 * V_20 = {0};
	t872  V_21 = {0};
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
		m3209(__this, L_0, L_1, &m3209_MI);
		t703 * L_2 = (__this->f10);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_2);
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
		t694 * L_4 = m3203(__this, &m3203_MI);
		t530 * L_5 = m3335(L_4, &m3335_MI);
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
		t694 * L_8 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_9 = m3346(NULL, &m3346_MI);
		if ((((t9*)(t694 *)L_8) == ((t9*)(t694 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		t530 * L_10 = V_0;
		int32_t L_11 = m2916(L_10, &m2916_MI);
		V_1 = (((float)L_11));
		t530 * L_12 = V_0;
		int32_t L_13 = m3320(L_12, &m3320_MI);
		V_2 = (((float)L_13));
		t703 * L_14 = (__this->f10);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		t703 * L_17 = (__this->f10);
		t702 * L_18 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_17, 0);
		t530 * L_19 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_18);
		int32_t L_20 = m2916(L_19, &m2916_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_21 = m608(NULL, L_16, (((float)L_20)), &m608_MI);
		V_1 = L_21;
		float L_22 = V_2;
		t703 * L_23 = (__this->f10);
		t703 * L_24 = (__this->f10);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_24);
		t702 * L_26 = (t702 *)VirtFuncInvoker1< t702 *, int32_t >::Invoke(m4218_MI_var, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		t530 * L_27 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_26);
		int32_t L_28 = m3320(L_27, &m3320_MI);
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
		t703 * L_37 = (__this->f10);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4217_MI_var, L_37);
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
		t703 * L_52 = (__this->f10);
		t872  L_53 = m4213(L_52, m4213_MI_var);
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
			t702 * L_54 = m4214((&V_9), m4214_MI_var);
			V_8 = L_54;
			t702 * L_55 = V_8;
			float L_56 = (L_55->f2);
			t702 * L_57 = V_8;
			float L_58 = (L_57->f3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_60 = m585(NULL, L_56, L_58, L_59, &m585_MI);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			t702 * L_63 = V_8;
			int32_t L_64 = (L_63->f6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			t702 * L_65 = V_8;
			t694 * L_66 = m3203(L_65, &m3203_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			t694 * L_67 = m3200(NULL, &m3200_MI);
			if ((((t9*)(t694 *)L_66) == ((t9*)(t694 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			t702 * L_68 = V_8;
			t530 * L_69 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_68);
			int32_t L_70 = m2916(L_69, &m2916_MI);
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
			t702 * L_78 = V_8;
			t530 * L_79 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_78);
			int32_t L_80 = m3320(L_79, &m3320_MI);
			V_6 = L_80;
		}

IL_01eb:
		{
			t702 * L_81 = V_8;
			float L_82 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			VirtActionInvoker2< float, float >::Invoke(&m3209_MI, L_81, L_83, L_85);
			float L_86 = p0;
			float L_87 = V_10;
			float L_88 = (__this->f13);
			p0 = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = m4215((&V_9), m4215_MI_var);
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
		t872  L_90 = V_9;
		t872  L_91 = L_90;
		t9 * L_92 = Box(t872_TI_var, &L_91);
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
		t694 * L_93 = m3203(__this, &m3203_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_94 = m3346(NULL, &m3346_MI);
		if ((((t9*)(t694 *)L_93) == ((t9*)(t694 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		t703 * L_95 = (__this->f10);
		t872  L_96 = m4213(L_95, m4213_MI_var);
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
			t702 * L_97 = m4214((&V_14), m4214_MI_var);
			V_13 = L_97;
			t702 * L_98 = V_13;
			t530 * L_99 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_98);
			int32_t L_100 = m2916(L_99, &m2916_MI);
			t530 * L_101 = V_0;
			int32_t L_102 = m2916(L_101, &m2916_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_103 = m2735(NULL, L_100, L_102, &m2735_MI);
			V_15 = (((float)L_103));
			float L_104 = p0;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = p1;
			t702 * L_107 = V_13;
			t530 * L_108 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_107);
			int32_t L_109 = m3320(L_108, &m3320_MI);
			t530 * L_110 = V_0;
			int32_t L_111 = m3320(L_110, &m3320_MI);
			int32_t L_112 = m2735(NULL, L_109, L_111, &m2735_MI);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			t702 * L_114 = V_13;
			int32_t L_115 = (L_114->f6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			t702 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			VirtActionInvoker2< float, float >::Invoke(&m3209_MI, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			t702 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			t702 * L_122 = V_13;
			float L_123 = (L_122->f2);
			t702 * L_124 = V_13;
			float L_125 = (L_124->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_126 = m620(NULL, L_121, L_123, L_125, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3209_MI, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = m4215((&V_14), m4215_MI_var);
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
		t872  L_128 = V_14;
		t872  L_129 = L_128;
		t9 * L_130 = Box(t872_TI_var, &L_129);
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
		t530 * L_132 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3214_MI, __this);
		int32_t L_133 = m2916(L_132, &m2916_MI);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = p1;
		t530 * L_135 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3214_MI, __this);
		int32_t L_136 = m2907(L_135, &m2907_MI);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		t703 * L_137 = (__this->f10);
		t872  L_138 = m4213(L_137, m4213_MI_var);
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
			t702 * L_139 = m4214((&V_21), m4214_MI_var);
			V_20 = L_139;
			t702 * L_140 = V_20;
			int32_t L_141 = (L_140->f6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			t702 * L_142 = V_20;
			float L_143 = V_18;
			t702 * L_144 = V_20;
			t530 * L_145 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_144);
			int32_t L_146 = m2916(L_145, &m2916_MI);
			float L_147 = V_19;
			t702 * L_148 = V_20;
			t530 * L_149 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_148);
			int32_t L_150 = m2907(L_149, &m2907_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3209_MI, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			t702 * L_151 = V_20;
			float L_152 = V_18;
			t702 * L_153 = V_20;
			t530 * L_154 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_153);
			int32_t L_155 = m2916(L_154, &m2916_MI);
			float L_156 = V_19;
			t702 * L_157 = V_20;
			t530 * L_158 = (t530 *)VirtFuncInvoker0< t530 * >::Invoke(&m3205_MI, L_157);
			int32_t L_159 = m2907(L_158, &m2907_MI);
			t702 * L_160 = V_20;
			float L_161 = (L_160->f2);
			t702 * L_162 = V_20;
			float L_163 = (L_162->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_164 = m620(NULL, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3209_MI, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = m4215((&V_21), m4215_MI_var);
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
		t872  L_166 = V_21;
		t872  L_167 = L_166;
		t9 * L_168 = Box(t872_TI_var, &L_167);
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
extern MethodInfo m3222_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t872_TI_var;
extern MethodInfo* m4213_MI_var;
extern MethodInfo* m4214_MI_var;
extern MethodInfo* m4215_MI_var;
extern "C" t2* m3222 (t698 * __this, MethodInfo* method)
{
	static bool m3222_init;
	if (!m3222_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t872_TI_var = il2cpp_codegen_class_from_type(&t872_0_0_0);
		m4213_MI_var = il2cpp_codegen_genericmethod_get_method(&m4213_GM);
		m4214_MI_var = il2cpp_codegen_genericmethod_get_method(&m4214_GM);
		m4215_MI_var = il2cpp_codegen_genericmethod_get_method(&m4215_GM);
		m3222_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	t702 * V_3 = {0};
	t872  V_4 = {0};
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
		t2* L_3 = m610(NULL, L_2, (t2*) &_stringLiteral168, &m610_MI);
		V_1 = L_3;
		int32_t L_4 = V_2;
		V_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t702_TI));
		int32_t L_6 = ((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9;
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
		t2* L_11 = m3212(__this, &m3212_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 1)) = (t9 *)L_11;
		t158* L_12 = L_10;
		ArrayElementTypeCheck (L_12, (t2*) &_stringLiteral175);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 2)) = (t9 *)(t2*) &_stringLiteral175;
		t158* L_13 = L_12;
		float L_14 = (__this->f24);
		float L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t123_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 3)) = (t9 *)L_16;
		t158* L_17 = L_13;
		ArrayElementTypeCheck (L_17, (t2*) &_stringLiteral176);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 4)) = (t9 *)(t2*) &_stringLiteral176;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_18 = m515(NULL, L_17, &m515_MI);
		V_0 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t702_TI));
		int32_t L_19 = ((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9;
		((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		t703 * L_20 = (__this->f10);
		t872  L_21 = m4213(L_20, m4213_MI_var);
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
			t702 * L_22 = m4214((&V_4), m4214_MI_var);
			V_3 = L_22;
			t2* L_23 = V_0;
			t702 * L_24 = V_3;
			t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m3212_MI, L_24);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_26 = m399(NULL, L_23, L_25, (t2*) &_stringLiteral177, &m399_MI);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = m4215((&V_4), m4215_MI_var);
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
		t872  L_28 = V_4;
		t872  L_29 = L_28;
		t9 * L_30 = Box(t872_TI_var, &L_29);
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
		t2* L_33 = m399(NULL, L_31, L_32, (t2*) &_stringLiteral178, &m399_MI);
		V_0 = L_33;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t702_TI));
		int32_t L_34 = ((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9;
		((t702_SFs*)InitializedTypeInfo(&t702_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		t2* L_35 = V_0;
		return L_35;
	}
}
#include "t704.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t704_TI;
#include "t704MD.h"

extern MethodInfo m3225_MI;
extern MethodInfo m3226_MI;


extern MethodInfo m3223_MI;
extern "C" void m3223 (t704 * __this, MethodInfo* method)
{
	{
		__this->f33 = 1;
		__this->f34 = 1;
		m3213(__this, &m3213_MI);
		return;
	}
}
extern MethodInfo m3224_MI;
extern "C" void m3224 (t704 * __this, MethodInfo* method)
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
		m3218(__this, &m3218_MI);
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
extern "C" void m3225 (t704 * __this, float p0, float p1, MethodInfo* method)
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
		t694 * L_2 = (__this->f38);
		float L_3 = m3337(L_2, &m3337_MI);
		t694 * L_4 = (__this->f38);
		t530 * L_5 = m3334(L_4, &m3334_MI);
		int32_t L_6 = m2915(L_5, &m2915_MI);
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
		m3219(__this, L_13, L_14, &m3219_MI);
		t434 * L_15 = &(__this->f4);
		float L_16 = p1;
		m2661(L_15, L_16, &m2661_MI);
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
		m3219(__this, L_21, L_22, &m3219_MI);
		t434 * L_23 = &(__this->f4);
		float L_24 = p1;
		m2661(L_23, L_24, &m2661_MI);
		float L_25 = V_0;
		__this->f31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
extern "C" void m3226 (t704 * __this, MethodInfo* method)
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
		m3220(__this, &m3220_MI);
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
		t694 * L_6 = (__this->f37);
		float L_7 = m3338(L_6, &m3338_MI);
		t694 * L_8 = (__this->f37);
		t530 * L_9 = m3334(L_8, &m3334_MI);
		int32_t L_10 = m2916(L_9, &m2916_MI);
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
extern MethodInfo m3227_MI;
extern "C" void m3227 (t704 * __this, float p0, float p1, MethodInfo* method)
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
		t694 * L_3 = (__this->f37);
		float L_4 = m3338(L_3, &m3338_MI);
		t694 * L_5 = (__this->f37);
		t530 * L_6 = m3334(L_5, &m3334_MI);
		int32_t L_7 = m2916(L_6, &m2916_MI);
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
		t434 * L_13 = &(__this->f4);
		float L_14 = m2590(L_13, &m2590_MI);
		t694 * L_15 = (__this->f38);
		float L_16 = m3337(L_15, &m3337_MI);
		t694 * L_17 = (__this->f38);
		t530 * L_18 = m3334(L_17, &m3334_MI);
		int32_t L_19 = m2915(L_18, &m2915_MI);
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
		t434 * L_23 = &(__this->f4);
		float L_24 = m2590(L_23, &m2590_MI);
		V_1 = L_24;
		t434 * L_25 = &(__this->f4);
		float L_26 = m2595(L_25, &m2595_MI);
		float L_27 = (__this->f31);
		VirtActionInvoker2< float, float >::Invoke(&m3225_MI, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(&m3226_MI, __this);
		t434 * L_28 = &(__this->f4);
		float L_29 = V_1;
		m2661(L_28, L_29, &m2661_MI);
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
		m3221(__this, L_34, L_35, &m3221_MI);
		float L_36 = V_2;
		__this->f2 = L_36;
		float L_37 = V_3;
		__this->f3 = L_37;
		t434 * L_38 = &(__this->f4);
		float L_39 = p1;
		m2658(L_38, L_39, &m2658_MI);
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
		m3221(__this, L_44, L_45, &m3221_MI);
		t434 * L_46 = &(__this->f4);
		float L_47 = p1;
		m2658(L_46, L_47, &m2658_MI);
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
extern TypeInfo t705_TI;
#include "t705MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m3228 (t696 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
#include "t706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t706_TI;
#include "t706MD.h"



#include "t707.h"
#ifndef _MSC_VER
#else
#endif

#include "t28.h"
extern TypeInfo t584_TI;
#include "t28MD.h"
#include "t584MD.h"
extern MethodInfo m1181_MI;
extern MethodInfo m3233_MI;
extern MethodInfo m3302_MI;
extern MethodInfo m3235_MI;
extern MethodInfo m4219_MI;
extern MethodInfo m3239_MI;


extern MethodInfo m3229_MI;
extern "C" void m3229 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = m1181(NULL, &m1181_MI);
		((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f2 = L_0;
		((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f3 = 0;
		return;
	}
}
extern MethodInfo m3230_MI;
extern "C" t2* m3230 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3230_ftn) ();
	static m3230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3231_MI;
extern "C" void m3231 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef void (*m3231_ftn) (t2*);
	static m3231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(p0);
}
extern "C" t692 * m3232 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		int32_t L_0 = ((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f0;
		t692 * L_1 = m3233(NULL, L_0, &m3233_MI);
		return L_1;
	}
}
extern "C" t692 * m3233 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t692 * (*m3233_ftn) (int32_t);
	static m3233_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3233_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3234_MI;
extern "C" void m3234 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f0 = L_0;
		int32_t L_1 = p1;
		((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		m3182(NULL, (t692 *)NULL, &m3182_MI);
		int32_t L_2 = p2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
		m3190(NULL, L_3, 0, &m3190_MI);
		int32_t L_4 = p1;
		m3191(NULL, L_4, &m3191_MI);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t691_TI));
		m3184(NULL, 0, &m3184_MI);
		return;
	}
}
extern "C" void m3235 (t9 * __this , MethodInfo* method)
{
	typedef void (*m3235_ftn) ();
	static m3235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
extern MethodInfo m3236_MI;
extern "C" void m3236 (t9 * __this , int32_t p0, MethodInfo* method)
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
			t471 * L_0 = m3363(NULL, &m3363_MI);
			int32_t L_1 = m3359(L_0, &m3359_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			m3193(NULL, &m3193_MI);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			m3194(NULL, &m3194_MI);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
			int32_t L_4 = ((t707_SFs*)InitializedTypeInfo(&t707_TI)->static_fields)->f1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t699_TI));
			m3190(NULL, L_4, 0, &m3190_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t584_TI));
			m3302(NULL, &m3302_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		m3235(NULL, &m3235_MI);
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
extern MethodInfo m3237_MI;
extern "C" bool m3237 (t9 * __this , t138 * p0, MethodInfo* method)
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
		if (((t706 *)IsInst(L_1, InitializedTypeInfo(&t706_TI))))
		{
			goto IL_0025;
		}
	}
	{
		t138 * L_2 = p0;
		t138 * L_3 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4219_MI, L_2);
		if (((t706 *)IsInst(L_3, InitializedTypeInfo(&t706_TI))))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		m3235(NULL, &m3235_MI);
		return 1;
	}
}
extern "C" void m3238 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t707_TI));
		int32_t L_0 = m3239(NULL, &m3239_MI);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t556 * L_1 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_1, (t2*) &_stringLiteral179, &m2885_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" int32_t m3239 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3239_ftn) ();
	static m3239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
#include "t708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t708_TI;
#include "t708MD.h"

extern TypeInfo t43_TI;
#include "t43MD.h"
extern MethodInfo m2579_MI;
extern MethodInfo m3390_MI;


extern MethodInfo m3240_MI;
extern "C" void m3240 (t708 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		__this->f1 = 1;
		t43  L_0 = m2579(NULL, &m2579_MI);
		__this->f2 = L_0;
		__this->f3 = (-1.0f);
		t43  L_1 = {0};
		m3390(&L_1, (0.5f), (0.5f), (1.0f), &m3390_MI);
		__this->f4 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
#include "t709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t709_TI;
#include "t709MD.h"



extern MethodInfo m3241_MI;
extern "C" void m3241 (t709 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3242_MI;
extern "C" void m3242 (t709 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3242((t709 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t709(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3243_MI;
extern "C" t9 * m3243 (t709 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3244_MI;
extern "C" void m3244 (t709 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t692_TI;

#include "t417.h"
#include "t873.h"
#include "t711.h"
#include "t712.h"
#include "t874.h"
#include "t875.h"
extern TypeInfo t710_TI;
extern TypeInfo t873_TI;
extern TypeInfo t711_TI;
extern TypeInfo t589_TI;
extern TypeInfo t875_TI;
#include "t143MD.h"
#include "t873MD.h"
#include "t711MD.h"
#include "t712MD.h"
#include "t874MD.h"
extern Il2CppType t710_0_0_0;
extern Il2CppType t711_0_0_0;
extern Il2CppType t875_0_0_0;
extern MethodInfo m333_MI;
extern MethodInfo m3345_MI;
extern MethodInfo m3293_MI;
extern MethodInfo m611_MI;
extern MethodInfo m3294_MI;
extern MethodInfo m4220_MI;
extern MethodInfo m4221_MI;
extern MethodInfo m4222_MI;
extern MethodInfo m3331_MI;
extern MethodInfo m3292_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m3332_MI;
extern MethodInfo m3393_MI;
extern MethodInfo m3310_MI;
extern MethodInfo m3296_MI;
extern MethodInfo m425_MI;
extern MethodInfo m1166_MI;
extern MethodInfo m400_MI;
extern MethodInfo m4223_MI;
extern MethodInfo m3247_MI;
extern Il2CppGenericMethod m4221_GM;
extern Il2CppGenericMethod m4222_GM;
extern Il2CppGenericMethod m4223_GM;
extern Il2CppGenericMethod m4224_GM;
extern Il2CppGenericMethod m4225_GM;


extern MethodInfo m3245_MI;
extern TypeInfo* t710_TI_var;
extern "C" void m3245 (t692 * __this, MethodInfo* method)
{
	static bool m3245_init;
	if (!m3245_init)
	{
		t710_TI_var = il2cpp_codegen_class_from_type(&t710_0_0_0);
		m3245_init = true;
	}
	{
		t708 * L_0 = (t708 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t708_TI));
		m3240(L_0, &m3240_MI);
		__this->f24 = L_0;
		m3124(__this, &m3124_MI);
		__this->f23 = ((t710*)SZArrayNew(t710_TI_var, 1));
		return;
	}
}
extern MethodInfo m3246_MI;
extern "C" void m3246 (t692 * __this, MethodInfo* method)
{
	{
		m3293(__this, &m3293_MI);
		return;
	}
}
extern "C" t417 * m3247 (t692 * __this, MethodInfo* method)
{
	{
		t417 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3248_MI;
extern "C" void m3248 (t692 * __this, t417 * p0, MethodInfo* method)
{
	{
		t417 * L_0 = p0;
		__this->f2 = L_0;
		t692 * L_1 = ((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f28;
		bool L_2 = m333(NULL, L_1, __this, &m333_MI);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		t417 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		m3345(NULL, L_3, &m3345_MI);
	}

IL_0022:
	{
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3249_MI;
extern "C" t694 * m3249 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3250_MI;
extern "C" void m3250 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f3 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3251_MI;
extern "C" t694 * m3251 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3252_MI;
extern "C" void m3252 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f6 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3253_MI;
extern "C" t694 * m3253 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3254_MI;
extern "C" void m3254 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f7 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3255_MI;
extern "C" t694 * m3255 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3256_MI;
extern "C" void m3256 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f8 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3257_MI;
extern "C" t694 * m3257 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3258_MI;
extern "C" void m3258 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f4 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3259_MI;
extern "C" t694 * m3259 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3260_MI;
extern "C" void m3260 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f5 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3261_MI;
extern "C" t694 * m3261 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m3262_MI;
extern "C" void m3262 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f9 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3263_MI;
extern "C" t694 * m3263 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m3264_MI;
extern "C" void m3264 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f10 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3265_MI;
extern "C" t694 * m3265 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m3266_MI;
extern "C" void m3266 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f11 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3267_MI;
extern "C" t694 * m3267 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m3268_MI;
extern "C" void m3268 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f12 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3269_MI;
extern "C" t694 * m3269 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m3270_MI;
extern "C" void m3270 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f13 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3271_MI;
extern "C" t694 * m3271 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m3272_MI;
extern "C" void m3272 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f14 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3273_MI;
extern "C" t694 * m3273 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m3274_MI;
extern "C" void m3274 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f15 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3275_MI;
extern "C" t694 * m3275 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m3276_MI;
extern "C" void m3276 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f16 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3277_MI;
extern "C" t694 * m3277 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m3278_MI;
extern "C" void m3278 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f17 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3279_MI;
extern "C" t694 * m3279 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m3280_MI;
extern "C" void m3280 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f18 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3281_MI;
extern "C" t694 * m3281 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m3282_MI;
extern "C" void m3282 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f19 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3283_MI;
extern "C" t694 * m3283 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m3284_MI;
extern "C" void m3284 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f20 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3285_MI;
extern "C" t694 * m3285 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m3286_MI;
extern "C" void m3286 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f21 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3287_MI;
extern "C" t694 * m3287 (t692 * __this, MethodInfo* method)
{
	{
		t694 * L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m3288_MI;
extern "C" void m3288 (t692 * __this, t694 * p0, MethodInfo* method)
{
	{
		t694 * L_0 = p0;
		__this->f22 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3289_MI;
extern "C" t710* m3289 (t692 * __this, MethodInfo* method)
{
	{
		t710* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m3290_MI;
extern "C" void m3290 (t692 * __this, t710* p0, MethodInfo* method)
{
	{
		t710* L_0 = p0;
		__this->f23 = L_0;
		m3293(__this, &m3293_MI);
		return;
	}
}
extern MethodInfo m3291_MI;
extern "C" t708 * m3291 (t692 * __this, MethodInfo* method)
{
	{
		t708 * L_0 = (__this->f24);
		return L_0;
	}
}
extern "C" t694 * m3292 (t9 * __this , MethodInfo* method)
{
	{
		t694 * L_0 = ((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_1 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_1, &m3325_MI);
		((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f25 = L_1;
	}

IL_0014:
	{
		t694 * L_2 = ((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f25;
		return L_2;
	}
}
extern "C" void m3293 (t692 * __this, MethodInfo* method)
{
	{
		t710* L_0 = (__this->f23);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m611(NULL, (t2*) &_stringLiteral180, &m611_MI);
	}

IL_0015:
	{
		m3294(__this, &m3294_MI);
		return;
	}
}
extern TypeInfo* t711_TI_var;
extern MethodInfo* m4221_MI_var;
extern MethodInfo* m4222_MI_var;
extern "C" void m3294 (t692 * __this, MethodInfo* method)
{
	static bool m3294_init;
	if (!m3294_init)
	{
		t711_TI_var = il2cpp_codegen_class_from_type(&t711_0_0_0);
		m4221_MI_var = il2cpp_codegen_genericmethod_get_method(&m4221_GM);
		m4222_MI_var = il2cpp_codegen_genericmethod_get_method(&m4222_GM);
		m3294_init = true;
	}
	int32_t V_0 = 0;
	{
		t694 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_1 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_1, &m3325_MI);
		__this->f3 = L_1;
	}

IL_0016:
	{
		t694 * L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_3 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_3, &m3325_MI);
		__this->f4 = L_3;
	}

IL_002c:
	{
		t694 * L_4 = (__this->f5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_5 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_5, &m3325_MI);
		__this->f5 = L_5;
	}

IL_0042:
	{
		t694 * L_6 = (__this->f6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_7 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_7, &m3325_MI);
		__this->f6 = L_7;
	}

IL_0058:
	{
		t694 * L_8 = (__this->f9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_9 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_9, &m3325_MI);
		__this->f9 = L_9;
	}

IL_006e:
	{
		t694 * L_10 = (__this->f7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_11 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_11, &m3325_MI);
		__this->f7 = L_11;
	}

IL_0084:
	{
		t694 * L_12 = (__this->f8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_13 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_13, &m3325_MI);
		__this->f8 = L_13;
	}

IL_009a:
	{
		t694 * L_14 = (__this->f10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_15 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_15, &m3325_MI);
		__this->f10 = L_15;
	}

IL_00b0:
	{
		t694 * L_16 = (__this->f11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_17 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_17, &m3325_MI);
		__this->f11 = L_17;
	}

IL_00c6:
	{
		t694 * L_18 = (__this->f12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_19 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_19, &m3325_MI);
		__this->f12 = L_19;
	}

IL_00dc:
	{
		t694 * L_20 = (__this->f13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_21 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_21, &m3325_MI);
		__this->f13 = L_21;
	}

IL_00f2:
	{
		t694 * L_22 = (__this->f14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_23 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_23, &m3325_MI);
		__this->f14 = L_23;
	}

IL_0108:
	{
		t694 * L_24 = (__this->f15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_25 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_25, &m3325_MI);
		__this->f15 = L_25;
	}

IL_011e:
	{
		t694 * L_26 = (__this->f16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_27 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_27, &m3325_MI);
		__this->f16 = L_27;
	}

IL_0134:
	{
		t694 * L_28 = (__this->f17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_29 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_29, &m3325_MI);
		__this->f17 = L_29;
	}

IL_014a:
	{
		t694 * L_30 = (__this->f18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_31 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_31, &m3325_MI);
		__this->f18 = L_31;
	}

IL_0160:
	{
		t694 * L_32 = (__this->f19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_33 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_33, &m3325_MI);
		__this->f19 = L_33;
	}

IL_0176:
	{
		t694 * L_34 = (__this->f20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_35 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_35, &m3325_MI);
		__this->f20 = L_35;
	}

IL_018c:
	{
		t694 * L_36 = (__this->f21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_37 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_37, &m3325_MI);
		__this->f21 = L_37;
	}

IL_01a2:
	{
		t694 * L_38 = (__this->f22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_39 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_39, &m3325_MI);
		__this->f22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t873_TI));
		t873 * L_40 = m4220(NULL, &m4220_MI);
		t711 * L_41 = (t711 *)il2cpp_codegen_object_new (t711_TI_var);
		m4221(L_41, L_40, m4221_MI_var);
		__this->f26 = L_41;
		t711 * L_42 = (__this->f26);
		t694 * L_43 = (__this->f3);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_42, (t2*) &_stringLiteral181, L_43);
		t694 * L_44 = (__this->f3);
		m3331(L_44, (t2*) &_stringLiteral181, &m3331_MI);
		t711 * L_45 = (__this->f26);
		t694 * L_46 = (__this->f4);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_45, (t2*) &_stringLiteral182, L_46);
		t694 * L_47 = (__this->f4);
		m3331(L_47, (t2*) &_stringLiteral182, &m3331_MI);
		t711 * L_48 = (__this->f26);
		t694 * L_49 = (__this->f5);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_48, (t2*) &_stringLiteral183, L_49);
		t694 * L_50 = (__this->f5);
		m3331(L_50, (t2*) &_stringLiteral183, &m3331_MI);
		t711 * L_51 = (__this->f26);
		t694 * L_52 = (__this->f6);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_51, (t2*) &_stringLiteral184, L_52);
		t694 * L_53 = (__this->f6);
		m3331(L_53, (t2*) &_stringLiteral184, &m3331_MI);
		t711 * L_54 = (__this->f26);
		t694 * L_55 = (__this->f9);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_54, (t2*) &_stringLiteral185, L_55);
		t694 * L_56 = (__this->f9);
		m3331(L_56, (t2*) &_stringLiteral185, &m3331_MI);
		t711 * L_57 = (__this->f26);
		t694 * L_58 = (__this->f7);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_57, (t2*) &_stringLiteral186, L_58);
		t694 * L_59 = (__this->f7);
		m3331(L_59, (t2*) &_stringLiteral186, &m3331_MI);
		t711 * L_60 = (__this->f26);
		t694 * L_61 = (__this->f8);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_60, (t2*) &_stringLiteral187, L_61);
		t694 * L_62 = (__this->f8);
		m3331(L_62, (t2*) &_stringLiteral187, &m3331_MI);
		t711 * L_63 = (__this->f26);
		t694 * L_64 = (__this->f10);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_63, (t2*) &_stringLiteral188, L_64);
		t694 * L_65 = (__this->f10);
		m3331(L_65, (t2*) &_stringLiteral188, &m3331_MI);
		t711 * L_66 = (__this->f26);
		t694 * L_67 = (__this->f11);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_66, (t2*) &_stringLiteral189, L_67);
		t694 * L_68 = (__this->f11);
		m3331(L_68, (t2*) &_stringLiteral189, &m3331_MI);
		t711 * L_69 = (__this->f26);
		t694 * L_70 = (__this->f12);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_69, (t2*) &_stringLiteral190, L_70);
		t694 * L_71 = (__this->f12);
		m3331(L_71, (t2*) &_stringLiteral190, &m3331_MI);
		t711 * L_72 = (__this->f26);
		t694 * L_73 = (__this->f13);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_72, (t2*) &_stringLiteral191, L_73);
		t694 * L_74 = (__this->f13);
		m3331(L_74, (t2*) &_stringLiteral191, &m3331_MI);
		t711 * L_75 = (__this->f26);
		t694 * L_76 = (__this->f14);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_75, (t2*) &_stringLiteral192, L_76);
		t694 * L_77 = (__this->f14);
		m3331(L_77, (t2*) &_stringLiteral192, &m3331_MI);
		t711 * L_78 = (__this->f26);
		t694 * L_79 = (__this->f15);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_78, (t2*) &_stringLiteral193, L_79);
		t694 * L_80 = (__this->f15);
		m3331(L_80, (t2*) &_stringLiteral193, &m3331_MI);
		t711 * L_81 = (__this->f26);
		t694 * L_82 = (__this->f16);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_81, (t2*) &_stringLiteral194, L_82);
		t694 * L_83 = (__this->f16);
		m3331(L_83, (t2*) &_stringLiteral194, &m3331_MI);
		t711 * L_84 = (__this->f26);
		t694 * L_85 = (__this->f17);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_84, (t2*) &_stringLiteral195, L_85);
		t694 * L_86 = (__this->f17);
		m3331(L_86, (t2*) &_stringLiteral195, &m3331_MI);
		t711 * L_87 = (__this->f26);
		t694 * L_88 = (__this->f18);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_87, (t2*) &_stringLiteral196, L_88);
		t694 * L_89 = (__this->f18);
		m3331(L_89, (t2*) &_stringLiteral196, &m3331_MI);
		t711 * L_90 = (__this->f26);
		t694 * L_91 = (__this->f19);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_90, (t2*) &_stringLiteral197, L_91);
		t694 * L_92 = (__this->f19);
		m3331(L_92, (t2*) &_stringLiteral197, &m3331_MI);
		t711 * L_93 = (__this->f26);
		t694 * L_94 = (__this->f20);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_93, (t2*) &_stringLiteral198, L_94);
		t694 * L_95 = (__this->f20);
		m3331(L_95, (t2*) &_stringLiteral198, &m3331_MI);
		t711 * L_96 = (__this->f26);
		t694 * L_97 = (__this->f21);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_96, (t2*) &_stringLiteral199, L_97);
		t694 * L_98 = (__this->f21);
		m3331(L_98, (t2*) &_stringLiteral199, &m3331_MI);
		t711 * L_99 = (__this->f26);
		t694 * L_100 = (__this->f22);
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_99, (t2*) &_stringLiteral200, L_100);
		t694 * L_101 = (__this->f22);
		m3331(L_101, (t2*) &_stringLiteral200, &m3331_MI);
		t710* L_102 = (__this->f23);
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
		t710* L_103 = (__this->f23);
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		if ((*(t694 **)(t694 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		t711 * L_106 = (__this->f26);
		t710* L_107 = (__this->f23);
		int32_t L_108 = V_0;
		int32_t L_109 = L_108;
		t2* L_110 = m3330((*(t694 **)(t694 **)SZArrayLdElema(L_107, L_109)), &m3330_MI);
		t710* L_111 = (__this->f23);
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		VirtActionInvoker2< t2*, t694 * >::Invoke(m4222_MI_var, L_106, L_110, (*(t694 **)(t694 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		t710* L_116 = (__this->f23);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((t121 *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		t694 * L_117 = m3292(NULL, &m3292_MI);
		m3342(L_117, 1, &m3342_MI);
		t694 * L_118 = m3292(NULL, &m3292_MI);
		t712 * L_119 = m3332(L_118, &m3332_MI);
		t43  L_120 = m3393(NULL, &m3393_MI);
		m3310(L_119, L_120, &m3310_MI);
		return;
	}
}
extern MethodInfo m3295_MI;
extern TypeInfo* t158_TI_var;
extern "C" t694 * m3295 (t692 * __this, t2* p0, MethodInfo* method)
{
	static bool m3295_init;
	if (!m3295_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3295_init = true;
	}
	t694 * V_0 = {0};
	{
		t2* L_0 = p0;
		t694 * L_1 = m3296(__this, L_0, &m3296_MI);
		V_0 = L_1;
		t694 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		t694 * L_3 = V_0;
		return L_3;
	}

IL_0010:
	{
		t158* L_4 = ((t158*)SZArrayNew(t158_TI_var, 6));
		ArrayElementTypeCheck (L_4, (t2*) &_stringLiteral201);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 0)) = (t9 *)(t2*) &_stringLiteral201;
		t158* L_5 = L_4;
		t2* L_6 = p0;
		ArrayElementTypeCheck (L_5, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_5, 1)) = (t9 *)L_6;
		t158* L_7 = L_5;
		ArrayElementTypeCheck (L_7, (t2*) &_stringLiteral202);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)(t2*) &_stringLiteral202;
		t158* L_8 = L_7;
		t2* L_9 = m425(__this, &m425_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_9;
		t158* L_10 = L_8;
		ArrayElementTypeCheck (L_10, (t2*) &_stringLiteral203);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 4)) = (t9 *)(t2*) &_stringLiteral203;
		t158* L_11 = L_10;
		t471 * L_12 = m3363(NULL, &m3363_MI);
		int32_t L_13 = m3359(L_12, &m3359_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t589_TI), &L_14);
		ArrayElementTypeCheck (L_11, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, 5)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m515(NULL, L_11, &m515_MI);
		m1166(NULL, L_16, &m1166_MI);
		t694 * L_17 = m3292(NULL, &m3292_MI);
		return L_17;
	}
}
extern MethodInfo* m4223_MI_var;
extern "C" t694 * m3296 (t692 * __this, t2* p0, MethodInfo* method)
{
	static bool m3296_init;
	if (!m3296_init)
	{
		m4223_MI_var = il2cpp_codegen_genericmethod_get_method(&m4223_GM);
		m3296_init = true;
	}
	t694 * V_0 = {0};
	{
		bool L_0 = m333(NULL, __this, (t57 *)NULL, &m333_MI);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral204, &m400_MI);
		return (t694 *)NULL;
	}

IL_0018:
	{
		t711 * L_1 = (__this->f26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		m3294(__this, &m3294_MI);
	}

IL_0029:
	{
		t711 * L_2 = (__this->f26);
		t2* L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker2< bool, t2*, t694 ** >::Invoke(m4223_MI_var, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t694 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (t694 *)NULL;
	}
}
extern "C" void m3297 (t692 * __this, MethodInfo* method)
{
	{
		((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f28 = __this;
		t417 * L_0 = m3247(__this, &m3247_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		m3345(NULL, L_0, &m3345_MI);
		t709 * L_1 = ((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t709 * L_2 = ((t692_SFs*)InitializedTypeInfo(&t692_TI)->static_fields)->f27;
		VirtActionInvoker0::Invoke(&m3242_MI, L_2);
	}

IL_0025:
	{
		return;
	}
}
extern MethodInfo m3298_MI;
extern TypeInfo* t875_TI_var;
extern MethodInfo* m4224_MI_var;
extern MethodInfo* m4225_MI_var;
extern "C" t9 * m3298 (t692 * __this, MethodInfo* method)
{
	static bool m3298_init;
	if (!m3298_init)
	{
		t875_TI_var = il2cpp_codegen_class_from_type(&t875_0_0_0);
		m4224_MI_var = il2cpp_codegen_genericmethod_get_method(&m4224_GM);
		m4225_MI_var = il2cpp_codegen_genericmethod_get_method(&m4225_GM);
		m3298_init = true;
	}
	{
		t711 * L_0 = (__this->f26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		m3294(__this, &m3294_MI);
	}

IL_0011:
	{
		t711 * L_1 = (__this->f26);
		t874 * L_2 = m4224(L_1, m4224_MI_var);
		t875  L_3 = m4225(L_2, m4225_MI_var);
		t875  L_4 = L_3;
		t9 * L_5 = Box(t875_TI_var, &L_4);
		return (t9 *)L_5;
	}
}
#include "t584.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2704_MI;
extern MethodInfo m3299_MI;


extern "C" void m3299 (t584 * __this, MethodInfo* method)
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
extern "C" void m2704 (t584 * __this, t2* p0, MethodInfo* method)
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
extern MethodInfo m3300_MI;
extern "C" void m3300 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t584 * L_1 = (t584 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t584_TI));
		m2704(L_1, L_0, &m2704_MI);
		((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f3 = L_1;
		t584 * L_2 = (t584 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t584_TI));
		m3299(L_2, &m3299_MI);
		((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f4 = L_2;
		t584 * L_3 = (t584 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t584_TI));
		m3299(L_3, &m3299_MI);
		((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f5 = L_3;
		t584 * L_4 = (t584 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t584_TI));
		m3299(L_4, &m3299_MI);
		((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f6 = L_4;
		return;
	}
}
extern MethodInfo m2703_MI;
extern "C" t2* m2703 (t584 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3301_MI;
extern "C" void m3301 (t584 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3302 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t584_TI));
		t584 * L_0 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f4;
		L_0->f0 = (t2*)NULL;
		t584 * L_1 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_1->f2 = L_2;
		t584 * L_3 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f5;
		L_3->f1 = (t148 *)NULL;
		t584 * L_4 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f5;
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_4->f2 = L_5;
		t584 * L_6 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f6;
		L_6->f0 = (t2*)NULL;
		t584 * L_7 = ((t584_SFs*)InitializedTypeInfo(&t584_TI)->static_fields)->f6;
		L_7->f1 = (t148 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t712_TI;

extern MethodInfo m3309_MI;
extern MethodInfo m3306_MI;
extern MethodInfo m3308_MI;
extern MethodInfo m3307_MI;


extern MethodInfo m3303_MI;
extern "C" void m3303 (t712 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3306(__this, &m3306_MI);
		return;
	}
}
extern MethodInfo m3304_MI;
extern "C" void m3304 (t712 * __this, t694 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t694 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		t425 * L_2 = m3308(__this, &m3308_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m3305_MI;
extern "C" void m3305 (t712 * __this, MethodInfo* method)
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
			t694 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3307(__this, &m3307_MI);
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
extern "C" void m3306 (t712 * __this, MethodInfo* method)
{
	typedef void (*m3306_ftn) (t712 *);
	static m3306_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3306_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3307 (t712 * __this, MethodInfo* method)
{
	typedef void (*m3307_ftn) (t712 *);
	static m3307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t425 * m3308 (t712 * __this, MethodInfo* method)
{
	typedef t425 * (*m3308_ftn) (t712 *);
	static m3308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3309 (t712 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3309_ftn) (t712 *, t43 *);
	static m3309_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3309_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3310 (t712 * __this, t43  p0, MethodInfo* method)
{
	{
		m3309(__this, (&p0), &m3309_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3314_MI;
extern MethodInfo m3315_MI;
extern MethodInfo m3323_MI;


extern "C" void m2920 (t530 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3314(__this, &m3314_MI);
		return;
	}
}
extern MethodInfo m3311_MI;
extern "C" void m3311 (t530 * __this, t694 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t694 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m3312_MI;
extern "C" void m3312 (t530 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3314(__this, &m3314_MI);
		int32_t L_0 = p0;
		m3316(__this, L_0, &m3316_MI);
		int32_t L_1 = p1;
		m3318(__this, L_1, &m3318_MI);
		int32_t L_2 = p2;
		m3319(__this, L_2, &m3319_MI);
		int32_t L_3 = p3;
		m3321(__this, L_3, &m3321_MI);
		return;
	}
}
extern MethodInfo m3313_MI;
extern "C" void m3313 (t530 * __this, MethodInfo* method)
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
			t694 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3315(__this, &m3315_MI);
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
extern "C" void m3314 (t530 * __this, MethodInfo* method)
{
	typedef void (*m3314_ftn) (t530 *);
	static m3314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3315 (t530 * __this, MethodInfo* method)
{
	typedef void (*m3315_ftn) (t530 *);
	static m3315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3315_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m2915 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m2915_ftn) (t530 *);
	static m2915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3316 (t530 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3316_ftn) (t530 *, int32_t);
	static m3316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3316_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3317 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m3317_ftn) (t530 *);
	static m3317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3318 (t530 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3318_ftn) (t530 *, int32_t);
	static m3318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2916 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m2916_ftn) (t530 *);
	static m2916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3319 (t530 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3319_ftn) (t530 *, int32_t);
	static m3319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3320 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m3320_ftn) (t530 *);
	static m3320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3321 (t530 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3321_ftn) (t530 *, int32_t);
	static m3321_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3321_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2906 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m2906_ftn) (t530 *);
	static m2906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2907 (t530 * __this, MethodInfo* method)
{
	typedef int32_t (*m2907_ftn) (t530 *);
	static m2907_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2907_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3322_MI;
extern "C" t434  m3322 (t530 * __this, t434  p0, MethodInfo* method)
{
	{
		t434  L_0 = m3323(NULL, __this, (&p0), &m3323_MI);
		return L_0;
	}
}
extern "C" t434  m3323 (t9 * __this , t530 * p0, t434 * p1, MethodInfo* method)
{
	typedef t434  (*m3323_ftn) (t530 *, t434 *);
	static m3323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3324_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3324 (t530 * __this, MethodInfo* method)
{
	static bool m3324_init;
	if (!m3324_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3324_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		int32_t L_1 = m2915(__this, &m2915_MI);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		int32_t L_5 = m3317(__this, &m3317_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		int32_t L_9 = m2916(__this, &m2916_MI);
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		int32_t L_13 = m3320(__this, &m3320_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral205, L_12, &m3562_MI);
		return L_16;
	}
}
#include "t418.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t418_TI;
#include "t418MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3333_MI;
extern MethodInfo m3336_MI;
extern MethodInfo m3343_MI;
extern MethodInfo m3328_MI;
extern MethodInfo m3329_MI;
extern MethodInfo m3348_MI;
extern MethodInfo m3349_MI;
extern MethodInfo m3351_MI;
extern MethodInfo m3353_MI;


extern "C" void m3325 (t694 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3328(__this, &m3328_MI);
		return;
	}
}
extern MethodInfo m3326_MI;
extern "C" void m3326 (t9 * __this , MethodInfo* method)
{
	{
		((t694_SFs*)InitializedTypeInfo(&t694_TI)->static_fields)->f14 = 1;
		return;
	}
}
extern MethodInfo m3327_MI;
extern "C" void m3327 (t694 * __this, MethodInfo* method)
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
		m3329(__this, &m3329_MI);
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
extern "C" void m3328 (t694 * __this, MethodInfo* method)
{
	typedef void (*m3328_ftn) (t694 *);
	static m3328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3329 (t694 * __this, MethodInfo* method)
{
	typedef void (*m3329_ftn) (t694 *);
	static m3329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t2* m3330 (t694 * __this, MethodInfo* method)
{
	typedef t2* (*m3330_ftn) (t694 *);
	static m3330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3331 (t694 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3331_ftn) (t694 *, t2*);
	static m3331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t712 * m3332 (t694 * __this, MethodInfo* method)
{
	{
		t712 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3333(__this, 0, &m3333_MI);
		t712 * L_2 = (t712 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t712_TI));
		m3304(L_2, __this, L_1, &m3304_MI);
		__this->f1 = L_2;
	}

IL_001e:
	{
		t712 * L_3 = (__this->f1);
		return L_3;
	}
}
extern "C" t58 m3333 (t694 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3333_ftn) (t694 *, int32_t);
	static m3333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t530 * m3334 (t694 * __this, MethodInfo* method)
{
	{
		t530 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3336(__this, 1, &m3336_MI);
		t530 * L_2 = (t530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t530_TI));
		m3311(L_2, __this, L_1, &m3311_MI);
		__this->f11 = L_2;
	}

IL_001e:
	{
		t530 * L_3 = (__this->f11);
		return L_3;
	}
}
extern "C" t530 * m3335 (t694 * __this, MethodInfo* method)
{
	{
		t530 * L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3336(__this, 2, &m3336_MI);
		t530 * L_2 = (t530 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t530_TI));
		m3311(L_2, __this, L_1, &m3311_MI);
		__this->f10 = L_2;
	}

IL_001e:
	{
		t530 * L_3 = (__this->f10);
		return L_3;
	}
}
extern "C" t58 m3336 (t694 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3336_ftn) (t694 *, int32_t);
	static m3336_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3336_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" float m3337 (t694 * __this, MethodInfo* method)
{
	typedef float (*m3337_ftn) (t694 *);
	static m3337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m3338 (t694 * __this, MethodInfo* method)
{
	typedef float (*m3338_ftn) (t694 *);
	static m3338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3338_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3339 (t694 * __this, MethodInfo* method)
{
	typedef bool (*m3339_ftn) (t694 *);
	static m3339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3340 (t694 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3340_ftn) (t694 *, bool);
	static m3340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m3341 (t694 * __this, MethodInfo* method)
{
	typedef bool (*m3341_ftn) (t694 *);
	static m3341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3342 (t694 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3342_ftn) (t694 *, bool);
	static m3342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" float m3343 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef float (*m3343_ftn) (t58);
	static m3343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3344_MI;
extern "C" float m3344 (t694 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		float L_1 = m3343(NULL, L_0, &m3343_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = roundf(L_1);
		return L_2;
	}
}
extern "C" void m3345 (t9 * __this , t417 * p0, MethodInfo* method)
{
	typedef void (*m3345_ftn) (t417 *);
	static m3345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(p0);
}
extern "C" t694 * m3346 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_0 = ((t694_SFs*)InitializedTypeInfo(&t694_TI)->static_fields)->f15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_1 = (t694 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t694_TI));
		m3325(L_1, &m3325_MI);
		((t694_SFs*)InitializedTypeInfo(&t694_TI)->static_fields)->f15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		t694 * L_2 = ((t694_SFs*)InitializedTypeInfo(&t694_TI)->static_fields)->f15;
		return L_2;
	}
}
extern MethodInfo m3347_MI;
extern "C" t28  m3347 (t694 * __this, t434  p0, t584 * p1, int32_t p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t434  L_1 = p0;
		t584 * L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		m3348(NULL, L_0, L_1, L_2, L_3, (&V_0), &m3348_MI);
		t28  L_4 = V_0;
		return L_4;
	}
}
extern "C" void m3348 (t9 * __this , t58 p0, t434  p1, t584 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t584 * L_1 = p2;
		int32_t L_2 = p3;
		t28 * L_3 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		m3349(NULL, L_0, (&p1), L_1, L_2, L_3, &m3349_MI);
		return;
	}
}
extern "C" void m3349 (t9 * __this , t58 p0, t434 * p1, t584 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	typedef void (*m3349_ftn) (t58, t434 *, t584 *, int32_t, t28 *);
	static m3349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m3350_MI;
extern "C" t28  m3350 (t694 * __this, t584 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t584 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		m3351(NULL, L_0, L_1, (&V_0), &m3351_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern "C" void m3351 (t9 * __this , t58 p0, t584 * p1, t28 * p2, MethodInfo* method)
{
	typedef void (*m3351_ftn) (t58, t584 *, t28 *);
	static m3351_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3351_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3352_MI;
extern "C" float m3352 (t694 * __this, t584 * p0, float p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t584 * L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t694_TI));
		float L_3 = m3353(NULL, L_0, L_1, L_2, &m3353_MI);
		return L_3;
	}
}
extern "C" float m3353 (t9 * __this , t58 p0, t584 * p1, float p2, MethodInfo* method)
{
	typedef float (*m3353_ftn) (t58, t584 *, float);
	static m3353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3354_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3354 (t694 * __this, MethodInfo* method)
{
	static bool m3354_init;
	if (!m3354_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3354_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_1 = m3330(__this, &m3330_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t2* L_2 = m3562(NULL, (t2*) &_stringLiteral206, L_0, &m3562_MI);
		return L_2;
	}
}
#include "t472.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t472_TI;
#include "t472MD.h"



#include "t468.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t468_TI;
#include "t468MD.h"

extern MethodInfo m3355_MI;


extern MethodInfo m2773_MI;
extern "C" t468 * m2773 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, MethodInfo* method)
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
		t468 * L_8 = m3355(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3355_MI);
		return L_8;
	}
}
extern MethodInfo m2774_MI;
extern "C" t468 * m2774 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
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
		t468 * L_8 = m3355(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3355_MI);
		return L_8;
	}
}
extern "C" t468 * m3355 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, bool p5, t2* p6, MethodInfo* method)
{
	{
		return (t468 *)NULL;
	}
}
extern MethodInfo m2697_MI;
extern "C" t2* m2697 (t468 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m2698_MI;
extern "C" void m2698 (t468 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2772_MI;
extern "C" void m2772 (t9 * __this , bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2696_MI;
extern "C" bool m2696 (t468 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2771_MI;
extern "C" void m2771 (t468 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2716_MI;
extern "C" bool m2716 (t468 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m2712_MI;
extern "C" bool m2712 (t468 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2711_MI;
extern "C" bool m2711 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t471_TI;

#include "t588.h"
#include "t296.h"
#include "t287.h"
extern TypeInfo t28_TI;
extern TypeInfo t588_TI;
extern TypeInfo t287_TI;
extern MethodInfo m3361_MI;
extern MethodInfo m3356_MI;
extern MethodInfo m3358_MI;
extern MethodInfo m2708_MI;
extern MethodInfo m3364_MI;
extern MethodInfo m3366_MI;
extern MethodInfo m2728_MI;
extern MethodInfo m3367_MI;
extern MethodInfo m3360_MI;
extern MethodInfo m3376_MI;
extern MethodInfo m2727_MI;
extern MethodInfo m4226_MI;
extern MethodInfo m2966_MI;
extern MethodInfo m2729_MI;
extern MethodInfo m3362_MI;
extern MethodInfo m511_MI;


extern "C" void m2708 (t471 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3356(__this, &m3356_MI);
		return;
	}
}
extern "C" void m3356 (t471 * __this, MethodInfo* method)
{
	typedef void (*m3356_ftn) (t471 *);
	static m3356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3357_MI;
extern "C" void m3357 (t471 * __this, MethodInfo* method)
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
		m3358(__this, &m3358_MI);
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
extern "C" void m3358 (t471 * __this, MethodInfo* method)
{
	typedef void (*m3358_ftn) (t471 *);
	static m3358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2731_MI;
extern "C" int32_t m2731 (t471 * __this, MethodInfo* method)
{
	typedef int32_t (*m2731_ftn) (t471 *);
	static m2731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3359 (t471 * __this, MethodInfo* method)
{
	typedef int32_t (*m3359_ftn) (t471 *);
	static m3359_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3359_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
extern "C" t28  m3360 (t471 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3361(__this, (&V_0), &m3361_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3361 (t471 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3361_ftn) (t471 *, t28 *);
	static m3361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2727 (t471 * __this, MethodInfo* method)
{
	typedef int32_t (*m2727_ftn) (t471 *);
	static m2727_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2727_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
extern "C" uint16_t m2729 (t471 * __this, MethodInfo* method)
{
	typedef uint16_t (*m2729_ftn) (t471 *);
	static m2729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m3362 (t471 * __this, MethodInfo* method)
{
	typedef t2* (*m3362_ftn) (t471 *);
	static m3362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2728 (t471 * __this, MethodInfo* method)
{
	typedef int32_t (*m2728_ftn) (t471 *);
	static m2728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2728_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
extern "C" t471 * m3363 (t9 * __this , MethodInfo* method)
{
	{
		t471 * L_0 = ((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" void m3364 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef void (*m3364_ftn) (t58);
	static m3364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3365_MI;
extern "C" void m3365 (t9 * __this , MethodInfo* method)
{
	{
		t471 * L_0 = ((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t471 * L_1 = (t471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t471_TI));
		m2708(L_1, &m2708_MI);
		((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f2 = L_1;
	}

IL_0014:
	{
		t471 * L_2 = ((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f2;
		((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f1 = L_2;
		t471 * L_3 = ((t471_SFs*)InitializedTypeInfo(&t471_TI)->static_fields)->f2;
		t58 L_4 = (L_3->f0);
		m3364(NULL, L_4, &m3364_MI);
		return;
	}
}
extern MethodInfo m2732_MI;
extern "C" bool m2732 (t9 * __this , t471 * p0, MethodInfo* method)
{
	typedef bool (*m2732_ftn) (t471 *);
	static m2732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3366 (t471 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m3359(__this, &m3359_MI);
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
extern "C" bool m3367 (t471 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = m3359(__this, &m3359_MI);
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
extern MethodInfo m3368_MI;
extern "C" int32_t m3368 (t471 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = m3366(__this, &m3366_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = m2728(__this, &m2728_MI);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = m3367(__this, &m3367_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t28  L_3 = m3360(__this, &m3360_MI);
		V_1 = L_3;
		int32_t L_4 = m3376((&V_1), &m3376_MI);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = m2727(__this, &m2727_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3369_MI;
extern "C" bool m3369 (t471 * __this, t9 * p0, MethodInfo* method)
{
	t471 * V_0 = {0};
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
		bool L_2 = m4226(NULL, __this, L_1, &m4226_MI);
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
		t126 * L_4 = m2486(L_3, &m2486_MI);
		t126 * L_5 = m2486(__this, &m2486_MI);
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
		V_0 = ((t471 *)Castclass(L_6, InitializedTypeInfo(&t471_TI)));
		int32_t L_7 = m3359(__this, &m3359_MI);
		t471 * L_8 = V_0;
		int32_t L_9 = m3359(L_8, &m3359_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = m2727(__this, &m2727_MI);
		t471 * L_11 = V_0;
		int32_t L_12 = m2727(L_11, &m2727_MI);
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
		bool L_13 = m3366(__this, &m3366_MI);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = m2728(__this, &m2728_MI);
		t471 * L_15 = V_0;
		int32_t L_16 = m2728(L_15, &m2728_MI);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = m3367(__this, &m3367_MI);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		t28  L_18 = m3360(__this, &m3360_MI);
		t471 * L_19 = V_0;
		t28  L_20 = m3360(L_19, &m3360_MI);
		bool L_21 = m2966(NULL, L_18, L_20, &m2966_MI);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
extern MethodInfo m3370_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3370 (t471 * __this, MethodInfo* method)
{
	static bool m3370_init;
	if (!m3370_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3370_init = true;
	}
	{
		bool L_0 = m3366(__this, &m3366_MI);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = m2729(__this, &m2729_MI);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_3 = m3359(__this, &m3359_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t589_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m2727(__this, &m2727_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t588_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 1)) = (t9 *)L_9;
		t158* L_10 = L_6;
		int32_t L_11 = m2728(__this, &m2728_MI);
		int32_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t287_TI), &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 2)) = (t9 *)L_13;
		t2* L_14 = m3562(NULL, (t2*) &_stringLiteral207, L_10, &m3562_MI);
		return L_14;
	}

IL_0051:
	{
		t158* L_15 = ((t158*)SZArrayNew(t158_TI_var, 8));
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral208);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 0)) = (t9 *)(t2*) &_stringLiteral208;
		t158* L_16 = L_15;
		int32_t L_17 = m3359(__this, &m3359_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t589_TI), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 1)) = (t9 *)L_19;
		t158* L_20 = L_16;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral209);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 2)) = (t9 *)(t2*) &_stringLiteral209;
		t158* L_21 = L_20;
		uint16_t L_22 = m2729(__this, &m2729_MI);
		int32_t L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t125_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 3)) = (t9 *)L_24;
		t158* L_25 = L_21;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral210);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)(t2*) &_stringLiteral210;
		t158* L_26 = L_25;
		int32_t L_27 = m2727(__this, &m2727_MI);
		int32_t L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t588_TI), &L_28);
		ArrayElementTypeCheck (L_26, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 5)) = (t9 *)L_29;
		t158* L_30 = L_26;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral211);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 6)) = (t9 *)(t2*) &_stringLiteral211;
		t158* L_31 = L_30;
		int32_t L_32 = m2728(__this, &m2728_MI);
		int32_t L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t287_TI), &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 7)) = (t9 *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m515(NULL, L_31, &m515_MI);
		t2* L_36 = m3562(NULL, L_35, ((t158*)SZArrayNew(t158_TI_var, 0)), &m3562_MI);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = m3367(__this, &m3367_MI);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		t158* L_38 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_39 = m3359(__this, &m3359_MI);
		int32_t L_40 = L_39;
		t9 * L_41 = Box(InitializedTypeInfo(&t589_TI), &L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((t9 **)(t9 **)SZArrayLdElema(L_38, 0)) = (t9 *)L_41;
		t158* L_42 = L_38;
		t28  L_43 = m3360(__this, &m3360_MI);
		t28  L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t28_TI), &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 1)) = (t9 *)L_45;
		t158* L_46 = L_42;
		int32_t L_47 = m2727(__this, &m2727_MI);
		int32_t L_48 = L_47;
		t9 * L_49 = Box(InitializedTypeInfo(&t588_TI), &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		*((t9 **)(t9 **)SZArrayLdElema(L_46, 2)) = (t9 *)L_49;
		t2* L_50 = m3562(NULL, (t2*) &_stringLiteral212, L_46, &m3562_MI);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = m3359(__this, &m3359_MI);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = m3359(__this, &m3359_MI);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		t158* L_53 = ((t158*)SZArrayNew(t158_TI_var, 2));
		int32_t L_54 = m3359(__this, &m3359_MI);
		int32_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t589_TI), &L_55);
		ArrayElementTypeCheck (L_53, L_56);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 0)) = (t9 *)L_56;
		t158* L_57 = L_53;
		t2* L_58 = m3362(__this, &m3362_MI);
		ArrayElementTypeCheck (L_57, L_58);
		*((t9 **)(t9 **)SZArrayLdElema(L_57, 1)) = (t9 *)L_58;
		t2* L_59 = m3562(NULL, (t2*) &_stringLiteral213, L_57, &m3562_MI);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_60 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_61 = m3359(__this, &m3359_MI);
		int32_t L_62 = L_61;
		t9 * L_63 = Box(InitializedTypeInfo(&t589_TI), &L_62);
		t2* L_64 = m511(NULL, L_60, L_63, &m511_MI);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void t471_marshal(const t471& unmarshaled, t471_marshaled& marshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
void t471_marshal_back(const t471_marshaled& marshaled, t471& unmarshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void t471_marshal_cleanup(t471_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t287MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t589MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t588MD.h"



#include "t179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t179_TI;
#include "t179MD.h"

extern MethodInfo m3373_MI;
extern MethodInfo m3371_MI;
extern MethodInfo m3372_MI;


extern MethodInfo m640_MI;
extern "C" void m640 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3371(NULL, (&p0), (&p1), &m3371_MI);
		return;
	}
}
extern "C" void m3371 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef void (*m3371_ftn) (t13 *, t13 *);
	static m3371_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3371_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m644_MI;
extern "C" void m644 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p1;
		m3372(NULL, (&p0), L_0, &m3372_MI);
		return;
	}
}
extern "C" void m3372 (t9 * __this , t13 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3372_ftn) (t13 *, float);
	static m3372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawWireSphere(UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3373 (t9 * __this , t43 * p0, MethodInfo* method)
{
	typedef void (*m3373_ftn) (t43 *);
	static m3373_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3373_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m639_MI;
extern "C" void m639 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		m3373(NULL, (&p0), &m3373_MI);
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

#include "t876.h"
extern TypeInfo t876_TI;
extern TypeInfo t13_TI;
#include "t876MD.h"
#include "t13MD.h"
extern MethodInfo m4227_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3374_MI;
extern MethodInfo m2905_MI;
extern MethodInfo m1186_MI;
extern MethodInfo m2726_MI;
extern MethodInfo m4228_MI;
extern MethodInfo m1184_MI;
extern MethodInfo m3378_MI;
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
extern MethodInfo m2673_MI;
extern "C" float m2673 (t28 * __this, int32_t p0, MethodInfo* method)
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
		t876 * L_5 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_5, (t2*) &_stringLiteral214, &m4227_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2684_MI;
extern "C" void m2684 (t28 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t876 * L_5 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_5, (t2*) &_stringLiteral214, &m4227_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
extern MethodInfo m2760_MI;
extern "C" t28  m2760 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern "C" void m3374 (t28 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = m1186(__this, &m1186_MI);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		t28  L_3 = m2726(NULL, (*(t28 *)__this), L_2, &m2726_MI);
		*__this = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		t28  L_4 = m1181(NULL, &m1181_MI);
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
		m3374((&V_0), &m3374_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m3375_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3375 (t28 * __this, MethodInfo* method)
{
	static bool m3375_init;
	if (!m3375_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3375_init = true;
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
		t2* L_8 = m3562(NULL, (t2*) &_stringLiteral215, L_4, &m3562_MI);
		return L_8;
	}
}
extern "C" int32_t m3376 (t28 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4205(L_0, &m4205_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4205(L_2, &m4205_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3377_MI;
extern "C" bool m3377 (t28 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4228(L_2, L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4228(L_5, L_6, &m4228_MI);
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
extern MethodInfo m2505_MI;
extern "C" float m2505 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m1186 (t28 * __this, MethodInfo* method)
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
extern MethodInfo m2465_MI;
extern "C" float m2465 (t28 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m3378 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" t28  m1181 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (0.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2669_MI;
extern "C" t28  m2669 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (1.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2909_MI;
extern "C" t28  m2909 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2672_MI;
extern "C" t28  m2672 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern "C" t28  m1184 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern MethodInfo m2670_MI;
extern "C" t28  m2670 (t9 * __this , t28  p0, float p1, MethodInfo* method)
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
extern "C" t28  m2726 (t9 * __this , t28  p0, float p1, MethodInfo* method)
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
extern "C" bool m2966 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1184(NULL, L_0, L_1, &m1184_MI);
		float L_3 = m3378(NULL, L_2, &m3378_MI);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern MethodInfo m2752_MI;
extern "C" bool m2752 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1184(NULL, L_0, L_1, &m1184_MI);
		float L_3 = m3378(NULL, L_2, &m3378_MI);
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
extern MethodInfo m3382_MI;
extern MethodInfo m2646_MI;
extern MethodInfo m334_MI;
extern MethodInfo m3379_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3385_MI;
extern MethodInfo m635_MI;
extern MethodInfo m476_MI;
extern MethodInfo m475_MI;
extern MethodInfo m458_MI;
extern MethodInfo m353_MI;
extern MethodInfo m3386_MI;
extern MethodInfo m354_MI;
extern MethodInfo m4229_MI;
extern MethodInfo m2843_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3387_MI;


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
		float L_1 = m2646(NULL, L_0, &m2646_MI);
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
		t13  L_7 = m3379(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m3379_MI);
		return L_7;
	}
}
extern "C" t13  m3379 (t9 * __this , t13  p0, t13  p1, t13 * p2, float p3, float p4, float p5, MethodInfo* method)
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
		t13  L_19 = m3385(NULL, L_17, L_18, &m3385_MI);
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
extern MethodInfo m2815_MI;
extern "C" float m2815 (t13 * __this, int32_t p0, MethodInfo* method)
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
		t876 * L_5 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_5, (t2*) &_stringLiteral216, &m4227_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2816_MI;
extern "C" void m2816 (t13 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t876 * L_5 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_5, (t2*) &_stringLiteral216, &m4227_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
extern MethodInfo m3380_MI;
extern "C" int32_t m3380 (t13 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4205(L_0, &m4205_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4205(L_2, &m4205_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4205(L_4, &m4205_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
extern MethodInfo m3381_MI;
extern "C" bool m3381 (t13 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4228(L_2, L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4228(L_5, L_6, &m4228_MI);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4228(L_8, L_9, &m4228_MI);
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
extern "C" t13  m3382 (t9 * __this , t13  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t13  L_0 = p0;
		float L_1 = m3386(NULL, L_0, &m3386_MI);
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
		t13  L_0 = m3382(NULL, (*(t13 *)__this), &m3382_MI);
		return L_0;
	}
}
extern MethodInfo m3383_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3383 (t13 * __this, MethodInfo* method)
{
	static bool m3383_init;
	if (!m3383_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3383_init = true;
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
		t2* L_12 = m3562(NULL, (t2*) &_stringLiteral217, L_8, &m3562_MI);
		return L_12;
	}
}
extern MethodInfo m3384_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3384 (t13 * __this, t2* p0, MethodInfo* method)
{
	static bool m3384_init;
	if (!m3384_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3384_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		float* L_1 = &(__this->f1);
		t2* L_2 = p0;
		t2* L_3 = m4229(L_1, L_2, &m4229_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f2);
		t2* L_6 = p0;
		t2* L_7 = m4229(L_5, L_6, &m4229_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f3);
		t2* L_10 = p0;
		t2* L_11 = m4229(L_9, L_10, &m4229_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t2* L_12 = m3562(NULL, (t2*) &_stringLiteral218, L_8, &m3562_MI);
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
extern MethodInfo m2526_MI;
extern "C" float m2526 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
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
extern "C" t13  m3385 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = m2843((&p0), &m2843_MI);
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
extern "C" float m3386 (t9 * __this , t13  p0, MethodInfo* method)
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
extern "C" float m3387 (t9 * __this , t13  p0, MethodInfo* method)
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
extern "C" float m2843 (t13 * __this, MethodInfo* method)
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
extern MethodInfo m2825_MI;
extern "C" t13  m2825 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = m2898(NULL, L_0, L_1, &m2898_MI);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m2898(NULL, L_3, L_4, &m2898_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m2898(NULL, L_6, L_7, &m2898_MI);
		t13  L_9 = {0};
		m357(&L_9, L_2, L_5, L_8, &m357_MI);
		return L_9;
	}
}
extern MethodInfo m2826_MI;
extern "C" t13  m2826 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
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
extern MethodInfo m3388_MI;
extern "C" t13  m3388 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m2847_MI;
extern "C" t13  m2847 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (-1.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2845_MI;
extern "C" t13  m2845 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (-1.0f), (0.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2846_MI;
extern "C" t13  m2846 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m3389_MI;
extern "C" bool m3389 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = p1;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		float L_3 = m3387(NULL, L_2, &m3387_MI);
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
		float L_3 = m3387(NULL, L_2, &m3387_MI);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m638_MI;
extern MethodInfo m3394_MI;
extern MethodInfo m3466_MI;


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
extern "C" void m3390 (t43 * __this, float p0, float p1, float p2, MethodInfo* method)
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
extern MethodInfo m3391_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3391 (t43 * __this, MethodInfo* method)
{
	static bool m3391_init;
	if (!m3391_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3391_init = true;
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
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral219, L_12, &m3562_MI);
		return L_16;
	}
}
extern MethodInfo m3392_MI;
extern "C" int32_t m3392 (t43 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	{
		t47  L_0 = m3394(NULL, (*(t43 *)__this), &m3394_MI);
		V_0 = L_0;
		int32_t L_1 = m3466((&V_0), &m3466_MI);
		return L_1;
	}
}
extern MethodInfo m2605_MI;
extern "C" bool m2605 (t43 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4228(L_2, L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f1);
		float L_6 = ((&V_0)->f1);
		bool L_7 = m4228(L_5, L_6, &m4228_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f2);
		float L_9 = ((&V_0)->f2);
		bool L_10 = m4228(L_8, L_9, &m4228_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f3);
		float L_12 = ((&V_0)->f3);
		bool L_13 = m4228(L_11, L_12, &m4228_MI);
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
extern MethodInfo m2540_MI;
extern "C" t43  m2540 (t9 * __this , t43  p0, t43  p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2646(NULL, L_0, &m2646_MI);
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
extern "C" t43  m3393 (t9 * __this , MethodInfo* method)
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
extern "C" t43  m2579 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m2839_MI;
extern "C" t43  m2839 (t9 * __this , t43  p0, float p1, MethodInfo* method)
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
extern "C" t47  m3394 (t9 * __this , t43  p0, MethodInfo* method)
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
#include "t552.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t552_TI;
#include "t552MD.h"

#include "t568.h"
extern TypeInfo t568_TI;
extern MethodInfo m2561_MI;


extern "C" void m2561 (t552 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, MethodInfo* method)
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
extern MethodInfo m3395_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3395 (t552 * __this, MethodInfo* method)
{
	static bool m3395_init;
	if (!m3395_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3395_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		uint8_t L_1 = (__this->f0);
		uint8_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t568_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		uint8_t L_5 = (__this->f1);
		uint8_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t568_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint8_t L_9 = (__this->f2);
		uint8_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t568_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		uint8_t L_13 = (__this->f3);
		uint8_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t568_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral220, L_12, &m3562_MI);
		return L_16;
	}
}
extern MethodInfo m2597_MI;
extern "C" t552  m2597 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2646(NULL, L_0, &m2646_MI);
		float L_2 = ((&p0)->f1);
		float L_3 = m2646(NULL, L_2, &m2646_MI);
		float L_4 = ((&p0)->f2);
		float L_5 = m2646(NULL, L_4, &m2646_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = m2646(NULL, L_6, &m2646_MI);
		t552  L_8 = {0};
		m2561(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), &m2561_MI);
		return L_8;
	}
}
extern MethodInfo m2562_MI;
extern "C" t43  m2562 (t9 * __this , t552  p0, MethodInfo* method)
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

extern MethodInfo m1093_MI;
extern MethodInfo m3402_MI;
extern MethodInfo m3397_MI;
extern MethodInfo m3398_MI;
extern MethodInfo m3404_MI;
extern MethodInfo m3403_MI;
extern MethodInfo m3405_MI;
extern MethodInfo m3396_MI;


extern "C" void m1093 (t93 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
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
extern MethodInfo m1045_MI;
extern "C" t93  m1045 (t9 * __this , MethodInfo* method)
{
	{
		t93  L_0 = {0};
		m1093(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), &m1093_MI);
		return L_0;
	}
}
extern "C" float m3396 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
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
		t93  L_1 = m3397(NULL, (&p0), (&V_0), &m3397_MI);
		return L_1;
	}
}
extern "C" t93  m3397 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef t93  (*m3397_ftn) (t13 *, t13 *);
	static m3397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2840_MI;
extern "C" t93  m2840 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3398(NULL, (&p0), &m3398_MI);
		return L_0;
	}
}
extern "C" t93  m3398 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t93  (*m3398_ftn) (t93 *);
	static m3398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3399_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3399 (t93 * __this, MethodInfo* method)
{
	static bool m3399_init;
	if (!m3399_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3399_init = true;
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
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral221, L_12, &m3562_MI);
		return L_16;
	}
}
extern MethodInfo m3400_MI;
extern "C" t13  m3400 (t93 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m3402(NULL, (*(t93 *)__this), &m3402_MI);
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
		t93  L_5 = m3404(NULL, L_4, &m3404_MI);
		return L_5;
	}
}
extern MethodInfo m3401_MI;
extern "C" t93  m3401 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.0174532924f), &m475_MI);
		t93  L_2 = m3404(NULL, L_1, &m3404_MI);
		return L_2;
	}
}
extern "C" t13  m3402 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3403(NULL, (&p0), &m3403_MI);
		return L_0;
	}
}
extern "C" t13  m3403 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t13  (*m3403_ftn) (t93 *);
	static m3403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t93  m3404 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3405(NULL, (&p0), &m3405_MI);
		return L_0;
	}
}
extern "C" t93  m3405 (t9 * __this , t13 * p0, MethodInfo* method)
{
	typedef t93  (*m3405_ftn) (t13 *);
	static m3405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3406_MI;
extern "C" int32_t m3406 (t93 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4205(L_0, &m4205_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4205(L_2, &m4205_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4205(L_4, &m4205_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4205(L_6, &m4205_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3407_MI;
extern "C" bool m3407 (t93 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4228(L_2, L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4228(L_5, L_6, &m4228_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4228(L_8, L_9, &m4228_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4228(L_11, L_12, &m4228_MI);
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
		m1093(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), &m1093_MI);
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
extern MethodInfo m2751_MI;
extern "C" bool m2751 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
{
	{
		t93  L_0 = p0;
		t93  L_1 = p1;
		float L_2 = m3396(NULL, L_0, L_1, &m3396_MI);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2694_MI;
extern MethodInfo m2693_MI;


extern "C" void m2796 (t434 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
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
extern "C" float m2595 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2662 (t434 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m2596 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2660 (t434 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m2671_MI;
extern "C" t28  m2671 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		float L_1 = (__this->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern MethodInfo m2801_MI;
extern "C" t28  m2801 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = m2595(__this, &m2595_MI);
		float L_1 = (__this->f2);
		float L_2 = m2596(__this, &m2596_MI);
		float L_3 = (__this->f3);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), &m392_MI);
		return L_4;
	}
}
extern "C" float m2590 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2661 (t434 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2591 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2658 (t434 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m2654_MI;
extern "C" t28  m2654 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f3);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern "C" float m2694 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m2693 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m2679 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f0);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern "C" float m2681 (t434 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		float L_1 = (__this->f1);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern MethodInfo m3408_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3408 (t434 * __this, MethodInfo* method)
{
	static bool m3408_init;
	if (!m3408_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3408_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = m2595(__this, &m2595_MI);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = m2596(__this, &m2596_MI);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = m2590(__this, &m2590_MI);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = m2591(__this, &m2591_MI);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral222, L_12, &m3562_MI);
		return L_16;
	}
}
extern MethodInfo m3409_MI;
extern "C" bool m3409 (t434 * __this, t13  p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = m2694(__this, &m2694_MI);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = m2679(__this, &m2679_MI);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = m2693(__this, &m2693_MI);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&p0)->f2);
		float L_7 = m2681(__this, &m2681_MI);
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
extern MethodInfo m3410_MI;
extern "C" int32_t m3410 (t434 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = m2595(__this, &m2595_MI);
		V_0 = L_0;
		int32_t L_1 = m4205((&V_0), &m4205_MI);
		float L_2 = m2590(__this, &m2590_MI);
		V_1 = L_2;
		int32_t L_3 = m4205((&V_1), &m4205_MI);
		float L_4 = m2596(__this, &m2596_MI);
		V_2 = L_4;
		int32_t L_5 = m4205((&V_2), &m4205_MI);
		float L_6 = m2591(__this, &m2591_MI);
		V_3 = L_6;
		int32_t L_7 = m4205((&V_3), &m4205_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3411_MI;
extern "C" bool m3411 (t434 * __this, t9 * p0, MethodInfo* method)
{
	t434  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t434_TI))))
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
		V_0 = ((*(t434 *)((t434 *)UnBox (L_1, InitializedTypeInfo(&t434_TI)))));
		float L_2 = m2595(__this, &m2595_MI);
		V_1 = L_2;
		float L_3 = m2595((&V_0), &m2595_MI);
		bool L_4 = m4228((&V_1), L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = m2596(__this, &m2596_MI);
		V_2 = L_5;
		float L_6 = m2596((&V_0), &m2596_MI);
		bool L_7 = m4228((&V_2), L_6, &m4228_MI);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = m2590(__this, &m2590_MI);
		V_3 = L_8;
		float L_9 = m2590((&V_0), &m2590_MI);
		bool L_10 = m4228((&V_3), L_9, &m4228_MI);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = m2591(__this, &m2591_MI);
		V_4 = L_11;
		float L_12 = m2591((&V_0), &m2591_MI);
		bool L_13 = m4228((&V_4), L_12, &m4228_MI);
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
extern MethodInfo m2795_MI;
extern "C" bool m2795 (t9 * __this , t434  p0, t434  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = m2595((&p0), &m2595_MI);
		float L_1 = m2595((&p1), &m2595_MI);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = m2596((&p0), &m2596_MI);
		float L_3 = m2596((&p1), &m2596_MI);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = m2590((&p0), &m2590_MI);
		float L_5 = m2590((&p1), &m2590_MI);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = m2591((&p0), &m2591_MI);
		float L_7 = m2591((&p1), &m2591_MI);
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
extern MethodInfo m3416_MI;
extern MethodInfo m3418_MI;
extern MethodInfo m3424_MI;
extern MethodInfo m3417_MI;
extern MethodInfo m3419_MI;
extern MethodInfo m3421_MI;
extern MethodInfo m3412_MI;
extern MethodInfo m3413_MI;
extern MethodInfo m3431_MI;
extern MethodInfo m3432_MI;
extern MethodInfo m3437_MI;


extern "C" float m3412 (t46 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = m472(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), &m472_MI);
		return L_2;
	}
}
extern "C" void m3413 (t46 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
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
		t876 * L_18 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_18, (t2*) &_stringLiteral223, &m4227_MI);
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
		t876 * L_18 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_18, (t2*) &_stringLiteral223, &m4227_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
extern MethodInfo m3414_MI;
extern "C" int32_t m3414 (t46 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	t47  V_1 = {0};
	t47  V_2 = {0};
	t47  V_3 = {0};
	{
		t47  L_0 = m3424(__this, 0, &m3424_MI);
		V_0 = L_0;
		int32_t L_1 = m3466((&V_0), &m3466_MI);
		t47  L_2 = m3424(__this, 1, &m3424_MI);
		V_1 = L_2;
		int32_t L_3 = m3466((&V_1), &m3466_MI);
		t47  L_4 = m3424(__this, 2, &m3424_MI);
		V_2 = L_4;
		int32_t L_5 = m3466((&V_2), &m3466_MI);
		t47  L_6 = m3424(__this, 3, &m3424_MI);
		V_3 = L_6;
		int32_t L_7 = m3466((&V_3), &m3466_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3415_MI;
extern "C" bool m3415 (t46 * __this, t9 * p0, MethodInfo* method)
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
		t47  L_2 = m3424(__this, 0, &m3424_MI);
		V_1 = L_2;
		t47  L_3 = m3424((&V_0), 0, &m3424_MI);
		t47  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t47_TI), &L_4);
		bool L_6 = m3467((&V_1), L_5, &m3467_MI);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_7 = m3424(__this, 1, &m3424_MI);
		V_2 = L_7;
		t47  L_8 = m3424((&V_0), 1, &m3424_MI);
		t47  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t47_TI), &L_9);
		bool L_11 = m3467((&V_2), L_10, &m3467_MI);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_12 = m3424(__this, 2, &m3424_MI);
		V_3 = L_12;
		t47  L_13 = m3424((&V_0), 2, &m3424_MI);
		t47  L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t47_TI), &L_14);
		bool L_16 = m3467((&V_3), L_15, &m3467_MI);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_17 = m3424(__this, 3, &m3424_MI);
		V_4 = L_17;
		t47  L_18 = m3424((&V_0), 3, &m3424_MI);
		t47  L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t47_TI), &L_19);
		bool L_21 = m3467((&V_4), L_20, &m3467_MI);
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
extern "C" t46  m3416 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3417(NULL, (&p0), &m3417_MI);
		return L_0;
	}
}
extern "C" t46  m3417 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3417_ftn) (t46 *);
	static m3417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t46  m3418 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3419(NULL, (&p0), &m3419_MI);
		return L_0;
	}
}
extern "C" t46  m3419 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3419_ftn) (t46 *);
	static m3419_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3419_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3420_MI;
extern "C" bool m3420 (t9 * __this , t46  p0, t46 * p1, MethodInfo* method)
{
	{
		t46 * L_0 = p1;
		bool L_1 = m3421(NULL, (&p0), L_0, &m3421_MI);
		return L_1;
	}
}
extern "C" bool m3421 (t9 * __this , t46 * p0, t46 * p1, MethodInfo* method)
{
	typedef bool (*m3421_ftn) (t46 *, t46 *);
	static m3421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m469_MI;
extern "C" t46  m469 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3416(NULL, (*(t46 *)__this), &m3416_MI);
		return L_0;
	}
}
extern MethodInfo m3422_MI;
extern "C" t46  m3422 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3418(NULL, (*(t46 *)__this), &m3418_MI);
		return L_0;
	}
}
extern MethodInfo m3423_MI;
extern "C" bool m3423 (t46 * __this, MethodInfo* method)
{
	typedef bool (*m3423_ftn) (t46 *);
	static m3423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47  m3424 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3412(__this, 0, L_0, &m3412_MI);
		int32_t L_2 = p0;
		float L_3 = m3412(__this, 1, L_2, &m3412_MI);
		int32_t L_4 = p0;
		float L_5 = m3412(__this, 2, L_4, &m3412_MI);
		int32_t L_6 = p0;
		float L_7 = m3412(__this, 3, L_6, &m3412_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3425_MI;
extern "C" t47  m3425 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3412(__this, L_0, 0, &m3412_MI);
		int32_t L_2 = p0;
		float L_3 = m3412(__this, L_2, 1, &m3412_MI);
		int32_t L_4 = p0;
		float L_5 = m3412(__this, L_4, 2, &m3412_MI);
		int32_t L_6 = p0;
		float L_7 = m3412(__this, L_6, 3, &m3412_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3426_MI;
extern "C" void m3426 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3413(__this, 0, L_0, L_1, &m3413_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3413(__this, 1, L_2, L_3, &m3413_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3413(__this, 2, L_4, L_5, &m3413_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3413(__this, 3, L_6, L_7, &m3413_MI);
		return;
	}
}
extern MethodInfo m3427_MI;
extern "C" void m3427 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3413(__this, L_0, 0, L_1, &m3413_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3413(__this, L_2, 1, L_3, &m3413_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3413(__this, L_4, 2, L_5, &m3413_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3413(__this, L_6, 3, L_7, &m3413_MI);
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
extern MethodInfo m2824_MI;
extern "C" t13  m2824 (t46 * __this, t13  p0, MethodInfo* method)
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
extern MethodInfo m3428_MI;
extern "C" t46  m3428 (t9 * __this , t13  p0, MethodInfo* method)
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
extern MethodInfo m3429_MI;
extern "C" t46  m3429 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m3430_MI;
extern "C" void m3430 (t46 * __this, t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = p1;
		t13  L_2 = p2;
		t46  L_3 = m3431(NULL, L_0, L_1, L_2, &m3431_MI);
		*__this = L_3;
		return;
	}
}
extern "C" t46  m3431 (t9 * __this , t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t46  L_0 = m3432(NULL, (&p0), (&p1), (&p2), &m3432_MI);
		return L_0;
	}
}
extern "C" t46  m3432 (t9 * __this , t13 * p0, t93 * p1, t13 * p2, MethodInfo* method)
{
	typedef t46  (*m3432_ftn) (t13 *, t93 *, t13 *);
	static m3432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3433_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3433 (t46 * __this, MethodInfo* method)
{
	static bool m3433_init;
	if (!m3433_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3433_init = true;
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
		t2* L_64 = m3562(NULL, (t2*) &_stringLiteral224, L_60, &m3562_MI);
		return L_64;
	}
}
extern MethodInfo m3434_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3434 (t46 * __this, t2* p0, MethodInfo* method)
{
	static bool m3434_init;
	if (!m3434_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3434_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)16)));
		float* L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m4229(L_1, L_2, &m4229_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f4);
		t2* L_6 = p0;
		t2* L_7 = m4229(L_5, L_6, &m4229_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f8);
		t2* L_10 = p0;
		t2* L_11 = m4229(L_9, L_10, &m4229_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float* L_13 = &(__this->f12);
		t2* L_14 = p0;
		t2* L_15 = m4229(L_13, L_14, &m4229_MI);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t158* L_16 = L_12;
		float* L_17 = &(__this->f1);
		t2* L_18 = p0;
		t2* L_19 = m4229(L_17, L_18, &m4229_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 4)) = (t9 *)L_19;
		t158* L_20 = L_16;
		float* L_21 = &(__this->f5);
		t2* L_22 = p0;
		t2* L_23 = m4229(L_21, L_22, &m4229_MI);
		ArrayElementTypeCheck (L_20, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 5)) = (t9 *)L_23;
		t158* L_24 = L_20;
		float* L_25 = &(__this->f9);
		t2* L_26 = p0;
		t2* L_27 = m4229(L_25, L_26, &m4229_MI);
		ArrayElementTypeCheck (L_24, L_27);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 6)) = (t9 *)L_27;
		t158* L_28 = L_24;
		float* L_29 = &(__this->f13);
		t2* L_30 = p0;
		t2* L_31 = m4229(L_29, L_30, &m4229_MI);
		ArrayElementTypeCheck (L_28, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 7)) = (t9 *)L_31;
		t158* L_32 = L_28;
		float* L_33 = &(__this->f2);
		t2* L_34 = p0;
		t2* L_35 = m4229(L_33, L_34, &m4229_MI);
		ArrayElementTypeCheck (L_32, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 8)) = (t9 *)L_35;
		t158* L_36 = L_32;
		float* L_37 = &(__this->f6);
		t2* L_38 = p0;
		t2* L_39 = m4229(L_37, L_38, &m4229_MI);
		ArrayElementTypeCheck (L_36, L_39);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t9 *)L_39;
		t158* L_40 = L_36;
		float* L_41 = &(__this->f10);
		t2* L_42 = p0;
		t2* L_43 = m4229(L_41, L_42, &m4229_MI);
		ArrayElementTypeCheck (L_40, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t9 *)L_43;
		t158* L_44 = L_40;
		float* L_45 = &(__this->f14);
		t2* L_46 = p0;
		t2* L_47 = m4229(L_45, L_46, &m4229_MI);
		ArrayElementTypeCheck (L_44, L_47);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t9 *)L_47;
		t158* L_48 = L_44;
		float* L_49 = &(__this->f3);
		t2* L_50 = p0;
		t2* L_51 = m4229(L_49, L_50, &m4229_MI);
		ArrayElementTypeCheck (L_48, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t9 *)L_51;
		t158* L_52 = L_48;
		float* L_53 = &(__this->f7);
		t2* L_54 = p0;
		t2* L_55 = m4229(L_53, L_54, &m4229_MI);
		ArrayElementTypeCheck (L_52, L_55);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t9 *)L_55;
		t158* L_56 = L_52;
		float* L_57 = &(__this->f11);
		t2* L_58 = p0;
		t2* L_59 = m4229(L_57, L_58, &m4229_MI);
		ArrayElementTypeCheck (L_56, L_59);
		*((t9 **)(t9 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t9 *)L_59;
		t158* L_60 = L_56;
		float* L_61 = &(__this->f15);
		t2* L_62 = p0;
		t2* L_63 = m4229(L_61, L_62, &m4229_MI);
		ArrayElementTypeCheck (L_60, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t9 *)L_63;
		t2* L_64 = m3562(NULL, (t2*) &_stringLiteral225, L_60, &m3562_MI);
		return L_64;
	}
}
extern MethodInfo m3435_MI;
extern "C" t46  m3435 (t9 * __this , float p0, float p1, float p2, float p3, float p4, float p5, MethodInfo* method)
{
	typedef t46  (*m3435_ftn) (float, float, float, float, float, float);
	static m3435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m3436_MI;
extern "C" t46  m3436 (t9 * __this , float p0, float p1, float p2, float p3, MethodInfo* method)
{
	typedef t46  (*m3436_ftn) (float, float, float, float);
	static m3436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3436_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
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
extern "C" bool m3437 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t47  L_0 = m3424((&p0), 0, &m3424_MI);
		t47  L_1 = m3424((&p1), 0, &m3424_MI);
		bool L_2 = m3471(NULL, L_0, L_1, &m3471_MI);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_3 = m3424((&p0), 1, &m3424_MI);
		t47  L_4 = m3424((&p1), 1, &m3424_MI);
		bool L_5 = m3471(NULL, L_3, L_4, &m3471_MI);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_6 = m3424((&p0), 2, &m3424_MI);
		t47  L_7 = m3424((&p1), 2, &m3424_MI);
		bool L_8 = m3471(NULL, L_6, L_7, &m3471_MI);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_9 = m3424((&p0), 3, &m3424_MI);
		t47  L_10 = m3424((&p1), 3, &m3424_MI);
		bool L_11 = m3471(NULL, L_9, L_10, &m3471_MI);
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
extern MethodInfo m3438_MI;
extern "C" bool m3438 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	{
		t46  L_0 = p0;
		t46  L_1 = p1;
		bool L_2 = m3437(NULL, L_0, L_1, &m3437_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t490.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t490_TI;
#include "t490MD.h"

#include "t74.h"
extern MethodInfo m2819_MI;
extern MethodInfo m3441_MI;
extern MethodInfo m2828_MI;
extern MethodInfo m3445_MI;
extern MethodInfo m2810_MI;
extern MethodInfo m3442_MI;
extern MethodInfo m2821_MI;
extern MethodInfo m2827_MI;
extern MethodInfo m3451_MI;
extern MethodInfo m3450_MI;
extern MethodInfo m3454_MI;
extern MethodInfo m3453_MI;
extern MethodInfo m3457_MI;
extern MethodInfo m3456_MI;
extern MethodInfo m3461_MI;
extern MethodInfo m3460_MI;
extern MethodInfo m3465_MI;


extern MethodInfo m2818_MI;
extern "C" void m2818 (t490 * __this, t13  p0, t13  p1, MethodInfo* method)
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
extern MethodInfo m3439_MI;
extern "C" int32_t m3439 (t490 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		t13  L_0 = m2819(__this, &m2819_MI);
		V_0 = L_0;
		int32_t L_1 = m3380((&V_0), &m3380_MI);
		t13  L_2 = m3441(__this, &m3441_MI);
		V_1 = L_2;
		int32_t L_3 = m3380((&V_1), &m3380_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3440_MI;
extern "C" bool m3440 (t490 * __this, t9 * p0, MethodInfo* method)
{
	t490  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t490_TI))))
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
		V_0 = ((*(t490 *)((t490 *)UnBox (L_1, InitializedTypeInfo(&t490_TI)))));
		t13  L_2 = m2819(__this, &m2819_MI);
		V_1 = L_2;
		t13  L_3 = m2819((&V_0), &m2819_MI);
		t13  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t13_TI), &L_4);
		bool L_6 = m3381((&V_1), L_5, &m3381_MI);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		t13  L_7 = m3441(__this, &m3441_MI);
		V_2 = L_7;
		t13  L_8 = m3441((&V_0), &m3441_MI);
		t13  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t13_TI), &L_9);
		bool L_11 = m3381((&V_2), L_10, &m3381_MI);
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
extern "C" t13  m2819 (t490 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2821 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m2809_MI;
extern "C" t13  m2809 (t490 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		t13  L_1 = m475(NULL, L_0, (2.0f), &m475_MI);
		return L_1;
	}
}
extern MethodInfo m2820_MI;
extern "C" void m2820 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.5f), &m475_MI);
		__this->f1 = L_1;
		return;
	}
}
extern "C" t13  m3441 (t490 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3442 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t13  m2810 (t490 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2819(__this, &m2819_MI);
		t13  L_1 = m3441(__this, &m3441_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		return L_2;
	}
}
extern MethodInfo m3443_MI;
extern "C" void m3443 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m2828(__this, &m2828_MI);
		m3445(__this, L_0, L_1, &m3445_MI);
		return;
	}
}
extern "C" t13  m2828 (t490 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2819(__this, &m2819_MI);
		t13  L_1 = m3441(__this, &m3441_MI);
		t13  L_2 = m476(NULL, L_0, L_1, &m476_MI);
		return L_2;
	}
}
extern MethodInfo m3444_MI;
extern "C" void m3444 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2810(__this, &m2810_MI);
		t13  L_1 = p0;
		m3445(__this, L_0, L_1, &m3445_MI);
		return;
	}
}
extern "C" void m3445 (t490 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p1;
		t13  L_1 = p0;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		t13  L_3 = m475(NULL, L_2, (0.5f), &m475_MI);
		m3442(__this, L_3, &m3442_MI);
		t13  L_4 = p0;
		t13  L_5 = m3441(__this, &m3441_MI);
		t13  L_6 = m476(NULL, L_4, L_5, &m476_MI);
		m2821(__this, L_6, &m2821_MI);
		return;
	}
}
extern "C" void m2827 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2810(__this, &m2810_MI);
		t13  L_1 = p0;
		t13  L_2 = m2825(NULL, L_0, L_1, &m2825_MI);
		t13  L_3 = m2828(__this, &m2828_MI);
		t13  L_4 = p0;
		t13  L_5 = m2826(NULL, L_3, L_4, &m2826_MI);
		m3445(__this, L_2, L_5, &m3445_MI);
		return;
	}
}
extern MethodInfo m3446_MI;
extern "C" void m3446 (t490 * __this, t490  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2819((&p0), &m2819_MI);
		t13  L_1 = m3441((&p0), &m3441_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		m2827(__this, L_2, &m2827_MI);
		t13  L_3 = m2819((&p0), &m2819_MI);
		t13  L_4 = m3441((&p0), &m3441_MI);
		t13  L_5 = m476(NULL, L_3, L_4, &m476_MI);
		m2827(__this, L_5, &m2827_MI);
		return;
	}
}
extern MethodInfo m3447_MI;
extern "C" void m3447 (t490 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		p0 = ((float)((float)L_0*(float)(0.5f)));
		t13  L_1 = m3441(__this, &m3441_MI);
		float L_2 = p0;
		float L_3 = p0;
		float L_4 = p0;
		t13  L_5 = {0};
		m357(&L_5, L_2, L_3, L_4, &m357_MI);
		t13  L_6 = m476(NULL, L_1, L_5, &m476_MI);
		m3442(__this, L_6, &m3442_MI);
		return;
	}
}
extern MethodInfo m3448_MI;
extern "C" void m3448 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3441(__this, &m3441_MI);
		t13  L_1 = p0;
		t13  L_2 = m475(NULL, L_1, (0.5f), &m475_MI);
		t13  L_3 = m476(NULL, L_0, L_2, &m476_MI);
		m3442(__this, L_3, &m3442_MI);
		return;
	}
}
extern MethodInfo m3449_MI;
extern "C" bool m3449 (t490 * __this, t490  p0, MethodInfo* method)
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
		t13  L_0 = m2810(__this, &m2810_MI);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		t13  L_2 = m2828((&p0), &m2828_MI);
		V_1 = L_2;
		float L_3 = ((&V_1)->f1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_4 = m2828(__this, &m2828_MI);
		V_2 = L_4;
		float L_5 = ((&V_2)->f1);
		t13  L_6 = m2810((&p0), &m2810_MI);
		V_3 = L_6;
		float L_7 = ((&V_3)->f1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_8 = m2810(__this, &m2810_MI);
		V_4 = L_8;
		float L_9 = ((&V_4)->f2);
		t13  L_10 = m2828((&p0), &m2828_MI);
		V_5 = L_10;
		float L_11 = ((&V_5)->f2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_12 = m2828(__this, &m2828_MI);
		V_6 = L_12;
		float L_13 = ((&V_6)->f2);
		t13  L_14 = m2810((&p0), &m2810_MI);
		V_7 = L_14;
		float L_15 = ((&V_7)->f2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_16 = m2810(__this, &m2810_MI);
		V_8 = L_16;
		float L_17 = ((&V_8)->f3);
		t13  L_18 = m2828((&p0), &m2828_MI);
		V_9 = L_18;
		float L_19 = ((&V_9)->f3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_20 = m2828(__this, &m2828_MI);
		V_10 = L_20;
		float L_21 = ((&V_10)->f3);
		t13  L_22 = m2810((&p0), &m2810_MI);
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
extern "C" bool m3450 (t9 * __this , t490  p0, t13  p1, MethodInfo* method)
{
	{
		bool L_0 = m3451(NULL, (&p0), (&p1), &m3451_MI);
		return L_0;
	}
}
extern "C" bool m3451 (t9 * __this , t490 * p0, t13 * p1, MethodInfo* method)
{
	typedef bool (*m3451_ftn) (t490 *, t13 *);
	static m3451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3452_MI;
extern "C" bool m3452 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		bool L_1 = m3450(NULL, (*(t490 *)__this), L_0, &m3450_MI);
		return L_1;
	}
}
extern "C" float m3453 (t9 * __this , t490  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = m3454(NULL, (&p0), (&p1), &m3454_MI);
		return L_0;
	}
}
extern "C" float m3454 (t9 * __this , t490 * p0, t13 * p1, MethodInfo* method)
{
	typedef float (*m3454_ftn) (t490 *, t13 *);
	static m3454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3455_MI;
extern "C" float m3455 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		float L_1 = m3453(NULL, (*(t490 *)__this), L_0, &m3453_MI);
		return L_1;
	}
}
extern "C" bool m3456 (t9 * __this , t74 * p0, t490 * p1, float* p2, MethodInfo* method)
{
	{
		t74 * L_0 = p0;
		t490 * L_1 = p1;
		float* L_2 = p2;
		bool L_3 = m3457(NULL, L_0, L_1, L_2, &m3457_MI);
		return L_3;
	}
}
extern "C" bool m3457 (t9 * __this , t74 * p0, t490 * p1, float* p2, MethodInfo* method)
{
	typedef bool (*m3457_ftn) (t74 *, t490 *, float*);
	static m3457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3458_MI;
extern "C" bool m3458 (t490 * __this, t74  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = m3456(NULL, (&p0), __this, (&V_0), &m3456_MI);
		return L_0;
	}
}
extern MethodInfo m3459_MI;
extern "C" bool m3459 (t490 * __this, t74  p0, float* p1, MethodInfo* method)
{
	{
		float* L_0 = p1;
		bool L_1 = m3456(NULL, (&p0), __this, L_0, &m3456_MI);
		return L_1;
	}
}
extern "C" t13  m3460 (t9 * __this , t490 * p0, t13 * p1, MethodInfo* method)
{
	{
		t490 * L_0 = p0;
		t13 * L_1 = p1;
		t13  L_2 = m3461(NULL, L_0, L_1, &m3461_MI);
		return L_2;
	}
}
extern "C" t13  m3461 (t9 * __this , t490 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3461_ftn) (t490 *, t13 *);
	static m3461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3462_MI;
extern "C" t13  m3462 (t490 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3460(NULL, __this, (&p0), &m3460_MI);
		return L_0;
	}
}
extern MethodInfo m3463_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3463 (t490 * __this, MethodInfo* method)
{
	static bool m3463_init;
	if (!m3463_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3463_init = true;
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
		t2* L_8 = m3562(NULL, (t2*) &_stringLiteral226, L_4, &m3562_MI);
		return L_8;
	}
}
extern MethodInfo m3464_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3464 (t490 * __this, t2* p0, MethodInfo* method)
{
	static bool m3464_init;
	if (!m3464_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3464_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t13 * L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m3384(L_1, L_2, &m3384_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		t13 * L_5 = &(__this->f1);
		t2* L_6 = p0;
		t2* L_7 = m3384(L_5, L_6, &m3384_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3562(NULL, (t2*) &_stringLiteral226, L_4, &m3562_MI);
		return L_8;
	}
}
extern "C" bool m3465 (t9 * __this , t490  p0, t490  p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t13  L_0 = m2819((&p0), &m2819_MI);
		t13  L_1 = m2819((&p1), &m2819_MI);
		bool L_2 = m3389(NULL, L_0, L_1, &m3389_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t13  L_3 = m3441((&p0), &m3441_MI);
		t13  L_4 = m3441((&p1), &m3441_MI);
		bool L_5 = m3389(NULL, L_3, L_4, &m3389_MI);
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
extern MethodInfo m2814_MI;
extern "C" bool m2814 (t9 * __this , t490  p0, t490  p1, MethodInfo* method)
{
	{
		t490  L_0 = p0;
		t490  L_1 = p1;
		bool L_2 = m3465(NULL, L_0, L_1, &m3465_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m471_MI;
extern MethodInfo m3470_MI;
extern MethodInfo m3469_MI;


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
		t876 * L_6 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_6, (t2*) &_stringLiteral227, &m4227_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m2674_MI;
extern "C" void m2674 (t47 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t876 * L_6 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_6, (t2*) &_stringLiteral227, &m4227_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m3466 (t47 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4205(L_0, &m4205_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4205(L_2, &m4205_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4205(L_4, &m4205_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4205(L_6, &m4205_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern "C" bool m3467 (t47 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4228(L_2, L_3, &m4228_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4228(L_5, L_6, &m4228_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4228(L_8, L_9, &m4228_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4228(L_11, L_12, &m4228_MI);
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
extern MethodInfo m3468_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3468 (t47 * __this, MethodInfo* method)
{
	static bool m3468_init;
	if (!m3468_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3468_init = true;
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
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral221, L_12, &m3562_MI);
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
extern "C" float m3469 (t9 * __this , t47  p0, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p0;
		float L_2 = m471(NULL, L_0, L_1, &m471_MI);
		return L_2;
	}
}
extern MethodInfo m2649_MI;
extern "C" float m2649 (t47 * __this, MethodInfo* method)
{
	{
		float L_0 = m471(NULL, (*(t47 *)__this), (*(t47 *)__this), &m471_MI);
		return L_0;
	}
}
extern MethodInfo m2655_MI;
extern "C" t47  m2655 (t9 * __this , MethodInfo* method)
{
	{
		t47  L_0 = {0};
		m413(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m413_MI);
		return L_0;
	}
}
extern "C" t47  m3470 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
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
extern MethodInfo m2668_MI;
extern "C" t47  m2668 (t9 * __this , t47  p0, float p1, MethodInfo* method)
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
extern "C" bool m3471 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p1;
		t47  L_2 = m3470(NULL, L_0, L_1, &m3470_MI);
		float L_3 = m3469(NULL, L_2, &m3469_MI);
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
extern MethodInfo m3472_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3472 (t74 * __this, MethodInfo* method)
{
	static bool m3472_init;
	if (!m3472_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3472_init = true;
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
		t2* L_8 = m3562(NULL, (t2*) &_stringLiteral228, L_4, &m3562_MI);
		return L_8;
	}
}
#include "t585.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t585_TI;
#include "t585MD.h"

extern MethodInfo m3473_MI;
extern MethodInfo m3474_MI;
extern MethodInfo m2503_MI;


extern MethodInfo m2718_MI;
extern "C" void m2718 (t585 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m3382(NULL, L_0, &m3382_MI);
		__this->f0 = L_1;
		t13  L_2 = p0;
		t13  L_3 = p1;
		float L_4 = m458(NULL, L_2, L_3, &m458_MI);
		__this->f1 = ((-L_4));
		return;
	}
}
extern "C" t13  m3473 (t585 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m3474 (t585 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2719_MI;
extern "C" bool m2719 (t585 * __this, t74  p0, float* p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t13  L_0 = m564((&p0), &m564_MI);
		t13  L_1 = m3473(__this, &m3473_MI);
		float L_2 = m458(NULL, L_0, L_1, &m458_MI);
		V_0 = L_2;
		t13  L_3 = m563((&p0), &m563_MI);
		t13  L_4 = m3473(__this, &m3473_MI);
		float L_5 = m458(NULL, L_3, L_4, &m458_MI);
		float L_6 = m3474(__this, &m3474_MI);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		bool L_8 = m2503(NULL, L_7, (0.0f), &m2503_MI);
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
#include "t714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t714_TI;
#include "t714MD.h"



extern MethodInfo m3475_MI;
extern "C" void m3475 (t9 * __this , MethodInfo* method)
{
	{
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f0 = (1.17549435E-38f);
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f1 = (1.401298E-45f);
		float L_0 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f1;
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
#include "t129.h"
#ifndef _MSC_VER
#else
#endif

#include "t156.h"
#include "t160MD.h"
extern MethodInfo m4230_MI;
extern MethodInfo m4231_MI;
extern MethodInfo m4232_MI;
extern MethodInfo m4233_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m4235_MI;
extern MethodInfo m4236_MI;
extern MethodInfo m4237_MI;
extern MethodInfo m4238_MI;
extern MethodInfo m4239_MI;
extern MethodInfo m412_MI;
extern MethodInfo m583_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2812_MI;
extern MethodInfo m2761_MI;


extern MethodInfo m3476_MI;
extern "C" void m3476 (t9 * __this , MethodInfo* method)
{
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		bool L_0 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		float L_1 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f0;
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		float L_2 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f1;
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((t129_SFs*)InitializedTypeInfo(&t129_TI)->static_fields)->f0 = G_B3_0;
		return;
	}
}
extern MethodInfo m2676_MI;
extern "C" float m2676 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2675_MI;
extern "C" float m2675 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2905 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2898 (t9 * __this , float p0, float p1, MethodInfo* method)
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
extern "C" int32_t m2737 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern "C" int32_t m2735 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m2813_MI;
extern "C" float m2813 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
extern MethodInfo m2897_MI;
extern "C" float m2897 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = m4236(NULL, (((double)L_0)), (((double)L_1)), &m4236_MI);
		return (((float)L_2));
	}
}
extern "C" float m2761 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2798 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2904_MI;
extern "C" int32_t m2904 (t9 * __this , float p0, MethodInfo* method)
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
extern MethodInfo m2657_MI;
extern "C" int32_t m2657 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" float m2817 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2646 (t9 * __this , float p0, MethodInfo* method)
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
		float L_4 = m2646(NULL, L_3, &m2646_MI);
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
		float L_8 = m2646(NULL, L_7, &m2646_MI);
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
		float L_8 = m2817(NULL, ((float)((float)L_6-(float)L_7)), &m2817_MI);
		float L_9 = p2;
		return ((float)((float)L_5+(float)((float)((float)L_8*(float)L_9))));
	}
}
extern "C" bool m2503 (t9 * __this , float p0, float p1, MethodInfo* method)
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
		float L_7 = m2812(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m2812_MI);
		return L_7;
	}
}
extern "C" float m2812 (t9 * __this , float p0, float p1, float* p2, float p3, float p4, float p5, MethodInfo* method)
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
#include "t595.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t595_TI;
#include "t595MD.h"



#include "t485.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t485_TI;
#include "t485MD.h"

#include "t427.h"


extern MethodInfo m2800_MI;
extern "C" void m2800 (t485 * __this, t57 * p0, t427 * p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2799_MI;
extern "C" void m2799 (t485 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#include "t601.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t601_TI;
#include "t601MD.h"



#include "t600.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t600_TI;
#include "t600MD.h"



#include "t604.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t604_TI;
#include "t604MD.h"



extern MethodInfo m2931_MI;
extern "C" void m2931 (t604 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3477_MI;
extern "C" void m3477 (t604 * __this, t427 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3477((t604 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t427 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t427 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t604(Il2CppObject* delegate, t427 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t427 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
extern MethodInfo m3478_MI;
extern "C" t9 * m3478 (t604 * __this, t427 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3479_MI;
extern "C" void m3479 (t604 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t427_TI;
#include "t427MD.h"

#include "t286.h"
#include "t45.h"
#include "t286MD.h"
#include "t133MD.h"
#include "t45MD.h"
extern MethodInfo m3481_MI;
extern MethodInfo m3482_MI;
extern MethodInfo m3483_MI;
extern MethodInfo m3484_MI;
extern MethodInfo m3485_MI;
extern MethodInfo m3486_MI;
extern MethodInfo m3487_MI;
extern MethodInfo m3488_MI;
extern MethodInfo m3489_MI;
extern MethodInfo m3490_MI;
extern MethodInfo m3491_MI;
extern MethodInfo m1060_MI;
extern MethodInfo m1061_MI;
extern MethodInfo m2589_MI;
extern MethodInfo m3493_MI;
extern MethodInfo m350_MI;
extern MethodInfo m2841_MI;
extern MethodInfo m2663_MI;
extern MethodInfo m2757_MI;
extern MethodInfo m2753_MI;
extern MethodInfo m2664_MI;
extern MethodInfo m2755_MI;
extern MethodInfo m2665_MI;
extern MethodInfo m2754_MI;
extern MethodInfo m2659_MI;
extern MethodInfo m2758_MI;
extern MethodInfo m3494_MI;
extern MethodInfo m530_MI;


extern MethodInfo m2932_MI;
extern "C" void m2932 (t9 * __this , t604 * p0, MethodInfo* method)
{
	{
		t604 * L_0 = ((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2;
		t604 * L_1 = p0;
		t286 * L_2 = m1060(NULL, L_0, L_1, &m1060_MI);
		((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2 = ((t604 *)Castclass(L_2, InitializedTypeInfo(&t604_TI)));
		return;
	}
}
extern MethodInfo m3480_MI;
extern "C" void m3480 (t9 * __this , t604 * p0, MethodInfo* method)
{
	{
		t604 * L_0 = ((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2;
		t604 * L_1 = p0;
		t286 * L_2 = m1061(NULL, L_0, L_1, &m1061_MI);
		((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2 = ((t604 *)Castclass(L_2, InitializedTypeInfo(&t604_TI)));
		return;
	}
}
extern "C" void m3481 (t427 * __this, t434 * p0, MethodInfo* method)
{
	typedef void (*m3481_ftn) (t427 *, t434 *);
	static m3481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t434  m2589 (t427 * __this, MethodInfo* method)
{
	t434  V_0 = {0};
	{
		m3481(__this, (&V_0), &m3481_MI);
		t434  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3482 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3482_ftn) (t427 *, t28 *);
	static m3482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3483 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3483_ftn) (t427 *, t28 *);
	static m3483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2663 (t427 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3482(__this, (&V_0), &m3482_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2757 (t427 * __this, t28  p0, MethodInfo* method)
{
	{
		m3483(__this, (&p0), &m3483_MI);
		return;
	}
}
extern "C" void m3484 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3484_ftn) (t427 *, t28 *);
	static m3484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3485 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3485_ftn) (t427 *, t28 *);
	static m3485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2753 (t427 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3484(__this, (&V_0), &m3484_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2664 (t427 * __this, t28  p0, MethodInfo* method)
{
	{
		m3485(__this, (&p0), &m3485_MI);
		return;
	}
}
extern "C" void m3486 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3486_ftn) (t427 *, t28 *);
	static m3486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3487 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3487_ftn) (t427 *, t28 *);
	static m3487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2754 (t427 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3486(__this, (&V_0), &m3486_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2758 (t427 * __this, t28  p0, MethodInfo* method)
{
	{
		m3487(__this, (&p0), &m3487_MI);
		return;
	}
}
extern "C" void m3488 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3488_ftn) (t427 *, t28 *);
	static m3488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3489 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3489_ftn) (t427 *, t28 *);
	static m3489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2755 (t427 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3488(__this, (&V_0), &m3488_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2665 (t427 * __this, t28  p0, MethodInfo* method)
{
	{
		m3489(__this, (&p0), &m3489_MI);
		return;
	}
}
extern "C" void m3490 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3490_ftn) (t427 *, t28 *);
	static m3490_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3490_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3491 (t427 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3491_ftn) (t427 *, t28 *);
	static m3491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2659 (t427 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3490(__this, (&V_0), &m3490_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2759_MI;
extern "C" void m2759 (t427 * __this, t28  p0, MethodInfo* method)
{
	{
		m3491(__this, (&p0), &m3491_MI);
		return;
	}
}
extern MethodInfo m3492_MI;
extern "C" void m3492 (t9 * __this , t427 * p0, MethodInfo* method)
{
	{
		t604 * L_0 = ((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t604 * L_1 = ((t427_SFs*)InitializedTypeInfo(&t427_TI)->static_fields)->f2;
		t427 * L_2 = p0;
		VirtActionInvoker1< t427 * >::Invoke(&m3477_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m3493 (t427 * __this, t37* p0, MethodInfo* method)
{
	t434  V_0 = {0};
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
		m400(NULL, (t2*) &_stringLiteral229, &m400_MI);
		return;
	}

IL_001a:
	{
		t434  L_2 = m2589(__this, &m2589_MI);
		V_0 = L_2;
		float L_3 = m2595((&V_0), &m2595_MI);
		V_1 = L_3;
		float L_4 = m2596((&V_0), &m2596_MI);
		V_2 = L_4;
		float L_5 = m2679((&V_0), &m2679_MI);
		V_3 = L_5;
		float L_6 = m2681((&V_0), &m2681_MI);
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
extern MethodInfo m2823_MI;
extern "C" void m2823 (t427 * __this, t37* p0, MethodInfo* method)
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
		m400(NULL, (t2*) &_stringLiteral230, &m400_MI);
		return;
	}

IL_001a:
	{
		t37* L_2 = p0;
		m3493(__this, L_2, &m3493_MI);
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
		t13  L_9 = m2841(L_6, (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_7, L_8))), &m2841_MI);
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
extern MethodInfo m2927_MI;
extern "C" void m2927 (t427 * __this, int32_t p0, float p1, float p2, MethodInfo* method)
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
		t28  L_5 = m2663(__this, &m2663_MI);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		m2684((&V_3), L_6, L_7, &m2684_MI);
		t28  L_8 = V_3;
		m2757(__this, L_8, &m2757_MI);
		t28  L_9 = m2753(__this, &m2753_MI);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		m2684((&V_3), L_10, L_11, &m2684_MI);
		t28  L_12 = V_3;
		m2664(__this, L_12, &m2664_MI);
		t28  L_13 = m2755(__this, &m2755_MI);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = p2;
		m2684((&V_4), L_14, L_15, &m2684_MI);
		t28  L_16 = V_4;
		m2665(__this, L_16, &m2665_MI);
		t28  L_17 = m2754(__this, &m2754_MI);
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
		t28  L_22 = m2659(__this, &m2659_MI);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = m2673((&V_6), L_23, &m2673_MI);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = p1;
		float L_26 = p2;
		t28  L_27 = m2659(__this, &m2659_MI);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = m2673((&V_7), L_28, &m2673_MI);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		m2684(G_B13_2, G_B13_1, G_B13_0, &m2684_MI);
		t28  L_30 = V_5;
		m2758(__this, L_30, &m2758_MI);
		return;
	}
}
extern MethodInfo m2894_MI;
extern "C" void m2894 (t427 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		t28  L_1 = m2755(__this, &m2755_MI);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = p1;
		t28  L_4 = m3494(__this, &m3494_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = m2673((&V_2), L_5, &m2673_MI);
		t28  L_7 = m2753(__this, &m2753_MI);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = m2673((&V_3), L_8, &m2673_MI);
		t28  L_10 = m2663(__this, &m2663_MI);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = m2673((&V_4), L_11, &m2673_MI);
		m2684((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), &m2684_MI);
		t28  L_13 = V_1;
		m2665(__this, L_13, &m2665_MI);
		return;
	}
}
extern "C" t28  m3494 (t427 * __this, MethodInfo* method)
{
	t427 * V_0 = {0};
	t434  V_1 = {0};
	{
		t45 * L_0 = m530(__this, &m530_MI);
		V_0 = ((t427 *)IsInst(L_0, InitializedTypeInfo(&t427_TI)));
		t427 * L_1 = V_0;
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		t28  L_3 = m1181(NULL, &m1181_MI);
		return L_3;
	}

IL_001d:
	{
		t427 * L_4 = V_0;
		t434  L_5 = m2589(L_4, &m2589_MI);
		V_1 = L_5;
		t28  L_6 = m2654((&V_1), &m2654_MI);
		return L_6;
	}
}
#include "t715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t715_TI;
#include "t715MD.h"

#include "t716MD.h"
extern MethodInfo m3497_MI;


extern MethodInfo m3495_MI;
extern "C" void m3495 (t715 * __this, MethodInfo* method)
{
	{
		m3563(__this, &m3563_MI);
		return;
	}
}
extern MethodInfo m3496_MI;
extern "C" t57 * m3496 (t715 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		t126 * L_1 = (__this->f2);
		t57 * L_2 = m3497(NULL, L_0, L_1, &m3497_MI);
		return L_2;
	}
}
#include "t716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t716_TI;



extern "C" t57 * m3497 (t9 * __this , t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3497_ftn) (t2*, t126 *);
	static m3497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t717.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t717_TI;
#include "t717MD.h"

#include "t718MD.h"
extern MethodInfo m4240_MI;


extern MethodInfo m3498_MI;
extern "C" void m3498 (t717 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
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
		m4240(__this, &m4240_MI);
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
extern MethodInfo m3499_MI;
extern "C" int32_t m3499 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3499_ftn) (t2*);
	static m3499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;
#include "t40MD.h"

extern MethodInfo m3506_MI;
extern MethodInfo m3513_MI;
extern MethodInfo m3501_MI;
extern MethodInfo m3502_MI;
extern MethodInfo m3504_MI;
extern MethodInfo m3500_MI;
extern MethodInfo m3503_MI;
extern MethodInfo m3505_MI;
extern MethodInfo m3507_MI;
extern MethodInfo m3509_MI;
extern MethodInfo m3510_MI;
extern MethodInfo m3508_MI;
extern MethodInfo m3511_MI;
extern MethodInfo m3512_MI;


extern MethodInfo m2863_MI;
extern "C" void m2863 (t40 * __this, t40 * p0, MethodInfo* method)
{
	{
		m3641(__this, &m3641_MI);
		t40 * L_0 = p0;
		m3513(NULL, __this, L_0, &m3513_MI);
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
extern MethodInfo m2870_MI;
extern "C" t148 * m2870 (t40 * __this, MethodInfo* method)
{
	{
		t148 * L_0 = m3506(__this, (t2*) &_stringLiteral231, &m3506_MI);
		return L_0;
	}
}
extern "C" void m3500 (t40 * __this, t2* p0, t43  p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		t43  L_2 = p1;
		m3501(__this, L_1, L_2, &m3501_MI);
		return;
	}
}
extern "C" void m3501 (t40 * __this, int32_t p0, t43  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3502(NULL, __this, L_0, (&p1), &m3502_MI);
		return;
	}
}
extern "C" void m3502 (t9 * __this , t40 * p0, int32_t p1, t43 * p2, MethodInfo* method)
{
	typedef void (*m3502_ftn) (t40 *, int32_t, t43 *);
	static m3502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t43  m3503 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		t43  L_2 = m3504(__this, L_1, &m3504_MI);
		return L_2;
	}
}
extern "C" t43  m3504 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t43  (*m3504_ftn) (t40 *, int32_t);
	static m3504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
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
		m3500(__this, L_0, L_5, &m3500_MI);
		return;
	}
}
extern MethodInfo m408_MI;
extern "C" t47  m408 (t40 * __this, t2* p0, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t2* L_0 = p0;
		t43  L_1 = m3503(__this, L_0, &m3503_MI);
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
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		t148 * L_2 = p1;
		m3505(__this, L_1, L_2, &m3505_MI);
		return;
	}
}
extern "C" void m3505 (t40 * __this, int32_t p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m3505_ftn) (t40 *, int32_t, t148 *);
	static m3505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t148 * m3506 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		t148 * L_2 = m3507(__this, L_1, &m3507_MI);
		return L_2;
	}
}
extern "C" t148 * m3507 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t148 * (*m3507_ftn) (t40 *, int32_t);
	static m3507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3508 (t40 * __this, t2* p0, float p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		float L_2 = p1;
		m3509(__this, L_1, L_2, &m3509_MI);
		return;
	}
}
extern "C" void m3509 (t40 * __this, int32_t p0, float p1, MethodInfo* method)
{
	typedef void (*m3509_ftn) (t40 *, int32_t, float);
	static m3509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m409_MI;
extern "C" float m409 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		float L_2 = m3510(__this, L_1, &m3510_MI);
		return L_2;
	}
}
extern "C" float m3510 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef float (*m3510_ftn) (t40 *, int32_t);
	static m3510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetFloat(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2864_MI;
extern "C" void m2864 (t40 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3508(__this, L_0, (((float)L_1)), &m3508_MI);
		return;
	}
}
extern MethodInfo m450_MI;
extern "C" bool m450 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3499(NULL, L_0, &m3499_MI);
		bool L_2 = m3511(__this, L_1, &m3511_MI);
		return L_2;
	}
}
extern "C" bool m3511 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3511_ftn) (t40 *, int32_t);
	static m3511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t2* m3512 (t40 * __this, t2* p0, bool p1, t2* p2, MethodInfo* method)
{
	typedef t2* (*m3512_ftn) (t40 *, t2*, bool, t2*);
	static m3512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)");
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
		t2* L_4 = m3512(__this, L_1, L_2, L_3, &m3512_MI);
		return L_4;
	}
}
extern "C" void m3513 (t9 * __this , t40 * p0, t40 * p1, MethodInfo* method)
{
	typedef void (*m3513_ftn) (t40 *, t40 *);
	static m3513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(p0, p1);
}
#include "t719.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t719_TI;
#include "t719MD.h"

extern MethodInfo m3515_MI;
extern MethodInfo m3516_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m3519_MI;
extern MethodInfo m3521_MI;
extern MethodInfo m3522_MI;
extern MethodInfo m3530_MI;


extern MethodInfo m3514_MI;
extern "C" void m3514 (t719 * __this, MethodInfo* method)
{
	{
		m3515(NULL, __this, &m3515_MI);
		return;
	}
}
extern "C" void m3515 (t9 * __this , t719 * p0, MethodInfo* method)
{
	{
		t719 * L_0 = p0;
		m3516(NULL, L_0, &m3516_MI);
		return;
	}
}
extern "C" void m3516 (t9 * __this , t719 * p0, MethodInfo* method)
{
	typedef void (*m3516_ftn) (t719 *);
	static m3516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3517_MI;
extern "C" void m3517 (t719 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		m3518(NULL, L_0, __this, &m3518_MI);
		return;
	}
}
extern "C" void m3518 (t9 * __this , t43  p0, t719 * p1, MethodInfo* method)
{
	{
		t719 * L_0 = p1;
		m3519(NULL, (&p0), L_0, &m3519_MI);
		return;
	}
}
extern "C" void m3519 (t9 * __this , t43 * p0, t719 * p1, MethodInfo* method)
{
	typedef void (*m3519_ftn) (t43 *, t719 *);
	static m3519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3520_MI;
extern "C" void m3520 (t719 * __this, t13  p0, t43  p1, float p2, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t43  L_0 = p1;
		float L_1 = p2;
		t43  L_2 = m2839(NULL, L_0, ((float)((float)(2.0f)*(float)L_1)), &m2839_MI);
		V_0 = L_2;
		t13  L_3 = p0;
		t43  L_4 = V_0;
		m3521(NULL, L_3, L_4, __this, &m3521_MI);
		return;
	}
}
extern "C" void m3521 (t9 * __this , t13  p0, t43  p1, t719 * p2, MethodInfo* method)
{
	{
		t719 * L_0 = p2;
		m3522(NULL, (&p0), (&p1), L_0, &m3522_MI);
		return;
	}
}
extern "C" void m3522 (t9 * __this , t13 * p0, t43 * p1, t719 * p2, MethodInfo* method)
{
	typedef void (*m3522_ftn) (t13 *, t43 *, t719 *);
	static m3522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3523_MI;
extern "C" float m3523 (t719 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
		t876 * L_31 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_31, (t2*) &_stringLiteral232, &m4227_MI);
		il2cpp_codegen_raise_exception(L_31);
	}
}
extern MethodInfo m3524_MI;
extern "C" void m3524 (t719 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
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
		t876 * L_31 = (t876 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t876_TI));
		m4227(L_31, (t2*) &_stringLiteral232, &m4227_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
extern MethodInfo m3525_MI;
extern "C" int32_t m3525 (t719 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->f0);
		int32_t L_2 = m4205(L_1, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->f1);
		int32_t L_5 = m4205(L_4, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->f2);
		int32_t L_8 = m4205(L_7, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->f3);
		int32_t L_11 = m4205(L_10, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->f4);
		int32_t L_14 = m4205(L_13, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->f5);
		int32_t L_17 = m4205(L_16, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->f6);
		int32_t L_20 = m4205(L_19, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->f7);
		int32_t L_23 = m4205(L_22, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->f8);
		int32_t L_26 = m4205(L_25, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->f9);
		int32_t L_29 = m4205(L_28, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->f10);
		int32_t L_32 = m4205(L_31, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->f11);
		int32_t L_35 = m4205(L_34, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->f12);
		int32_t L_38 = m4205(L_37, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->f13);
		int32_t L_41 = m4205(L_40, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->f14);
		int32_t L_44 = m4205(L_43, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->f15);
		int32_t L_47 = m4205(L_46, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->f16);
		int32_t L_50 = m4205(L_49, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->f17);
		int32_t L_53 = m4205(L_52, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->f18);
		int32_t L_56 = m4205(L_55, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->f19);
		int32_t L_59 = m4205(L_58, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->f20);
		int32_t L_62 = m4205(L_61, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->f21);
		int32_t L_65 = m4205(L_64, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->f22);
		int32_t L_68 = m4205(L_67, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->f23);
		int32_t L_71 = m4205(L_70, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->f24);
		int32_t L_74 = m4205(L_73, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->f25);
		int32_t L_77 = m4205(L_76, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->f26);
		int32_t L_80 = m4205(L_79, &m4205_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
extern MethodInfo m3526_MI;
extern "C" bool m3526 (t719 * __this, t9 * p0, MethodInfo* method)
{
	t719  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t719_TI))))
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
		V_0 = ((*(t719 *)((t719 *)UnBox (L_1, InitializedTypeInfo(&t719_TI)))));
		t719  L_2 = V_0;
		bool L_3 = m3530(NULL, (*(t719 *)__this), L_2, &m3530_MI);
		return L_3;
	}
}
extern MethodInfo m3527_MI;
extern "C" t719  m3527 (t9 * __this , t719  p0, float p1, MethodInfo* method)
{
	t719  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t719_TI), (&V_0));
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
		t719  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3528_MI;
extern "C" t719  m3528 (t9 * __this , float p0, t719  p1, MethodInfo* method)
{
	t719  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t719_TI), (&V_0));
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
		t719  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3529_MI;
extern "C" t719  m3529 (t9 * __this , t719  p0, t719  p1, MethodInfo* method)
{
	t719  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t719_TI), (&V_0));
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
		t719  L_54 = V_0;
		return L_54;
	}
}
extern "C" bool m3530 (t9 * __this , t719  p0, t719  p1, MethodInfo* method)
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
extern MethodInfo m3531_MI;
extern "C" bool m3531 (t9 * __this , t719  p0, t719  p1, MethodInfo* method)
{
	{
		t719  L_0 = p0;
		t719  L_1 = p1;
		bool L_2 = m3530(NULL, L_0, L_1, &m3530_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t449.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t449_TI;
#include "t449MD.h"



extern MethodInfo m2653_MI;
extern "C" t434  m2653 (t449 * __this, MethodInfo* method)
{
	typedef t434  (*m2653_ftn) (t449 *);
	static m2653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2650_MI;
extern "C" float m2650 (t449 * __this, MethodInfo* method)
{
	typedef float (*m2650_ftn) (t449 *);
	static m2650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2647_MI;
extern "C" t425 * m2647 (t449 * __this, MethodInfo* method)
{
	typedef t425 * (*m2647_ftn) (t449 *);
	static m2647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2678_MI;
extern "C" t434  m2678 (t449 * __this, MethodInfo* method)
{
	typedef t434  (*m2678_ftn) (t449 *);
	static m2678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2648_MI;
extern "C" t47  m2648 (t449 * __this, MethodInfo* method)
{
	typedef t47  (*m2648_ftn) (t449 *);
	static m2648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
#include "t562.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t562_TI;
#include "t562MD.h"



#include "t582.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t582_TI;
#include "t582MD.h"

extern MethodInfo m3532_MI;


extern MethodInfo m2667_MI;
extern "C" t47  m2667 (t9 * __this , t449 * p0, MethodInfo* method)
{
	typedef t47  (*m2667_ftn) (t449 *);
	static m2667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2666_MI;
extern "C" t47  m2666 (t9 * __this , t449 * p0, MethodInfo* method)
{
	typedef t47  (*m2666_ftn) (t449 *);
	static m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2656_MI;
extern "C" t47  m2656 (t9 * __this , t449 * p0, MethodInfo* method)
{
	typedef t47  (*m2656_ftn) (t449 *);
	static m2656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2652_MI;
extern "C" t28  m2652 (t9 * __this , t449 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t449 * L_0 = p0;
		m3532(NULL, L_0, (&V_0), &m3532_MI);
		t28  L_1 = V_0;
		return L_1;
	}
}
extern "C" void m3532 (t9 * __this , t449 * p0, t28 * p1, MethodInfo* method)
{
	typedef void (*m3532_ftn) (t449 *, t28 *);
	static m3532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1);
}
#include "t720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t720_TI;
#include "t720MD.h"

#include "t721.h"
#include "t319.h"
#include "t722.h"
#include "t724.h"
#include "t877.h"
#include "t878.h"
#include "t879.h"
#include "t880.h"
extern TypeInfo t319_TI;
extern TypeInfo t722_TI;
extern TypeInfo t723_TI;
extern TypeInfo t721_TI;
extern TypeInfo t305_TI;
extern TypeInfo t296_TI;
extern TypeInfo t221_TI;
extern TypeInfo t879_TI;
extern TypeInfo t878_TI;
extern TypeInfo t880_TI;
#include "t319MD.h"
#include "t722MD.h"
#include "t724MD.h"
#include "t721MD.h"
#include "t879MD.h"
#include "t878MD.h"
#include "t880MD.h"
extern Il2CppType t721_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t879_0_0_0;
extern MethodInfo m3545_MI;
extern MethodInfo m1193_MI;
extern MethodInfo m3539_MI;
extern MethodInfo m3547_MI;
extern MethodInfo m3543_MI;
extern MethodInfo m3542_MI;
extern MethodInfo m4241_MI;
extern MethodInfo m4242_MI;
extern MethodInfo m3552_MI;
extern MethodInfo m3546_MI;
extern MethodInfo m3553_MI;
extern MethodInfo m3537_MI;
extern MethodInfo m3536_MI;
extern MethodInfo m3538_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m4244_MI;
extern MethodInfo m4245_MI;
extern MethodInfo m2741_MI;
extern MethodInfo m4246_MI;
extern MethodInfo m4247_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m2715_MI;
extern MethodInfo m4248_MI;
extern MethodInfo m4249_MI;
extern MethodInfo m4250_MI;
extern MethodInfo m4251_MI;
extern MethodInfo m4252_MI;
extern MethodInfo m4253_MI;
extern MethodInfo m4254_MI;
extern MethodInfo m4255_MI;
extern MethodInfo m4256_MI;
extern MethodInfo m4257_MI;
extern MethodInfo m4258_MI;
extern Il2CppGenericMethod m4243_GM;
extern Il2CppGenericMethod m4250_GM;
extern Il2CppGenericMethod m4259_GM;
extern Il2CppGenericMethod m4260_GM;
extern Il2CppGenericMethod m4261_GM;
extern Il2CppGenericMethod m4262_GM;
extern Il2CppGenericMethod m4263_GM;
extern Il2CppGenericMethod m4252_GM;
extern Il2CppGenericMethod m4256_GM;


extern MethodInfo m3533_MI;
extern "C" void m3533 (t720 * __this, t2* p0, t724 * p1, MethodInfo* method)
{
	t221* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t724 * L_0 = p1;
		t721 * L_1 = m3552(L_0, &m3552_MI);
		t221* L_2 = m3546(NULL, L_1, &m3546_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		t724 * L_4 = p1;
		t723* L_5 = m3553(L_4, &m3553_MI);
		t221* L_6 = V_0;
		m3537(__this, L_3, L_5, L_6, &m3537_MI);
		return;
	}
}
extern MethodInfo m3534_MI;
extern "C" void m3534 (t720 * __this, MethodInfo* method)
{
	{
		m3536(__this, 1, &m3536_MI);
		return;
	}
}
extern MethodInfo m3535_MI;
extern "C" void m3535 (t720 * __this, MethodInfo* method)
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
		m3536(__this, 0, &m3536_MI);
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
extern "C" void m3536 (t720 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3536_ftn) (t720 *, bool);
	static m3536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3537 (t720 * __this, t2* p0, t723* p1, t221* p2, MethodInfo* method)
{
	typedef void (*m3537_ftn) (t720 *, t2*, t723*, t221*);
	static m3537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t721 * m3538 (t720 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3545(__this, &m3545_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t319 * L_1 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1193(L_1, (t2*) &_stringLiteral233, &m1193_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t2* L_2 = m3539(__this, &m3539_MI);
		t721 * L_3 = m3547(NULL, L_2, &m3547_MI);
		return L_3;
	}
}
extern "C" t2* m3539 (t720 * __this, MethodInfo* method)
{
	typedef t2* (*m3539_ftn) (t720 *);
	static m3539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3539_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3540_MI;
extern "C" t2* m3540 (t720 * __this, MethodInfo* method)
{
	t723* V_0 = {0};
	{
		bool L_0 = m3545(__this, &m3545_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t319 * L_1 = (t319 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t319_TI));
		m1193(L_1, (t2*) &_stringLiteral234, &m1193_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t723* L_2 = m3543(__this, &m3543_MI);
		V_0 = L_2;
		t722 * L_3 = m3542(__this, &m3542_MI);
		t723* L_4 = V_0;
		t723* L_5 = V_0;
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t723*, int32_t, int32_t >::Invoke(&m4241_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		return L_6;
	}
}
extern MethodInfo m3541_MI;
extern "C" t722 * m3541 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_0 = m4242(NULL, &m4242_MI);
		return L_0;
	}
}
extern TypeInfo* t305_TI_var;
extern MethodInfo* m4243_MI_var;
extern "C" t722 * m3542 (t720 * __this, MethodInfo* method)
{
	static bool m3542_init;
	if (!m3542_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m4243_MI_var = il2cpp_codegen_genericmethod_get_method(&m4243_GM);
		m3542_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2* V_3 = {0};
	int32_t V_4 = 0;
	t722 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*)NULL;
		t721 * L_0 = m3538(__this, &m3538_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t2*, t2** >::Invoke(m4243_MI_var, L_0, (t2*) &_stringLiteral235, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		t2* L_2 = V_0;
		int32_t L_3 = m4244(L_2, (t2*) &_stringLiteral236, 5, &m4244_MI);
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
		int32_t L_7 = m4245(L_5, ((int32_t)61), L_6, &m4245_MI);
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
		t2* L_11 = m2741(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), &m2741_MI);
		t2* L_12 = m4246(L_11, &m4246_MI);
		t305* L_13 = ((t305*)SZArrayNew(t305_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		t305* L_14 = L_13;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		t2* L_15 = m4247(L_12, L_14, &m4247_MI);
		t2* L_16 = m4246(L_15, &m4246_MI);
		V_3 = L_16;
		t2* L_17 = V_3;
		int32_t L_18 = m2770(L_17, ((int32_t)59), &m2770_MI);
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
		t2* L_22 = m2715(L_20, 0, L_21, &m2715_MI);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			t2* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_24 = m4248(NULL, L_23, &m4248_MI);
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
		t2* L_26 = m399(NULL, (t2*) &_stringLiteral237, L_25, (t2*) &_stringLiteral141, &m399_MI);
		m611(NULL, L_26, &m611_MI);
		goto IL_00b0;
	} // end catch (depth: 1)

IL_00b0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_27 = m4249(NULL, &m4249_MI);
		return L_27;
	}

IL_00b6:
	{
		t722 * L_28 = V_5;
		return L_28;
	}
}
extern "C" t723* m3543 (t720 * __this, MethodInfo* method)
{
	typedef t723* (*m3543_ftn) (t720 *);
	static m3543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3544_MI;
extern "C" t2* m3544 (t720 * __this, MethodInfo* method)
{
	typedef t2* (*m3544_ftn) (t720 *);
	static m3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3545 (t720 * __this, MethodInfo* method)
{
	typedef bool (*m3545_ftn) (t720 *);
	static m3545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4250_MI_var;
extern MethodInfo* m4259_MI_var;
extern MethodInfo* m4260_MI_var;
extern MethodInfo* m4261_MI_var;
extern MethodInfo* m4262_MI_var;
extern MethodInfo* m4263_MI_var;
extern "C" t221* m3546 (t9 * __this , t721 * p0, MethodInfo* method)
{
	static bool m3546_init;
	if (!m3546_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4250_MI_var = il2cpp_codegen_genericmethod_get_method(&m4250_GM);
		m4259_MI_var = il2cpp_codegen_genericmethod_get_method(&m4259_GM);
		m4260_MI_var = il2cpp_codegen_genericmethod_get_method(&m4260_GM);
		m4261_MI_var = il2cpp_codegen_genericmethod_get_method(&m4261_GM);
		m4262_MI_var = il2cpp_codegen_genericmethod_get_method(&m4262_GM);
		m4263_MI_var = il2cpp_codegen_genericmethod_get_method(&m4263_GM);
		m3546_init = true;
	}
	t221* V_0 = {0};
	int32_t V_1 = 0;
	t878  V_2 = {0};
	t879  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t721 * L_0 = p0;
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
		t721 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4250_MI_var, L_1);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		t721 * L_3 = p0;
		t879  L_4 = m4259(L_3, m4259_MI_var);
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
			t878  L_5 = m4260((&V_3), m4260_MI_var);
			V_2 = L_5;
			t221* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t2* L_9 = m4261((&V_2), m4261_MI_var);
			t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4251_MI, L_9);
			ArrayElementTypeCheck (L_6, L_10);
			*((t2**)(t2**)SZArrayLdElema(L_6, L_8)) = (t2*)L_10;
			t221* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			t2* L_14 = m4262((&V_2), m4262_MI_var);
			t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4251_MI, L_14);
			ArrayElementTypeCheck (L_11, L_15);
			*((t2**)(t2**)SZArrayLdElema(L_11, L_13)) = (t2*)L_15;
		}

IL_0052:
		{
			bool L_16 = m4263((&V_3), m4263_MI_var);
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
		t879  L_17 = V_3;
		t879  L_18 = L_17;
		t9 * L_19 = Box(t879_TI_var, &L_18);
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
extern TypeInfo* t721_TI_var;
extern MethodInfo* m4252_MI_var;
extern MethodInfo* m4256_MI_var;
extern "C" t721 * m3547 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m3547_init;
	if (!m3547_init)
	{
		t721_TI_var = il2cpp_codegen_class_from_type(&t721_0_0_0);
		m4252_MI_var = il2cpp_codegen_genericmethod_get_method(&m4252_GM);
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m3547_init = true;
	}
	t721 * V_0 = {0};
	t880 * V_1 = {0};
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
		t556 * L_1 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_1, (t2*) &_stringLiteral238, &m2885_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t721 * L_2 = (t721 *)il2cpp_codegen_object_new (t721_TI_var);
		m4252(L_2, m4252_MI_var);
		V_0 = L_2;
		t2* L_3 = p0;
		t880 * L_4 = (t880 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t880_TI));
		m4253(L_4, L_3, &m4253_MI);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		t880 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4254_MI, L_5);
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
		bool L_11 = m4255(L_10, (t2*) &_stringLiteral239, &m4255_MI);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		t721 * L_12 = V_0;
		t2* L_13 = V_3;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_12, (t2*) &_stringLiteral240, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		t2* L_14 = V_3;
		int32_t L_15 = m4257(L_14, (t2*) &_stringLiteral241, &m4257_MI);
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
		t2* L_19 = m2715(L_17, 0, L_18, &m2715_MI);
		t2* L_20 = m4258(L_19, &m4258_MI);
		V_5 = L_20;
		t2* L_21 = V_3;
		int32_t L_22 = V_4;
		t2* L_23 = m2741(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), &m2741_MI);
		V_6 = L_23;
		t721 * L_24 = V_0;
		t2* L_25 = V_5;
		t2* L_26 = V_6;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		t721 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t724_TI;

#include "t881.h"
#include "t31.h"
#include "t725.h"
extern TypeInfo t881_TI;
extern TypeInfo t31_TI;
extern TypeInfo t726_TI;
extern TypeInfo t725_TI;
#include "t881MD.h"
#include "t31MD.h"
#include "t726MD.h"
#include "t725MD.h"
#include "t178MD.h"
extern Il2CppType t31_0_0_0;
extern Il2CppType t725_0_0_0;
extern Il2CppType t723_0_0_0;
extern MethodInfo m4264_MI;
extern MethodInfo m4265_MI;
extern MethodInfo m4266_MI;
extern MethodInfo m4267_MI;
extern MethodInfo m4268_MI;
extern MethodInfo m3560_MI;
extern MethodInfo m3557_MI;
extern MethodInfo m4269_MI;
extern MethodInfo m4270_MI;
extern MethodInfo m4271_MI;
extern MethodInfo m4272_MI;
extern MethodInfo m3556_MI;
extern MethodInfo m4273_MI;
extern MethodInfo m398_MI;
extern MethodInfo m1151_MI;
extern MethodInfo m3550_MI;
extern MethodInfo m402_MI;
extern MethodInfo m4274_MI;
extern MethodInfo m4275_MI;
extern MethodInfo m4276_MI;
extern MethodInfo m3549_MI;
extern Il2CppGenericMethod m4267_GM;
extern Il2CppGenericMethod m4270_GM;
extern Il2CppGenericMethod m4271_GM;
extern Il2CppGenericMethod m4273_GM;
extern Il2CppGenericMethod m398_GM;
extern Il2CppGenericMethod m402_GM;
extern Il2CppGenericMethod m4274_GM;


extern MethodInfo m3548_MI;
extern TypeInfo* t725_TI_var;
extern TypeInfo* t31_TI_var;
extern TypeInfo* t723_TI_var;
extern MethodInfo* m4273_MI_var;
extern MethodInfo* m398_MI_var;
extern "C" void m3548 (t724 * __this, MethodInfo* method)
{
	static bool m3548_init;
	if (!m3548_init)
	{
		t725_TI_var = il2cpp_codegen_class_from_type(&t725_0_0_0);
		t31_TI_var = il2cpp_codegen_class_from_type(&t31_0_0_0);
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m4273_MI_var = il2cpp_codegen_genericmethod_get_method(&m4273_GM);
		m398_MI_var = il2cpp_codegen_genericmethod_get_method(&m398_GM);
		m3548_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(t725_TI_var);
		t725 * L_0 = (t725 *)il2cpp_codegen_object_new (t725_TI_var);
		m4273(L_0, m4273_MI_var);
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
		__this->f4 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = m1151(NULL, ((int32_t)48), ((int32_t)110), &m1151_MI);
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
		t723* L_9 = (__this->f4);
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
extern "C" void m3549 (t724 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	t722 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_0 = m4249(NULL, &m4249_MI);
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = p1;
		t722 * L_3 = V_0;
		m3550(__this, L_1, L_2, L_3, &m3550_MI);
		return;
	}
}
extern MethodInfo* m402_MI_var;
extern MethodInfo* m4274_MI_var;
extern "C" void m3550 (t724 * __this, t2* p0, t2* p1, t722 * p2, MethodInfo* method)
{
	static bool m3550_init;
	if (!m3550_init)
	{
		m402_MI_var = il2cpp_codegen_genericmethod_get_method(&m402_GM);
		m4274_MI_var = il2cpp_codegen_genericmethod_get_method(&m4274_GM);
		m3550_init = true;
	}
	{
		t31 * L_0 = (__this->f1);
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_0, L_1);
		t31 * L_2 = (__this->f2);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_2, (t2*)NULL);
		t725 * L_3 = (__this->f0);
		t722 * L_4 = p2;
		t2* L_5 = p1;
		t723* L_6 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_4, L_5);
		VirtActionInvoker1< t723* >::Invoke(m4274_MI_var, L_3, L_6);
		t31 * L_7 = (__this->f3);
		t722 * L_8 = p2;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4275_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, (t2*) &_stringLiteral256, L_9, (t2*) &_stringLiteral244, &m399_MI);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_7, L_10);
		return;
	}
}
extern MethodInfo m3551_MI;
extern "C" void m3551 (t724 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4276((&p1), &m4276_MI);
		m3549(__this, L_0, L_1, &m3549_MI);
		return;
	}
}
extern TypeInfo* t721_TI_var;
extern MethodInfo* m4252_MI_var;
extern MethodInfo* m4256_MI_var;
extern "C" t721 * m3552 (t724 * __this, MethodInfo* method)
{
	static bool m3552_init;
	if (!m3552_init)
	{
		t721_TI_var = il2cpp_codegen_class_from_type(&t721_0_0_0);
		m4252_MI_var = il2cpp_codegen_genericmethod_get_method(&m4252_GM);
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m3552_init = true;
	}
	t721 * V_0 = {0};
	{
		t721 * L_0 = (t721 *)il2cpp_codegen_object_new (t721_TI_var);
		m4252(L_0, m4252_MI_var);
		V_0 = L_0;
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t721 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
		t722 * L_3 = m4249(NULL, &m4249_MI);
		t723* L_4 = (__this->f4);
		t723* L_5 = (__this->f4);
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t723*, int32_t, int32_t >::Invoke(&m4241_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, (t2*) &_stringLiteral243, L_6, (t2*) &_stringLiteral244, &m399_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_2, (t2*) &_stringLiteral242, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		t721 * L_8 = V_0;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_8, (t2*) &_stringLiteral242, (t2*) &_stringLiteral245);
	}

IL_0059:
	{
		t721 * L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t221_TI_var;
extern MethodInfo* m4267_MI_var;
extern MethodInfo* m4270_MI_var;
extern MethodInfo* m4271_MI_var;
extern "C" t723* m3553 (t724 * __this, MethodInfo* method)
{
	static bool m3553_init;
	if (!m3553_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m4267_MI_var = il2cpp_codegen_genericmethod_get_method(&m4267_GM);
		m4270_MI_var = il2cpp_codegen_genericmethod_get_method(&m4270_GM);
		m4271_MI_var = il2cpp_codegen_genericmethod_get_method(&m4271_GM);
		m3553_init = true;
	}
	t723* V_0 = {0};
	t723* V_1 = {0};
	t723* V_2 = {0};
	t723* V_3 = {0};
	t723* V_4 = {0};
	t723* V_5 = {0};
	t881 * V_6 = {0};
	int32_t V_7 = 0;
	t723* V_8 = {0};
	t2* V_9 = {0};
	t2* V_10 = {0};
	t723* V_11 = {0};
	t2* V_12 = {0};
	t723* V_13 = {0};
	t723* V_14 = {0};
	t723* V_15 = {0};
	t723* V_16 = {0};
	t881 * V_17 = {0};
	int32_t V_18 = 0;
	t723* V_19 = {0};
	t723* V_20 = {0};
	t723* V_21 = {0};
	t723* V_22 = {0};
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
		t722 * L_1 = m3541(NULL, &m3541_MI);
		t723* L_2 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_1, (t2*) &_stringLiteral246);
		V_0 = L_2;
		t722 * L_3 = m3541(NULL, &m3541_MI);
		t723* L_4 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_3, (t2*) &_stringLiteral247);
		V_1 = L_4;
		t722 * L_5 = m3541(NULL, &m3541_MI);
		t723* L_6 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_5, (t2*) &_stringLiteral248);
		V_2 = L_6;
		t722 * L_7 = m3541(NULL, &m3541_MI);
		t723* L_8 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_7, (t2*) &_stringLiteral249);
		V_3 = L_8;
		t722 * L_9 = m3541(NULL, &m3541_MI);
		t723* L_10 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_9, (t2*) &_stringLiteral244);
		V_4 = L_10;
		t722 * L_11 = m3541(NULL, &m3541_MI);
		t723* L_12 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_11, (t2*) &_stringLiteral250);
		V_5 = L_12;
		t881 * L_13 = (t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t881_TI));
		m4265(L_13, ((int32_t)1024), &m4265_MI);
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
			t881 * L_14 = V_6;
			t723* L_15 = V_1;
			t723* L_16 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_14, L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))));
			t881 * L_17 = V_6;
			t723* L_18 = V_0;
			t723* L_19 = V_0;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_17, L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))));
			t881 * L_20 = V_6;
			t723* L_21 = (__this->f4);
			t723* L_22 = (__this->f4);
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_20, L_21, 0, (((int32_t)(((t121 *)L_22)->max_length))));
			t881 * L_23 = V_6;
			t723* L_24 = V_1;
			t723* L_25 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_23, L_24, 0, (((int32_t)(((t121 *)L_25)->max_length))));
			t881 * L_26 = V_6;
			t723* L_27 = V_2;
			t723* L_28 = V_2;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_26, L_27, 0, (((int32_t)(((t121 *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_29 = m4249(NULL, &m4249_MI);
			t31 * L_30 = (__this->f3);
			int32_t L_31 = V_7;
			t2* L_32 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4267_MI_var, L_30, L_31);
			t723* L_33 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_29, L_32);
			V_8 = L_33;
			t881 * L_34 = V_6;
			t723* L_35 = V_8;
			t723* L_36 = V_8;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_34, L_35, 0, (((int32_t)(((t121 *)L_36)->max_length))));
			t881 * L_37 = V_6;
			t723* L_38 = V_1;
			t723* L_39 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_37, L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))));
			t881 * L_40 = V_6;
			t723* L_41 = V_3;
			t723* L_42 = V_3;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_40, L_41, 0, (((int32_t)(((t121 *)L_42)->max_length))));
			t722 * L_43 = m4249(NULL, &m4249_MI);
			t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4268_MI, L_43);
			V_9 = L_44;
			t31 * L_45 = (__this->f1);
			int32_t L_46 = V_7;
			t2* L_47 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4267_MI_var, L_45, L_46);
			V_10 = L_47;
			t2* L_48 = V_10;
			t722 * L_49 = m4249(NULL, &m4249_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			bool L_50 = m3560(NULL, L_48, L_49, &m3560_MI);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			t2* L_51 = V_10;
			int32_t L_52 = m4257(L_51, (t2*) &_stringLiteral251, &m4257_MI);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_017d;
			}
		}

IL_0144:
		{
			t221* L_53 = ((t221*)SZArrayNew(t221_TI_var, 5));
			ArrayElementTypeCheck (L_53, (t2*) &_stringLiteral251);
			*((t2**)(t2**)SZArrayLdElema(L_53, 0)) = (t2*)(t2*) &_stringLiteral251;
			t221* L_54 = L_53;
			t2* L_55 = V_9;
			ArrayElementTypeCheck (L_54, L_55);
			*((t2**)(t2**)SZArrayLdElema(L_54, 1)) = (t2*)L_55;
			t221* L_56 = L_54;
			ArrayElementTypeCheck (L_56, (t2*) &_stringLiteral252);
			*((t2**)(t2**)SZArrayLdElema(L_56, 2)) = (t2*)(t2*) &_stringLiteral252;
			t221* L_57 = L_56;
			t2* L_58 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_59 = m4249(NULL, &m4249_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t2* L_60 = m3557(NULL, L_58, L_59, &m3557_MI);
			ArrayElementTypeCheck (L_57, L_60);
			*((t2**)(t2**)SZArrayLdElema(L_57, 3)) = (t2*)L_60;
			t221* L_61 = L_57;
			ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral253);
			*((t2**)(t2**)SZArrayLdElema(L_61, 4)) = (t2*)(t2*) &_stringLiteral253;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_62 = m4269(NULL, L_61, &m4269_MI);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_63 = m4249(NULL, &m4249_MI);
			t2* L_64 = V_10;
			t723* L_65 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_63, L_64);
			V_11 = L_65;
			t881 * L_66 = V_6;
			t723* L_67 = V_11;
			t723* L_68 = V_11;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_66, L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))));
			t881 * L_69 = V_6;
			t723* L_70 = V_4;
			t723* L_71 = V_4;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_69, L_70, 0, (((int32_t)(((t121 *)L_71)->max_length))));
			t31 * L_72 = (__this->f2);
			int32_t L_73 = V_7;
			t2* L_74 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4267_MI_var, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			t31 * L_75 = (__this->f2);
			int32_t L_76 = V_7;
			t2* L_77 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4267_MI_var, L_75, L_76);
			V_12 = L_77;
			t2* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_79 = m4249(NULL, &m4249_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			bool L_80 = m3560(NULL, L_78, L_79, &m3560_MI);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			t2* L_81 = V_12;
			int32_t L_82 = m4257(L_81, (t2*) &_stringLiteral251, &m4257_MI);
			if ((((int32_t)L_82) <= ((int32_t)(-1))))
			{
				goto IL_0224;
			}
		}

IL_01eb:
		{
			t221* L_83 = ((t221*)SZArrayNew(t221_TI_var, 5));
			ArrayElementTypeCheck (L_83, (t2*) &_stringLiteral251);
			*((t2**)(t2**)SZArrayLdElema(L_83, 0)) = (t2*)(t2*) &_stringLiteral251;
			t221* L_84 = L_83;
			t2* L_85 = V_9;
			ArrayElementTypeCheck (L_84, L_85);
			*((t2**)(t2**)SZArrayLdElema(L_84, 1)) = (t2*)L_85;
			t221* L_86 = L_84;
			ArrayElementTypeCheck (L_86, (t2*) &_stringLiteral252);
			*((t2**)(t2**)SZArrayLdElema(L_86, 2)) = (t2*)(t2*) &_stringLiteral252;
			t221* L_87 = L_86;
			t2* L_88 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_89 = m4249(NULL, &m4249_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t2* L_90 = m3557(NULL, L_88, L_89, &m3557_MI);
			ArrayElementTypeCheck (L_87, L_90);
			*((t2**)(t2**)SZArrayLdElema(L_87, 3)) = (t2*)L_90;
			t221* L_91 = L_87;
			ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral253);
			*((t2**)(t2**)SZArrayLdElema(L_91, 4)) = (t2*)(t2*) &_stringLiteral253;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_92 = m4269(NULL, L_91, &m4269_MI);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_93 = m4249(NULL, &m4249_MI);
			t2* L_94 = V_12;
			t723* L_95 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_93, L_94);
			V_13 = L_95;
			t881 * L_96 = V_6;
			t723* L_97 = V_5;
			t723* L_98 = V_5;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_96, L_97, 0, (((int32_t)(((t121 *)L_98)->max_length))));
			t881 * L_99 = V_6;
			t723* L_100 = V_13;
			t723* L_101 = V_13;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_99, L_100, 0, (((int32_t)(((t121 *)L_101)->max_length))));
			t881 * L_102 = V_6;
			t723* L_103 = V_4;
			t723* L_104 = V_4;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_102, L_103, 0, (((int32_t)(((t121 *)L_104)->max_length))));
		}

IL_025c:
		{
			t881 * L_105 = V_6;
			t723* L_106 = V_1;
			t723* L_107 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_105, L_106, 0, (((int32_t)(((t121 *)L_107)->max_length))));
			t881 * L_108 = V_6;
			t723* L_109 = V_1;
			t723* L_110 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_108, L_109, 0, (((int32_t)(((t121 *)L_110)->max_length))));
			t725 * L_111 = (__this->f0);
			int32_t L_112 = V_7;
			t723* L_113 = (t723*)VirtFuncInvoker1< t723*, int32_t >::Invoke(m4270_MI_var, L_111, L_112);
			V_14 = L_113;
			t881 * L_114 = V_6;
			t723* L_115 = V_14;
			t723* L_116 = V_14;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_114, L_115, 0, (((int32_t)(((t121 *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			t725 * L_119 = (__this->f0);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4271_MI_var, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			t881 * L_121 = V_6;
			t723* L_122 = V_1;
			t723* L_123 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_121, L_122, 0, (((int32_t)(((t121 *)L_123)->max_length))));
			t881 * L_124 = V_6;
			t723* L_125 = V_0;
			t723* L_126 = V_0;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_124, L_125, 0, (((int32_t)(((t121 *)L_126)->max_length))));
			t881 * L_127 = V_6;
			t723* L_128 = (__this->f4);
			t723* L_129 = (__this->f4);
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_127, L_128, 0, (((int32_t)(((t121 *)L_129)->max_length))));
			t881 * L_130 = V_6;
			t723* L_131 = V_0;
			t723* L_132 = V_0;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_130, L_131, 0, (((int32_t)(((t121 *)L_132)->max_length))));
			t881 * L_133 = V_6;
			t723* L_134 = V_1;
			t723* L_135 = V_1;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_133, L_134, 0, (((int32_t)(((t121 *)L_135)->max_length))));
			t881 * L_136 = V_6;
			t723* L_137 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m4272_MI, L_136);
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
			t881 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			t881 * L_139 = V_6;
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
		t722 * L_140 = m3541(NULL, &m3541_MI);
		t723* L_141 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_140, (t2*) &_stringLiteral254);
		V_15 = L_141;
		t722 * L_142 = m3541(NULL, &m3541_MI);
		t723* L_143 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_142, (t2*) &_stringLiteral255);
		V_16 = L_143;
		t881 * L_144 = (t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t881_TI));
		m4265(L_144, ((int32_t)1024), &m4265_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t722_TI));
			t722 * L_145 = m4249(NULL, &m4249_MI);
			t31 * L_146 = (__this->f1);
			int32_t L_147 = V_18;
			t2* L_148 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4267_MI_var, L_146, L_147);
			t723* L_149 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t723* L_150 = m3556(NULL, L_149, &m3556_MI);
			V_19 = L_150;
			t725 * L_151 = (__this->f0);
			int32_t L_152 = V_18;
			t723* L_153 = (t723*)VirtFuncInvoker1< t723*, int32_t >::Invoke(m4270_MI_var, L_151, L_152);
			V_20 = L_153;
			t723* L_154 = V_20;
			t723* L_155 = m3556(NULL, L_154, &m3556_MI);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			t881 * L_157 = V_17;
			t723* L_158 = V_15;
			t723* L_159 = V_15;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_157, L_158, 0, (((int32_t)(((t121 *)L_159)->max_length))));
		}

IL_0393:
		{
			t881 * L_160 = V_17;
			t723* L_161 = V_19;
			t723* L_162 = V_19;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_160, L_161, 0, (((int32_t)(((t121 *)L_162)->max_length))));
			t881 * L_163 = V_17;
			t723* L_164 = V_16;
			t723* L_165 = V_16;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_163, L_164, 0, (((int32_t)(((t121 *)L_165)->max_length))));
			t881 * L_166 = V_17;
			t723* L_167 = V_21;
			t723* L_168 = V_21;
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, L_166, L_167, 0, (((int32_t)(((t121 *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			t725 * L_171 = (__this->f0);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4271_MI_var, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			t881 * L_173 = V_17;
			t723* L_174 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m4272_MI, L_173);
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
			t881 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			t881 * L_176 = V_17;
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
		t723* L_177 = V_22;
		return L_177;
	}
}
#include "t726.h"
#ifndef _MSC_VER
#else
#endif

#include "t121MD.h"
extern MethodInfo m3558_MI;
extern MethodInfo m4277_MI;
extern MethodInfo m3559_MI;
extern MethodInfo m3555_MI;
extern MethodInfo m3561_MI;
struct t121;
#include "t132.h"
extern "C" int32_t m4278_gshared (t9 * __this , t723* p0, uint8_t p1, MethodInfo* method);
#define m4278(__this , p0, p1, method) (( int32_t (*) (t9 * , t723*, uint8_t, MethodInfo*))m4278_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m4278_GM;


extern MethodInfo m3554_MI;
extern "C" void m3554 (t9 * __this , MethodInfo* method)
{
	{
		t722 * L_0 = m3541(NULL, &m3541_MI);
		t723* L_1 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_0, (t2*) &_stringLiteral257);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f0 = L_1;
		t722 * L_2 = m3541(NULL, &m3541_MI);
		t723* L_3 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_2, (t2*) &_stringLiteral258);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f1 = L_3;
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f2 = ((int32_t)37);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f3 = ((int32_t)43);
		t722 * L_4 = m3541(NULL, &m3541_MI);
		t723* L_5 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_4, (t2*) &_stringLiteral259);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f4 = L_5;
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f5 = ((int32_t)61);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f6 = ((int32_t)95);
		t722 * L_6 = m3541(NULL, &m3541_MI);
		t723* L_7 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_6, (t2*) &_stringLiteral260);
		((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f7 = L_7;
		return;
	}
}
extern TypeInfo* t723_TI_var;
extern "C" t723* m3555 (t9 * __this , uint8_t p0, t723* p1, MethodInfo* method)
{
	static bool m3555_init;
	if (!m3555_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m3555_init = true;
	}
	t723* V_0 = {0};
	{
		V_0 = ((t723*)SZArrayNew(t723_TI_var, 2));
		t723* L_0 = V_0;
		t723* L_1 = p1;
		uint8_t L_2 = p0;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		t723* L_4 = V_0;
		t723* L_5 = p1;
		uint8_t L_6 = p0;
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		t723* L_8 = V_0;
		return L_8;
	}
}
extern "C" t723* m3556 (t9 * __this , t723* p0, MethodInfo* method)
{
	{
		t723* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
		uint8_t L_1 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f2;
		uint8_t L_2 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f3;
		t723* L_3 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f4;
		t723* L_4 = m3558(NULL, L_0, L_1, L_2, L_3, 0, &m3558_MI);
		return L_4;
	}
}
extern "C" t2* m3557 (t9 * __this , t2* p0, t722 * p1, MethodInfo* method)
{
	t723* V_0 = {0};
	{
		t722 * L_0 = p1;
		t2* L_1 = p0;
		t723* L_2 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
		uint8_t L_3 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f5;
		uint8_t L_4 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f6;
		t723* L_5 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f7;
		t723* L_6 = m3558(NULL, L_2, L_3, L_4, L_5, 1, &m3558_MI);
		V_0 = L_6;
		t722 * L_7 = m3541(NULL, &m3541_MI);
		t723* L_8 = V_0;
		t723* L_9 = V_0;
		t2* L_10 = (t2*)VirtFuncInvoker3< t2*, t723*, int32_t, int32_t >::Invoke(&m4241_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return L_10;
	}
}
extern "C" t723* m3558 (t9 * __this , t723* p0, uint8_t p1, uint8_t p2, t723* p3, bool p4, MethodInfo* method)
{
	t881 * V_0 = {0};
	int32_t V_1 = 0;
	t723* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	t881 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	t881 * G_B8_1 = {0};
	t723* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t881 * G_B10_2 = {0};
	{
		t723* L_0 = p0;
		t881 * L_1 = (t881 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t881_TI));
		m4265(L_1, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))*(int32_t)2)), &m4265_MI);
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
			t723* L_2 = p0;
			int32_t L_3 = V_1;
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			t881 * L_5 = V_0;
			uint8_t L_6 = p2;
			VirtActionInvoker1< uint8_t >::Invoke(&m4277_MI, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			t723* L_7 = p0;
			int32_t L_8 = V_1;
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			t723* L_10 = p0;
			int32_t L_11 = V_1;
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			t723* L_13 = p3;
			t723* L_14 = p0;
			int32_t L_15 = V_1;
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			bool L_17 = m3559(NULL, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), &m3559_MI);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			t881 * L_18 = V_0;
			uint8_t L_19 = p1;
			VirtActionInvoker1< uint8_t >::Invoke(&m4277_MI, L_18, L_19);
			t881 * L_20 = V_0;
			t723* L_21 = p0;
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t723* L_25 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t723* L_26 = ((t726_SFs*)InitializedTypeInfo(&t726_TI)->static_fields)->f1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
			t723* L_27 = m3555(NULL, G_B10_1, G_B10_0, &m3555_MI);
			VirtActionInvoker3< t723*, int32_t, int32_t >::Invoke(&m4266_MI, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			t881 * L_28 = V_0;
			t723* L_29 = p0;
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			VirtActionInvoker1< uint8_t >::Invoke(&m4277_MI, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			t723* L_34 = p0;
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t121 *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			t881 * L_35 = V_0;
			t723* L_36 = (t723*)VirtFuncInvoker0< t723* >::Invoke(&m4272_MI, L_35);
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
			t881 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			t881 * L_38 = V_0;
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
		t723* L_39 = V_2;
		return L_39;
	}
}
extern MethodInfo* m4278_MI_var;
extern "C" bool m3559 (t9 * __this , t723* p0, uint8_t p1, MethodInfo* method)
{
	static bool m3559_init;
	if (!m3559_init)
	{
		m4278_MI_var = il2cpp_codegen_genericmethod_get_method(&m4278_GM);
		m3559_init = true;
	}
	{
		t723* L_0 = p0;
		uint8_t L_1 = p1;
		int32_t L_2 = m4278(NULL, L_0, L_1, m4278_MI_var);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m3560 (t9 * __this , t2* p0, t722 * p1, MethodInfo* method)
{
	{
		t722 * L_0 = p1;
		t2* L_1 = p0;
		t723* L_2 = (t723*)VirtFuncInvoker1< t723*, t2* >::Invoke(&m4264_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t726_TI));
		bool L_3 = m3561(NULL, L_2, &m3561_MI);
		return L_3;
	}
}
extern "C" bool m3561 (t9 * __this , t723* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		t723* L_0 = p0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		t723* L_3 = p0;
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
		t723* L_8 = p0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
#include "t727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t727_TI;
#include "t727MD.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void t727_marshal(const t727& unmarshaled, t727_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t727_marshal_back(const t727_marshaled& marshaled, t727& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void t727_marshal_cleanup(t727_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t728.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t728_TI;

extern MethodInfo m2884_MI;


extern "C" t2* m3562 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		return L_2;
	}
}
#include "t173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t173_TI;

extern MethodInfo m3564_MI;


extern "C" void m3563 (t173 * __this, MethodInfo* method)
{
	{
		m3687(__this, &m3687_MI);
		return;
	}
}
extern "C" void m3564 (t173 * __this, MethodInfo* method)
{
	typedef void (*m3564_ftn) (t173 *);
	static m3564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3565_MI;
extern "C" void m3565 (t173 * __this, MethodInfo* method)
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
		m3564(__this, &m3564_MI);
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
#include "t729.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t729_TI;
#include "t729MD.h"



extern MethodInfo m3566_MI;
extern "C" void m3566 (t729 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3567_MI;
extern "C" void m3567 (t729 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3567((t729 *)__this->f9,p0, p1, p2, method);
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
extern "C" void pinvoke_delegate_wrapper_t729(Il2CppObject* delegate, t2* p0, t2* p1, int32_t p2)
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
extern MethodInfo m3568_MI;
extern "C" t9 * m3568 (t729 * __this, t2* p0, t2* p1, int32_t p2, t463 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = Box(InitializedTypeInfo(&t678_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m3569_MI;
extern "C" void m3569 (t729 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t174_TI;
#include "t174MD.h"

extern MethodInfo m3570_MI;


extern MethodInfo m1074_MI;
extern "C" void m1074 (t9 * __this , MethodInfo* method)
{
	typedef void (*m1074_ftn) ();
	static m1074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
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
		m3570(NULL, (t2*)NULL, L_0, 0, 1, &m3570_MI);
		return;
	}
}
extern MethodInfo m594_MI;
extern "C" t173 * m594 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t173 * L_1 = m3570(NULL, L_0, (-1), 0, 0, &m3570_MI);
		return L_1;
	}
}
extern "C" t173 * m3570 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t173 * (*m3570_ftn) (t2*, int32_t, bool, bool);
	static m3570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
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
extern MethodInfo m2794_MI;
extern "C" bool m2794 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2794_ftn) ();
	static m2794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1094_MI;
extern "C" int32_t m1094 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m1094_ftn) ();
	static m1094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1075_MI;
extern "C" t2* m1075 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m1075_ftn) ();
	static m1075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3571_MI;
extern "C" void m3571 (t9 * __this , t2* p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	t729 * V_0 = {0};
	t729 * V_1 = {0};
	{
		bool L_0 = p3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t729 * L_1 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f0;
		V_0 = L_1;
		t729 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		t729 * L_3 = V_0;
		t2* L_4 = p0;
		t2* L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3567_MI, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		t729 * L_7 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f1;
		V_1 = L_7;
		t729 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		t729 * L_9 = V_1;
		t2* L_10 = p0;
		t2* L_11 = p1;
		int32_t L_12 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3567_MI, L_9, L_10, L_11, L_12);
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

extern MethodInfo m3652_MI;


extern MethodInfo m3572_MI;
extern "C" void m3572 (t145 * __this, MethodInfo* method)
{
	{
		m3652(__this, &m3652_MI);
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
extern MethodInfo m2464_MI;
extern "C" bool m2464 (t145 * __this, MethodInfo* method)
{
	typedef bool (*m2464_ftn) (t145 *);
	static m2464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
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
