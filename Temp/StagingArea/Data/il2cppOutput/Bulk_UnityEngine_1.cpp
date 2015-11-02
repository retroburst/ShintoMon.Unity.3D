#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t744.h"
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
extern TypeInfo t744_TI;
#include "t744MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t39.h"
#include "t477.h"

#include "t121.h"

extern MethodInfo m3637_MI;
extern "C" void m3637 (t744 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3638_MI;
extern "C" void m3638 (t744 * __this, t39 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3638((t744 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t39 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t39 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t744(Il2CppObject* delegate, t39 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t39 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
extern MethodInfo m3639_MI;
extern "C" t9 * m3639 (t744 * __this, t39 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3640_MI;
extern "C" void m3640 (t744 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t39_TI;
#include "t39MD.h"

#include "t123.h"
#include "t151.h"
#include "t124.h"
#include "t125.h"
#include "t43.h"
#include "t448.h"
#include "t44.h"
#include "t46.h"
#include "t146.h"
#include "t150.h"
#include "t13.h"
#include "t74.h"
#include "UnityEngine_ArrayTypes.h"
#include "t59.h"
#include "t47.h"
extern TypeInfo t122_TI;
extern MethodInfo m3642_MI;
extern MethodInfo m3643_MI;
extern MethodInfo m3644_MI;
extern MethodInfo m3646_MI;
extern MethodInfo m3647_MI;
extern MethodInfo m3648_MI;
extern MethodInfo m3649_MI;
extern MethodInfo m3650_MI;
extern MethodInfo m3651_MI;
extern MethodInfo m3658_MI;
extern MethodInfo m3660_MI;
extern MethodInfo m3661_MI;


extern MethodInfo m504_MI;
extern "C" float m504 (t39 * __this, MethodInfo* method)
{
	typedef float (*m504_ftn) (t39 *);
	static m504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_fieldOfView()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m505_MI;
extern "C" void m505 (t39 * __this, float p0, MethodInfo* method)
{
	typedef void (*m505_ftn) (t39 *, float);
	static m505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m500_MI;
extern "C" float m500 (t39 * __this, MethodInfo* method)
{
	typedef float (*m500_ftn) (t39 *);
	static m500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m501_MI;
extern "C" void m501 (t39 * __this, float p0, MethodInfo* method)
{
	typedef void (*m501_ftn) (t39 *, float);
	static m501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m498_MI;
extern "C" float m498 (t39 * __this, MethodInfo* method)
{
	typedef float (*m498_ftn) (t39 *);
	static m498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m498_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m499_MI;
extern "C" void m499 (t39 * __this, float p0, MethodInfo* method)
{
	typedef void (*m499_ftn) (t39 *, float);
	static m499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m468_MI;
extern "C" void m468 (t39 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m468_ftn) (t39 *, int32_t);
	static m468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m468_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_renderingPath(UnityEngine.RenderingPath)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m508_MI;
extern "C" float m508 (t39 * __this, MethodInfo* method)
{
	typedef float (*m508_ftn) (t39 *);
	static m508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m509_MI;
extern "C" void m509 (t39 * __this, float p0, MethodInfo* method)
{
	typedef void (*m509_ftn) (t39 *, float);
	static m509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m502_MI;
extern "C" bool m502 (t39 * __this, MethodInfo* method)
{
	typedef bool (*m502_ftn) (t39 *);
	static m502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m503_MI;
extern "C" void m503 (t39 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m503_ftn) (t39 *, bool);
	static m503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2461_MI;
extern "C" float m2461 (t39 * __this, MethodInfo* method)
{
	typedef float (*m2461_ftn) (t39 *);
	static m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m506_MI;
extern "C" float m506 (t39 * __this, MethodInfo* method)
{
	typedef float (*m506_ftn) (t39 *);
	static m506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_aspect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m507_MI;
extern "C" void m507 (t39 * __this, float p0, MethodInfo* method)
{
	typedef void (*m507_ftn) (t39 *, float);
	static m507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_aspect(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2597_MI;
extern "C" int32_t m2597 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m2597_ftn) (t39 *);
	static m2597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m435_MI;
extern "C" void m435 (t39 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m435_ftn) (t39 *, int32_t);
	static m435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m435_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3641_MI;
extern "C" int32_t m3641 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m3641_ftn) (t39 *);
	static m3641_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3641_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3642 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3642_ftn) (t39 *, t43 *);
	static m3642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3643 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3643_ftn) (t39 *, t43 *);
	static m3643_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3643_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m497_MI;
extern "C" t43  m497 (t39 * __this, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		m3642(__this, (&V_0), &m3642_MI);
		t43  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m429_MI;
extern "C" void m429 (t39 * __this, t43  p0, MethodInfo* method)
{
	{
		m3643(__this, (&p0), &m3643_MI);
		return;
	}
}
extern "C" void m3644 (t39 * __this, t448 * p0, MethodInfo* method)
{
	typedef void (*m3644_ftn) (t39 *, t448 *);
	static m3644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3645_MI;
extern "C" t448  m3645 (t39 * __this, MethodInfo* method)
{
	t448  V_0 = {0};
	{
		m3644(__this, (&V_0), &m3644_MI);
		t448  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m431_MI;
extern "C" t44 * m431 (t39 * __this, MethodInfo* method)
{
	typedef t44 * (*m431_ftn) (t39 *);
	static m431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m431_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m432_MI;
extern "C" void m432 (t39 * __this, t44 * p0, MethodInfo* method)
{
	typedef void (*m432_ftn) (t39 *, t44 *);
	static m432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m432_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m438_MI;
extern "C" int32_t m438 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m438_ftn) (t39 *);
	static m438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelWidth()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m440_MI;
extern "C" int32_t m440 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m440_ftn) (t39 *);
	static m440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_pixelHeight()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3646 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3646_ftn) (t39 *, t46 *);
	static m3646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3647 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3647_ftn) (t39 *, t46 *);
	static m3647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m461_MI;
extern "C" t46  m461 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3646(__this, (&V_0), &m3646_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m463_MI;
extern "C" void m463 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3647(__this, (&p0), &m3647_MI);
		return;
	}
}
extern "C" void m3648 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3648_ftn) (t39 *, t46 *);
	static m3648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3649 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3649_ftn) (t39 *, t46 *);
	static m3649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m464_MI;
extern "C" t46  m464 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3648(__this, (&V_0), &m3648_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m465_MI;
extern "C" void m465 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3649(__this, (&p0), &m3649_MI);
		return;
	}
}
extern MethodInfo m496_MI;
extern "C" int32_t m496 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m496_ftn) (t39 *);
	static m496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m430_MI;
extern "C" void m430 (t39 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m430_ftn) (t39 *, int32_t);
	static m430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m430_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2689_MI;
extern "C" t13  m2689 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3650(NULL, __this, (&p0), &m3650_MI);
		return L_0;
	}
}
extern "C" t13  m3650 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3650_ftn) (t39 *, t13 *);
	static m3650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m557_MI;
extern "C" t74  m557 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t74  L_0 = m3651(NULL, __this, (&p0), &m3651_MI);
		return L_0;
	}
}
extern "C" t74  m3651 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t74  (*m3651_ftn) (t39 *, t13 *);
	static m3651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m528_MI;
extern "C" t39 * m528 (t9 * __this , MethodInfo* method)
{
	typedef t39 * (*m528_ftn) ();
	static m528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
extern MethodInfo m485_MI;
extern "C" t39 * m485 (t9 * __this , MethodInfo* method)
{
	typedef t39 * (*m485_ftn) ();
	static m485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3652_MI;
extern "C" int32_t m3652 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3652_ftn) ();
	static m3652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3653_MI;
extern "C" int32_t m3653 (t9 * __this , t745* p0, MethodInfo* method)
{
	typedef int32_t (*m3653_ftn) (t745*);
	static m3653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3654_MI;
extern "C" void m3654 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t744 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t744 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3638_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3655_MI;
extern "C" void m3655 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t744 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t744 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3638_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3656_MI;
extern "C" void m3656 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t744 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t744 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3638_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m466_MI;
extern "C" void m466 (t39 * __this, MethodInfo* method)
{
	typedef void (*m466_ftn) (t39 *);
	static m466_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m466_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m529_MI;
extern "C" int32_t m529 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m529_ftn) (t39 *);
	static m529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depthTextureMode()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m467_MI;
extern "C" void m467 (t39 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m467_ftn) (t39 *, int32_t);
	static m467_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m467_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3657_MI;
extern "C" t59 * m3657 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3658(NULL, __this, (&p0), L_0, L_1, &m3658_MI);
		return L_2;
	}
}
extern "C" t59 * m3658 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3658_ftn) (t39 *, t74 *, float, int32_t);
	static m3658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m3659_MI;
extern "C" t59 * m3659 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3660(NULL, __this, (&p0), L_0, L_1, &m3660_MI);
		return L_2;
	}
}
extern "C" t59 * m3660 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3660_ftn) (t39 *, t74 *, float, int32_t);
	static m3660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m488_MI;
extern "C" t46  m488 (t39 * __this, t47  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3661(NULL, __this, (&p0), &m3661_MI);
		return L_0;
	}
}
extern "C" t46  m3661 (t9 * __this , t39 * p0, t47 * p1, MethodInfo* method)
{
	typedef t46  (*m3661_ftn) (t39 *, t47 *);
	static m3661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)");
	return _il2cpp_icall_func(p0, p1);
}
#include "t143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t143_TI;
#include "t143MD.h"

#include "t2.h"
#include "t57.h"
#include "t138.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo t9_TI;
extern TypeInfo t2_TI;
#include "t9MD.h"
#include "t2MD.h"
extern MethodInfo m673_MI;
extern MethodInfo m3662_MI;
extern MethodInfo m2948_MI;
extern MethodInfo m611_MI;
extern MethodInfo m1211_MI;
extern MethodInfo m400_MI;
extern MethodInfo m1212_MI;
extern MethodInfo m3663_MI;
extern MethodInfo m1219_MI;
extern MethodInfo m1220_MI;


extern "C" void m3662 (t9 * __this , int32_t p0, t2* p1, t57 * p2, MethodInfo* method)
{
	typedef void (*m3662_ftn) (int32_t, t2*, t57 *);
	static m3662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3663 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	typedef void (*m3663_ftn) (t138 *, t57 *);
	static m3663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1);
}
extern "C" void m611 (t9 * __this , t9 * p0, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		t9 * L_0 = p0;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		t9 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (t2*) &_stringLiteral256;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3662(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3662_MI);
		return;
	}
}
extern "C" void m1211 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		t9 * L_0 = p0;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		t9 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (t2*) &_stringLiteral256;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		t57 * L_3 = p1;
		m3662(NULL, G_B3_1, G_B3_0, L_3, &m3662_MI);
		return;
	}
}
extern MethodInfo m1218_MI;
extern "C" void m1218 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		m611(NULL, L_2, &m611_MI);
		return;
	}
}
extern MethodInfo m1217_MI;
extern "C" void m1217 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		t57 * L_3 = p0;
		m1211(NULL, L_2, L_3, &m1211_MI);
		return;
	}
}
extern "C" void m400 (t9 * __this , t9 * p0, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		t9 * L_0 = p0;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		t9 * L_1 = p0;
		t2* L_2 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (t2*) &_stringLiteral256;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3662(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3662_MI);
		return;
	}
}
extern "C" void m1212 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3662(NULL, 2, L_1, L_2, &m3662_MI);
		return;
	}
}
extern MethodInfo m1213_MI;
extern "C" void m1213 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		m400(NULL, L_2, &m400_MI);
		return;
	}
}
extern MethodInfo m1214_MI;
extern "C" void m1214 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		t57 * L_3 = p0;
		m1212(NULL, L_2, L_3, &m1212_MI);
		return;
	}
}
extern MethodInfo m1216_MI;
extern "C" void m1216 (t9 * __this , t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m3663(NULL, L_0, (t57 *)NULL, &m3663_MI);
		return;
	}
}
extern MethodInfo m1215_MI;
extern "C" void m1215 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		t57 * L_1 = p1;
		m3663(NULL, L_0, L_1, &m3663_MI);
		return;
	}
}
extern "C" void m1219 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		m3662(NULL, 1, L_1, (t57 *)NULL, &m3662_MI);
		return;
	}
}
extern "C" void m1220 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3662(NULL, 1, L_1, L_2, &m3662_MI);
		return;
	}
}
extern MethodInfo m1221_MI;
extern "C" void m1221 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		m1219(NULL, L_2, &m1219_MI);
		return;
	}
}
extern MethodInfo m1222_MI;
extern "C" void m1222 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2948(NULL, L_0, L_1, &m2948_MI);
		t57 * L_3 = p0;
		m1220(NULL, L_2, L_3, &m1220_MI);
		return;
	}
}
extern MethodInfo m1116_MI;
extern "C" bool m1116 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m1116_ftn) ();
	static m1116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::get_isDebugBuild()");
	return _il2cpp_icall_func();
}
#include "t746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t746_TI;
#include "t746MD.h"



extern MethodInfo m3664_MI;
extern "C" void m3664 (t746 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3665_MI;
extern "C" void m3665 (t746 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3665((t746 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t746(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3666_MI;
extern "C" t9 * m3666 (t746 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3667_MI;
extern "C" void m3667 (t746 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t747_TI;
#include "t747MD.h"

#include "t750.h"
#include "t297.h"
extern TypeInfo t58_TI;
extern TypeInfo t748_TI;
extern TypeInfo t13_TI;
#include "t58MD.h"
#include "t297MD.h"
extern Il2CppType t748_0_0_0;
extern MethodInfo m3689_MI;
extern MethodInfo m3688_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m336_MI;
extern MethodInfo m4345_MI;
extern MethodInfo m3668_MI;
extern MethodInfo m1106_MI;
extern MethodInfo m1107_MI;
extern MethodInfo m3692_MI;
extern MethodInfo m3693_MI;
extern MethodInfo m3691_MI;
extern MethodInfo m3694_MI;
extern MethodInfo m3695_MI;
extern MethodInfo m3669_MI;


extern "C" void m3668 (t747 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = {0};
		m4345(&L_0, 0, &m4345_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3669 (t747 * __this, t58 p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3670_MI;
extern TypeInfo* t748_TI_var;
extern "C" void m3670 (t9 * __this , MethodInfo* method)
{
	static bool m3670_init;
	if (!m3670_init)
	{
		t748_TI_var = il2cpp_codegen_class_from_type(&t748_0_0_0);
		m3670_init = true;
	}
	{
		t748* L_0 = ((t748*)SZArrayNew(t748_TI_var, 1));
		t747 * L_1 = (t747 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t747_TI));
		m3668(L_1, &m3668_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t747 **)(t747 **)SZArrayLdElema(L_0, 0)) = (t747 *)L_1;
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f1 = L_0;
		t748* L_2 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f1;
		int32_t L_3 = 0;
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f2 = (*(t747 **)(t747 **)SZArrayLdElema(L_2, L_3));
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3 = (t746 *)NULL;
		return;
	}
}
extern MethodInfo m3671_MI;
extern "C" void m3671 (t9 * __this , t746 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t746 * L_0 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3;
		t746 * L_1 = p0;
		t297 * L_2 = m1106(NULL, L_0, L_1, &m1106_MI);
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3 = ((t746 *)Castclass(L_2, InitializedTypeInfo(&t746_TI)));
		return;
	}
}
extern MethodInfo m3672_MI;
extern "C" void m3672 (t9 * __this , t746 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t746 * L_0 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3;
		t746 * L_1 = p0;
		t297 * L_2 = m1107(NULL, L_0, L_1, &m1107_MI);
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3 = ((t746 *)Castclass(L_2, InitializedTypeInfo(&t746_TI)));
		return;
	}
}
extern MethodInfo m3673_MI;
extern "C" int32_t m3673 (t747 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3689(NULL, L_0, (&V_0), (&V_1), &m3689_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3674_MI;
extern "C" int32_t m3674 (t747 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3689(NULL, L_0, (&V_0), (&V_1), &m3689_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3675_MI;
extern "C" int32_t m3675 (t747 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3688(NULL, L_0, (&V_0), (&V_1), &m3688_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3676_MI;
extern "C" int32_t m3676 (t747 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3688(NULL, L_0, (&V_0), (&V_1), &m3688_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3677_MI;
extern "C" t750  m3677 (t747 * __this, MethodInfo* method)
{
	t750  V_0 = {0};
	t750  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3690(NULL, L_0, (&V_0), (&V_1), &m3690_MI);
		t750  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3678_MI;
extern "C" t750  m3678 (t747 * __this, MethodInfo* method)
{
	t750  V_0 = {0};
	t750  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3690(NULL, L_0, (&V_0), (&V_1), &m3690_MI);
		t750  L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3679_MI;
extern "C" void m3679 (t747 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3692(NULL, L_0, 0, 0, ((int32_t)60), &m3692_MI);
		return;
	}
}
extern MethodInfo m3680_MI;
extern "C" void m3680 (t747 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3692(NULL, L_0, L_1, L_2, L_3, &m3692_MI);
		return;
	}
}
extern MethodInfo m3681_MI;
extern "C" void m3681 (t747 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3693(NULL, L_0, L_1, L_2, L_3, L_4, &m3693_MI);
		return;
	}
}
extern MethodInfo m3682_MI;
extern "C" void m3682 (t747 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		m3691(NULL, L_0, L_1, L_2, &m3691_MI);
		return;
	}
}
extern MethodInfo m3683_MI;
extern "C" bool m3683 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		bool L_0 = m3694(NULL, &m3694_MI);
		return L_0;
	}
}
extern MethodInfo m3684_MI;
extern "C" t13  m3684 (t9 * __this , t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&p0)->f1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&p0)->f2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		int32_t L_4 = m3695(NULL, L_2, L_3, (&V_1), (&V_2), &m3695_MI);
		(&V_0)->f3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->f1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->f2 = (((float)L_6));
		t13  L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3685_MI;
extern "C" t747 * m3685 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t747 * L_0 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3686_MI;
extern TypeInfo* t748_TI_var;
extern "C" void m3686 (t9 * __this , t749* p0, MethodInfo* method)
{
	static bool m3686_init;
	if (!m3686_init)
	{
		t748_TI_var = il2cpp_codegen_class_from_type(&t748_0_0_0);
		m3686_init = true;
	}
	int32_t V_0 = 0;
	{
		t749* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f1 = ((t748*)SZArrayNew(t748_TI_var, (((int32_t)(((t121 *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t748* L_1 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f1;
		int32_t L_2 = V_0;
		t749* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t747 * L_6 = (t747 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t747_TI));
		m3669(L_6, (*(t58*)(t58*)SZArrayLdElema(L_3, L_5)), &m3669_MI);
		ArrayElementTypeCheck (L_1, L_6);
		*((t747 **)(t747 **)SZArrayLdElema(L_1, L_2)) = (t747 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		t749* L_9 = p0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t748* L_10 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f1;
		int32_t L_11 = 0;
		((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f2 = (*(t747 **)(t747 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
extern MethodInfo m3687_MI;
extern "C" void m3687 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t746 * L_0 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t747_TI));
		t746 * L_1 = ((t747_SFs*)InitializedTypeInfo(&t747_TI)->static_fields)->f3;
		VirtActionInvoker0::Invoke(&m3665_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern "C" void m3688 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3688_ftn) (t58, int32_t*, int32_t*);
	static m3688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3689 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3689_ftn) (t58, int32_t*, int32_t*);
	static m3689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3690 (t9 * __this , t58 p0, t750 * p1, t750 * p2, MethodInfo* method)
{
	typedef void (*m3690_ftn) (t58, t750 *, t750 *);
	static m3690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3691 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3691_ftn) (t58, int32_t, int32_t);
	static m3691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3692 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m3692_ftn) (t58, int32_t, int32_t, int32_t);
	static m3692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" void m3693 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef void (*m3693_ftn) (t58, int32_t, int32_t, int32_t, int32_t);
	static m3693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern "C" bool m3694 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m3694_ftn) ();
	static m3694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m3695 (t9 * __this , int32_t p0, int32_t p1, int32_t* p2, int32_t* p3, MethodInfo* method)
{
	typedef int32_t (*m3695_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static m3695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t4_TI;
#include "t4MD.h"

#include "t171.h"
#include "t145MD.h"
extern MethodInfo m3636_MI;
extern MethodInfo m3696_MI;
extern MethodInfo m3697_MI;
extern MethodInfo m3699_MI;
extern MethodInfo m3700_MI;


extern MethodInfo m328_MI;
extern "C" void m328 (t4 * __this, MethodInfo* method)
{
	{
		m3636(__this, &m3636_MI);
		return;
	}
}
extern "C" void m3696 (t4 * __this, MethodInfo* method)
{
	typedef void (*m3696_ftn) (t4 *);
	static m3696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m632_MI;
extern "C" void m632 (t4 * __this, t2* p0, float p1, MethodInfo* method)
{
	typedef void (*m632_ftn) (t4 *, t2*, float);
	static m632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m1202_MI;
extern "C" void m1202 (t4 * __this, MethodInfo* method)
{
	{
		m3696(__this, &m3696_MI);
		return;
	}
}
extern MethodInfo m605_MI;
extern "C" t171 * m605 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t171 * L_1 = m3697(__this, L_0, &m3697_MI);
		return L_1;
	}
}
extern "C" t171 * m3697 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef t171 * (*m3697_ftn) (t4 *, t9 *);
	static m3697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m574_MI;
extern "C" t171 * m574 (t4 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	typedef t171 * (*m574_ftn) (t4 *, t2*, t9 *);
	static m574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m3698_MI;
extern "C" void m3698 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m3699(__this, L_0, &m3699_MI);
		return;
	}
}
extern MethodInfo m1252_MI;
extern "C" void m1252 (t4 * __this, t171 * p0, MethodInfo* method)
{
	{
		t171 * L_0 = p0;
		m3700(__this, L_0, &m3700_MI);
		return;
	}
}
extern "C" void m3699 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3699_ftn) (t4 *, t9 *);
	static m3699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3700 (t4 * __this, t171 * p0, MethodInfo* method)
{
	typedef void (*m3700_ftn) (t4 *, t171 *);
	static m3700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, p0);
}
#include "t330.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t330_TI;
#include "t330MD.h"



#include "t604.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t604_TI;
#include "t604MD.h"



#include "t141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t141_TI;
#include "t141MD.h"

#include "t28.h"


extern MethodInfo m2546_MI;
extern "C" int32_t m2546 (t141 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m391_MI;
extern "C" t28  m391 (t141 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m1244_MI;
extern "C" int32_t m1244 (t141 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void t141_marshal(const t141& unmarshaled, t141_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
}
void t141_marshal_back(const t141_marshaled& marshaled, t141& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void t141_marshal_cleanup(t141_marshaled& marshaled)
{
}
#include "t139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t139_TI;
#include "t139MD.h"

#include "t298.h"
extern TypeInfo t142_TI;
extern Il2CppType t142_0_0_0;
extern MethodInfo m389_MI;
extern MethodInfo m1243_MI;
extern MethodInfo m3704_MI;
extern MethodInfo m3702_MI;
extern MethodInfo m3703_MI;


extern MethodInfo m3701_MI;
extern "C" void m3701 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m3702 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3702_ftn) (int32_t);
	static m3702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3703 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3703_ftn) (int32_t);
	static m3703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m375_MI;
extern "C" float m375 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef float (*m375_ftn) (t2*);
	static m375_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m375_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxis(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m374_MI;
extern "C" float m374 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef float (*m374_ftn) (t2*);
	static m374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m376_MI;
extern "C" bool m376 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef bool (*m376_ftn) (t2*);
	static m376_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m376_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButton(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m377_MI;
extern "C" bool m377 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef bool (*m377_ftn) (t2*);
	static m377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m378_MI;
extern "C" bool m378 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef bool (*m378_ftn) (t2*);
	static m378_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m378_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonUp(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1113_MI;
extern "C" bool m1113 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3702(NULL, L_0, &m3702_MI);
		return L_1;
	}
}
extern MethodInfo m1110_MI;
extern "C" bool m1110 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3703(NULL, L_0, &m3703_MI);
		return L_1;
	}
}
extern MethodInfo m559_MI;
extern "C" bool m559 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m559_ftn) (int32_t);
	static m559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m562_MI;
extern "C" bool m562 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m562_ftn) (int32_t);
	static m562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m2547_MI;
extern "C" bool m2547 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m2547_ftn) (int32_t);
	static m2547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m380_MI;
extern "C" t13  m380 (t9 * __this , MethodInfo* method)
{
	typedef t13  (*m380_ftn) ();
	static m380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2548_MI;
extern "C" t28  m2548 (t9 * __this , MethodInfo* method)
{
	typedef t28  (*m2548_ftn) ();
	static m2548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2566_MI;
extern "C" bool m2566 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2566_ftn) ();
	static m2566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1111_MI;
extern "C" bool m1111 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m1111_ftn) ();
	static m1111_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1111_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_anyKey()");
	return _il2cpp_icall_func();
}
extern MethodInfo m381_MI;
extern "C" t13  m381 (t9 * __this , MethodInfo* method)
{
	typedef t13  (*m381_ftn) ();
	static m381_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m381_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_acceleration()");
	return _il2cpp_icall_func();
}
extern MethodInfo m390_MI;
extern TypeInfo* t142_TI_var;
extern "C" t142* m390 (t9 * __this , MethodInfo* method)
{
	static bool m390_init;
	if (!m390_init)
	{
		t142_TI_var = il2cpp_codegen_class_from_type(&t142_0_0_0);
		m390_init = true;
	}
	int32_t V_0 = 0;
	t142* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		int32_t L_0 = m389(NULL, &m389_MI);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((t142*)SZArrayNew(t142_TI_var, L_1));
		V_2 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		t142* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		t141  L_5 = m1243(NULL, L_4, &m1243_MI);
		*((t141 *)(t141 *)SZArrayLdElema(L_2, L_3)) = L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		t142* L_9 = V_1;
		return L_9;
	}
}
extern "C" t141  m1243 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t141  (*m1243_ftn) (int32_t);
	static m1243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" int32_t m389 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m389_ftn) ();
	static m389_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m389_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2584_MI;
extern "C" bool m2584 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2839_MI;
extern "C" void m2839 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m2839_ftn) (int32_t);
	static m2839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2764_MI;
extern "C" t2* m2764 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m2764_ftn) ();
	static m2764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
extern "C" void m3704 (t9 * __this , t28 * p0, MethodInfo* method)
{
	typedef void (*m3704_ftn) (t28 *);
	static m3704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2827_MI;
extern "C" void m2827 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		m3704(NULL, (&p0), &m3704_MI);
		return;
	}
}
#include "t147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t147_TI;
#include "t147MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t57_TI;
#include "t57MD.h"

#include "t93.h"
#include "t126.h"
#include "t570.h"
extern TypeInfo t570_TI;
#include "t570MD.h"
extern MethodInfo m3708_MI;
extern MethodInfo m631_MI;
extern MethodInfo m3709_MI;
extern MethodInfo m3710_MI;
extern MethodInfo m3711_MI;
extern MethodInfo m510_MI;
extern MethodInfo m3712_MI;
extern MethodInfo m3713_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m3714_MI;
extern MethodInfo m3707_MI;
extern MethodInfo m2949_MI;
extern MethodInfo m330_MI;


extern MethodInfo m3705_MI;
extern "C" void m3705 (t57 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3706_MI;
extern "C" t57 * m3706 (t9 * __this , t57 * p0, MethodInfo* method)
{
	typedef t57 * (*m3706_ftn) (t57 *);
	static m3706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(p0);
}
extern "C" t57 * m3707 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = m3708(NULL, L_0, (&p1), (&p2), &m3708_MI);
		return L_1;
	}
}
extern "C" t57 * m3708 (t9 * __this , t57 * p0, t13 * p1, t93 * p2, MethodInfo* method)
{
	typedef t57 * (*m3708_ftn) (t57 *, t13 *, t93 *);
	static m3708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m631 (t9 * __this , t57 * p0, float p1, MethodInfo* method)
{
	typedef void (*m631_ftn) (t57 *, float);
	static m631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m614_MI;
extern "C" void m614 (t9 * __this , t57 * p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		t57 * L_0 = p0;
		float L_1 = V_0;
		m631(NULL, L_0, L_1, &m631_MI);
		return;
	}
}
extern "C" void m3709 (t9 * __this , t57 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3709_ftn) (t57 *, bool);
	static m3709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m492_MI;
extern "C" void m492 (t9 * __this , t57 * p0, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		t57 * L_0 = p0;
		bool L_1 = V_0;
		m3709(NULL, L_0, L_1, &m3709_MI);
		return;
	}
}
extern "C" t131* m330 (t9 * __this , t126 * p0, MethodInfo* method)
{
	typedef t131* (*m330_ftn) (t126 *);
	static m330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m425_MI;
extern "C" t2* m425 (t57 * __this, MethodInfo* method)
{
	typedef t2* (*m425_ftn) (t57 *);
	static m425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m425_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m512_MI;
extern "C" void m512 (t57 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m512_ftn) (t57 *, t2*);
	static m512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m442_MI;
extern "C" void m442 (t57 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m442_ftn) (t57 *, int32_t);
	static m442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m442_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3710 (t9 * __this , t57 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3710_ftn) (t57 *, float);
	static m3710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m536_MI;
extern "C" void m536 (t9 * __this , t57 * p0, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		t57 * L_0 = p0;
		float L_1 = V_0;
		m3710(NULL, L_0, L_1, &m3710_MI);
		return;
	}
}
extern MethodInfo m648_MI;
extern "C" t2* m648 (t57 * __this, MethodInfo* method)
{
	typedef t2* (*m648_ftn) (t57 *);
	static m648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m645_MI;
extern "C" bool m645 (t57 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		bool L_1 = m3711(NULL, __this, ((t57 *)IsInst(L_0, InitializedTypeInfo(&t57_TI))), &m3711_MI);
		return L_1;
	}
}
extern MethodInfo m647_MI;
extern "C" int32_t m647 (t57 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = m510(__this, &m510_MI);
		return L_0;
	}
}
extern "C" bool m3711 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		t57 * L_0 = p0;
		V_0 = ((((t9*)(t57 *)L_0) == ((t9*)(t9 *)NULL))? 1 : 0);
		t57 * L_1 = p1;
		V_1 = ((((t9*)(t57 *)L_1) == ((t9*)(t9 *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		t57 * L_5 = p0;
		bool L_6 = m3712(NULL, L_5, &m3712_MI);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		t57 * L_8 = p1;
		bool L_9 = m3712(NULL, L_8, &m3712_MI);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		t57 * L_10 = p0;
		int32_t L_11 = (L_10->f0);
		t57 * L_12 = p1;
		int32_t L_13 = (L_12->f0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
extern "C" bool m3712 (t9 * __this , t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t58 L_1 = m3713(L_0, &m3713_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4346(NULL, L_1, L_2, &m4346_MI);
		return L_3;
	}
}
extern "C" int32_t m510 (t57 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" t58 m3713 (t57 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m535_MI;
extern "C" t57 * m535 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		m3714(NULL, L_0, (t2*) &_stringLiteral257, &m3714_MI);
		t57 * L_1 = p0;
		t13  L_2 = p1;
		t93  L_3 = p2;
		t57 * L_4 = m3707(NULL, L_1, L_2, L_3, &m3707_MI);
		return L_4;
	}
}
extern "C" void m3714 (t9 * __this , t9 * p0, t2* p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		t2* L_1 = p1;
		t570 * L_2 = (t570 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t570_TI));
		m2949(L_2, L_1, &m2949_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
extern MethodInfo m3715_MI;
extern "C" t57 * m3715 (t9 * __this , t126 * p0, MethodInfo* method)
{
	t131* V_0 = {0};
	{
		t126 * L_0 = p0;
		t131* L_1 = m330(NULL, L_0, &m330_MI);
		V_0 = L_1;
		t131* L_2 = V_0;
		if ((((int32_t)(((int32_t)(((t121 *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		t131* L_3 = V_0;
		int32_t L_4 = 0;
		return (*(t57 **)(t57 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (t57 *)NULL;
	}
}
extern MethodInfo m406_MI;
extern "C" bool m406 (t9 * __this , t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		bool L_1 = m3711(NULL, L_0, (t57 *)NULL, &m3711_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m333_MI;
extern "C" bool m333 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3711(NULL, L_0, L_1, &m3711_MI);
		return L_2;
	}
}
extern MethodInfo m332_MI;
extern "C" bool m332 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3711(NULL, L_0, L_1, &m3711_MI);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void t57_marshal(const t57& unmarshaled, t57_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
}
void t57_marshal_back(const t57_marshaled& marshaled, t57& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void t57_marshal_cleanup(t57_marshaled& marshaled)
{
}
#include "t133.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t133_TI;
#include "t133MD.h"

#include "t45.h"
#include "t549.h"
#include "t177.h"
#include "t59MD.h"
extern MethodInfo m362_MI;
extern MethodInfo m424_MI;
extern MethodInfo m3717_MI;
extern MethodInfo m3718_MI;
extern MethodInfo m3719_MI;


extern MethodInfo m3716_MI;
extern "C" void m3716 (t133 * __this, MethodInfo* method)
{
	{
		m3705(__this, &m3705_MI);
		return;
	}
}
extern MethodInfo m350_MI;
extern "C" t45 * m350 (t133 * __this, MethodInfo* method)
{
	typedef t45 * (*m350_ftn) (t133 *);
	static m350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m350_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern "C" t59 * m362 (t133 * __this, MethodInfo* method)
{
	typedef t59 * (*m362_ftn) (t133 *);
	static m362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m362_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m451_MI;
extern "C" t133 * m451 (t133 * __this, t126 * p0, MethodInfo* method)
{
	{
		t59 * L_0 = m362(__this, &m362_MI);
		t126 * L_1 = p0;
		t133 * L_2 = m424(L_0, L_1, &m424_MI);
		return L_2;
	}
}
extern "C" void m3717 (t133 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	typedef void (*m3717_ftn) (t133 *, t126 *, t9 *);
	static m3717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2639_MI;
extern "C" void m2639 (t133 * __this, t126 * p0, t549 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t549 * L_1 = p1;
		m3717(__this, L_0, L_1, &m3717_MI);
		return;
	}
}
extern "C" void m3718 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3718_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3718_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3718_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m601_MI;
extern "C" void m601 (t133 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	t9 * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		t2* L_0 = p0;
		t9 * L_1 = V_1;
		int32_t L_2 = V_0;
		m3718(__this, L_0, L_1, L_2, &m3718_MI);
		return;
	}
}
extern "C" void m3719 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3719_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m613_MI;
extern "C" void m613 (t133 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3719(__this, L_0, NULL, L_1, &m3719_MI);
		return;
	}
}
#include "t78.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t78_TI;
#include "t78MD.h"



extern MethodInfo m578_MI;
extern "C" float m578 (t78 * __this, MethodInfo* method)
{
	typedef float (*m578_ftn) (t78 *);
	static m578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::get_shadowStrength()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m588_MI;
extern "C" void m588 (t78 * __this, float p0, MethodInfo* method)
{
	typedef void (*m588_ftn) (t78 *, float);
	static m588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowStrength(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m587_MI;
extern "C" void m587 (t78 * __this, float p0, MethodInfo* method)
{
	typedef void (*m587_ftn) (t78 *, float);
	static m587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Light::set_shadowBias(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t59_TI;

extern MethodInfo m3724_MI;
extern MethodInfo m428_MI;
extern MethodInfo m3722_MI;
extern MethodInfo m3723_MI;


extern MethodInfo m359_MI;
extern "C" void m359 (t59 * __this, t2* p0, MethodInfo* method)
{
	{
		m3705(__this, &m3705_MI);
		t2* L_0 = p0;
		m3724(NULL, __this, L_0, &m3724_MI);
		return;
	}
}
extern MethodInfo m427_MI;
extern "C" void m427 (t59 * __this, t2* p0, t152* p1, MethodInfo* method)
{
	t126 * V_0 = {0};
	t152* V_1 = {0};
	int32_t V_2 = 0;
	{
		m3705(__this, &m3705_MI);
		t2* L_0 = p0;
		m3724(NULL, __this, L_0, &m3724_MI);
		t152* L_1 = p1;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		t152* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_0 = (*(t126 **)(t126 **)SZArrayLdElema(L_2, L_4));
		t126 * L_5 = V_0;
		m428(__this, L_5, &m428_MI);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		t152* L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((t121 *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
extern "C" t133 * m424 (t59 * __this, t126 * p0, MethodInfo* method)
{
	typedef t133 * (*m424_ftn) (t59 *, t126 *);
	static m424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3720_MI;
extern "C" t121 * m3720 (t59 * __this, t126 * p0, bool p1, bool p2, bool p3, bool p4, t9 * p5, MethodInfo* method)
{
	typedef t121 * (*m3720_ftn) (t59 *, t126 *, bool, bool, bool, bool, t9 *);
	static m3720_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3720_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, p0, p1, p2, p3, p4, p5);
}
extern MethodInfo m534_MI;
extern "C" t45 * m534 (t59 * __this, MethodInfo* method)
{
	typedef t45 * (*m534_ftn) (t59 *);
	static m534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2812_MI;
extern "C" int32_t m2812 (t59 * __this, MethodInfo* method)
{
	typedef int32_t (*m2812_ftn) (t59 *);
	static m2812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2813_MI;
extern "C" void m2813 (t59 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m2813_ftn) (t59 *, int32_t);
	static m2813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m363_MI;
extern "C" void m363 (t59 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m363_ftn) (t59 *, bool);
	static m363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1185_MI;
extern "C" bool m1185 (t59 * __this, MethodInfo* method)
{
	typedef bool (*m1185_ftn) (t59 *);
	static m1185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1101_MI;
extern "C" t2* m1101 (t59 * __this, MethodInfo* method)
{
	typedef t2* (*m1101_ftn) (t59 *);
	static m1101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1118_MI;
extern "C" t59 * m1118 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t59 * (*m1118_ftn) (t2*);
	static m1118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1257_MI;
extern "C" t100* m1257 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t100* (*m1257_ftn) (t2*);
	static m1257_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1257_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3721_MI;
extern "C" void m3721 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3721_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m3722 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3722_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m533_MI;
extern "C" void m533 (t59 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	t9 * V_1 = {0};
	{
		V_0 = 0;
		V_1 = NULL;
		t2* L_0 = p0;
		t9 * L_1 = V_1;
		int32_t L_2 = V_0;
		m3722(__this, L_0, L_1, L_2, &m3722_MI);
		return;
	}
}
extern "C" t133 * m3723 (t59 * __this, t126 * p0, MethodInfo* method)
{
	typedef t133 * (*m3723_ftn) (t59 *, t126 *);
	static m3723_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3723_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t133 * m428 (t59 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t133 * L_1 = m3723(__this, L_0, &m3723_MI);
		return L_1;
	}
}
extern "C" void m3724 (t9 * __this , t59 * p0, t2* p1, MethodInfo* method)
{
	typedef void (*m3724_ftn) (t59 *, t2*);
	static m3724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m426_MI;
extern "C" t59 * m426 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t59 * (*m426_ftn) (t2*);
	static m426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(p0);
}
#include "t751.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t751_TI;
#include "t751MD.h"

#include "t45MD.h"
extern MethodInfo m2987_MI;
extern MethodInfo m2990_MI;


extern MethodInfo m3725_MI;
extern "C" void m3725 (t751 * __this, t45 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t45 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3726_MI;
extern "C" t9 * m3726 (t751 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t45 * L_2 = m2987(L_0, L_1, &m2987_MI);
		return L_2;
	}
}
extern MethodInfo m3727_MI;
extern "C" bool m3727 (t751 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = m2990(L_0, &m2990_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->f1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t45_TI;

#include "t441.h"
#include "t67.h"
extern TypeInfo t441_TI;
#include "t93MD.h"
#include "t13MD.h"
extern MethodInfo m3728_MI;
extern MethodInfo m3729_MI;
extern MethodInfo m3730_MI;
extern MethodInfo m3731_MI;
extern MethodInfo m490_MI;
extern MethodInfo m3464_MI;
extern MethodInfo m3465_MI;
extern MethodInfo m491_MI;
extern MethodInfo m579_MI;
extern MethodInfo m627_MI;
extern MethodInfo m626_MI;
extern MethodInfo m3732_MI;
extern MethodInfo m3733_MI;
extern MethodInfo m3734_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m3736_MI;
extern MethodInfo m3737_MI;
extern MethodInfo m3738_MI;
extern MethodInfo m3739_MI;
extern MethodInfo m3741_MI;
extern MethodInfo m3740_MI;
extern MethodInfo m351_MI;
extern MethodInfo m476_MI;
extern MethodInfo m358_MI;
extern MethodInfo m3745_MI;
extern MethodInfo m623_MI;
extern MethodInfo m618_MI;
extern MethodInfo m624_MI;
extern MethodInfo m619_MI;
extern MethodInfo m2904_MI;
extern MethodInfo m3742_MI;
extern MethodInfo m3743_MI;
extern MethodInfo m3744_MI;
extern MethodInfo m3746_MI;
extern MethodInfo m3747_MI;
extern MethodInfo m3748_MI;
extern MethodInfo m3749_MI;


extern "C" void m3728 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3728_ftn) (t45 *, t13 *);
	static m3728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3728_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3729 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3729_ftn) (t45 *, t13 *);
	static m3729_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3729_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t13  m351 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3728(__this, (&V_0), &m3728_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m358 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3729(__this, (&p0), &m3729_MI);
		return;
	}
}
extern "C" void m3730 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3730_ftn) (t45 *, t13 *);
	static m3730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3731 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3731_ftn) (t45 *, t13 *);
	static m3731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m547_MI;
extern "C" t13  m547 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3730(__this, (&V_0), &m3730_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2820_MI;
extern "C" void m2820 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3731(__this, (&p0), &m3731_MI);
		return;
	}
}
extern MethodInfo m455_MI;
extern "C" t13  m455 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		t93  L_0 = m490(__this, &m490_MI);
		V_0 = L_0;
		t13  L_1 = m3464((&V_0), &m3464_MI);
		return L_1;
	}
}
extern MethodInfo m456_MI;
extern "C" void m456 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = m3465(NULL, L_0, &m3465_MI);
		m491(__this, L_1, &m491_MI);
		return;
	}
}
extern MethodInfo m457_MI;
extern "C" t13  m457 (t45 * __this, MethodInfo* method)
{
	{
		t93  L_0 = m490(__this, &m490_MI);
		t13  L_1 = m579(NULL, &m579_MI);
		t13  L_2 = m627(NULL, L_0, L_1, &m627_MI);
		return L_2;
	}
}
extern MethodInfo m480_MI;
extern "C" t13  m480 (t45 * __this, MethodInfo* method)
{
	{
		t93  L_0 = m490(__this, &m490_MI);
		t13  L_1 = m626(NULL, &m626_MI);
		t13  L_2 = m627(NULL, L_0, L_1, &m627_MI);
		return L_2;
	}
}
extern "C" void m3732 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3732_ftn) (t45 *, t93 *);
	static m3732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3733 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3733_ftn) (t45 *, t93 *);
	static m3733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m490 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3732(__this, (&V_0), &m3732_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m491 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3733(__this, (&p0), &m3733_MI);
		return;
	}
}
extern "C" void m3734 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3734_ftn) (t45 *, t93 *);
	static m3734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3735 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3735_ftn) (t45 *, t93 *);
	static m3735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m618 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3734(__this, (&V_0), &m3734_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m619 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3735(__this, (&p0), &m3735_MI);
		return;
	}
}
extern "C" void m3736 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3736_ftn) (t45 *, t13 *);
	static m3736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3737 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3737_ftn) (t45 *, t13 *);
	static m3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1097_MI;
extern "C" t13  m1097 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3736(__this, (&V_0), &m3736_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m1102_MI;
extern "C" void m1102 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3737(__this, (&p0), &m3737_MI);
		return;
	}
}
extern MethodInfo m530_MI;
extern "C" t45 * m530 (t45 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m3738(__this, &m3738_MI);
		return L_0;
	}
}
extern MethodInfo m598_MI;
extern "C" void m598 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		if (!((t441 *)IsInst(__this, InitializedTypeInfo(&t441_TI))))
		{
			goto IL_0016;
		}
	}
	{
		m1220(NULL, (t2*) &_stringLiteral258, __this, &m1220_MI);
	}

IL_0016:
	{
		t45 * L_0 = p0;
		m3739(__this, L_0, &m3739_MI);
		return;
	}
}
extern "C" t45 * m3738 (t45 * __this, MethodInfo* method)
{
	typedef t45 * (*m3738_ftn) (t45 *);
	static m3738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3739 (t45 * __this, t45 * p0, MethodInfo* method)
{
	typedef void (*m3739_ftn) (t45 *, t45 *);
	static m3739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2810_MI;
extern "C" void m2810 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		t45 * L_0 = p0;
		m3740(__this, L_0, 1, &m3740_MI);
		return;
	}
}
extern "C" void m3740 (t45 * __this, t45 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3740_ftn) (t45 *, t45 *, bool);
	static m3740_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3740_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m3741 (t45 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3741_ftn) (t45 *, t46 *);
	static m3741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2886_MI;
extern "C" t46  m2886 (t45 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3741(__this, (&V_0), &m3741_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m540_MI;
extern "C" void m540 (t45 * __this, t13  p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p1;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		t13  L_1 = m351(__this, &m351_MI);
		t13  L_2 = p0;
		t13  L_3 = m476(NULL, L_1, L_2, &m476_MI);
		m358(__this, L_3, &m358_MI);
		goto IL_0035;
	}

IL_001d:
	{
		t13  L_4 = m351(__this, &m351_MI);
		t13  L_5 = p0;
		t13  L_6 = m3745(__this, L_5, &m3745_MI);
		t13  L_7 = m476(NULL, L_4, L_6, &m476_MI);
		m358(__this, L_7, &m358_MI);
	}

IL_0035:
	{
		return;
	}
}
extern MethodInfo m541_MI;
extern "C" void m541 (t45 * __this, t13  p0, int32_t p1, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		float L_0 = ((&p0)->f1);
		float L_1 = ((&p0)->f2);
		float L_2 = ((&p0)->f3);
		t93  L_3 = m623(NULL, L_0, L_1, L_2, &m623_MI);
		V_0 = L_3;
		int32_t L_4 = p1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		t93  L_5 = m618(__this, &m618_MI);
		t93  L_6 = V_0;
		t93  L_7 = m624(NULL, L_5, L_6, &m624_MI);
		m619(__this, L_7, &m619_MI);
		goto IL_0066;
	}

IL_0039:
	{
		t93  L_8 = m490(__this, &m490_MI);
		t93  L_9 = m490(__this, &m490_MI);
		t93  L_10 = m2904(NULL, L_9, &m2904_MI);
		t93  L_11 = V_0;
		t93  L_12 = m624(NULL, L_10, L_11, &m624_MI);
		t93  L_13 = m490(__this, &m490_MI);
		t93  L_14 = m624(NULL, L_12, L_13, &m624_MI);
		t93  L_15 = m624(NULL, L_8, L_14, &m624_MI);
		m491(__this, L_15, &m491_MI);
	}

IL_0066:
	{
		return;
	}
}
extern MethodInfo m628_MI;
extern "C" void m628 (t45 * __this, t45 * p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t13  L_0 = m579(NULL, &m579_MI);
		V_0 = L_0;
		t45 * L_1 = p0;
		t13  L_2 = V_0;
		m3742(__this, L_1, L_2, &m3742_MI);
		return;
	}
}
extern "C" void m3742 (t45 * __this, t45 * p0, t13  p1, MethodInfo* method)
{
	{
		t45 * L_0 = p0;
		bool L_1 = m406(NULL, L_0, &m406_MI);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		t45 * L_2 = p0;
		t13  L_3 = m351(L_2, &m351_MI);
		t13  L_4 = p1;
		m3743(__this, L_3, L_4, &m3743_MI);
	}

IL_0018:
	{
		return;
	}
}
extern "C" void m3743 (t45 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3744(NULL, __this, (&p0), (&p1), &m3744_MI);
		return;
	}
}
extern MethodInfo m544_MI;
extern "C" void m544 (t45 * __this, t13  p0, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t13  L_0 = m579(NULL, &m579_MI);
		V_0 = L_0;
		m3744(NULL, __this, (&p0), (&V_0), &m3744_MI);
		return;
	}
}
extern "C" void m3744 (t9 * __this , t45 * p0, t13 * p1, t13 * p2, MethodInfo* method)
{
	typedef void (*m3744_ftn) (t45 *, t13 *, t13 *);
	static m3744_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3744_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t13  m3745 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3746(NULL, __this, (&p0), &m3746_MI);
		return L_0;
	}
}
extern "C" t13  m3746 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3746_ftn) (t45 *, t13 *);
	static m3746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3746_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2905_MI;
extern "C" t13  m2905 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3747(NULL, __this, (&p0), &m3747_MI);
		return L_0;
	}
}
extern "C" t13  m3747 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3747_ftn) (t45 *, t13 *);
	static m3747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2781_MI;
extern "C" t13  m2781 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3748(NULL, __this, (&p0), &m3748_MI);
		return L_0;
	}
}
extern "C" t13  m3748 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3748_ftn) (t45 *, t13 *);
	static m3748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m2990 (t45 * __this, MethodInfo* method)
{
	typedef int32_t (*m2990_ftn) (t45 *);
	static m2990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m633_MI;
extern "C" void m633 (t45 * __this, MethodInfo* method)
{
	typedef void (*m633_ftn) (t45 *);
	static m633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::DetachChildren()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2811_MI;
extern "C" void m2811 (t45 * __this, MethodInfo* method)
{
	typedef void (*m2811_ftn) (t45 *);
	static m2811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
extern "C" t45 * m3749 (t45 * __this, t2* p0, MethodInfo* method)
{
	typedef t45 * (*m3749_ftn) (t45 *, t2*);
	static m3749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1248_MI;
extern "C" t45 * m1248 (t45 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t45 * L_1 = m3749(__this, L_0, &m3749_MI);
		return L_1;
	}
}
extern MethodInfo m360_MI;
extern "C" t9 * m360 (t45 * __this, MethodInfo* method)
{
	{
		t751 * L_0 = (t751 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t751_TI));
		m3725(L_0, __this, &m3725_MI);
		return L_0;
	}
}
extern "C" t45 * m2987 (t45 * __this, int32_t p0, MethodInfo* method)
{
	typedef t45 * (*m2987_ftn) (t45 *, int32_t);
	static m2987_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2987_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
#include "t130.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t130_TI;
#include "t130MD.h"



extern MethodInfo m410_MI;
extern "C" float m410 (t9 * __this , MethodInfo* method)
{
	typedef float (*m410_ftn) ();
	static m410_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m410_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
extern MethodInfo m494_MI;
extern "C" float m494 (t9 * __this , MethodInfo* method)
{
	typedef float (*m494_ftn) ();
	static m494_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m494_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeSinceLevelLoad()");
	return _il2cpp_icall_func();
}
extern MethodInfo m334_MI;
extern "C" float m334 (t9 * __this , MethodInfo* method)
{
	typedef float (*m334_ftn) ();
	static m334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2568_MI;
extern "C" float m2568 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2568_ftn) ();
	static m2568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2608_MI;
extern "C" float m2608 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2608_ftn) ();
	static m2608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1119_MI;
extern "C" float m1119 (t9 * __this , MethodInfo* method)
{
	typedef float (*m1119_ftn) ();
	static m1119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1120_MI;
extern "C" void m1120 (t9 * __this , float p0, MethodInfo* method)
{
	typedef void (*m1120_ftn) (float);
	static m1120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m337_MI;
extern "C" int32_t m337 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m337_ftn) ();
	static m337_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m337_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m539_MI;
extern "C" float m539 (t9 * __this , MethodInfo* method)
{
	typedef float (*m539_ftn) ();
	static m539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m539_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	return _il2cpp_icall_func();
}
#include "t178.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t178_TI;
#include "t178MD.h"

extern MethodInfo m3750_MI;


extern MethodInfo m609_MI;
extern "C" float m609 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	typedef float (*m609_ftn) (float, float);
	static m609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1204_MI;
extern "C" int32_t m1204 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = m3750(NULL, L_0, L_1, &m3750_MI);
		return L_2;
	}
}
extern "C" int32_t m3750 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	typedef int32_t (*m3750_ftn) (int32_t, int32_t);
	static m3750_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3750_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1099_MI;
extern "C" t13  m1099 (t9 * __this , MethodInfo* method)
{
	typedef t13  (*m1099_ftn) ();
	static m1099_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1099_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_insideUnitSphere()");
	return _il2cpp_icall_func();
}
#include "t693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t693_TI;
#include "t693MD.h"



extern MethodInfo m3751_MI;
extern "C" void m3751 (t693 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void t693_marshal(const t693& unmarshaled, t693_marshaled& marshaled)
{
}
void t693_marshal_back(const t693_marshaled& marshaled, t693& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void t693_marshal_cleanup(t693_marshaled& marshaled)
{
}
#include "t752.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t752_TI;
#include "t752MD.h"

#include "t138MD.h"
extern MethodInfo m379_MI;


extern MethodInfo m3752_MI;
extern "C" void m3752 (t752 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m379(__this, L_0, &m379_MI);
		return;
	}
}
#include "t308.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t308_TI;
#include "t308MD.h"

extern MethodInfo m3753_MI;
extern MethodInfo m3754_MI;


extern "C" bool m3753 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	typedef bool (*m3753_ftn) (t2*, int32_t);
	static m3753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1136_MI;
extern "C" void m1136 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		bool L_2 = m3753(NULL, L_0, L_1, &m3753_MI);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		t752 * L_3 = (t752 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t752_TI));
		m3752(L_3, (t2*) &_stringLiteral259, &m3752_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
extern MethodInfo m1138_MI;
extern "C" int32_t m1138 (t9 * __this , t2* p0, int32_t p1, MethodInfo* method)
{
	typedef int32_t (*m1138_ftn) (t2*, int32_t);
	static m1138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" t2* m3754 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	typedef t2* (*m3754_ftn) (t2*, t2*);
	static m3754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3755_MI;
extern "C" t2* m3755 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = V_0;
		t2* L_3 = m3754(NULL, L_1, L_2, &m3754_MI);
		return L_3;
	}
}
extern MethodInfo m1137_MI;
extern "C" void m1137 (t9 * __this , MethodInfo* method)
{
	typedef void (*m1137_ftn) ();
	static m1137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
	_il2cpp_icall_func();
}
#include "t333.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t333_TI;
#include "t333MD.h"



extern MethodInfo m1254_MI;
extern "C" void m1254 (t9 * __this , MethodInfo* method)
{
	typedef void (*m1254_ftn) ();
	static m1254_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1254_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.DynamicGI::UpdateEnvironment()");
	_il2cpp_icall_func();
}
#include "t96.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t96_TI;
#include "t96MD.h"



extern MethodInfo m612_MI;
extern "C" void m612 (t96 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m612_ftn) (t96 *, bool);
	static m612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::set_enableEmission(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m607_MI;
extern "C" float m607 (t96 * __this, MethodInfo* method)
{
	typedef float (*m607_ftn) (t96 *);
	static m607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ParticleSystem::get_startLifetime()");
	return _il2cpp_icall_func(__this);
}
#include "t753.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t753_TI;
#include "t753MD.h"



extern MethodInfo m3756_MI;
extern "C" t13  m3756 (t753 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3757_MI;
extern "C" void m3757 (t753 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3758_MI;
extern "C" t13  m3758 (t753 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3759_MI;
extern "C" void m3759 (t753 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3760_MI;
extern "C" float m3760 (t753 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3761_MI;
extern "C" void m3761 (t753 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3762_MI;
extern "C" float m3762 (t753 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3763_MI;
extern "C" void m3763 (t753 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern MethodInfo m3764_MI;
extern "C" float m3764 (t753 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3765_MI;
extern "C" void m3765 (t753 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3766_MI;
extern "C" float m3766 (t753 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3767_MI;
extern "C" void m3767 (t753 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m3768_MI;
extern "C" float m3768 (t753 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3769_MI;
extern "C" void m3769 (t753 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3770_MI;
extern "C" t43  m3770 (t753 * __this, MethodInfo* method)
{
	{
		t43  L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3771_MI;
extern "C" void m3771 (t753 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
#include "t754.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t754_TI;
#include "t754MD.h"



#include "t165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t165_TI;
#include "t165MD.h"

#include "t164.h"
#include "t74MD.h"
extern MethodInfo m3773_MI;
extern MethodInfo m565_MI;
extern MethodInfo m3772_MI;
extern MethodInfo m2690_MI;
extern MethodInfo m563_MI;
extern MethodInfo m564_MI;
extern MethodInfo m3774_MI;
extern MethodInfo m3775_MI;


extern "C" bool m3772 (t9 * __this , t13  p0, t13  p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	{
		t164 * L_0 = p2;
		float L_1 = p3;
		int32_t L_2 = p4;
		bool L_3 = m3773(NULL, (&p0), (&p1), L_0, L_1, L_2, &m3773_MI);
		return L_3;
	}
}
extern "C" bool m3773 (t9 * __this , t13 * p0, t13 * p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m3773_ftn) (t13 *, t13 *, t164 *, float, int32_t);
	static m3773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern MethodInfo m542_MI;
extern "C" bool m542 (t9 * __this , t13  p0, t13  p1, t164 * p2, float p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		t13  L_0 = p0;
		t13  L_1 = p1;
		t164 * L_2 = p2;
		float L_3 = p3;
		int32_t L_4 = V_0;
		bool L_5 = m565(NULL, L_0, L_1, L_2, L_3, L_4, &m565_MI);
		return L_5;
	}
}
extern "C" bool m565 (t9 * __this , t13  p0, t13  p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t13  L_1 = p1;
		t164 * L_2 = p2;
		float L_3 = p3;
		int32_t L_4 = p4;
		bool L_5 = m3772(NULL, L_0, L_1, L_2, L_3, L_4, &m3772_MI);
		return L_5;
	}
}
extern MethodInfo m582_MI;
extern "C" bool m582 (t9 * __this , t74  p0, t164 * p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = ((int32_t)-5);
		V_1 = (std::numeric_limits<float>::infinity());
		t74  L_0 = p0;
		t164 * L_1 = p1;
		float L_2 = V_1;
		int32_t L_3 = V_0;
		bool L_4 = m2690(NULL, L_0, L_1, L_2, L_3, &m2690_MI);
		return L_4;
	}
}
extern "C" bool m2690 (t9 * __this , t74  p0, t164 * p1, float p2, int32_t p3, MethodInfo* method)
{
	{
		t13  L_0 = m563((&p0), &m563_MI);
		t13  L_1 = m564((&p0), &m564_MI);
		t164 * L_2 = p1;
		float L_3 = p2;
		int32_t L_4 = p3;
		bool L_5 = m565(NULL, L_0, L_1, L_2, L_3, L_4, &m565_MI);
		return L_5;
	}
}
extern MethodInfo m2598_MI;
extern "C" t580* m2598 (t9 * __this , t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		t13  L_0 = m563((&p0), &m563_MI);
		t13  L_1 = m564((&p0), &m564_MI);
		float L_2 = p1;
		int32_t L_3 = p2;
		t580* L_4 = m3774(NULL, L_0, L_1, L_2, L_3, &m3774_MI);
		return L_4;
	}
}
extern "C" t580* m3774 (t9 * __this , t13  p0, t13  p1, float p2, int32_t p3, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		t580* L_2 = m3775(NULL, (&p0), (&p1), L_0, L_1, &m3775_MI);
		return L_2;
	}
}
extern "C" t580* m3775 (t9 * __this , t13 * p0, t13 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t580* (*m3775_ftn) (t13 *, t13 *, float, int32_t);
	static m3775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t92_TI;
#include "t92MD.h"

extern MethodInfo m3776_MI;
extern MethodInfo m3777_MI;
extern MethodInfo m3778_MI;


extern "C" void m3776 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3776_ftn) (t92 *, t13 *);
	static m3776_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3776_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m599_MI;
extern "C" void m599 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3776(__this, (&p0), &m3776_MI);
		return;
	}
}
extern "C" void m3777 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3777_ftn) (t92 *, t13 *);
	static m3777_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3777_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m600_MI;
extern "C" void m600 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3777(__this, (&p0), &m3777_MI);
		return;
	}
}
extern MethodInfo m553_MI;
extern "C" float m553 (t92 * __this, MethodInfo* method)
{
	typedef float (*m553_ftn) (t92 *);
	static m553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m555_MI;
extern "C" void m555 (t92 * __this, float p0, MethodInfo* method)
{
	typedef void (*m555_ftn) (t92 *, float);
	static m555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m554_MI;
extern "C" float m554 (t92 * __this, MethodInfo* method)
{
	typedef float (*m554_ftn) (t92 *);
	static m554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m556_MI;
extern "C" void m556 (t92 * __this, float p0, MethodInfo* method)
{
	typedef void (*m556_ftn) (t92 *, float);
	static m556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m567_MI;
extern "C" bool m567 (t92 * __this, MethodInfo* method)
{
	typedef bool (*m567_ftn) (t92 *);
	static m567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m568_MI;
extern "C" void m568 (t92 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m568_ftn) (t92 *, bool);
	static m568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1098_MI;
extern "C" void m1098 (t92 * __this, t13  p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		m3778(NULL, __this, (&p0), L_0, &m3778_MI);
		return;
	}
}
extern "C" void m3778 (t9 * __this , t92 * p0, t13 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3778_ftn) (t92 *, t13 *, int32_t);
	static m3778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3778_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(p0, p1, p2);
}
#include "t170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t170_TI;
#include "t170MD.h"

extern MethodInfo m3779_MI;


extern MethodInfo m552_MI;
extern "C" t92 * m552 (t170 * __this, MethodInfo* method)
{
	typedef t92 * (*m552_ftn) (t170 *);
	static m552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::get_connectedBody()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m560_MI;
extern "C" void m560 (t170 * __this, t92 * p0, MethodInfo* method)
{
	typedef void (*m560_ftn) (t170 *, t92 *);
	static m560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3779 (t170 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3779_ftn) (t170 *, t13 *);
	static m3779_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3779_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m569_MI;
extern "C" void m569 (t170 * __this, t13  p0, MethodInfo* method)
{
	{
		m3779(__this, (&p0), &m3779_MI);
		return;
	}
}
#include "t75.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t75_TI;
#include "t75MD.h"



extern MethodInfo m570_MI;
extern "C" void m570 (t75 * __this, float p0, MethodInfo* method)
{
	typedef void (*m570_ftn) (t75 *, float);
	static m570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_spring(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m571_MI;
extern "C" void m571 (t75 * __this, float p0, MethodInfo* method)
{
	typedef void (*m571_ftn) (t75 *, float);
	static m571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_damper(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m572_MI;
extern "C" void m572 (t75 * __this, float p0, MethodInfo* method)
{
	typedef void (*m572_ftn) (t75 *, float);
	static m572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SpringJoint::set_maxDistance(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
#include "t60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t60_TI;
#include "t60MD.h"



extern MethodInfo m3780_MI;
extern "C" t92 * m3780 (t60 * __this, MethodInfo* method)
{
	typedef t92 * (*m3780_ftn) (t60 *);
	static m3780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t164_TI;
#include "t164MD.h"

extern MethodInfo m2600_MI;


extern MethodInfo m543_MI;
extern "C" t13  m543 (t164 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2601_MI;
extern "C" t13  m2601 (t164 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m573_MI;
extern "C" float m573 (t164 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" t60 * m2600 (t164 * __this, MethodInfo* method)
{
	{
		t60 * L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m566_MI;
extern "C" t92 * m566 (t164 * __this, MethodInfo* method)
{
	t92 * G_B3_0 = {0};
	{
		t60 * L_0 = m2600(__this, &m2600_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t60 * L_2 = m2600(__this, &m2600_MI);
		t92 * L_3 = m3780(L_2, &m3780_MI);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t92 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#include "t755.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t755_TI;
#include "t755MD.h"



#include "t215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t215_TI;
#include "t215MD.h"



extern MethodInfo m1100_MI;
extern "C" t59 * m1100 (t215 * __this, MethodInfo* method)
{
	t59 * G_B3_0 = {0};
	{
		t92 * L_0 = (__this->f1);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t92 * L_2 = (__this->f1);
		t59 * L_3 = m362(L_2, &m362_MI);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_0021:
	{
		t60 * L_4 = (__this->f2);
		t59 * L_5 = m362(L_4, &m362_MI);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		return G_B3_0;
	}
}
#include "t578.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t578_TI;
#include "t578MD.h"

#include "t757.h"
#include "t575.h"
extern TypeInfo t757_TI;
#include "t757MD.h"
extern Il2CppType t757_0_0_0;
extern MethodInfo m4347_MI;
extern MethodInfo m3783_MI;
extern MethodInfo m3784_MI;
extern MethodInfo m3782_MI;
extern MethodInfo m3785_MI;
extern Il2CppGenericMethod m4347_GM;


extern MethodInfo m3781_MI;
extern TypeInfo* t757_TI_var;
extern MethodInfo* m4347_MI_var;
extern "C" void m3781 (t9 * __this , MethodInfo* method)
{
	static bool m3781_init;
	if (!m3781_init)
	{
		t757_TI_var = il2cpp_codegen_class_from_type(&t757_0_0_0);
		m4347_MI_var = il2cpp_codegen_genericmethod_get_method(&m4347_GM);
		m3781_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t757_TI_var);
		t757 * L_0 = (t757 *)il2cpp_codegen_object_new (t757_TI_var);
		m4347(L_0, m4347_MI_var);
		((t578_SFs*)InitializedTypeInfo(&t578_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" void m3782 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, t575 * p6, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = p4;
		float L_3 = p5;
		t575 * L_4 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		m3783(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, L_4, &m3783_MI);
		return;
	}
}
extern "C" void m3783 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, t575 * p6, MethodInfo* method)
{
	typedef void (*m3783_ftn) (t28 *, t28 *, float, int32_t, float, float, t575 *);
	static m3783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6);
}
extern MethodInfo m2691_MI;
extern "C" t575  m2691 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		t28  L_0 = p0;
		t28  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		t575  L_6 = m3784(NULL, L_0, L_1, L_2, L_3, L_4, L_5, &m3784_MI);
		return L_6;
	}
}
extern "C" t575  m3784 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	t575  V_0 = {0};
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		m3782(NULL, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), &m3782_MI);
		t575  L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m2587_MI;
extern "C" t579* m2587 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t578_TI));
		t579* L_4 = m3785(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, &m3785_MI);
		return L_4;
	}
}
extern "C" t579* m3785 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	typedef t579* (*m3785_ftn) (t28 *, t28 *, float, int32_t, float, float);
	static m3785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t575_TI;
#include "t575MD.h"

#include "t577.h"
#include "t758.h"
#include "t577MD.h"
extern MethodInfo m2588_MI;
extern MethodInfo m3787_MI;
extern MethodInfo m3786_MI;


extern MethodInfo m2591_MI;
extern "C" t28  m2591 (t575 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2592_MI;
extern "C" t28  m2592 (t575 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2692_MI;
extern "C" float m2692 (t575 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t577 * m2588 (t575 * __this, MethodInfo* method)
{
	{
		t577 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t758 * m3786 (t575 * __this, MethodInfo* method)
{
	t758 * G_B3_0 = {0};
	{
		t577 * L_0 = m2588(__this, &m2588_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t577 * L_2 = m2588(__this, &m2588_MI);
		t758 * L_3 = m3787(L_2, &m3787_MI);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t758 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2589_MI;
extern "C" t45 * m2589 (t575 * __this, MethodInfo* method)
{
	t758 * V_0 = {0};
	{
		t758 * L_0 = m3786(__this, &m3786_MI);
		V_0 = L_0;
		t758 * L_1 = V_0;
		bool L_2 = m332(NULL, L_1, (t57 *)NULL, &m332_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		t758 * L_3 = V_0;
		t45 * L_4 = m350(L_3, &m350_MI);
		return L_4;
	}

IL_001a:
	{
		t577 * L_5 = m2588(__this, &m2588_MI);
		bool L_6 = m332(NULL, L_5, (t57 *)NULL, &m332_MI);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		t577 * L_7 = m2588(__this, &m2588_MI);
		t45 * L_8 = m350(L_7, &m350_MI);
		return L_8;
	}

IL_0037:
	{
		return (t45 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t758_TI;
#include "t758MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t577_TI;



extern "C" t758 * m3787 (t577 * __this, MethodInfo* method)
{
	typedef t758 * (*m3787_ftn) (t577 *);
	static m3787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#include "t759.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t759_TI;
#include "t759MD.h"



extern MethodInfo m3788_MI;
extern "C" void m3788 (t759 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3789_MI;
extern "C" void m3789 (t759 * __this, bool p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3789((t759 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, bool p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	typedef void (*FunctionPointerType) (t9 * __this, bool p0, MethodInfo* method);
	((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
}
extern "C" void pinvoke_delegate_wrapper_t759(Il2CppObject* delegate, bool p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3790_MI;
extern "C" t9 * m3790 (t759 * __this, bool p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t124_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3791_MI;
extern "C" void m3791 (t759 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t760_TI;
#include "t760MD.h"

extern TypeInfo t124_TI;


extern MethodInfo m3792_MI;
extern "C" void m3792 (t760 * __this, bool p0, MethodInfo* method)
{
	{
		t759 * L_0 = ((t760_SFs*)InitializedTypeInfo(&t760_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t759 * L_1 = ((t760_SFs*)InitializedTypeInfo(&t760_TI)->static_fields)->f0;
		bool L_2 = p0;
		VirtActionInvoker1< bool >::Invoke(&m3789_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#include "t761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t761_TI;
#include "t761MD.h"



extern MethodInfo m3793_MI;
extern "C" void m3793 (t761 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3794_MI;
extern "C" void m3794 (t761 * __this, t118* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3794((t761 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t118* p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t118* p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern TypeInfo t123_TI;
extern "C" void pinvoke_delegate_wrapper_t761(Il2CppObject* delegate, t118* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	float* _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3795_MI;
extern "C" t9 * m3795 (t761 * __this, t118* p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3796_MI;
extern "C" void m3796 (t761 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t762_TI;
#include "t762MD.h"



extern MethodInfo m3797_MI;
extern "C" void m3797 (t762 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3798_MI;
extern "C" void m3798 (t762 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3798((t762 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t762(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3799_MI;
extern "C" t9 * m3799 (t762 * __this, int32_t p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3800_MI;
extern "C" void m3800 (t762 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t206.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t206_TI;
#include "t206MD.h"

extern TypeInfo t118_TI;
extern TypeInfo t125_TI;


extern MethodInfo m1235_MI;
extern "C" float m1235 (t206 * __this, MethodInfo* method)
{
	typedef float (*m1235_ftn) (t206 *);
	static m1235_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1235_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3801_MI;
extern "C" void m3801 (t206 * __this, t118* p0, MethodInfo* method)
{
	{
		t761 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t761 * L_1 = (__this->f2);
		t118* L_2 = p0;
		VirtActionInvoker1< t118* >::Invoke(&m3794_MI, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
extern MethodInfo m3802_MI;
extern "C" void m3802 (t206 * __this, int32_t p0, MethodInfo* method)
{
	{
		t762 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t762 * L_1 = (__this->f3);
		int32_t L_2 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3798_MI, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
#include "t209.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t209_TI;
#include "t209MD.h"

#include "t896.h"
extern MethodInfo m3803_MI;


extern MethodInfo m1076_MI;
extern "C" void m1076 (t209 * __this, float p0, MethodInfo* method)
{
	typedef void (*m1076_ftn) (t209 *, float);
	static m1076_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1076_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1074_MI;
extern "C" void m1074 (t209 * __this, t206 * p0, MethodInfo* method)
{
	typedef void (*m1074_ftn) (t209 *, t206 *);
	static m1074_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1074_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3803 (t209 * __this, uint64_t p0, MethodInfo* method)
{
	typedef void (*m3803_ftn) (t209 *, uint64_t);
	static m3803_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3803_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1082_MI;
extern "C" void m1082 (t209 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		m3803(__this, L_0, &m3803_MI);
		return;
	}
}
extern MethodInfo m1081_MI;
extern "C" void m1081 (t209 * __this, MethodInfo* method)
{
	typedef void (*m1081_ftn) (t209 *);
	static m1081_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1081_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m1080_MI;
extern "C" bool m1080 (t209 * __this, MethodInfo* method)
{
	typedef bool (*m1080_ftn) (t209 *);
	static m1080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1075_MI;
extern "C" void m1075 (t209 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1075_ftn) (t209 *, bool);
	static m1075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1077_MI;
extern "C" void m1077 (t209 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1077_ftn) (t209 *, bool);
	static m1077_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1077_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
#include "t763.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t763_TI;
#include "t763MD.h"



#include "t764.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t764_TI;
#include "t764MD.h"

#include "t765.h"
#include "t766.h"
#include "t767.h"
#include "t123MD.h"
extern MethodInfo m3821_MI;
extern MethodInfo m3822_MI;
extern MethodInfo m3815_MI;
extern MethodInfo m4273_MI;
extern MethodInfo m3817_MI;
extern MethodInfo m4271_MI;


extern MethodInfo m3804_MI;
extern "C" void m3804 (t764 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		__this->f0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f1 = L_0;
		t2* L_1 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		__this->f2 = L_1;
		__this->f3 = (t57 *)NULL;
		__this->f4 = (0.0f);
		__this->f5 = 0;
		__this->f6 = 0;
		__this->f7 = 0;
		__this->f8 = (t765 *)NULL;
		return;
	}
}
extern MethodInfo m3805_MI;
extern "C" t2* m3805 (t764 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3806_MI;
extern "C" void m3806 (t764 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3807_MI;
extern "C" t2* m3807 (t764 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3808_MI;
extern "C" void m3808 (t764 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3809_MI;
extern "C" float m3809 (t764 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3810_MI;
extern "C" void m3810 (t764 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3811_MI;
extern "C" int32_t m3811 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3812_MI;
extern "C" void m3812 (t764 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3813_MI;
extern "C" t57 * m3813 (t764 * __this, MethodInfo* method)
{
	{
		t57 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3814_MI;
extern "C" void m3814 (t764 * __this, t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t2* m3815 (t764 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3816_MI;
extern "C" void m3816 (t764 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3817 (t764 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3818_MI;
extern "C" void m3818 (t764 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3819_MI;
extern "C" int32_t m3819 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m3820_MI;
extern "C" void m3820 (t764 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3821 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern "C" bool m3822 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
extern MethodInfo m3823_MI;
extern "C" t765 * m3823 (t764 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3821(__this, &m3821_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral260, &m400_MI);
	}

IL_0015:
	{
		t765 * L_1 = (__this->f8);
		return L_1;
	}
}
extern MethodInfo m3824_MI;
extern "C" t766  m3824 (t764 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3822(__this, &m3822_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral261, &m400_MI);
	}

IL_0015:
	{
		t766  L_1 = (__this->f9);
		return L_1;
	}
}
extern MethodInfo m3825_MI;
extern "C" t767  m3825 (t764 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3822(__this, &m3822_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral262, &m400_MI);
	}

IL_0015:
	{
		t767  L_1 = (__this->f10);
		return L_1;
	}
}
extern MethodInfo m3826_MI;
extern "C" int32_t m3826 (t764 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		t2* L_0 = m3815(__this, &m3815_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = m3817(__this, &m3817_MI);
		V_1 = L_3;
		int32_t L_4 = m4271((&V_1), &m4271_MI);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
#include "t166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t166_TI;
#include "t166MD.h"



extern MethodInfo m545_MI;
extern "C" void m545 (t166 * __this, float p0, float p1, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		float L_1 = p1;
		__this->f1 = L_1;
		__this->f2 = (0.0f);
		__this->f3 = (0.0f);
		return;
	}
}
extern MethodInfo m550_MI;
extern "C" float m550 (t166 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
#include "t71.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t71_TI;
#include "t71MD.h"

extern MethodInfo m3830_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m3828_MI;
extern MethodInfo m646_MI;


extern MethodInfo m546_MI;
extern "C" void m546 (t71 * __this, t167* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t167* L_0 = p0;
		m3831(__this, L_0, &m3831_MI);
		return;
	}
}
extern MethodInfo m3827_MI;
extern "C" void m3827 (t71 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3831(__this, (t167*)(t167*)NULL, &m3831_MI);
		return;
	}
}
extern "C" void m3828 (t71 * __this, MethodInfo* method)
{
	typedef void (*m3828_ftn) (t71 *);
	static m3828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3829_MI;
extern "C" void m3829 (t71 * __this, MethodInfo* method)
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
		m3828(__this, &m3828_MI);
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
extern MethodInfo m551_MI;
extern "C" float m551 (t71 * __this, float p0, MethodInfo* method)
{
	typedef float (*m551_ftn) (t71 *, float);
	static m551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Evaluate(System.Single)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m549_MI;
extern "C" t166  m549 (t71 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		t166  L_1 = m3830(__this, L_0, &m3830_MI);
		return L_1;
	}
}
extern MethodInfo m548_MI;
extern "C" int32_t m548 (t71 * __this, MethodInfo* method)
{
	typedef int32_t (*m548_ftn) (t71 *);
	static m548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::get_length()");
	return _il2cpp_icall_func(__this);
}
extern "C" t166  m3830 (t71 * __this, int32_t p0, MethodInfo* method)
{
	typedef t166  (*m3830_ftn) (t71 *, int32_t);
	static m3830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3831 (t71 * __this, t167* p0, MethodInfo* method)
{
	typedef void (*m3831_ftn) (t71 *, t167*);
	static m3831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, p0);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void t71_marshal(const t71& unmarshaled, t71_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
}
void t71_marshal_back(const t71_marshaled& marshaled, t71& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void t71_marshal_cleanup(t71_marshaled& marshaled)
{
}
#include "t768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t768_TI;
#include "t768MD.h"



#include "t769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t769_TI;
#include "t769MD.h"

#include "t163.h"
#include "t163MD.h"
extern MethodInfo m3838_MI;
extern MethodInfo m3839_MI;


extern MethodInfo m3832_MI;
extern "C" void m3832 (t769 * __this, t163 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t163 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3833_MI;
extern "C" t9 * m3833 (t769 * __this, MethodInfo* method)
{
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t765 * L_2 = m3838(L_0, L_1, &m3838_MI);
		return L_2;
	}
}
extern MethodInfo m3834_MI;
extern "C" bool m3834 (t769 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = m3839(L_0, &m3839_MI);
		V_0 = L_1;
		int32_t L_2 = (__this->f1);
		__this->f1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = (__this->f1);
		int32_t L_4 = V_0;
		return ((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t163_TI;

extern MethodInfo m3835_MI;
extern MethodInfo m3836_MI;


extern MethodInfo m537_MI;
extern "C" bool m537 (t163 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = m3835(__this, L_0, &m3835_MI);
		return L_1;
	}
}
extern "C" bool m3835 (t163 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m3836(__this, L_0, &m3836_MI);
		return L_1;
	}
}
extern "C" bool m3836 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3836_ftn) (t163 *, int32_t);
	static m3836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3837_MI;
extern "C" t9 * m3837 (t163 * __this, MethodInfo* method)
{
	{
		t769 * L_0 = (t769 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t769_TI));
		m3832(L_0, __this, &m3832_MI);
		return L_0;
	}
}
extern "C" t765 * m3838 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef t765 * (*m3838_ftn) (t163 *, int32_t);
	static m3838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3839 (t163 * __this, MethodInfo* method)
{
	typedef int32_t (*m3839_ftn) (t163 *);
	static m3839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t765_TI;
#include "t765MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t767_TI;
#include "t767MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t766_TI;
#include "t766MD.h"

#include "t509MD.h"
extern MethodInfo m3858_MI;


extern MethodInfo m3840_MI;
extern "C" bool m3840 (t766 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3858(NULL, L_0, &m3858_MI);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->f2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->f0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->f1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
extern MethodInfo m3841_MI;
extern "C" int32_t m3841 (t766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3842_MI;
extern "C" int32_t m3842 (t766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3843_MI;
extern "C" int32_t m3843 (t766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3844_MI;
extern "C" float m3844 (t766 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3845_MI;
extern "C" float m3845 (t766 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3846_MI;
extern "C" int32_t m3846 (t766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3847_MI;
extern "C" bool m3847 (t766 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3858(NULL, L_0, &m3858_MI);
		int32_t L_2 = (__this->f5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3848_MI;
extern "C" bool m3848 (t766 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#include "t771.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t771_TI;
#include "t771MD.h"



extern MethodInfo m3849_MI;
extern "C" bool m3849 (t771 * __this, t2* p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3858(NULL, L_0, &m3858_MI);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m3858(NULL, L_3, &m3858_MI);
		int32_t L_5 = (__this->f0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3850_MI;
extern "C" bool m3850 (t771 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3858(NULL, L_0, &m3858_MI);
		int32_t L_2 = (__this->f1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3851_MI;
extern "C" int32_t m3851 (t771 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3852_MI;
extern "C" int32_t m3852 (t771 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3853_MI;
extern "C" int32_t m3853 (t771 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3854_MI;
extern "C" float m3854 (t771 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3855_MI;
extern "C" bool m3855 (t771 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3856_MI;
extern "C" bool m3856 (t771 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m3857_MI;
extern "C" bool m3857 (t771 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void t771_marshal(const t771& unmarshaled, t771_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t771_marshal_back(const t771_marshaled& marshaled, t771& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void t771_marshal_cleanup(t771_marshaled& marshaled)
{
}
#include "t509.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t509_TI;

#include "t611.h"
extern MethodInfo m3859_MI;
extern MethodInfo m3860_MI;


extern MethodInfo m2914_MI;
extern "C" void m2914 (t509 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3859(__this, L_0, &m3859_MI);
		return;
	}
}
extern MethodInfo m2913_MI;
extern "C" void m2913 (t509 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3860(__this, L_0, &m3860_MI);
		return;
	}
}
extern MethodInfo m2912_MI;
extern "C" t611 * m2912 (t509 * __this, MethodInfo* method)
{
	typedef t611 * (*m2912_ftn) (t509 *);
	static m2912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3858 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3858_ftn) (t2*);
	static m3858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3859 (t509 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3859_ftn) (t509 *, t2*);
	static m3859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3860 (t509 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3860_ftn) (t509 *, t2*);
	static m3860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t772.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t772_TI;
#include "t772MD.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void t772_marshal(const t772& unmarshaled, t772_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
}
void t772_marshal_back(const t772_marshaled& marshaled, t772& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void t772_marshal_cleanup(t772_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t773.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t773_TI;
#include "t773MD.h"



#include "t774.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t774_TI;
#include "t774MD.h"



extern MethodInfo m3861_MI;
extern "C" t2* m3861 (t774 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3862_MI;
extern "C" void m3862 (t774 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3863_MI;
extern "C" t2* m3863 (t774 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3864_MI;
extern "C" void m3864 (t774 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void t774_marshal(const t774& unmarshaled, t774_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t774_marshal_back(const t774_marshaled& marshaled, t774& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void t774_marshal_cleanup(t774_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t611_TI;
#include "t611MD.h"



#include "t433.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t433_TI;
#include "t433MD.h"



#include "t434.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t434_TI;
#include "t434MD.h"



#include "t435.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t435_TI;
#include "t435MD.h"



#include "t83.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t83_TI;
#include "t83MD.h"



extern MethodInfo m591_MI;
extern "C" void m591 (t83 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m591_ftn) (t83 *, t2*);
	static m591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GUIText::set_text(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t331.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t331_TI;
#include "t331MD.h"



extern MethodInfo m1249_MI;
extern "C" void m1249 (t331 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m1249_ftn) (t331 *, t2*);
	static m1249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t775.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t775_TI;
#include "t775MD.h"

extern TypeInfo t28_TI;
#include "t448MD.h"
#include "t28MD.h"
extern MethodInfo m2654_MI;
extern MethodInfo m2655_MI;
extern MethodInfo m2659_MI;
extern MethodInfo m2660_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3873_MI;
extern MethodInfo m3876_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m3875_MI;


extern MethodInfo m3865_MI;
extern "C" int32_t m3865 (t775 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return (((int32_t)L_0));
	}
}
extern MethodInfo m3866_MI;
extern "C" int32_t m3866 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f2);
		float L_1 = m2654(L_0, &m2654_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3867_MI;
extern "C" int32_t m3867 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f2);
		float L_1 = m2655(L_0, &m2655_MI);
		return (((int32_t)((-L_1))));
	}
}
extern MethodInfo m3868_MI;
extern "C" int32_t m3868 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f2);
		float L_1 = m2659(L_0, &m2659_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3869_MI;
extern "C" int32_t m3869 (t775 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t448 * L_1 = &(__this->f2);
		float L_2 = m2660(L_1, &m2660_MI);
		t448 * L_3 = &(__this->f2);
		float L_4 = m2655(L_3, &m2655_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
extern MethodInfo m3870_MI;
extern "C" int32_t m3870 (t775 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t448 * L_1 = &(__this->f2);
		float L_2 = m2660(L_1, &m2660_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
extern MethodInfo m3871_MI;
extern "C" int32_t m3871 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f2);
		float L_1 = m2659(L_0, &m2659_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3872_MI;
extern "C" int32_t m3872 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f2);
		float L_1 = m2659(L_0, &m2659_MI);
		t448 * L_2 = &(__this->f2);
		float L_3 = m2654(L_2, &m2654_MI);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
extern "C" t28  m3873 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f1);
		float L_1 = m2659(L_0, &m2659_MI);
		t448 * L_2 = &(__this->f1);
		float L_3 = m2660(L_2, &m2660_MI);
		t28  L_4 = {0};
		m392(&L_4, L_1, L_3, &m392_MI);
		return L_4;
	}
}
extern "C" t28  m3874 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f1);
		float L_1 = m2659(L_0, &m2659_MI);
		t448 * L_2 = &(__this->f1);
		float L_3 = m2654(L_2, &m2654_MI);
		t448 * L_4 = &(__this->f1);
		float L_5 = m2660(L_4, &m2660_MI);
		t28  L_6 = {0};
		m392(&L_6, ((float)((float)L_1+(float)L_3)), L_5, &m392_MI);
		return L_6;
	}
}
extern "C" t28  m3875 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f1);
		float L_1 = m2659(L_0, &m2659_MI);
		t448 * L_2 = &(__this->f1);
		float L_3 = m2654(L_2, &m2654_MI);
		t448 * L_4 = &(__this->f1);
		float L_5 = m2660(L_4, &m2660_MI);
		t448 * L_6 = &(__this->f1);
		float L_7 = m2655(L_6, &m2655_MI);
		t28  L_8 = {0};
		m392(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), &m392_MI);
		return L_8;
	}
}
extern "C" t28  m3876 (t775 * __this, MethodInfo* method)
{
	{
		t448 * L_0 = &(__this->f1);
		float L_1 = m2659(L_0, &m2659_MI);
		t448 * L_2 = &(__this->f1);
		float L_3 = m2660(L_2, &m2660_MI);
		t448 * L_4 = &(__this->f1);
		float L_5 = m2655(L_4, &m2655_MI);
		t28  L_6 = {0};
		m392(&L_6, L_1, ((float)((float)L_3+(float)L_5)), &m392_MI);
		return L_6;
	}
}
extern MethodInfo m3877_MI;
extern "C" t28  m3877 (t775 * __this, MethodInfo* method)
{
	t28  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t28  L_1 = m3873(__this, &m3873_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3873(__this, &m3873_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3878_MI;
extern "C" t28  m3878 (t775 * __this, MethodInfo* method)
{
	t28  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t28  L_1 = m3876(__this, &m3876_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3874(__this, &m3874_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3879_MI;
extern "C" t28  m3879 (t775 * __this, MethodInfo* method)
{
	t28  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t28  L_1 = m3875(__this, &m3875_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3875(__this, &m3875_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3880_MI;
extern "C" t28  m3880 (t775 * __this, MethodInfo* method)
{
	t28  G_B3_0 = {0};
	{
		bool L_0 = (__this->f6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		t28  L_1 = m3874(__this, &m3874_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3876(__this, &m3876_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#include "t432.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void t775_marshal(const t775& unmarshaled, t775_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
	marshaled.f6 = unmarshaled.f6;
	marshaled.f7 = unmarshaled.f7;
}
void t775_marshal_back(const t775_marshaled& marshaled, t775& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
	unmarshaled.f6 = marshaled.f6;
	unmarshaled.f7 = marshaled.f7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void t775_marshal_cleanup(t775_marshaled& marshaled)
{
}
#include "t776.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t776_TI;
#include "t776MD.h"



extern MethodInfo m3881_MI;
extern "C" void m3881 (t776 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3882_MI;
extern "C" void m3882 (t776 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3882((t776 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t776(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3883_MI;
extern "C" t9 * m3883 (t776 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3884_MI;
extern "C" void m3884 (t776 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t431.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t431_TI;
#include "t431MD.h"

#include "t40.h"
#include "t584.h"
#include "t309.h"
extern TypeInfo t584_TI;
#include "t584MD.h"
extern Il2CppType t584_0_0_0;
extern MethodInfo m4348_MI;
extern Il2CppGenericMethod m4348_GM;


extern MethodInfo m2632_MI;
extern TypeInfo* t584_TI_var;
extern "C" void m2632 (t9 * __this , t584 * p0, MethodInfo* method)
{
	static bool m2632_init;
	if (!m2632_init)
	{
		t584_TI_var = il2cpp_codegen_class_from_type(&t584_0_0_0);
		m2632_init = true;
	}
	{
		t584 * L_0 = ((t431_SFs*)InitializedTypeInfo(&t431_TI)->static_fields)->f2;
		t584 * L_1 = p0;
		t297 * L_2 = m1106(NULL, L_0, L_1, &m1106_MI);
		((t431_SFs*)InitializedTypeInfo(&t431_TI)->static_fields)->f2 = ((t584 *)Castclass(L_2, t584_TI_var));
		return;
	}
}
extern MethodInfo m3885_MI;
extern TypeInfo* t584_TI_var;
extern "C" void m3885 (t9 * __this , t584 * p0, MethodInfo* method)
{
	static bool m3885_init;
	if (!m3885_init)
	{
		t584_TI_var = il2cpp_codegen_class_from_type(&t584_0_0_0);
		m3885_init = true;
	}
	{
		t584 * L_0 = ((t431_SFs*)InitializedTypeInfo(&t431_TI)->static_fields)->f2;
		t584 * L_1 = p0;
		t297 * L_2 = m1107(NULL, L_0, L_1, &m1107_MI);
		((t431_SFs*)InitializedTypeInfo(&t431_TI)->static_fields)->f2 = ((t584 *)Castclass(L_2, t584_TI_var));
		return;
	}
}
extern MethodInfo m2933_MI;
extern "C" t40 * m2933 (t431 * __this, MethodInfo* method)
{
	typedef t40 * (*m2933_ftn) (t431 *);
	static m2933_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2933_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2794_MI;
extern "C" bool m2794 (t431 * __this, uint16_t p0, MethodInfo* method)
{
	typedef bool (*m2794_ftn) (t431 *, uint16_t);
	static m2794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3886_MI;
extern MethodInfo* m4348_MI_var;
extern "C" void m3886 (t9 * __this , t431 * p0, MethodInfo* method)
{
	static bool m3886_init;
	if (!m3886_init)
	{
		m4348_MI_var = il2cpp_codegen_genericmethod_get_method(&m4348_GM);
		m3886_init = true;
	}
	t584 * V_0 = {0};
	{
		t584 * L_0 = ((t431_SFs*)InitializedTypeInfo(&t431_TI)->static_fields)->f2;
		V_0 = L_0;
		t584 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t584 * L_2 = V_0;
		t431 * L_3 = p0;
		VirtActionInvoker1< t431 * >::Invoke(m4348_MI_var, L_2, L_3);
	}

IL_0013:
	{
		t431 * L_4 = p0;
		t776 * L_5 = (L_4->f3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		t431 * L_6 = p0;
		t776 * L_7 = (L_6->f3);
		VirtActionInvoker0::Invoke(&m3882_MI, L_7);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m2935_MI;
extern "C" bool m2935 (t431 * __this, MethodInfo* method)
{
	typedef bool (*m2935_ftn) (t431 *);
	static m2935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2937_MI;
extern "C" int32_t m2937 (t431 * __this, MethodInfo* method)
{
	typedef int32_t (*m2937_ftn) (t431 *);
	static m2937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
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



#include "t484.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t484_TI;
#include "t484MD.h"

#include "t447.h"
#include "t777.h"
#include "t778.h"
#include "t466.h"
#include "t518.h"
extern TypeInfo t129_TI;
extern TypeInfo t447_TI;
extern TypeInfo t777_TI;
extern TypeInfo t778_TI;
extern TypeInfo t137_TI;
extern TypeInfo t518_TI;
#include "t129MD.h"
#include "t447MD.h"
#include "t777MD.h"
#include "t778MD.h"
#include "t518MD.h"
extern Il2CppType t447_0_0_0;
extern Il2CppType t777_0_0_0;
extern Il2CppType t778_0_0_0;
extern MethodInfo m1114_MI;
extern MethodInfo m2763_MI;
extern MethodInfo m3893_MI;
extern MethodInfo m2799_MI;
extern MethodInfo m2801_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3903_MI;
extern MethodInfo m3904_MI;
extern MethodInfo m2931_MI;
extern MethodInfo m4349_MI;
extern MethodInfo m4350_MI;
extern MethodInfo m4351_MI;
extern MethodInfo m3888_MI;
extern MethodInfo m3889_MI;
extern MethodInfo m3891_MI;
extern MethodInfo m3892_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3897_MI;
extern MethodInfo m3899_MI;
extern MethodInfo m3894_MI;
extern MethodInfo m2807_MI;
extern MethodInfo m2809_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4209_MI;
extern MethodInfo m3906_MI;
extern MethodInfo m3902_MI;
extern MethodInfo m3890_MI;
extern Il2CppGenericMethod m4349_GM;
extern Il2CppGenericMethod m4350_GM;
extern Il2CppGenericMethod m4351_GM;


extern MethodInfo m2759_MI;
extern "C" void m2759 (t484 * __this, MethodInfo* method)
{
	{
		m2931(__this, ((int32_t)50), &m2931_MI);
		return;
	}
}
extern TypeInfo* t447_TI_var;
extern TypeInfo* t777_TI_var;
extern TypeInfo* t778_TI_var;
extern MethodInfo* m4349_MI_var;
extern MethodInfo* m4350_MI_var;
extern MethodInfo* m4351_MI_var;
extern "C" void m2931 (t484 * __this, int32_t p0, MethodInfo* method)
{
	static bool m2931_init;
	if (!m2931_init)
	{
		t447_TI_var = il2cpp_codegen_class_from_type(&t447_0_0_0);
		t777_TI_var = il2cpp_codegen_class_from_type(&t777_0_0_0);
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m4349_MI_var = il2cpp_codegen_genericmethod_get_method(&m4349_GM);
		m4350_MI_var = il2cpp_codegen_genericmethod_get_method(&m4350_GM);
		m4351_MI_var = il2cpp_codegen_genericmethod_get_method(&m4351_GM);
		m2931_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t447_TI_var);
		t447 * L_1 = (t447 *)il2cpp_codegen_object_new (t447_TI_var);
		m4349(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), m4349_MI_var);
		__this->f5 = L_1;
		int32_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t777_TI_var);
		t777 * L_3 = (t777 *)il2cpp_codegen_object_new (t777_TI_var);
		m4350(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), m4350_MI_var);
		__this->f6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(t778_TI_var);
		t778 * L_4 = (t778 *)il2cpp_codegen_object_new (t778_TI_var);
		m4351(L_4, ((int32_t)20), m4351_MI_var);
		__this->f7 = L_4;
		m3888(__this, &m3888_MI);
		return;
	}
}
extern MethodInfo m3887_MI;
extern "C" void m3887 (t484 * __this, MethodInfo* method)
{
	{
		m3889(__this, &m3889_MI);
		return;
	}
}
extern "C" void m3888 (t484 * __this, MethodInfo* method)
{
	typedef void (*m3888_ftn) (t484 *);
	static m3888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3889 (t484 * __this, MethodInfo* method)
{
	typedef void (*m3889_ftn) (t484 *);
	static m3889_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3889_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
extern "C" bool m3890 (t484 * __this, t2* p0, t431 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, t28  p15, t28  p16, bool p17, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t431 * L_1 = p1;
		t43  L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		int32_t L_6 = p6;
		bool L_7 = p7;
		bool L_8 = p8;
		int32_t L_9 = p9;
		int32_t L_10 = p10;
		int32_t L_11 = p11;
		int32_t L_12 = p12;
		bool L_13 = p13;
		int32_t L_14 = p14;
		float L_15 = ((&p15)->f1);
		float L_16 = ((&p15)->f2);
		float L_17 = ((&p16)->f1);
		float L_18 = ((&p16)->f2);
		bool L_19 = p17;
		bool L_20 = m3891(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, &m3891_MI);
		return L_20;
	}
}
extern "C" bool m3891 (t484 * __this, t2* p0, t431 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, float p15, float p16, float p17, float p18, bool p19, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t431 * L_1 = p1;
		int32_t L_2 = p3;
		float L_3 = p4;
		float L_4 = p5;
		int32_t L_5 = p6;
		bool L_6 = p7;
		bool L_7 = p8;
		int32_t L_8 = p9;
		int32_t L_9 = p10;
		int32_t L_10 = p11;
		int32_t L_11 = p12;
		bool L_12 = p13;
		int32_t L_13 = p14;
		float L_14 = p15;
		float L_15 = p16;
		float L_16 = p17;
		float L_17 = p18;
		bool L_18 = p19;
		bool L_19 = m3892(NULL, __this, L_0, L_1, (&p2), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m3892_MI);
		return L_19;
	}
}
extern "C" bool m3892 (t9 * __this , t484 * p0, t2* p1, t431 * p2, t43 * p3, int32_t p4, float p5, float p6, int32_t p7, bool p8, bool p9, int32_t p10, int32_t p11, int32_t p12, int32_t p13, bool p14, int32_t p15, float p16, float p17, float p18, float p19, bool p20, MethodInfo* method)
{
	typedef bool (*m3892_ftn) (t484 *, t2*, t431 *, t43 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static m3892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20);
}
extern "C" t448  m2809 (t484 * __this, MethodInfo* method)
{
	typedef t448  (*m2809_ftn) (t484 *);
	static m2809_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2809_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3893 (t484 * __this, MethodInfo* method)
{
	typedef int32_t (*m3893_ftn) (t484 *);
	static m3893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3894 (t484 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3894_ftn) (t484 *, t9 *);
	static m3894_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3894_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3895_MI;
extern "C" t483* m3895 (t484 * __this, MethodInfo* method)
{
	typedef t483* (*m3895_ftn) (t484 *);
	static m3895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3896_MI;
extern "C" int32_t m3896 (t484 * __this, MethodInfo* method)
{
	typedef int32_t (*m3896_ftn) (t484 *);
	static m3896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2787_MI;
extern "C" int32_t m2787 (t484 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m1114(NULL, L_0, &m1114_MI);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		t2* L_2 = (__this->f1);
		int32_t L_3 = m2763(L_2, &m2763_MI);
		int32_t L_4 = m3893(__this, &m3893_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_5 = m2799(NULL, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), &m2799_MI);
		int32_t L_6 = m2801(NULL, L_3, L_5, &m2801_MI);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
extern "C" void m3897 (t484 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3897_ftn) (t484 *, t9 *);
	static m3897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3898_MI;
extern "C" t779* m3898 (t484 * __this, MethodInfo* method)
{
	typedef t779* (*m3898_ftn) (t484 *);
	static m3898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2786_MI;
extern "C" int32_t m2786 (t484 * __this, MethodInfo* method)
{
	typedef int32_t (*m2786_ftn) (t484 *);
	static m2786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3899 (t484 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3899_ftn) (t484 *, t9 *);
	static m3899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3900_MI;
extern "C" t780* m3900 (t484 * __this, MethodInfo* method)
{
	typedef t780* (*m3900_ftn) (t484 *);
	static m3900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2826_MI;
extern "C" int32_t m2826 (t484 * __this, MethodInfo* method)
{
	typedef int32_t (*m2826_ftn) (t484 *);
	static m2826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3901_MI;
extern "C" void m3901 (t484 * __this, MethodInfo* method)
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
		InterfaceActionInvoker0::Invoke(&m365_MI, __this);
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
extern "C" t518  m3902 (t484 * __this, t518  p0, MethodInfo* method)
{
	{
		t431 * L_0 = ((&p0)->f0);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t431 * L_2 = ((&p0)->f0);
		bool L_3 = m2935(L_2, &m2935_MI);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		t518  L_4 = p0;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&p0)->f2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&p0)->f6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		m1219(NULL, (t2*) &_stringLiteral263, &m1219_MI);
		(&p0)->f2 = 0;
		(&p0)->f6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&p0)->f8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		m1219(NULL, (t2*) &_stringLiteral264, &m1219_MI);
		(&p0)->f8 = 0;
	}

IL_0075:
	{
		t518  L_8 = p0;
		return L_8;
	}
}
extern MethodInfo m2940_MI;
extern "C" void m2940 (t484 * __this, MethodInfo* method)
{
	{
		__this->f3 = 0;
		return;
	}
}
extern "C" void m3903 (t484 * __this, t777 * p0, MethodInfo* method)
{
	{
		t777 * L_0 = p0;
		m3897(__this, L_0, &m3897_MI);
		return;
	}
}
extern "C" void m3904 (t484 * __this, t778 * p0, MethodInfo* method)
{
	{
		t778 * L_0 = p0;
		m3899(__this, L_0, &m3899_MI);
		return;
	}
}
extern "C" void m3905 (t484 * __this, t447 * p0, MethodInfo* method)
{
	{
		t447 * L_0 = p0;
		m3894(__this, L_0, &m3894_MI);
		return;
	}
}
extern MethodInfo m2938_MI;
extern "C" float m2938 (t484 * __this, t2* p0, t518  p1, MethodInfo* method)
{
	t448  V_0 = {0};
	{
		(&p1)->f13 = 1;
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t518  L_1 = p1;
		m2807(__this, L_0, L_1, &m2807_MI);
		t448  L_2 = m2809(__this, &m2809_MI);
		V_0 = L_2;
		float L_3 = m2654((&V_0), &m2654_MI);
		return L_3;
	}
}
extern MethodInfo m2939_MI;
extern "C" float m2939 (t484 * __this, t2* p0, t518  p1, MethodInfo* method)
{
	t448  V_0 = {0};
	{
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t518  L_1 = p1;
		m2807(__this, L_0, L_1, &m2807_MI);
		t448  L_2 = m2809(__this, &m2809_MI);
		V_0 = L_2;
		float L_3 = m2655((&V_0), &m2655_MI);
		return L_3;
	}
}
extern "C" bool m2807 (t484 * __this, t2* p0, t518  p1, MethodInfo* method)
{
	{
		bool L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		t2* L_1 = p0;
		t2* L_2 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_3 = m331(NULL, L_1, L_2, &m331_MI);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		t518  L_4 = (__this->f2);
		bool L_5 = m4209((&p1), L_4, &m4209_MI);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->f4);
		return L_6;
	}

IL_0035:
	{
		t2* L_7 = p0;
		t518  L_8 = p1;
		bool L_9 = m3906(__this, L_7, L_8, &m3906_MI);
		return L_9;
	}
}
extern "C" bool m3906 (t484 * __this, t2* p0, t518  p1, MethodInfo* method)
{
	t518  V_0 = {0};
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		__this->f3 = 1;
		__this->f8 = 0;
		__this->f9 = 0;
		__this->f10 = 0;
		t518  L_1 = p1;
		__this->f2 = L_1;
		t518  L_2 = p1;
		t518  L_3 = m3902(__this, L_2, &m3902_MI);
		V_0 = L_3;
		t2* L_4 = p0;
		t431 * L_5 = ((&V_0)->f0);
		t43  L_6 = ((&V_0)->f1);
		int32_t L_7 = ((&V_0)->f2);
		float L_8 = ((&V_0)->f5);
		float L_9 = ((&V_0)->f3);
		int32_t L_10 = ((&V_0)->f6);
		bool L_11 = ((&V_0)->f4);
		bool L_12 = ((&V_0)->f8);
		int32_t L_13 = ((&V_0)->f9);
		int32_t L_14 = ((&V_0)->f10);
		int32_t L_15 = ((&V_0)->f12);
		int32_t L_16 = ((&V_0)->f13);
		bool L_17 = ((&V_0)->f11);
		int32_t L_18 = ((&V_0)->f7);
		t28  L_19 = ((&V_0)->f14);
		t28  L_20 = ((&V_0)->f15);
		bool L_21 = ((&V_0)->f16);
		bool L_22 = m3890(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, &m3890_MI);
		__this->f4 = L_22;
		bool L_23 = (__this->f4);
		return L_23;
	}
}
extern MethodInfo m2941_MI;
extern "C" t9* m2941 (t484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t447 * L_1 = (__this->f5);
		m3905(__this, L_1, &m3905_MI);
		__this->f8 = 1;
	}

IL_001e:
	{
		t447 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m2788_MI;
extern "C" t9* m2788 (t484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t777 * L_1 = (__this->f6);
		m3903(__this, L_1, &m3903_MI);
		__this->f9 = 1;
	}

IL_001e:
	{
		t777 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m2784_MI;
extern "C" t9* m2784 (t484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t778 * L_1 = (__this->f7);
		m3904(__this, L_1, &m3904_MI);
		__this->f10 = 1;
	}

IL_001e:
	{
		t778 * L_2 = (__this->f7);
		return L_2;
	}
}
#include "t591.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t591_TI;
#include "t591MD.h"



#include "t581.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t581_TI;
#include "t581MD.h"



extern MethodInfo m2611_MI;
extern "C" void m2611 (t581 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3907_MI;
extern "C" void m3907 (t581 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3907((t581 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t581(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3908_MI;
extern "C" t9 * m3908 (t581 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3909_MI;
extern "C" void m3909 (t581 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t443.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t443_TI;
#include "t443MD.h"

extern MethodInfo m3911_MI;


extern MethodInfo m2612_MI;
extern "C" void m2612 (t9 * __this , t581 * p0, MethodInfo* method)
{
	{
		t581 * L_0 = ((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2;
		t581 * L_1 = p0;
		t297 * L_2 = m1106(NULL, L_0, L_1, &m1106_MI);
		((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2 = ((t581 *)Castclass(L_2, InitializedTypeInfo(&t581_TI)));
		return;
	}
}
extern MethodInfo m3910_MI;
extern "C" void m3910 (t9 * __this , t581 * p0, MethodInfo* method)
{
	{
		t581 * L_0 = ((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2;
		t581 * L_1 = p0;
		t297 * L_2 = m1107(NULL, L_0, L_1, &m1107_MI);
		((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2 = ((t581 *)Castclass(L_2, InitializedTypeInfo(&t581_TI)));
		return;
	}
}
extern MethodInfo m2684_MI;
extern "C" int32_t m2684 (t443 * __this, MethodInfo* method)
{
	typedef int32_t (*m2684_ftn) (t443 *);
	static m2684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2960_MI;
extern "C" bool m2960 (t443 * __this, MethodInfo* method)
{
	typedef bool (*m2960_ftn) (t443 *);
	static m2960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2687_MI;
extern "C" t39 * m2687 (t443 * __this, MethodInfo* method)
{
	typedef t39 * (*m2687_ftn) (t443 *);
	static m2687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2936_MI;
extern "C" float m2936 (t443 * __this, MethodInfo* method)
{
	typedef float (*m2936_ftn) (t443 *);
	static m2936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2936_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2964_MI;
extern "C" void m2964 (t443 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2964_ftn) (t443 *, float);
	static m2964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2715_MI;
extern "C" float m2715 (t443 * __this, MethodInfo* method)
{
	typedef float (*m2715_ftn) (t443 *);
	static m2715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2965_MI;
extern "C" void m2965 (t443 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2965_ftn) (t443 *, float);
	static m2965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2665_MI;
extern "C" bool m2665 (t443 * __this, MethodInfo* method)
{
	typedef bool (*m2665_ftn) (t443 *);
	static m2665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2686_MI;
extern "C" int32_t m2686 (t443 * __this, MethodInfo* method)
{
	typedef int32_t (*m2686_ftn) (t443 *);
	static m2686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2685_MI;
extern "C" int32_t m2685 (t443 * __this, MethodInfo* method)
{
	typedef int32_t (*m2685_ftn) (t443 *);
	static m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2695_MI;
extern "C" int32_t m2695 (t443 * __this, MethodInfo* method)
{
	typedef int32_t (*m2695_ftn) (t443 *);
	static m2695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2637_MI;
extern "C" t40 * m2637 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2637_ftn) ();
	static m2637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2932_MI;
extern "C" t40 * m2932 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2932_ftn) ();
	static m2932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
extern "C" void m3911 (t9 * __this , MethodInfo* method)
{
	{
		t581 * L_0 = ((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t581 * L_1 = ((t443_SFs*)InitializedTypeInfo(&t443_TI)->static_fields)->f2;
		VirtActionInvoker0::Invoke(&m3907_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m2875_MI;
extern "C" void m2875 (t9 * __this , MethodInfo* method)
{
	{
		m3911(NULL, &m3911_MI);
		return;
	}
}
#include "t585.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t585_TI;
#include "t585MD.h"

extern MethodInfo m3912_MI;


extern MethodInfo m2899_MI;
extern "C" bool m2899 (t585 * __this, MethodInfo* method)
{
	typedef bool (*m2899_ftn) (t585 *);
	static m2899_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2899_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3912 (t585 * __this, MethodInfo* method)
{
	typedef bool (*m3912_ftn) (t585 *);
	static m3912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2663_MI;
extern "C" bool m2663 (t585 * __this, MethodInfo* method)
{
	typedef bool (*m2663_ftn) (t585 *);
	static m2663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3913_MI;
extern "C" bool m3913 (t585 * __this, t28  p0, t39 * p1, MethodInfo* method)
{
	{
		bool L_0 = m3912(__this, &m3912_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t466_TI;
#include "t466MD.h"

#include "t566.h"
#include "t582.h"
extern TypeInfo t566_TI;
extern TypeInfo t47_TI;
#include "t566MD.h"
#include "t47MD.h"
extern MethodInfo m2625_MI;
extern MethodInfo m413_MI;
extern MethodInfo m354_MI;
extern MethodInfo m3452_MI;
extern MethodInfo m1242_MI;


extern MethodInfo m3914_MI;
extern "C" void m3914 (t9 * __this , MethodInfo* method)
{
	t466  V_0 = {0};
	{
		t566  L_0 = {0};
		m2625(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), &m2625_MI);
		((t466_SFs*)InitializedTypeInfo(&t466_TI)->static_fields)->f6 = L_0;
		t47  L_1 = {0};
		m413(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), &m413_MI);
		((t466_SFs*)InitializedTypeInfo(&t466_TI)->static_fields)->f7 = L_1;
		Initobj (InitializedTypeInfo(&t466_TI), (&V_0));
		t13  L_2 = m354(NULL, &m354_MI);
		(&V_0)->f0 = L_2;
		t13  L_3 = m3452(NULL, &m3452_MI);
		(&V_0)->f1 = L_3;
		t47  L_4 = ((t466_SFs*)InitializedTypeInfo(&t466_TI)->static_fields)->f7;
		(&V_0)->f5 = L_4;
		t566  L_5 = ((t466_SFs*)InitializedTypeInfo(&t466_TI)->static_fields)->f6;
		(&V_0)->f2 = L_5;
		t28  L_6 = m1242(NULL, &m1242_MI);
		(&V_0)->f3 = L_6;
		t28  L_7 = m1242(NULL, &m1242_MI);
		(&V_0)->f4 = L_7;
		t466  L_8 = V_0;
		((t466_SFs*)InitializedTypeInfo(&t466_TI)->static_fields)->f8 = L_8;
		return;
	}
}
#include "t442.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t442_TI;
#include "t442MD.h"

#include "t148.h"
#include "t315.h"
extern TypeInfo t158_TI;
extern TypeInfo t315_TI;
#include "t742MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3915_MI;
extern MethodInfo m2814_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m2672_MI;
extern MethodInfo m3916_MI;
extern MethodInfo m3917_MI;
extern Il2CppGenericMethod m2814_GM;
extern Il2CppGenericMethod m2672_GM;


extern MethodInfo m2670_MI;
extern "C" void m2670 (t442 * __this, t43  p0, MethodInfo* method)
{
	{
		m3915(NULL, __this, (&p0), &m3915_MI);
		return;
	}
}
extern "C" void m3915 (t9 * __this , t442 * p0, t43 * p1, MethodInfo* method)
{
	typedef void (*m3915_ftn) (t442 *, t43 *);
	static m3915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2668_MI;
extern "C" t43  m2668 (t442 * __this, MethodInfo* method)
{
	typedef t43  (*m2668_ftn) (t442 *);
	static m2668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3014_MI;
extern "C" void m3014 (t442 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m3014_ftn) (t442 *, bool);
	static m3014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2658_MI;
extern "C" void m2658 (t442 * __this, t40 * p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m2658_ftn) (t442 *, t40 *, t148 *);
	static m2658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2657_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m2814_MI_var;
extern MethodInfo* m2672_MI_var;
extern "C" void m2657 (t442 * __this, t447 * p0, MethodInfo* method)
{
	static bool m2657_init;
	if (!m2657_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2814_MI_var = il2cpp_codegen_genericmethod_get_method(&m2814_GM);
		m2672_MI_var = il2cpp_codegen_genericmethod_get_method(&m2672_GM);
		m2657_init = true;
	}
	{
		t447 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m2814_MI_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		t9 * L_4 = Box(InitializedTypeInfo(&t315_TI), &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m3626(NULL, (t2*) &_stringLiteral265, L_2, &m3626_MI);
		m1220(NULL, L_5, __this, &m1220_MI);
		t447 * L_6 = p0;
		VirtActionInvoker0::Invoke(m2672_MI_var, L_6);
	}

IL_0039:
	{
		t447 * L_7 = p0;
		m3916(__this, L_7, &m3916_MI);
		return;
	}
}
extern "C" void m3916 (t442 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3916_ftn) (t442 *, t9 *);
	static m3916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2774_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m2774 (t442 * __this, t483* p0, int32_t p1, MethodInfo* method)
{
	static bool m2774_init;
	if (!m2774_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2774_init = true;
	}
	{
		int32_t L_0 = p1;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		t158* L_1 = ((t158*)SZArrayNew(t158_TI_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		t9 * L_3 = Box(InitializedTypeInfo(&t315_TI), &L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_1, 0)) = (t9 *)L_3;
		t2* L_4 = m3626(NULL, (t2*) &_stringLiteral265, L_1, &m3626_MI);
		m1220(NULL, L_4, __this, &m1220_MI);
		p1 = 0;
	}

IL_0031:
	{
		t483* L_5 = p0;
		int32_t L_6 = p1;
		m3917(__this, L_5, L_6, &m3917_MI);
		return;
	}
}
extern "C" void m3917 (t442 * __this, t483* p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3917_ftn) (t442 *, t483*, int32_t);
	static m3917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2651_MI;
extern "C" void m2651 (t442 * __this, MethodInfo* method)
{
	typedef void (*m2651_ftn) (t442 *);
	static m2651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2638_MI;
extern "C" int32_t m2638 (t442 * __this, MethodInfo* method)
{
	typedef int32_t (*m2638_ftn) (t442 *);
	static m2638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
#include "t590.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t590_TI;
#include "t590MD.h"

#include "t599.h"
extern TypeInfo t37_TI;
extern TypeInfo t74_TI;
#include "t599MD.h"
#include "t441MD.h"
extern Il2CppType t37_0_0_0;
extern MethodInfo m3919_MI;
extern MethodInfo m3920_MI;
extern MethodInfo m3921_MI;
extern MethodInfo m388_MI;
extern MethodInfo m3923_MI;
extern MethodInfo m2782_MI;
extern MethodInfo m2783_MI;
extern MethodInfo m558_MI;
extern MethodInfo m3922_MI;
extern MethodInfo m617_MI;
extern MethodInfo m581_MI;
extern MethodInfo m2867_MI;
extern MethodInfo m2723_MI;
extern MethodInfo m2737_MI;
extern MethodInfo m2748_MI;
extern MethodInfo m2823_MI;
extern MethodInfo m2818_MI;
extern MethodInfo m2822_MI;
extern MethodInfo m2727_MI;
extern MethodInfo m2817_MI;
extern MethodInfo m2821_MI;
extern MethodInfo m2728_MI;
extern MethodInfo m2866_MI;
extern MethodInfo m3924_MI;
extern MethodInfo m2819_MI;
extern MethodInfo m2729_MI;


extern MethodInfo m3918_MI;
extern TypeInfo* t37_TI_var;
extern "C" void m3918 (t9 * __this , MethodInfo* method)
{
	static bool m3918_init;
	if (!m3918_init)
	{
		t37_TI_var = il2cpp_codegen_class_from_type(&t37_0_0_0);
		m3918_init = true;
	}
	{
		((t590_SFs*)InitializedTypeInfo(&t590_TI)->static_fields)->f0 = ((t37*)SZArrayNew(t37_TI_var, 4));
		return;
	}
}
extern MethodInfo m2698_MI;
extern "C" bool m2698 (t9 * __this , t441 * p0, t28  p1, t39 * p2, MethodInfo* method)
{
	{
		t441 * L_0 = p0;
		t39 * L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		bool L_2 = m3919(NULL, L_0, (&p1), L_1, &m3919_MI);
		return L_2;
	}
}
extern "C" bool m3919 (t9 * __this , t441 * p0, t28 * p1, t39 * p2, MethodInfo* method)
{
	typedef bool (*m3919_ftn) (t441 *, t28 *, t39 *);
	static m3919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m2666_MI;
extern "C" t28  m2666 (t9 * __this , t28  p0, t45 * p1, t443 * p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t28  L_0 = p0;
		t45 * L_1 = p1;
		t443 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		m3920(NULL, L_0, L_1, L_2, (&V_0), &m3920_MI);
		t28  L_3 = V_0;
		return L_3;
	}
}
extern "C" void m3920 (t9 * __this , t28  p0, t45 * p1, t443 * p2, t28 * p3, MethodInfo* method)
{
	{
		t45 * L_0 = p1;
		t443 * L_1 = p2;
		t28 * L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		m3921(NULL, (&p0), L_0, L_1, L_2, &m3921_MI);
		return;
	}
}
extern "C" void m3921 (t9 * __this , t28 * p0, t45 * p1, t443 * p2, t28 * p3, MethodInfo* method)
{
	typedef void (*m3921_ftn) (t28 *, t45 *, t443 *, t28 *);
	static m3921_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3921_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m2667_MI;
extern "C" t448  m2667 (t9 * __this , t441 * p0, t443 * p1, MethodInfo* method)
{
	typedef t448  (*m2667_ftn) (t441 *, t443 *);
	static m2667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" bool m3922 (t9 * __this , t441 * p0, t28  p1, t39 * p2, t13 * p3, MethodInfo* method)
{
	t74  V_0 = {0};
	t599  V_1 = {0};
	float V_2 = 0.0f;
	{
		t13 * L_0 = p3;
		t28  L_1 = m1242(NULL, &m1242_MI);
		t13  L_2 = m388(NULL, L_1, &m388_MI);
		*L_0 = L_2;
		t39 * L_3 = p2;
		t28  L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		t74  L_5 = m3923(NULL, L_3, L_4, &m3923_MI);
		V_0 = L_5;
		t441 * L_6 = p0;
		t93  L_7 = m490(L_6, &m490_MI);
		t13  L_8 = m3452(NULL, &m3452_MI);
		t13  L_9 = m627(NULL, L_7, L_8, &m627_MI);
		t441 * L_10 = p0;
		t13  L_11 = m351(L_10, &m351_MI);
		m2782((&V_1), L_9, L_11, &m2782_MI);
		t74  L_12 = V_0;
		bool L_13 = m2783((&V_1), L_12, (&V_2), &m2783_MI);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		t13 * L_14 = p3;
		float L_15 = V_2;
		t13  L_16 = m558((&V_0), L_15, &m558_MI);
		*L_14 = L_16;
		return 1;
	}
}
extern MethodInfo m2741_MI;
extern "C" bool m2741 (t9 * __this , t441 * p0, t28  p1, t39 * p2, t28 * p3, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t28 * L_0 = p3;
		t28  L_1 = m1242(NULL, &m1242_MI);
		*L_0 = L_1;
		t441 * L_2 = p0;
		t28  L_3 = p1;
		t39 * L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		bool L_5 = m3922(NULL, L_2, L_3, L_4, (&V_0), &m3922_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t28 * L_6 = p3;
		t441 * L_7 = p0;
		t13  L_8 = V_0;
		t13  L_9 = m2781(L_7, L_8, &m2781_MI);
		t28  L_10 = m617(NULL, L_9, &m617_MI);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern "C" t74  m3923 (t9 * __this , t39 * p0, t28  p1, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t39 * L_0 = p0;
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		t39 * L_2 = p0;
		t28  L_3 = p1;
		t13  L_4 = m388(NULL, L_3, &m388_MI);
		t74  L_5 = m557(L_2, L_4, &m557_MI);
		return L_5;
	}

IL_0019:
	{
		t28  L_6 = p1;
		t13  L_7 = m388(NULL, L_6, &m388_MI);
		V_0 = L_7;
		t13 * L_8 = (&V_0);
		float L_9 = (L_8->f3);
		L_8->f3 = ((float)((float)L_9-(float)(100.0f)));
		t13  L_10 = V_0;
		t13  L_11 = m626(NULL, &m626_MI);
		t74  L_12 = {0};
		m581(&L_12, L_10, L_11, &m581_MI);
		return L_12;
	}
}
extern "C" void m2867 (t9 * __this , t441 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	t441 * V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	t28  V_5 = {0};
	float V_6 = 0.0f;
	{
		t441 * L_0 = p0;
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
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
		bool L_2 = p3;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		t441 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2987(L_3, L_4, &m2987_MI);
		V_1 = ((t441 *)IsInst(L_5, InitializedTypeInfo(&t441_TI)));
		t441 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		t441 * L_8 = V_1;
		int32_t L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		m2867(NULL, L_8, L_9, 0, 1, &m2867_MI);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		t441 * L_12 = p0;
		int32_t L_13 = m2990(L_12, &m2990_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		t441 * L_14 = p0;
		t28  L_15 = m2723(L_14, &m2723_MI);
		V_2 = L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p1;
		float L_18 = m2737((&V_2), L_17, &m2737_MI);
		m2748((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), &m2748_MI);
		t441 * L_19 = p0;
		t28  L_20 = V_2;
		m2823(L_19, L_20, &m2823_MI);
		bool L_21 = p2;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		t441 * L_22 = p0;
		t28  L_23 = m2818(L_22, &m2818_MI);
		V_3 = L_23;
		int32_t L_24 = p1;
		int32_t L_25 = p1;
		float L_26 = m2737((&V_3), L_25, &m2737_MI);
		m2748((&V_3), L_24, ((-L_26)), &m2748_MI);
		t441 * L_27 = p0;
		t28  L_28 = V_3;
		m2822(L_27, L_28, &m2822_MI);
		t441 * L_29 = p0;
		t28  L_30 = m2727(L_29, &m2727_MI);
		V_4 = L_30;
		t441 * L_31 = p0;
		t28  L_32 = m2817(L_31, &m2817_MI);
		V_5 = L_32;
		int32_t L_33 = p1;
		float L_34 = m2737((&V_4), L_33, &m2737_MI);
		V_6 = L_34;
		int32_t L_35 = p1;
		int32_t L_36 = p1;
		float L_37 = m2737((&V_5), L_36, &m2737_MI);
		m2748((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), &m2748_MI);
		int32_t L_38 = p1;
		float L_39 = V_6;
		m2748((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), &m2748_MI);
		t441 * L_40 = p0;
		t28  L_41 = V_4;
		m2821(L_40, L_41, &m2821_MI);
		t441 * L_42 = p0;
		t28  L_43 = V_5;
		m2728(L_42, L_43, &m2728_MI);
		return;
	}
}
extern "C" void m2866 (t9 * __this , t441 * p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t441 * V_1 = {0};
	{
		t441 * L_0 = p0;
		bool L_1 = m333(NULL, L_0, (t57 *)NULL, &m333_MI);
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
		bool L_2 = p2;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		t441 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2987(L_3, L_4, &m2987_MI);
		V_1 = ((t441 *)IsInst(L_5, InitializedTypeInfo(&t441_TI)));
		t441 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t441 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		m2866(NULL, L_8, 0, 1, &m2866_MI);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		t441 * L_11 = p0;
		int32_t L_12 = m2990(L_11, &m2990_MI);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		t441 * L_13 = p0;
		t441 * L_14 = p0;
		t28  L_15 = m2723(L_14, &m2723_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		t28  L_16 = m3924(NULL, L_15, &m3924_MI);
		m2823(L_13, L_16, &m2823_MI);
		t441 * L_17 = p0;
		t441 * L_18 = p0;
		t28  L_19 = m2819(L_18, &m2819_MI);
		t28  L_20 = m3924(NULL, L_19, &m3924_MI);
		m2729(L_17, L_20, &m2729_MI);
		bool L_21 = p1;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		t441 * L_22 = p0;
		t441 * L_23 = p0;
		t28  L_24 = m2818(L_23, &m2818_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t590_TI));
		t28  L_25 = m3924(NULL, L_24, &m3924_MI);
		m2822(L_22, L_25, &m2822_MI);
		t441 * L_26 = p0;
		t441 * L_27 = p0;
		t28  L_28 = m2727(L_27, &m2727_MI);
		t28  L_29 = m3924(NULL, L_28, &m3924_MI);
		m2821(L_26, L_29, &m2821_MI);
		t441 * L_30 = p0;
		t441 * L_31 = p0;
		t28  L_32 = m2817(L_31, &m2817_MI);
		t28  L_33 = m3924(NULL, L_32, &m3924_MI);
		m2728(L_30, L_33, &m2728_MI);
		return;
	}
}
extern "C" t28  m3924 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f2);
		float L_1 = ((&p0)->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
#include "t781.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t781_TI;
#include "t781MD.h"

#include "t782.h"
#include "t783.h"
extern TypeInfo t782_TI;
extern TypeInfo t783_TI;
#include "t8MD.h"
extern MethodInfo m3926_MI;
extern MethodInfo m4352_MI;
extern MethodInfo m3927_MI;
extern MethodInfo m3928_MI;


extern MethodInfo m3925_MI;
extern "C" void m3925 (t781 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" uint64_t m3926 (t781 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" uint64_t m3927 (t781 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m3928 (t781 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3929_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3929 (t781 * __this, MethodInfo* method)
{
	static bool m3929_init;
	if (!m3929_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3929_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3926(__this, &m3926_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t782_TI), &L_4);
		t2* L_6 = m4352(L_5, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint64_t L_8 = m3927(__this, &m3927_MI);
		uint64_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t783_TI), &L_9);
		t2* L_11 = m4352(L_10, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t158* L_12 = L_7;
		int32_t L_13 = m3928(__this, &m3928_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3626(NULL, (t2*) &_stringLiteral266, L_12, &m3626_MI);
		return L_16;
	}
}
#include "t784.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t784_TI;
#include "t784MD.h"

#include "t897.h"
extern TypeInfo t785_TI;
extern TypeInfo t897_TI;
extern TypeInfo t305_TI;
#include "t897MD.h"
#include "t305MD.h"
extern Il2CppType t785_0_0_0;
extern MethodInfo m4353_MI;
extern MethodInfo m610_MI;
extern MethodInfo m4354_MI;
extern MethodInfo m4355_MI;
extern MethodInfo m4356_MI;
extern MethodInfo m4357_MI;
extern MethodInfo m4358_MI;
extern Il2CppGenericMethod m4353_GM;


extern MethodInfo m3930_MI;
extern "C" void m3930 (t784 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3931_MI;
extern MethodInfo* m4353_MI_var;
extern "C" t2* m3931 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3931_init;
	if (!m3931_init)
	{
		m4353_MI_var = il2cpp_codegen_genericmethod_get_method(&m4353_GM);
		m3931_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4353_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		return ((t2*)IsInst(L_3, (&t2_TI)));
	}

IL_0015:
	{
		t2* L_4 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_5 = m610(NULL, L_4, (t2*) &_stringLiteral268, &m610_MI);
		t897 * L_6 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_6, L_5, &m4354_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m3932_MI;
extern MethodInfo* m4353_MI_var;
extern "C" int32_t m3932 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3932_init;
	if (!m3932_init)
	{
		m4353_MI_var = il2cpp_codegen_genericmethod_get_method(&m4353_GM);
		m3932_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4353_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		int32_t L_4 = m4355(NULL, L_3, &m4355_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral268, &m610_MI);
		t897 * L_7 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_7, L_6, &m4354_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3933_MI;
extern MethodInfo* m4353_MI_var;
extern "C" uint16_t m3933 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3933_init;
	if (!m3933_init)
	{
		m4353_MI_var = il2cpp_codegen_genericmethod_get_method(&m4353_GM);
		m3933_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4353_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		uint16_t L_4 = m4356(NULL, L_3, &m4356_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral268, &m610_MI);
		t897 * L_7 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_7, L_6, &m4354_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3934_MI;
extern MethodInfo* m4353_MI_var;
extern "C" uint64_t m3934 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3934_init;
	if (!m3934_init)
	{
		m4353_MI_var = il2cpp_codegen_genericmethod_get_method(&m4353_GM);
		m3934_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4353_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		uint64_t L_4 = m4357(NULL, L_3, &m4357_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral268, &m610_MI);
		t897 * L_7 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_7, L_6, &m4354_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3935_MI;
extern MethodInfo* m4353_MI_var;
extern "C" bool m3935 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3935_init;
	if (!m3935_init)
	{
		m4353_MI_var = il2cpp_codegen_genericmethod_get_method(&m4353_GM);
		m3935_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4353_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		bool L_4 = m4358(NULL, L_3, &m4358_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral268, &m610_MI);
		t897 * L_7 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_7, L_6, &m4354_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
#include "t786.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t786_TI;
#include "t786MD.h"

extern MethodInfo m3937_MI;
extern MethodInfo m3939_MI;
extern MethodInfo m3938_MI;
extern MethodInfo m3940_MI;


extern MethodInfo m3936_MI;
extern "C" void m3936 (t786 * __this, MethodInfo* method)
{
	{
		m3930(__this, &m3930_MI);
		return;
	}
}
extern "C" bool m3937 (t786 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3938 (t786 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3939 (t786 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3940 (t786 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3941_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3941 (t786 * __this, MethodInfo* method)
{
	static bool m3941_init;
	if (!m3941_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3941_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		bool L_3 = m3937(__this, &m3937_MI);
		bool L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t124_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m3939(__this, &m3939_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t2* L_8 = m3626(NULL, (t2*) &_stringLiteral269, L_6, &m3626_MI);
		return L_8;
	}
}
extern MethodInfo m3942_MI;
extern TypeInfo* t785_TI_var;
extern "C" void m3942 (t786 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3942_init;
	if (!m3942_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m3942_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t785_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		bool L_4 = m3935(__this, (t2*) &_stringLiteral270, L_2, L_3, &m3935_MI);
		m3938(__this, L_4, &m3938_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3931(__this, (t2*) &_stringLiteral271, L_5, L_6, &m3931_MI);
		m3940(__this, L_7, &m3940_MI);
		bool L_8 = m3937(__this, &m3937_MI);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		t2* L_9 = m3939(__this, &m3939_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m610(NULL, (t2*) &_stringLiteral272, L_9, &m610_MI);
		t897 * L_11 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_11, L_10, &m4354_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
#include "t787.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t787_TI;
#include "t787MD.h"



extern MethodInfo m3943_MI;
extern "C" void m3943 (t787 * __this, MethodInfo* method)
{
	{
		m3936(__this, &m3936_MI);
		return;
	}
}
#include "t788.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t788_TI;
#include "t788MD.h"

#include "t168.h"
#include "t789.h"
extern TypeInfo t168_TI;
extern TypeInfo t789_TI;
#include "t789MD.h"
extern Il2CppType t789_0_0_0;
extern MethodInfo m3945_MI;
extern MethodInfo m3947_MI;
extern MethodInfo m3949_MI;
extern MethodInfo m3951_MI;
extern MethodInfo m3953_MI;
extern MethodInfo m4359_MI;
extern Il2CppGenericMethod m4359_GM;


extern MethodInfo m3944_MI;
extern "C" void m3944 (t788 * __this, MethodInfo* method)
{
	{
		m3925(__this, &m3925_MI);
		return;
	}
}
extern "C" t2* m3945 (t788 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3946_MI;
extern "C" void m3946 (t788 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint32_t m3947 (t788 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3948_MI;
extern "C" void m3948 (t788 * __this, uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" bool m3949 (t788 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3950_MI;
extern "C" void m3950 (t788 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t2* m3951 (t788 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3952_MI;
extern "C" void m3952 (t788 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern "C" t789 * m3953 (t788 * __this, MethodInfo* method)
{
	{
		t789 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3954_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4359_MI_var;
extern "C" t2* m3954 (t788 * __this, MethodInfo* method)
{
	static bool m3954_init;
	if (!m3954_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4359_MI_var = il2cpp_codegen_genericmethod_get_method(&m4359_GM);
		m3954_init = true;
	}
	int32_t G_B2_0 = 0;
	t158* G_B2_1 = {0};
	t158* G_B2_2 = {0};
	t2* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t158* G_B1_1 = {0};
	t158* G_B1_2 = {0};
	t2* G_B1_3 = {0};
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t158* G_B3_2 = {0};
	t158* G_B3_3 = {0};
	t2* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	t158* G_B5_1 = {0};
	t158* G_B5_2 = {0};
	t2* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	t158* G_B4_1 = {0};
	t158* G_B4_2 = {0};
	t2* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	t158* G_B6_2 = {0};
	t158* G_B6_3 = {0};
	t2* G_B6_4 = {0};
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3929(__this, &m3929_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3945(__this, &m3945_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		uint32_t L_5 = m3947(__this, &m3947_MI);
		uint32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t168_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		bool L_9 = m3949(__this, &m3949_MI);
		bool L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t124_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_11;
		t158* L_12 = L_8;
		t2* L_13 = m3951(__this, &m3951_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_15 = m331(NULL, L_13, L_14, &m331_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral273;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral273;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral274;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (t2*) &_stringLiteral275;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)G_B3_0;
		t158* L_16 = G_B3_3;
		t789 * L_17 = m3953(__this, &m3953_MI);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		t789 * L_18 = m3953(__this, &m3953_MI);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4359_MI_var, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		t9 * L_21 = Box(InitializedTypeInfo(&t125_TI), &L_20);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t9 *)L_21;
		t2* L_22 = m3626(NULL, G_B6_4, G_B6_3, &m3626_MI);
		return L_22;
	}
}
#include "t790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t790_TI;
#include "t790MD.h"

#include "t791.h"
#include "t792.h"
extern TypeInfo t791_TI;
extern TypeInfo t792_TI;
extern MethodInfo m3956_MI;
extern MethodInfo m3958_MI;
extern MethodInfo m3960_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m3966_MI;
extern MethodInfo m3957_MI;
extern MethodInfo m3959_MI;
extern MethodInfo m3961_MI;
extern MethodInfo m3963_MI;
extern MethodInfo m3965_MI;
extern MethodInfo m3967_MI;


extern MethodInfo m3955_MI;
extern "C" void m3955 (t790 * __this, MethodInfo* method)
{
	{
		m3943(__this, &m3943_MI);
		return;
	}
}
extern "C" t2* m3956 (t790 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3957 (t790 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3958 (t790 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3959 (t790 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3960 (t790 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3961 (t790 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3962_MI;
extern "C" t2* m3962 (t790 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3963 (t790 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3964 (t790 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3965 (t790 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3966 (t790 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3967 (t790 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3968_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3968 (t790 * __this, MethodInfo* method)
{
	static bool m3968_init;
	if (!m3968_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3968_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3941(__this, &m3941_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3956(__this, &m3956_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3958(__this, &m3958_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3960(__this, &m3960_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t791_TI), &L_10);
		t2* L_12 = m4352(L_11, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3964(__this, &m3964_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t792_TI), &L_15);
		t2* L_17 = m4352(L_16, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3966(__this, &m3966_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3626(NULL, (t2*) &_stringLiteral276, L_18, &m3626_MI);
		return L_22;
	}
}
extern MethodInfo m3969_MI;
extern TypeInfo* t785_TI_var;
extern "C" void m3969 (t790 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3969_init;
	if (!m3969_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m3969_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3942(__this, L_0, &m3942_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t785_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3931(__this, (t2*) &_stringLiteral277, L_3, L_4, &m3931_MI);
		m3957(__this, L_5, &m3957_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3932(__this, (t2*) &_stringLiteral278, L_6, L_7, &m3932_MI);
		m3959(__this, L_8, &m3959_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3934(__this, (t2*) &_stringLiteral279, L_9, L_10, &m3934_MI);
		m3961(__this, L_11, &m3961_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3931(__this, (t2*) &_stringLiteral280, L_12, L_13, &m3931_MI);
		m3963(__this, L_14, &m3963_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3933(__this, (t2*) &_stringLiteral281, L_15, L_16, &m3933_MI);
		m3965(__this, L_17, &m3965_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3935(__this, (t2*) &_stringLiteral282, L_18, L_19, &m3935_MI);
		m3967(__this, L_20, &m3967_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral283, L_22, &m610_MI);
		t897 * L_24 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_24, L_23, &m4354_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t793_TI;
#include "t793MD.h"

extern MethodInfo m3971_MI;
extern MethodInfo m3973_MI;


extern MethodInfo m3970_MI;
extern "C" void m3970 (t793 * __this, MethodInfo* method)
{
	{
		m3925(__this, &m3925_MI);
		return;
	}
}
extern "C" uint64_t m3971 (t793 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3972_MI;
extern "C" void m3972 (t793 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t2* m3973 (t793 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3974_MI;
extern "C" void m3974 (t793 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3975_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3975 (t793 * __this, MethodInfo* method)
{
	static bool m3975_init;
	if (!m3975_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3975_init = true;
	}
	int32_t G_B2_0 = 0;
	t158* G_B2_1 = {0};
	t158* G_B2_2 = {0};
	t2* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t158* G_B1_1 = {0};
	t158* G_B1_2 = {0};
	t2* G_B1_3 = {0};
	t2* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	t158* G_B3_2 = {0};
	t158* G_B3_3 = {0};
	t2* G_B3_4 = {0};
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m3929(__this, &m3929_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3971(__this, &m3971_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t791_TI), &L_4);
		t2* L_6 = m4352(L_5, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m3973(__this, &m3973_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_10 = m331(NULL, L_8, L_9, &m331_MI);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (t2*) &_stringLiteral284;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (t2*) &_stringLiteral284;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral274;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (t2*) &_stringLiteral275;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)G_B3_0;
		t2* L_11 = m3626(NULL, G_B3_4, G_B3_3, &m3626_MI);
		return L_11;
	}
}
#include "t794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t794_TI;
#include "t794MD.h"

extern MethodInfo m3977_MI;
extern MethodInfo m3979_MI;
extern MethodInfo m3981_MI;
extern MethodInfo m3985_MI;
extern MethodInfo m3987_MI;
extern MethodInfo m3978_MI;
extern MethodInfo m3980_MI;
extern MethodInfo m3982_MI;
extern MethodInfo m3984_MI;
extern MethodInfo m3986_MI;
extern MethodInfo m3988_MI;


extern MethodInfo m3976_MI;
extern "C" void m3976 (t794 * __this, MethodInfo* method)
{
	{
		m3943(__this, &m3943_MI);
		return;
	}
}
extern "C" t2* m3977 (t794 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3978 (t794 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3979 (t794 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3980 (t794 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3981 (t794 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3982 (t794 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3983_MI;
extern "C" t2* m3983 (t794 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3984 (t794 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3985 (t794 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3986 (t794 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3987 (t794 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3988 (t794 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3989_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3989 (t794 * __this, MethodInfo* method)
{
	static bool m3989_init;
	if (!m3989_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3989_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3941(__this, &m3941_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3977(__this, &m3977_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3979(__this, &m3979_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3981(__this, &m3981_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t791_TI), &L_10);
		t2* L_12 = m4352(L_11, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3985(__this, &m3985_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t792_TI), &L_15);
		t2* L_17 = m4352(L_16, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3987(__this, &m3987_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3626(NULL, (t2*) &_stringLiteral276, L_18, &m3626_MI);
		return L_22;
	}
}
extern MethodInfo m3990_MI;
extern TypeInfo* t785_TI_var;
extern "C" void m3990 (t794 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3990_init;
	if (!m3990_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m3990_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3942(__this, L_0, &m3942_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t785_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3931(__this, (t2*) &_stringLiteral277, L_3, L_4, &m3931_MI);
		m3978(__this, L_5, &m3978_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3932(__this, (t2*) &_stringLiteral278, L_6, L_7, &m3932_MI);
		m3980(__this, L_8, &m3980_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3934(__this, (t2*) &_stringLiteral279, L_9, L_10, &m3934_MI);
		m3982(__this, L_11, &m3982_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3931(__this, (t2*) &_stringLiteral280, L_12, L_13, &m3931_MI);
		m3984(__this, L_14, &m3984_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3933(__this, (t2*) &_stringLiteral281, L_15, L_16, &m3933_MI);
		m3986(__this, L_17, &m3986_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3935(__this, (t2*) &_stringLiteral282, L_18, L_19, &m3935_MI);
		m3988(__this, L_20, &m3988_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral283, L_22, &m610_MI);
		t897 * L_24 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_24, L_23, &m4354_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t795.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t795_TI;
#include "t795MD.h"

extern MethodInfo m3992_MI;


extern MethodInfo m3991_MI;
extern "C" void m3991 (t795 * __this, MethodInfo* method)
{
	{
		m3925(__this, &m3925_MI);
		return;
	}
}
extern "C" uint64_t m3992 (t795 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3993_MI;
extern "C" void m3993 (t795 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3994_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3994 (t795 * __this, MethodInfo* method)
{
	static bool m3994_init;
	if (!m3994_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3994_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3929(__this, &m3929_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3992(__this, &m3992_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t791_TI), &L_4);
		t2* L_6 = m4352(L_5, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3626(NULL, (t2*) &_stringLiteral285, L_2, &m3626_MI);
		return L_7;
	}
}
#include "t796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t796_TI;
#include "t796MD.h"

extern MethodInfo m3996_MI;
extern MethodInfo m3998_MI;


extern MethodInfo m3995_MI;
extern "C" void m3995 (t796 * __this, MethodInfo* method)
{
	{
		m3925(__this, &m3925_MI);
		return;
	}
}
extern "C" uint64_t m3996 (t796 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3997_MI;
extern "C" void m3997 (t796 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint16_t m3998 (t796 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3999_MI;
extern "C" void m3999 (t796 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m4000_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m4000 (t796 * __this, MethodInfo* method)
{
	static bool m4000_init;
	if (!m4000_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4000_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m3929(__this, &m3929_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3996(__this, &m3996_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t791_TI), &L_4);
		t2* L_6 = m4352(L_5, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint16_t L_8 = m3998(__this, &m3998_MI);
		uint16_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t792_TI), &L_9);
		t2* L_11 = m4352(L_10, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t2* L_12 = m3626(NULL, (t2*) &_stringLiteral286, L_7, &m3626_MI);
		return L_12;
	}
}
#include "t797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t797_TI;
#include "t797MD.h"

extern MethodInfo m4002_MI;
extern MethodInfo m4004_MI;
extern MethodInfo m4006_MI;
extern MethodInfo m4008_MI;
extern MethodInfo m4009_MI;


extern MethodInfo m4001_MI;
extern "C" void m4001 (t797 * __this, MethodInfo* method)
{
	{
		m3925(__this, &m3925_MI);
		return;
	}
}
extern "C" int32_t m4002 (t797 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m4003_MI;
extern "C" void m4003 (t797 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m4004 (t797 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m4005_MI;
extern "C" void m4005 (t797 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t2* m4006 (t797 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m4007_MI;
extern "C" void m4007 (t797 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t789 * m4008 (t797 * __this, MethodInfo* method)
{
	{
		t789 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t789 * m4009 (t797 * __this, MethodInfo* method)
{
	{
		t789 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m4010_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4359_MI_var;
extern "C" t2* m4010 (t797 * __this, MethodInfo* method)
{
	static bool m4010_init;
	if (!m4010_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4359_MI_var = il2cpp_codegen_genericmethod_get_method(&m4359_GM);
		m4010_init = true;
	}
	int32_t G_B2_0 = 0;
	t158* G_B2_1 = {0};
	t158* G_B2_2 = {0};
	t2* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t158* G_B1_1 = {0};
	t158* G_B1_2 = {0};
	t2* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t158* G_B3_2 = {0};
	t158* G_B3_3 = {0};
	t2* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	t158* G_B5_1 = {0};
	t158* G_B5_2 = {0};
	t2* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	t158* G_B4_1 = {0};
	t158* G_B4_2 = {0};
	t2* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	t158* G_B6_2 = {0};
	t158* G_B6_3 = {0};
	t2* G_B6_4 = {0};
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3929(__this, &m3929_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		int32_t L_3 = m4002(__this, &m4002_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m4004(__this, &m4004_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t125_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_9;
		t158* L_10 = L_6;
		t2* L_11 = m4006(__this, &m4006_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 3)) = (t9 *)L_11;
		t158* L_12 = L_10;
		t789 * L_13 = m4008(__this, &m4008_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral287;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral287;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		t789 * L_14 = m4008(__this, &m4008_MI);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4359_MI_var, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		t9 * L_17 = Box(InitializedTypeInfo(&t125_TI), &L_16);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)L_17;
		t158* L_18 = G_B3_3;
		t789 * L_19 = m4009(__this, &m4009_MI);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		t789 * L_20 = m4009(__this, &m4009_MI);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4359_MI_var, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		t9 * L_23 = Box(InitializedTypeInfo(&t125_TI), &L_22);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((t9 **)(t9 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (t9 *)L_23;
		t2* L_24 = m3626(NULL, G_B6_4, G_B6_3, &m3626_MI);
		return L_24;
	}
}
#include "t798.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t798_TI;
#include "t798MD.h"

extern MethodInfo m4012_MI;
extern MethodInfo m4014_MI;
extern MethodInfo m4016_MI;
extern MethodInfo m4013_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m4017_MI;


extern MethodInfo m4011_MI;
extern "C" void m4011 (t798 * __this, MethodInfo* method)
{
	{
		m3930(__this, &m3930_MI);
		return;
	}
}
extern "C" uint16_t m4012 (t798 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m4013 (t798 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m4014 (t798 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m4015 (t798 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m4016 (t798 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m4017 (t798 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m4018_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m4018 (t798 * __this, MethodInfo* method)
{
	static bool m4018_init;
	if (!m4018_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4018_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint16_t L_3 = m4012(__this, &m4012_MI);
		uint16_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t792_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m4014(__this, &m4014_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t158* L_8 = L_6;
		t2* L_9 = m4016(__this, &m4016_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_9;
		t2* L_10 = m3626(NULL, (t2*) &_stringLiteral288, L_8, &m3626_MI);
		return L_10;
	}
}
extern MethodInfo m4019_MI;
extern TypeInfo* t785_TI_var;
extern "C" void m4019 (t798 * __this, t9 * p0, MethodInfo* method)
{
	static bool m4019_init;
	if (!m4019_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m4019_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t785_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint16_t L_4 = m3933(__this, (t2*) &_stringLiteral281, L_2, L_3, &m3933_MI);
		m4013(__this, L_4, &m4013_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3931(__this, (t2*) &_stringLiteral289, L_5, L_6, &m3931_MI);
		m4015(__this, L_7, &m4015_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		t2* L_10 = m3931(__this, (t2*) &_stringLiteral290, L_8, L_9, &m3931_MI);
		m4017(__this, L_10, &m4017_MI);
		goto IL_0061;
	}

IL_004b:
	{
		t9 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_13 = m610(NULL, (t2*) &_stringLiteral283, L_12, &m610_MI);
		t897 * L_14 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_14, L_13, &m4354_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
#include "t799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t799_TI;
#include "t799MD.h"

#include "t800.h"
extern TypeInfo t800_TI;
#include "t800MD.h"
extern Il2CppType t800_0_0_0;
extern MethodInfo m4021_MI;
extern MethodInfo m4023_MI;
extern MethodInfo m4025_MI;
extern MethodInfo m4026_MI;
extern MethodInfo m4028_MI;
extern MethodInfo m4030_MI;
extern MethodInfo m4032_MI;
extern MethodInfo m4034_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m4022_MI;
extern MethodInfo m4024_MI;
extern MethodInfo m4027_MI;
extern MethodInfo m4029_MI;
extern MethodInfo m4031_MI;
extern MethodInfo m4035_MI;
struct t784;
#include "t324.h"
#include "t898.h"
extern "C" t800 * m4361 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4360_GM;
extern Il2CppGenericMethod m4361_GM;


extern MethodInfo m4020_MI;
extern "C" void m4020 (t799 * __this, MethodInfo* method)
{
	{
		m3930(__this, &m3930_MI);
		return;
	}
}
extern "C" uint64_t m4021 (t799 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m4022 (t799 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m4023 (t799 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m4024 (t799 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" int32_t m4025 (t799 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m4026 (t799 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m4027 (t799 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m4028 (t799 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m4029 (t799 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" bool m4030 (t799 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m4031 (t799 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t789 * m4032 (t799 * __this, MethodInfo* method)
{
	{
		t789 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m4033_MI;
extern "C" uint16_t m4033 (t799 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t800 * m4034 (t799 * __this, MethodInfo* method)
{
	{
		t800 * L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" void m4035 (t799 * __this, t800 * p0, MethodInfo* method)
{
	{
		t800 * L_0 = p0;
		__this->f8 = L_0;
		return;
	}
}
extern MethodInfo m4036_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4359_MI_var;
extern MethodInfo* m4360_MI_var;
extern "C" t2* m4036 (t799 * __this, MethodInfo* method)
{
	static bool m4036_init;
	if (!m4036_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4359_MI_var = il2cpp_codegen_genericmethod_get_method(&m4359_GM);
		m4360_MI_var = il2cpp_codegen_genericmethod_get_method(&m4360_GM);
		m4036_init = true;
	}
	int32_t G_B2_0 = 0;
	t158* G_B2_1 = {0};
	t158* G_B2_2 = {0};
	t2* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	t158* G_B1_1 = {0};
	t158* G_B1_2 = {0};
	t2* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	t158* G_B3_2 = {0};
	t158* G_B3_3 = {0};
	t2* G_B3_4 = {0};
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, ((int32_t)9)));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m4021(__this, &m4021_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t791_TI), &L_4);
		t2* L_6 = m4352(L_5, (t2*) &_stringLiteral267, &m4352_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m4023(__this, &m4023_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_8;
		t158* L_9 = L_7;
		int32_t L_10 = m4025(__this, &m4025_MI);
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_9, 3)) = (t9 *)L_12;
		t158* L_13 = L_9;
		int32_t L_14 = m4026(__this, &m4026_MI);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_16;
		t158* L_17 = L_13;
		int32_t L_18 = m4028(__this, &m4028_MI);
		int32_t L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 5)) = (t9 *)L_20;
		t158* L_21 = L_17;
		bool L_22 = m4030(__this, &m4030_MI);
		bool L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t124_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 6)) = (t9 *)L_24;
		t158* L_25 = L_21;
		t789 * L_26 = m4032(__this, &m4032_MI);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (t2*) &_stringLiteral291;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (t2*) &_stringLiteral291;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		t789 * L_27 = m4032(__this, &m4032_MI);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4359_MI_var, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		t9 * L_30 = Box(InitializedTypeInfo(&t125_TI), &L_29);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)L_30;
		t158* L_31 = G_B3_3;
		t800 * L_32 = m4034(__this, &m4034_MI);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4360_MI_var, L_32);
		int32_t L_34 = L_33;
		t9 * L_35 = Box(InitializedTypeInfo(&t125_TI), &L_34);
		ArrayElementTypeCheck (L_31, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 8)) = (t9 *)L_35;
		t2* L_36 = m3626(NULL, G_B3_4, L_31, &m3626_MI);
		return L_36;
	}
}
extern MethodInfo m4037_MI;
extern TypeInfo* t785_TI_var;
extern MethodInfo* m4361_MI_var;
extern "C" void m4037 (t799 * __this, t9 * p0, MethodInfo* method)
{
	static bool m4037_init;
	if (!m4037_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m4361_MI_var = il2cpp_codegen_genericmethod_get_method(&m4361_GM);
		m4037_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t785_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint64_t L_4 = m3934(__this, (t2*) &_stringLiteral279, L_2, L_3, &m3934_MI);
		m4022(__this, L_4, &m4022_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3931(__this, (t2*) &_stringLiteral2, L_5, L_6, &m3931_MI);
		m4024(__this, L_7, &m4024_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		int32_t L_10 = m3932(__this, (t2*) &_stringLiteral292, L_8, L_9, &m3932_MI);
		m4027(__this, L_10, &m4027_MI);
		t9 * L_11 = p0;
		t9* L_12 = V_0;
		int32_t L_13 = m3932(__this, (t2*) &_stringLiteral293, L_11, L_12, &m3932_MI);
		m4029(__this, L_13, &m4029_MI);
		t9 * L_14 = p0;
		t9* L_15 = V_0;
		bool L_16 = m3935(__this, (t2*) &_stringLiteral294, L_14, L_15, &m3935_MI);
		m4031(__this, L_16, &m4031_MI);
		t9 * L_17 = p0;
		t9* L_18 = V_0;
		t800 * L_19 = m4361(__this, (t2*) &_stringLiteral295, L_17, L_18, m4361_MI_var);
		m4035(__this, L_19, &m4035_MI);
		goto IL_009a;
	}

IL_0084:
	{
		t9 * L_20 = p0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = m610(NULL, (t2*) &_stringLiteral283, L_21, &m610_MI);
		t897 * L_23 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_23, L_22, &m4354_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
#include "t801.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t801_TI;
#include "t801MD.h"

#include "t802.h"
extern TypeInfo t802_TI;
#include "t802MD.h"
extern Il2CppType t802_0_0_0;
extern MethodInfo m4039_MI;
extern MethodInfo m4362_MI;
extern MethodInfo m4040_MI;
struct t784;
extern "C" t802 * m4363 (t784 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4362_GM;
extern Il2CppGenericMethod m4363_GM;


extern MethodInfo m4038_MI;
extern "C" void m4038 (t801 * __this, MethodInfo* method)
{
	{
		m3943(__this, &m3943_MI);
		return;
	}
}
extern "C" t802 * m4039 (t801 * __this, MethodInfo* method)
{
	{
		t802 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m4040 (t801 * __this, t802 * p0, MethodInfo* method)
{
	{
		t802 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m4041_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4362_MI_var;
extern "C" t2* m4041 (t801 * __this, MethodInfo* method)
{
	static bool m4041_init;
	if (!m4041_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4362_MI_var = il2cpp_codegen_genericmethod_get_method(&m4362_GM);
		m4041_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3941(__this, &m3941_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t802 * L_3 = m4039(__this, &m4039_MI);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4362_MI_var, L_3);
		int32_t L_5 = L_4;
		t9 * L_6 = Box(InitializedTypeInfo(&t125_TI), &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3626(NULL, (t2*) &_stringLiteral296, L_2, &m3626_MI);
		return L_7;
	}
}
extern MethodInfo m4042_MI;
extern TypeInfo* t785_TI_var;
extern MethodInfo* m4363_MI_var;
extern "C" void m4042 (t801 * __this, t9 * p0, MethodInfo* method)
{
	static bool m4042_init;
	if (!m4042_init)
	{
		t785_TI_var = il2cpp_codegen_class_from_type(&t785_0_0_0);
		m4363_MI_var = il2cpp_codegen_genericmethod_get_method(&m4363_GM);
		m4042_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3942(__this, L_0, &m3942_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t785_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t802 * L_5 = m4363(__this, (t2*) &_stringLiteral297, L_3, L_4, m4363_MI_var);
		m4040(__this, L_5, &m4040_MI);
		goto IL_0042;
	}

IL_002c:
	{
		t9 * L_6 = p0;
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m610(NULL, (t2*) &_stringLiteral283, L_7, &m610_MI);
		t897 * L_9 = (t897 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t897_TI));
		m4354(L_9, L_8, &m4354_MI);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
#include "t783MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t782MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t791MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t792MD.h"



#include "t803.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t803_TI;
#include "t803MD.h"

extern TypeInfo t737_TI;
extern TypeInfo t582_TI;
extern Il2CppType t737_0_0_0;
extern MethodInfo m4364_MI;


extern MethodInfo m4043_MI;
extern TypeInfo* t737_TI_var;
extern "C" void m4043 (t803 * __this, MethodInfo* method)
{
	static bool m4043_init;
	if (!m4043_init)
	{
		t737_TI_var = il2cpp_codegen_class_from_type(&t737_0_0_0);
		m4043_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f0 = ((t737*)SZArrayNew(t737_TI_var, ((int32_t)64)));
		return;
	}
}
extern MethodInfo m4044_MI;
extern "C" t2* m4044 (t803 * __this, MethodInfo* method)
{
	{
		t737* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t305_TI));
		t2* L_1 = m4364(NULL, L_0, &m4364_MI);
		return L_1;
	}
}
#include "t804.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t804_TI;
#include "t804MD.h"

#include "t805.h"
#include "t806.h"
extern TypeInfo t805_TI;
extern TypeInfo t806_TI;
#include "t899MD.h"
#include "t805MD.h"
#include "t806MD.h"
#include "t161MD.h"
extern Il2CppType t806_0_0_0;
extern MethodInfo m4365_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m4367_MI;
extern MethodInfo m3184_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4368_MI;
extern Il2CppGenericMethod m4367_GM;
extern Il2CppGenericMethod m4368_GM;


extern MethodInfo m4045_MI;
extern TypeInfo* t806_TI_var;
extern MethodInfo* m4367_MI_var;
extern "C" void m4045 (t9 * __this , MethodInfo* method)
{
	static bool m4045_init;
	if (!m4045_init)
	{
		t806_TI_var = il2cpp_codegen_class_from_type(&t806_0_0_0);
		m4367_MI_var = il2cpp_codegen_genericmethod_get_method(&m4367_GM);
		m4045_init = true;
	}
	{
		int32_t L_0 = m4365(NULL, &m4365_MI);
		t805 * L_1 = (t805 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t805_TI));
		m4366(L_1, L_0, &m4366_MI);
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f0 = L_1;
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f1 = 0;
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f2 = 0;
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f3 = (((int64_t)(-1)));
		t806 * L_2 = (t806 *)il2cpp_codegen_object_new (t806_TI_var);
		m4367(L_2, m4367_MI_var);
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f4 = L_2;
		return;
	}
}
extern MethodInfo m4046_MI;
extern "C" uint64_t m4046 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m3184(NULL, &m3184_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		int32_t L_1 = ((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f2;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_0, L_3, &m511_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4273_MI, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
extern MethodInfo m4047_MI;
extern "C" void m4047 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m4048_MI;
extern "C" uint64_t m4048 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_0 = ((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m4049_MI;
extern MethodInfo* m4368_MI_var;
extern "C" t803 * m4049 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	static bool m4049_init;
	if (!m4049_init)
	{
		m4368_MI_var = il2cpp_codegen_genericmethod_get_method(&m4368_GM);
		m4049_init = true;
	}
	t803 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		t806 * L_0 = ((t804_SFs*)InitializedTypeInfo(&t804_TI)->static_fields)->f4;
		uint64_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, t803 ** >::Invoke(m4368_MI_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t803 * L_3 = (t803 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t803_TI));
		m4043(L_3, &m4043_MI);
		V_0 = L_3;
	}

IL_0018:
	{
		t803 * L_4 = V_0;
		return L_4;
	}
}
#include "t807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t807_TI;
#include "t807MD.h"

#include "t808.h"
#include "t809.h"
#include "t738.h"
#include "t734.h"
#include "t8.h"
#include "t735.h"
#include "t810.h"
#include "t811.h"
#include "t812.h"
extern TypeInfo t808_TI;
extern TypeInfo t738_TI;
extern TypeInfo t8_TI;
extern TypeInfo t735_TI;
extern TypeInfo t734_TI;
#include "t808MD.h"
#include "t896MD.h"
#include "t738MD.h"
#include "t168MD.h"
#include "t124MD.h"
#include "t735MD.h"
#include "t734MD.h"
extern Il2CppType t735_0_0_0;
extern MethodInfo m4369_MI;
extern MethodInfo m4370_MI;
extern MethodInfo m4053_MI;
extern MethodInfo m4055_MI;
extern MethodInfo m4051_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m3612_MI;
extern MethodInfo m651_MI;
extern MethodInfo m3613_MI;
extern MethodInfo m3615_MI;
extern MethodInfo m4372_MI;
extern MethodInfo m4373_MI;
extern MethodInfo m3616_MI;
extern MethodInfo m4322_MI;
extern MethodInfo m4374_MI;
extern MethodInfo m3597_MI;
extern MethodInfo m4057_MI;
extern MethodInfo m4059_MI;
extern MethodInfo m4061_MI;
extern MethodInfo m4063_MI;
struct t807;
#include "t900.h"
extern "C" t9 * m4375 (t807 * __this, t734 * p0, t809 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t807;
#include "t901.h"
extern "C" t9 * m4376 (t807 * __this, t734 * p0, t810 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t807;
#include "t902.h"
extern "C" t9 * m4377 (t807 * __this, t734 * p0, t811 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t807;
#include "t903.h"
extern "C" t9 * m4378 (t807 * __this, t734 * p0, t812 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4322_GM;
extern Il2CppGenericMethod m4375_GM;
extern Il2CppGenericMethod m4376_GM;
extern Il2CppGenericMethod m4377_GM;
extern Il2CppGenericMethod m4378_GM;


extern MethodInfo m4050_MI;
extern "C" void m4050 (t807 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_0 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4369(L_0, (t2*) &_stringLiteral298, &m4369_MI);
		__this->f3 = L_0;
		m328(__this, &m328_MI);
		t2* L_1 = m3755(NULL, (t2*) &_stringLiteral299, &m3755_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		bool L_3 = m4370(NULL, L_2, (&V_1), &m4370_MI);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		m611(NULL, (t2*) &_stringLiteral300, &m611_MI);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		m4053(__this, L_4, &m4053_MI);
	}

IL_0044:
	{
		return;
	}
}
extern "C" t808 * m4051 (t807 * __this, MethodInfo* method)
{
	{
		t808 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m4052_MI;
extern "C" void m4052 (t807 * __this, t808 * p0, MethodInfo* method)
{
	{
		t808 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m4053 (t807 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		m4047(NULL, L_0, &m4047_MI);
		return;
	}
}
extern MethodInfo m4054_MI;
extern "C" t171 * m4054 (t807 * __this, t2* p0, uint32_t p1, bool p2, t2* p3, t809 * p4, MethodInfo* method)
{
	t788 * V_0 = {0};
	{
		t788 * L_0 = (t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t788_TI));
		m3944(L_0, &m3944_MI);
		V_0 = L_0;
		t788 * L_1 = V_0;
		t2* L_2 = p0;
		m3946(L_1, L_2, &m3946_MI);
		t788 * L_3 = V_0;
		uint32_t L_4 = p1;
		m3948(L_3, L_4, &m3948_MI);
		t788 * L_5 = V_0;
		bool L_6 = p2;
		m3950(L_5, L_6, &m3950_MI);
		t788 * L_7 = V_0;
		t2* L_8 = p3;
		m3952(L_7, L_8, &m3952_MI);
		t788 * L_9 = V_0;
		t809 * L_10 = p4;
		t171 * L_11 = m4055(__this, L_9, L_10, &m4055_MI);
		return L_11;
	}
}
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4375_MI_var;
extern "C" t171 * m4055 (t807 * __this, t788 * p0, t809 * p1, MethodInfo* method)
{
	static bool m4055_init;
	if (!m4055_init)
	{
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4375_MI_var = il2cpp_codegen_genericmethod_get_method(&m4375_GM);
		m4055_init = true;
	}
	t808 * V_0 = {0};
	t738 * V_1 = {0};
	t734 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		t808 * L_0 = m4051(__this, &m4051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_1 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4371(L_1, L_0, (t2*) &_stringLiteral301, &m4371_MI);
		V_0 = L_1;
		t808 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral302, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t738 * L_4 = (t738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t738_TI));
		m3612(L_4, &m3612_MI);
		V_1 = L_4;
		t738 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_6 = m4046(NULL, &m4046_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t782_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3613(L_5, (t2*) &_stringLiteral303, L_9, &m3613_MI);
		t738 * L_10 = V_1;
		uint64_t L_11 = m4048(NULL, &m4048_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t783_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3613(L_10, (t2*) &_stringLiteral304, L_14, &m3613_MI);
		t738 * L_15 = V_1;
		m3615(L_15, (t2*) &_stringLiteral280, 0, &m3615_MI);
		t738 * L_16 = V_1;
		m3615(L_16, (t2*) &_stringLiteral305, 0, &m3615_MI);
		t738 * L_17 = V_1;
		t788 * L_18 = p0;
		t2* L_19 = m3945(L_18, &m3945_MI);
		m3613(L_17, (t2*) &_stringLiteral2, L_19, &m3613_MI);
		t738 * L_20 = V_1;
		t788 * L_21 = p0;
		uint32_t L_22 = m3947(L_21, &m3947_MI);
		V_3 = L_22;
		t2* L_23 = m4372((&V_3), &m4372_MI);
		m3613(L_20, (t2*) &_stringLiteral306, L_23, &m3613_MI);
		t738 * L_24 = V_1;
		t788 * L_25 = p0;
		bool L_26 = m3949(L_25, &m3949_MI);
		V_4 = L_26;
		t2* L_27 = m4373((&V_4), &m4373_MI);
		m3613(L_24, (t2*) &_stringLiteral307, L_27, &m3613_MI);
		t738 * L_28 = V_1;
		t788 * L_29 = p0;
		t2* L_30 = m3951(L_29, &m3951_MI);
		m3613(L_28, (t2*) &_stringLiteral308, L_30, &m3613_MI);
		t738 * L_31 = V_1;
		t735 * L_32 = m3616(L_31, &m3616_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_32, (t2*) &_stringLiteral309, (t2*) &_stringLiteral310);
		t808 * L_33 = V_0;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_33);
		t738 * L_35 = V_1;
		t734 * L_36 = (t734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t734_TI));
		m3597(L_36, L_34, L_35, &m3597_MI);
		V_2 = L_36;
		t734 * L_37 = V_2;
		t809 * L_38 = p1;
		t9 * L_39 = m4375(__this, L_37, L_38, m4375_MI_var);
		t171 * L_40 = m605(__this, L_39, &m605_MI);
		return L_40;
	}
}
extern MethodInfo m4056_MI;
extern "C" t171 * m4056 (t807 * __this, uint64_t p0, t2* p1, t810 * p2, MethodInfo* method)
{
	t793 * V_0 = {0};
	{
		t793 * L_0 = (t793 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t793_TI));
		m3970(L_0, &m3970_MI);
		V_0 = L_0;
		t793 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3972(L_1, L_2, &m3972_MI);
		t793 * L_3 = V_0;
		t2* L_4 = p1;
		m3974(L_3, L_4, &m3974_MI);
		t793 * L_5 = V_0;
		t810 * L_6 = p2;
		t171 * L_7 = m4057(__this, L_5, L_6, &m4057_MI);
		return L_7;
	}
}
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4376_MI_var;
extern "C" t171 * m4057 (t807 * __this, t793 * p0, t810 * p1, MethodInfo* method)
{
	static bool m4057_init;
	if (!m4057_init)
	{
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4376_MI_var = il2cpp_codegen_genericmethod_get_method(&m4376_GM);
		m4057_init = true;
	}
	t808 * V_0 = {0};
	t738 * V_1 = {0};
	t734 * V_2 = {0};
	{
		t808 * L_0 = m4051(__this, &m4051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_1 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4371(L_1, L_0, (t2*) &_stringLiteral311, &m4371_MI);
		V_0 = L_1;
		t808 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral312, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t738 * L_4 = (t738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t738_TI));
		m3612(L_4, &m3612_MI);
		V_1 = L_4;
		t738 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_6 = m4046(NULL, &m4046_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t782_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3613(L_5, (t2*) &_stringLiteral303, L_9, &m3613_MI);
		t738 * L_10 = V_1;
		uint64_t L_11 = m4048(NULL, &m4048_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t783_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3613(L_10, (t2*) &_stringLiteral304, L_14, &m3613_MI);
		t738 * L_15 = V_1;
		m3615(L_15, (t2*) &_stringLiteral280, 0, &m3615_MI);
		t738 * L_16 = V_1;
		m3615(L_16, (t2*) &_stringLiteral305, 0, &m3615_MI);
		t738 * L_17 = V_1;
		t793 * L_18 = p0;
		uint64_t L_19 = m3971(L_18, &m3971_MI);
		uint64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t791_TI), &L_20);
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_21);
		m3613(L_17, (t2*) &_stringLiteral279, L_22, &m3613_MI);
		t738 * L_23 = V_1;
		t793 * L_24 = p0;
		t2* L_25 = m3973(L_24, &m3973_MI);
		m3613(L_23, (t2*) &_stringLiteral308, L_25, &m3613_MI);
		t738 * L_26 = V_1;
		t735 * L_27 = m3616(L_26, &m3616_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_27, (t2*) &_stringLiteral309, (t2*) &_stringLiteral310);
		t808 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_28);
		t738 * L_30 = V_1;
		t734 * L_31 = (t734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t734_TI));
		m3597(L_31, L_29, L_30, &m3597_MI);
		V_2 = L_31;
		t734 * L_32 = V_2;
		t810 * L_33 = p1;
		t9 * L_34 = m4376(__this, L_32, L_33, m4376_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
extern MethodInfo m4058_MI;
extern "C" t171 * m4058 (t807 * __this, uint64_t p0, t811 * p1, MethodInfo* method)
{
	t795 * V_0 = {0};
	{
		t795 * L_0 = (t795 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t795_TI));
		m3991(L_0, &m3991_MI);
		V_0 = L_0;
		t795 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3993(L_1, L_2, &m3993_MI);
		t795 * L_3 = V_0;
		t811 * L_4 = p1;
		t171 * L_5 = m4059(__this, L_3, L_4, &m4059_MI);
		return L_5;
	}
}
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4377_MI_var;
extern "C" t171 * m4059 (t807 * __this, t795 * p0, t811 * p1, MethodInfo* method)
{
	static bool m4059_init;
	if (!m4059_init)
	{
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4377_MI_var = il2cpp_codegen_genericmethod_get_method(&m4377_GM);
		m4059_init = true;
	}
	t808 * V_0 = {0};
	t738 * V_1 = {0};
	t734 * V_2 = {0};
	{
		t808 * L_0 = m4051(__this, &m4051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_1 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4371(L_1, L_0, (t2*) &_stringLiteral313, &m4371_MI);
		V_0 = L_1;
		t808 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m610(NULL, (t2*) &_stringLiteral314, L_3, &m610_MI);
		m611(NULL, L_4, &m611_MI);
		t738 * L_5 = (t738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t738_TI));
		m3612(L_5, &m3612_MI);
		V_1 = L_5;
		t738 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_7 = m4046(NULL, &m4046_MI);
		uint64_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t782_TI), &L_8);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_9);
		m3613(L_6, (t2*) &_stringLiteral303, L_10, &m3613_MI);
		t738 * L_11 = V_1;
		uint64_t L_12 = m4048(NULL, &m4048_MI);
		uint64_t L_13 = L_12;
		t9 * L_14 = Box(InitializedTypeInfo(&t783_TI), &L_13);
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_14);
		m3613(L_11, (t2*) &_stringLiteral304, L_15, &m3613_MI);
		t738 * L_16 = V_1;
		t795 * L_17 = p0;
		uint64_t L_18 = m3992(L_17, &m3992_MI);
		t803 * L_19 = m4049(NULL, L_18, &m4049_MI);
		t2* L_20 = m4044(L_19, &m4044_MI);
		m3613(L_16, (t2*) &_stringLiteral280, L_20, &m3613_MI);
		t738 * L_21 = V_1;
		m3615(L_21, (t2*) &_stringLiteral305, 0, &m3615_MI);
		t738 * L_22 = V_1;
		t795 * L_23 = p0;
		uint64_t L_24 = m3992(L_23, &m3992_MI);
		uint64_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t791_TI), &L_25);
		t2* L_27 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_26);
		m3613(L_22, (t2*) &_stringLiteral279, L_27, &m3613_MI);
		t738 * L_28 = V_1;
		t735 * L_29 = m3616(L_28, &m3616_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_29, (t2*) &_stringLiteral309, (t2*) &_stringLiteral310);
		t808 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_30);
		t738 * L_32 = V_1;
		t734 * L_33 = (t734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t734_TI));
		m3597(L_33, L_31, L_32, &m3597_MI);
		V_2 = L_33;
		t734 * L_34 = V_2;
		t811 * L_35 = p1;
		t9 * L_36 = m4377(__this, L_34, L_35, m4377_MI_var);
		t171 * L_37 = m605(__this, L_36, &m605_MI);
		return L_37;
	}
}
extern MethodInfo m4060_MI;
extern "C" t171 * m4060 (t807 * __this, uint64_t p0, uint16_t p1, t811 * p2, MethodInfo* method)
{
	t796 * V_0 = {0};
	{
		t796 * L_0 = (t796 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t796_TI));
		m3995(L_0, &m3995_MI);
		V_0 = L_0;
		t796 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3997(L_1, L_2, &m3997_MI);
		t796 * L_3 = V_0;
		uint16_t L_4 = p1;
		m3999(L_3, L_4, &m3999_MI);
		t796 * L_5 = V_0;
		t811 * L_6 = p2;
		t171 * L_7 = m4061(__this, L_5, L_6, &m4061_MI);
		return L_7;
	}
}
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4377_MI_var;
extern "C" t171 * m4061 (t807 * __this, t796 * p0, t811 * p1, MethodInfo* method)
{
	static bool m4061_init;
	if (!m4061_init)
	{
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4377_MI_var = il2cpp_codegen_genericmethod_get_method(&m4377_GM);
		m4061_init = true;
	}
	t808 * V_0 = {0};
	t738 * V_1 = {0};
	t734 * V_2 = {0};
	{
		t808 * L_0 = m4051(__this, &m4051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_1 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4371(L_1, L_0, (t2*) &_stringLiteral315, &m4371_MI);
		V_0 = L_1;
		t808 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral316, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t738 * L_4 = (t738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t738_TI));
		m3612(L_4, &m3612_MI);
		V_1 = L_4;
		t738 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_6 = m4046(NULL, &m4046_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t782_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3613(L_5, (t2*) &_stringLiteral303, L_9, &m3613_MI);
		t738 * L_10 = V_1;
		uint64_t L_11 = m4048(NULL, &m4048_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t783_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3613(L_10, (t2*) &_stringLiteral304, L_14, &m3613_MI);
		t738 * L_15 = V_1;
		t796 * L_16 = p0;
		uint64_t L_17 = m3996(L_16, &m3996_MI);
		t803 * L_18 = m4049(NULL, L_17, &m4049_MI);
		t2* L_19 = m4044(L_18, &m4044_MI);
		m3613(L_15, (t2*) &_stringLiteral280, L_19, &m3613_MI);
		t738 * L_20 = V_1;
		m3615(L_20, (t2*) &_stringLiteral305, 0, &m3615_MI);
		t738 * L_21 = V_1;
		t796 * L_22 = p0;
		uint64_t L_23 = m3996(L_22, &m3996_MI);
		uint64_t L_24 = L_23;
		t9 * L_25 = Box(InitializedTypeInfo(&t791_TI), &L_24);
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_25);
		m3613(L_21, (t2*) &_stringLiteral279, L_26, &m3613_MI);
		t738 * L_27 = V_1;
		t796 * L_28 = p0;
		uint16_t L_29 = m3998(L_28, &m3998_MI);
		uint16_t L_30 = L_29;
		t9 * L_31 = Box(InitializedTypeInfo(&t792_TI), &L_30);
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_31);
		m3613(L_27, (t2*) &_stringLiteral281, L_32, &m3613_MI);
		t738 * L_33 = V_1;
		t735 * L_34 = m3616(L_33, &m3616_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_34, (t2*) &_stringLiteral309, (t2*) &_stringLiteral310);
		t808 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_35);
		t738 * L_37 = V_1;
		t734 * L_38 = (t734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t734_TI));
		m3597(L_38, L_36, L_37, &m3597_MI);
		V_2 = L_38;
		t734 * L_39 = V_2;
		t811 * L_40 = p1;
		t9 * L_41 = m4377(__this, L_39, L_40, m4377_MI_var);
		t171 * L_42 = m605(__this, L_41, &m605_MI);
		return L_42;
	}
}
extern MethodInfo m4062_MI;
extern "C" t171 * m4062 (t807 * __this, int32_t p0, int32_t p1, t2* p2, t812 * p3, MethodInfo* method)
{
	t797 * V_0 = {0};
	{
		t797 * L_0 = (t797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t797_TI));
		m4001(L_0, &m4001_MI);
		V_0 = L_0;
		t797 * L_1 = V_0;
		int32_t L_2 = p0;
		m4005(L_1, L_2, &m4005_MI);
		t797 * L_3 = V_0;
		int32_t L_4 = p1;
		m4003(L_3, L_4, &m4003_MI);
		t797 * L_5 = V_0;
		t2* L_6 = p2;
		m4007(L_5, L_6, &m4007_MI);
		t797 * L_7 = V_0;
		t812 * L_8 = p3;
		t171 * L_9 = m4063(__this, L_7, L_8, &m4063_MI);
		return L_9;
	}
}
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4378_MI_var;
extern "C" t171 * m4063 (t807 * __this, t797 * p0, t812 * p1, MethodInfo* method)
{
	static bool m4063_init;
	if (!m4063_init)
	{
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4378_MI_var = il2cpp_codegen_genericmethod_get_method(&m4378_GM);
		m4063_init = true;
	}
	t808 * V_0 = {0};
	t738 * V_1 = {0};
	t734 * V_2 = {0};
	{
		t808 * L_0 = m4051(__this, &m4051_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t808_TI));
		t808 * L_1 = (t808 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t808_TI));
		m4371(L_1, L_0, (t2*) &_stringLiteral317, &m4371_MI);
		V_0 = L_1;
		t808 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral318, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t738 * L_4 = (t738 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t738_TI));
		m3612(L_4, &m3612_MI);
		V_1 = L_4;
		t738 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t804_TI));
		uint64_t L_6 = m4046(NULL, &m4046_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t782_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3613(L_5, (t2*) &_stringLiteral303, L_9, &m3613_MI);
		t738 * L_10 = V_1;
		uint64_t L_11 = m4048(NULL, &m4048_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t783_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3613(L_10, (t2*) &_stringLiteral304, L_14, &m3613_MI);
		t738 * L_15 = V_1;
		m3615(L_15, (t2*) &_stringLiteral280, 0, &m3615_MI);
		t738 * L_16 = V_1;
		m3615(L_16, (t2*) &_stringLiteral305, 0, &m3615_MI);
		t738 * L_17 = V_1;
		t797 * L_18 = p0;
		int32_t L_19 = m4002(L_18, &m4002_MI);
		m3615(L_17, (t2*) &_stringLiteral319, L_19, &m3615_MI);
		t738 * L_20 = V_1;
		t797 * L_21 = p0;
		int32_t L_22 = m4004(L_21, &m4004_MI);
		m3615(L_20, (t2*) &_stringLiteral320, L_22, &m3615_MI);
		t738 * L_23 = V_1;
		t797 * L_24 = p0;
		t2* L_25 = m4006(L_24, &m4006_MI);
		m3613(L_23, (t2*) &_stringLiteral321, L_25, &m3613_MI);
		t738 * L_26 = V_1;
		t735 * L_27 = m3616(L_26, &m3616_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4322_MI_var, L_27, (t2*) &_stringLiteral309, (t2*) &_stringLiteral310);
		t808 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4374_MI, L_28);
		t738 * L_30 = V_1;
		t734 * L_31 = (t734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t734_TI));
		m3597(L_31, L_29, L_30, &m3597_MI);
		V_2 = L_31;
		t734 * L_32 = V_2;
		t812 * L_33 = p1;
		t9 * L_34 = m4378(__this, L_32, L_33, m4378_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
#include "t813.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t813_TI;
#include "t813MD.h"

#include "t324MD.h"
#include "t821MD.h"
extern MethodInfo m4086_MI;
extern Il2CppGenericMethod m4379_GM;


extern MethodInfo m4064_MI;
extern MethodInfo* m4379_MI_var;
extern "C" void m4064 (t813 * __this, MethodInfo* method)
{
	static bool m4064_init;
	if (!m4064_init)
	{
		m4379_MI_var = il2cpp_codegen_genericmethod_get_method(&m4379_GM);
		m4064_init = true;
	}
	{
		m4379(__this, m4379_MI_var);
		return;
	}
}
extern MethodInfo m4065_MI;
extern "C" t2* m4065 (t813 * __this, MethodInfo* method)
{
	t2* G_B2_0 = {0};
	t2* G_B1_0 = {0};
	{
		t2* L_0 = m4086(NULL, __this, &m4086_MI);
		t2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
