#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t681.h"
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
extern TypeInfo t681_TI;
#include "t681MD.h"


#include "t121.h"

#include "t682.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t682_TI;
#include "t682MD.h"

#include "t683.h"
#include "t122.h"
#include "t173MD.h"
extern MethodInfo m3588_MI;


extern MethodInfo m3133_MI;
extern "C" void m3133 (t682 * __this, MethodInfo* method)
{
	{
		m3588(__this, &m3588_MI);
		return;
	}
}
extern MethodInfo m3134_MI;
extern "C" t683 * m3134 (t682 * __this, MethodInfo* method)
{
	typedef t683 * (*m3134_ftn) (t682 *);
	static m3134_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3134_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3135_MI;
extern "C" void m3135 (t682 * __this, MethodInfo* method)
{
	typedef void (*m3135_ftn) (t682 *);
	static m3135_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3135_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::DisableCompatibilityChecks()");
	_il2cpp_icall_func(__this);
}
#include "t684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t684_TI;
#include "t684MD.h"

#include "t57.h"
#include "t2.h"
#include "t126.h"
#include "UnityEngine_ArrayTypes.h"
#include "t683MD.h"
extern MethodInfo m3139_MI;
extern MethodInfo m3141_MI;


extern MethodInfo m3136_MI;
extern "C" void m3136 (t684 * __this, MethodInfo* method)
{
	{
		m3588(__this, &m3588_MI);
		return;
	}
}
extern MethodInfo m3137_MI;
extern "C" t57 * m3137 (t684 * __this, MethodInfo* method)
{
	{
		t683 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t57 * L_3 = m3139(L_0, L_1, L_2, &m3139_MI);
		return L_3;
	}
}
extern MethodInfo m3138_MI;
extern "C" t131* m3138 (t684 * __this, MethodInfo* method)
{
	{
		t683 * L_0 = (__this->f1);
		t2* L_1 = (__this->f2);
		t126 * L_2 = (__this->f3);
		t131* L_3 = m3141(L_0, L_1, L_2, &m3141_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t683_TI;

#include "t878.h"
#include "t125.h"
#include "t563.h"
extern TypeInfo t878_TI;
extern TypeInfo t563_TI;
#include "t878MD.h"
#include "t2MD.h"
#include "t563MD.h"
extern MethodInfo m4228_MI;
extern MethodInfo m2724_MI;
extern MethodInfo m2910_MI;
extern MethodInfo m3140_MI;


extern "C" t57 * m3139 (t683 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t878 * L_1 = (t878 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t878_TI));
		m4228(L_1, (t2*) &_stringLiteral152, &m4228_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t2* L_2 = p0;
		int32_t L_3 = m2724(L_2, &m2724_MI);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		t563 * L_4 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_4, (t2*) &_stringLiteral153, &m2910_MI);
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
		t878 * L_6 = (t878 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t878_TI));
		m4228(L_6, (t2*) &_stringLiteral154, &m4228_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0038:
	{
		t2* L_7 = p0;
		t126 * L_8 = p1;
		t57 * L_9 = m3140(__this, L_7, L_8, &m3140_MI);
		return L_9;
	}
}
extern "C" t57 * m3140 (t683 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3140_ftn) (t683 *, t2*, t126 *);
	static m3140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern "C" t131* m3141 (t683 * __this, t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t131* (*m3141_ftn) (t683 *, t2*, t126 *);
	static m3141_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3141_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)");
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
extern MethodInfo m3142_MI;
extern "C" void m3142 (t42 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3143_MI;
extern "C" t2* m3143 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t2* (*m3143_ftn) (int32_t);
	static m3143_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3143_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.LayerMask::LayerToName(System.Int32)");
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
extern MethodInfo m3144_MI;
extern "C" int32_t m3144 (t9 * __this , t221* p0, MethodInfo* method)
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
#include "t305.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t305_TI;
#include "t305MD.h"



#include "t685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t685_TI;
#include "t685MD.h"



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
extern MethodInfo m3145_MI;
extern "C" t2* m3145 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3145_ftn) ();
	static m3145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3145_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::get_deviceUniqueIdentifier()");
	return _il2cpp_icall_func();
}
#include "t176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t176_TI;
#include "t176MD.h"

#include "t123.h"
#include "t686MD.h"
extern MethodInfo m3712_MI;


extern MethodInfo m596_MI;
extern "C" void m596 (t176 * __this, float p0, MethodInfo* method)
{
	{
		m3712(__this, &m3712_MI);
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
		m3712(__this, &m3712_MI);
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
		m3712(__this, &m3712_MI);
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
extern MethodInfo m3147_MI;
extern MethodInfo m646_MI;


extern MethodInfo m3146_MI;
extern "C" void m3146 (t171 * __this, MethodInfo* method)
{
	{
		m3712(__this, &m3712_MI);
		return;
	}
}
extern "C" void m3147 (t171 * __this, MethodInfo* method)
{
	typedef void (*m3147_ftn) (t171 *);
	static m3147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Coroutine::ReleaseCoroutine()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3148_MI;
extern "C" void m3148 (t171 * __this, MethodInfo* method)
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
		m3147(__this, &m3147_MI);
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
#include "t687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t687_TI;
#include "t687MD.h"

#include "t57MD.h"
extern MethodInfo m3666_MI;
extern MethodInfo m3150_MI;
extern MethodInfo m3153_MI;


extern MethodInfo m3149_MI;
extern "C" void m3149 (t687 * __this, MethodInfo* method)
{
	{
		m3666(__this, &m3666_MI);
		m3150(NULL, __this, &m3150_MI);
		return;
	}
}
extern "C" void m3150 (t9 * __this , t687 * p0, MethodInfo* method)
{
	typedef void (*m3150_ftn) (t687 *);
	static m3150_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3150_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3151_MI;
extern "C" t687 * m3151 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t687 * (*m3151_ftn) (t2*);
	static m3151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstance(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3152_MI;
extern "C" t687 * m3152 (t9 * __this , t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t687 * L_1 = m3153(NULL, L_0, &m3153_MI);
		return L_1;
	}
}
extern "C" t687 * m3153 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t687 * (*m3153_ftn) (t126 *);
	static m3153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3153_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)");
	return _il2cpp_icall_func(p0);
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
void t687_marshal(const t687& unmarshaled, t687_marshaled& marshaled)
{
}
void t687_marshal_back(const t687_marshaled& marshaled, t687& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
void t687_marshal_cleanup(t687_marshaled& marshaled)
{
}
#include "t159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t159_TI;
#include "t159MD.h"

#include "t688.h"


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
extern MethodInfo m3154_MI;
extern "C" int32_t m3154 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3154_ftn) ();
	static m3154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3154_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.QualitySettings::get_activeColorSpace()");
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
#include "t689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t689_TI;
#include "t689MD.h"

#include "t47.h"
extern TypeInfo t125_TI;
extern TypeInfo t123_TI;
extern TypeInfo t124_TI;
extern TypeInfo t47_TI;
#include "t125MD.h"
#include "t123MD.h"
#include "t47MD.h"
extern MethodInfo m3163_MI;
extern MethodInfo m4229_MI;
extern MethodInfo m3165_MI;
extern MethodInfo m3167_MI;
extern MethodInfo m3169_MI;
extern MethodInfo m3155_MI;
extern MethodInfo m4230_MI;
extern MethodInfo m3157_MI;
extern MethodInfo m3159_MI;
extern MethodInfo m3161_MI;
extern MethodInfo m4231_MI;
extern MethodInfo m413_MI;
extern MethodInfo m3492_MI;
extern MethodInfo m3496_MI;
extern MethodInfo m3173_MI;


extern "C" float m3155 (t689 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3156_MI;
extern "C" void m3156 (t689 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m3157 (t689 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3158_MI;
extern "C" void m3158 (t689 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3159 (t689 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3160_MI;
extern "C" void m3160 (t689 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m3161 (t689 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3162_MI;
extern "C" void m3162 (t689 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3163 (t689 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3164_MI;
extern "C" void m3164 (t689 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m3165 (t689 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3166_MI;
extern "C" void m3166 (t689 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" int32_t m3167 (t689 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3168_MI;
extern "C" void m3168 (t689 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" int32_t m3169 (t689 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3170_MI;
extern "C" void m3170 (t689 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3171_MI;
extern "C" int32_t m3171 (t689 * __this, MethodInfo* method)
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
		int32_t L_0 = m3163(__this, &m3163_MI);
		V_0 = L_0;
		int32_t L_1 = m4229((&V_0), &m4229_MI);
		int32_t L_2 = m3165(__this, &m3165_MI);
		V_1 = L_2;
		int32_t L_3 = m4229((&V_1), &m4229_MI);
		int32_t L_4 = m3167(__this, &m3167_MI);
		V_2 = L_4;
		int32_t L_5 = m4229((&V_2), &m4229_MI);
		int32_t L_6 = m3169(__this, &m3169_MI);
		V_3 = L_6;
		int32_t L_7 = m4229((&V_3), &m4229_MI);
		float L_8 = m3155(__this, &m3155_MI);
		V_4 = L_8;
		int32_t L_9 = m4230((&V_4), &m4230_MI);
		float L_10 = m3157(__this, &m3157_MI);
		V_5 = L_10;
		int32_t L_11 = m4230((&V_5), &m4230_MI);
		float L_12 = m3159(__this, &m3159_MI);
		V_6 = L_12;
		int32_t L_13 = m4230((&V_6), &m4230_MI);
		float L_14 = m3161(__this, &m3161_MI);
		V_7 = L_14;
		int32_t L_15 = m4230((&V_7), &m4230_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_11<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_13>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_15>>(int32_t)3))));
	}
}
extern MethodInfo m3172_MI;
extern "C" bool m3172 (t689 * __this, t9 * p0, MethodInfo* method)
{
	t689  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t47  V_5 = {0};
	int32_t G_B8_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t689_TI))))
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
		V_0 = ((*(t689 *)((t689 *)UnBox (L_1, InitializedTypeInfo(&t689_TI)))));
		int32_t L_2 = m3163(__this, &m3163_MI);
		V_1 = L_2;
		int32_t L_3 = m3163((&V_0), &m3163_MI);
		bool L_4 = m4231((&V_1), L_3, &m4231_MI);
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_5 = m3165(__this, &m3165_MI);
		V_2 = L_5;
		int32_t L_6 = m3165((&V_0), &m3165_MI);
		bool L_7 = m4231((&V_2), L_6, &m4231_MI);
		if (!L_7)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_8 = m3167(__this, &m3167_MI);
		V_3 = L_8;
		int32_t L_9 = m3167((&V_0), &m3167_MI);
		bool L_10 = m4231((&V_3), L_9, &m4231_MI);
		if (!L_10)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_11 = m3169(__this, &m3169_MI);
		V_4 = L_11;
		int32_t L_12 = m3169((&V_0), &m3169_MI);
		bool L_13 = m4231((&V_4), L_12, &m4231_MI);
		if (!L_13)
		{
			goto IL_00cb;
		}
	}
	{
		float L_14 = m3155(__this, &m3155_MI);
		float L_15 = m3157(__this, &m3157_MI);
		float L_16 = m3159(__this, &m3159_MI);
		float L_17 = m3161(__this, &m3161_MI);
		m413((&V_5), L_14, L_15, L_16, L_17, &m413_MI);
		float L_18 = m3155((&V_0), &m3155_MI);
		float L_19 = m3157((&V_0), &m3157_MI);
		float L_20 = m3159((&V_0), &m3159_MI);
		float L_21 = m3161((&V_0), &m3161_MI);
		t47  L_22 = {0};
		m413(&L_22, L_18, L_19, L_20, L_21, &m413_MI);
		t47  L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t47_TI), &L_23);
		bool L_25 = m3492((&V_5), L_24, &m3492_MI);
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
extern "C" bool m3173 (t9 * __this , t689  p0, t689  p1, MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = m3163((&p0), &m3163_MI);
		int32_t L_1 = m3163((&p1), &m3163_MI);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = m3165((&p0), &m3165_MI);
		int32_t L_3 = m3165((&p1), &m3165_MI);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_4 = m3167((&p0), &m3167_MI);
		int32_t L_5 = m3167((&p1), &m3167_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_6 = m3169((&p0), &m3169_MI);
		int32_t L_7 = m3169((&p1), &m3169_MI);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0095;
		}
	}
	{
		float L_8 = m3155((&p0), &m3155_MI);
		float L_9 = m3157((&p0), &m3157_MI);
		float L_10 = m3159((&p0), &m3159_MI);
		float L_11 = m3161((&p0), &m3161_MI);
		t47  L_12 = {0};
		m413(&L_12, L_8, L_9, L_10, L_11, &m413_MI);
		float L_13 = m3155((&p1), &m3155_MI);
		float L_14 = m3157((&p1), &m3157_MI);
		float L_15 = m3159((&p1), &m3159_MI);
		float L_16 = m3161((&p1), &m3161_MI);
		t47  L_17 = {0};
		m413(&L_17, L_13, L_14, L_15, L_16, &m413_MI);
		bool L_18 = m3496(NULL, L_12, L_17, &m3496_MI);
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
extern MethodInfo m3174_MI;
extern "C" bool m3174 (t9 * __this , t689  p0, t689  p1, MethodInfo* method)
{
	{
		t689  L_0 = p0;
		t689  L_1 = p1;
		bool L_2 = m3173(NULL, L_0, L_1, &m3173_MI);
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
extern MethodInfo m2554_MI;
extern "C" int32_t m2554 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2554_ftn) (t144 *);
	static m2554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingLayerID()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2555_MI;
extern "C" int32_t m2555 (t144 * __this, MethodInfo* method)
{
	typedef int32_t (*m2555_ftn) (t144 *);
	static m2555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Renderer::get_sortingOrder()");
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
extern MethodInfo m2924_MI;
extern "C" float m2924 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2924_ftn) ();
	static m2924_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2924_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
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
extern MethodInfo m3176_MI;
extern MethodInfo m379_MI;
extern MethodInfo m3177_MI;


extern MethodInfo m3175_MI;
extern "C" void m3175 (t148 * __this, MethodInfo* method)
{
	{
		m3666(__this, &m3666_MI);
		return;
	}
}
extern "C" int32_t m3176 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3176_ftn) (t148 *);
	static m3176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m3177 (t9 * __this , t148 * p0, MethodInfo* method)
{
	typedef int32_t (*m3177_ftn) (t148 *);
	static m3177_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3177_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2705_MI;
extern "C" int32_t m2705 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3176(NULL, __this, &m3176_MI);
		return L_0;
	}
}
extern MethodInfo m3178_MI;
extern "C" void m3178 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral155, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
extern MethodInfo m2707_MI;
extern "C" int32_t m2707 (t148 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3177(NULL, __this, &m3177_MI);
		return L_0;
	}
}
extern MethodInfo m3179_MI;
extern "C" void m3179 (t148 * __this, int32_t p0, MethodInfo* method)
{
	{
		t138 * L_0 = (t138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t138_TI));
		m379(L_0, (t2*) &_stringLiteral155, &m379_MI);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#include "t432.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t432_TI;
#include "t432MD.h"

#include "t43.h"


extern MethodInfo m2611_MI;
extern "C" t432 * m2611 (t9 * __this , MethodInfo* method)
{
	typedef t432 * (*m2611_ftn) ();
	static m2611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2708_MI;
extern "C" t43  m2708 (t432 * __this, float p0, float p1, MethodInfo* method)
{
	typedef t43  (*m2708_ftn) (t432 *, float, float);
	static m2708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)");
	return _il2cpp_icall_func(__this, p0, p1);
}
#include "t44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t44_TI;
#include "t44MD.h"

extern MethodInfo m3181_MI;
extern MethodInfo m3182_MI;
extern MethodInfo m3183_MI;
extern MethodInfo m3184_MI;
extern MethodInfo m3180_MI;
extern MethodInfo m3187_MI;
extern MethodInfo m3189_MI;
extern MethodInfo m3190_MI;
extern MethodInfo m3191_MI;
extern MethodInfo m3185_MI;


extern MethodInfo m441_MI;
extern "C" void m441 (t44 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		m3175(__this, &m3175_MI);
		m3180(NULL, __this, &m3180_MI);
		int32_t L_0 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3187_MI, __this, L_0);
		int32_t L_1 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3189_MI, __this, L_1);
		int32_t L_2 = p2;
		m3190(__this, L_2, &m3190_MI);
		m3191(__this, 7, &m3191_MI);
		int32_t L_3 = m3154(NULL, &m3154_MI);
		m3185(NULL, __this, ((((int32_t)L_3) == ((int32_t)1))? 1 : 0), &m3185_MI);
		return;
	}
}
extern "C" void m3180 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef void (*m3180_ftn) (t44 *);
	static m3180_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3180_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(p0);
}
extern "C" int32_t m3181 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3181_ftn) (t44 *);
	static m3181_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3181_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3182 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3182_ftn) (t44 *, int32_t);
	static m3182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m3183 (t9 * __this , t44 * p0, MethodInfo* method)
{
	typedef int32_t (*m3183_ftn) (t44 *);
	static m3183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3184 (t9 * __this , t44 * p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3184_ftn) (t44 *, int32_t);
	static m3184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3185 (t9 * __this , t44 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3185_ftn) (t44 *, bool);
	static m3185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3186_MI;
extern "C" int32_t m3186 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3181(NULL, __this, &m3181_MI);
		return L_0;
	}
}
extern "C" void m3187 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3182(NULL, __this, L_0, &m3182_MI);
		return;
	}
}
extern MethodInfo m3188_MI;
extern "C" int32_t m3188 (t44 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m3183(NULL, __this, &m3183_MI);
		return L_0;
	}
}
extern "C" void m3189 (t44 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3184(NULL, __this, L_0, &m3184_MI);
		return;
	}
}
extern "C" void m3190 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3190_ftn) (t44 *, int32_t);
	static m3190_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3190_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_depth(System.Int32)");
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
extern "C" void m3191 (t44 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3191_ftn) (t44 *, int32_t);
	static m3191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)");
	_il2cpp_icall_func(__this, p0);
}
#include "t690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t690_TI;
#include "t690MD.h"



#include "t691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t691_TI;
#include "t691MD.h"



#include "t197.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t197_TI;
#include "t197MD.h"



#include "t692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t692_TI;
#include "t692MD.h"

extern MethodInfo m3193_MI;


extern MethodInfo m3192_MI;
extern "C" t691 * m3192 (t692 * __this, t13  p0, MethodInfo* method)
{
	{
		t691 * L_0 = m3193(NULL, __this, (&p0), &m3193_MI);
		return L_0;
	}
}
extern "C" t691 * m3193 (t9 * __this , t692 * p0, t13 * p1, MethodInfo* method)
{
	typedef t691 * (*m3193_ftn) (t692 *, t13 *);
	static m3193_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3193_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t693_TI;
#include "t693MD.h"



extern MethodInfo m3194_MI;
extern "C" void m3194 (t693 * __this, t43  p0, float p1, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t694_TI;
#include "t694MD.h"



extern MethodInfo m3195_MI;
extern "C" void m3195 (t694 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		return;
	}
}
#include "t695.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t695_TI;
#include "t695MD.h"

extern MethodInfo m336_MI;
extern MethodInfo m3197_MI;
extern MethodInfo m3198_MI;


extern MethodInfo m3196_MI;
extern "C" void m3196 (t695 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3197(__this, &m3197_MI);
		return;
	}
}
extern "C" void m3197 (t695 * __this, MethodInfo* method)
{
	typedef void (*m3197_ftn) (t695 *);
	static m3197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3198 (t695 * __this, MethodInfo* method)
{
	typedef void (*m3198_ftn) (t695 *);
	static m3198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gradient::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3199_MI;
extern "C" void m3199 (t695 * __this, MethodInfo* method)
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
		m3198(__this, &m3198_MI);
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
void t695_marshal(const t695& unmarshaled, t695_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t695_marshal_back(const t695_marshaled& marshaled, t695& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Gradient
void t695_marshal_cleanup(t695_marshaled& marshaled)
{
}
#include "t696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t696_TI;
#include "t696MD.h"



extern MethodInfo m3200_MI;
extern "C" void m3200 (t696 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
#include "t697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t697_TI;
#include "t697MD.h"

#include "t58.h"
#include "t470.h"


extern MethodInfo m3201_MI;
extern "C" void m3201 (t697 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3202_MI;
extern "C" void m3202 (t697 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3202((t697 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t697(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3203_MI;
extern "C" t9 * m3203 (t697 * __this, int32_t p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3204_MI;
extern "C" void m3204 (t697 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t698.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t698_TI;
#include "t698MD.h"

#include "t270.h"
#include "t699.h"
#include "t700.h"
#include "t701.h"
#include "t703.h"
#include "t704.h"
#include "t478.h"
#include "t596.h"
extern TypeInfo t714_TI;
extern TypeInfo t2_TI;
extern TypeInfo t700_TI;
extern TypeInfo t270_TI;
extern TypeInfo t706_TI;
extern TypeInfo t708_TI;
extern TypeInfo t703_TI;
#include "t714MD.h"
#include "t699MD.h"
#include "t700MD.h"
#include "t270MD.h"
#include "t706MD.h"
#include "t478MD.h"
#include "t702MD.h"
extern Il2CppType t708_0_0_0;
extern MethodInfo m3263_MI;
extern MethodInfo m406_MI;
extern MethodInfo m3257_MI;
extern MethodInfo m3322_MI;
extern MethodInfo m4232_MI;
extern MethodInfo m4225_MI;
extern MethodInfo m1100_MI;
extern MethodInfo m3206_MI;
extern MethodInfo m3215_MI;
extern MethodInfo m3208_MI;
extern MethodInfo m3388_MI;
extern MethodInfo m3384_MI;
extern MethodInfo m3211_MI;
extern MethodInfo m3212_MI;
extern MethodInfo m3217_MI;
extern MethodInfo m3207_MI;
extern MethodInfo m3218_MI;


extern MethodInfo m3205_MI;
extern "C" void m3205 (t9 * __this , MethodInfo* method)
{
	{
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f0 = (10.0f);
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral156);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f4 = L_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral157);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f5 = L_1;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral158);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f6 = L_2;
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral159);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f7 = L_3;
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral160);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f8 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral161);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f9 = L_5;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4232_MI, (t2*) &_stringLiteral162);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f10 = L_6;
		t700 * L_7 = (t700 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t700_TI));
		m4225(L_7, &m4225_MI);
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f11 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t270_TI));
		t270  L_8 = m1100(NULL, &m1100_MI);
		m3206(NULL, L_8, &m3206_MI);
		return;
	}
}
extern "C" void m3206 (t9 * __this , t270  p0, MethodInfo* method)
{
	{
		t270  L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f12 = L_0;
		return;
	}
}
extern "C" void m3207 (t9 * __this , t699 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		m3263(NULL, &m3263_MI);
		t699 * L_0 = p0;
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		t699 * L_2 = m3257(NULL, &m3257_MI);
		p0 = L_2;
	}

IL_0017:
	{
		t699 * L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f2 = L_3;
		t699 * L_4 = p0;
		m3322(L_4, &m3322_MI);
		return;
	}
}
extern "C" t699 * m3208 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		m3263(NULL, &m3263_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		t699 * L_0 = ((t698_SFs*)InitializedTypeInfo(&t698_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3209_MI;
extern "C" void m3209 (t9 * __this , bool p0, MethodInfo* method)
{
	typedef void (*m3209_ftn) (bool);
	static m3209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUI::set_changed(System.Boolean)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3210_MI;
extern TypeInfo* t708_TI_var;
extern "C" void m3210 (t9 * __this , t697 * p0, int32_t p1, t699 * p2, int32_t p3, float p4, float p5, t701 * p6, MethodInfo* method)
{
	static bool m3210_init;
	if (!m3210_init)
	{
		t708_TI_var = il2cpp_codegen_class_from_type(&t708_0_0_0);
		m3210_init = true;
	}
	t699 * V_0 = {0};
	t708* V_1 = {0};
	{
		int32_t L_0 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3215(NULL, L_0, 1, &m3215_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		t699 * L_1 = m3208(NULL, &m3208_MI);
		V_0 = L_1;
		t478 * L_2 = m3388(NULL, &m3388_MI);
		int32_t L_3 = m3384(L_2, &m3384_MI);
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
		t708* L_5 = ((t708*)SZArrayNew(t708_TI_var, 2));
		float L_6 = p4;
		t703 * L_7 = m3211(NULL, L_6, &m3211_MI);
		ArrayElementTypeCheck (L_5, L_7);
		*((t703 **)(t703 **)SZArrayLdElema(L_5, 0)) = (t703 *)L_7;
		t708* L_8 = L_5;
		float L_9 = p5;
		t703 * L_10 = m3212(NULL, L_9, &m3212_MI);
		ArrayElementTypeCheck (L_8, L_10);
		*((t703 **)(t703 **)SZArrayLdElema(L_8, 1)) = (t703 *)L_10;
		V_1 = L_8;
		int32_t L_11 = p1;
		t701 * L_12 = p6;
		t708* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3217(NULL, L_11, L_12, L_13, &m3217_MI);
		goto IL_0056;
	}

IL_004d:
	{
		int32_t L_14 = p1;
		t701 * L_15 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3217(NULL, L_14, L_15, (t708*)(t708*)NULL, &m3217_MI);
	}

IL_0056:
	{
		t699 * L_16 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		m3207(NULL, L_16, &m3207_MI);
		t697 * L_17 = p0;
		int32_t L_18 = p1;
		VirtActionInvoker1< int32_t >::Invoke(&m3202_MI, L_17, L_18);
		t478 * L_19 = m3388(NULL, &m3388_MI);
		int32_t L_20 = m3384(L_19, &m3384_MI);
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_0078;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3218(NULL, &m3218_MI);
	}

IL_0078:
	{
		t699 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		m3207(NULL, L_21, &m3207_MI);
		return;
	}
}
#include "t702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t702_TI;

#include "t712.h"
#include "t703MD.h"
extern MethodInfo m3253_MI;


extern "C" t703 * m3211 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t703 * L_3 = (t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t703_TI));
		m3253(L_3, 0, L_2, &m3253_MI);
		return L_3;
	}
}
extern "C" t703 * m3212 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = L_0;
		t9 * L_2 = Box(InitializedTypeInfo(&t123_TI), &L_1);
		t703 * L_3 = (t703 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t703_TI));
		m3253(L_3, 1, L_2, &m3253_MI);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t704_TI;
#include "t704MD.h"

#include "t705.h"
#include "t877.h"
extern TypeInfo t705_TI;
extern TypeInfo t877_TI;
#include "t705MD.h"
#include "t877MD.h"
extern MethodInfo m3238_MI;
extern MethodInfo m4233_MI;


extern MethodInfo m3213_MI;
extern "C" void m3213 (t704 * __this, MethodInfo* method)
{
	{
		t705 * L_0 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_0, &m3238_MI);
		__this->f0 = L_0;
		t700 * L_1 = (t700 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t700_TI));
		m4225(L_1, &m4225_MI);
		__this->f1 = L_1;
		t705 * L_2 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_2, &m3238_MI);
		__this->f2 = L_2;
		m336(__this, &m336_MI);
		t700 * L_3 = (__this->f1);
		t705 * L_4 = (__this->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_3, L_4);
		return;
	}
}
#include "t706.h"
#ifndef _MSC_VER
#else
#endif

#include "t707.h"
#include "t441.h"
#include "t709.h"
#include "t879.h"
#include "t710.h"
extern TypeInfo t701_TI;
extern TypeInfo t707_TI;
extern TypeInfo t441_TI;
extern TypeInfo t709_TI;
extern TypeInfo t129_TI;
extern TypeInfo t879_TI;
extern TypeInfo t137_TI;
#include "t701MD.h"
#include "t707MD.h"
#include "t441MD.h"
#include "t709MD.h"
#include "t129MD.h"
#include "t710MD.h"
#include "t879MD.h"
extern Il2CppType t707_0_0_0;
extern Il2CppType t879_0_0_0;
extern MethodInfo m3350_MI;
extern MethodInfo m3365_MI;
extern MethodInfo m4234_MI;
extern MethodInfo m2821_MI;
extern MethodInfo m4235_MI;
extern MethodInfo m4236_MI;
extern MethodInfo m4237_MI;
extern MethodInfo m3229_MI;
extern MethodInfo m3240_MI;
extern MethodInfo m3243_MI;
extern MethodInfo m2923_MI;
extern MethodInfo m3244_MI;
extern MethodInfo m3245_MI;
extern MethodInfo m3246_MI;
extern MethodInfo m3220_MI;
extern MethodInfo m3221_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3242_MI;
extern MethodInfo m2620_MI;
extern MethodInfo m620_MI;
extern MethodInfo m2621_MI;
extern MethodInfo m3222_MI;
extern MethodInfo m2615_MI;
extern MethodInfo m2616_MI;
extern MethodInfo m3223_MI;
extern MethodInfo m3224_MI;
extern Il2CppGenericMethod m4234_GM;
extern Il2CppGenericMethod m4235_GM;
extern Il2CppGenericMethod m4236_GM;
extern Il2CppGenericMethod m4238_GM;
extern Il2CppGenericMethod m4239_GM;
extern Il2CppGenericMethod m4240_GM;


extern MethodInfo m3214_MI;
extern TypeInfo* t707_TI_var;
extern MethodInfo* m4234_MI_var;
extern "C" void m3214 (t9 * __this , MethodInfo* method)
{
	static bool m3214_init;
	if (!m3214_init)
	{
		t707_TI_var = il2cpp_codegen_class_from_type(&t707_0_0_0);
		m4234_MI_var = il2cpp_codegen_genericmethod_get_method(&m4234_GM);
		m3214_init = true;
	}
	{
		t707 * L_0 = (t707 *)il2cpp_codegen_object_new (t707_TI_var);
		m4234(L_0, m4234_MI_var);
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f0 = L_0;
		t707 * L_1 = (t707 *)il2cpp_codegen_object_new (t707_TI_var);
		m4234(L_1, m4234_MI_var);
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f1 = L_1;
		t704 * L_2 = (t704 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t704_TI));
		m3213(L_2, &m3213_MI);
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2 = L_2;
		t441  L_3 = {0};
		m2821(&L_3, (0.0f), (0.0f), (1.0f), (1.0f), &m2821_MI);
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f3 = L_3;
		return;
	}
}
extern MethodInfo* m4235_MI_var;
extern MethodInfo* m4236_MI_var;
extern "C" t704 * m3215 (t9 * __this , int32_t p0, bool p1, MethodInfo* method)
{
	static bool m3215_init;
	if (!m3215_init)
	{
		m4235_MI_var = il2cpp_codegen_genericmethod_get_method(&m4235_GM);
		m4236_MI_var = il2cpp_codegen_genericmethod_get_method(&m4236_GM);
		m3215_init = true;
	}
	t707 * V_0 = {0};
	t704 * V_1 = {0};
	t707 * G_B3_0 = {0};
	{
		bool L_0 = p1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t707 * L_1 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f1;
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t707 * L_2 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f0;
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		t707 * L_3 = V_0;
		int32_t L_4 = p0;
		bool L_5 = (bool)VirtFuncInvoker2< bool, int32_t, t704 ** >::Invoke(m4235_MI_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		t704 * L_6 = (t704 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t704_TI));
		m3213(L_6, &m3213_MI);
		V_1 = L_6;
		t707 * L_7 = V_0;
		int32_t L_8 = p0;
		t704 * L_9 = V_1;
		VirtActionInvoker2< int32_t, t704 * >::Invoke(m4236_MI_var, L_7, L_8, L_9);
		goto IL_0037;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_10 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_11 = V_1;
		t705 * L_12 = (L_11->f0);
		L_10->f0 = L_12;
		t704 * L_13 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_14 = V_1;
		t700 * L_15 = (L_14->f1);
		L_13->f1 = L_15;
		t704 * L_16 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_17 = V_1;
		t705 * L_18 = (L_17->f2);
		L_16->f2 = L_18;
		t704 * L_19 = V_1;
		return L_19;
	}
}
extern MethodInfo m3216_MI;
extern "C" void m3216 (t9 * __this , int32_t p0, MethodInfo* method)
{
	t704 * V_0 = {0};
	t705 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_1 = m3215(NULL, L_0, 0, &m3215_MI);
		V_0 = L_1;
		t478 * L_2 = m3388(NULL, &m3388_MI);
		int32_t L_3 = m3384(L_2, &m3384_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_4 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_5 = V_0;
		t705 * L_6 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_6, &m3238_MI);
		t705 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t705 * L_8 = V_1;
		L_4->f0 = L_8;
		t704 * L_9 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t700 * L_10 = (L_9->f1);
		VirtActionInvoker0::Invoke(&m4237_MI, L_10);
		t704 * L_11 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t700 * L_12 = (L_11->f1);
		t704 * L_13 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_14 = (L_13->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_12, L_14);
		t704 * L_15 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_16 = V_0;
		t705 * L_17 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_17, &m3238_MI);
		t705 * L_18 = L_17;
		V_1 = L_18;
		L_16->f2 = L_18;
		t705 * L_19 = V_1;
		L_15->f2 = L_19;
		goto IL_00a5;
	}

IL_0075:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_20 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_21 = V_0;
		t705 * L_22 = (L_21->f0);
		L_20->f0 = L_22;
		t704 * L_23 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_24 = V_0;
		t700 * L_25 = (L_24->f1);
		L_23->f1 = L_25;
		t704 * L_26 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_27 = V_0;
		t705 * L_28 = (L_27->f2);
		L_26->f2 = L_28;
	}

IL_00a5:
	{
		return;
	}
}
extern "C" void m3217 (t9 * __this , int32_t p0, t701 * p1, t708* p2, MethodInfo* method)
{
	t704 * V_0 = {0};
	t705 * V_1 = {0};
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_1 = m3215(NULL, L_0, 1, &m3215_MI);
		V_0 = L_1;
		t478 * L_2 = m3388(NULL, &m3388_MI);
		int32_t L_3 = m3384(L_2, &m3384_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_4 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_5 = V_0;
		t705 * L_6 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_6, &m3238_MI);
		t705 * L_7 = L_6;
		V_1 = L_7;
		L_5->f0 = L_7;
		t705 * L_8 = V_1;
		L_4->f0 = L_8;
		t704 * L_9 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_10 = (L_9->f0);
		t701 * L_11 = p1;
		m3229(L_10, L_11, &m3229_MI);
		t704 * L_12 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_13 = (L_12->f0);
		int32_t L_14 = p0;
		L_13->f16 = L_14;
		t708* L_15 = p2;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_16 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_17 = (L_16->f0);
		t708* L_18 = p2;
		VirtActionInvoker1< t708* >::Invoke(&m3240_MI, L_17, L_18);
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_19 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t700 * L_20 = (L_19->f1);
		VirtActionInvoker0::Invoke(&m4237_MI, L_20);
		t704 * L_21 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t700 * L_22 = (L_21->f1);
		t704 * L_23 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_24 = (L_23->f0);
		VirtActionInvoker1< t9 * >::Invoke(&m4233_MI, L_22, L_24);
		t704 * L_25 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_26 = V_0;
		t705 * L_27 = (t705 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t705_TI));
		m3238(L_27, &m3238_MI);
		t705 * L_28 = L_27;
		V_1 = L_28;
		L_26->f2 = L_28;
		t705 * L_29 = V_1;
		L_25->f2 = L_29;
		goto IL_00db;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_30 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_31 = V_0;
		t705 * L_32 = (L_31->f0);
		L_30->f0 = L_32;
		t704 * L_33 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_34 = V_0;
		t700 * L_35 = (L_34->f1);
		L_33->f1 = L_35;
		t704 * L_36 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t704 * L_37 = V_0;
		t705 * L_38 = (L_37->f2);
		L_36->f2 = L_38;
	}

IL_00db:
	{
		return;
	}
}
extern "C" void m3218 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_0 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_1 = (L_0->f0);
		int32_t L_2 = (L_1->f16);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_00a3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_3 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_4 = (L_3->f0);
		VirtActionInvoker0::Invoke(&m3243_MI, L_4);
		t704 * L_5 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_6 = (L_5->f0);
		int32_t L_7 = m385(NULL, &m385_MI);
		t704 * L_8 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_9 = (L_8->f0);
		float L_10 = (L_9->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_11 = m2923(NULL, (((float)L_7)), L_10, &m2923_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3244_MI, L_6, (0.0f), L_11);
		t704 * L_12 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_13 = (L_12->f0);
		VirtActionInvoker0::Invoke(&m3245_MI, L_13);
		t704 * L_14 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_15 = (L_14->f0);
		int32_t L_16 = m621(NULL, &m621_MI);
		t704 * L_17 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_18 = (L_17->f0);
		float L_19 = (L_18->f3);
		float L_20 = m2923(NULL, (((float)L_16)), L_19, &m2923_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3246_MI, L_15, (0.0f), L_20);
		t704 * L_21 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_22 = (L_21->f2);
		m3220(NULL, L_22, &m3220_MI);
		goto IL_00c1;
	}

IL_00a3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_23 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_24 = (L_23->f0);
		m3221(NULL, L_24, &m3221_MI);
		t704 * L_25 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_26 = (L_25->f2);
		m3220(NULL, L_26, &m3220_MI);
	}

IL_00c1:
	{
		return;
	}
}
extern MethodInfo m3219_MI;
extern "C" void m3219 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t704 * L_0 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_1 = (L_0->f0);
		VirtActionInvoker0::Invoke(&m3243_MI, L_1);
		t704 * L_2 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_3 = (L_2->f0);
		int32_t L_4 = m385(NULL, &m385_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3244_MI, L_3, (0.0f), (((float)L_4)));
		t704 * L_5 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_6 = (L_5->f0);
		VirtActionInvoker0::Invoke(&m3245_MI, L_6);
		t704 * L_7 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_8 = (L_7->f0);
		int32_t L_9 = m621(NULL, &m621_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3246_MI, L_8, (0.0f), (((float)L_9)));
		t704 * L_10 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f2;
		t705 * L_11 = (L_10->f2);
		m3220(NULL, L_11, &m3220_MI);
		return;
	}
}
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern "C" void m3220 (t9 * __this , t705 * p0, MethodInfo* method)
{
	static bool m3220_init;
	if (!m3220_init)
	{
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m3220_init = true;
	}
	t705 * V_0 = {0};
	t879  V_1 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t705 * L_0 = p0;
		t710 * L_1 = (L_0->f10);
		t879  L_2 = m4238(L_1, m4238_MI_var);
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
			t709 * L_3 = m4239((&V_1), m4239_MI_var);
			V_0 = ((t705 *)Castclass(L_3, InitializedTypeInfo(&t705_TI)));
			t705 * L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			m3221(NULL, L_4, &m3221_MI);
		}

IL_0024:
		{
			bool L_5 = m4240((&V_1), m4240_MI_var);
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
		t879  L_6 = V_1;
		t879  L_7 = L_6;
		t9 * L_8 = Box(t879_TI_var, &L_7);
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
		t705 * L_9 = p0;
		m3242(L_9, &m3242_MI);
		return;
	}
}
extern "C" void m3221 (t9 * __this , t705 * p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	t441  V_4 = {0};
	{
		t705 * L_0 = p0;
		bool L_1 = (L_0->f15);
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		t705 * L_2 = p0;
		float L_3 = (L_2->f0);
		V_0 = L_3;
		t705 * L_4 = p0;
		float L_5 = (L_4->f1);
		V_1 = L_5;
		t705 * L_6 = p0;
		VirtActionInvoker0::Invoke(&m3243_MI, L_6);
		t705 * L_7 = p0;
		t705 * L_8 = p0;
		t441 * L_9 = &(L_8->f4);
		float L_10 = m2620(L_9, &m2620_MI);
		t705 * L_11 = p0;
		float L_12 = (L_11->f1);
		float L_13 = V_0;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_15 = m620(NULL, L_12, L_13, L_14, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3244_MI, L_7, L_10, L_15);
		t705 * L_16 = p0;
		float L_17 = (L_16->f2);
		V_2 = L_17;
		t705 * L_18 = p0;
		float L_19 = (L_18->f3);
		V_3 = L_19;
		t705 * L_20 = p0;
		VirtActionInvoker0::Invoke(&m3245_MI, L_20);
		t705 * L_21 = p0;
		t705 * L_22 = p0;
		t441 * L_23 = &(L_22->f4);
		float L_24 = m2621(L_23, &m2621_MI);
		t705 * L_25 = p0;
		float L_26 = (L_25->f3);
		float L_27 = V_2;
		float L_28 = V_3;
		float L_29 = m620(NULL, L_26, L_27, L_28, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3246_MI, L_21, L_24, L_29);
		goto IL_00e8;
	}

IL_0074:
	{
		t705 * L_30 = p0;
		VirtActionInvoker0::Invoke(&m3243_MI, L_30);
		t705 * L_31 = p0;
		int32_t L_32 = (L_31->f16);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t441  L_33 = m3222(NULL, L_32, &m3222_MI);
		V_4 = L_33;
		t705 * L_34 = p0;
		float L_35 = m2620((&V_4), &m2620_MI);
		float L_36 = m2615((&V_4), &m2615_MI);
		t705 * L_37 = p0;
		float L_38 = (L_37->f0);
		t705 * L_39 = p0;
		float L_40 = (L_39->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_41 = m620(NULL, L_36, L_38, L_40, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3244_MI, L_34, L_35, L_41);
		t705 * L_42 = p0;
		VirtActionInvoker0::Invoke(&m3245_MI, L_42);
		t705 * L_43 = p0;
		float L_44 = m2621((&V_4), &m2621_MI);
		float L_45 = m2616((&V_4), &m2616_MI);
		t705 * L_46 = p0;
		float L_47 = (L_46->f2);
		t705 * L_48 = p0;
		float L_49 = (L_48->f3);
		float L_50 = m620(NULL, L_45, L_47, L_49, &m620_MI);
		VirtActionInvoker2< float, float >::Invoke(&m3246_MI, L_43, L_44, L_50);
		t705 * L_51 = p0;
		int32_t L_52 = (L_51->f16);
		t705 * L_53 = p0;
		t441  L_54 = (L_53->f4);
		m3223(NULL, L_52, L_54, &m3223_MI);
	}

IL_00e8:
	{
		return;
	}
}
extern "C" t441  m3222 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t441  (*m3222_ftn) (int32_t);
	static m3222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3223 (t9 * __this , int32_t p0, t441  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3224(NULL, L_0, (&p1), &m3224_MI);
		return;
	}
}
extern "C" void m3224 (t9 * __this , int32_t p0, t441 * p1, MethodInfo* method)
{
	typedef void (*m3224_ftn) (int32_t, t441 *);
	static m3224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3225_MI;
extern "C" t701 * m3225 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t701 * L_0 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f4;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_1 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_1, &m3350_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f4 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		t701 * L_2 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f4;
		m3365(L_2, 0, &m3365_MI);
		t701 * L_3 = ((t706_SFs*)InitializedTypeInfo(&t706_TI)->static_fields)->f4;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "t537.h"
extern TypeInfo t158_TI;
#include "t735MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3235_MI;
extern MethodInfo m3228_MI;
extern MethodInfo m3359_MI;
extern MethodInfo m3371_MI;
extern MethodInfo m2687_MI;
extern MethodInfo m2686_MI;
extern MethodInfo m2685_MI;
extern MethodInfo m2683_MI;
extern MethodInfo m3362_MI;
extern MethodInfo m3364_MI;
extern MethodInfo m3363_MI;
extern MethodInfo m3366_MI;
extern MethodInfo m610_MI;
extern MethodInfo m3355_MI;
extern MethodInfo m2511_MI;
extern MethodInfo m2704_MI;
extern MethodInfo m2706_MI;
extern MethodInfo m3587_MI;
extern MethodInfo m515_MI;


extern MethodInfo m3226_MI;
extern "C" void m3226 (t709 * __this, float p0, float p1, float p2, float p3, t701 * p4, MethodInfo* method)
{
	{
		t441  L_0 = {0};
		m2821(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m2821_MI);
		__this->f4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_1 = m3371(NULL, &m3371_MI);
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
		t701 * L_6 = p4;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_7 = m3371(NULL, &m3371_MI);
		p4 = L_7;
	}

IL_005b:
	{
		t701 * L_8 = p4;
		m3229(__this, L_8, &m3229_MI);
		return;
	}
}
extern MethodInfo m3227_MI;
extern "C" void m3227 (t9 * __this , MethodInfo* method)
{
	{
		t441  L_0 = {0};
		m2821(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), &m2821_MI);
		((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f8 = L_0;
		((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9 = 0;
		return;
	}
}
extern "C" t701 * m3228 (t709 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3229 (t709 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f7 = L_0;
		t701 * L_1 = p0;
		VirtActionInvoker1< t701 * >::Invoke(&m3235_MI, __this, L_1);
		return;
	}
}
extern MethodInfo m3230_MI;
extern "C" t537 * m3230 (t709 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = m3228(__this, &m3228_MI);
		t537 * L_1 = m3359(L_0, &m3359_MI);
		return L_1;
	}
}
extern MethodInfo m3231_MI;
extern "C" void m3231 (t709 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3232_MI;
extern "C" void m3232 (t709 * __this, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m3233_MI;
extern "C" void m3233 (t709 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2687(L_0, L_1, &m2687_MI);
		t441 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2686(L_2, L_3, &m2686_MI);
		return;
	}
}
extern MethodInfo m3234_MI;
extern "C" void m3234 (t709 * __this, float p0, float p1, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f4);
		float L_1 = p0;
		m2685(L_0, L_1, &m2685_MI);
		t441 * L_2 = &(__this->f4);
		float L_3 = p1;
		m2683(L_2, L_3, &m2683_MI);
		return;
	}
}
extern "C" void m3235 (t709 * __this, t701 * p0, MethodInfo* method)
{
	t709 * G_B3_0 = {0};
	t709 * G_B1_0 = {0};
	t709 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	t709 * G_B4_1 = {0};
	t709 * G_B7_0 = {0};
	t709 * G_B5_0 = {0};
	t709 * G_B6_0 = {0};
	int32_t G_B8_0 = 0;
	t709 * G_B8_1 = {0};
	{
		t701 * L_0 = p0;
		float L_1 = m3362(L_0, &m3362_MI);
		G_B1_0 = __this;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			G_B3_0 = __this;
			goto IL_0022;
		}
	}
	{
		t701 * L_2 = p0;
		bool L_3 = m3364(L_2, &m3364_MI);
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
		t701 * L_4 = p0;
		float L_5 = m3363(L_4, &m3363_MI);
		G_B5_0 = __this;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			G_B7_0 = __this;
			goto IL_004a;
		}
	}
	{
		t701 * L_6 = p0;
		bool L_7 = m3366(L_6, &m3366_MI);
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
		t701 * L_8 = p0;
		__this->f7 = L_8;
		return;
	}
}
extern MethodInfo m3236_MI;
extern "C" void m3236 (t709 * __this, t708* p0, MethodInfo* method)
{
	t703 * V_0 = {0};
	t708* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	float V_4 = 0.0f;
	{
		t708* L_0 = p0;
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
		t708* L_1 = p0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_01a0;
	}

IL_0010:
	{
		t708* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t703 **)(t703 **)SZArrayLdElema(L_2, L_4));
		t703 * L_5 = V_0;
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
		t703 * L_8 = V_0;
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
		t703 * L_12 = V_0;
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
		t703 * L_16 = V_0;
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
		t703 * L_21 = V_0;
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
		t703 * L_26 = V_0;
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
		t703 * L_31 = V_0;
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
		t703 * L_36 = V_0;
		t9 * L_37 = (L_36->f1);
		__this->f5 = ((*(int32_t*)((int32_t*)UnBox (L_37, InitializedTypeInfo(&t125_TI)))));
		goto IL_019c;
	}

IL_0186:
	{
		t703 * L_38 = V_0;
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
		t708* L_42 = V_1;
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
extern MethodInfo m3237_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3237 (t709 * __this, MethodInfo* method)
{
	static bool m3237_init;
	if (!m3237_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3237_init = true;
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t709_TI));
		int32_t L_5 = ((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9;
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
		t701 * L_10 = m3228(__this, &m3228_MI);
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
		t701 * L_11 = m3228(__this, &m3228_MI);
		t2* L_12 = m3355(L_11, &m3355_MI);
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
		t126 * L_14 = m2511(__this, &m2511_MI);
		ArrayElementTypeCheck (L_13, L_14);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 1)) = (t9 *)L_14;
		t158* L_15 = L_13;
		t441 * L_16 = &(__this->f4);
		float L_17 = m2620(L_16, &m2620_MI);
		float L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t123_TI), &L_18);
		ArrayElementTypeCheck (L_15, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 2)) = (t9 *)L_19;
		t158* L_20 = L_15;
		t441 * L_21 = &(__this->f4);
		float L_22 = m2704(L_21, &m2704_MI);
		float L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t123_TI), &L_23);
		ArrayElementTypeCheck (L_20, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 3)) = (t9 *)L_24;
		t158* L_25 = L_20;
		t441 * L_26 = &(__this->f4);
		float L_27 = m2621(L_26, &m2621_MI);
		float L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t123_TI), &L_28);
		ArrayElementTypeCheck (L_25, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)L_29;
		t158* L_30 = L_25;
		t441 * L_31 = &(__this->f4);
		float L_32 = m2706(L_31, &m2706_MI);
		float L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t123_TI), &L_33);
		ArrayElementTypeCheck (L_30, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 5)) = (t9 *)L_34;
		t2* L_35 = m3587(NULL, G_B6_4, L_30, &m3587_MI);
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

extern TypeInfo t710_TI;
extern TypeInfo t537_TI;
#include "t537MD.h"
extern Il2CppType t710_0_0_0;
extern MethodInfo m4241_MI;
extern MethodInfo m2945_MI;
extern MethodInfo m2940_MI;
extern MethodInfo m3341_MI;
extern MethodInfo m3342_MI;
extern MethodInfo m3343_MI;
extern MethodInfo m2941_MI;
extern MethodInfo m3344_MI;
extern MethodInfo m3345_MI;
extern MethodInfo m3346_MI;
extern MethodInfo m4242_MI;
extern MethodInfo m3360_MI;
extern MethodInfo m2931_MI;
extern MethodInfo m2762_MI;
extern MethodInfo m608_MI;
extern MethodInfo m4243_MI;
extern MethodInfo m2760_MI;
extern MethodInfo m3239_MI;
extern MethodInfo m585_MI;
extern MethodInfo m2823_MI;
extern MethodInfo m2932_MI;
extern MethodInfo m399_MI;
extern Il2CppGenericMethod m4241_GM;
extern Il2CppGenericMethod m4242_GM;
extern Il2CppGenericMethod m4243_GM;


extern TypeInfo* t710_TI_var;
extern MethodInfo* m4241_MI_var;
extern "C" void m3238 (t705 * __this, MethodInfo* method)
{
	static bool m3238_init;
	if (!m3238_init)
	{
		t710_TI_var = il2cpp_codegen_class_from_type(&t710_0_0_0);
		m4241_MI_var = il2cpp_codegen_genericmethod_get_method(&m4241_GM);
		m3238_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t710_TI_var);
		t710 * L_0 = (t710 *)il2cpp_codegen_object_new (t710_TI_var);
		m4241(L_0, m4241_MI_var);
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
		t537 * L_1 = (t537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t537_TI));
		m2945(L_1, &m2945_MI);
		__this->f26 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_2 = m3371(NULL, &m3371_MI);
		m3226(__this, (0.0f), (0.0f), (0.0f), (0.0f), L_2, &m3226_MI);
		return;
	}
}
extern "C" t537 * m3239 (t705 * __this, MethodInfo* method)
{
	{
		t537 * L_0 = (__this->f26);
		return L_0;
	}
}
extern "C" void m3240 (t705 * __this, t708* p0, MethodInfo* method)
{
	t703 * V_0 = {0};
	t708* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		t708* L_0 = p0;
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
		t708* L_1 = p0;
		m3236(__this, L_1, &m3236_MI);
		t708* L_2 = p0;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0098;
	}

IL_0017:
	{
		t708* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_0 = (*(t703 **)(t703 **)SZArrayLdElema(L_3, L_5));
		t703 * L_6 = V_0;
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
		t703 * L_9 = V_0;
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
		t708* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((t121 *)L_13)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
extern MethodInfo m3241_MI;
extern "C" void m3241 (t705 * __this, t701 * p0, MethodInfo* method)
{
	t537 * V_0 = {0};
	{
		t701 * L_0 = p0;
		m3235(__this, L_0, &m3235_MI);
		t701 * L_1 = p0;
		t537 * L_2 = m3359(L_1, &m3359_MI);
		V_0 = L_2;
		t537 * L_3 = (__this->f26);
		t537 * L_4 = V_0;
		int32_t L_5 = m2940(L_4, &m2940_MI);
		m3341(L_3, L_5, &m3341_MI);
		t537 * L_6 = (__this->f26);
		t537 * L_7 = V_0;
		int32_t L_8 = m3342(L_7, &m3342_MI);
		m3343(L_6, L_8, &m3343_MI);
		t537 * L_9 = (__this->f26);
		t537 * L_10 = V_0;
		int32_t L_11 = m2941(L_10, &m2941_MI);
		m3344(L_9, L_11, &m3344_MI);
		t537 * L_12 = (__this->f26);
		t537 * L_13 = V_0;
		int32_t L_14 = m3345(L_13, &m3345_MI);
		m3346(L_12, L_14, &m3346_MI);
		return;
	}
}
extern "C" void m3242 (t705 * __this, MethodInfo* method)
{
	{
		__this->f17 = 0;
		return;
	}
}
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4242_MI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern MethodInfo* m4243_MI_var;
extern "C" void m3243 (t705 * __this, MethodInfo* method)
{
	static bool m3243_init;
	if (!m3243_init)
	{
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4242_MI_var = il2cpp_codegen_genericmethod_get_method(&m4242_GM);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m4243_MI_var = il2cpp_codegen_genericmethod_get_method(&m4243_GM);
		m3243_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	t709 * V_3 = {0};
	t879  V_4 = {0};
	t537 * V_5 = {0};
	int32_t V_6 = 0;
	t709 * V_7 = {0};
	t879  V_8 = {0};
	t537 * V_9 = {0};
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
	t705 * G_B39_2 = {0};
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	t705 * G_B38_2 = {0};
	int32_t G_B40_0 = 0;
	int32_t G_B40_1 = 0;
	int32_t G_B40_2 = 0;
	t705 * G_B40_3 = {0};
	{
		t710 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t701 * L_2 = m3228(__this, &m3228_MI);
		t537 * L_3 = m3360(L_2, &m3360_MI);
		int32_t L_4 = m2931(L_3, &m2931_MI);
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
		t710 * L_8 = (__this->f10);
		t879  L_9 = m4238(L_8, m4238_MI_var);
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
			t709 * L_10 = m4239((&V_4), m4239_MI_var);
			V_3 = L_10;
			t709 * L_11 = V_3;
			VirtActionInvoker0::Invoke(&m3231_MI, L_11);
			t709 * L_12 = V_3;
			t537 * L_13 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_12);
			V_5 = L_13;
			t709 * L_14 = V_3;
			t701 * L_15 = m3228(L_14, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_16 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_15) == ((t9*)(t701 *)L_16)))
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
			t537 * L_18 = V_5;
			int32_t L_19 = m2940(L_18, &m2940_MI);
			int32_t L_20 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_21 = m2762(NULL, L_19, L_20, &m2762_MI);
			V_0 = L_21;
			t537 * L_22 = V_5;
			int32_t L_23 = m3342(L_22, &m3342_MI);
			int32_t L_24 = V_1;
			int32_t L_25 = m2762(NULL, L_23, L_24, &m2762_MI);
			V_1 = L_25;
			goto IL_00d2;
		}

IL_00c0:
		{
			t537 * L_26 = V_5;
			int32_t L_27 = m2940(L_26, &m2940_MI);
			V_0 = L_27;
			t537 * L_28 = V_5;
			int32_t L_29 = m3342(L_28, &m3342_MI);
			V_1 = L_29;
			V_2 = 0;
		}

IL_00d2:
		{
			t709 * L_30 = V_3;
			float L_31 = (L_30->f0);
			t537 * L_32 = V_5;
			int32_t L_33 = m2931(L_32, &m2931_MI);
			float L_34 = (__this->f22);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_35 = m608(NULL, ((float)((float)L_31+(float)(((float)L_33)))), L_34, &m608_MI);
			__this->f22 = L_35;
			t709 * L_36 = V_3;
			float L_37 = (L_36->f1);
			t537 * L_38 = V_5;
			int32_t L_39 = m2931(L_38, &m2931_MI);
			float L_40 = (__this->f23);
			float L_41 = m608(NULL, ((float)((float)L_37+(float)(((float)L_39)))), L_40, &m608_MI);
			__this->f23 = L_41;
		}

IL_0112:
		{
			int32_t L_42 = (__this->f18);
			t709 * L_43 = V_3;
			int32_t L_44 = (L_43->f5);
			__this->f18 = ((int32_t)((int32_t)L_42+(int32_t)L_44));
		}

IL_0125:
		{
			bool L_45 = m4240((&V_4), m4240_MI_var);
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
		t879  L_46 = V_4;
		t879  L_47 = L_46;
		t9 * L_48 = Box(t879_TI_var, &L_47);
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
		t710 * L_55 = (__this->f10);
		t879  L_56 = m4238(L_55, m4238_MI_var);
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
			t709 * L_57 = m4239((&V_8), m4239_MI_var);
			V_7 = L_57;
			t709 * L_58 = V_7;
			VirtActionInvoker0::Invoke(&m3231_MI, L_58);
			t709 * L_59 = V_7;
			t537 * L_60 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_59);
			V_9 = L_60;
			t709 * L_61 = V_7;
			t701 * L_62 = m3228(L_61, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_63 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_62) == ((t9*)(t701 *)L_63)))
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
			t537 * L_66 = V_9;
			int32_t L_67 = m2940(L_66, &m2940_MI);
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
			t537 * L_69 = V_9;
			int32_t L_70 = m2940(L_69, &m2940_MI);
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
			t709 * L_72 = V_7;
			float L_73 = (L_72->f0);
			float L_74 = (__this->f13);
			int32_t L_75 = V_10;
			__this->f22 = ((float)((float)L_71+(float)((float)((float)((float)((float)L_73+(float)L_74))+(float)(((float)L_75))))));
			float L_76 = (__this->f23);
			t709 * L_77 = V_7;
			float L_78 = (L_77->f1);
			float L_79 = (__this->f13);
			int32_t L_80 = V_10;
			__this->f23 = ((float)((float)L_76+(float)((float)((float)((float)((float)L_78+(float)L_79))+(float)(((float)L_80))))));
			t537 * L_81 = V_9;
			int32_t L_82 = m3342(L_81, &m3342_MI);
			V_6 = L_82;
			int32_t L_83 = (__this->f18);
			t709 * L_84 = V_7;
			int32_t L_85 = (L_84->f5);
			__this->f18 = ((int32_t)((int32_t)L_83+(int32_t)L_85));
			goto IL_0273;
		}

IL_0237:
		{
			float L_86 = (__this->f22);
			t709 * L_87 = V_7;
			float L_88 = (L_87->f0);
			__this->f22 = ((float)((float)L_86+(float)L_88));
			float L_89 = (__this->f23);
			t709 * L_90 = V_7;
			float L_91 = (L_90->f1);
			__this->f23 = ((float)((float)L_89+(float)L_91));
			int32_t L_92 = (__this->f18);
			t709 * L_93 = V_7;
			int32_t L_94 = (L_93->f5);
			__this->f18 = ((int32_t)((int32_t)L_92+(int32_t)L_94));
		}

IL_0273:
		{
			bool L_95 = m4240((&V_8), m4240_MI_var);
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
		t879  L_96 = V_8;
		t879  L_97 = L_96;
		t9 * L_98 = Box(t879_TI_var, &L_97);
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
		t710 * L_103 = (__this->f10);
		int32_t L_104 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_103);
		if (!L_104)
		{
			goto IL_02e6;
		}
	}
	{
		t710 * L_105 = (__this->f10);
		t709 * L_106 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_105, 0);
		t537 * L_107 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_106);
		int32_t L_108 = m2940(L_107, &m2940_MI);
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
		t701 * L_111 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_112 = m3371(NULL, &m3371_MI);
		if ((!(((t9*)(t701 *)L_111) == ((t9*)(t701 *)L_112))))
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
		t701 * L_114 = m3228(__this, &m3228_MI);
		t537 * L_115 = m3360(L_114, &m3360_MI);
		int32_t L_116 = m2940(L_115, &m2940_MI);
		int32_t L_117 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_118 = m2760(NULL, L_116, L_117, &m2760_MI);
		V_11 = (((float)L_118));
		t701 * L_119 = m3228(__this, &m3228_MI);
		t537 * L_120 = m3360(L_119, &m3360_MI);
		int32_t L_121 = m3342(L_120, &m3342_MI);
		int32_t L_122 = V_1;
		int32_t L_123 = m2760(NULL, L_121, L_122, &m2760_MI);
		V_12 = (((float)L_123));
		goto IL_036c;
	}

IL_034a:
	{
		t537 * L_124 = (__this->f26);
		int32_t L_125 = V_0;
		m3341(L_124, L_125, &m3341_MI);
		t537 * L_126 = (__this->f26);
		int32_t L_127 = V_1;
		m3343(L_126, L_127, &m3343_MI);
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
		t701 * L_137 = m3228(__this, &m3228_MI);
		bool L_138 = m3364(L_137, &m3364_MI);
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
		t701 * L_145 = m3228(__this, &m3228_MI);
		float L_146 = m3362(L_145, &m3362_MI);
		if ((((float)L_146) == ((float)(0.0f))))
		{
			goto IL_0431;
		}
	}
	{
		t701 * L_147 = m3228(__this, &m3228_MI);
		float L_148 = m3362(L_147, &m3362_MI);
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
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern MethodInfo* m4242_MI_var;
extern MethodInfo* m4243_MI_var;
extern "C" void m3244 (t705 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3244_init;
	if (!m3244_init)
	{
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m4242_MI_var = il2cpp_codegen_genericmethod_get_method(&m4242_GM);
		m4243_MI_var = il2cpp_codegen_genericmethod_get_method(&m4243_GM);
		m3244_init = true;
	}
	t537 * V_0 = {0};
	t709 * V_1 = {0};
	t879  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	t709 * V_8 = {0};
	t879  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	bool V_16 = false;
	t709 * V_17 = {0};
	t879  V_18 = {0};
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
		m3233(__this, L_0, L_1, &m3233_MI);
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
		t701 * L_3 = m3228(__this, &m3228_MI);
		t537 * L_4 = m3360(L_3, &m3360_MI);
		V_0 = L_4;
		bool L_5 = (__this->f11);
		if (!L_5)
		{
			goto IL_01bb;
		}
	}
	{
		t701 * L_6 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_7 = m3371(NULL, &m3371_MI);
		if ((((t9*)(t701 *)L_6) == ((t9*)(t701 *)L_7)))
		{
			goto IL_00eb;
		}
	}
	{
		t710 * L_8 = (__this->f10);
		t879  L_9 = m4238(L_8, m4238_MI_var);
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
			t709 * L_10 = m4239((&V_2), m4239_MI_var);
			V_1 = L_10;
			t709 * L_11 = V_1;
			t537 * L_12 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_11);
			int32_t L_13 = m2940(L_12, &m2940_MI);
			t537 * L_14 = V_0;
			int32_t L_15 = m2940(L_14, &m2940_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_16 = m2760(NULL, L_13, L_15, &m2760_MI);
			V_3 = (((float)L_16));
			float L_17 = p0;
			float L_18 = V_3;
			V_4 = ((float)((float)L_17+(float)L_18));
			float L_19 = p1;
			t709 * L_20 = V_1;
			t537 * L_21 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_20);
			int32_t L_22 = m3342(L_21, &m3342_MI);
			t537 * L_23 = V_0;
			int32_t L_24 = m3342(L_23, &m3342_MI);
			int32_t L_25 = m2760(NULL, L_22, L_24, &m2760_MI);
			float L_26 = V_3;
			V_5 = ((float)((float)((float)((float)L_19-(float)(((float)L_25))))-(float)L_26));
			t709 * L_27 = V_1;
			int32_t L_28 = (L_27->f5);
			if (!L_28)
			{
				goto IL_00ae;
			}
		}

IL_009f:
		{
			t709 * L_29 = V_1;
			float L_30 = V_4;
			float L_31 = V_5;
			VirtActionInvoker2< float, float >::Invoke(&m3233_MI, L_29, L_30, L_31);
			goto IL_00c9;
		}

IL_00ae:
		{
			t709 * L_32 = V_1;
			float L_33 = V_4;
			float L_34 = V_5;
			t709 * L_35 = V_1;
			float L_36 = (L_35->f0);
			t709 * L_37 = V_1;
			float L_38 = (L_37->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_39 = m620(NULL, L_34, L_36, L_38, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3233_MI, L_32, L_33, L_39);
		}

IL_00c9:
		{
			bool L_40 = m4240((&V_2), m4240_MI_var);
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
		t879  L_41 = V_2;
		t879  L_42 = L_41;
		t9 * L_43 = Box(t879_TI_var, &L_42);
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
		t537 * L_45 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3239_MI, __this);
		int32_t L_46 = m2940(L_45, &m2940_MI);
		V_6 = ((float)((float)L_44-(float)(((float)L_46))));
		float L_47 = p1;
		t537 * L_48 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3239_MI, __this);
		int32_t L_49 = m2931(L_48, &m2931_MI);
		V_7 = ((float)((float)L_47+(float)(((float)L_49))));
		t710 * L_50 = (__this->f10);
		t879  L_51 = m4238(L_50, m4238_MI_var);
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
			t709 * L_52 = m4239((&V_9), m4239_MI_var);
			V_8 = L_52;
			t709 * L_53 = V_8;
			int32_t L_54 = (L_53->f5);
			if (!L_54)
			{
				goto IL_015e;
			}
		}

IL_0132:
		{
			t709 * L_55 = V_8;
			float L_56 = V_6;
			t709 * L_57 = V_8;
			t537 * L_58 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_57);
			int32_t L_59 = m2940(L_58, &m2940_MI);
			float L_60 = V_7;
			t709 * L_61 = V_8;
			t537 * L_62 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_61);
			int32_t L_63 = m2931(L_62, &m2931_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3233_MI, L_55, ((float)((float)L_56+(float)(((float)L_59)))), ((float)((float)L_60-(float)(((float)L_63)))));
			goto IL_0198;
		}

IL_015e:
		{
			t709 * L_64 = V_8;
			float L_65 = V_6;
			t709 * L_66 = V_8;
			t537 * L_67 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_66);
			int32_t L_68 = m2940(L_67, &m2940_MI);
			float L_69 = V_7;
			t709 * L_70 = V_8;
			t537 * L_71 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_70);
			int32_t L_72 = m2931(L_71, &m2931_MI);
			t709 * L_73 = V_8;
			float L_74 = (L_73->f0);
			t709 * L_75 = V_8;
			float L_76 = (L_75->f1);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_77 = m620(NULL, ((float)((float)L_69-(float)(((float)L_72)))), L_74, L_76, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3233_MI, L_64, ((float)((float)L_65+(float)(((float)L_68)))), L_77);
		}

IL_0198:
		{
			bool L_78 = m4240((&V_9), m4240_MI_var);
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
		t879  L_79 = V_9;
		t879  L_80 = L_79;
		t9 * L_81 = Box(t879_TI_var, &L_80);
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
		t701 * L_82 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_83 = m3371(NULL, &m3371_MI);
		if ((((t9*)(t701 *)L_82) == ((t9*)(t701 *)L_83)))
		{
			goto IL_0248;
		}
	}
	{
		t537 * L_84 = V_0;
		int32_t L_85 = m2940(L_84, &m2940_MI);
		V_10 = (((float)L_85));
		t537 * L_86 = V_0;
		int32_t L_87 = m3342(L_86, &m3342_MI);
		V_11 = (((float)L_87));
		t710 * L_88 = (__this->f10);
		int32_t L_89 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_88);
		if (!L_89)
		{
			goto IL_0239;
		}
	}
	{
		float L_90 = V_10;
		t710 * L_91 = (__this->f10);
		t709 * L_92 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_91, 0);
		t537 * L_93 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_92);
		int32_t L_94 = m2940(L_93, &m2940_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_95 = m608(NULL, L_90, (((float)L_94)), &m608_MI);
		V_10 = L_95;
		float L_96 = V_11;
		t710 * L_97 = (__this->f10);
		t710 * L_98 = (__this->f10);
		int32_t L_99 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_98);
		t709 * L_100 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_97, ((int32_t)((int32_t)L_99-(int32_t)1)));
		t537 * L_101 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_100);
		int32_t L_102 = m3342(L_101, &m3342_MI);
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
		t710 * L_111 = (__this->f10);
		int32_t L_112 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_111);
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
		t710 * L_126 = (__this->f10);
		t879  L_127 = m4238(L_126, m4238_MI_var);
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
			t709 * L_128 = m4239((&V_18), m4239_MI_var);
			V_17 = L_128;
			t709 * L_129 = V_17;
			float L_130 = (L_129->f0);
			t709 * L_131 = V_17;
			float L_132 = (L_131->f1);
			float L_133 = V_13;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_134 = m585(NULL, L_130, L_132, L_133, &m585_MI);
			V_19 = L_134;
			float L_135 = V_19;
			float L_136 = V_14;
			t709 * L_137 = V_17;
			int32_t L_138 = (L_137->f5);
			V_19 = ((float)((float)L_135+(float)((float)((float)L_136*(float)(((float)L_138))))));
			t709 * L_139 = V_17;
			t701 * L_140 = m3228(L_139, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_141 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_140) == ((t9*)(t701 *)L_141)))
			{
				goto IL_0371;
			}
		}

IL_032d:
		{
			t709 * L_142 = V_17;
			t537 * L_143 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_142);
			int32_t L_144 = m2940(L_143, &m2940_MI);
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
			t709 * L_152 = V_17;
			t537 * L_153 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_152);
			int32_t L_154 = m3342(L_153, &m3342_MI);
			V_15 = L_154;
		}

IL_0371:
		{
			t709 * L_155 = V_17;
			float L_156 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_157 = roundf(L_156);
			float L_158 = V_19;
			float L_159 = roundf(L_158);
			VirtActionInvoker2< float, float >::Invoke(&m3233_MI, L_155, L_157, L_159);
			float L_160 = p0;
			float L_161 = V_19;
			float L_162 = (__this->f13);
			p0 = ((float)((float)L_160+(float)((float)((float)L_161+(float)L_162))));
		}

IL_0392:
		{
			bool L_163 = m4240((&V_18), m4240_MI_var);
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
		t879  L_164 = V_18;
		t879  L_165 = L_164;
		t9 * L_166 = Box(t879_TI_var, &L_165);
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
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4242_MI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern MethodInfo* m4243_MI_var;
extern "C" void m3245 (t705 * __this, MethodInfo* method)
{
	static bool m3245_init;
	if (!m3245_init)
	{
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4242_MI_var = il2cpp_codegen_genericmethod_get_method(&m4242_GM);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m4243_MI_var = il2cpp_codegen_genericmethod_get_method(&m4243_GM);
		m3245_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	t709 * V_4 = {0};
	t879  V_5 = {0};
	t537 * V_6 = {0};
	int32_t V_7 = 0;
	bool V_8 = false;
	t709 * V_9 = {0};
	t879  V_10 = {0};
	t537 * V_11 = {0};
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
	t705 * G_B36_2 = {0};
	int32_t G_B35_0 = 0;
	int32_t G_B35_1 = 0;
	t705 * G_B35_2 = {0};
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B37_2 = 0;
	t705 * G_B37_3 = {0};
	{
		t710 * L_0 = (__this->f10);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_0);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		t701 * L_2 = m3228(__this, &m3228_MI);
		t537 * L_3 = m3360(L_2, &m3360_MI);
		int32_t L_4 = m2932(L_3, &m2932_MI);
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
		t710 * L_10 = (__this->f10);
		t879  L_11 = m4238(L_10, m4238_MI_var);
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
			t709 * L_12 = m4239((&V_5), m4239_MI_var);
			V_4 = L_12;
			t709 * L_13 = V_4;
			VirtActionInvoker0::Invoke(&m3232_MI, L_13);
			t709 * L_14 = V_4;
			t537 * L_15 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_14);
			V_6 = L_15;
			t709 * L_16 = V_4;
			t701 * L_17 = m3228(L_16, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_18 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_17) == ((t9*)(t701 *)L_18)))
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
			t537 * L_21 = V_6;
			int32_t L_22 = m2941(L_21, &m2941_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_23 = m2760(NULL, L_20, L_22, &m2760_MI);
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
			t709 * L_25 = V_4;
			float L_26 = (L_25->f2);
			float L_27 = (__this->f13);
			int32_t L_28 = V_7;
			__this->f24 = ((float)((float)L_24+(float)((float)((float)((float)((float)L_26+(float)L_27))+(float)(((float)L_28))))));
			float L_29 = (__this->f25);
			t709 * L_30 = V_4;
			float L_31 = (L_30->f3);
			float L_32 = (__this->f13);
			int32_t L_33 = V_7;
			__this->f25 = ((float)((float)L_29+(float)((float)((float)((float)((float)L_31+(float)L_32))+(float)(((float)L_33))))));
			t537 * L_34 = V_6;
			int32_t L_35 = m3345(L_34, &m3345_MI);
			V_2 = L_35;
			int32_t L_36 = (__this->f19);
			t709 * L_37 = V_4;
			int32_t L_38 = (L_37->f6);
			__this->f19 = ((int32_t)((int32_t)L_36+(int32_t)L_38));
			goto IL_0159;
		}

IL_011d:
		{
			float L_39 = (__this->f24);
			t709 * L_40 = V_4;
			float L_41 = (L_40->f2);
			__this->f24 = ((float)((float)L_39+(float)L_41));
			float L_42 = (__this->f25);
			t709 * L_43 = V_4;
			float L_44 = (L_43->f3);
			__this->f25 = ((float)((float)L_42+(float)L_44));
			int32_t L_45 = (__this->f19);
			t709 * L_46 = V_4;
			int32_t L_47 = (L_46->f6);
			__this->f19 = ((int32_t)((int32_t)L_45+(int32_t)L_47));
		}

IL_0159:
		{
			bool L_48 = m4240((&V_5), m4240_MI_var);
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
		t879  L_49 = V_5;
		t879  L_50 = L_49;
		t9 * L_51 = Box(t879_TI_var, &L_50);
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
		t710 * L_56 = (__this->f10);
		int32_t L_57 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_56);
		if (!L_57)
		{
			goto IL_01cb;
		}
	}
	{
		t710 * L_58 = (__this->f10);
		t709 * L_59 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_58, 0);
		t537 * L_60 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_59);
		int32_t L_61 = m2941(L_60, &m2941_MI);
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
		t710 * L_64 = (__this->f10);
		t879  L_65 = m4238(L_64, m4238_MI_var);
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
			t709 * L_66 = m4239((&V_10), m4239_MI_var);
			V_9 = L_66;
			t709 * L_67 = V_9;
			VirtActionInvoker0::Invoke(&m3232_MI, L_67);
			t709 * L_68 = V_9;
			t537 * L_69 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_68);
			V_11 = L_69;
			t709 * L_70 = V_9;
			t701 * L_71 = m3228(L_70, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_72 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_71) == ((t9*)(t701 *)L_72)))
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
			t537 * L_74 = V_11;
			int32_t L_75 = m2941(L_74, &m2941_MI);
			int32_t L_76 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_77 = m2762(NULL, L_75, L_76, &m2762_MI);
			V_0 = L_77;
			t537 * L_78 = V_11;
			int32_t L_79 = m3345(L_78, &m3345_MI);
			int32_t L_80 = V_1;
			int32_t L_81 = m2762(NULL, L_79, L_80, &m2762_MI);
			V_1 = L_81;
			goto IL_024e;
		}

IL_023b:
		{
			t537 * L_82 = V_11;
			int32_t L_83 = m2941(L_82, &m2941_MI);
			V_0 = L_83;
			t537 * L_84 = V_11;
			int32_t L_85 = m3345(L_84, &m3345_MI);
			V_1 = L_85;
			V_8 = 0;
		}

IL_024e:
		{
			t709 * L_86 = V_9;
			float L_87 = (L_86->f2);
			float L_88 = (__this->f24);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_89 = m608(NULL, L_87, L_88, &m608_MI);
			__this->f24 = L_89;
			t709 * L_90 = V_9;
			float L_91 = (L_90->f3);
			float L_92 = (__this->f25);
			float L_93 = m608(NULL, L_91, L_92, &m608_MI);
			__this->f25 = L_93;
		}

IL_027e:
		{
			int32_t L_94 = (__this->f19);
			t709 * L_95 = V_9;
			int32_t L_96 = (L_95->f6);
			__this->f19 = ((int32_t)((int32_t)L_94+(int32_t)L_96));
		}

IL_0292:
		{
			bool L_97 = m4240((&V_10), m4240_MI_var);
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
		t879  L_98 = V_10;
		t879  L_99 = L_98;
		t9 * L_100 = Box(t879_TI_var, &L_99);
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
		t701 * L_101 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_102 = m3371(NULL, &m3371_MI);
		if ((!(((t9*)(t701 *)L_101) == ((t9*)(t701 *)L_102))))
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
		t701 * L_104 = m3228(__this, &m3228_MI);
		t537 * L_105 = m3360(L_104, &m3360_MI);
		int32_t L_106 = m2941(L_105, &m2941_MI);
		int32_t L_107 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_108 = m2760(NULL, L_106, L_107, &m2760_MI);
		V_12 = (((float)L_108));
		t701 * L_109 = m3228(__this, &m3228_MI);
		t537 * L_110 = m3360(L_109, &m3360_MI);
		int32_t L_111 = m3345(L_110, &m3345_MI);
		int32_t L_112 = V_1;
		int32_t L_113 = m2760(NULL, L_111, L_112, &m2760_MI);
		V_13 = (((float)L_113));
		goto IL_0332;
	}

IL_0310:
	{
		t537 * L_114 = (__this->f26);
		int32_t L_115 = V_0;
		m3344(L_114, L_115, &m3344_MI);
		t537 * L_116 = (__this->f26);
		int32_t L_117 = V_1;
		m3346(L_116, L_117, &m3346_MI);
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
		t701 * L_127 = m3228(__this, &m3228_MI);
		bool L_128 = m3366(L_127, &m3366_MI);
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
		t701 * L_135 = m3228(__this, &m3228_MI);
		float L_136 = m3363(L_135, &m3363_MI);
		if ((((float)L_136) == ((float)(0.0f))))
		{
			goto IL_03f7;
		}
	}
	{
		t701 * L_137 = m3228(__this, &m3228_MI);
		float L_138 = m3363(L_137, &m3363_MI);
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
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4242_MI_var;
extern MethodInfo* m4243_MI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern "C" void m3246 (t705 * __this, float p0, float p1, MethodInfo* method)
{
	static bool m3246_init;
	if (!m3246_init)
	{
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4242_MI_var = il2cpp_codegen_genericmethod_get_method(&m4242_GM);
		m4243_MI_var = il2cpp_codegen_genericmethod_get_method(&m4243_GM);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m3246_init = true;
	}
	t537 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	bool V_7 = false;
	t709 * V_8 = {0};
	t879  V_9 = {0};
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	t709 * V_13 = {0};
	t879  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	t709 * V_20 = {0};
	t879  V_21 = {0};
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
		m3234(__this, L_0, L_1, &m3234_MI);
		t710 * L_2 = (__this->f10);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_2);
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
		t701 * L_4 = m3228(__this, &m3228_MI);
		t537 * L_5 = m3360(L_4, &m3360_MI);
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
		t701 * L_8 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_9 = m3371(NULL, &m3371_MI);
		if ((((t9*)(t701 *)L_8) == ((t9*)(t701 *)L_9)))
		{
			goto IL_00c6;
		}
	}
	{
		t537 * L_10 = V_0;
		int32_t L_11 = m2941(L_10, &m2941_MI);
		V_1 = (((float)L_11));
		t537 * L_12 = V_0;
		int32_t L_13 = m3345(L_12, &m3345_MI);
		V_2 = (((float)L_13));
		t710 * L_14 = (__this->f10);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_14);
		if (!L_15)
		{
			goto IL_00ba;
		}
	}
	{
		float L_16 = V_1;
		t710 * L_17 = (__this->f10);
		t709 * L_18 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_17, 0);
		t537 * L_19 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_18);
		int32_t L_20 = m2941(L_19, &m2941_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_21 = m608(NULL, L_16, (((float)L_20)), &m608_MI);
		V_1 = L_21;
		float L_22 = V_2;
		t710 * L_23 = (__this->f10);
		t710 * L_24 = (__this->f10);
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_24);
		t709 * L_26 = (t709 *)VirtFuncInvoker1< t709 *, int32_t >::Invoke(m4243_MI_var, L_23, ((int32_t)((int32_t)L_25-(int32_t)1)));
		t537 * L_27 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_26);
		int32_t L_28 = m3345(L_27, &m3345_MI);
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
		t710 * L_37 = (__this->f10);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4242_MI_var, L_37);
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
		t710 * L_52 = (__this->f10);
		t879  L_53 = m4238(L_52, m4238_MI_var);
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
			t709 * L_54 = m4239((&V_9), m4239_MI_var);
			V_8 = L_54;
			t709 * L_55 = V_8;
			float L_56 = (L_55->f2);
			t709 * L_57 = V_8;
			float L_58 = (L_57->f3);
			float L_59 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_60 = m585(NULL, L_56, L_58, L_59, &m585_MI);
			V_10 = L_60;
			float L_61 = V_10;
			float L_62 = V_5;
			t709 * L_63 = V_8;
			int32_t L_64 = (L_63->f6);
			V_10 = ((float)((float)L_61+(float)((float)((float)L_62*(float)(((float)L_64))))));
			t709 * L_65 = V_8;
			t701 * L_66 = m3228(L_65, &m3228_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			t701 * L_67 = m3225(NULL, &m3225_MI);
			if ((((t9*)(t701 *)L_66) == ((t9*)(t701 *)L_67)))
			{
				goto IL_01eb;
			}
		}

IL_01a7:
		{
			t709 * L_68 = V_8;
			t537 * L_69 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_68);
			int32_t L_70 = m2941(L_69, &m2941_MI);
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
			t709 * L_78 = V_8;
			t537 * L_79 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_78);
			int32_t L_80 = m3345(L_79, &m3345_MI);
			V_6 = L_80;
		}

IL_01eb:
		{
			t709 * L_81 = V_8;
			float L_82 = p0;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_83 = roundf(L_82);
			float L_84 = V_10;
			float L_85 = roundf(L_84);
			VirtActionInvoker2< float, float >::Invoke(&m3234_MI, L_81, L_83, L_85);
			float L_86 = p0;
			float L_87 = V_10;
			float L_88 = (__this->f13);
			p0 = ((float)((float)L_86+(float)((float)((float)L_87+(float)L_88))));
		}

IL_020c:
		{
			bool L_89 = m4240((&V_9), m4240_MI_var);
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
		t879  L_90 = V_9;
		t879  L_91 = L_90;
		t9 * L_92 = Box(t879_TI_var, &L_91);
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
		t701 * L_93 = m3228(__this, &m3228_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_94 = m3371(NULL, &m3371_MI);
		if ((((t9*)(t701 *)L_93) == ((t9*)(t701 *)L_94)))
		{
			goto IL_02f6;
		}
	}
	{
		t710 * L_95 = (__this->f10);
		t879  L_96 = m4238(L_95, m4238_MI_var);
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
			t709 * L_97 = m4239((&V_14), m4239_MI_var);
			V_13 = L_97;
			t709 * L_98 = V_13;
			t537 * L_99 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_98);
			int32_t L_100 = m2941(L_99, &m2941_MI);
			t537 * L_101 = V_0;
			int32_t L_102 = m2941(L_101, &m2941_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			int32_t L_103 = m2760(NULL, L_100, L_102, &m2760_MI);
			V_15 = (((float)L_103));
			float L_104 = p0;
			float L_105 = V_15;
			V_16 = ((float)((float)L_104+(float)L_105));
			float L_106 = p1;
			t709 * L_107 = V_13;
			t537 * L_108 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_107);
			int32_t L_109 = m3345(L_108, &m3345_MI);
			t537 * L_110 = V_0;
			int32_t L_111 = m3345(L_110, &m3345_MI);
			int32_t L_112 = m2760(NULL, L_109, L_111, &m2760_MI);
			float L_113 = V_15;
			V_17 = ((float)((float)((float)((float)L_106-(float)(((float)L_112))))-(float)L_113));
			t709 * L_114 = V_13;
			int32_t L_115 = (L_114->f6);
			if (!L_115)
			{
				goto IL_02b5;
			}
		}

IL_02a5:
		{
			t709 * L_116 = V_13;
			float L_117 = V_16;
			float L_118 = V_17;
			VirtActionInvoker2< float, float >::Invoke(&m3234_MI, L_116, L_117, L_118);
			goto IL_02d3;
		}

IL_02b5:
		{
			t709 * L_119 = V_13;
			float L_120 = V_16;
			float L_121 = V_17;
			t709 * L_122 = V_13;
			float L_123 = (L_122->f2);
			t709 * L_124 = V_13;
			float L_125 = (L_124->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_126 = m620(NULL, L_121, L_123, L_125, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3234_MI, L_119, L_120, L_126);
		}

IL_02d3:
		{
			bool L_127 = m4240((&V_14), m4240_MI_var);
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
		t879  L_128 = V_14;
		t879  L_129 = L_128;
		t9 * L_130 = Box(t879_TI_var, &L_129);
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
		t537 * L_132 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3239_MI, __this);
		int32_t L_133 = m2941(L_132, &m2941_MI);
		V_18 = ((float)((float)L_131-(float)(((float)L_133))));
		float L_134 = p1;
		t537 * L_135 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3239_MI, __this);
		int32_t L_136 = m2932(L_135, &m2932_MI);
		V_19 = ((float)((float)L_134+(float)(((float)L_136))));
		t710 * L_137 = (__this->f10);
		t879  L_138 = m4238(L_137, m4238_MI_var);
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
			t709 * L_139 = m4239((&V_21), m4239_MI_var);
			V_20 = L_139;
			t709 * L_140 = V_20;
			int32_t L_141 = (L_140->f6);
			if (!L_141)
			{
				goto IL_0369;
			}
		}

IL_033d:
		{
			t709 * L_142 = V_20;
			float L_143 = V_18;
			t709 * L_144 = V_20;
			t537 * L_145 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_144);
			int32_t L_146 = m2941(L_145, &m2941_MI);
			float L_147 = V_19;
			t709 * L_148 = V_20;
			t537 * L_149 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_148);
			int32_t L_150 = m2932(L_149, &m2932_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3234_MI, L_142, ((float)((float)L_143+(float)(((float)L_146)))), ((float)((float)L_147-(float)(((float)L_150)))));
			goto IL_03a3;
		}

IL_0369:
		{
			t709 * L_151 = V_20;
			float L_152 = V_18;
			t709 * L_153 = V_20;
			t537 * L_154 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_153);
			int32_t L_155 = m2941(L_154, &m2941_MI);
			float L_156 = V_19;
			t709 * L_157 = V_20;
			t537 * L_158 = (t537 *)VirtFuncInvoker0< t537 * >::Invoke(&m3230_MI, L_157);
			int32_t L_159 = m2932(L_158, &m2932_MI);
			t709 * L_160 = V_20;
			float L_161 = (L_160->f2);
			t709 * L_162 = V_20;
			float L_163 = (L_162->f3);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
			float L_164 = m620(NULL, ((float)((float)L_156-(float)(((float)L_159)))), L_161, L_163, &m620_MI);
			VirtActionInvoker2< float, float >::Invoke(&m3234_MI, L_151, ((float)((float)L_152+(float)(((float)L_155)))), L_164);
		}

IL_03a3:
		{
			bool L_165 = m4240((&V_21), m4240_MI_var);
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
		t879  L_166 = V_21;
		t879  L_167 = L_166;
		t9 * L_168 = Box(t879_TI_var, &L_167);
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
extern MethodInfo m3247_MI;
extern TypeInfo* t158_TI_var;
extern TypeInfo* t879_TI_var;
extern MethodInfo* m4238_MI_var;
extern MethodInfo* m4239_MI_var;
extern MethodInfo* m4240_MI_var;
extern "C" t2* m3247 (t705 * __this, MethodInfo* method)
{
	static bool m3247_init;
	if (!m3247_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		t879_TI_var = il2cpp_codegen_class_from_type(&t879_0_0_0);
		m4238_MI_var = il2cpp_codegen_genericmethod_get_method(&m4238_GM);
		m4239_MI_var = il2cpp_codegen_genericmethod_get_method(&m4239_GM);
		m4240_MI_var = il2cpp_codegen_genericmethod_get_method(&m4240_GM);
		m3247_init = true;
	}
	t2* V_0 = {0};
	t2* V_1 = {0};
	int32_t V_2 = 0;
	t709 * V_3 = {0};
	t879  V_4 = {0};
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t709_TI));
		int32_t L_6 = ((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9;
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
		t2* L_11 = m3237(__this, &m3237_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t709_TI));
		int32_t L_19 = ((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9;
		((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_19+(int32_t)4));
		t710 * L_20 = (__this->f10);
		t879  L_21 = m4238(L_20, m4238_MI_var);
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
			t709 * L_22 = m4239((&V_4), m4239_MI_var);
			V_3 = L_22;
			t2* L_23 = V_0;
			t709 * L_24 = V_3;
			t2* L_25 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m3237_MI, L_24);
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_26 = m399(NULL, L_23, L_25, (t2*) &_stringLiteral172, &m399_MI);
			V_0 = L_26;
		}

IL_00a1:
		{
			bool L_27 = m4240((&V_4), m4240_MI_var);
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
		t879  L_28 = V_4;
		t879  L_29 = L_28;
		t9 * L_30 = Box(t879_TI_var, &L_29);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t709_TI));
		int32_t L_34 = ((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9;
		((t709_SFs*)InitializedTypeInfo(&t709_TI)->static_fields)->f9 = ((int32_t)((int32_t)L_34-(int32_t)4));
		t2* L_35 = V_0;
		return L_35;
	}
}
#include "t711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t711_TI;
#include "t711MD.h"

extern MethodInfo m3250_MI;
extern MethodInfo m3251_MI;


extern MethodInfo m3248_MI;
extern "C" void m3248 (t711 * __this, MethodInfo* method)
{
	{
		__this->f33 = 1;
		__this->f34 = 1;
		m3238(__this, &m3238_MI);
		return;
	}
}
extern MethodInfo m3249_MI;
extern "C" void m3249 (t711 * __this, MethodInfo* method)
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
		m3243(__this, &m3243_MI);
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
extern "C" void m3250 (t711 * __this, float p0, float p1, MethodInfo* method)
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
		t701 * L_2 = (__this->f38);
		float L_3 = m3362(L_2, &m3362_MI);
		t701 * L_4 = (__this->f38);
		t537 * L_5 = m3359(L_4, &m3359_MI);
		int32_t L_6 = m2940(L_5, &m2940_MI);
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
		m3244(__this, L_13, L_14, &m3244_MI);
		t441 * L_15 = &(__this->f4);
		float L_16 = p1;
		m2686(L_15, L_16, &m2686_MI);
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
		m3244(__this, L_21, L_22, &m3244_MI);
		t441 * L_23 = &(__this->f4);
		float L_24 = p1;
		m2686(L_23, L_24, &m2686_MI);
		float L_25 = V_0;
		__this->f31 = L_25;
	}

IL_00d6:
	{
		return;
	}
}
extern "C" void m3251 (t711 * __this, MethodInfo* method)
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
		m3245(__this, &m3245_MI);
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
		t701 * L_6 = (__this->f37);
		float L_7 = m3363(L_6, &m3363_MI);
		t701 * L_8 = (__this->f37);
		t537 * L_9 = m3359(L_8, &m3359_MI);
		int32_t L_10 = m2941(L_9, &m2941_MI);
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
extern MethodInfo m3252_MI;
extern "C" void m3252 (t711 * __this, float p0, float p1, MethodInfo* method)
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
		t701 * L_3 = (__this->f37);
		float L_4 = m3363(L_3, &m3363_MI);
		t701 * L_5 = (__this->f37);
		t537 * L_6 = m3359(L_5, &m3359_MI);
		int32_t L_7 = m2941(L_6, &m2941_MI);
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
		t441 * L_13 = &(__this->f4);
		float L_14 = m2615(L_13, &m2615_MI);
		t701 * L_15 = (__this->f38);
		float L_16 = m3362(L_15, &m3362_MI);
		t701 * L_17 = (__this->f38);
		t537 * L_18 = m3359(L_17, &m3359_MI);
		int32_t L_19 = m2940(L_18, &m2940_MI);
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
		t441 * L_23 = &(__this->f4);
		float L_24 = m2615(L_23, &m2615_MI);
		V_1 = L_24;
		t441 * L_25 = &(__this->f4);
		float L_26 = m2620(L_25, &m2620_MI);
		float L_27 = (__this->f31);
		VirtActionInvoker2< float, float >::Invoke(&m3250_MI, __this, L_26, L_27);
		VirtActionInvoker0::Invoke(&m3251_MI, __this);
		t441 * L_28 = &(__this->f4);
		float L_29 = V_1;
		m2686(L_28, L_29, &m2686_MI);
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
		m3246(__this, L_34, L_35, &m3246_MI);
		float L_36 = V_2;
		__this->f2 = L_36;
		float L_37 = V_3;
		__this->f3 = L_37;
		t441 * L_38 = &(__this->f4);
		float L_39 = p1;
		m2683(L_38, L_39, &m2683_MI);
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
		m3246(__this, L_44, L_45, &m3246_MI);
		t441 * L_46 = &(__this->f4);
		float L_47 = p1;
		m2683(L_46, L_47, &m2683_MI);
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
extern TypeInfo t712_TI;
#include "t712MD.h"



#ifndef _MSC_VER
#else
#endif



extern "C" void m3253 (t703 * __this, int32_t p0, t9 * p1, MethodInfo* method)
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
#include "t713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t713_TI;
#include "t713MD.h"



#include "t714.h"
#ifndef _MSC_VER
#else
#endif

#include "t28.h"
extern TypeInfo t591_TI;
#include "t28MD.h"
#include "t591MD.h"
extern MethodInfo m1205_MI;
extern MethodInfo m3258_MI;
extern MethodInfo m3327_MI;
extern MethodInfo m3260_MI;
extern MethodInfo m4244_MI;
extern MethodInfo m3264_MI;


extern MethodInfo m3254_MI;
extern "C" void m3254 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = m1205(NULL, &m1205_MI);
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f2 = L_0;
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f3 = 0;
		return;
	}
}
extern MethodInfo m3255_MI;
extern "C" t2* m3255 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m3255_ftn) ();
	static m3255_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3255_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::get_systemCopyBuffer()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3256_MI;
extern "C" void m3256 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef void (*m3256_ftn) (t2*);
	static m3256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)");
	_il2cpp_icall_func(p0);
}
extern "C" t699 * m3257 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		int32_t L_0 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f0;
		t699 * L_1 = m3258(NULL, L_0, &m3258_MI);
		return L_1;
	}
}
extern "C" t699 * m3258 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t699 * (*m3258_ftn) (int32_t);
	static m3258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3259_MI;
extern "C" void m3259 (t9 * __this , int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f0 = L_0;
		int32_t L_1 = p1;
		((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		m3207(NULL, (t699 *)NULL, &m3207_MI);
		int32_t L_2 = p2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
		m3215(NULL, L_3, 0, &m3215_MI);
		int32_t L_4 = p1;
		m3216(NULL, L_4, &m3216_MI);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t698_TI));
		m3209(NULL, 0, &m3209_MI);
		return;
	}
}
extern "C" void m3260 (t9 * __this , MethodInfo* method)
{
	typedef void (*m3260_ftn) ();
	static m3260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_ExitGUI()");
	_il2cpp_icall_func();
}
extern MethodInfo m3261_MI;
extern "C" void m3261 (t9 * __this , int32_t p0, MethodInfo* method)
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
			t478 * L_0 = m3388(NULL, &m3388_MI);
			int32_t L_1 = m3384(L_0, &m3384_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			m3218(NULL, &m3218_MI);
			goto IL_0042;
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			m3219(NULL, &m3219_MI);
			goto IL_0042;
		}

IL_0042:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
			int32_t L_4 = ((t714_SFs*)InitializedTypeInfo(&t714_TI)->static_fields)->f1;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t706_TI));
			m3215(NULL, L_4, 0, &m3215_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t591_TI));
			m3327(NULL, &m3327_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		m3260(NULL, &m3260_MI);
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
extern MethodInfo m3262_MI;
extern "C" bool m3262 (t9 * __this , t138 * p0, MethodInfo* method)
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
		if (((t713 *)IsInst(L_1, InitializedTypeInfo(&t713_TI))))
		{
			goto IL_0025;
		}
	}
	{
		t138 * L_2 = p0;
		t138 * L_3 = (t138 *)VirtFuncInvoker0< t138 * >::Invoke(&m4244_MI, L_2);
		if (((t713 *)IsInst(L_3, InitializedTypeInfo(&t713_TI))))
		{
			goto IL_0025;
		}
	}
	{
		return 0;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		m3260(NULL, &m3260_MI);
		return 1;
	}
}
extern "C" void m3263 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t714_TI));
		int32_t L_0 = m3264(NULL, &m3264_MI);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		t563 * L_1 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_1, (t2*) &_stringLiteral174, &m2910_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
extern "C" int32_t m3264 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3264_ftn) ();
	static m3264_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3264_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIUtility::Internal_GetGUIDepth()");
	return _il2cpp_icall_func();
}
#include "t715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t715_TI;
#include "t715MD.h"

extern TypeInfo t43_TI;
#include "t43MD.h"
extern MethodInfo m2604_MI;
extern MethodInfo m3415_MI;


extern MethodInfo m3265_MI;
extern "C" void m3265 (t715 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		__this->f1 = 1;
		t43  L_0 = m2604(NULL, &m2604_MI);
		__this->f2 = L_0;
		__this->f3 = (-1.0f);
		t43  L_1 = {0};
		m3415(&L_1, (0.5f), (0.5f), (1.0f), &m3415_MI);
		__this->f4 = L_1;
		m336(__this, &m336_MI);
		return;
	}
}
#include "t716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t716_TI;
#include "t716MD.h"



extern MethodInfo m3266_MI;
extern "C" void m3266 (t716 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3267_MI;
extern "C" void m3267 (t716 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3267((t716 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t716(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3268_MI;
extern "C" t9 * m3268 (t716 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3269_MI;
extern "C" void m3269 (t716 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t699_TI;

#include "t424.h"
#include "t880.h"
#include "t718.h"
#include "t719.h"
#include "t881.h"
#include "t882.h"
extern TypeInfo t717_TI;
extern TypeInfo t880_TI;
extern TypeInfo t718_TI;
extern TypeInfo t596_TI;
extern TypeInfo t882_TI;
#include "t143MD.h"
#include "t880MD.h"
#include "t718MD.h"
#include "t719MD.h"
#include "t881MD.h"
extern Il2CppType t717_0_0_0;
extern Il2CppType t718_0_0_0;
extern Il2CppType t882_0_0_0;
extern MethodInfo m333_MI;
extern MethodInfo m3370_MI;
extern MethodInfo m3318_MI;
extern MethodInfo m611_MI;
extern MethodInfo m3319_MI;
extern MethodInfo m4245_MI;
extern MethodInfo m4246_MI;
extern MethodInfo m4247_MI;
extern MethodInfo m3356_MI;
extern MethodInfo m3317_MI;
extern MethodInfo m3367_MI;
extern MethodInfo m3357_MI;
extern MethodInfo m3418_MI;
extern MethodInfo m3335_MI;
extern MethodInfo m3321_MI;
extern MethodInfo m425_MI;
extern MethodInfo m1182_MI;
extern MethodInfo m400_MI;
extern MethodInfo m4248_MI;
extern MethodInfo m3272_MI;
extern Il2CppGenericMethod m4246_GM;
extern Il2CppGenericMethod m4247_GM;
extern Il2CppGenericMethod m4248_GM;
extern Il2CppGenericMethod m4249_GM;
extern Il2CppGenericMethod m4250_GM;


extern MethodInfo m3270_MI;
extern TypeInfo* t717_TI_var;
extern "C" void m3270 (t699 * __this, MethodInfo* method)
{
	static bool m3270_init;
	if (!m3270_init)
	{
		t717_TI_var = il2cpp_codegen_class_from_type(&t717_0_0_0);
		m3270_init = true;
	}
	{
		t715 * L_0 = (t715 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t715_TI));
		m3265(L_0, &m3265_MI);
		__this->f24 = L_0;
		m3149(__this, &m3149_MI);
		__this->f23 = ((t717*)SZArrayNew(t717_TI_var, 1));
		return;
	}
}
extern MethodInfo m3271_MI;
extern "C" void m3271 (t699 * __this, MethodInfo* method)
{
	{
		m3318(__this, &m3318_MI);
		return;
	}
}
extern "C" t424 * m3272 (t699 * __this, MethodInfo* method)
{
	{
		t424 * L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3273_MI;
extern "C" void m3273 (t699 * __this, t424 * p0, MethodInfo* method)
{
	{
		t424 * L_0 = p0;
		__this->f2 = L_0;
		t699 * L_1 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f28;
		bool L_2 = m333(NULL, L_1, __this, &m333_MI);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		t424 * L_3 = (__this->f2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		m3370(NULL, L_3, &m3370_MI);
	}

IL_0022:
	{
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3274_MI;
extern "C" t701 * m3274 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3275_MI;
extern "C" void m3275 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f3 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3276_MI;
extern "C" t701 * m3276 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3277_MI;
extern "C" void m3277 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f6 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3278_MI;
extern "C" t701 * m3278 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3279_MI;
extern "C" void m3279 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f7 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3280_MI;
extern "C" t701 * m3280 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3281_MI;
extern "C" void m3281 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f8 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3282_MI;
extern "C" t701 * m3282 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3283_MI;
extern "C" void m3283 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f4 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3284_MI;
extern "C" t701 * m3284 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3285_MI;
extern "C" void m3285 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f5 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3286_MI;
extern "C" t701 * m3286 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f9);
		return L_0;
	}
}
extern MethodInfo m3287_MI;
extern "C" void m3287 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f9 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3288_MI;
extern "C" t701 * m3288 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f10);
		return L_0;
	}
}
extern MethodInfo m3289_MI;
extern "C" void m3289 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f10 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3290_MI;
extern "C" t701 * m3290 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f11);
		return L_0;
	}
}
extern MethodInfo m3291_MI;
extern "C" void m3291 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f11 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3292_MI;
extern "C" t701 * m3292 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f12);
		return L_0;
	}
}
extern MethodInfo m3293_MI;
extern "C" void m3293 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f12 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3294_MI;
extern "C" t701 * m3294 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f13);
		return L_0;
	}
}
extern MethodInfo m3295_MI;
extern "C" void m3295 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f13 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3296_MI;
extern "C" t701 * m3296 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f14);
		return L_0;
	}
}
extern MethodInfo m3297_MI;
extern "C" void m3297 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f14 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3298_MI;
extern "C" t701 * m3298 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f15);
		return L_0;
	}
}
extern MethodInfo m3299_MI;
extern "C" void m3299 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f15 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3300_MI;
extern "C" t701 * m3300 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f16);
		return L_0;
	}
}
extern MethodInfo m3301_MI;
extern "C" void m3301 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f16 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3302_MI;
extern "C" t701 * m3302 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f17);
		return L_0;
	}
}
extern MethodInfo m3303_MI;
extern "C" void m3303 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f17 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3304_MI;
extern "C" t701 * m3304 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f18);
		return L_0;
	}
}
extern MethodInfo m3305_MI;
extern "C" void m3305 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f18 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3306_MI;
extern "C" t701 * m3306 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f19);
		return L_0;
	}
}
extern MethodInfo m3307_MI;
extern "C" void m3307 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f19 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3308_MI;
extern "C" t701 * m3308 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f20);
		return L_0;
	}
}
extern MethodInfo m3309_MI;
extern "C" void m3309 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f20 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3310_MI;
extern "C" t701 * m3310 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f21);
		return L_0;
	}
}
extern MethodInfo m3311_MI;
extern "C" void m3311 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f21 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3312_MI;
extern "C" t701 * m3312 (t699 * __this, MethodInfo* method)
{
	{
		t701 * L_0 = (__this->f22);
		return L_0;
	}
}
extern MethodInfo m3313_MI;
extern "C" void m3313 (t699 * __this, t701 * p0, MethodInfo* method)
{
	{
		t701 * L_0 = p0;
		__this->f22 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3314_MI;
extern "C" t717* m3314 (t699 * __this, MethodInfo* method)
{
	{
		t717* L_0 = (__this->f23);
		return L_0;
	}
}
extern MethodInfo m3315_MI;
extern "C" void m3315 (t699 * __this, t717* p0, MethodInfo* method)
{
	{
		t717* L_0 = p0;
		__this->f23 = L_0;
		m3318(__this, &m3318_MI);
		return;
	}
}
extern MethodInfo m3316_MI;
extern "C" t715 * m3316 (t699 * __this, MethodInfo* method)
{
	{
		t715 * L_0 = (__this->f24);
		return L_0;
	}
}
extern "C" t701 * m3317 (t9 * __this , MethodInfo* method)
{
	{
		t701 * L_0 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f25;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_1 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_1, &m3350_MI);
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f25 = L_1;
	}

IL_0014:
	{
		t701 * L_2 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f25;
		return L_2;
	}
}
extern "C" void m3318 (t699 * __this, MethodInfo* method)
{
	{
		t717* L_0 = (__this->f23);
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
		m3319(__this, &m3319_MI);
		return;
	}
}
extern TypeInfo* t718_TI_var;
extern MethodInfo* m4246_MI_var;
extern MethodInfo* m4247_MI_var;
extern "C" void m3319 (t699 * __this, MethodInfo* method)
{
	static bool m3319_init;
	if (!m3319_init)
	{
		t718_TI_var = il2cpp_codegen_class_from_type(&t718_0_0_0);
		m4246_MI_var = il2cpp_codegen_genericmethod_get_method(&m4246_GM);
		m4247_MI_var = il2cpp_codegen_genericmethod_get_method(&m4247_GM);
		m3319_init = true;
	}
	int32_t V_0 = 0;
	{
		t701 * L_0 = (__this->f3);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_1 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_1, &m3350_MI);
		__this->f3 = L_1;
	}

IL_0016:
	{
		t701 * L_2 = (__this->f4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_3 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_3, &m3350_MI);
		__this->f4 = L_3;
	}

IL_002c:
	{
		t701 * L_4 = (__this->f5);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_5 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_5, &m3350_MI);
		__this->f5 = L_5;
	}

IL_0042:
	{
		t701 * L_6 = (__this->f6);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_7 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_7, &m3350_MI);
		__this->f6 = L_7;
	}

IL_0058:
	{
		t701 * L_8 = (__this->f9);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_9 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_9, &m3350_MI);
		__this->f9 = L_9;
	}

IL_006e:
	{
		t701 * L_10 = (__this->f7);
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_11 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_11, &m3350_MI);
		__this->f7 = L_11;
	}

IL_0084:
	{
		t701 * L_12 = (__this->f8);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_13 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_13, &m3350_MI);
		__this->f8 = L_13;
	}

IL_009a:
	{
		t701 * L_14 = (__this->f10);
		if (L_14)
		{
			goto IL_00b0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_15 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_15, &m3350_MI);
		__this->f10 = L_15;
	}

IL_00b0:
	{
		t701 * L_16 = (__this->f11);
		if (L_16)
		{
			goto IL_00c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_17 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_17, &m3350_MI);
		__this->f11 = L_17;
	}

IL_00c6:
	{
		t701 * L_18 = (__this->f12);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_19 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_19, &m3350_MI);
		__this->f12 = L_19;
	}

IL_00dc:
	{
		t701 * L_20 = (__this->f13);
		if (L_20)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_21 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_21, &m3350_MI);
		__this->f13 = L_21;
	}

IL_00f2:
	{
		t701 * L_22 = (__this->f14);
		if (L_22)
		{
			goto IL_0108;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_23 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_23, &m3350_MI);
		__this->f14 = L_23;
	}

IL_0108:
	{
		t701 * L_24 = (__this->f15);
		if (L_24)
		{
			goto IL_011e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_25 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_25, &m3350_MI);
		__this->f15 = L_25;
	}

IL_011e:
	{
		t701 * L_26 = (__this->f16);
		if (L_26)
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_27 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_27, &m3350_MI);
		__this->f16 = L_27;
	}

IL_0134:
	{
		t701 * L_28 = (__this->f17);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_29 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_29, &m3350_MI);
		__this->f17 = L_29;
	}

IL_014a:
	{
		t701 * L_30 = (__this->f18);
		if (L_30)
		{
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_31 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_31, &m3350_MI);
		__this->f18 = L_31;
	}

IL_0160:
	{
		t701 * L_32 = (__this->f19);
		if (L_32)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_33 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_33, &m3350_MI);
		__this->f19 = L_33;
	}

IL_0176:
	{
		t701 * L_34 = (__this->f20);
		if (L_34)
		{
			goto IL_018c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_35 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_35, &m3350_MI);
		__this->f20 = L_35;
	}

IL_018c:
	{
		t701 * L_36 = (__this->f21);
		if (L_36)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_37 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_37, &m3350_MI);
		__this->f21 = L_37;
	}

IL_01a2:
	{
		t701 * L_38 = (__this->f22);
		if (L_38)
		{
			goto IL_01b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_39 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_39, &m3350_MI);
		__this->f22 = L_39;
	}

IL_01b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t880_TI));
		t880 * L_40 = m4245(NULL, &m4245_MI);
		t718 * L_41 = (t718 *)il2cpp_codegen_object_new (t718_TI_var);
		m4246(L_41, L_40, m4246_MI_var);
		__this->f26 = L_41;
		t718 * L_42 = (__this->f26);
		t701 * L_43 = (__this->f3);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_42, (t2*) &_stringLiteral176, L_43);
		t701 * L_44 = (__this->f3);
		m3356(L_44, (t2*) &_stringLiteral176, &m3356_MI);
		t718 * L_45 = (__this->f26);
		t701 * L_46 = (__this->f4);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_45, (t2*) &_stringLiteral177, L_46);
		t701 * L_47 = (__this->f4);
		m3356(L_47, (t2*) &_stringLiteral177, &m3356_MI);
		t718 * L_48 = (__this->f26);
		t701 * L_49 = (__this->f5);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_48, (t2*) &_stringLiteral178, L_49);
		t701 * L_50 = (__this->f5);
		m3356(L_50, (t2*) &_stringLiteral178, &m3356_MI);
		t718 * L_51 = (__this->f26);
		t701 * L_52 = (__this->f6);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_51, (t2*) &_stringLiteral179, L_52);
		t701 * L_53 = (__this->f6);
		m3356(L_53, (t2*) &_stringLiteral179, &m3356_MI);
		t718 * L_54 = (__this->f26);
		t701 * L_55 = (__this->f9);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_54, (t2*) &_stringLiteral180, L_55);
		t701 * L_56 = (__this->f9);
		m3356(L_56, (t2*) &_stringLiteral180, &m3356_MI);
		t718 * L_57 = (__this->f26);
		t701 * L_58 = (__this->f7);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_57, (t2*) &_stringLiteral181, L_58);
		t701 * L_59 = (__this->f7);
		m3356(L_59, (t2*) &_stringLiteral181, &m3356_MI);
		t718 * L_60 = (__this->f26);
		t701 * L_61 = (__this->f8);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_60, (t2*) &_stringLiteral182, L_61);
		t701 * L_62 = (__this->f8);
		m3356(L_62, (t2*) &_stringLiteral182, &m3356_MI);
		t718 * L_63 = (__this->f26);
		t701 * L_64 = (__this->f10);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_63, (t2*) &_stringLiteral183, L_64);
		t701 * L_65 = (__this->f10);
		m3356(L_65, (t2*) &_stringLiteral183, &m3356_MI);
		t718 * L_66 = (__this->f26);
		t701 * L_67 = (__this->f11);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_66, (t2*) &_stringLiteral184, L_67);
		t701 * L_68 = (__this->f11);
		m3356(L_68, (t2*) &_stringLiteral184, &m3356_MI);
		t718 * L_69 = (__this->f26);
		t701 * L_70 = (__this->f12);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_69, (t2*) &_stringLiteral185, L_70);
		t701 * L_71 = (__this->f12);
		m3356(L_71, (t2*) &_stringLiteral185, &m3356_MI);
		t718 * L_72 = (__this->f26);
		t701 * L_73 = (__this->f13);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_72, (t2*) &_stringLiteral186, L_73);
		t701 * L_74 = (__this->f13);
		m3356(L_74, (t2*) &_stringLiteral186, &m3356_MI);
		t718 * L_75 = (__this->f26);
		t701 * L_76 = (__this->f14);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_75, (t2*) &_stringLiteral187, L_76);
		t701 * L_77 = (__this->f14);
		m3356(L_77, (t2*) &_stringLiteral187, &m3356_MI);
		t718 * L_78 = (__this->f26);
		t701 * L_79 = (__this->f15);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_78, (t2*) &_stringLiteral188, L_79);
		t701 * L_80 = (__this->f15);
		m3356(L_80, (t2*) &_stringLiteral188, &m3356_MI);
		t718 * L_81 = (__this->f26);
		t701 * L_82 = (__this->f16);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_81, (t2*) &_stringLiteral189, L_82);
		t701 * L_83 = (__this->f16);
		m3356(L_83, (t2*) &_stringLiteral189, &m3356_MI);
		t718 * L_84 = (__this->f26);
		t701 * L_85 = (__this->f17);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_84, (t2*) &_stringLiteral190, L_85);
		t701 * L_86 = (__this->f17);
		m3356(L_86, (t2*) &_stringLiteral190, &m3356_MI);
		t718 * L_87 = (__this->f26);
		t701 * L_88 = (__this->f18);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_87, (t2*) &_stringLiteral191, L_88);
		t701 * L_89 = (__this->f18);
		m3356(L_89, (t2*) &_stringLiteral191, &m3356_MI);
		t718 * L_90 = (__this->f26);
		t701 * L_91 = (__this->f19);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_90, (t2*) &_stringLiteral192, L_91);
		t701 * L_92 = (__this->f19);
		m3356(L_92, (t2*) &_stringLiteral192, &m3356_MI);
		t718 * L_93 = (__this->f26);
		t701 * L_94 = (__this->f20);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_93, (t2*) &_stringLiteral193, L_94);
		t701 * L_95 = (__this->f20);
		m3356(L_95, (t2*) &_stringLiteral193, &m3356_MI);
		t718 * L_96 = (__this->f26);
		t701 * L_97 = (__this->f21);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_96, (t2*) &_stringLiteral194, L_97);
		t701 * L_98 = (__this->f21);
		m3356(L_98, (t2*) &_stringLiteral194, &m3356_MI);
		t718 * L_99 = (__this->f26);
		t701 * L_100 = (__this->f22);
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_99, (t2*) &_stringLiteral195, L_100);
		t701 * L_101 = (__this->f22);
		m3356(L_101, (t2*) &_stringLiteral195, &m3356_MI);
		t717* L_102 = (__this->f23);
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
		t717* L_103 = (__this->f23);
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		if ((*(t701 **)(t701 **)SZArrayLdElema(L_103, L_105)))
		{
			goto IL_04e4;
		}
	}
	{
		goto IL_0504;
	}

IL_04e4:
	{
		t718 * L_106 = (__this->f26);
		t717* L_107 = (__this->f23);
		int32_t L_108 = V_0;
		int32_t L_109 = L_108;
		t2* L_110 = m3355((*(t701 **)(t701 **)SZArrayLdElema(L_107, L_109)), &m3355_MI);
		t717* L_111 = (__this->f23);
		int32_t L_112 = V_0;
		int32_t L_113 = L_112;
		VirtActionInvoker2< t2*, t701 * >::Invoke(m4247_MI_var, L_106, L_110, (*(t701 **)(t701 **)SZArrayLdElema(L_111, L_113)));
	}

IL_0504:
	{
		int32_t L_114 = V_0;
		V_0 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0508:
	{
		int32_t L_115 = V_0;
		t717* L_116 = (__this->f23);
		if ((((int32_t)L_115) < ((int32_t)(((int32_t)(((t121 *)L_116)->max_length))))))
		{
			goto IL_04d2;
		}
	}

IL_0516:
	{
		t701 * L_117 = m3317(NULL, &m3317_MI);
		m3367(L_117, 1, &m3367_MI);
		t701 * L_118 = m3317(NULL, &m3317_MI);
		t719 * L_119 = m3357(L_118, &m3357_MI);
		t43  L_120 = m3418(NULL, &m3418_MI);
		m3335(L_119, L_120, &m3335_MI);
		return;
	}
}
extern MethodInfo m3320_MI;
extern TypeInfo* t158_TI_var;
extern "C" t701 * m3320 (t699 * __this, t2* p0, MethodInfo* method)
{
	static bool m3320_init;
	if (!m3320_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3320_init = true;
	}
	t701 * V_0 = {0};
	{
		t2* L_0 = p0;
		t701 * L_1 = m3321(__this, L_0, &m3321_MI);
		V_0 = L_1;
		t701 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		t701 * L_3 = V_0;
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
		t478 * L_12 = m3388(NULL, &m3388_MI);
		int32_t L_13 = m3384(L_12, &m3384_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t596_TI), &L_14);
		ArrayElementTypeCheck (L_11, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_11, 5)) = (t9 *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_16 = m515(NULL, L_11, &m515_MI);
		m1182(NULL, L_16, &m1182_MI);
		t701 * L_17 = m3317(NULL, &m3317_MI);
		return L_17;
	}
}
extern MethodInfo* m4248_MI_var;
extern "C" t701 * m3321 (t699 * __this, t2* p0, MethodInfo* method)
{
	static bool m3321_init;
	if (!m3321_init)
	{
		m4248_MI_var = il2cpp_codegen_genericmethod_get_method(&m4248_GM);
		m3321_init = true;
	}
	t701 * V_0 = {0};
	{
		bool L_0 = m333(NULL, __this, (t57 *)NULL, &m333_MI);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral199, &m400_MI);
		return (t701 *)NULL;
	}

IL_0018:
	{
		t718 * L_1 = (__this->f26);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		m3319(__this, &m3319_MI);
	}

IL_0029:
	{
		t718 * L_2 = (__this->f26);
		t2* L_3 = p0;
		bool L_4 = (bool)VirtFuncInvoker2< bool, t2*, t701 ** >::Invoke(m4248_MI_var, L_2, L_3, (&V_0));
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		t701 * L_5 = V_0;
		return L_5;
	}

IL_003e:
	{
		return (t701 *)NULL;
	}
}
extern "C" void m3322 (t699 * __this, MethodInfo* method)
{
	{
		((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f28 = __this;
		t424 * L_0 = m3272(__this, &m3272_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		m3370(NULL, L_0, &m3370_MI);
		t716 * L_1 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f27;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t716 * L_2 = ((t699_SFs*)InitializedTypeInfo(&t699_TI)->static_fields)->f27;
		VirtActionInvoker0::Invoke(&m3267_MI, L_2);
	}

IL_0025:
	{
		return;
	}
}
extern MethodInfo m3323_MI;
extern TypeInfo* t882_TI_var;
extern MethodInfo* m4249_MI_var;
extern MethodInfo* m4250_MI_var;
extern "C" t9 * m3323 (t699 * __this, MethodInfo* method)
{
	static bool m3323_init;
	if (!m3323_init)
	{
		t882_TI_var = il2cpp_codegen_class_from_type(&t882_0_0_0);
		m4249_MI_var = il2cpp_codegen_genericmethod_get_method(&m4249_GM);
		m4250_MI_var = il2cpp_codegen_genericmethod_get_method(&m4250_GM);
		m3323_init = true;
	}
	{
		t718 * L_0 = (__this->f26);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		m3319(__this, &m3319_MI);
	}

IL_0011:
	{
		t718 * L_1 = (__this->f26);
		t881 * L_2 = m4249(L_1, m4249_MI_var);
		t882  L_3 = m4250(L_2, m4250_MI_var);
		t882  L_4 = L_3;
		t9 * L_5 = Box(t882_TI_var, &L_4);
		return (t9 *)L_5;
	}
}
#include "t591.h"
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2729_MI;
extern MethodInfo m3324_MI;


extern "C" void m3324 (t591 * __this, MethodInfo* method)
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
extern "C" void m2729 (t591 * __this, t2* p0, MethodInfo* method)
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
extern MethodInfo m3325_MI;
extern "C" void m3325 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		t591 * L_1 = (t591 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t591_TI));
		m2729(L_1, L_0, &m2729_MI);
		((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f3 = L_1;
		t591 * L_2 = (t591 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t591_TI));
		m3324(L_2, &m3324_MI);
		((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f4 = L_2;
		t591 * L_3 = (t591 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t591_TI));
		m3324(L_3, &m3324_MI);
		((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f5 = L_3;
		t591 * L_4 = (t591 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t591_TI));
		m3324(L_4, &m3324_MI);
		((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f6 = L_4;
		return;
	}
}
extern MethodInfo m2728_MI;
extern "C" t2* m2728 (t591 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3326_MI;
extern "C" void m3326 (t591 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3327 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t591_TI));
		t591 * L_0 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f4;
		L_0->f0 = (t2*)NULL;
		t591 * L_1 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f4;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_1->f2 = L_2;
		t591 * L_3 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f5;
		L_3->f1 = (t148 *)NULL;
		t591 * L_4 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f5;
		t2* L_5 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		L_4->f2 = L_5;
		t591 * L_6 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f6;
		L_6->f0 = (t2*)NULL;
		t591 * L_7 = ((t591_SFs*)InitializedTypeInfo(&t591_TI)->static_fields)->f6;
		L_7->f1 = (t148 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t719_TI;

extern MethodInfo m3334_MI;
extern MethodInfo m3331_MI;
extern MethodInfo m3333_MI;
extern MethodInfo m3332_MI;


extern MethodInfo m3328_MI;
extern "C" void m3328 (t719 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3331(__this, &m3331_MI);
		return;
	}
}
extern MethodInfo m3329_MI;
extern "C" void m3329 (t719 * __this, t701 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t701 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		t432 * L_2 = m3333(__this, &m3333_MI);
		__this->f2 = L_2;
		return;
	}
}
extern MethodInfo m3330_MI;
extern "C" void m3330 (t719 * __this, MethodInfo* method)
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
			t701 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3332(__this, &m3332_MI);
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
extern "C" void m3331 (t719 * __this, MethodInfo* method)
{
	typedef void (*m3331_ftn) (t719 *);
	static m3331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3332 (t719 * __this, MethodInfo* method)
{
	typedef void (*m3332_ftn) (t719 *);
	static m3332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t432 * m3333 (t719 * __this, MethodInfo* method)
{
	typedef t432 * (*m3333_ftn) (t719 *);
	static m3333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::GetBackgroundInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3334 (t719 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3334_ftn) (t719 *, t43 *);
	static m3334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3335 (t719 * __this, t43  p0, MethodInfo* method)
{
	{
		m3334(__this, (&p0), &m3334_MI);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3339_MI;
extern MethodInfo m3340_MI;
extern MethodInfo m3348_MI;


extern "C" void m2945 (t537 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3339(__this, &m3339_MI);
		return;
	}
}
extern MethodInfo m3336_MI;
extern "C" void m3336 (t537 * __this, t701 * p0, t58 p1, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t701 * L_0 = p0;
		__this->f1 = L_0;
		t58 L_1 = p1;
		__this->f0 = L_1;
		return;
	}
}
extern MethodInfo m3337_MI;
extern "C" void m3337 (t537 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3339(__this, &m3339_MI);
		int32_t L_0 = p0;
		m3341(__this, L_0, &m3341_MI);
		int32_t L_1 = p1;
		m3343(__this, L_1, &m3343_MI);
		int32_t L_2 = p2;
		m3344(__this, L_2, &m3344_MI);
		int32_t L_3 = p3;
		m3346(__this, L_3, &m3346_MI);
		return;
	}
}
extern MethodInfo m3338_MI;
extern "C" void m3338 (t537 * __this, MethodInfo* method)
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
			t701 * L_0 = (__this->f1);
			if (L_0)
			{
				goto IL_0011;
			}
		}

IL_000b:
		{
			m3340(__this, &m3340_MI);
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
extern "C" void m3339 (t537 * __this, MethodInfo* method)
{
	typedef void (*m3339_ftn) (t537 *);
	static m3339_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3339_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3340 (t537 * __this, MethodInfo* method)
{
	typedef void (*m3340_ftn) (t537 *);
	static m3340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" int32_t m2940 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m2940_ftn) (t537 *);
	static m2940_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2940_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_left()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3341 (t537 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3341_ftn) (t537 *, int32_t);
	static m3341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_left(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3342 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m3342_ftn) (t537 *);
	static m3342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_right()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3343 (t537 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3343_ftn) (t537 *, int32_t);
	static m3343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3343_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_right(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2941 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m2941_ftn) (t537 *);
	static m2941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_top()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3344 (t537 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3344_ftn) (t537 *, int32_t);
	static m3344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_top(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3345 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m3345_ftn) (t537 *);
	static m3345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_bottom()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3346 (t537 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m3346_ftn) (t537 *, int32_t);
	static m3346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3346_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::set_bottom(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2931 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m2931_ftn) (t537 *);
	static m2931_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2931_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_horizontal()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2932 (t537 * __this, MethodInfo* method)
{
	typedef int32_t (*m2932_ftn) (t537 *);
	static m2932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::get_vertical()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3347_MI;
extern "C" t441  m3347 (t537 * __this, t441  p0, MethodInfo* method)
{
	{
		t441  L_0 = m3348(NULL, __this, (&p0), &m3348_MI);
		return L_0;
	}
}
extern "C" t441  m3348 (t9 * __this , t537 * p0, t441 * p1, MethodInfo* method)
{
	typedef t441  (*m3348_ftn) (t537 *, t441 *);
	static m3348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectOffset::INTERNAL_CALL_Remove(UnityEngine.RectOffset,UnityEngine.Rect&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3349_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3349 (t537 * __this, MethodInfo* method)
{
	static bool m3349_init;
	if (!m3349_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3349_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		int32_t L_1 = m2940(__this, &m2940_MI);
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		int32_t L_5 = m3342(__this, &m3342_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		int32_t L_9 = m2941(__this, &m2941_MI);
		int32_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t125_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		int32_t L_13 = m3345(__this, &m3345_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral200, L_12, &m3587_MI);
		return L_16;
	}
}
#include "t425.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t425_TI;
#include "t425MD.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo m3358_MI;
extern MethodInfo m3361_MI;
extern MethodInfo m3368_MI;
extern MethodInfo m3353_MI;
extern MethodInfo m3354_MI;
extern MethodInfo m3373_MI;
extern MethodInfo m3374_MI;
extern MethodInfo m3376_MI;
extern MethodInfo m3378_MI;


extern "C" void m3350 (t701 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3353(__this, &m3353_MI);
		return;
	}
}
extern MethodInfo m3351_MI;
extern "C" void m3351 (t9 * __this , MethodInfo* method)
{
	{
		((t701_SFs*)InitializedTypeInfo(&t701_TI)->static_fields)->f14 = 1;
		return;
	}
}
extern MethodInfo m3352_MI;
extern "C" void m3352 (t701 * __this, MethodInfo* method)
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
		m3354(__this, &m3354_MI);
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
extern "C" void m3353 (t701 * __this, MethodInfo* method)
{
	typedef void (*m3353_ftn) (t701 *);
	static m3353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3354 (t701 * __this, MethodInfo* method)
{
	typedef void (*m3354_ftn) (t701 *);
	static m3354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern "C" t2* m3355 (t701 * __this, MethodInfo* method)
{
	typedef t2* (*m3355_ftn) (t701 *);
	static m3355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_name()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3356 (t701 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3356_ftn) (t701 *, t2*);
	static m3356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t719 * m3357 (t701 * __this, MethodInfo* method)
{
	{
		t719 * L_0 = (__this->f1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3358(__this, 0, &m3358_MI);
		t719 * L_2 = (t719 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t719_TI));
		m3329(L_2, __this, L_1, &m3329_MI);
		__this->f1 = L_2;
	}

IL_001e:
	{
		t719 * L_3 = (__this->f1);
		return L_3;
	}
}
extern "C" t58 m3358 (t701 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3358_ftn) (t701 *, int32_t);
	static m3358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t537 * m3359 (t701 * __this, MethodInfo* method)
{
	{
		t537 * L_0 = (__this->f11);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3361(__this, 1, &m3361_MI);
		t537 * L_2 = (t537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t537_TI));
		m3336(L_2, __this, L_1, &m3336_MI);
		__this->f11 = L_2;
	}

IL_001e:
	{
		t537 * L_3 = (__this->f11);
		return L_3;
	}
}
extern "C" t537 * m3360 (t701 * __this, MethodInfo* method)
{
	{
		t537 * L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t58 L_1 = m3361(__this, 2, &m3361_MI);
		t537 * L_2 = (t537 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t537_TI));
		m3336(L_2, __this, L_1, &m3336_MI);
		__this->f10 = L_2;
	}

IL_001e:
	{
		t537 * L_3 = (__this->f10);
		return L_3;
	}
}
extern "C" t58 m3361 (t701 * __this, int32_t p0, MethodInfo* method)
{
	typedef t58 (*m3361_ftn) (t701 *, int32_t);
	static m3361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3361_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" float m3362 (t701 * __this, MethodInfo* method)
{
	typedef float (*m3362_ftn) (t701 *);
	static m3362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" float m3363 (t701 * __this, MethodInfo* method)
{
	typedef float (*m3363_ftn) (t701 *);
	static m3363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_fixedHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3364 (t701 * __this, MethodInfo* method)
{
	typedef bool (*m3364_ftn) (t701 *);
	static m3364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchWidth()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3365 (t701 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3365_ftn) (t701 *, bool);
	static m3365_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3365_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" bool m3366 (t701 * __this, MethodInfo* method)
{
	typedef bool (*m3366_ftn) (t701 *);
	static m3366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::get_stretchHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3367 (t701 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3367_ftn) (t701 *, bool);
	static m3367_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3367_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" float m3368 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef float (*m3368_ftn) (t58);
	static m3368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3369_MI;
extern "C" float m3369 (t701 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		float L_1 = m3368(NULL, L_0, &m3368_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = roundf(L_1);
		return L_2;
	}
}
extern "C" void m3370 (t9 * __this , t424 * p0, MethodInfo* method)
{
	typedef void (*m3370_ftn) (t424 *);
	static m3370_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3370_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)");
	_il2cpp_icall_func(p0);
}
extern "C" t701 * m3371 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_0 = ((t701_SFs*)InitializedTypeInfo(&t701_TI)->static_fields)->f15;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_1 = (t701 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t701_TI));
		m3350(L_1, &m3350_MI);
		((t701_SFs*)InitializedTypeInfo(&t701_TI)->static_fields)->f15 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		t701 * L_2 = ((t701_SFs*)InitializedTypeInfo(&t701_TI)->static_fields)->f15;
		return L_2;
	}
}
extern MethodInfo m3372_MI;
extern "C" t28  m3372 (t701 * __this, t441  p0, t591 * p1, int32_t p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t441  L_1 = p0;
		t591 * L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		m3373(NULL, L_0, L_1, L_2, L_3, (&V_0), &m3373_MI);
		t28  L_4 = V_0;
		return L_4;
	}
}
extern "C" void m3373 (t9 * __this , t58 p0, t441  p1, t591 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	{
		t58 L_0 = p0;
		t591 * L_1 = p2;
		int32_t L_2 = p3;
		t28 * L_3 = p4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		m3374(NULL, L_0, (&p1), L_1, L_2, L_3, &m3374_MI);
		return;
	}
}
extern "C" void m3374 (t9 * __this , t58 p0, t441 * p1, t591 * p2, int32_t p3, t28 * p4, MethodInfo* method)
{
	typedef void (*m3374_ftn) (t58, t441 *, t591 *, int32_t, t28 *);
	static m3374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m3375_MI;
extern "C" t28  m3375 (t701 * __this, t591 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t58 L_0 = (__this->f0);
		t591 * L_1 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		m3376(NULL, L_0, L_1, (&V_0), &m3376_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern "C" void m3376 (t9 * __this , t58 p0, t591 * p1, t28 * p2, MethodInfo* method)
{
	typedef void (*m3376_ftn) (t58, t591 *, t28 *);
	static m3376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3377_MI;
extern "C" float m3377 (t701 * __this, t591 * p0, float p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		t591 * L_1 = p0;
		float L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t701_TI));
		float L_3 = m3378(NULL, L_0, L_1, L_2, &m3378_MI);
		return L_3;
	}
}
extern "C" float m3378 (t9 * __this , t58 p0, t591 * p1, float p2, MethodInfo* method)
{
	typedef float (*m3378_ftn) (t58, t591 *, float);
	static m3378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3379_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3379 (t701 * __this, MethodInfo* method)
{
	static bool m3379_init;
	if (!m3379_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3379_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 1));
		t2* L_1 = m3355(__this, &m3355_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t2* L_2 = m3587(NULL, (t2*) &_stringLiteral201, L_0, &m3587_MI);
		return L_2;
	}
}
#include "t479.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t479_TI;
#include "t479MD.h"



#include "t475.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t475_TI;
#include "t475MD.h"

extern MethodInfo m3380_MI;


extern MethodInfo m2798_MI;
extern "C" t475 * m2798 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, MethodInfo* method)
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
		t475 * L_8 = m3380(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3380_MI);
		return L_8;
	}
}
extern MethodInfo m2799_MI;
extern "C" t475 * m2799 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
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
		t475 * L_8 = m3380(NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7, &m3380_MI);
		return L_8;
	}
}
extern "C" t475 * m3380 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, bool p4, bool p5, t2* p6, MethodInfo* method)
{
	{
		return (t475 *)NULL;
	}
}
extern MethodInfo m2722_MI;
extern "C" t2* m2722 (t475 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m2723_MI;
extern "C" void m2723 (t475 * __this, t2* p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2797_MI;
extern "C" void m2797 (t9 * __this , bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2721_MI;
extern "C" bool m2721 (t475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2796_MI;
extern "C" void m2796 (t475 * __this, bool p0, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2741_MI;
extern "C" bool m2741 (t475 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
extern MethodInfo m2737_MI;
extern "C" bool m2737 (t475 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2736_MI;
extern "C" bool m2736 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t478_TI;

#include "t595.h"
#include "t303.h"
#include "t294.h"
extern TypeInfo t28_TI;
extern TypeInfo t595_TI;
extern TypeInfo t294_TI;
extern MethodInfo m3386_MI;
extern MethodInfo m3381_MI;
extern MethodInfo m3383_MI;
extern MethodInfo m2733_MI;
extern MethodInfo m3389_MI;
extern MethodInfo m3391_MI;
extern MethodInfo m2753_MI;
extern MethodInfo m3392_MI;
extern MethodInfo m3385_MI;
extern MethodInfo m3401_MI;
extern MethodInfo m2752_MI;
extern MethodInfo m4251_MI;
extern MethodInfo m2991_MI;
extern MethodInfo m2754_MI;
extern MethodInfo m3387_MI;
extern MethodInfo m511_MI;


extern "C" void m2733 (t478 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3381(__this, &m3381_MI);
		return;
	}
}
extern "C" void m3381 (t478 * __this, MethodInfo* method)
{
	typedef void (*m3381_ftn) (t478 *);
	static m3381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Init()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3382_MI;
extern "C" void m3382 (t478 * __this, MethodInfo* method)
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
		m3383(__this, &m3383_MI);
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
extern "C" void m3383 (t478 * __this, MethodInfo* method)
{
	typedef void (*m3383_ftn) (t478 *);
	static m3383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2756_MI;
extern "C" int32_t m2756 (t478 * __this, MethodInfo* method)
{
	typedef int32_t (*m2756_ftn) (t478 *);
	static m2756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_rawType()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3384 (t478 * __this, MethodInfo* method)
{
	typedef int32_t (*m3384_ftn) (t478 *);
	static m3384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_type()");
	return _il2cpp_icall_func(__this);
}
extern "C" t28  m3385 (t478 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3386(__this, (&V_0), &m3386_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3386 (t478 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3386_ftn) (t478 *, t28 *);
	static m3386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m2752 (t478 * __this, MethodInfo* method)
{
	typedef int32_t (*m2752_ftn) (t478 *);
	static m2752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_modifiers()");
	return _il2cpp_icall_func(__this);
}
extern "C" uint16_t m2754 (t478 * __this, MethodInfo* method)
{
	typedef uint16_t (*m2754_ftn) (t478 *);
	static m2754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_character()");
	return _il2cpp_icall_func(__this);
}
extern "C" t2* m3387 (t478 * __this, MethodInfo* method)
{
	typedef t2* (*m3387_ftn) (t478 *);
	static m3387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_commandName()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m2753 (t478 * __this, MethodInfo* method)
{
	typedef int32_t (*m2753_ftn) (t478 *);
	static m2753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::get_keyCode()");
	return _il2cpp_icall_func(__this);
}
extern "C" t478 * m3388 (t9 * __this , MethodInfo* method)
{
	{
		t478 * L_0 = ((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f1;
		return L_0;
	}
}
extern "C" void m3389 (t9 * __this , t58 p0, MethodInfo* method)
{
	typedef void (*m3389_ftn) (t58);
	static m3389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3390_MI;
extern "C" void m3390 (t9 * __this , MethodInfo* method)
{
	{
		t478 * L_0 = ((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		t478 * L_1 = (t478 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t478_TI));
		m2733(L_1, &m2733_MI);
		((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f2 = L_1;
	}

IL_0014:
	{
		t478 * L_2 = ((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f2;
		((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f1 = L_2;
		t478 * L_3 = ((t478_SFs*)InitializedTypeInfo(&t478_TI)->static_fields)->f2;
		t58 L_4 = (L_3->f0);
		m3389(NULL, L_4, &m3389_MI);
		return;
	}
}
extern MethodInfo m2757_MI;
extern "C" bool m2757 (t9 * __this , t478 * p0, MethodInfo* method)
{
	typedef bool (*m2757_ftn) (t478 *);
	static m2757_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2757_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Event::PopEvent(UnityEngine.Event)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3391 (t478 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = m3384(__this, &m3384_MI);
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
extern "C" bool m3392 (t478 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = m3384(__this, &m3384_MI);
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
extern MethodInfo m3393_MI;
extern "C" int32_t m3393 (t478 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	{
		V_0 = 1;
		bool L_0 = m3391(__this, &m3391_MI);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = m2753(__this, &m2753_MI);
		V_0 = (((uint16_t)L_1));
	}

IL_0015:
	{
		bool L_2 = m3392(__this, &m3392_MI);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		t28  L_3 = m3385(__this, &m3385_MI);
		V_1 = L_3;
		int32_t L_4 = m3401((&V_1), &m3401_MI);
		V_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = m2752(__this, &m2752_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5*(int32_t)((int32_t)37)))|(int32_t)L_6));
		int32_t L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3394_MI;
extern "C" bool m3394 (t478 * __this, t9 * p0, MethodInfo* method)
{
	t478 * V_0 = {0};
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
		bool L_2 = m4251(NULL, __this, L_1, &m4251_MI);
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
		t126 * L_4 = m2511(L_3, &m2511_MI);
		t126 * L_5 = m2511(__this, &m2511_MI);
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
		V_0 = ((t478 *)Castclass(L_6, InitializedTypeInfo(&t478_TI)));
		int32_t L_7 = m3384(__this, &m3384_MI);
		t478 * L_8 = V_0;
		int32_t L_9 = m3384(L_8, &m3384_MI);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = m2752(__this, &m2752_MI);
		t478 * L_11 = V_0;
		int32_t L_12 = m2752(L_11, &m2752_MI);
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
		bool L_13 = m3391(__this, &m3391_MI);
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_14 = m2753(__this, &m2753_MI);
		t478 * L_15 = V_0;
		int32_t L_16 = m2753(L_15, &m2753_MI);
		return ((((int32_t)L_14) == ((int32_t)L_16))? 1 : 0);
	}

IL_0074:
	{
		bool L_17 = m3392(__this, &m3392_MI);
		if (!L_17)
		{
			goto IL_0091;
		}
	}
	{
		t28  L_18 = m3385(__this, &m3385_MI);
		t478 * L_19 = V_0;
		t28  L_20 = m3385(L_19, &m3385_MI);
		bool L_21 = m2991(NULL, L_18, L_20, &m2991_MI);
		return L_21;
	}

IL_0091:
	{
		return 0;
	}
}
extern MethodInfo m3395_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3395 (t478 * __this, MethodInfo* method)
{
	static bool m3395_init;
	if (!m3395_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3395_init = true;
	}
	{
		bool L_0 = m3391(__this, &m3391_MI);
		if (!L_0)
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t L_1 = m2754(__this, &m2754_MI);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_3 = m3384(__this, &m3384_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t596_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m2752(__this, &m2752_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t595_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 1)) = (t9 *)L_9;
		t158* L_10 = L_6;
		int32_t L_11 = m2753(__this, &m2753_MI);
		int32_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t294_TI), &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 2)) = (t9 *)L_13;
		t2* L_14 = m3587(NULL, (t2*) &_stringLiteral202, L_10, &m3587_MI);
		return L_14;
	}

IL_0051:
	{
		t158* L_15 = ((t158*)SZArrayNew(t158_TI_var, 8));
		ArrayElementTypeCheck (L_15, (t2*) &_stringLiteral203);
		*((t9 **)(t9 **)SZArrayLdElema(L_15, 0)) = (t9 *)(t2*) &_stringLiteral203;
		t158* L_16 = L_15;
		int32_t L_17 = m3384(__this, &m3384_MI);
		int32_t L_18 = L_17;
		t9 * L_19 = Box(InitializedTypeInfo(&t596_TI), &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 1)) = (t9 *)L_19;
		t158* L_20 = L_16;
		ArrayElementTypeCheck (L_20, (t2*) &_stringLiteral204);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 2)) = (t9 *)(t2*) &_stringLiteral204;
		t158* L_21 = L_20;
		uint16_t L_22 = m2754(__this, &m2754_MI);
		int32_t L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t125_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 3)) = (t9 *)L_24;
		t158* L_25 = L_21;
		ArrayElementTypeCheck (L_25, (t2*) &_stringLiteral205);
		*((t9 **)(t9 **)SZArrayLdElema(L_25, 4)) = (t9 *)(t2*) &_stringLiteral205;
		t158* L_26 = L_25;
		int32_t L_27 = m2752(__this, &m2752_MI);
		int32_t L_28 = L_27;
		t9 * L_29 = Box(InitializedTypeInfo(&t595_TI), &L_28);
		ArrayElementTypeCheck (L_26, L_29);
		*((t9 **)(t9 **)SZArrayLdElema(L_26, 5)) = (t9 *)L_29;
		t158* L_30 = L_26;
		ArrayElementTypeCheck (L_30, (t2*) &_stringLiteral206);
		*((t9 **)(t9 **)SZArrayLdElema(L_30, 6)) = (t9 *)(t2*) &_stringLiteral206;
		t158* L_31 = L_30;
		int32_t L_32 = m2753(__this, &m2753_MI);
		int32_t L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t294_TI), &L_33);
		ArrayElementTypeCheck (L_31, L_34);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 7)) = (t9 *)L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_35 = m515(NULL, L_31, &m515_MI);
		t2* L_36 = m3587(NULL, L_35, ((t158*)SZArrayNew(t158_TI_var, 0)), &m3587_MI);
		return L_36;
	}

IL_00c0:
	{
		bool L_37 = m3392(__this, &m3392_MI);
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		t158* L_38 = ((t158*)SZArrayNew(t158_TI_var, 3));
		int32_t L_39 = m3384(__this, &m3384_MI);
		int32_t L_40 = L_39;
		t9 * L_41 = Box(InitializedTypeInfo(&t596_TI), &L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((t9 **)(t9 **)SZArrayLdElema(L_38, 0)) = (t9 *)L_41;
		t158* L_42 = L_38;
		t28  L_43 = m3385(__this, &m3385_MI);
		t28  L_44 = L_43;
		t9 * L_45 = Box(InitializedTypeInfo(&t28_TI), &L_44);
		ArrayElementTypeCheck (L_42, L_45);
		*((t9 **)(t9 **)SZArrayLdElema(L_42, 1)) = (t9 *)L_45;
		t158* L_46 = L_42;
		int32_t L_47 = m2752(__this, &m2752_MI);
		int32_t L_48 = L_47;
		t9 * L_49 = Box(InitializedTypeInfo(&t595_TI), &L_48);
		ArrayElementTypeCheck (L_46, L_49);
		*((t9 **)(t9 **)SZArrayLdElema(L_46, 2)) = (t9 *)L_49;
		t2* L_50 = m3587(NULL, (t2*) &_stringLiteral207, L_46, &m3587_MI);
		return L_50;
	}

IL_0106:
	{
		int32_t L_51 = m3384(__this, &m3384_MI);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)14))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = m3384(__this, &m3384_MI);
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0148;
		}
	}

IL_0120:
	{
		t158* L_53 = ((t158*)SZArrayNew(t158_TI_var, 2));
		int32_t L_54 = m3384(__this, &m3384_MI);
		int32_t L_55 = L_54;
		t9 * L_56 = Box(InitializedTypeInfo(&t596_TI), &L_55);
		ArrayElementTypeCheck (L_53, L_56);
		*((t9 **)(t9 **)SZArrayLdElema(L_53, 0)) = (t9 *)L_56;
		t158* L_57 = L_53;
		t2* L_58 = m3387(__this, &m3387_MI);
		ArrayElementTypeCheck (L_57, L_58);
		*((t9 **)(t9 **)SZArrayLdElema(L_57, 1)) = (t9 *)L_58;
		t2* L_59 = m3587(NULL, (t2*) &_stringLiteral208, L_57, &m3587_MI);
		return L_59;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_60 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		int32_t L_61 = m3384(__this, &m3384_MI);
		int32_t L_62 = L_61;
		t9 * L_63 = Box(InitializedTypeInfo(&t596_TI), &L_62);
		t2* L_64 = m511(NULL, L_60, L_63, &m511_MI);
		return L_64;
	}
}
// Conversion methods for marshalling of: UnityEngine.Event
void t478_marshal(const t478& unmarshaled, t478_marshaled& marshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
void t478_marshal_back(const t478_marshaled& marshaled, t478& unmarshaled)
{
	Il2CppCodeGenException* f1Exception = il2cpp_codegen_get_not_supported_exception("Cannot marshal field 's_Current' of type 'Event': Reference type field marshaling is not supported.");
	il2cpp_codegen_raise_exception(f1Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.Event
void t478_marshal_cleanup(t478_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t294MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t596MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t595MD.h"



#include "t179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t179_TI;
#include "t179MD.h"

extern MethodInfo m3398_MI;
extern MethodInfo m3396_MI;
extern MethodInfo m3397_MI;


extern MethodInfo m640_MI;
extern "C" void m640 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3396(NULL, (&p0), (&p1), &m3396_MI);
		return;
	}
}
extern "C" void m3396 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef void (*m3396_ftn) (t13 *, t13 *);
	static m3396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3396_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m644_MI;
extern "C" void m644 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p1;
		m3397(NULL, (&p0), L_0, &m3397_MI);
		return;
	}
}
extern "C" void m3397 (t9 * __this , t13 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3397_ftn) (t13 *, float);
	static m3397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_CALL_DrawWireSphere(UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m3398 (t9 * __this , t43 * p0, MethodInfo* method)
{
	typedef void (*m3398_ftn) (t43 *);
	static m3398_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3398_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m639_MI;
extern "C" void m639 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		m3398(NULL, (&p0), &m3398_MI);
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

#include "t883.h"
extern TypeInfo t883_TI;
extern TypeInfo t13_TI;
#include "t883MD.h"
#include "t13MD.h"
extern MethodInfo m4252_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3399_MI;
extern MethodInfo m2930_MI;
extern MethodInfo m1210_MI;
extern MethodInfo m2751_MI;
extern MethodInfo m4253_MI;
extern MethodInfo m1208_MI;
extern MethodInfo m3403_MI;
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
extern MethodInfo m2698_MI;
extern "C" float m2698 (t28 * __this, int32_t p0, MethodInfo* method)
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
		t883 * L_5 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_5, (t2*) &_stringLiteral209, &m4252_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2709_MI;
extern "C" void m2709 (t28 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t883 * L_5 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_5, (t2*) &_stringLiteral209, &m4252_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0037:
	{
		return;
	}
}
extern MethodInfo m2785_MI;
extern "C" t28  m2785 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern "C" void m3399 (t28 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = m1210(__this, &m1210_MI);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		t28  L_3 = m2751(NULL, (*(t28 *)__this), L_2, &m2751_MI);
		*__this = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		t28  L_4 = m1205(NULL, &m1205_MI);
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
		m3399((&V_0), &m3399_MI);
		t28  L_2 = V_0;
		return L_2;
	}
}
extern MethodInfo m3400_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3400 (t28 * __this, MethodInfo* method)
{
	static bool m3400_init;
	if (!m3400_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3400_init = true;
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
		t2* L_8 = m3587(NULL, (t2*) &_stringLiteral210, L_4, &m3587_MI);
		return L_8;
	}
}
extern "C" int32_t m3401 (t28 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4230(L_0, &m4230_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4230(L_2, &m4230_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3402_MI;
extern "C" bool m3402 (t28 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4253(L_2, L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4253(L_5, L_6, &m4253_MI);
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
extern MethodInfo m2530_MI;
extern "C" float m2530 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p1)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m1210 (t28 * __this, MethodInfo* method)
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
extern MethodInfo m2490_MI;
extern "C" float m2490 (t28 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		float L_1 = (__this->f1);
		float L_2 = (__this->f2);
		float L_3 = (__this->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" float m3403 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f1);
		float L_2 = ((&p0)->f2);
		float L_3 = ((&p0)->f2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
extern "C" t28  m1205 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (0.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2694_MI;
extern "C" t28  m2694 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (1.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2934_MI;
extern "C" t28  m2934 (t9 * __this , MethodInfo* method)
{
	{
		t28  L_0 = {0};
		m392(&L_0, (0.0f), (1.0f), &m392_MI);
		return L_0;
	}
}
extern MethodInfo m2697_MI;
extern "C" t28  m2697 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern "C" t28  m1208 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
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
extern MethodInfo m2695_MI;
extern "C" t28  m2695 (t9 * __this , t28  p0, float p1, MethodInfo* method)
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
extern "C" t28  m2751 (t9 * __this , t28  p0, float p1, MethodInfo* method)
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
extern "C" bool m2991 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1208(NULL, L_0, L_1, &m1208_MI);
		float L_3 = m3403(NULL, L_2, &m3403_MI);
		return ((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
extern MethodInfo m2777_MI;
extern "C" bool m2777 (t9 * __this , t28  p0, t28  p1, MethodInfo* method)
{
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		t28  L_2 = m1208(NULL, L_0, L_1, &m1208_MI);
		float L_3 = m3403(NULL, L_2, &m3403_MI);
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
extern MethodInfo m3407_MI;
extern MethodInfo m2671_MI;
extern MethodInfo m334_MI;
extern MethodInfo m3404_MI;
extern MethodInfo m352_MI;
extern MethodInfo m3410_MI;
extern MethodInfo m635_MI;
extern MethodInfo m476_MI;
extern MethodInfo m475_MI;
extern MethodInfo m458_MI;
extern MethodInfo m353_MI;
extern MethodInfo m3411_MI;
extern MethodInfo m354_MI;
extern MethodInfo m4254_MI;
extern MethodInfo m2868_MI;
extern MethodInfo m386_MI;
extern MethodInfo m3412_MI;


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
		float L_1 = m2671(NULL, L_0, &m2671_MI);
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
		t13  L_7 = m3404(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m3404_MI);
		return L_7;
	}
}
extern "C" t13  m3404 (t9 * __this , t13  p0, t13  p1, t13 * p2, float p3, float p4, float p5, MethodInfo* method)
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
		t13  L_19 = m3410(NULL, L_17, L_18, &m3410_MI);
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
extern MethodInfo m2840_MI;
extern "C" float m2840 (t13 * __this, int32_t p0, MethodInfo* method)
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
		t883 * L_5 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_5, (t2*) &_stringLiteral211, &m4252_MI);
		il2cpp_codegen_raise_exception(L_5);
	}
}
extern MethodInfo m2841_MI;
extern "C" void m2841 (t13 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t883 * L_5 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_5, (t2*) &_stringLiteral211, &m4252_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		return;
	}
}
extern MethodInfo m3405_MI;
extern "C" int32_t m3405 (t13 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4230(L_0, &m4230_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4230(L_2, &m4230_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4230(L_4, &m4230_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
extern MethodInfo m3406_MI;
extern "C" bool m3406 (t13 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4253(L_2, L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4253(L_5, L_6, &m4253_MI);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4253(L_8, L_9, &m4253_MI);
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
extern "C" t13  m3407 (t9 * __this , t13  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		t13  L_0 = p0;
		float L_1 = m3411(NULL, L_0, &m3411_MI);
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
		t13  L_0 = m3407(NULL, (*(t13 *)__this), &m3407_MI);
		return L_0;
	}
}
extern MethodInfo m3408_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3408 (t13 * __this, MethodInfo* method)
{
	static bool m3408_init;
	if (!m3408_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3408_init = true;
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
		t2* L_12 = m3587(NULL, (t2*) &_stringLiteral212, L_8, &m3587_MI);
		return L_12;
	}
}
extern MethodInfo m3409_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3409 (t13 * __this, t2* p0, MethodInfo* method)
{
	static bool m3409_init;
	if (!m3409_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3409_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		float* L_1 = &(__this->f1);
		t2* L_2 = p0;
		t2* L_3 = m4254(L_1, L_2, &m4254_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f2);
		t2* L_6 = p0;
		t2* L_7 = m4254(L_5, L_6, &m4254_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f3);
		t2* L_10 = p0;
		t2* L_11 = m4254(L_9, L_10, &m4254_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t2* L_12 = m3587(NULL, (t2*) &_stringLiteral213, L_8, &m3587_MI);
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
extern MethodInfo m2551_MI;
extern "C" float m2551 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
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
extern "C" t13  m3410 (t9 * __this , t13  p0, float p1, MethodInfo* method)
{
	{
		float L_0 = m2868((&p0), &m2868_MI);
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
extern "C" float m3411 (t9 * __this , t13  p0, MethodInfo* method)
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
extern "C" float m3412 (t9 * __this , t13  p0, MethodInfo* method)
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
extern "C" float m2868 (t13 * __this, MethodInfo* method)
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
extern MethodInfo m2850_MI;
extern "C" t13  m2850 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p1)->f1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_2 = m2923(NULL, L_0, L_1, &m2923_MI);
		float L_3 = ((&p0)->f2);
		float L_4 = ((&p1)->f2);
		float L_5 = m2923(NULL, L_3, L_4, &m2923_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = ((&p1)->f3);
		float L_8 = m2923(NULL, L_6, L_7, &m2923_MI);
		t13  L_9 = {0};
		m357(&L_9, L_2, L_5, L_8, &m357_MI);
		return L_9;
	}
}
extern MethodInfo m2851_MI;
extern "C" t13  m2851 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
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
extern MethodInfo m3413_MI;
extern "C" t13  m3413 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m2872_MI;
extern "C" t13  m2872 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (0.0f), (-1.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2870_MI;
extern "C" t13  m2870 (t9 * __this , MethodInfo* method)
{
	{
		t13  L_0 = {0};
		m357(&L_0, (-1.0f), (0.0f), (0.0f), &m357_MI);
		return L_0;
	}
}
extern MethodInfo m2871_MI;
extern "C" t13  m2871 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m3414_MI;
extern "C" bool m3414 (t9 * __this , t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = p1;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		float L_3 = m3412(NULL, L_2, &m3412_MI);
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
		float L_3 = m3412(NULL, L_2, &m3412_MI);
		return ((((int32_t)((!(((float)L_3) >= ((float)(9.99999944E-11f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m638_MI;
extern MethodInfo m3419_MI;
extern MethodInfo m3491_MI;


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
extern "C" void m3415 (t43 * __this, float p0, float p1, float p2, MethodInfo* method)
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
extern MethodInfo m3416_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3416 (t43 * __this, MethodInfo* method)
{
	static bool m3416_init;
	if (!m3416_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3416_init = true;
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
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral214, L_12, &m3587_MI);
		return L_16;
	}
}
extern MethodInfo m3417_MI;
extern "C" int32_t m3417 (t43 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	{
		t47  L_0 = m3419(NULL, (*(t43 *)__this), &m3419_MI);
		V_0 = L_0;
		int32_t L_1 = m3491((&V_0), &m3491_MI);
		return L_1;
	}
}
extern MethodInfo m2630_MI;
extern "C" bool m2630 (t43 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4253(L_2, L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f1);
		float L_6 = ((&V_0)->f1);
		bool L_7 = m4253(L_5, L_6, &m4253_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f2);
		float L_9 = ((&V_0)->f2);
		bool L_10 = m4253(L_8, L_9, &m4253_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f3);
		float L_12 = ((&V_0)->f3);
		bool L_13 = m4253(L_11, L_12, &m4253_MI);
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
extern MethodInfo m2565_MI;
extern "C" t43  m2565 (t9 * __this , t43  p0, t43  p1, float p2, MethodInfo* method)
{
	{
		float L_0 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2671(NULL, L_0, &m2671_MI);
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
extern "C" t43  m3418 (t9 * __this , MethodInfo* method)
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
extern "C" t43  m2604 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m2864_MI;
extern "C" t43  m2864 (t9 * __this , t43  p0, float p1, MethodInfo* method)
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
extern "C" t47  m3419 (t9 * __this , t43  p0, MethodInfo* method)
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
#include "t559.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t559_TI;
#include "t559MD.h"

#include "t575.h"
extern TypeInfo t575_TI;
extern MethodInfo m2586_MI;


extern "C" void m2586 (t559 * __this, uint8_t p0, uint8_t p1, uint8_t p2, uint8_t p3, MethodInfo* method)
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
extern MethodInfo m3420_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3420 (t559 * __this, MethodInfo* method)
{
	static bool m3420_init;
	if (!m3420_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3420_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		uint8_t L_1 = (__this->f0);
		uint8_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t575_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		uint8_t L_5 = (__this->f1);
		uint8_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t575_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint8_t L_9 = (__this->f2);
		uint8_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t575_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		uint8_t L_13 = (__this->f3);
		uint8_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t575_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral215, L_12, &m3587_MI);
		return L_16;
	}
}
extern MethodInfo m2622_MI;
extern "C" t559  m2622 (t9 * __this , t43  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		float L_1 = m2671(NULL, L_0, &m2671_MI);
		float L_2 = ((&p0)->f1);
		float L_3 = m2671(NULL, L_2, &m2671_MI);
		float L_4 = ((&p0)->f2);
		float L_5 = m2671(NULL, L_4, &m2671_MI);
		float L_6 = ((&p0)->f3);
		float L_7 = m2671(NULL, L_6, &m2671_MI);
		t559  L_8 = {0};
		m2586(&L_8, (((uint8_t)((float)((float)L_1*(float)(255.0f))))), (((uint8_t)((float)((float)L_3*(float)(255.0f))))), (((uint8_t)((float)((float)L_5*(float)(255.0f))))), (((uint8_t)((float)((float)L_7*(float)(255.0f))))), &m2586_MI);
		return L_8;
	}
}
extern MethodInfo m2587_MI;
extern "C" t43  m2587 (t9 * __this , t559  p0, MethodInfo* method)
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

extern MethodInfo m1109_MI;
extern MethodInfo m3427_MI;
extern MethodInfo m3422_MI;
extern MethodInfo m3423_MI;
extern MethodInfo m3429_MI;
extern MethodInfo m3428_MI;
extern MethodInfo m3430_MI;
extern MethodInfo m3421_MI;


extern "C" void m1109 (t93 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
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
extern MethodInfo m1059_MI;
extern "C" t93  m1059 (t9 * __this , MethodInfo* method)
{
	{
		t93  L_0 = {0};
		m1109(&L_0, (0.0f), (0.0f), (0.0f), (1.0f), &m1109_MI);
		return L_0;
	}
}
extern "C" float m3421 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
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
		t93  L_1 = m3422(NULL, (&p0), (&V_0), &m3422_MI);
		return L_1;
	}
}
extern "C" t93  m3422 (t9 * __this , t13 * p0, t13 * p1, MethodInfo* method)
{
	typedef t93  (*m3422_ftn) (t13 *, t13 *);
	static m3422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3422_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2865_MI;
extern "C" t93  m2865 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3423(NULL, (&p0), &m3423_MI);
		return L_0;
	}
}
extern "C" t93  m3423 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t93  (*m3423_ftn) (t93 *);
	static m3423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3424_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3424 (t93 * __this, MethodInfo* method)
{
	static bool m3424_init;
	if (!m3424_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3424_init = true;
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
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral216, L_12, &m3587_MI);
		return L_16;
	}
}
extern MethodInfo m3425_MI;
extern "C" t13  m3425 (t93 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m3427(NULL, (*(t93 *)__this), &m3427_MI);
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
		t93  L_5 = m3429(NULL, L_4, &m3429_MI);
		return L_5;
	}
}
extern MethodInfo m3426_MI;
extern "C" t93  m3426 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.0174532924f), &m475_MI);
		t93  L_2 = m3429(NULL, L_1, &m3429_MI);
		return L_2;
	}
}
extern "C" t13  m3427 (t9 * __this , t93  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3428(NULL, (&p0), &m3428_MI);
		return L_0;
	}
}
extern "C" t13  m3428 (t9 * __this , t93 * p0, MethodInfo* method)
{
	typedef t13  (*m3428_ftn) (t93 *);
	static m3428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3428_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t93  m3429 (t9 * __this , t13  p0, MethodInfo* method)
{
	{
		t93  L_0 = m3430(NULL, (&p0), &m3430_MI);
		return L_0;
	}
}
extern "C" t93  m3430 (t9 * __this , t13 * p0, MethodInfo* method)
{
	typedef t93  (*m3430_ftn) (t13 *);
	static m3430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3431_MI;
extern "C" int32_t m3431 (t93 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4230(L_0, &m4230_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4230(L_2, &m4230_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4230(L_4, &m4230_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4230(L_6, &m4230_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3432_MI;
extern "C" bool m3432 (t93 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4253(L_2, L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4253(L_5, L_6, &m4253_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4253(L_8, L_9, &m4253_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4253(L_11, L_12, &m4253_MI);
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
		m1109(&L_32, ((float)((float)((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8*(float)L_9))+(float)((float)((float)L_10*(float)L_11))))+(float)((float)((float)L_12*(float)L_13))))-(float)((float)((float)L_14*(float)L_15)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_16*(float)L_17))+(float)((float)((float)L_18*(float)L_19))))+(float)((float)((float)L_20*(float)L_21))))-(float)((float)((float)L_22*(float)L_23)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_24*(float)L_25))-(float)((float)((float)L_26*(float)L_27))))-(float)((float)((float)L_28*(float)L_29))))-(float)((float)((float)L_30*(float)L_31)))), &m1109_MI);
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
extern MethodInfo m2776_MI;
extern "C" bool m2776 (t9 * __this , t93  p0, t93  p1, MethodInfo* method)
{
	{
		t93  L_0 = p0;
		t93  L_1 = p1;
		float L_2 = m3421(NULL, L_0, L_1, &m3421_MI);
		return ((((int32_t)((!(((float)L_2) <= ((float)(0.999999f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m2719_MI;
extern MethodInfo m2718_MI;


extern "C" void m2821 (t441 * __this, float p0, float p1, float p2, float p3, MethodInfo* method)
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
extern "C" float m2620 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2687 (t441 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" float m2621 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m2685 (t441 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m2696_MI;
extern "C" t28  m2696 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		float L_1 = (__this->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern MethodInfo m2826_MI;
extern "C" t28  m2826 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = m2620(__this, &m2620_MI);
		float L_1 = (__this->f2);
		float L_2 = m2621(__this, &m2621_MI);
		float L_3 = (__this->f3);
		t28  L_4 = {0};
		m392(&L_4, ((float)((float)L_0+(float)((float)((float)L_1/(float)(2.0f))))), ((float)((float)L_2+(float)((float)((float)L_3/(float)(2.0f))))), &m392_MI);
		return L_4;
	}
}
extern "C" float m2615 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m2686 (t441 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" float m2616 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m2683 (t441 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m2679_MI;
extern "C" t28  m2679 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f3);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
extern "C" float m2719 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m2718 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" float m2704 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		float L_1 = (__this->f0);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern "C" float m2706 (t441 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		float L_1 = (__this->f1);
		return ((float)((float)L_0+(float)L_1));
	}
}
extern MethodInfo m3433_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3433 (t441 * __this, MethodInfo* method)
{
	static bool m3433_init;
	if (!m3433_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3433_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		float L_1 = m2620(__this, &m2620_MI);
		float L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t123_TI), &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float L_5 = m2621(__this, &m2621_MI);
		float L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t123_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float L_9 = m2615(__this, &m2615_MI);
		float L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t123_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float L_13 = m2616(__this, &m2616_MI);
		float L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t123_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral217, L_12, &m3587_MI);
		return L_16;
	}
}
extern MethodInfo m3434_MI;
extern "C" bool m3434 (t441 * __this, t13  p0, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = ((&p0)->f1);
		float L_1 = m2719(__this, &m2719_MI);
		if ((!(((float)L_0) >= ((float)L_1))))
		{
			goto IL_0047;
		}
	}
	{
		float L_2 = ((&p0)->f1);
		float L_3 = m2704(__this, &m2704_MI);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		float L_4 = ((&p0)->f2);
		float L_5 = m2718(__this, &m2718_MI);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0047;
		}
	}
	{
		float L_6 = ((&p0)->f2);
		float L_7 = m2706(__this, &m2706_MI);
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
extern MethodInfo m3435_MI;
extern "C" int32_t m3435 (t441 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0 = m2620(__this, &m2620_MI);
		V_0 = L_0;
		int32_t L_1 = m4230((&V_0), &m4230_MI);
		float L_2 = m2615(__this, &m2615_MI);
		V_1 = L_2;
		int32_t L_3 = m4230((&V_1), &m4230_MI);
		float L_4 = m2621(__this, &m2621_MI);
		V_2 = L_4;
		int32_t L_5 = m4230((&V_2), &m4230_MI);
		float L_6 = m2616(__this, &m2616_MI);
		V_3 = L_6;
		int32_t L_7 = m4230((&V_3), &m4230_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3436_MI;
extern "C" bool m3436 (t441 * __this, t9 * p0, MethodInfo* method)
{
	t441  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t G_B7_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t441_TI))))
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
		V_0 = ((*(t441 *)((t441 *)UnBox (L_1, InitializedTypeInfo(&t441_TI)))));
		float L_2 = m2620(__this, &m2620_MI);
		V_1 = L_2;
		float L_3 = m2620((&V_0), &m2620_MI);
		bool L_4 = m4253((&V_1), L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_007a;
		}
	}
	{
		float L_5 = m2621(__this, &m2621_MI);
		V_2 = L_5;
		float L_6 = m2621((&V_0), &m2621_MI);
		bool L_7 = m4253((&V_2), L_6, &m4253_MI);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		float L_8 = m2615(__this, &m2615_MI);
		V_3 = L_8;
		float L_9 = m2615((&V_0), &m2615_MI);
		bool L_10 = m4253((&V_3), L_9, &m4253_MI);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		float L_11 = m2616(__this, &m2616_MI);
		V_4 = L_11;
		float L_12 = m2616((&V_0), &m2616_MI);
		bool L_13 = m4253((&V_4), L_12, &m4253_MI);
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
extern MethodInfo m2820_MI;
extern "C" bool m2820 (t9 * __this , t441  p0, t441  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		float L_0 = m2620((&p0), &m2620_MI);
		float L_1 = m2620((&p1), &m2620_MI);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_004b;
		}
	}
	{
		float L_2 = m2621((&p0), &m2621_MI);
		float L_3 = m2621((&p1), &m2621_MI);
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_004b;
		}
	}
	{
		float L_4 = m2615((&p0), &m2615_MI);
		float L_5 = m2615((&p1), &m2615_MI);
		if ((!(((float)L_4) == ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_6 = m2616((&p0), &m2616_MI);
		float L_7 = m2616((&p1), &m2616_MI);
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
extern MethodInfo m3441_MI;
extern MethodInfo m3443_MI;
extern MethodInfo m3449_MI;
extern MethodInfo m3442_MI;
extern MethodInfo m3444_MI;
extern MethodInfo m3446_MI;
extern MethodInfo m3437_MI;
extern MethodInfo m3438_MI;
extern MethodInfo m3456_MI;
extern MethodInfo m3457_MI;
extern MethodInfo m3462_MI;


extern "C" float m3437 (t46 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		float L_2 = m472(__this, ((int32_t)((int32_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)4)))), &m472_MI);
		return L_2;
	}
}
extern "C" void m3438 (t46 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
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
		t883 * L_18 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_18, (t2*) &_stringLiteral218, &m4252_MI);
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
		t883 * L_18 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_18, (t2*) &_stringLiteral218, &m4252_MI);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0118:
	{
		return;
	}
}
extern MethodInfo m3439_MI;
extern "C" int32_t m3439 (t46 * __this, MethodInfo* method)
{
	t47  V_0 = {0};
	t47  V_1 = {0};
	t47  V_2 = {0};
	t47  V_3 = {0};
	{
		t47  L_0 = m3449(__this, 0, &m3449_MI);
		V_0 = L_0;
		int32_t L_1 = m3491((&V_0), &m3491_MI);
		t47  L_2 = m3449(__this, 1, &m3449_MI);
		V_1 = L_2;
		int32_t L_3 = m3491((&V_1), &m3491_MI);
		t47  L_4 = m3449(__this, 2, &m3449_MI);
		V_2 = L_4;
		int32_t L_5 = m3491((&V_2), &m3491_MI);
		t47  L_6 = m3449(__this, 3, &m3449_MI);
		V_3 = L_6;
		int32_t L_7 = m3491((&V_3), &m3491_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern MethodInfo m3440_MI;
extern "C" bool m3440 (t46 * __this, t9 * p0, MethodInfo* method)
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
		t47  L_2 = m3449(__this, 0, &m3449_MI);
		V_1 = L_2;
		t47  L_3 = m3449((&V_0), 0, &m3449_MI);
		t47  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t47_TI), &L_4);
		bool L_6 = m3492((&V_1), L_5, &m3492_MI);
		if (!L_6)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_7 = m3449(__this, 1, &m3449_MI);
		V_2 = L_7;
		t47  L_8 = m3449((&V_0), 1, &m3449_MI);
		t47  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t47_TI), &L_9);
		bool L_11 = m3492((&V_2), L_10, &m3492_MI);
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_12 = m3449(__this, 2, &m3449_MI);
		V_3 = L_12;
		t47  L_13 = m3449((&V_0), 2, &m3449_MI);
		t47  L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t47_TI), &L_14);
		bool L_16 = m3492((&V_3), L_15, &m3492_MI);
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		t47  L_17 = m3449(__this, 3, &m3449_MI);
		V_4 = L_17;
		t47  L_18 = m3449((&V_0), 3, &m3449_MI);
		t47  L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t47_TI), &L_19);
		bool L_21 = m3492((&V_4), L_20, &m3492_MI);
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
extern "C" t46  m3441 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3442(NULL, (&p0), &m3442_MI);
		return L_0;
	}
}
extern "C" t46  m3442 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3442_ftn) (t46 *);
	static m3442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern "C" t46  m3443 (t9 * __this , t46  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3444(NULL, (&p0), &m3444_MI);
		return L_0;
	}
}
extern "C" t46  m3444 (t9 * __this , t46 * p0, MethodInfo* method)
{
	typedef t46  (*m3444_ftn) (t46 *);
	static m3444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3445_MI;
extern "C" bool m3445 (t9 * __this , t46  p0, t46 * p1, MethodInfo* method)
{
	{
		t46 * L_0 = p1;
		bool L_1 = m3446(NULL, (&p0), L_0, &m3446_MI);
		return L_1;
	}
}
extern "C" bool m3446 (t9 * __this , t46 * p0, t46 * p1, MethodInfo* method)
{
	typedef bool (*m3446_ftn) (t46 *, t46 *);
	static m3446_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3446_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m469_MI;
extern "C" t46  m469 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3441(NULL, (*(t46 *)__this), &m3441_MI);
		return L_0;
	}
}
extern MethodInfo m3447_MI;
extern "C" t46  m3447 (t46 * __this, MethodInfo* method)
{
	{
		t46  L_0 = m3443(NULL, (*(t46 *)__this), &m3443_MI);
		return L_0;
	}
}
extern MethodInfo m3448_MI;
extern "C" bool m3448 (t46 * __this, MethodInfo* method)
{
	typedef bool (*m3448_ftn) (t46 *);
	static m3448_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3448_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::get_isIdentity()");
	return _il2cpp_icall_func(__this);
}
extern "C" t47  m3449 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3437(__this, 0, L_0, &m3437_MI);
		int32_t L_2 = p0;
		float L_3 = m3437(__this, 1, L_2, &m3437_MI);
		int32_t L_4 = p0;
		float L_5 = m3437(__this, 2, L_4, &m3437_MI);
		int32_t L_6 = p0;
		float L_7 = m3437(__this, 3, L_6, &m3437_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3450_MI;
extern "C" t47  m3450 (t46 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = m3437(__this, L_0, 0, &m3437_MI);
		int32_t L_2 = p0;
		float L_3 = m3437(__this, L_2, 1, &m3437_MI);
		int32_t L_4 = p0;
		float L_5 = m3437(__this, L_4, 2, &m3437_MI);
		int32_t L_6 = p0;
		float L_7 = m3437(__this, L_6, 3, &m3437_MI);
		t47  L_8 = {0};
		m413(&L_8, L_1, L_3, L_5, L_7, &m413_MI);
		return L_8;
	}
}
extern MethodInfo m3451_MI;
extern "C" void m3451 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3438(__this, 0, L_0, L_1, &m3438_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3438(__this, 1, L_2, L_3, &m3438_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3438(__this, 2, L_4, L_5, &m3438_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3438(__this, 3, L_6, L_7, &m3438_MI);
		return;
	}
}
extern MethodInfo m3452_MI;
extern "C" void m3452 (t46 * __this, int32_t p0, t47  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		float L_1 = ((&p1)->f1);
		m3438(__this, L_0, 0, L_1, &m3438_MI);
		int32_t L_2 = p0;
		float L_3 = ((&p1)->f2);
		m3438(__this, L_2, 1, L_3, &m3438_MI);
		int32_t L_4 = p0;
		float L_5 = ((&p1)->f3);
		m3438(__this, L_4, 2, L_5, &m3438_MI);
		int32_t L_6 = p0;
		float L_7 = ((&p1)->f4);
		m3438(__this, L_6, 3, L_7, &m3438_MI);
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
extern MethodInfo m2849_MI;
extern "C" t13  m2849 (t46 * __this, t13  p0, MethodInfo* method)
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
extern MethodInfo m3453_MI;
extern "C" t46  m3453 (t9 * __this , t13  p0, MethodInfo* method)
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
extern MethodInfo m3454_MI;
extern "C" t46  m3454 (t9 * __this , MethodInfo* method)
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
extern MethodInfo m3455_MI;
extern "C" void m3455 (t46 * __this, t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = p1;
		t13  L_2 = p2;
		t46  L_3 = m3456(NULL, L_0, L_1, L_2, &m3456_MI);
		*__this = L_3;
		return;
	}
}
extern "C" t46  m3456 (t9 * __this , t13  p0, t93  p1, t13  p2, MethodInfo* method)
{
	{
		t46  L_0 = m3457(NULL, (&p0), (&p1), (&p2), &m3457_MI);
		return L_0;
	}
}
extern "C" t46  m3457 (t9 * __this , t13 * p0, t93 * p1, t13 * p2, MethodInfo* method)
{
	typedef t46  (*m3457_ftn) (t13 *, t93 *, t13 *);
	static m3457_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3457_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3458_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3458 (t46 * __this, MethodInfo* method)
{
	static bool m3458_init;
	if (!m3458_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3458_init = true;
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
		t2* L_64 = m3587(NULL, (t2*) &_stringLiteral219, L_60, &m3587_MI);
		return L_64;
	}
}
extern MethodInfo m3459_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3459 (t46 * __this, t2* p0, MethodInfo* method)
{
	static bool m3459_init;
	if (!m3459_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3459_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)16)));
		float* L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m4254(L_1, L_2, &m4254_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		float* L_5 = &(__this->f4);
		t2* L_6 = p0;
		t2* L_7 = m4254(L_5, L_6, &m4254_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t158* L_8 = L_4;
		float* L_9 = &(__this->f8);
		t2* L_10 = p0;
		t2* L_11 = m4254(L_9, L_10, &m4254_MI);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 2)) = (t9 *)L_11;
		t158* L_12 = L_8;
		float* L_13 = &(__this->f12);
		t2* L_14 = p0;
		t2* L_15 = m4254(L_13, L_14, &m4254_MI);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t158* L_16 = L_12;
		float* L_17 = &(__this->f1);
		t2* L_18 = p0;
		t2* L_19 = m4254(L_17, L_18, &m4254_MI);
		ArrayElementTypeCheck (L_16, L_19);
		*((t9 **)(t9 **)SZArrayLdElema(L_16, 4)) = (t9 *)L_19;
		t158* L_20 = L_16;
		float* L_21 = &(__this->f5);
		t2* L_22 = p0;
		t2* L_23 = m4254(L_21, L_22, &m4254_MI);
		ArrayElementTypeCheck (L_20, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(L_20, 5)) = (t9 *)L_23;
		t158* L_24 = L_20;
		float* L_25 = &(__this->f9);
		t2* L_26 = p0;
		t2* L_27 = m4254(L_25, L_26, &m4254_MI);
		ArrayElementTypeCheck (L_24, L_27);
		*((t9 **)(t9 **)SZArrayLdElema(L_24, 6)) = (t9 *)L_27;
		t158* L_28 = L_24;
		float* L_29 = &(__this->f13);
		t2* L_30 = p0;
		t2* L_31 = m4254(L_29, L_30, &m4254_MI);
		ArrayElementTypeCheck (L_28, L_31);
		*((t9 **)(t9 **)SZArrayLdElema(L_28, 7)) = (t9 *)L_31;
		t158* L_32 = L_28;
		float* L_33 = &(__this->f2);
		t2* L_34 = p0;
		t2* L_35 = m4254(L_33, L_34, &m4254_MI);
		ArrayElementTypeCheck (L_32, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_32, 8)) = (t9 *)L_35;
		t158* L_36 = L_32;
		float* L_37 = &(__this->f6);
		t2* L_38 = p0;
		t2* L_39 = m4254(L_37, L_38, &m4254_MI);
		ArrayElementTypeCheck (L_36, L_39);
		*((t9 **)(t9 **)SZArrayLdElema(L_36, ((int32_t)9))) = (t9 *)L_39;
		t158* L_40 = L_36;
		float* L_41 = &(__this->f10);
		t2* L_42 = p0;
		t2* L_43 = m4254(L_41, L_42, &m4254_MI);
		ArrayElementTypeCheck (L_40, L_43);
		*((t9 **)(t9 **)SZArrayLdElema(L_40, ((int32_t)10))) = (t9 *)L_43;
		t158* L_44 = L_40;
		float* L_45 = &(__this->f14);
		t2* L_46 = p0;
		t2* L_47 = m4254(L_45, L_46, &m4254_MI);
		ArrayElementTypeCheck (L_44, L_47);
		*((t9 **)(t9 **)SZArrayLdElema(L_44, ((int32_t)11))) = (t9 *)L_47;
		t158* L_48 = L_44;
		float* L_49 = &(__this->f3);
		t2* L_50 = p0;
		t2* L_51 = m4254(L_49, L_50, &m4254_MI);
		ArrayElementTypeCheck (L_48, L_51);
		*((t9 **)(t9 **)SZArrayLdElema(L_48, ((int32_t)12))) = (t9 *)L_51;
		t158* L_52 = L_48;
		float* L_53 = &(__this->f7);
		t2* L_54 = p0;
		t2* L_55 = m4254(L_53, L_54, &m4254_MI);
		ArrayElementTypeCheck (L_52, L_55);
		*((t9 **)(t9 **)SZArrayLdElema(L_52, ((int32_t)13))) = (t9 *)L_55;
		t158* L_56 = L_52;
		float* L_57 = &(__this->f11);
		t2* L_58 = p0;
		t2* L_59 = m4254(L_57, L_58, &m4254_MI);
		ArrayElementTypeCheck (L_56, L_59);
		*((t9 **)(t9 **)SZArrayLdElema(L_56, ((int32_t)14))) = (t9 *)L_59;
		t158* L_60 = L_56;
		float* L_61 = &(__this->f15);
		t2* L_62 = p0;
		t2* L_63 = m4254(L_61, L_62, &m4254_MI);
		ArrayElementTypeCheck (L_60, L_63);
		*((t9 **)(t9 **)SZArrayLdElema(L_60, ((int32_t)15))) = (t9 *)L_63;
		t2* L_64 = m3587(NULL, (t2*) &_stringLiteral220, L_60, &m3587_MI);
		return L_64;
	}
}
extern MethodInfo m3460_MI;
extern "C" t46  m3460 (t9 * __this , float p0, float p1, float p2, float p3, float p4, float p5, MethodInfo* method)
{
	typedef t46  (*m3460_ftn) (float, float, float, float, float, float);
	static m3460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m3461_MI;
extern "C" t46  m3461 (t9 * __this , float p0, float p1, float p2, float p3, MethodInfo* method)
{
	typedef t46  (*m3461_ftn) (float, float, float, float);
	static m3461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)");
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
extern "C" bool m3462 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		t47  L_0 = m3449((&p0), 0, &m3449_MI);
		t47  L_1 = m3449((&p1), 0, &m3449_MI);
		bool L_2 = m3496(NULL, L_0, L_1, &m3496_MI);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_3 = m3449((&p0), 1, &m3449_MI);
		t47  L_4 = m3449((&p1), 1, &m3449_MI);
		bool L_5 = m3496(NULL, L_3, L_4, &m3496_MI);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_6 = m3449((&p0), 2, &m3449_MI);
		t47  L_7 = m3449((&p1), 2, &m3449_MI);
		bool L_8 = m3496(NULL, L_6, L_7, &m3496_MI);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		t47  L_9 = m3449((&p0), 3, &m3449_MI);
		t47  L_10 = m3449((&p1), 3, &m3449_MI);
		bool L_11 = m3496(NULL, L_9, L_10, &m3496_MI);
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
extern MethodInfo m3463_MI;
extern "C" bool m3463 (t9 * __this , t46  p0, t46  p1, MethodInfo* method)
{
	{
		t46  L_0 = p0;
		t46  L_1 = p1;
		bool L_2 = m3462(NULL, L_0, L_1, &m3462_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t497.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t497_TI;
#include "t497MD.h"

#include "t74.h"
extern MethodInfo m2844_MI;
extern MethodInfo m3466_MI;
extern MethodInfo m2853_MI;
extern MethodInfo m3470_MI;
extern MethodInfo m2835_MI;
extern MethodInfo m3467_MI;
extern MethodInfo m2846_MI;
extern MethodInfo m2852_MI;
extern MethodInfo m3476_MI;
extern MethodInfo m3475_MI;
extern MethodInfo m3479_MI;
extern MethodInfo m3478_MI;
extern MethodInfo m3482_MI;
extern MethodInfo m3481_MI;
extern MethodInfo m3486_MI;
extern MethodInfo m3485_MI;
extern MethodInfo m3490_MI;


extern MethodInfo m2843_MI;
extern "C" void m2843 (t497 * __this, t13  p0, t13  p1, MethodInfo* method)
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
extern MethodInfo m3464_MI;
extern "C" int32_t m3464 (t497 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	t13  V_1 = {0};
	{
		t13  L_0 = m2844(__this, &m2844_MI);
		V_0 = L_0;
		int32_t L_1 = m3405((&V_0), &m3405_MI);
		t13  L_2 = m3466(__this, &m3466_MI);
		V_1 = L_2;
		int32_t L_3 = m3405((&V_1), &m3405_MI);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
extern MethodInfo m3465_MI;
extern "C" bool m3465 (t497 * __this, t9 * p0, MethodInfo* method)
{
	t497  V_0 = {0};
	t13  V_1 = {0};
	t13  V_2 = {0};
	int32_t G_B5_0 = 0;
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t497_TI))))
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
		V_0 = ((*(t497 *)((t497 *)UnBox (L_1, InitializedTypeInfo(&t497_TI)))));
		t13  L_2 = m2844(__this, &m2844_MI);
		V_1 = L_2;
		t13  L_3 = m2844((&V_0), &m2844_MI);
		t13  L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t13_TI), &L_4);
		bool L_6 = m3406((&V_1), L_5, &m3406_MI);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		t13  L_7 = m3466(__this, &m3466_MI);
		V_2 = L_7;
		t13  L_8 = m3466((&V_0), &m3466_MI);
		t13  L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t13_TI), &L_9);
		bool L_11 = m3406((&V_2), L_10, &m3406_MI);
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
extern "C" t13  m2844 (t497 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m2846 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m2834_MI;
extern "C" t13  m2834 (t497 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		t13  L_1 = m475(NULL, L_0, (2.0f), &m475_MI);
		return L_1;
	}
}
extern MethodInfo m2845_MI;
extern "C" void m2845 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m475(NULL, L_0, (0.5f), &m475_MI);
		__this->f1 = L_1;
		return;
	}
}
extern "C" t13  m3466 (t497 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3467 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t13  m2835 (t497 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2844(__this, &m2844_MI);
		t13  L_1 = m3466(__this, &m3466_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		return L_2;
	}
}
extern MethodInfo m3468_MI;
extern "C" void m3468 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m2853(__this, &m2853_MI);
		m3470(__this, L_0, L_1, &m3470_MI);
		return;
	}
}
extern "C" t13  m2853 (t497 * __this, MethodInfo* method)
{
	{
		t13  L_0 = m2844(__this, &m2844_MI);
		t13  L_1 = m3466(__this, &m3466_MI);
		t13  L_2 = m476(NULL, L_0, L_1, &m476_MI);
		return L_2;
	}
}
extern MethodInfo m3469_MI;
extern "C" void m3469 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2835(__this, &m2835_MI);
		t13  L_1 = p0;
		m3470(__this, L_0, L_1, &m3470_MI);
		return;
	}
}
extern "C" void m3470 (t497 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p1;
		t13  L_1 = p0;
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		t13  L_3 = m475(NULL, L_2, (0.5f), &m475_MI);
		m3467(__this, L_3, &m3467_MI);
		t13  L_4 = p0;
		t13  L_5 = m3466(__this, &m3466_MI);
		t13  L_6 = m476(NULL, L_4, L_5, &m476_MI);
		m2846(__this, L_6, &m2846_MI);
		return;
	}
}
extern "C" void m2852 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2835(__this, &m2835_MI);
		t13  L_1 = p0;
		t13  L_2 = m2850(NULL, L_0, L_1, &m2850_MI);
		t13  L_3 = m2853(__this, &m2853_MI);
		t13  L_4 = p0;
		t13  L_5 = m2851(NULL, L_3, L_4, &m2851_MI);
		m3470(__this, L_2, L_5, &m3470_MI);
		return;
	}
}
extern MethodInfo m3471_MI;
extern "C" void m3471 (t497 * __this, t497  p0, MethodInfo* method)
{
	{
		t13  L_0 = m2844((&p0), &m2844_MI);
		t13  L_1 = m3466((&p0), &m3466_MI);
		t13  L_2 = m352(NULL, L_0, L_1, &m352_MI);
		m2852(__this, L_2, &m2852_MI);
		t13  L_3 = m2844((&p0), &m2844_MI);
		t13  L_4 = m3466((&p0), &m3466_MI);
		t13  L_5 = m476(NULL, L_3, L_4, &m476_MI);
		m2852(__this, L_5, &m2852_MI);
		return;
	}
}
extern MethodInfo m3472_MI;
extern "C" void m3472 (t497 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		p0 = ((float)((float)L_0*(float)(0.5f)));
		t13  L_1 = m3466(__this, &m3466_MI);
		float L_2 = p0;
		float L_3 = p0;
		float L_4 = p0;
		t13  L_5 = {0};
		m357(&L_5, L_2, L_3, L_4, &m357_MI);
		t13  L_6 = m476(NULL, L_1, L_5, &m476_MI);
		m3467(__this, L_6, &m3467_MI);
		return;
	}
}
extern MethodInfo m3473_MI;
extern "C" void m3473 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3466(__this, &m3466_MI);
		t13  L_1 = p0;
		t13  L_2 = m475(NULL, L_1, (0.5f), &m475_MI);
		t13  L_3 = m476(NULL, L_0, L_2, &m476_MI);
		m3467(__this, L_3, &m3467_MI);
		return;
	}
}
extern MethodInfo m3474_MI;
extern "C" bool m3474 (t497 * __this, t497  p0, MethodInfo* method)
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
		t13  L_0 = m2835(__this, &m2835_MI);
		V_0 = L_0;
		float L_1 = ((&V_0)->f1);
		t13  L_2 = m2853((&p0), &m2853_MI);
		V_1 = L_2;
		float L_3 = ((&V_1)->f1);
		if ((!(((float)L_1) <= ((float)L_3))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_4 = m2853(__this, &m2853_MI);
		V_2 = L_4;
		float L_5 = ((&V_2)->f1);
		t13  L_6 = m2835((&p0), &m2835_MI);
		V_3 = L_6;
		float L_7 = ((&V_3)->f1);
		if ((!(((float)L_5) >= ((float)L_7))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_8 = m2835(__this, &m2835_MI);
		V_4 = L_8;
		float L_9 = ((&V_4)->f2);
		t13  L_10 = m2853((&p0), &m2853_MI);
		V_5 = L_10;
		float L_11 = ((&V_5)->f2);
		if ((!(((float)L_9) <= ((float)L_11))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_12 = m2853(__this, &m2853_MI);
		V_6 = L_12;
		float L_13 = ((&V_6)->f2);
		t13  L_14 = m2835((&p0), &m2835_MI);
		V_7 = L_14;
		float L_15 = ((&V_7)->f2);
		if ((!(((float)L_13) >= ((float)L_15))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_16 = m2835(__this, &m2835_MI);
		V_8 = L_16;
		float L_17 = ((&V_8)->f3);
		t13  L_18 = m2853((&p0), &m2853_MI);
		V_9 = L_18;
		float L_19 = ((&V_9)->f3);
		if ((!(((float)L_17) <= ((float)L_19))))
		{
			goto IL_00d6;
		}
	}
	{
		t13  L_20 = m2853(__this, &m2853_MI);
		V_10 = L_20;
		float L_21 = ((&V_10)->f3);
		t13  L_22 = m2835((&p0), &m2835_MI);
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
extern "C" bool m3475 (t9 * __this , t497  p0, t13  p1, MethodInfo* method)
{
	{
		bool L_0 = m3476(NULL, (&p0), (&p1), &m3476_MI);
		return L_0;
	}
}
extern "C" bool m3476 (t9 * __this , t497 * p0, t13 * p1, MethodInfo* method)
{
	typedef bool (*m3476_ftn) (t497 *, t13 *);
	static m3476_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3476_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3477_MI;
extern "C" bool m3477 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		bool L_1 = m3475(NULL, (*(t497 *)__this), L_0, &m3475_MI);
		return L_1;
	}
}
extern "C" float m3478 (t9 * __this , t497  p0, t13  p1, MethodInfo* method)
{
	{
		float L_0 = m3479(NULL, (&p0), (&p1), &m3479_MI);
		return L_0;
	}
}
extern "C" float m3479 (t9 * __this , t497 * p0, t13 * p1, MethodInfo* method)
{
	typedef float (*m3479_ftn) (t497 *, t13 *);
	static m3479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3480_MI;
extern "C" float m3480 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		float L_1 = m3478(NULL, (*(t497 *)__this), L_0, &m3478_MI);
		return L_1;
	}
}
extern "C" bool m3481 (t9 * __this , t74 * p0, t497 * p1, float* p2, MethodInfo* method)
{
	{
		t74 * L_0 = p0;
		t497 * L_1 = p1;
		float* L_2 = p2;
		bool L_3 = m3482(NULL, L_0, L_1, L_2, &m3482_MI);
		return L_3;
	}
}
extern "C" bool m3482 (t9 * __this , t74 * p0, t497 * p1, float* p2, MethodInfo* method)
{
	typedef bool (*m3482_ftn) (t74 *, t497 *, float*);
	static m3482_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3482_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3483_MI;
extern "C" bool m3483 (t497 * __this, t74  p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		bool L_0 = m3481(NULL, (&p0), __this, (&V_0), &m3481_MI);
		return L_0;
	}
}
extern MethodInfo m3484_MI;
extern "C" bool m3484 (t497 * __this, t74  p0, float* p1, MethodInfo* method)
{
	{
		float* L_0 = p1;
		bool L_1 = m3481(NULL, (&p0), __this, L_0, &m3481_MI);
		return L_1;
	}
}
extern "C" t13  m3485 (t9 * __this , t497 * p0, t13 * p1, MethodInfo* method)
{
	{
		t497 * L_0 = p0;
		t13 * L_1 = p1;
		t13  L_2 = m3486(NULL, L_0, L_1, &m3486_MI);
		return L_2;
	}
}
extern "C" t13  m3486 (t9 * __this , t497 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3486_ftn) (t497 *, t13 *);
	static m3486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3487_MI;
extern "C" t13  m3487 (t497 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3485(NULL, __this, (&p0), &m3485_MI);
		return L_0;
	}
}
extern MethodInfo m3488_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3488 (t497 * __this, MethodInfo* method)
{
	static bool m3488_init;
	if (!m3488_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3488_init = true;
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
		t2* L_8 = m3587(NULL, (t2*) &_stringLiteral221, L_4, &m3587_MI);
		return L_8;
	}
}
extern MethodInfo m3489_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3489 (t497 * __this, t2* p0, MethodInfo* method)
{
	static bool m3489_init;
	if (!m3489_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3489_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t13 * L_1 = &(__this->f0);
		t2* L_2 = p0;
		t2* L_3 = m3409(L_1, L_2, &m3409_MI);
		ArrayElementTypeCheck (L_0, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_3;
		t158* L_4 = L_0;
		t13 * L_5 = &(__this->f1);
		t2* L_6 = p0;
		t2* L_7 = m3409(L_5, L_6, &m3409_MI);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 1)) = (t9 *)L_7;
		t2* L_8 = m3587(NULL, (t2*) &_stringLiteral221, L_4, &m3587_MI);
		return L_8;
	}
}
extern "C" bool m3490 (t9 * __this , t497  p0, t497  p1, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t13  L_0 = m2844((&p0), &m2844_MI);
		t13  L_1 = m2844((&p1), &m2844_MI);
		bool L_2 = m3414(NULL, L_0, L_1, &m3414_MI);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		t13  L_3 = m3466((&p0), &m3466_MI);
		t13  L_4 = m3466((&p1), &m3466_MI);
		bool L_5 = m3414(NULL, L_3, L_4, &m3414_MI);
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
extern MethodInfo m2839_MI;
extern "C" bool m2839 (t9 * __this , t497  p0, t497  p1, MethodInfo* method)
{
	{
		t497  L_0 = p0;
		t497  L_1 = p1;
		bool L_2 = m3490(NULL, L_0, L_1, &m3490_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo m471_MI;
extern MethodInfo m3495_MI;
extern MethodInfo m3494_MI;


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
		t883 * L_6 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_6, (t2*) &_stringLiteral222, &m4252_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m2699_MI;
extern "C" void m2699 (t47 * __this, int32_t p0, float p1, MethodInfo* method)
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
		t883 * L_6 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_6, (t2*) &_stringLiteral222, &m4252_MI);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0058:
	{
		return;
	}
}
extern "C" int32_t m3491 (t47 * __this, MethodInfo* method)
{
	{
		float* L_0 = &(__this->f1);
		int32_t L_1 = m4230(L_0, &m4230_MI);
		float* L_2 = &(__this->f2);
		int32_t L_3 = m4230(L_2, &m4230_MI);
		float* L_4 = &(__this->f3);
		int32_t L_5 = m4230(L_4, &m4230_MI);
		float* L_6 = &(__this->f4);
		int32_t L_7 = m4230(L_6, &m4230_MI);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
extern "C" bool m3492 (t47 * __this, t9 * p0, MethodInfo* method)
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
		bool L_4 = m4253(L_2, L_3, &m4253_MI);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->f2);
		float L_6 = ((&V_0)->f2);
		bool L_7 = m4253(L_5, L_6, &m4253_MI);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->f3);
		float L_9 = ((&V_0)->f3);
		bool L_10 = m4253(L_8, L_9, &m4253_MI);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->f4);
		float L_12 = ((&V_0)->f4);
		bool L_13 = m4253(L_11, L_12, &m4253_MI);
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
extern MethodInfo m3493_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3493 (t47 * __this, MethodInfo* method)
{
	static bool m3493_init;
	if (!m3493_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3493_init = true;
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
		t2* L_16 = m3587(NULL, (t2*) &_stringLiteral216, L_12, &m3587_MI);
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
extern "C" float m3494 (t9 * __this , t47  p0, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p0;
		float L_2 = m471(NULL, L_0, L_1, &m471_MI);
		return L_2;
	}
}
extern MethodInfo m2674_MI;
extern "C" float m2674 (t47 * __this, MethodInfo* method)
{
	{
		float L_0 = m471(NULL, (*(t47 *)__this), (*(t47 *)__this), &m471_MI);
		return L_0;
	}
}
extern MethodInfo m2680_MI;
extern "C" t47  m2680 (t9 * __this , MethodInfo* method)
{
	{
		t47  L_0 = {0};
		m413(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), &m413_MI);
		return L_0;
	}
}
extern "C" t47  m3495 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
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
extern MethodInfo m2693_MI;
extern "C" t47  m2693 (t9 * __this , t47  p0, float p1, MethodInfo* method)
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
extern "C" bool m3496 (t9 * __this , t47  p0, t47  p1, MethodInfo* method)
{
	{
		t47  L_0 = p0;
		t47  L_1 = p1;
		t47  L_2 = m3495(NULL, L_0, L_1, &m3495_MI);
		float L_3 = m3494(NULL, L_2, &m3494_MI);
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
extern MethodInfo m3497_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3497 (t74 * __this, MethodInfo* method)
{
	static bool m3497_init;
	if (!m3497_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3497_init = true;
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
		t2* L_8 = m3587(NULL, (t2*) &_stringLiteral223, L_4, &m3587_MI);
		return L_8;
	}
}
#include "t592.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t592_TI;
#include "t592MD.h"

extern MethodInfo m3498_MI;
extern MethodInfo m3499_MI;
extern MethodInfo m2528_MI;


extern MethodInfo m2743_MI;
extern "C" void m2743 (t592 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = m3407(NULL, L_0, &m3407_MI);
		__this->f0 = L_1;
		t13  L_2 = p0;
		t13  L_3 = p1;
		float L_4 = m458(NULL, L_2, L_3, &m458_MI);
		__this->f1 = ((-L_4));
		return;
	}
}
extern "C" t13  m3498 (t592 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" float m3499 (t592 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2744_MI;
extern "C" bool m2744 (t592 * __this, t74  p0, float* p1, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		t13  L_0 = m564((&p0), &m564_MI);
		t13  L_1 = m3498(__this, &m3498_MI);
		float L_2 = m458(NULL, L_0, L_1, &m458_MI);
		V_0 = L_2;
		t13  L_3 = m563((&p0), &m563_MI);
		t13  L_4 = m3498(__this, &m3498_MI);
		float L_5 = m458(NULL, L_3, L_4, &m458_MI);
		float L_6 = m3499(__this, &m3499_MI);
		V_1 = ((float)((float)((-L_5))-(float)L_6));
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		bool L_8 = m2528(NULL, L_7, (0.0f), &m2528_MI);
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
#include "t721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t721_TI;
#include "t721MD.h"



extern MethodInfo m3500_MI;
extern "C" void m3500 (t9 * __this , MethodInfo* method)
{
	{
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f0 = (1.17549435E-38f);
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f1 = (1.401298E-45f);
		float L_0 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f1;
		((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f2 = ((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		return;
	}
}
#include "t129.h"
#ifndef _MSC_VER
#else
#endif

#include "t156.h"
#include "t160MD.h"
extern MethodInfo m4255_MI;
extern MethodInfo m4256_MI;
extern MethodInfo m4257_MI;
extern MethodInfo m4258_MI;
extern MethodInfo m4259_MI;
extern MethodInfo m4260_MI;
extern MethodInfo m4261_MI;
extern MethodInfo m4262_MI;
extern MethodInfo m4263_MI;
extern MethodInfo m4264_MI;
extern MethodInfo m412_MI;
extern MethodInfo m583_MI;
extern MethodInfo m2842_MI;
extern MethodInfo m2837_MI;
extern MethodInfo m2786_MI;


extern MethodInfo m3501_MI;
extern "C" void m3501 (t9 * __this , MethodInfo* method)
{
	float G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		bool L_0 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		float L_1 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f0;
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t721_TI));
		float L_2 = ((t721_SFs*)InitializedTypeInfo(&t721_TI)->static_fields)->f1;
		G_B3_0 = L_2;
	}

IL_001d:
	{
		((t129_SFs*)InitializedTypeInfo(&t129_TI)->static_fields)->f0 = G_B3_0;
		return;
	}
}
extern MethodInfo m2701_MI;
extern "C" float m2701 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = sin((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2700_MI;
extern "C" float m2700 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2930 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2923 (t9 * __this , float p0, float p1, MethodInfo* method)
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
extern "C" int32_t m2762 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern "C" int32_t m2760 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
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
extern MethodInfo m2838_MI;
extern "C" float m2838 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = pow((((double)L_0)), (((double)L_1)));
		return (((float)L_2));
	}
}
extern MethodInfo m2922_MI;
extern "C" float m2922 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		float L_1 = p1;
		double L_2 = m4261(NULL, (((double)L_0)), (((double)L_1)), &m4261_MI);
		return (((float)L_2));
	}
}
extern "C" float m2786 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = floor((((double)L_0)));
		return (((float)L_1));
	}
}
extern "C" float m2823 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((float)L_1));
	}
}
extern MethodInfo m2929_MI;
extern "C" int32_t m2929 (t9 * __this , float p0, MethodInfo* method)
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
extern MethodInfo m2682_MI;
extern "C" int32_t m2682 (t9 * __this , float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		double L_1 = round((((double)L_0)));
		return (((int32_t)L_1));
	}
}
extern "C" float m2842 (t9 * __this , float p0, MethodInfo* method)
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
extern "C" float m2671 (t9 * __this , float p0, MethodInfo* method)
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
		float L_4 = m2671(NULL, L_3, &m2671_MI);
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
		float L_8 = m2671(NULL, L_7, &m2671_MI);
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
		float L_8 = m2842(NULL, ((float)((float)L_6-(float)L_7)), &m2842_MI);
		float L_9 = p2;
		return ((float)((float)L_5+(float)((float)((float)L_8*(float)L_9))));
	}
}
extern "C" bool m2528 (t9 * __this , float p0, float p1, MethodInfo* method)
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
		float L_7 = m2837(NULL, L_1, L_2, L_3, L_4, L_5, L_6, &m2837_MI);
		return L_7;
	}
}
extern "C" float m2837 (t9 * __this , float p0, float p1, float* p2, float p3, float p4, float p5, MethodInfo* method)
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
#include "t602.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t602_TI;
#include "t602MD.h"



#include "t492.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t492_TI;
#include "t492MD.h"

#include "t434.h"


extern MethodInfo m2825_MI;
extern "C" void m2825 (t492 * __this, t57 * p0, t434 * p1, int32_t p2, MethodInfo* method)
{
	{
		return;
	}
}
extern MethodInfo m2824_MI;
extern "C" void m2824 (t492 * __this, MethodInfo* method)
{
	{
		return;
	}
}
#include "t608.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t608_TI;
#include "t608MD.h"



#include "t607.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t607_TI;
#include "t607MD.h"



#include "t611.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t611_TI;
#include "t611MD.h"



extern MethodInfo m2956_MI;
extern "C" void m2956 (t611 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3502_MI;
extern "C" void m3502 (t611 * __this, t434 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3502((t611 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t434 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t434 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t611(Il2CppObject* delegate, t434 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t434 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.RectTransform'."));
}
extern MethodInfo m3503_MI;
extern "C" t9 * m3503 (t611 * __this, t434 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3504_MI;
extern "C" void m3504 (t611 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t434_TI;
#include "t434MD.h"

#include "t293.h"
#include "t45.h"
#include "t293MD.h"
#include "t133MD.h"
#include "t45MD.h"
extern MethodInfo m3506_MI;
extern MethodInfo m3507_MI;
extern MethodInfo m3508_MI;
extern MethodInfo m3509_MI;
extern MethodInfo m3510_MI;
extern MethodInfo m3511_MI;
extern MethodInfo m3512_MI;
extern MethodInfo m3513_MI;
extern MethodInfo m3514_MI;
extern MethodInfo m3515_MI;
extern MethodInfo m3516_MI;
extern MethodInfo m1074_MI;
extern MethodInfo m1075_MI;
extern MethodInfo m2614_MI;
extern MethodInfo m3518_MI;
extern MethodInfo m350_MI;
extern MethodInfo m2866_MI;
extern MethodInfo m2688_MI;
extern MethodInfo m2782_MI;
extern MethodInfo m2778_MI;
extern MethodInfo m2689_MI;
extern MethodInfo m2780_MI;
extern MethodInfo m2690_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m2684_MI;
extern MethodInfo m2783_MI;
extern MethodInfo m3519_MI;
extern MethodInfo m530_MI;


extern MethodInfo m2957_MI;
extern "C" void m2957 (t9 * __this , t611 * p0, MethodInfo* method)
{
	{
		t611 * L_0 = ((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2;
		t611 * L_1 = p0;
		t293 * L_2 = m1074(NULL, L_0, L_1, &m1074_MI);
		((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2 = ((t611 *)Castclass(L_2, InitializedTypeInfo(&t611_TI)));
		return;
	}
}
extern MethodInfo m3505_MI;
extern "C" void m3505 (t9 * __this , t611 * p0, MethodInfo* method)
{
	{
		t611 * L_0 = ((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2;
		t611 * L_1 = p0;
		t293 * L_2 = m1075(NULL, L_0, L_1, &m1075_MI);
		((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2 = ((t611 *)Castclass(L_2, InitializedTypeInfo(&t611_TI)));
		return;
	}
}
extern "C" void m3506 (t434 * __this, t441 * p0, MethodInfo* method)
{
	typedef void (*m3506_ftn) (t434 *, t441 *);
	static m3506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t441  m2614 (t434 * __this, MethodInfo* method)
{
	t441  V_0 = {0};
	{
		m3506(__this, (&V_0), &m3506_MI);
		t441  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m3507 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3507_ftn) (t434 *, t28 *);
	static m3507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3508 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3508_ftn) (t434 *, t28 *);
	static m3508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2688 (t434 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3507(__this, (&V_0), &m3507_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2782 (t434 * __this, t28  p0, MethodInfo* method)
{
	{
		m3508(__this, (&p0), &m3508_MI);
		return;
	}
}
extern "C" void m3509 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3509_ftn) (t434 *, t28 *);
	static m3509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3510 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3510_ftn) (t434 *, t28 *);
	static m3510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2778 (t434 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3509(__this, (&V_0), &m3509_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2689 (t434 * __this, t28  p0, MethodInfo* method)
{
	{
		m3510(__this, (&p0), &m3510_MI);
		return;
	}
}
extern "C" void m3511 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3511_ftn) (t434 *, t28 *);
	static m3511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3512 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3512_ftn) (t434 *, t28 *);
	static m3512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2779 (t434 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3511(__this, (&V_0), &m3511_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2783 (t434 * __this, t28  p0, MethodInfo* method)
{
	{
		m3512(__this, (&p0), &m3512_MI);
		return;
	}
}
extern "C" void m3513 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3513_ftn) (t434 *, t28 *);
	static m3513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3514 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3514_ftn) (t434 *, t28 *);
	static m3514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2780 (t434 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3513(__this, (&V_0), &m3513_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m2690 (t434 * __this, t28  p0, MethodInfo* method)
{
	{
		m3514(__this, (&p0), &m3514_MI);
		return;
	}
}
extern "C" void m3515 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3515_ftn) (t434 *, t28 *);
	static m3515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3516 (t434 * __this, t28 * p0, MethodInfo* method)
{
	typedef void (*m3516_ftn) (t434 *, t28 *);
	static m3516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t28  m2684 (t434 * __this, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		m3515(__this, (&V_0), &m3515_MI);
		t28  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2784_MI;
extern "C" void m2784 (t434 * __this, t28  p0, MethodInfo* method)
{
	{
		m3516(__this, (&p0), &m3516_MI);
		return;
	}
}
extern MethodInfo m3517_MI;
extern "C" void m3517 (t9 * __this , t434 * p0, MethodInfo* method)
{
	{
		t611 * L_0 = ((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t611 * L_1 = ((t434_SFs*)InitializedTypeInfo(&t434_TI)->static_fields)->f2;
		t434 * L_2 = p0;
		VirtActionInvoker1< t434 * >::Invoke(&m3502_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern "C" void m3518 (t434 * __this, t37* p0, MethodInfo* method)
{
	t441  V_0 = {0};
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
		t441  L_2 = m2614(__this, &m2614_MI);
		V_0 = L_2;
		float L_3 = m2620((&V_0), &m2620_MI);
		V_1 = L_3;
		float L_4 = m2621((&V_0), &m2621_MI);
		V_2 = L_4;
		float L_5 = m2704((&V_0), &m2704_MI);
		V_3 = L_5;
		float L_6 = m2706((&V_0), &m2706_MI);
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
extern MethodInfo m2848_MI;
extern "C" void m2848 (t434 * __this, t37* p0, MethodInfo* method)
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
		m3518(__this, L_2, &m3518_MI);
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
		t13  L_9 = m2866(L_6, (*(t13 *)((t13 *)(t13 *)SZArrayLdElema(L_7, L_8))), &m2866_MI);
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
extern MethodInfo m2952_MI;
extern "C" void m2952 (t434 * __this, int32_t p0, float p1, float p2, MethodInfo* method)
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
		t28  L_5 = m2688(__this, &m2688_MI);
		V_3 = L_5;
		int32_t L_6 = V_0;
		float L_7 = V_2;
		m2709((&V_3), L_6, L_7, &m2709_MI);
		t28  L_8 = V_3;
		m2782(__this, L_8, &m2782_MI);
		t28  L_9 = m2778(__this, &m2778_MI);
		V_3 = L_9;
		int32_t L_10 = V_0;
		float L_11 = V_2;
		m2709((&V_3), L_10, L_11, &m2709_MI);
		t28  L_12 = V_3;
		m2689(__this, L_12, &m2689_MI);
		t28  L_13 = m2780(__this, &m2780_MI);
		V_4 = L_13;
		int32_t L_14 = V_0;
		float L_15 = p2;
		m2709((&V_4), L_14, L_15, &m2709_MI);
		t28  L_16 = V_4;
		m2690(__this, L_16, &m2690_MI);
		t28  L_17 = m2779(__this, &m2779_MI);
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
		t28  L_22 = m2684(__this, &m2684_MI);
		V_6 = L_22;
		int32_t L_23 = V_0;
		float L_24 = m2698((&V_6), L_23, &m2698_MI);
		G_B13_0 = ((float)((float)((-L_20))-(float)((float)((float)L_21*(float)((float)((float)(1.0f)-(float)L_24))))));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00c0;
	}

IL_00ac:
	{
		float L_25 = p1;
		float L_26 = p2;
		t28  L_27 = m2684(__this, &m2684_MI);
		V_7 = L_27;
		int32_t L_28 = V_0;
		float L_29 = m2698((&V_7), L_28, &m2698_MI);
		G_B13_0 = ((float)((float)L_25+(float)((float)((float)L_26*(float)L_29))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00c0:
	{
		m2709(G_B13_2, G_B13_1, G_B13_0, &m2709_MI);
		t28  L_30 = V_5;
		m2783(__this, L_30, &m2783_MI);
		return;
	}
}
extern MethodInfo m2919_MI;
extern "C" void m2919 (t434 * __this, int32_t p0, float p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	t28  V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	{
		int32_t L_0 = p0;
		V_0 = L_0;
		t28  L_1 = m2780(__this, &m2780_MI);
		V_1 = L_1;
		int32_t L_2 = V_0;
		float L_3 = p1;
		t28  L_4 = m3519(__this, &m3519_MI);
		V_2 = L_4;
		int32_t L_5 = V_0;
		float L_6 = m2698((&V_2), L_5, &m2698_MI);
		t28  L_7 = m2778(__this, &m2778_MI);
		V_3 = L_7;
		int32_t L_8 = V_0;
		float L_9 = m2698((&V_3), L_8, &m2698_MI);
		t28  L_10 = m2688(__this, &m2688_MI);
		V_4 = L_10;
		int32_t L_11 = V_0;
		float L_12 = m2698((&V_4), L_11, &m2698_MI);
		m2709((&V_1), L_2, ((float)((float)L_3-(float)((float)((float)L_6*(float)((float)((float)L_9-(float)L_12)))))), &m2709_MI);
		t28  L_13 = V_1;
		m2690(__this, L_13, &m2690_MI);
		return;
	}
}
extern "C" t28  m3519 (t434 * __this, MethodInfo* method)
{
	t434 * V_0 = {0};
	t441  V_1 = {0};
	{
		t45 * L_0 = m530(__this, &m530_MI);
		V_0 = ((t434 *)IsInst(L_0, InitializedTypeInfo(&t434_TI)));
		t434 * L_1 = V_0;
		bool L_2 = m406(NULL, L_1, &m406_MI);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		t28  L_3 = m1205(NULL, &m1205_MI);
		return L_3;
	}

IL_001d:
	{
		t434 * L_4 = V_0;
		t441  L_5 = m2614(L_4, &m2614_MI);
		V_1 = L_5;
		t28  L_6 = m2679((&V_1), &m2679_MI);
		return L_6;
	}
}
#include "t722.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t722_TI;
#include "t722MD.h"

#include "t723MD.h"
extern MethodInfo m3522_MI;


extern MethodInfo m3520_MI;
extern "C" void m3520 (t722 * __this, MethodInfo* method)
{
	{
		m3588(__this, &m3588_MI);
		return;
	}
}
extern MethodInfo m3521_MI;
extern "C" t57 * m3521 (t722 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		t126 * L_1 = (__this->f2);
		t57 * L_2 = m3522(NULL, L_0, L_1, &m3522_MI);
		return L_2;
	}
}
#include "t723.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t723_TI;



extern "C" t57 * m3522 (t9 * __this , t2* p0, t126 * p1, MethodInfo* method)
{
	typedef t57 * (*m3522_ftn) (t2*, t126 *);
	static m3522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t724.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t724_TI;
#include "t724MD.h"

#include "t725MD.h"
extern MethodInfo m4265_MI;


extern MethodInfo m3523_MI;
extern "C" void m3523 (t724 * __this, MethodInfo* method)
{
	{
		m4265(__this, &m4265_MI);
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
		m4265(__this, &m4265_MI);
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
extern MethodInfo m3524_MI;
extern "C" int32_t m3524 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3524_ftn) (t2*);
	static m3524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	return _il2cpp_icall_func(p0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t40_TI;
#include "t40MD.h"

extern MethodInfo m3531_MI;
extern MethodInfo m3538_MI;
extern MethodInfo m3526_MI;
extern MethodInfo m3527_MI;
extern MethodInfo m3529_MI;
extern MethodInfo m3525_MI;
extern MethodInfo m3528_MI;
extern MethodInfo m3530_MI;
extern MethodInfo m3532_MI;
extern MethodInfo m3534_MI;
extern MethodInfo m3535_MI;
extern MethodInfo m3533_MI;
extern MethodInfo m3536_MI;
extern MethodInfo m3537_MI;


extern MethodInfo m2888_MI;
extern "C" void m2888 (t40 * __this, t40 * p0, MethodInfo* method)
{
	{
		m3666(__this, &m3666_MI);
		t40 * L_0 = p0;
		m3538(NULL, __this, L_0, &m3538_MI);
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
extern MethodInfo m2895_MI;
extern "C" t148 * m2895 (t40 * __this, MethodInfo* method)
{
	{
		t148 * L_0 = m3531(__this, (t2*) &_stringLiteral226, &m3531_MI);
		return L_0;
	}
}
extern "C" void m3525 (t40 * __this, t2* p0, t43  p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		t43  L_2 = p1;
		m3526(__this, L_1, L_2, &m3526_MI);
		return;
	}
}
extern "C" void m3526 (t40 * __this, int32_t p0, t43  p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		m3527(NULL, __this, L_0, (&p1), &m3527_MI);
		return;
	}
}
extern "C" void m3527 (t9 * __this , t40 * p0, int32_t p1, t43 * p2, MethodInfo* method)
{
	typedef void (*m3527_ftn) (t40 *, int32_t, t43 *);
	static m3527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t43  m3528 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		t43  L_2 = m3529(__this, L_1, &m3529_MI);
		return L_2;
	}
}
extern "C" t43  m3529 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t43  (*m3529_ftn) (t40 *, int32_t);
	static m3529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetColor(System.Int32)");
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
		m3525(__this, L_0, L_5, &m3525_MI);
		return;
	}
}
extern MethodInfo m408_MI;
extern "C" t47  m408 (t40 * __this, t2* p0, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t2* L_0 = p0;
		t43  L_1 = m3528(__this, L_0, &m3528_MI);
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
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		t148 * L_2 = p1;
		m3530(__this, L_1, L_2, &m3530_MI);
		return;
	}
}
extern "C" void m3530 (t40 * __this, int32_t p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m3530_ftn) (t40 *, int32_t, t148 *);
	static m3530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" t148 * m3531 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		t148 * L_2 = m3532(__this, L_1, &m3532_MI);
		return L_2;
	}
}
extern "C" t148 * m3532 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef t148 * (*m3532_ftn) (t40 *, int32_t);
	static m3532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTexture(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3533 (t40 * __this, t2* p0, float p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		float L_2 = p1;
		m3534(__this, L_1, L_2, &m3534_MI);
		return;
	}
}
extern "C" void m3534 (t40 * __this, int32_t p0, float p1, MethodInfo* method)
{
	typedef void (*m3534_ftn) (t40 *, int32_t, float);
	static m3534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::SetFloat(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m409_MI;
extern "C" float m409 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		float L_2 = m3535(__this, L_1, &m3535_MI);
		return L_2;
	}
}
extern "C" float m3535 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef float (*m3535_ftn) (t40 *, int32_t);
	static m3535_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3535_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetFloat(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2889_MI;
extern "C" void m2889 (t40 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3533(__this, L_0, (((float)L_1)), &m3533_MI);
		return;
	}
}
extern MethodInfo m450_MI;
extern "C" bool m450 (t40 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3524(NULL, L_0, &m3524_MI);
		bool L_2 = m3536(__this, L_1, &m3536_MI);
		return L_2;
	}
}
extern "C" bool m3536 (t40 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3536_ftn) (t40 *, int32_t);
	static m3536_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3536_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::HasProperty(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t2* m3537 (t40 * __this, t2* p0, bool p1, t2* p2, MethodInfo* method)
{
	typedef t2* (*m3537_ftn) (t40 *, t2*, bool, t2*);
	static m3537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)");
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
		t2* L_4 = m3537(__this, L_1, L_2, L_3, &m3537_MI);
		return L_4;
	}
}
extern "C" void m3538 (t9 * __this , t40 * p0, t40 * p1, MethodInfo* method)
{
	typedef void (*m3538_ftn) (t40 *, t40 *);
	static m3538_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3538_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)");
	_il2cpp_icall_func(p0, p1);
}
#include "t726.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t726_TI;
#include "t726MD.h"

extern MethodInfo m3540_MI;
extern MethodInfo m3541_MI;
extern MethodInfo m3543_MI;
extern MethodInfo m3544_MI;
extern MethodInfo m3546_MI;
extern MethodInfo m3547_MI;
extern MethodInfo m3555_MI;


extern MethodInfo m3539_MI;
extern "C" void m3539 (t726 * __this, MethodInfo* method)
{
	{
		m3540(NULL, __this, &m3540_MI);
		return;
	}
}
extern "C" void m3540 (t9 * __this , t726 * p0, MethodInfo* method)
{
	{
		t726 * L_0 = p0;
		m3541(NULL, L_0, &m3541_MI);
		return;
	}
}
extern "C" void m3541 (t9 * __this , t726 * p0, MethodInfo* method)
{
	typedef void (*m3541_ftn) (t726 *);
	static m3541_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3541_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m3542_MI;
extern "C" void m3542 (t726 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		m3543(NULL, L_0, __this, &m3543_MI);
		return;
	}
}
extern "C" void m3543 (t9 * __this , t43  p0, t726 * p1, MethodInfo* method)
{
	{
		t726 * L_0 = p1;
		m3544(NULL, (&p0), L_0, &m3544_MI);
		return;
	}
}
extern "C" void m3544 (t9 * __this , t43 * p0, t726 * p1, MethodInfo* method)
{
	typedef void (*m3544_ftn) (t43 *, t726 *);
	static m3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3545_MI;
extern "C" void m3545 (t726 * __this, t13  p0, t43  p1, float p2, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		t43  L_0 = p1;
		float L_1 = p2;
		t43  L_2 = m2864(NULL, L_0, ((float)((float)(2.0f)*(float)L_1)), &m2864_MI);
		V_0 = L_2;
		t13  L_3 = p0;
		t43  L_4 = V_0;
		m3546(NULL, L_3, L_4, __this, &m3546_MI);
		return;
	}
}
extern "C" void m3546 (t9 * __this , t13  p0, t43  p1, t726 * p2, MethodInfo* method)
{
	{
		t726 * L_0 = p2;
		m3547(NULL, (&p0), (&p1), L_0, &m3547_MI);
		return;
	}
}
extern "C" void m3547 (t9 * __this , t13 * p0, t43 * p1, t726 * p2, MethodInfo* method)
{
	typedef void (*m3547_ftn) (t13 *, t43 *, t726 *);
	static m3547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m3548_MI;
extern "C" float m3548 (t726 * __this, int32_t p0, int32_t p1, MethodInfo* method)
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
		t883 * L_31 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_31, (t2*) &_stringLiteral227, &m4252_MI);
		il2cpp_codegen_raise_exception(L_31);
	}
}
extern MethodInfo m3549_MI;
extern "C" void m3549 (t726 * __this, int32_t p0, int32_t p1, float p2, MethodInfo* method)
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
		t883 * L_31 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4252(L_31, (t2*) &_stringLiteral227, &m4252_MI);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_01cf:
	{
		return;
	}
}
extern MethodInfo m3550_MI;
extern "C" int32_t m3550 (t726 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)17);
		int32_t L_0 = V_0;
		float* L_1 = &(__this->f0);
		int32_t L_2 = m4230(L_1, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)((int32_t)23)))+(int32_t)L_2));
		int32_t L_3 = V_0;
		float* L_4 = &(__this->f1);
		int32_t L_5 = m4230(L_4, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_3*(int32_t)((int32_t)23)))+(int32_t)L_5));
		int32_t L_6 = V_0;
		float* L_7 = &(__this->f2);
		int32_t L_8 = m4230(L_7, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6*(int32_t)((int32_t)23)))+(int32_t)L_8));
		int32_t L_9 = V_0;
		float* L_10 = &(__this->f3);
		int32_t L_11 = m4230(L_10, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_9*(int32_t)((int32_t)23)))+(int32_t)L_11));
		int32_t L_12 = V_0;
		float* L_13 = &(__this->f4);
		int32_t L_14 = m4230(L_13, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_12*(int32_t)((int32_t)23)))+(int32_t)L_14));
		int32_t L_15 = V_0;
		float* L_16 = &(__this->f5);
		int32_t L_17 = m4230(L_16, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_15*(int32_t)((int32_t)23)))+(int32_t)L_17));
		int32_t L_18 = V_0;
		float* L_19 = &(__this->f6);
		int32_t L_20 = m4230(L_19, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_18*(int32_t)((int32_t)23)))+(int32_t)L_20));
		int32_t L_21 = V_0;
		float* L_22 = &(__this->f7);
		int32_t L_23 = m4230(L_22, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_21*(int32_t)((int32_t)23)))+(int32_t)L_23));
		int32_t L_24 = V_0;
		float* L_25 = &(__this->f8);
		int32_t L_26 = m4230(L_25, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_24*(int32_t)((int32_t)23)))+(int32_t)L_26));
		int32_t L_27 = V_0;
		float* L_28 = &(__this->f9);
		int32_t L_29 = m4230(L_28, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)((int32_t)23)))+(int32_t)L_29));
		int32_t L_30 = V_0;
		float* L_31 = &(__this->f10);
		int32_t L_32 = m4230(L_31, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)((int32_t)23)))+(int32_t)L_32));
		int32_t L_33 = V_0;
		float* L_34 = &(__this->f11);
		int32_t L_35 = m4230(L_34, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33*(int32_t)((int32_t)23)))+(int32_t)L_35));
		int32_t L_36 = V_0;
		float* L_37 = &(__this->f12);
		int32_t L_38 = m4230(L_37, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_36*(int32_t)((int32_t)23)))+(int32_t)L_38));
		int32_t L_39 = V_0;
		float* L_40 = &(__this->f13);
		int32_t L_41 = m4230(L_40, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_39*(int32_t)((int32_t)23)))+(int32_t)L_41));
		int32_t L_42 = V_0;
		float* L_43 = &(__this->f14);
		int32_t L_44 = m4230(L_43, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_42*(int32_t)((int32_t)23)))+(int32_t)L_44));
		int32_t L_45 = V_0;
		float* L_46 = &(__this->f15);
		int32_t L_47 = m4230(L_46, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_45*(int32_t)((int32_t)23)))+(int32_t)L_47));
		int32_t L_48 = V_0;
		float* L_49 = &(__this->f16);
		int32_t L_50 = m4230(L_49, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_48*(int32_t)((int32_t)23)))+(int32_t)L_50));
		int32_t L_51 = V_0;
		float* L_52 = &(__this->f17);
		int32_t L_53 = m4230(L_52, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_51*(int32_t)((int32_t)23)))+(int32_t)L_53));
		int32_t L_54 = V_0;
		float* L_55 = &(__this->f18);
		int32_t L_56 = m4230(L_55, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_54*(int32_t)((int32_t)23)))+(int32_t)L_56));
		int32_t L_57 = V_0;
		float* L_58 = &(__this->f19);
		int32_t L_59 = m4230(L_58, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_57*(int32_t)((int32_t)23)))+(int32_t)L_59));
		int32_t L_60 = V_0;
		float* L_61 = &(__this->f20);
		int32_t L_62 = m4230(L_61, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_60*(int32_t)((int32_t)23)))+(int32_t)L_62));
		int32_t L_63 = V_0;
		float* L_64 = &(__this->f21);
		int32_t L_65 = m4230(L_64, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_63*(int32_t)((int32_t)23)))+(int32_t)L_65));
		int32_t L_66 = V_0;
		float* L_67 = &(__this->f22);
		int32_t L_68 = m4230(L_67, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_66*(int32_t)((int32_t)23)))+(int32_t)L_68));
		int32_t L_69 = V_0;
		float* L_70 = &(__this->f23);
		int32_t L_71 = m4230(L_70, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_69*(int32_t)((int32_t)23)))+(int32_t)L_71));
		int32_t L_72 = V_0;
		float* L_73 = &(__this->f24);
		int32_t L_74 = m4230(L_73, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_72*(int32_t)((int32_t)23)))+(int32_t)L_74));
		int32_t L_75 = V_0;
		float* L_76 = &(__this->f25);
		int32_t L_77 = m4230(L_76, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_75*(int32_t)((int32_t)23)))+(int32_t)L_77));
		int32_t L_78 = V_0;
		float* L_79 = &(__this->f26);
		int32_t L_80 = m4230(L_79, &m4230_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_78*(int32_t)((int32_t)23)))+(int32_t)L_80));
		int32_t L_81 = V_0;
		return L_81;
	}
}
extern MethodInfo m3551_MI;
extern "C" bool m3551 (t726 * __this, t9 * p0, MethodInfo* method)
{
	t726  V_0 = {0};
	{
		t9 * L_0 = p0;
		if (((t9 *)IsInst(L_0, InitializedTypeInfo(&t726_TI))))
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
		V_0 = ((*(t726 *)((t726 *)UnBox (L_1, InitializedTypeInfo(&t726_TI)))));
		t726  L_2 = V_0;
		bool L_3 = m3555(NULL, (*(t726 *)__this), L_2, &m3555_MI);
		return L_3;
	}
}
extern MethodInfo m3552_MI;
extern "C" t726  m3552 (t9 * __this , t726  p0, float p1, MethodInfo* method)
{
	t726  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t726_TI), (&V_0));
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
		t726  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3553_MI;
extern "C" t726  m3553 (t9 * __this , float p0, t726  p1, MethodInfo* method)
{
	t726  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t726_TI), (&V_0));
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
		t726  L_54 = V_0;
		return L_54;
	}
}
extern MethodInfo m3554_MI;
extern "C" t726  m3554 (t9 * __this , t726  p0, t726  p1, MethodInfo* method)
{
	t726  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&t726_TI), (&V_0));
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
		t726  L_54 = V_0;
		return L_54;
	}
}
extern "C" bool m3555 (t9 * __this , t726  p0, t726  p1, MethodInfo* method)
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
extern MethodInfo m3556_MI;
extern "C" bool m3556 (t9 * __this , t726  p0, t726  p1, MethodInfo* method)
{
	{
		t726  L_0 = p0;
		t726  L_1 = p1;
		bool L_2 = m3555(NULL, L_0, L_1, &m3555_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#include "t456.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t456_TI;
#include "t456MD.h"



extern MethodInfo m2678_MI;
extern "C" t441  m2678 (t456 * __this, MethodInfo* method)
{
	typedef t441  (*m2678_ftn) (t456 *);
	static m2678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2675_MI;
extern "C" float m2675 (t456 * __this, MethodInfo* method)
{
	typedef float (*m2675_ftn) (t456 *);
	static m2675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2672_MI;
extern "C" t432 * m2672 (t456 * __this, MethodInfo* method)
{
	typedef t432 * (*m2672_ftn) (t456 *);
	static m2672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2703_MI;
extern "C" t441  m2703 (t456 * __this, MethodInfo* method)
{
	typedef t441  (*m2703_ftn) (t456 *);
	static m2703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_textureRect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2673_MI;
extern "C" t47  m2673 (t456 * __this, MethodInfo* method)
{
	typedef t47  (*m2673_ftn) (t456 *);
	static m2673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border()");
	return _il2cpp_icall_func(__this);
}
#include "t569.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t569_TI;
#include "t569MD.h"



#include "t589.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t589_TI;
#include "t589MD.h"

extern MethodInfo m3557_MI;


extern MethodInfo m2692_MI;
extern "C" t47  m2692 (t9 * __this , t456 * p0, MethodInfo* method)
{
	typedef t47  (*m2692_ftn) (t456 *);
	static m2692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2691_MI;
extern "C" t47  m2691 (t9 * __this , t456 * p0, MethodInfo* method)
{
	typedef t47  (*m2691_ftn) (t456 *);
	static m2691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2681_MI;
extern "C" t47  m2681 (t9 * __this , t456 * p0, MethodInfo* method)
{
	typedef t47  (*m2681_ftn) (t456 *);
	static m2681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2677_MI;
extern "C" t28  m2677 (t9 * __this , t456 * p0, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t456 * L_0 = p0;
		m3557(NULL, L_0, (&V_0), &m3557_MI);
		t28  L_1 = V_0;
		return L_1;
	}
}
extern "C" void m3557 (t9 * __this , t456 * p0, t28 * p1, MethodInfo* method)
{
	typedef void (*m3557_ftn) (t456 *, t28 *);
	static m3557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1);
}
#include "t727.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t727_TI;
#include "t727MD.h"

#include "t728.h"
#include "t326.h"
#include "t729.h"
#include "t731.h"
#include "t884.h"
#include "t885.h"
#include "t886.h"
#include "t887.h"
extern TypeInfo t326_TI;
extern TypeInfo t729_TI;
extern TypeInfo t730_TI;
extern TypeInfo t728_TI;
extern TypeInfo t312_TI;
extern TypeInfo t303_TI;
extern TypeInfo t221_TI;
extern TypeInfo t886_TI;
extern TypeInfo t885_TI;
extern TypeInfo t887_TI;
#include "t326MD.h"
#include "t729MD.h"
#include "t731MD.h"
#include "t728MD.h"
#include "t886MD.h"
#include "t885MD.h"
#include "t887MD.h"
extern Il2CppType t728_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t221_0_0_0;
extern Il2CppType t886_0_0_0;
extern MethodInfo m3570_MI;
extern MethodInfo m1217_MI;
extern MethodInfo m3564_MI;
extern MethodInfo m3572_MI;
extern MethodInfo m3568_MI;
extern MethodInfo m3567_MI;
extern MethodInfo m4266_MI;
extern MethodInfo m4267_MI;
extern MethodInfo m3577_MI;
extern MethodInfo m3571_MI;
extern MethodInfo m3578_MI;
extern MethodInfo m3562_MI;
extern MethodInfo m3561_MI;
extern MethodInfo m3563_MI;
extern MethodInfo m4268_MI;
extern MethodInfo m4269_MI;
extern MethodInfo m4270_MI;
extern MethodInfo m2766_MI;
extern MethodInfo m4271_MI;
extern MethodInfo m4272_MI;
extern MethodInfo m2795_MI;
extern MethodInfo m2740_MI;
extern MethodInfo m4273_MI;
extern MethodInfo m4274_MI;
extern MethodInfo m4275_MI;
extern MethodInfo m4276_MI;
extern MethodInfo m4277_MI;
extern MethodInfo m4278_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m4281_MI;
extern MethodInfo m4282_MI;
extern MethodInfo m4283_MI;
extern Il2CppGenericMethod m4268_GM;
extern Il2CppGenericMethod m4275_GM;
extern Il2CppGenericMethod m4284_GM;
extern Il2CppGenericMethod m4285_GM;
extern Il2CppGenericMethod m4286_GM;
extern Il2CppGenericMethod m4287_GM;
extern Il2CppGenericMethod m4288_GM;
extern Il2CppGenericMethod m4277_GM;
extern Il2CppGenericMethod m4281_GM;


extern MethodInfo m3558_MI;
extern "C" void m3558 (t727 * __this, t2* p0, t731 * p1, MethodInfo* method)
{
	t221* V_0 = {0};
	{
		m336(__this, &m336_MI);
		t731 * L_0 = p1;
		t728 * L_1 = m3577(L_0, &m3577_MI);
		t221* L_2 = m3571(NULL, L_1, &m3571_MI);
		V_0 = L_2;
		t2* L_3 = p0;
		t731 * L_4 = p1;
		t730* L_5 = m3578(L_4, &m3578_MI);
		t221* L_6 = V_0;
		m3562(__this, L_3, L_5, L_6, &m3562_MI);
		return;
	}
}
extern MethodInfo m3559_MI;
extern "C" void m3559 (t727 * __this, MethodInfo* method)
{
	{
		m3561(__this, 1, &m3561_MI);
		return;
	}
}
extern MethodInfo m3560_MI;
extern "C" void m3560 (t727 * __this, MethodInfo* method)
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
		m3561(__this, 0, &m3561_MI);
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
extern "C" void m3561 (t727 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3561_ftn) (t727 *, bool);
	static m3561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::DestroyWWW(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3562 (t727 * __this, t2* p0, t730* p1, t221* p2, MethodInfo* method)
{
	typedef void (*m3562_ftn) (t727 *, t2*, t730*, t221*);
	static m3562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" t728 * m3563 (t727 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3570(__this, &m3570_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t326 * L_1 = (t326 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t326_TI));
		m1217(L_1, (t2*) &_stringLiteral228, &m1217_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t2* L_2 = m3564(__this, &m3564_MI);
		t728 * L_3 = m3572(NULL, L_2, &m3572_MI);
		return L_3;
	}
}
extern "C" t2* m3564 (t727 * __this, MethodInfo* method)
{
	typedef t2* (*m3564_ftn) (t727 *);
	static m3564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_responseHeadersString()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3565_MI;
extern "C" t2* m3565 (t727 * __this, MethodInfo* method)
{
	t730* V_0 = {0};
	{
		bool L_0 = m3570(__this, &m3570_MI);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		t326 * L_1 = (t326 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t326_TI));
		m1217(L_1, (t2*) &_stringLiteral229, &m1217_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		t730* L_2 = m3568(__this, &m3568_MI);
		V_0 = L_2;
		t729 * L_3 = m3567(__this, &m3567_MI);
		t730* L_4 = V_0;
		t730* L_5 = V_0;
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t730*, int32_t, int32_t >::Invoke(&m4266_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		return L_6;
	}
}
extern MethodInfo m3566_MI;
extern "C" t729 * m3566 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_0 = m4267(NULL, &m4267_MI);
		return L_0;
	}
}
extern TypeInfo* t312_TI_var;
extern MethodInfo* m4268_MI_var;
extern "C" t729 * m3567 (t727 * __this, MethodInfo* method)
{
	static bool m3567_init;
	if (!m3567_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m4268_MI_var = il2cpp_codegen_genericmethod_get_method(&m4268_GM);
		m3567_init = true;
	}
	t2* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t2* V_3 = {0};
	int32_t V_4 = 0;
	t729 * V_5 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (t2*)NULL;
		t728 * L_0 = m3563(__this, &m3563_MI);
		bool L_1 = (bool)VirtFuncInvoker2< bool, t2*, t2** >::Invoke(m4268_MI_var, L_0, (t2*) &_stringLiteral230, (&V_0));
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		t2* L_2 = V_0;
		int32_t L_3 = m4269(L_2, (t2*) &_stringLiteral231, 5, &m4269_MI);
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
		int32_t L_7 = m4270(L_5, ((int32_t)61), L_6, &m4270_MI);
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
		t2* L_11 = m2766(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)), &m2766_MI);
		t2* L_12 = m4271(L_11, &m4271_MI);
		t312* L_13 = ((t312*)SZArrayNew(t312_TI_var, 2));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 0)) = (uint16_t)((int32_t)39);
		t312* L_14 = L_13;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 1)) = (uint16_t)((int32_t)34);
		t2* L_15 = m4272(L_12, L_14, &m4272_MI);
		t2* L_16 = m4271(L_15, &m4271_MI);
		V_3 = L_16;
		t2* L_17 = V_3;
		int32_t L_18 = m2795(L_17, ((int32_t)59), &m2795_MI);
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
		t2* L_22 = m2740(L_20, 0, L_21, &m2740_MI);
		V_3 = L_22;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			t2* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_24 = m4273(NULL, L_23, &m4273_MI);
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_27 = m4274(NULL, &m4274_MI);
		return L_27;
	}

IL_00b6:
	{
		t729 * L_28 = V_5;
		return L_28;
	}
}
extern "C" t730* m3568 (t727 * __this, MethodInfo* method)
{
	typedef t730* (*m3568_ftn) (t727 *);
	static m3568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_bytes()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3569_MI;
extern "C" t2* m3569 (t727 * __this, MethodInfo* method)
{
	typedef t2* (*m3569_ftn) (t727 *);
	static m3569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_error()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3570 (t727 * __this, MethodInfo* method)
{
	typedef bool (*m3570_ftn) (t727 *);
	static m3570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WWW::get_isDone()");
	return _il2cpp_icall_func(__this);
}
extern TypeInfo* t221_TI_var;
extern TypeInfo* t886_TI_var;
extern MethodInfo* m4275_MI_var;
extern MethodInfo* m4284_MI_var;
extern MethodInfo* m4285_MI_var;
extern MethodInfo* m4286_MI_var;
extern MethodInfo* m4287_MI_var;
extern MethodInfo* m4288_MI_var;
extern "C" t221* m3571 (t9 * __this , t728 * p0, MethodInfo* method)
{
	static bool m3571_init;
	if (!m3571_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		t886_TI_var = il2cpp_codegen_class_from_type(&t886_0_0_0);
		m4275_MI_var = il2cpp_codegen_genericmethod_get_method(&m4275_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m4285_MI_var = il2cpp_codegen_genericmethod_get_method(&m4285_GM);
		m4286_MI_var = il2cpp_codegen_genericmethod_get_method(&m4286_GM);
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m4288_MI_var = il2cpp_codegen_genericmethod_get_method(&m4288_GM);
		m3571_init = true;
	}
	t221* V_0 = {0};
	int32_t V_1 = 0;
	t885  V_2 = {0};
	t886  V_3 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t728 * L_0 = p0;
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
		t728 * L_1 = p0;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4275_MI_var, L_1);
		V_0 = ((t221*)SZArrayNew(t221_TI_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		V_1 = 0;
		t728 * L_3 = p0;
		t886  L_4 = m4284(L_3, m4284_MI_var);
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
			t885  L_5 = m4285((&V_3), m4285_MI_var);
			V_2 = L_5;
			t221* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t2* L_9 = m4286((&V_2), m4286_MI_var);
			t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4276_MI, L_9);
			ArrayElementTypeCheck (L_6, L_10);
			*((t2**)(t2**)SZArrayLdElema(L_6, L_8)) = (t2*)L_10;
			t221* L_11 = V_0;
			int32_t L_12 = V_1;
			int32_t L_13 = L_12;
			V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
			t2* L_14 = m4287((&V_2), m4287_MI_var);
			t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4276_MI, L_14);
			ArrayElementTypeCheck (L_11, L_15);
			*((t2**)(t2**)SZArrayLdElema(L_11, L_13)) = (t2*)L_15;
		}

IL_0052:
		{
			bool L_16 = m4288((&V_3), m4288_MI_var);
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
		t886  L_17 = V_3;
		t886  L_18 = L_17;
		t9 * L_19 = Box(t886_TI_var, &L_18);
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
extern TypeInfo* t728_TI_var;
extern MethodInfo* m4277_MI_var;
extern MethodInfo* m4281_MI_var;
extern "C" t728 * m3572 (t9 * __this , t2* p0, MethodInfo* method)
{
	static bool m3572_init;
	if (!m3572_init)
	{
		t728_TI_var = il2cpp_codegen_class_from_type(&t728_0_0_0);
		m4277_MI_var = il2cpp_codegen_genericmethod_get_method(&m4277_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3572_init = true;
	}
	t728 * V_0 = {0};
	t887 * V_1 = {0};
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
		t563 * L_1 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2910(L_1, (t2*) &_stringLiteral233, &m2910_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t728 * L_2 = (t728 *)il2cpp_codegen_object_new (t728_TI_var);
		m4277(L_2, m4277_MI_var);
		V_0 = L_2;
		t2* L_3 = p0;
		t887 * L_4 = (t887 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t887_TI));
		m4278(L_4, L_3, &m4278_MI);
		V_1 = L_4;
		V_2 = 0;
	}

IL_0020:
	{
		t887 * L_5 = V_1;
		t2* L_6 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4279_MI, L_5);
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
		bool L_11 = m4280(L_10, (t2*) &_stringLiteral234, &m4280_MI);
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		t728 * L_12 = V_0;
		t2* L_13 = V_3;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4281_MI_var, L_12, (t2*) &_stringLiteral235, L_13);
		goto IL_0020;
	}

IL_005d:
	{
		t2* L_14 = V_3;
		int32_t L_15 = m4282(L_14, (t2*) &_stringLiteral236, &m4282_MI);
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
		t2* L_19 = m2740(L_17, 0, L_18, &m2740_MI);
		t2* L_20 = m4283(L_19, &m4283_MI);
		V_5 = L_20;
		t2* L_21 = V_3;
		int32_t L_22 = V_4;
		t2* L_23 = m2766(L_21, ((int32_t)((int32_t)L_22+(int32_t)2)), &m2766_MI);
		V_6 = L_23;
		t728 * L_24 = V_0;
		t2* L_25 = V_5;
		t2* L_26 = V_6;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4281_MI_var, L_24, L_25, L_26);
		goto IL_0020;
	}

IL_00a2:
	{
		t728 * L_27 = V_0;
		return L_27;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t731_TI;

#include "t888.h"
#include "t31.h"
#include "t732.h"
extern TypeInfo t888_TI;
extern TypeInfo t31_TI;
extern TypeInfo t733_TI;
extern TypeInfo t732_TI;
#include "t888MD.h"
#include "t31MD.h"
#include "t733MD.h"
#include "t732MD.h"
#include "t178MD.h"
extern Il2CppType t31_0_0_0;
extern Il2CppType t732_0_0_0;
extern Il2CppType t730_0_0_0;
extern MethodInfo m4289_MI;
extern MethodInfo m4290_MI;
extern MethodInfo m4291_MI;
extern MethodInfo m4292_MI;
extern MethodInfo m4293_MI;
extern MethodInfo m3585_MI;
extern MethodInfo m3582_MI;
extern MethodInfo m4294_MI;
extern MethodInfo m4295_MI;
extern MethodInfo m4296_MI;
extern MethodInfo m4297_MI;
extern MethodInfo m3581_MI;
extern MethodInfo m4298_MI;
extern MethodInfo m398_MI;
extern MethodInfo m1167_MI;
extern MethodInfo m3575_MI;
extern MethodInfo m402_MI;
extern MethodInfo m4299_MI;
extern MethodInfo m4300_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m3574_MI;
extern Il2CppGenericMethod m4292_GM;
extern Il2CppGenericMethod m4295_GM;
extern Il2CppGenericMethod m4296_GM;
extern Il2CppGenericMethod m4298_GM;
extern Il2CppGenericMethod m398_GM;
extern Il2CppGenericMethod m402_GM;
extern Il2CppGenericMethod m4299_GM;


extern MethodInfo m3573_MI;
extern TypeInfo* t732_TI_var;
extern TypeInfo* t31_TI_var;
extern TypeInfo* t730_TI_var;
extern MethodInfo* m4298_MI_var;
extern MethodInfo* m398_MI_var;
extern "C" void m3573 (t731 * __this, MethodInfo* method)
{
	static bool m3573_init;
	if (!m3573_init)
	{
		t732_TI_var = il2cpp_codegen_class_from_type(&t732_0_0_0);
		t31_TI_var = il2cpp_codegen_class_from_type(&t31_0_0_0);
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m4298_MI_var = il2cpp_codegen_genericmethod_get_method(&m4298_GM);
		m398_MI_var = il2cpp_codegen_genericmethod_get_method(&m398_GM);
		m3573_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		m336(__this, &m336_MI);
		IL2CPP_RUNTIME_CLASS_INIT(t732_TI_var);
		t732 * L_0 = (t732 *)il2cpp_codegen_object_new (t732_TI_var);
		m4298(L_0, m4298_MI_var);
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
		__this->f4 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)40)));
		V_0 = 0;
		goto IL_0076;
	}

IL_0046:
	{
		int32_t L_4 = m1167(NULL, ((int32_t)48), ((int32_t)110), &m1167_MI);
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
		t730* L_9 = (__this->f4);
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
extern "C" void m3574 (t731 * __this, t2* p0, t2* p1, MethodInfo* method)
{
	t729 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_0 = m4274(NULL, &m4274_MI);
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = p1;
		t729 * L_3 = V_0;
		m3575(__this, L_1, L_2, L_3, &m3575_MI);
		return;
	}
}
extern MethodInfo* m402_MI_var;
extern MethodInfo* m4299_MI_var;
extern "C" void m3575 (t731 * __this, t2* p0, t2* p1, t729 * p2, MethodInfo* method)
{
	static bool m3575_init;
	if (!m3575_init)
	{
		m402_MI_var = il2cpp_codegen_genericmethod_get_method(&m402_GM);
		m4299_MI_var = il2cpp_codegen_genericmethod_get_method(&m4299_GM);
		m3575_init = true;
	}
	{
		t31 * L_0 = (__this->f1);
		t2* L_1 = p0;
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_0, L_1);
		t31 * L_2 = (__this->f2);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_2, (t2*)NULL);
		t732 * L_3 = (__this->f0);
		t729 * L_4 = p2;
		t2* L_5 = p1;
		t730* L_6 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_4, L_5);
		VirtActionInvoker1< t730* >::Invoke(m4299_MI_var, L_3, L_6);
		t31 * L_7 = (__this->f3);
		t729 * L_8 = p2;
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4300_MI, L_8);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m399(NULL, (t2*) &_stringLiteral251, L_9, (t2*) &_stringLiteral239, &m399_MI);
		VirtActionInvoker1< t2* >::Invoke(m402_MI_var, L_7, L_10);
		return;
	}
}
extern MethodInfo m3576_MI;
extern "C" void m3576 (t731 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t2* L_1 = m4301((&p1), &m4301_MI);
		m3574(__this, L_0, L_1, &m3574_MI);
		return;
	}
}
extern TypeInfo* t728_TI_var;
extern MethodInfo* m4277_MI_var;
extern MethodInfo* m4281_MI_var;
extern "C" t728 * m3577 (t731 * __this, MethodInfo* method)
{
	static bool m3577_init;
	if (!m3577_init)
	{
		t728_TI_var = il2cpp_codegen_class_from_type(&t728_0_0_0);
		m4277_MI_var = il2cpp_codegen_genericmethod_get_method(&m4277_GM);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3577_init = true;
	}
	t728 * V_0 = {0};
	{
		t728 * L_0 = (t728 *)il2cpp_codegen_object_new (t728_TI_var);
		m4277(L_0, m4277_MI_var);
		V_0 = L_0;
		bool L_1 = (__this->f5);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		t728 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
		t729 * L_3 = m4274(NULL, &m4274_MI);
		t730* L_4 = (__this->f4);
		t730* L_5 = (__this->f4);
		t2* L_6 = (t2*)VirtFuncInvoker3< t2*, t730*, int32_t, int32_t >::Invoke(&m4266_MI, L_3, L_4, 0, (((int32_t)(((t121 *)L_5)->max_length))));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_7 = m399(NULL, (t2*) &_stringLiteral238, L_6, (t2*) &_stringLiteral239, &m399_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4281_MI_var, L_2, (t2*) &_stringLiteral237, L_7);
		goto IL_0059;
	}

IL_0049:
	{
		t728 * L_8 = V_0;
		VirtActionInvoker2< t2*, t2* >::Invoke(m4281_MI_var, L_8, (t2*) &_stringLiteral237, (t2*) &_stringLiteral240);
	}

IL_0059:
	{
		t728 * L_9 = V_0;
		return L_9;
	}
}
extern TypeInfo* t221_TI_var;
extern MethodInfo* m4292_MI_var;
extern MethodInfo* m4295_MI_var;
extern MethodInfo* m4296_MI_var;
extern "C" t730* m3578 (t731 * __this, MethodInfo* method)
{
	static bool m3578_init;
	if (!m3578_init)
	{
		t221_TI_var = il2cpp_codegen_class_from_type(&t221_0_0_0);
		m4292_MI_var = il2cpp_codegen_genericmethod_get_method(&m4292_GM);
		m4295_MI_var = il2cpp_codegen_genericmethod_get_method(&m4295_GM);
		m4296_MI_var = il2cpp_codegen_genericmethod_get_method(&m4296_GM);
		m3578_init = true;
	}
	t730* V_0 = {0};
	t730* V_1 = {0};
	t730* V_2 = {0};
	t730* V_3 = {0};
	t730* V_4 = {0};
	t730* V_5 = {0};
	t888 * V_6 = {0};
	int32_t V_7 = 0;
	t730* V_8 = {0};
	t2* V_9 = {0};
	t2* V_10 = {0};
	t730* V_11 = {0};
	t2* V_12 = {0};
	t730* V_13 = {0};
	t730* V_14 = {0};
	t730* V_15 = {0};
	t730* V_16 = {0};
	t888 * V_17 = {0};
	int32_t V_18 = 0;
	t730* V_19 = {0};
	t730* V_20 = {0};
	t730* V_21 = {0};
	t730* V_22 = {0};
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
		t729 * L_1 = m3566(NULL, &m3566_MI);
		t730* L_2 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_1, (t2*) &_stringLiteral241);
		V_0 = L_2;
		t729 * L_3 = m3566(NULL, &m3566_MI);
		t730* L_4 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_3, (t2*) &_stringLiteral242);
		V_1 = L_4;
		t729 * L_5 = m3566(NULL, &m3566_MI);
		t730* L_6 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_5, (t2*) &_stringLiteral243);
		V_2 = L_6;
		t729 * L_7 = m3566(NULL, &m3566_MI);
		t730* L_8 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_7, (t2*) &_stringLiteral244);
		V_3 = L_8;
		t729 * L_9 = m3566(NULL, &m3566_MI);
		t730* L_10 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_9, (t2*) &_stringLiteral239);
		V_4 = L_10;
		t729 * L_11 = m3566(NULL, &m3566_MI);
		t730* L_12 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_11, (t2*) &_stringLiteral245);
		V_5 = L_12;
		t888 * L_13 = (t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t888_TI));
		m4290(L_13, ((int32_t)1024), &m4290_MI);
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
			t888 * L_14 = V_6;
			t730* L_15 = V_1;
			t730* L_16 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_14, L_15, 0, (((int32_t)(((t121 *)L_16)->max_length))));
			t888 * L_17 = V_6;
			t730* L_18 = V_0;
			t730* L_19 = V_0;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_17, L_18, 0, (((int32_t)(((t121 *)L_19)->max_length))));
			t888 * L_20 = V_6;
			t730* L_21 = (__this->f4);
			t730* L_22 = (__this->f4);
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_20, L_21, 0, (((int32_t)(((t121 *)L_22)->max_length))));
			t888 * L_23 = V_6;
			t730* L_24 = V_1;
			t730* L_25 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_23, L_24, 0, (((int32_t)(((t121 *)L_25)->max_length))));
			t888 * L_26 = V_6;
			t730* L_27 = V_2;
			t730* L_28 = V_2;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_26, L_27, 0, (((int32_t)(((t121 *)L_28)->max_length))));
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_29 = m4274(NULL, &m4274_MI);
			t31 * L_30 = (__this->f3);
			int32_t L_31 = V_7;
			t2* L_32 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4292_MI_var, L_30, L_31);
			t730* L_33 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_29, L_32);
			V_8 = L_33;
			t888 * L_34 = V_6;
			t730* L_35 = V_8;
			t730* L_36 = V_8;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_34, L_35, 0, (((int32_t)(((t121 *)L_36)->max_length))));
			t888 * L_37 = V_6;
			t730* L_38 = V_1;
			t730* L_39 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_37, L_38, 0, (((int32_t)(((t121 *)L_39)->max_length))));
			t888 * L_40 = V_6;
			t730* L_41 = V_3;
			t730* L_42 = V_3;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_40, L_41, 0, (((int32_t)(((t121 *)L_42)->max_length))));
			t729 * L_43 = m4274(NULL, &m4274_MI);
			t2* L_44 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4293_MI, L_43);
			V_9 = L_44;
			t31 * L_45 = (__this->f1);
			int32_t L_46 = V_7;
			t2* L_47 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4292_MI_var, L_45, L_46);
			V_10 = L_47;
			t2* L_48 = V_10;
			t729 * L_49 = m4274(NULL, &m4274_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			bool L_50 = m3585(NULL, L_48, L_49, &m3585_MI);
			if (!L_50)
			{
				goto IL_0144;
			}
		}

IL_0132:
		{
			t2* L_51 = V_10;
			int32_t L_52 = m4282(L_51, (t2*) &_stringLiteral246, &m4282_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_59 = m4274(NULL, &m4274_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t2* L_60 = m3582(NULL, L_58, L_59, &m3582_MI);
			ArrayElementTypeCheck (L_57, L_60);
			*((t2**)(t2**)SZArrayLdElema(L_57, 3)) = (t2*)L_60;
			t221* L_61 = L_57;
			ArrayElementTypeCheck (L_61, (t2*) &_stringLiteral248);
			*((t2**)(t2**)SZArrayLdElema(L_61, 4)) = (t2*)(t2*) &_stringLiteral248;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_62 = m4294(NULL, L_61, &m4294_MI);
			V_10 = L_62;
		}

IL_017d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_63 = m4274(NULL, &m4274_MI);
			t2* L_64 = V_10;
			t730* L_65 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_63, L_64);
			V_11 = L_65;
			t888 * L_66 = V_6;
			t730* L_67 = V_11;
			t730* L_68 = V_11;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_66, L_67, 0, (((int32_t)(((t121 *)L_68)->max_length))));
			t888 * L_69 = V_6;
			t730* L_70 = V_4;
			t730* L_71 = V_4;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_69, L_70, 0, (((int32_t)(((t121 *)L_71)->max_length))));
			t31 * L_72 = (__this->f2);
			int32_t L_73 = V_7;
			t2* L_74 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4292_MI_var, L_72, L_73);
			if (!L_74)
			{
				goto IL_025c;
			}
		}

IL_01b9:
		{
			t31 * L_75 = (__this->f2);
			int32_t L_76 = V_7;
			t2* L_77 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4292_MI_var, L_75, L_76);
			V_12 = L_77;
			t2* L_78 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_79 = m4274(NULL, &m4274_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			bool L_80 = m3585(NULL, L_78, L_79, &m3585_MI);
			if (!L_80)
			{
				goto IL_01eb;
			}
		}

IL_01d9:
		{
			t2* L_81 = V_12;
			int32_t L_82 = m4282(L_81, (t2*) &_stringLiteral246, &m4282_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_89 = m4274(NULL, &m4274_MI);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t2* L_90 = m3582(NULL, L_88, L_89, &m3582_MI);
			ArrayElementTypeCheck (L_87, L_90);
			*((t2**)(t2**)SZArrayLdElema(L_87, 3)) = (t2*)L_90;
			t221* L_91 = L_87;
			ArrayElementTypeCheck (L_91, (t2*) &_stringLiteral248);
			*((t2**)(t2**)SZArrayLdElema(L_91, 4)) = (t2*)(t2*) &_stringLiteral248;
			IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
			t2* L_92 = m4294(NULL, L_91, &m4294_MI);
			V_12 = L_92;
		}

IL_0224:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_93 = m4274(NULL, &m4274_MI);
			t2* L_94 = V_12;
			t730* L_95 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_93, L_94);
			V_13 = L_95;
			t888 * L_96 = V_6;
			t730* L_97 = V_5;
			t730* L_98 = V_5;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_96, L_97, 0, (((int32_t)(((t121 *)L_98)->max_length))));
			t888 * L_99 = V_6;
			t730* L_100 = V_13;
			t730* L_101 = V_13;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_99, L_100, 0, (((int32_t)(((t121 *)L_101)->max_length))));
			t888 * L_102 = V_6;
			t730* L_103 = V_4;
			t730* L_104 = V_4;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_102, L_103, 0, (((int32_t)(((t121 *)L_104)->max_length))));
		}

IL_025c:
		{
			t888 * L_105 = V_6;
			t730* L_106 = V_1;
			t730* L_107 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_105, L_106, 0, (((int32_t)(((t121 *)L_107)->max_length))));
			t888 * L_108 = V_6;
			t730* L_109 = V_1;
			t730* L_110 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_108, L_109, 0, (((int32_t)(((t121 *)L_110)->max_length))));
			t732 * L_111 = (__this->f0);
			int32_t L_112 = V_7;
			t730* L_113 = (t730*)VirtFuncInvoker1< t730*, int32_t >::Invoke(m4295_MI_var, L_111, L_112);
			V_14 = L_113;
			t888 * L_114 = V_6;
			t730* L_115 = V_14;
			t730* L_116 = V_14;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_114, L_115, 0, (((int32_t)(((t121 *)L_116)->max_length))));
			int32_t L_117 = V_7;
			V_7 = ((int32_t)((int32_t)L_117+(int32_t)1));
		}

IL_0297:
		{
			int32_t L_118 = V_7;
			t732 * L_119 = (__this->f0);
			int32_t L_120 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4296_MI_var, L_119);
			if ((((int32_t)L_118) < ((int32_t)L_120)))
			{
				goto IL_0081;
			}
		}

IL_02a9:
		{
			t888 * L_121 = V_6;
			t730* L_122 = V_1;
			t730* L_123 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_121, L_122, 0, (((int32_t)(((t121 *)L_123)->max_length))));
			t888 * L_124 = V_6;
			t730* L_125 = V_0;
			t730* L_126 = V_0;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_124, L_125, 0, (((int32_t)(((t121 *)L_126)->max_length))));
			t888 * L_127 = V_6;
			t730* L_128 = (__this->f4);
			t730* L_129 = (__this->f4);
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_127, L_128, 0, (((int32_t)(((t121 *)L_129)->max_length))));
			t888 * L_130 = V_6;
			t730* L_131 = V_0;
			t730* L_132 = V_0;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_130, L_131, 0, (((int32_t)(((t121 *)L_132)->max_length))));
			t888 * L_133 = V_6;
			t730* L_134 = V_1;
			t730* L_135 = V_1;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_133, L_134, 0, (((int32_t)(((t121 *)L_135)->max_length))));
			t888 * L_136 = V_6;
			t730* L_137 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m4297_MI, L_136);
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
			t888 * L_138 = V_6;
			if (!L_138)
			{
				goto IL_0310;
			}
		}

IL_0309:
		{
			t888 * L_139 = V_6;
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
		t729 * L_140 = m3566(NULL, &m3566_MI);
		t730* L_141 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_140, (t2*) &_stringLiteral249);
		V_15 = L_141;
		t729 * L_142 = m3566(NULL, &m3566_MI);
		t730* L_143 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_142, (t2*) &_stringLiteral250);
		V_16 = L_143;
		t888 * L_144 = (t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t888_TI));
		m4290(L_144, ((int32_t)1024), &m4290_MI);
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t729_TI));
			t729 * L_145 = m4274(NULL, &m4274_MI);
			t31 * L_146 = (__this->f1);
			int32_t L_147 = V_18;
			t2* L_148 = (t2*)VirtFuncInvoker1< t2*, int32_t >::Invoke(m4292_MI_var, L_146, L_147);
			t730* L_149 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_145, L_148);
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t730* L_150 = m3581(NULL, L_149, &m3581_MI);
			V_19 = L_150;
			t732 * L_151 = (__this->f0);
			int32_t L_152 = V_18;
			t730* L_153 = (t730*)VirtFuncInvoker1< t730*, int32_t >::Invoke(m4295_MI_var, L_151, L_152);
			V_20 = L_153;
			t730* L_154 = V_20;
			t730* L_155 = m3581(NULL, L_154, &m3581_MI);
			V_21 = L_155;
			int32_t L_156 = V_18;
			if ((((int32_t)L_156) <= ((int32_t)0)))
			{
				goto IL_0393;
			}
		}

IL_0385:
		{
			t888 * L_157 = V_17;
			t730* L_158 = V_15;
			t730* L_159 = V_15;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_157, L_158, 0, (((int32_t)(((t121 *)L_159)->max_length))));
		}

IL_0393:
		{
			t888 * L_160 = V_17;
			t730* L_161 = V_19;
			t730* L_162 = V_19;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_160, L_161, 0, (((int32_t)(((t121 *)L_162)->max_length))));
			t888 * L_163 = V_17;
			t730* L_164 = V_16;
			t730* L_165 = V_16;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_163, L_164, 0, (((int32_t)(((t121 *)L_165)->max_length))));
			t888 * L_166 = V_17;
			t730* L_167 = V_21;
			t730* L_168 = V_21;
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, L_166, L_167, 0, (((int32_t)(((t121 *)L_168)->max_length))));
			int32_t L_169 = V_18;
			V_18 = ((int32_t)((int32_t)L_169+(int32_t)1));
		}

IL_03c3:
		{
			int32_t L_170 = V_18;
			t732 * L_171 = (__this->f0);
			int32_t L_172 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4296_MI_var, L_171);
			if ((((int32_t)L_170) < ((int32_t)L_172)))
			{
				goto IL_0347;
			}
		}

IL_03d5:
		{
			t888 * L_173 = V_17;
			t730* L_174 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m4297_MI, L_173);
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
			t888 * L_175 = V_17;
			if (!L_175)
			{
				goto IL_03f6;
			}
		}

IL_03ef:
		{
			t888 * L_176 = V_17;
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
		t730* L_177 = V_22;
		return L_177;
	}
}
#include "t733.h"
#ifndef _MSC_VER
#else
#endif

#include "t121MD.h"
extern MethodInfo m3583_MI;
extern MethodInfo m4302_MI;
extern MethodInfo m3584_MI;
extern MethodInfo m3580_MI;
extern MethodInfo m3586_MI;
struct t121;
#include "t132.h"
extern "C" int32_t m4303_gshared (t9 * __this , t730* p0, uint8_t p1, MethodInfo* method);
#define m4303(__this , p0, p1, method) (( int32_t (*) (t9 * , t730*, uint8_t, MethodInfo*))m4303_gshared)(__this , p0, p1, method)
extern Il2CppGenericMethod m4303_GM;


extern MethodInfo m3579_MI;
extern "C" void m3579 (t9 * __this , MethodInfo* method)
{
	{
		t729 * L_0 = m3566(NULL, &m3566_MI);
		t730* L_1 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_0, (t2*) &_stringLiteral252);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f0 = L_1;
		t729 * L_2 = m3566(NULL, &m3566_MI);
		t730* L_3 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_2, (t2*) &_stringLiteral253);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1 = L_3;
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f2 = ((int32_t)37);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3 = ((int32_t)43);
		t729 * L_4 = m3566(NULL, &m3566_MI);
		t730* L_5 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_4, (t2*) &_stringLiteral254);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f4 = L_5;
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f5 = ((int32_t)61);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f6 = ((int32_t)95);
		t729 * L_6 = m3566(NULL, &m3566_MI);
		t730* L_7 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_6, (t2*) &_stringLiteral255);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f7 = L_7;
		return;
	}
}
extern TypeInfo* t730_TI_var;
extern "C" t730* m3580 (t9 * __this , uint8_t p0, t730* p1, MethodInfo* method)
{
	static bool m3580_init;
	if (!m3580_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m3580_init = true;
	}
	t730* V_0 = {0};
	{
		V_0 = ((t730*)SZArrayNew(t730_TI_var, 2));
		t730* L_0 = V_0;
		t730* L_1 = p1;
		uint8_t L_2 = p0;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>(int32_t)4));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		t730* L_4 = V_0;
		t730* L_5 = p1;
		uint8_t L_6 = p0;
		int32_t L_7 = ((int32_t)((int32_t)L_6&(int32_t)((int32_t)15)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 1)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		t730* L_8 = V_0;
		return L_8;
	}
}
extern "C" t730* m3581 (t9 * __this , t730* p0, MethodInfo* method)
{
	{
		t730* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		uint8_t L_1 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f2;
		uint8_t L_2 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3;
		t730* L_3 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f4;
		t730* L_4 = m3583(NULL, L_0, L_1, L_2, L_3, 0, &m3583_MI);
		return L_4;
	}
}
extern "C" t2* m3582 (t9 * __this , t2* p0, t729 * p1, MethodInfo* method)
{
	t730* V_0 = {0};
	{
		t729 * L_0 = p1;
		t2* L_1 = p0;
		t730* L_2 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		uint8_t L_3 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f5;
		uint8_t L_4 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f6;
		t730* L_5 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f7;
		t730* L_6 = m3583(NULL, L_2, L_3, L_4, L_5, 1, &m3583_MI);
		V_0 = L_6;
		t729 * L_7 = m3566(NULL, &m3566_MI);
		t730* L_8 = V_0;
		t730* L_9 = V_0;
		t2* L_10 = (t2*)VirtFuncInvoker3< t2*, t730*, int32_t, int32_t >::Invoke(&m4266_MI, L_7, L_8, 0, (((int32_t)(((t121 *)L_9)->max_length))));
		return L_10;
	}
}
extern "C" t730* m3583 (t9 * __this , t730* p0, uint8_t p1, uint8_t p2, t730* p3, bool p4, MethodInfo* method)
{
	t888 * V_0 = {0};
	int32_t V_1 = 0;
	t730* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	t888 * G_B9_1 = {0};
	int32_t G_B8_0 = 0;
	t888 * G_B8_1 = {0};
	t730* G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	t888 * G_B10_2 = {0};
	{
		t730* L_0 = p0;
		t888 * L_1 = (t888 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t888_TI));
		m4290(L_1, ((int32_t)((int32_t)(((int32_t)(((t121 *)L_0)->max_length)))*(int32_t)2)), &m4290_MI);
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
			t730* L_2 = p0;
			int32_t L_3 = V_1;
			int32_t L_4 = L_3;
			if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4))) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0028;
			}
		}

IL_001c:
		{
			t888 * L_5 = V_0;
			uint8_t L_6 = p2;
			VirtActionInvoker1< uint8_t >::Invoke(&m4302_MI, L_5, L_6);
			goto IL_0085;
		}

IL_0028:
		{
			t730* L_7 = p0;
			int32_t L_8 = V_1;
			int32_t L_9 = L_8;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9))) < ((int32_t)((int32_t)32))))
			{
				goto IL_004a;
			}
		}

IL_0032:
		{
			t730* L_10 = p0;
			int32_t L_11 = V_1;
			int32_t L_12 = L_11;
			if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_12))) > ((int32_t)((int32_t)126))))
			{
				goto IL_004a;
			}
		}

IL_003c:
		{
			t730* L_13 = p3;
			t730* L_14 = p0;
			int32_t L_15 = V_1;
			int32_t L_16 = L_15;
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			bool L_17 = m3584(NULL, L_13, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_14, L_16)), &m3584_MI);
			if (!L_17)
			{
				goto IL_007c;
			}
		}

IL_004a:
		{
			t888 * L_18 = V_0;
			uint8_t L_19 = p1;
			VirtActionInvoker1< uint8_t >::Invoke(&m4302_MI, L_18, L_19);
			t888 * L_20 = V_0;
			t730* L_21 = p0;
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
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t730* L_25 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f0;
			G_B10_0 = L_25;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_006b;
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t730* L_26 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1;
			G_B10_0 = L_26;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_006b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
			t730* L_27 = m3580(NULL, G_B10_1, G_B10_0, &m3580_MI);
			VirtActionInvoker3< t730*, int32_t, int32_t >::Invoke(&m4291_MI, G_B10_2, L_27, 0, 2);
			goto IL_0085;
		}

IL_007c:
		{
			t888 * L_28 = V_0;
			t730* L_29 = p0;
			int32_t L_30 = V_1;
			int32_t L_31 = L_30;
			VirtActionInvoker1< uint8_t >::Invoke(&m4302_MI, L_28, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_31)));
		}

IL_0085:
		{
			int32_t L_32 = V_1;
			V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
		}

IL_0089:
		{
			int32_t L_33 = V_1;
			t730* L_34 = p0;
			if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((t121 *)L_34)->max_length))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			t888 * L_35 = V_0;
			t730* L_36 = (t730*)VirtFuncInvoker0< t730* >::Invoke(&m4297_MI, L_35);
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
			t888 * L_37 = V_0;
			if (!L_37)
			{
				goto IL_00af;
			}
		}

IL_00a9:
		{
			t888 * L_38 = V_0;
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
		t730* L_39 = V_2;
		return L_39;
	}
}
extern MethodInfo* m4303_MI_var;
extern "C" bool m3584 (t9 * __this , t730* p0, uint8_t p1, MethodInfo* method)
{
	static bool m3584_init;
	if (!m3584_init)
	{
		m4303_MI_var = il2cpp_codegen_genericmethod_get_method(&m4303_GM);
		m3584_init = true;
	}
	{
		t730* L_0 = p0;
		uint8_t L_1 = p1;
		int32_t L_2 = m4303(NULL, L_0, L_1, m4303_MI_var);
		return ((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern "C" bool m3585 (t9 * __this , t2* p0, t729 * p1, MethodInfo* method)
{
	{
		t729 * L_0 = p1;
		t2* L_1 = p0;
		t730* L_2 = (t730*)VirtFuncInvoker1< t730*, t2* >::Invoke(&m4289_MI, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		bool L_3 = m3586(NULL, L_2, &m3586_MI);
		return L_3;
	}
}
extern "C" bool m3586 (t9 * __this , t730* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0007:
	{
		t730* L_0 = p0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2))) < ((int32_t)((int32_t)32))))
		{
			goto IL_001b;
		}
	}
	{
		t730* L_3 = p0;
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
		t730* L_8 = p0;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return 1;
	}
}
#include "t734.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t734_TI;
#include "t734MD.h"



// Conversion methods for marshalling of: UnityEngine.CacheIndex
void t734_marshal(const t734& unmarshaled, t734_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
}
void t734_marshal_back(const t734_marshaled& marshaled, t734& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void t734_marshal_cleanup(t734_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t735.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t735_TI;

extern MethodInfo m2909_MI;


extern "C" t2* m3587 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2909(NULL, L_0, L_1, &m2909_MI);
		return L_2;
	}
}
#include "t173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t173_TI;

extern MethodInfo m3589_MI;


extern "C" void m3588 (t173 * __this, MethodInfo* method)
{
	{
		m3712(__this, &m3712_MI);
		return;
	}
}
extern "C" void m3589 (t173 * __this, MethodInfo* method)
{
	typedef void (*m3589_ftn) (t173 *);
	static m3589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3590_MI;
extern "C" void m3590 (t173 * __this, MethodInfo* method)
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
		m3589(__this, &m3589_MI);
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
#include "t736.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t736_TI;
#include "t736MD.h"



extern MethodInfo m3591_MI;
extern "C" void m3591 (t736 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3592_MI;
extern "C" void m3592 (t736 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3592((t736 *)__this->f9,p0, p1, p2, method);
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
extern "C" void pinvoke_delegate_wrapper_t736(Il2CppObject* delegate, t2* p0, t2* p1, int32_t p2)
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
extern MethodInfo m3593_MI;
extern "C" t9 * m3593 (t736 * __this, t2* p0, t2* p1, int32_t p2, t470 * p3, t9 * p4, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = Box(InitializedTypeInfo(&t685_TI), &p2);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p3, (Il2CppObject*)p4);
}
extern MethodInfo m3594_MI;
extern "C" void m3594 (t736 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t174_TI;
#include "t174MD.h"

extern MethodInfo m3595_MI;


extern MethodInfo m1090_MI;
extern "C" void m1090 (t9 * __this , MethodInfo* method)
{
	typedef void (*m1090_ftn) ();
	static m1090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
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
		m3595(NULL, (t2*)NULL, L_0, 0, 1, &m3595_MI);
		return;
	}
}
extern MethodInfo m594_MI;
extern "C" t173 * m594 (t9 * __this , t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t173 * L_1 = m3595(NULL, L_0, (-1), 0, 0, &m3595_MI);
		return L_1;
	}
}
extern "C" t173 * m3595 (t9 * __this , t2* p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	typedef t173 * (*m3595_ftn) (t2*, int32_t, bool, bool);
	static m3595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
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
extern MethodInfo m2819_MI;
extern "C" bool m2819 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2819_ftn) ();
	static m2819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1110_MI;
extern "C" int32_t m1110 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m1110_ftn) ();
	static m1110_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1110_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1091_MI;
extern "C" t2* m1091 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m1091_ftn) ();
	static m1091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3596_MI;
extern "C" void m3596 (t9 * __this , t2* p0, t2* p1, int32_t p2, bool p3, MethodInfo* method)
{
	t736 * V_0 = {0};
	t736 * V_1 = {0};
	{
		bool L_0 = p3;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		t736 * L_1 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f0;
		V_0 = L_1;
		t736 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		t736 * L_3 = V_0;
		t2* L_4 = p0;
		t2* L_5 = p1;
		int32_t L_6 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3592_MI, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		t736 * L_7 = ((t174_SFs*)InitializedTypeInfo(&t174_TI)->static_fields)->f1;
		V_1 = L_7;
		t736 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		t736 * L_9 = V_1;
		t2* L_10 = p0;
		t2* L_11 = p1;
		int32_t L_12 = p2;
		VirtActionInvoker3< t2*, t2*, int32_t >::Invoke(&m3592_MI, L_9, L_10, L_11, L_12);
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

extern MethodInfo m3677_MI;


extern MethodInfo m3597_MI;
extern "C" void m3597 (t145 * __this, MethodInfo* method)
{
	{
		m3677(__this, &m3677_MI);
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
extern MethodInfo m2489_MI;
extern "C" bool m2489 (t145 * __this, MethodInfo* method)
{
	typedef bool (*m2489_ftn) (t145 *);
	static m2489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
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
