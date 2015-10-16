#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t730.h"
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
extern TypeInfo t730_TI;
#include "t730MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t39.h"
#include "t463.h"

#include "t121.h"

extern MethodInfo m3573_MI;
extern "C" void m3573 (t730 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3574_MI;
extern "C" void m3574 (t730 * __this, t39 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3574((t730 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t730(Il2CppObject* delegate, t39 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t39 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
extern MethodInfo m3575_MI;
extern "C" t9 * m3575 (t730 * __this, t39 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3576_MI;
extern "C" void m3576 (t730 * __this, t9 * p0, MethodInfo* method)
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
#include "t434.h"
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
extern MethodInfo m3578_MI;
extern MethodInfo m3579_MI;
extern MethodInfo m3580_MI;
extern MethodInfo m3582_MI;
extern MethodInfo m3583_MI;
extern MethodInfo m3584_MI;
extern MethodInfo m3585_MI;
extern MethodInfo m3586_MI;
extern MethodInfo m3587_MI;
extern MethodInfo m3594_MI;
extern MethodInfo m3596_MI;
extern MethodInfo m3597_MI;


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
extern MethodInfo m2397_MI;
extern "C" float m2397 (t39 * __this, MethodInfo* method)
{
	typedef float (*m2397_ftn) (t39 *);
	static m2397_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2397_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
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
extern MethodInfo m2533_MI;
extern "C" int32_t m2533 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m2533_ftn) (t39 *);
	static m2533_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2533_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
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
extern MethodInfo m3577_MI;
extern "C" int32_t m3577 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m3577_ftn) (t39 *);
	static m3577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3578 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3578_ftn) (t39 *, t43 *);
	static m3578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3579 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3579_ftn) (t39 *, t43 *);
	static m3579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m497_MI;
extern "C" t43  m497 (t39 * __this, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		m3578(__this, (&V_0), &m3578_MI);
		t43  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m429_MI;
extern "C" void m429 (t39 * __this, t43  p0, MethodInfo* method)
{
	{
		m3579(__this, (&p0), &m3579_MI);
		return;
	}
}
extern "C" void m3580 (t39 * __this, t434 * p0, MethodInfo* method)
{
	typedef void (*m3580_ftn) (t39 *, t434 *);
	static m3580_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3580_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3581_MI;
extern "C" t434  m3581 (t39 * __this, MethodInfo* method)
{
	t434  V_0 = {0};
	{
		m3580(__this, (&V_0), &m3580_MI);
		t434  L_0 = V_0;
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
extern "C" void m3582 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3582_ftn) (t39 *, t46 *);
	static m3582_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3582_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3583 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3583_ftn) (t39 *, t46 *);
	static m3583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m461_MI;
extern "C" t46  m461 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3582(__this, (&V_0), &m3582_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m463_MI;
extern "C" void m463 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3583(__this, (&p0), &m3583_MI);
		return;
	}
}
extern "C" void m3584 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3584_ftn) (t39 *, t46 *);
	static m3584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3585 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3585_ftn) (t39 *, t46 *);
	static m3585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m464_MI;
extern "C" t46  m464 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3584(__this, (&V_0), &m3584_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m465_MI;
extern "C" void m465 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3585(__this, (&p0), &m3585_MI);
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
extern MethodInfo m2625_MI;
extern "C" t13  m2625 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3586(NULL, __this, (&p0), &m3586_MI);
		return L_0;
	}
}
extern "C" t13  m3586 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3586_ftn) (t39 *, t13 *);
	static m3586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m557_MI;
extern "C" t74  m557 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t74  L_0 = m3587(NULL, __this, (&p0), &m3587_MI);
		return L_0;
	}
}
extern "C" t74  m3587 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t74  (*m3587_ftn) (t39 *, t13 *);
	static m3587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
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
extern MethodInfo m3588_MI;
extern "C" int32_t m3588 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3588_ftn) ();
	static m3588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3589_MI;
extern "C" int32_t m3589 (t9 * __this , t731* p0, MethodInfo* method)
{
	typedef int32_t (*m3589_ftn) (t731*);
	static m3589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3590_MI;
extern "C" void m3590 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t730 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t730 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3574_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3591_MI;
extern "C" void m3591 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t730 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t730 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3574_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3592_MI;
extern "C" void m3592 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t730 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t730 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3574_MI, L_1, L_2);
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
extern MethodInfo m3593_MI;
extern "C" t59 * m3593 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3594(NULL, __this, (&p0), L_0, L_1, &m3594_MI);
		return L_2;
	}
}
extern "C" t59 * m3594 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3594_ftn) (t39 *, t74 *, float, int32_t);
	static m3594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m3595_MI;
extern "C" t59 * m3595 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3596(NULL, __this, (&p0), L_0, L_1, &m3596_MI);
		return L_2;
	}
}
extern "C" t59 * m3596 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3596_ftn) (t39 *, t74 *, float, int32_t);
	static m3596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m488_MI;
extern "C" t46  m488 (t39 * __this, t47  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3597(NULL, __this, (&p0), &m3597_MI);
		return L_0;
	}
}
extern "C" t46  m3597 (t9 * __this , t39 * p0, t47 * p1, MethodInfo* method)
{
	typedef t46  (*m3597_ftn) (t39 *, t47 *);
	static m3597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)");
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
extern MethodInfo m3598_MI;
extern MethodInfo m2884_MI;
extern MethodInfo m611_MI;
extern MethodInfo m1158_MI;
extern MethodInfo m400_MI;
extern MethodInfo m1159_MI;
extern MethodInfo m3599_MI;
extern MethodInfo m1166_MI;
extern MethodInfo m1167_MI;


extern "C" void m3598 (t9 * __this , int32_t p0, t2* p1, t57 * p2, MethodInfo* method)
{
	typedef void (*m3598_ftn) (int32_t, t2*, t57 *);
	static m3598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3599 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	typedef void (*m3599_ftn) (t138 *, t57 *);
	static m3599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
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
		G_B3_0 = (t2*) &_stringLiteral261;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3598(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3598_MI);
		return;
	}
}
extern "C" void m1158 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
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
		G_B3_0 = (t2*) &_stringLiteral261;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		t57 * L_3 = p1;
		m3598(NULL, G_B3_1, G_B3_0, L_3, &m3598_MI);
		return;
	}
}
extern MethodInfo m1165_MI;
extern "C" void m1165 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		m611(NULL, L_2, &m611_MI);
		return;
	}
}
extern MethodInfo m1164_MI;
extern "C" void m1164 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		t57 * L_3 = p0;
		m1158(NULL, L_2, L_3, &m1158_MI);
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
		G_B3_0 = (t2*) &_stringLiteral261;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3598(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3598_MI);
		return;
	}
}
extern "C" void m1159 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3598(NULL, 2, L_1, L_2, &m3598_MI);
		return;
	}
}
extern MethodInfo m1160_MI;
extern "C" void m1160 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		m400(NULL, L_2, &m400_MI);
		return;
	}
}
extern MethodInfo m1161_MI;
extern "C" void m1161 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		t57 * L_3 = p0;
		m1159(NULL, L_2, L_3, &m1159_MI);
		return;
	}
}
extern MethodInfo m1163_MI;
extern "C" void m1163 (t9 * __this , t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m3599(NULL, L_0, (t57 *)NULL, &m3599_MI);
		return;
	}
}
extern MethodInfo m1162_MI;
extern "C" void m1162 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		t57 * L_1 = p1;
		m3599(NULL, L_0, L_1, &m3599_MI);
		return;
	}
}
extern "C" void m1166 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		m3598(NULL, 1, L_1, (t57 *)NULL, &m3598_MI);
		return;
	}
}
extern "C" void m1167 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3598(NULL, 1, L_1, L_2, &m3598_MI);
		return;
	}
}
extern MethodInfo m1168_MI;
extern "C" void m1168 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		m1166(NULL, L_2, &m1166_MI);
		return;
	}
}
extern MethodInfo m1169_MI;
extern "C" void m1169 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2884(NULL, L_0, L_1, &m2884_MI);
		t57 * L_3 = p0;
		m1167(NULL, L_2, L_3, &m1167_MI);
		return;
	}
}
extern MethodInfo m1068_MI;
extern "C" bool m1068 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m1068_ftn) ();
	static m1068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::get_isDebugBuild()");
	return _il2cpp_icall_func();
}
#include "t732.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t732_TI;
#include "t732MD.h"



extern MethodInfo m3600_MI;
extern "C" void m3600 (t732 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3601_MI;
extern "C" void m3601 (t732 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3601((t732 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t732(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3602_MI;
extern "C" t9 * m3602 (t732 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3603_MI;
extern "C" void m3603 (t732 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t733.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t733_TI;
#include "t733MD.h"

#include "t736.h"
#include "t286.h"
extern TypeInfo t58_TI;
extern TypeInfo t734_TI;
extern TypeInfo t13_TI;
#include "t58MD.h"
#include "t286MD.h"
extern Il2CppType t734_0_0_0;
extern MethodInfo m3625_MI;
extern MethodInfo m3624_MI;
extern MethodInfo m3626_MI;
extern MethodInfo m336_MI;
extern MethodInfo m4279_MI;
extern MethodInfo m3604_MI;
extern MethodInfo m1060_MI;
extern MethodInfo m1061_MI;
extern MethodInfo m3628_MI;
extern MethodInfo m3629_MI;
extern MethodInfo m3627_MI;
extern MethodInfo m3630_MI;
extern MethodInfo m3631_MI;
extern MethodInfo m3605_MI;


extern "C" void m3604 (t733 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = {0};
		m4279(&L_0, 0, &m4279_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3605 (t733 * __this, t58 p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3606_MI;
extern TypeInfo* t734_TI_var;
extern "C" void m3606 (t9 * __this , MethodInfo* method)
{
	static bool m3606_init;
	if (!m3606_init)
	{
		t734_TI_var = il2cpp_codegen_class_from_type(&t734_0_0_0);
		m3606_init = true;
	}
	{
		t734* L_0 = ((t734*)SZArrayNew(t734_TI_var, 1));
		t733 * L_1 = (t733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t733_TI));
		m3604(L_1, &m3604_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t733 **)(t733 **)SZArrayLdElema(L_0, 0)) = (t733 *)L_1;
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1 = L_0;
		t734* L_2 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1;
		int32_t L_3 = 0;
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f2 = (*(t733 **)(t733 **)SZArrayLdElema(L_2, L_3));
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3 = (t732 *)NULL;
		return;
	}
}
extern MethodInfo m3607_MI;
extern "C" void m3607 (t9 * __this , t732 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t732 * L_0 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3;
		t732 * L_1 = p0;
		t286 * L_2 = m1060(NULL, L_0, L_1, &m1060_MI);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3 = ((t732 *)Castclass(L_2, InitializedTypeInfo(&t732_TI)));
		return;
	}
}
extern MethodInfo m3608_MI;
extern "C" void m3608 (t9 * __this , t732 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t732 * L_0 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3;
		t732 * L_1 = p0;
		t286 * L_2 = m1061(NULL, L_0, L_1, &m1061_MI);
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3 = ((t732 *)Castclass(L_2, InitializedTypeInfo(&t732_TI)));
		return;
	}
}
extern MethodInfo m3609_MI;
extern "C" int32_t m3609 (t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3625(NULL, L_0, (&V_0), (&V_1), &m3625_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3610_MI;
extern "C" int32_t m3610 (t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3625(NULL, L_0, (&V_0), (&V_1), &m3625_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3611_MI;
extern "C" int32_t m3611 (t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3624(NULL, L_0, (&V_0), (&V_1), &m3624_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3612_MI;
extern "C" int32_t m3612 (t733 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3624(NULL, L_0, (&V_0), (&V_1), &m3624_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3613_MI;
extern "C" t736  m3613 (t733 * __this, MethodInfo* method)
{
	t736  V_0 = {0};
	t736  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3626(NULL, L_0, (&V_0), (&V_1), &m3626_MI);
		t736  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3614_MI;
extern "C" t736  m3614 (t733 * __this, MethodInfo* method)
{
	t736  V_0 = {0};
	t736  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3626(NULL, L_0, (&V_0), (&V_1), &m3626_MI);
		t736  L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3615_MI;
extern "C" void m3615 (t733 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3628(NULL, L_0, 0, 0, ((int32_t)60), &m3628_MI);
		return;
	}
}
extern MethodInfo m3616_MI;
extern "C" void m3616 (t733 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3628(NULL, L_0, L_1, L_2, L_3, &m3628_MI);
		return;
	}
}
extern MethodInfo m3617_MI;
extern "C" void m3617 (t733 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3629(NULL, L_0, L_1, L_2, L_3, L_4, &m3629_MI);
		return;
	}
}
extern MethodInfo m3618_MI;
extern "C" void m3618 (t733 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		m3627(NULL, L_0, L_1, L_2, &m3627_MI);
		return;
	}
}
extern MethodInfo m3619_MI;
extern "C" bool m3619 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		bool L_0 = m3630(NULL, &m3630_MI);
		return L_0;
	}
}
extern MethodInfo m3620_MI;
extern "C" t13  m3620 (t9 * __this , t13  p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		int32_t L_4 = m3631(NULL, L_2, L_3, (&V_1), (&V_2), &m3631_MI);
		(&V_0)->f3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->f1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->f2 = (((float)L_6));
		t13  L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3621_MI;
extern "C" t733 * m3621 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t733 * L_0 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3622_MI;
extern TypeInfo* t734_TI_var;
extern "C" void m3622 (t9 * __this , t735* p0, MethodInfo* method)
{
	static bool m3622_init;
	if (!m3622_init)
	{
		t734_TI_var = il2cpp_codegen_class_from_type(&t734_0_0_0);
		m3622_init = true;
	}
	int32_t V_0 = 0;
	{
		t735* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1 = ((t734*)SZArrayNew(t734_TI_var, (((int32_t)(((t121 *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t734* L_1 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1;
		int32_t L_2 = V_0;
		t735* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t733 * L_6 = (t733 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t733_TI));
		m3605(L_6, (*(t58*)(t58*)SZArrayLdElema(L_3, L_5)), &m3605_MI);
		ArrayElementTypeCheck (L_1, L_6);
		*((t733 **)(t733 **)SZArrayLdElema(L_1, L_2)) = (t733 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		t735* L_9 = p0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t734* L_10 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f1;
		int32_t L_11 = 0;
		((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f2 = (*(t733 **)(t733 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
extern MethodInfo m3623_MI;
extern "C" void m3623 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t732 * L_0 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t733_TI));
		t732 * L_1 = ((t733_SFs*)InitializedTypeInfo(&t733_TI)->static_fields)->f3;
		VirtActionInvoker0::Invoke(&m3601_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern "C" void m3624 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3624_ftn) (t58, int32_t*, int32_t*);
	static m3624_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3624_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3625 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3625_ftn) (t58, int32_t*, int32_t*);
	static m3625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3626 (t9 * __this , t58 p0, t736 * p1, t736 * p2, MethodInfo* method)
{
	typedef void (*m3626_ftn) (t58, t736 *, t736 *);
	static m3626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3627 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3627_ftn) (t58, int32_t, int32_t);
	static m3627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3628 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m3628_ftn) (t58, int32_t, int32_t, int32_t);
	static m3628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" void m3629 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef void (*m3629_ftn) (t58, int32_t, int32_t, int32_t, int32_t);
	static m3629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern "C" bool m3630 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m3630_ftn) ();
	static m3630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m3631 (t9 * __this , int32_t p0, int32_t p1, int32_t* p2, int32_t* p3, MethodInfo* method)
{
	typedef int32_t (*m3631_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static m3631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
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
extern MethodInfo m3572_MI;
extern MethodInfo m3632_MI;
extern MethodInfo m3633_MI;
extern MethodInfo m3635_MI;
extern MethodInfo m3636_MI;


extern MethodInfo m328_MI;
extern "C" void m328 (t4 * __this, MethodInfo* method)
{
	{
		m3572(__this, &m3572_MI);
		return;
	}
}
extern "C" void m3632 (t4 * __this, MethodInfo* method)
{
	typedef void (*m3632_ftn) (t4 *);
	static m3632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()");
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
extern MethodInfo m1149_MI;
extern "C" void m1149 (t4 * __this, MethodInfo* method)
{
	{
		m3632(__this, &m3632_MI);
		return;
	}
}
extern MethodInfo m605_MI;
extern "C" t171 * m605 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t171 * L_1 = m3633(__this, L_0, &m3633_MI);
		return L_1;
	}
}
extern "C" t171 * m3633 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef t171 * (*m3633_ftn) (t4 *, t9 *);
	static m3633_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3633_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
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
extern MethodInfo m3634_MI;
extern "C" void m3634 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m3635(__this, L_0, &m3635_MI);
		return;
	}
}
extern MethodInfo m1191_MI;
extern "C" void m1191 (t4 * __this, t171 * p0, MethodInfo* method)
{
	{
		t171 * L_0 = p0;
		m3636(__this, L_0, &m3636_MI);
		return;
	}
}
extern "C" void m3635 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3635_ftn) (t4 *, t9 *);
	static m3635_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3635_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3636 (t4 * __this, t171 * p0, MethodInfo* method)
{
	typedef void (*m3636_ftn) (t4 *, t171 *);
	static m3636_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3636_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, p0);
}
#include "t317.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t317_TI;
#include "t317MD.h"



#include "t590.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t590_TI;
#include "t590MD.h"



#include "t141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t141_TI;
#include "t141MD.h"

#include "t28.h"


extern MethodInfo m2482_MI;
extern "C" int32_t m2482 (t141 * __this, MethodInfo* method)
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
extern MethodInfo m1183_MI;
extern "C" int32_t m1183 (t141 * __this, MethodInfo* method)
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

#include "t287.h"
extern TypeInfo t142_TI;
extern Il2CppType t142_0_0_0;
extern MethodInfo m389_MI;
extern MethodInfo m1182_MI;
extern MethodInfo m3640_MI;
extern MethodInfo m3638_MI;
extern MethodInfo m3639_MI;


extern MethodInfo m3637_MI;
extern "C" void m3637 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m3638 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3638_ftn) (int32_t);
	static m3638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3639 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3639_ftn) (int32_t);
	static m3639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
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
extern MethodInfo m1065_MI;
extern "C" bool m1065 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3638(NULL, L_0, &m3638_MI);
		return L_1;
	}
}
extern MethodInfo m1064_MI;
extern "C" bool m1064 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3639(NULL, L_0, &m3639_MI);
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
extern MethodInfo m2483_MI;
extern "C" bool m2483 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m2483_ftn) (int32_t);
	static m2483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
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
extern MethodInfo m2484_MI;
extern "C" t28  m2484 (t9 * __this , MethodInfo* method)
{
	typedef t28  (*m2484_ftn) ();
	static m2484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2502_MI;
extern "C" bool m2502 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2502_ftn) ();
	static m2502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
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
		t141  L_5 = m1182(NULL, L_4, &m1182_MI);
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
extern "C" t141  m1182 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t141  (*m1182_ftn) (int32_t);
	static m1182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
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
extern MethodInfo m2520_MI;
extern "C" bool m2520 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2775_MI;
extern "C" void m2775 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m2775_ftn) (int32_t);
	static m2775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2700_MI;
extern "C" t2* m2700 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m2700_ftn) ();
	static m2700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
extern "C" void m3640 (t9 * __this , t28 * p0, MethodInfo* method)
{
	typedef void (*m3640_ftn) (t28 *);
	static m3640_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3640_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2763_MI;
extern "C" void m2763 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		m3640(NULL, (&p0), &m3640_MI);
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
#include "t556.h"
extern TypeInfo t556_TI;
#include "t556MD.h"
extern MethodInfo m3644_MI;
extern MethodInfo m631_MI;
extern MethodInfo m3645_MI;
extern MethodInfo m3646_MI;
extern MethodInfo m3647_MI;
extern MethodInfo m510_MI;
extern MethodInfo m3648_MI;
extern MethodInfo m3649_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m3650_MI;
extern MethodInfo m3643_MI;
extern MethodInfo m2885_MI;
extern MethodInfo m330_MI;


extern MethodInfo m3641_MI;
extern "C" void m3641 (t57 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3642_MI;
extern "C" t57 * m3642 (t9 * __this , t57 * p0, MethodInfo* method)
{
	typedef t57 * (*m3642_ftn) (t57 *);
	static m3642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(p0);
}
extern "C" t57 * m3643 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = m3644(NULL, L_0, (&p1), (&p2), &m3644_MI);
		return L_1;
	}
}
extern "C" t57 * m3644 (t9 * __this , t57 * p0, t13 * p1, t93 * p2, MethodInfo* method)
{
	typedef t57 * (*m3644_ftn) (t57 *, t13 *, t93 *);
	static m3644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
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
extern "C" void m3645 (t9 * __this , t57 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3645_ftn) (t57 *, bool);
	static m3645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
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
		m3645(NULL, L_0, L_1, &m3645_MI);
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
extern "C" void m3646 (t9 * __this , t57 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3646_ftn) (t57 *, float);
	static m3646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
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
		m3646(NULL, L_0, L_1, &m3646_MI);
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
		bool L_1 = m3647(NULL, __this, ((t57 *)IsInst(L_0, InitializedTypeInfo(&t57_TI))), &m3647_MI);
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
extern "C" bool m3647 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
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
		bool L_6 = m3648(NULL, L_5, &m3648_MI);
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
		bool L_9 = m3648(NULL, L_8, &m3648_MI);
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
extern "C" bool m3648 (t9 * __this , t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t58 L_1 = m3649(L_0, &m3649_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4280(NULL, L_1, L_2, &m4280_MI);
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
extern "C" t58 m3649 (t57 * __this, MethodInfo* method)
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
		m3650(NULL, L_0, (t2*) &_stringLiteral262, &m3650_MI);
		t57 * L_1 = p0;
		t13  L_2 = p1;
		t93  L_3 = p2;
		t57 * L_4 = m3643(NULL, L_1, L_2, L_3, &m3643_MI);
		return L_4;
	}
}
extern "C" void m3650 (t9 * __this , t9 * p0, t2* p1, MethodInfo* method)
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
		t556 * L_2 = (t556 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t556_TI));
		m2885(L_2, L_1, &m2885_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
extern MethodInfo m3651_MI;
extern "C" t57 * m3651 (t9 * __this , t126 * p0, MethodInfo* method)
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
		bool L_1 = m3647(NULL, L_0, (t57 *)NULL, &m3647_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m333_MI;
extern "C" bool m333 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3647(NULL, L_0, L_1, &m3647_MI);
		return L_2;
	}
}
extern MethodInfo m332_MI;
extern "C" bool m332 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3647(NULL, L_0, L_1, &m3647_MI);
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
#include "t535.h"
#include "t177.h"
#include "t59MD.h"
extern MethodInfo m362_MI;
extern MethodInfo m424_MI;
extern MethodInfo m3653_MI;
extern MethodInfo m3654_MI;
extern MethodInfo m3655_MI;


extern MethodInfo m3652_MI;
extern "C" void m3652 (t133 * __this, MethodInfo* method)
{
	{
		m3641(__this, &m3641_MI);
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
extern "C" void m3653 (t133 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	typedef void (*m3653_ftn) (t133 *, t126 *, t9 *);
	static m3653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2575_MI;
extern "C" void m2575 (t133 * __this, t126 * p0, t535 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t535 * L_1 = p1;
		m3653(__this, L_0, L_1, &m3653_MI);
		return;
	}
}
extern "C" void m3654 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3654_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
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
		m3654(__this, L_0, L_1, L_2, &m3654_MI);
		return;
	}
}
extern "C" void m3655 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3655_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m613_MI;
extern "C" void m613 (t133 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3655(__this, L_0, NULL, L_1, &m3655_MI);
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

extern MethodInfo m3660_MI;
extern MethodInfo m428_MI;
extern MethodInfo m3658_MI;
extern MethodInfo m3659_MI;


extern MethodInfo m359_MI;
extern "C" void m359 (t59 * __this, t2* p0, MethodInfo* method)
{
	{
		m3641(__this, &m3641_MI);
		t2* L_0 = p0;
		m3660(NULL, __this, L_0, &m3660_MI);
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
		m3641(__this, &m3641_MI);
		t2* L_0 = p0;
		m3660(NULL, __this, L_0, &m3660_MI);
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
extern MethodInfo m3656_MI;
extern "C" t121 * m3656 (t59 * __this, t126 * p0, bool p1, bool p2, bool p3, bool p4, t9 * p5, MethodInfo* method)
{
	typedef t121 * (*m3656_ftn) (t59 *, t126 *, bool, bool, bool, bool, t9 *);
	static m3656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
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
extern MethodInfo m2748_MI;
extern "C" int32_t m2748 (t59 * __this, MethodInfo* method)
{
	typedef int32_t (*m2748_ftn) (t59 *);
	static m2748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2749_MI;
extern "C" void m2749 (t59 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m2749_ftn) (t59 *, int32_t);
	static m2749_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2749_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
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
extern MethodInfo m1132_MI;
extern "C" bool m1132 (t59 * __this, MethodInfo* method)
{
	typedef bool (*m1132_ftn) (t59 *);
	static m1132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1054_MI;
extern "C" t2* m1054 (t59 * __this, MethodInfo* method)
{
	typedef t2* (*m1054_ftn) (t59 *);
	static m1054_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1054_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1070_MI;
extern "C" t59 * m1070 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t59 * (*m1070_ftn) (t2*);
	static m1070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1070_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1194_MI;
extern "C" t100* m1194 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t100* (*m1194_ftn) (t2*);
	static m1194_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1194_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3657_MI;
extern "C" void m3657 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3657_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m3658 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3658_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
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
		m3658(__this, L_0, L_1, L_2, &m3658_MI);
		return;
	}
}
extern "C" t133 * m3659 (t59 * __this, t126 * p0, MethodInfo* method)
{
	typedef t133 * (*m3659_ftn) (t59 *, t126 *);
	static m3659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t133 * m428 (t59 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t133 * L_1 = m3659(__this, L_0, &m3659_MI);
		return L_1;
	}
}
extern "C" void m3660 (t9 * __this , t59 * p0, t2* p1, MethodInfo* method)
{
	typedef void (*m3660_ftn) (t59 *, t2*);
	static m3660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
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
#include "t737.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t737_TI;
#include "t737MD.h"

#include "t45MD.h"
extern MethodInfo m2923_MI;
extern MethodInfo m2926_MI;


extern MethodInfo m3661_MI;
extern "C" void m3661 (t737 * __this, t45 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t45 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3662_MI;
extern "C" t9 * m3662 (t737 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t45 * L_2 = m2923(L_0, L_1, &m2923_MI);
		return L_2;
	}
}
extern MethodInfo m3663_MI;
extern "C" bool m3663 (t737 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = m2926(L_0, &m2926_MI);
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

#include "t427.h"
#include "t67.h"
extern TypeInfo t427_TI;
#include "t93MD.h"
#include "t13MD.h"
extern MethodInfo m3664_MI;
extern MethodInfo m3665_MI;
extern MethodInfo m3666_MI;
extern MethodInfo m3667_MI;
extern MethodInfo m490_MI;
extern MethodInfo m3400_MI;
extern MethodInfo m3401_MI;
extern MethodInfo m491_MI;
extern MethodInfo m579_MI;
extern MethodInfo m627_MI;
extern MethodInfo m626_MI;
extern MethodInfo m3668_MI;
extern MethodInfo m3669_MI;
extern MethodInfo m3670_MI;
extern MethodInfo m3671_MI;
extern MethodInfo m3672_MI;
extern MethodInfo m3673_MI;
extern MethodInfo m3674_MI;
extern MethodInfo m3675_MI;
extern MethodInfo m3677_MI;
extern MethodInfo m3676_MI;
extern MethodInfo m351_MI;
extern MethodInfo m476_MI;
extern MethodInfo m358_MI;
extern MethodInfo m3681_MI;
extern MethodInfo m623_MI;
extern MethodInfo m618_MI;
extern MethodInfo m624_MI;
extern MethodInfo m619_MI;
extern MethodInfo m2840_MI;
extern MethodInfo m3678_MI;
extern MethodInfo m3679_MI;
extern MethodInfo m3680_MI;
extern MethodInfo m3682_MI;
extern MethodInfo m3683_MI;
extern MethodInfo m3684_MI;
extern MethodInfo m3685_MI;


extern "C" void m3664 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3664_ftn) (t45 *, t13 *);
	static m3664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3665 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3665_ftn) (t45 *, t13 *);
	static m3665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t13  m351 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3664(__this, (&V_0), &m3664_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m358 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3665(__this, (&p0), &m3665_MI);
		return;
	}
}
extern "C" void m3666 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3666_ftn) (t45 *, t13 *);
	static m3666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3667 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3667_ftn) (t45 *, t13 *);
	static m3667_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3667_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m547_MI;
extern "C" t13  m547 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3666(__this, (&V_0), &m3666_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2756_MI;
extern "C" void m2756 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3667(__this, (&p0), &m3667_MI);
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
		t13  L_1 = m3400((&V_0), &m3400_MI);
		return L_1;
	}
}
extern MethodInfo m456_MI;
extern "C" void m456 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = m3401(NULL, L_0, &m3401_MI);
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
extern "C" void m3668 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3668_ftn) (t45 *, t93 *);
	static m3668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3669 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3669_ftn) (t45 *, t93 *);
	static m3669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m490 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3668(__this, (&V_0), &m3668_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m491 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3669(__this, (&p0), &m3669_MI);
		return;
	}
}
extern "C" void m3670 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3670_ftn) (t45 *, t93 *);
	static m3670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3671 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3671_ftn) (t45 *, t93 *);
	static m3671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m618 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3670(__this, (&V_0), &m3670_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m619 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3671(__this, (&p0), &m3671_MI);
		return;
	}
}
extern "C" void m3672 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3672_ftn) (t45 *, t13 *);
	static m3672_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3672_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3673 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3673_ftn) (t45 *, t13 *);
	static m3673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1050_MI;
extern "C" t13  m1050 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3672(__this, (&V_0), &m3672_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m1055_MI;
extern "C" void m1055 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3673(__this, (&p0), &m3673_MI);
		return;
	}
}
extern MethodInfo m530_MI;
extern "C" t45 * m530 (t45 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m3674(__this, &m3674_MI);
		return L_0;
	}
}
extern MethodInfo m598_MI;
extern "C" void m598 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		if (!((t427 *)IsInst(__this, InitializedTypeInfo(&t427_TI))))
		{
			goto IL_0016;
		}
	}
	{
		m1167(NULL, (t2*) &_stringLiteral263, __this, &m1167_MI);
	}

IL_0016:
	{
		t45 * L_0 = p0;
		m3675(__this, L_0, &m3675_MI);
		return;
	}
}
extern "C" t45 * m3674 (t45 * __this, MethodInfo* method)
{
	typedef t45 * (*m3674_ftn) (t45 *);
	static m3674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3675 (t45 * __this, t45 * p0, MethodInfo* method)
{
	typedef void (*m3675_ftn) (t45 *, t45 *);
	static m3675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2746_MI;
extern "C" void m2746 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		t45 * L_0 = p0;
		m3676(__this, L_0, 1, &m3676_MI);
		return;
	}
}
extern "C" void m3676 (t45 * __this, t45 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3676_ftn) (t45 *, t45 *, bool);
	static m3676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m3677 (t45 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3677_ftn) (t45 *, t46 *);
	static m3677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2822_MI;
extern "C" t46  m2822 (t45 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3677(__this, (&V_0), &m3677_MI);
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
		t13  L_6 = m3681(__this, L_5, &m3681_MI);
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
		t93  L_10 = m2840(NULL, L_9, &m2840_MI);
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
		m3678(__this, L_1, L_2, &m3678_MI);
		return;
	}
}
extern "C" void m3678 (t45 * __this, t45 * p0, t13  p1, MethodInfo* method)
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
		m3679(__this, L_3, L_4, &m3679_MI);
	}

IL_0018:
	{
		return;
	}
}
extern "C" void m3679 (t45 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3680(NULL, __this, (&p0), (&p1), &m3680_MI);
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
		m3680(NULL, __this, (&p0), (&V_0), &m3680_MI);
		return;
	}
}
extern "C" void m3680 (t9 * __this , t45 * p0, t13 * p1, t13 * p2, MethodInfo* method)
{
	typedef void (*m3680_ftn) (t45 *, t13 *, t13 *);
	static m3680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t13  m3681 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3682(NULL, __this, (&p0), &m3682_MI);
		return L_0;
	}
}
extern "C" t13  m3682 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3682_ftn) (t45 *, t13 *);
	static m3682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2841_MI;
extern "C" t13  m2841 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3683(NULL, __this, (&p0), &m3683_MI);
		return L_0;
	}
}
extern "C" t13  m3683 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3683_ftn) (t45 *, t13 *);
	static m3683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2717_MI;
extern "C" t13  m2717 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3684(NULL, __this, (&p0), &m3684_MI);
		return L_0;
	}
}
extern "C" t13  m3684 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3684_ftn) (t45 *, t13 *);
	static m3684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m2926 (t45 * __this, MethodInfo* method)
{
	typedef int32_t (*m2926_ftn) (t45 *);
	static m2926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
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
extern MethodInfo m2747_MI;
extern "C" void m2747 (t45 * __this, MethodInfo* method)
{
	typedef void (*m2747_ftn) (t45 *);
	static m2747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
extern "C" t45 * m3685 (t45 * __this, t2* p0, MethodInfo* method)
{
	typedef t45 * (*m3685_ftn) (t45 *, t2*);
	static m3685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1187_MI;
extern "C" t45 * m1187 (t45 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t45 * L_1 = m3685(__this, L_0, &m3685_MI);
		return L_1;
	}
}
extern MethodInfo m360_MI;
extern "C" t9 * m360 (t45 * __this, MethodInfo* method)
{
	{
		t737 * L_0 = (t737 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t737_TI));
		m3661(L_0, __this, &m3661_MI);
		return L_0;
	}
}
extern "C" t45 * m2923 (t45 * __this, int32_t p0, MethodInfo* method)
{
	typedef t45 * (*m2923_ftn) (t45 *, int32_t);
	static m2923_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2923_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
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
extern MethodInfo m2504_MI;
extern "C" float m2504 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2504_ftn) ();
	static m2504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2544_MI;
extern "C" float m2544 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2544_ftn) ();
	static m2544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1071_MI;
extern "C" float m1071 (t9 * __this , MethodInfo* method)
{
	typedef float (*m1071_ftn) ();
	static m1071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1072_MI;
extern "C" void m1072 (t9 * __this , float p0, MethodInfo* method)
{
	typedef void (*m1072_ftn) (float);
	static m1072_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1072_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
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

extern MethodInfo m3686_MI;


extern MethodInfo m609_MI;
extern "C" float m609 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	typedef float (*m609_ftn) (float, float);
	static m609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1151_MI;
extern "C" int32_t m1151 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = m3686(NULL, L_0, L_1, &m3686_MI);
		return L_2;
	}
}
extern "C" int32_t m3686 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	typedef int32_t (*m3686_ftn) (int32_t, int32_t);
	static m3686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1052_MI;
extern "C" t13  m1052 (t9 * __this , MethodInfo* method)
{
	typedef t13  (*m1052_ftn) ();
	static m1052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_insideUnitSphere()");
	return _il2cpp_icall_func();
}
#include "t679.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t679_TI;
#include "t679MD.h"



extern MethodInfo m3687_MI;
extern "C" void m3687 (t679 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void t679_marshal(const t679& unmarshaled, t679_marshaled& marshaled)
{
}
void t679_marshal_back(const t679_marshaled& marshaled, t679& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void t679_marshal_cleanup(t679_marshaled& marshaled)
{
}
#include "t738.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t738_TI;
#include "t738MD.h"

extern MethodInfo m3688_MI;


extern "C" t2* m3688 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	typedef t2* (*m3688_ftn) (t2*, t2*);
	static m3688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3689_MI;
extern "C" t2* m3689 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = V_0;
		t2* L_3 = m3688(NULL, L_1, L_2, &m3688_MI);
		return L_3;
	}
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
#include "t739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t739_TI;
#include "t739MD.h"



extern MethodInfo m3690_MI;
extern "C" t13  m3690 (t739 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3691_MI;
extern "C" void m3691 (t739 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3692_MI;
extern "C" t13  m3692 (t739 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3693_MI;
extern "C" void m3693 (t739 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3694_MI;
extern "C" float m3694 (t739 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3695_MI;
extern "C" void m3695 (t739 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3696_MI;
extern "C" float m3696 (t739 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3697_MI;
extern "C" void m3697 (t739 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern MethodInfo m3698_MI;
extern "C" float m3698 (t739 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3699_MI;
extern "C" void m3699 (t739 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3700_MI;
extern "C" float m3700 (t739 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3701_MI;
extern "C" void m3701 (t739 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m3702_MI;
extern "C" float m3702 (t739 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3703_MI;
extern "C" void m3703 (t739 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3704_MI;
extern "C" t43  m3704 (t739 * __this, MethodInfo* method)
{
	{
		t43  L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3705_MI;
extern "C" void m3705 (t739 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
#include "t740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t740_TI;
#include "t740MD.h"



#include "t165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t165_TI;
#include "t165MD.h"

#include "t164.h"
#include "t74MD.h"
extern MethodInfo m3707_MI;
extern MethodInfo m565_MI;
extern MethodInfo m3706_MI;
extern MethodInfo m2626_MI;
extern MethodInfo m563_MI;
extern MethodInfo m564_MI;
extern MethodInfo m3708_MI;
extern MethodInfo m3709_MI;


extern "C" bool m3706 (t9 * __this , t13  p0, t13  p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	{
		t164 * L_0 = p2;
		float L_1 = p3;
		int32_t L_2 = p4;
		bool L_3 = m3707(NULL, (&p0), (&p1), L_0, L_1, L_2, &m3707_MI);
		return L_3;
	}
}
extern "C" bool m3707 (t9 * __this , t13 * p0, t13 * p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m3707_ftn) (t13 *, t13 *, t164 *, float, int32_t);
	static m3707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
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
		bool L_5 = m3706(NULL, L_0, L_1, L_2, L_3, L_4, &m3706_MI);
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
		bool L_4 = m2626(NULL, L_0, L_1, L_2, L_3, &m2626_MI);
		return L_4;
	}
}
extern "C" bool m2626 (t9 * __this , t74  p0, t164 * p1, float p2, int32_t p3, MethodInfo* method)
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
extern MethodInfo m2534_MI;
extern "C" t566* m2534 (t9 * __this , t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		t13  L_0 = m563((&p0), &m563_MI);
		t13  L_1 = m564((&p0), &m564_MI);
		float L_2 = p1;
		int32_t L_3 = p2;
		t566* L_4 = m3708(NULL, L_0, L_1, L_2, L_3, &m3708_MI);
		return L_4;
	}
}
extern "C" t566* m3708 (t9 * __this , t13  p0, t13  p1, float p2, int32_t p3, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		t566* L_2 = m3709(NULL, (&p0), (&p1), L_0, L_1, &m3709_MI);
		return L_2;
	}
}
extern "C" t566* m3709 (t9 * __this , t13 * p0, t13 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t566* (*m3709_ftn) (t13 *, t13 *, float, int32_t);
	static m3709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t92_TI;
#include "t92MD.h"

extern MethodInfo m3710_MI;
extern MethodInfo m3711_MI;
extern MethodInfo m3712_MI;


extern "C" void m3710 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3710_ftn) (t92 *, t13 *);
	static m3710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m599_MI;
extern "C" void m599 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3710(__this, (&p0), &m3710_MI);
		return;
	}
}
extern "C" void m3711 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3711_ftn) (t92 *, t13 *);
	static m3711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m600_MI;
extern "C" void m600 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3711(__this, (&p0), &m3711_MI);
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
extern MethodInfo m1051_MI;
extern "C" void m1051 (t92 * __this, t13  p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		m3712(NULL, __this, (&p0), L_0, &m3712_MI);
		return;
	}
}
extern "C" void m3712 (t9 * __this , t92 * p0, t13 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3712_ftn) (t92 *, t13 *, int32_t);
	static m3712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(p0, p1, p2);
}
#include "t170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t170_TI;
#include "t170MD.h"

extern MethodInfo m3713_MI;


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
extern "C" void m3713 (t170 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3713_ftn) (t170 *, t13 *);
	static m3713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m569_MI;
extern "C" void m569 (t170 * __this, t13  p0, MethodInfo* method)
{
	{
		m3713(__this, (&p0), &m3713_MI);
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



extern MethodInfo m3714_MI;
extern "C" t92 * m3714 (t60 * __this, MethodInfo* method)
{
	typedef t92 * (*m3714_ftn) (t60 *);
	static m3714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t164_TI;
#include "t164MD.h"

extern MethodInfo m2536_MI;


extern MethodInfo m543_MI;
extern "C" t13  m543 (t164 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2537_MI;
extern "C" t13  m2537 (t164 * __this, MethodInfo* method)
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
extern "C" t60 * m2536 (t164 * __this, MethodInfo* method)
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
		t60 * L_0 = m2536(__this, &m2536_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t60 * L_2 = m2536(__this, &m2536_MI);
		t92 * L_3 = m3714(L_2, &m3714_MI);
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
#include "t741.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t741_TI;
#include "t741MD.h"



#include "t215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t215_TI;
#include "t215MD.h"



extern MethodInfo m1053_MI;
extern "C" t59 * m1053 (t215 * __this, MethodInfo* method)
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
#include "t564.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t564_TI;
#include "t564MD.h"

#include "t743.h"
#include "t561.h"
extern TypeInfo t743_TI;
#include "t743MD.h"
extern Il2CppType t743_0_0_0;
extern MethodInfo m4281_MI;
extern MethodInfo m3717_MI;
extern MethodInfo m3718_MI;
extern MethodInfo m3716_MI;
extern MethodInfo m3719_MI;
extern Il2CppGenericMethod m4281_GM;


extern MethodInfo m3715_MI;
extern TypeInfo* t743_TI_var;
extern MethodInfo* m4281_MI_var;
extern "C" void m3715 (t9 * __this , MethodInfo* method)
{
	static bool m3715_init;
	if (!m3715_init)
	{
		t743_TI_var = il2cpp_codegen_class_from_type(&t743_0_0_0);
		m4281_MI_var = il2cpp_codegen_genericmethod_get_method(&m4281_GM);
		m3715_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t743_TI_var);
		t743 * L_0 = (t743 *)il2cpp_codegen_object_new (t743_TI_var);
		m4281(L_0, m4281_MI_var);
		((t564_SFs*)InitializedTypeInfo(&t564_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" void m3716 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, t561 * p6, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = p4;
		float L_3 = p5;
		t561 * L_4 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t564_TI));
		m3717(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, L_4, &m3717_MI);
		return;
	}
}
extern "C" void m3717 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, t561 * p6, MethodInfo* method)
{
	typedef void (*m3717_ftn) (t28 *, t28 *, float, int32_t, float, float, t561 *);
	static m3717_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3717_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6);
}
extern MethodInfo m2627_MI;
extern "C" t561  m2627 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t564_TI));
		t561  L_6 = m3718(NULL, L_0, L_1, L_2, L_3, L_4, L_5, &m3718_MI);
		return L_6;
	}
}
extern "C" t561  m3718 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	t561  V_0 = {0};
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t564_TI));
		m3716(NULL, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), &m3716_MI);
		t561  L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m2523_MI;
extern "C" t565* m2523 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t564_TI));
		t565* L_4 = m3719(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, &m3719_MI);
		return L_4;
	}
}
extern "C" t565* m3719 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	typedef t565* (*m3719_ftn) (t28 *, t28 *, float, int32_t, float, float);
	static m3719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t561_TI;
#include "t561MD.h"

#include "t563.h"
#include "t744.h"
#include "t563MD.h"
extern MethodInfo m2524_MI;
extern MethodInfo m3721_MI;
extern MethodInfo m3720_MI;


extern MethodInfo m2527_MI;
extern "C" t28  m2527 (t561 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2528_MI;
extern "C" t28  m2528 (t561 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2628_MI;
extern "C" float m2628 (t561 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t563 * m2524 (t561 * __this, MethodInfo* method)
{
	{
		t563 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t744 * m3720 (t561 * __this, MethodInfo* method)
{
	t744 * G_B3_0 = {0};
	{
		t563 * L_0 = m2524(__this, &m2524_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t563 * L_2 = m2524(__this, &m2524_MI);
		t744 * L_3 = m3721(L_2, &m3721_MI);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t744 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2525_MI;
extern "C" t45 * m2525 (t561 * __this, MethodInfo* method)
{
	t744 * V_0 = {0};
	{
		t744 * L_0 = m3720(__this, &m3720_MI);
		V_0 = L_0;
		t744 * L_1 = V_0;
		bool L_2 = m332(NULL, L_1, (t57 *)NULL, &m332_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		t744 * L_3 = V_0;
		t45 * L_4 = m350(L_3, &m350_MI);
		return L_4;
	}

IL_001a:
	{
		t563 * L_5 = m2524(__this, &m2524_MI);
		bool L_6 = m332(NULL, L_5, (t57 *)NULL, &m332_MI);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		t563 * L_7 = m2524(__this, &m2524_MI);
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
extern TypeInfo t744_TI;
#include "t744MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t563_TI;



extern "C" t744 * m3721 (t563 * __this, MethodInfo* method)
{
	typedef t744 * (*m3721_ftn) (t563 *);
	static m3721_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3721_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#include "t745.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t745_TI;
#include "t745MD.h"



extern MethodInfo m3722_MI;
extern "C" void m3722 (t745 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3723_MI;
extern "C" void m3723 (t745 * __this, bool p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3723((t745 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t745(Il2CppObject* delegate, bool p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3724_MI;
extern "C" t9 * m3724 (t745 * __this, bool p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t124_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3725_MI;
extern "C" void m3725 (t745 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t746_TI;
#include "t746MD.h"

extern TypeInfo t124_TI;


extern MethodInfo m3726_MI;
extern "C" void m3726 (t746 * __this, bool p0, MethodInfo* method)
{
	{
		t745 * L_0 = ((t746_SFs*)InitializedTypeInfo(&t746_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t745 * L_1 = ((t746_SFs*)InitializedTypeInfo(&t746_TI)->static_fields)->f0;
		bool L_2 = p0;
		VirtActionInvoker1< bool >::Invoke(&m3723_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#include "t747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t747_TI;
#include "t747MD.h"



extern MethodInfo m3727_MI;
extern "C" void m3727 (t747 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3728_MI;
extern "C" void m3728 (t747 * __this, t118* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3728((t747 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t747(Il2CppObject* delegate, t118* p0)
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
extern MethodInfo m3729_MI;
extern "C" t9 * m3729 (t747 * __this, t118* p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3730_MI;
extern "C" void m3730 (t747 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t748.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t748_TI;
#include "t748MD.h"



extern MethodInfo m3731_MI;
extern "C" void m3731 (t748 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3732_MI;
extern "C" void m3732 (t748 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3732((t748 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t748(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3733_MI;
extern "C" t9 * m3733 (t748 * __this, int32_t p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3734_MI;
extern "C" void m3734 (t748 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t205.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t205_TI;
#include "t205MD.h"

extern TypeInfo t118_TI;
extern TypeInfo t125_TI;


extern MethodInfo m1174_MI;
extern "C" float m1174 (t205 * __this, MethodInfo* method)
{
	typedef float (*m1174_ftn) (t205 *);
	static m1174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3735_MI;
extern "C" void m3735 (t205 * __this, t118* p0, MethodInfo* method)
{
	{
		t747 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t747 * L_1 = (__this->f2);
		t118* L_2 = p0;
		VirtActionInvoker1< t118* >::Invoke(&m3728_MI, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
extern MethodInfo m3736_MI;
extern "C" void m3736 (t205 * __this, int32_t p0, MethodInfo* method)
{
	{
		t748 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t748 * L_1 = (__this->f3);
		int32_t L_2 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3732_MI, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
#include "t208.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t208_TI;
#include "t208MD.h"

#include "t882.h"
extern MethodInfo m3737_MI;


extern MethodInfo m1037_MI;
extern "C" void m1037 (t208 * __this, float p0, MethodInfo* method)
{
	typedef void (*m1037_ftn) (t208 *, float);
	static m1037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1035_MI;
extern "C" void m1035 (t208 * __this, t205 * p0, MethodInfo* method)
{
	typedef void (*m1035_ftn) (t208 *, t205 *);
	static m1035_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1035_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3737 (t208 * __this, uint64_t p0, MethodInfo* method)
{
	typedef void (*m3737_ftn) (t208 *, uint64_t);
	static m3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1041_MI;
extern "C" void m1041 (t208 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		m3737(__this, L_0, &m3737_MI);
		return;
	}
}
extern MethodInfo m1042_MI;
extern "C" void m1042 (t208 * __this, MethodInfo* method)
{
	typedef void (*m1042_ftn) (t208 *);
	static m1042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m1036_MI;
extern "C" void m1036 (t208 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1036_ftn) (t208 *, bool);
	static m1036_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1036_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1038_MI;
extern "C" void m1038 (t208 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1038_ftn) (t208 *, bool);
	static m1038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
#include "t749.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t749_TI;
#include "t749MD.h"



#include "t750.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t750_TI;
#include "t750MD.h"

#include "t751.h"
#include "t752.h"
#include "t753.h"
#include "t123MD.h"
extern MethodInfo m3755_MI;
extern MethodInfo m3756_MI;
extern MethodInfo m3749_MI;
extern MethodInfo m4207_MI;
extern MethodInfo m3751_MI;
extern MethodInfo m4205_MI;


extern MethodInfo m3738_MI;
extern "C" void m3738 (t750 * __this, MethodInfo* method)
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
		__this->f8 = (t751 *)NULL;
		return;
	}
}
extern MethodInfo m3739_MI;
extern "C" t2* m3739 (t750 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3740_MI;
extern "C" void m3740 (t750 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3741_MI;
extern "C" t2* m3741 (t750 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3742_MI;
extern "C" void m3742 (t750 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3743_MI;
extern "C" float m3743 (t750 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3744_MI;
extern "C" void m3744 (t750 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3745_MI;
extern "C" int32_t m3745 (t750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3746_MI;
extern "C" void m3746 (t750 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3747_MI;
extern "C" t57 * m3747 (t750 * __this, MethodInfo* method)
{
	{
		t57 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3748_MI;
extern "C" void m3748 (t750 * __this, t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t2* m3749 (t750 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3750_MI;
extern "C" void m3750 (t750 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3751 (t750 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3752_MI;
extern "C" void m3752 (t750 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3753_MI;
extern "C" int32_t m3753 (t750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m3754_MI;
extern "C" void m3754 (t750 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3755 (t750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern "C" bool m3756 (t750 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
extern MethodInfo m3757_MI;
extern "C" t751 * m3757 (t750 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3755(__this, &m3755_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral264, &m400_MI);
	}

IL_0015:
	{
		t751 * L_1 = (__this->f8);
		return L_1;
	}
}
extern MethodInfo m3758_MI;
extern "C" t752  m3758 (t750 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3756(__this, &m3756_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral265, &m400_MI);
	}

IL_0015:
	{
		t752  L_1 = (__this->f9);
		return L_1;
	}
}
extern MethodInfo m3759_MI;
extern "C" t753  m3759 (t750 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3756(__this, &m3756_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral266, &m400_MI);
	}

IL_0015:
	{
		t753  L_1 = (__this->f10);
		return L_1;
	}
}
extern MethodInfo m3760_MI;
extern "C" int32_t m3760 (t750 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		t2* L_0 = m3749(__this, &m3749_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = m3751(__this, &m3751_MI);
		V_1 = L_3;
		int32_t L_4 = m4205((&V_1), &m4205_MI);
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

extern MethodInfo m3764_MI;
extern MethodInfo m3765_MI;
extern MethodInfo m3762_MI;
extern MethodInfo m646_MI;


extern MethodInfo m546_MI;
extern "C" void m546 (t71 * __this, t167* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t167* L_0 = p0;
		m3765(__this, L_0, &m3765_MI);
		return;
	}
}
extern MethodInfo m3761_MI;
extern "C" void m3761 (t71 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3765(__this, (t167*)(t167*)NULL, &m3765_MI);
		return;
	}
}
extern "C" void m3762 (t71 * __this, MethodInfo* method)
{
	typedef void (*m3762_ftn) (t71 *);
	static m3762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3763_MI;
extern "C" void m3763 (t71 * __this, MethodInfo* method)
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
		m3762(__this, &m3762_MI);
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
		t166  L_1 = m3764(__this, L_0, &m3764_MI);
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
extern "C" t166  m3764 (t71 * __this, int32_t p0, MethodInfo* method)
{
	typedef t166  (*m3764_ftn) (t71 *, int32_t);
	static m3764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3765 (t71 * __this, t167* p0, MethodInfo* method)
{
	typedef void (*m3765_ftn) (t71 *, t167*);
	static m3765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
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
#include "t754.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t754_TI;
#include "t754MD.h"



#include "t755.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t755_TI;
#include "t755MD.h"

#include "t163.h"
#include "t163MD.h"
extern MethodInfo m3772_MI;
extern MethodInfo m3773_MI;


extern MethodInfo m3766_MI;
extern "C" void m3766 (t755 * __this, t163 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t163 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3767_MI;
extern "C" t9 * m3767 (t755 * __this, MethodInfo* method)
{
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t751 * L_2 = m3772(L_0, L_1, &m3772_MI);
		return L_2;
	}
}
extern MethodInfo m3768_MI;
extern "C" bool m3768 (t755 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = m3773(L_0, &m3773_MI);
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

extern MethodInfo m3769_MI;
extern MethodInfo m3770_MI;


extern MethodInfo m537_MI;
extern "C" bool m537 (t163 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = m3769(__this, L_0, &m3769_MI);
		return L_1;
	}
}
extern "C" bool m3769 (t163 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m3770(__this, L_0, &m3770_MI);
		return L_1;
	}
}
extern "C" bool m3770 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3770_ftn) (t163 *, int32_t);
	static m3770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3771_MI;
extern "C" t9 * m3771 (t163 * __this, MethodInfo* method)
{
	{
		t755 * L_0 = (t755 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t755_TI));
		m3766(L_0, __this, &m3766_MI);
		return L_0;
	}
}
extern "C" t751 * m3772 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef t751 * (*m3772_ftn) (t163 *, int32_t);
	static m3772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3773 (t163 * __this, MethodInfo* method)
{
	typedef int32_t (*m3773_ftn) (t163 *);
	static m3773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t751_TI;
#include "t751MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t753_TI;
#include "t753MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t752_TI;
#include "t752MD.h"

#include "t495MD.h"
extern MethodInfo m3792_MI;


extern MethodInfo m3774_MI;
extern "C" bool m3774 (t752 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3792(NULL, L_0, &m3792_MI);
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
extern MethodInfo m3775_MI;
extern "C" int32_t m3775 (t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3776_MI;
extern "C" int32_t m3776 (t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3777_MI;
extern "C" int32_t m3777 (t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3778_MI;
extern "C" float m3778 (t752 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3779_MI;
extern "C" float m3779 (t752 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3780_MI;
extern "C" int32_t m3780 (t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3781_MI;
extern "C" bool m3781 (t752 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3792(NULL, L_0, &m3792_MI);
		int32_t L_2 = (__this->f5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3782_MI;
extern "C" bool m3782 (t752 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#include "t757.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t757_TI;
#include "t757MD.h"



extern MethodInfo m3783_MI;
extern "C" bool m3783 (t757 * __this, t2* p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3792(NULL, L_0, &m3792_MI);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m3792(NULL, L_3, &m3792_MI);
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
extern MethodInfo m3784_MI;
extern "C" bool m3784 (t757 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3792(NULL, L_0, &m3792_MI);
		int32_t L_2 = (__this->f1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3785_MI;
extern "C" int32_t m3785 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3786_MI;
extern "C" int32_t m3786 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3787_MI;
extern "C" int32_t m3787 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3788_MI;
extern "C" float m3788 (t757 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3789_MI;
extern "C" bool m3789 (t757 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3790_MI;
extern "C" bool m3790 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m3791_MI;
extern "C" bool m3791 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void t757_marshal(const t757& unmarshaled, t757_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t757_marshal_back(const t757_marshaled& marshaled, t757& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void t757_marshal_cleanup(t757_marshaled& marshaled)
{
}
#include "t495.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t495_TI;

#include "t597.h"
extern MethodInfo m3793_MI;
extern MethodInfo m3794_MI;


extern MethodInfo m2850_MI;
extern "C" void m2850 (t495 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3793(__this, L_0, &m3793_MI);
		return;
	}
}
extern MethodInfo m2849_MI;
extern "C" void m2849 (t495 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3794(__this, L_0, &m3794_MI);
		return;
	}
}
extern MethodInfo m2848_MI;
extern "C" t597 * m2848 (t495 * __this, MethodInfo* method)
{
	typedef t597 * (*m2848_ftn) (t495 *);
	static m2848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3792 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3792_ftn) (t2*);
	static m3792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3793 (t495 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3793_ftn) (t495 *, t2*);
	static m3793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3794 (t495 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3794_ftn) (t495 *, t2*);
	static m3794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t758.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t758_TI;
#include "t758MD.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void t758_marshal(const t758& unmarshaled, t758_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
}
void t758_marshal_back(const t758_marshaled& marshaled, t758& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void t758_marshal_cleanup(t758_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t759.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t759_TI;
#include "t759MD.h"



#include "t760.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t760_TI;
#include "t760MD.h"



extern MethodInfo m3795_MI;
extern "C" t2* m3795 (t760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3796_MI;
extern "C" void m3796 (t760 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3797_MI;
extern "C" t2* m3797 (t760 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3798_MI;
extern "C" void m3798 (t760 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void t760_marshal(const t760& unmarshaled, t760_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t760_marshal_back(const t760_marshaled& marshaled, t760& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void t760_marshal_cleanup(t760_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t597_TI;
#include "t597MD.h"



#include "t419.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t419_TI;
#include "t419MD.h"



#include "t420.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t420_TI;
#include "t420MD.h"



#include "t421.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t421_TI;
#include "t421MD.h"



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
#include "t318.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t318_TI;
#include "t318MD.h"



extern MethodInfo m1188_MI;
extern "C" void m1188 (t318 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m1188_ftn) (t318 *, t2*);
	static m1188_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1188_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t761_TI;
#include "t761MD.h"

extern TypeInfo t28_TI;
#include "t434MD.h"
#include "t28MD.h"
extern MethodInfo m2590_MI;
extern MethodInfo m2591_MI;
extern MethodInfo m2595_MI;
extern MethodInfo m2596_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3807_MI;
extern MethodInfo m3810_MI;
extern MethodInfo m3808_MI;
extern MethodInfo m3809_MI;


extern MethodInfo m3799_MI;
extern "C" int32_t m3799 (t761 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return (((int32_t)L_0));
	}
}
extern MethodInfo m3800_MI;
extern "C" int32_t m3800 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f2);
		float L_1 = m2590(L_0, &m2590_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3801_MI;
extern "C" int32_t m3801 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f2);
		float L_1 = m2591(L_0, &m2591_MI);
		return (((int32_t)((-L_1))));
	}
}
extern MethodInfo m3802_MI;
extern "C" int32_t m3802 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f2);
		float L_1 = m2595(L_0, &m2595_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3803_MI;
extern "C" int32_t m3803 (t761 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t434 * L_1 = &(__this->f2);
		float L_2 = m2596(L_1, &m2596_MI);
		t434 * L_3 = &(__this->f2);
		float L_4 = m2591(L_3, &m2591_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
extern MethodInfo m3804_MI;
extern "C" int32_t m3804 (t761 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t434 * L_1 = &(__this->f2);
		float L_2 = m2596(L_1, &m2596_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
extern MethodInfo m3805_MI;
extern "C" int32_t m3805 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f2);
		float L_1 = m2595(L_0, &m2595_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3806_MI;
extern "C" int32_t m3806 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f2);
		float L_1 = m2595(L_0, &m2595_MI);
		t434 * L_2 = &(__this->f2);
		float L_3 = m2590(L_2, &m2590_MI);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
extern "C" t28  m3807 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f1);
		float L_1 = m2595(L_0, &m2595_MI);
		t434 * L_2 = &(__this->f1);
		float L_3 = m2596(L_2, &m2596_MI);
		t28  L_4 = {0};
		m392(&L_4, L_1, L_3, &m392_MI);
		return L_4;
	}
}
extern "C" t28  m3808 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f1);
		float L_1 = m2595(L_0, &m2595_MI);
		t434 * L_2 = &(__this->f1);
		float L_3 = m2590(L_2, &m2590_MI);
		t434 * L_4 = &(__this->f1);
		float L_5 = m2596(L_4, &m2596_MI);
		t28  L_6 = {0};
		m392(&L_6, ((float)((float)L_1+(float)L_3)), L_5, &m392_MI);
		return L_6;
	}
}
extern "C" t28  m3809 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f1);
		float L_1 = m2595(L_0, &m2595_MI);
		t434 * L_2 = &(__this->f1);
		float L_3 = m2590(L_2, &m2590_MI);
		t434 * L_4 = &(__this->f1);
		float L_5 = m2596(L_4, &m2596_MI);
		t434 * L_6 = &(__this->f1);
		float L_7 = m2591(L_6, &m2591_MI);
		t28  L_8 = {0};
		m392(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), &m392_MI);
		return L_8;
	}
}
extern "C" t28  m3810 (t761 * __this, MethodInfo* method)
{
	{
		t434 * L_0 = &(__this->f1);
		float L_1 = m2595(L_0, &m2595_MI);
		t434 * L_2 = &(__this->f1);
		float L_3 = m2596(L_2, &m2596_MI);
		t434 * L_4 = &(__this->f1);
		float L_5 = m2591(L_4, &m2591_MI);
		t28  L_6 = {0};
		m392(&L_6, L_1, ((float)((float)L_3+(float)L_5)), &m392_MI);
		return L_6;
	}
}
extern MethodInfo m3811_MI;
extern "C" t28  m3811 (t761 * __this, MethodInfo* method)
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
		t28  L_1 = m3807(__this, &m3807_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3807(__this, &m3807_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3812_MI;
extern "C" t28  m3812 (t761 * __this, MethodInfo* method)
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
		t28  L_1 = m3810(__this, &m3810_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3808(__this, &m3808_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3813_MI;
extern "C" t28  m3813 (t761 * __this, MethodInfo* method)
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
		t28  L_1 = m3809(__this, &m3809_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3809(__this, &m3809_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3814_MI;
extern "C" t28  m3814 (t761 * __this, MethodInfo* method)
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
		t28  L_1 = m3808(__this, &m3808_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3810(__this, &m3810_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#include "t418.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void t761_marshal(const t761& unmarshaled, t761_marshaled& marshaled)
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
void t761_marshal_back(const t761_marshaled& marshaled, t761& unmarshaled)
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
void t761_marshal_cleanup(t761_marshaled& marshaled)
{
}
#include "t762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t762_TI;
#include "t762MD.h"



extern MethodInfo m3815_MI;
extern "C" void m3815 (t762 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3816_MI;
extern "C" void m3816 (t762 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3816((t762 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t762(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3817_MI;
extern "C" t9 * m3817 (t762 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3818_MI;
extern "C" void m3818 (t762 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t417.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t417_TI;
#include "t417MD.h"

#include "t40.h"
#include "t570.h"
#include "t296.h"
extern TypeInfo t570_TI;
#include "t570MD.h"
extern Il2CppType t570_0_0_0;
extern MethodInfo m4282_MI;
extern Il2CppGenericMethod m4282_GM;


extern MethodInfo m2568_MI;
extern TypeInfo* t570_TI_var;
extern "C" void m2568 (t9 * __this , t570 * p0, MethodInfo* method)
{
	static bool m2568_init;
	if (!m2568_init)
	{
		t570_TI_var = il2cpp_codegen_class_from_type(&t570_0_0_0);
		m2568_init = true;
	}
	{
		t570 * L_0 = ((t417_SFs*)InitializedTypeInfo(&t417_TI)->static_fields)->f2;
		t570 * L_1 = p0;
		t286 * L_2 = m1060(NULL, L_0, L_1, &m1060_MI);
		((t417_SFs*)InitializedTypeInfo(&t417_TI)->static_fields)->f2 = ((t570 *)Castclass(L_2, t570_TI_var));
		return;
	}
}
extern MethodInfo m3819_MI;
extern TypeInfo* t570_TI_var;
extern "C" void m3819 (t9 * __this , t570 * p0, MethodInfo* method)
{
	static bool m3819_init;
	if (!m3819_init)
	{
		t570_TI_var = il2cpp_codegen_class_from_type(&t570_0_0_0);
		m3819_init = true;
	}
	{
		t570 * L_0 = ((t417_SFs*)InitializedTypeInfo(&t417_TI)->static_fields)->f2;
		t570 * L_1 = p0;
		t286 * L_2 = m1061(NULL, L_0, L_1, &m1061_MI);
		((t417_SFs*)InitializedTypeInfo(&t417_TI)->static_fields)->f2 = ((t570 *)Castclass(L_2, t570_TI_var));
		return;
	}
}
extern MethodInfo m2869_MI;
extern "C" t40 * m2869 (t417 * __this, MethodInfo* method)
{
	typedef t40 * (*m2869_ftn) (t417 *);
	static m2869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2730_MI;
extern "C" bool m2730 (t417 * __this, uint16_t p0, MethodInfo* method)
{
	typedef bool (*m2730_ftn) (t417 *, uint16_t);
	static m2730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3820_MI;
extern MethodInfo* m4282_MI_var;
extern "C" void m3820 (t9 * __this , t417 * p0, MethodInfo* method)
{
	static bool m3820_init;
	if (!m3820_init)
	{
		m4282_MI_var = il2cpp_codegen_genericmethod_get_method(&m4282_GM);
		m3820_init = true;
	}
	t570 * V_0 = {0};
	{
		t570 * L_0 = ((t417_SFs*)InitializedTypeInfo(&t417_TI)->static_fields)->f2;
		V_0 = L_0;
		t570 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t570 * L_2 = V_0;
		t417 * L_3 = p0;
		VirtActionInvoker1< t417 * >::Invoke(m4282_MI_var, L_2, L_3);
	}

IL_0013:
	{
		t417 * L_4 = p0;
		t762 * L_5 = (L_4->f3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		t417 * L_6 = p0;
		t762 * L_7 = (L_6->f3);
		VirtActionInvoker0::Invoke(&m3816_MI, L_7);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m2871_MI;
extern "C" bool m2871 (t417 * __this, MethodInfo* method)
{
	typedef bool (*m2871_ftn) (t417 *);
	static m2871_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2871_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2873_MI;
extern "C" int32_t m2873 (t417 * __this, MethodInfo* method)
{
	typedef int32_t (*m2873_ftn) (t417 *);
	static m2873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
#include "t587.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t587_TI;
#include "t587MD.h"



#include "t586.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t586_TI;
#include "t586MD.h"



#include "t470.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t470_TI;
#include "t470MD.h"

#include "t433.h"
#include "t763.h"
#include "t764.h"
#include "t452.h"
#include "t504.h"
extern TypeInfo t129_TI;
extern TypeInfo t433_TI;
extern TypeInfo t763_TI;
extern TypeInfo t764_TI;
extern TypeInfo t137_TI;
extern TypeInfo t504_TI;
#include "t129MD.h"
#include "t433MD.h"
#include "t763MD.h"
#include "t764MD.h"
#include "t504MD.h"
extern Il2CppType t433_0_0_0;
extern Il2CppType t763_0_0_0;
extern Il2CppType t764_0_0_0;
extern MethodInfo m1066_MI;
extern MethodInfo m2699_MI;
extern MethodInfo m3827_MI;
extern MethodInfo m2735_MI;
extern MethodInfo m2737_MI;
extern MethodInfo m3839_MI;
extern MethodInfo m3837_MI;
extern MethodInfo m3838_MI;
extern MethodInfo m2867_MI;
extern MethodInfo m4283_MI;
extern MethodInfo m4284_MI;
extern MethodInfo m4285_MI;
extern MethodInfo m3822_MI;
extern MethodInfo m3823_MI;
extern MethodInfo m3825_MI;
extern MethodInfo m3826_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m3833_MI;
extern MethodInfo m3828_MI;
extern MethodInfo m2743_MI;
extern MethodInfo m2745_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4143_MI;
extern MethodInfo m3840_MI;
extern MethodInfo m3836_MI;
extern MethodInfo m3824_MI;
extern Il2CppGenericMethod m4283_GM;
extern Il2CppGenericMethod m4284_GM;
extern Il2CppGenericMethod m4285_GM;


extern MethodInfo m2695_MI;
extern "C" void m2695 (t470 * __this, MethodInfo* method)
{
	{
		m2867(__this, ((int32_t)50), &m2867_MI);
		return;
	}
}
extern TypeInfo* t433_TI_var;
extern TypeInfo* t763_TI_var;
extern TypeInfo* t764_TI_var;
extern MethodInfo* m4283_MI_var;
extern MethodInfo* m4284_MI_var;
extern MethodInfo* m4285_MI_var;
extern "C" void m2867 (t470 * __this, int32_t p0, MethodInfo* method)
{
	static bool m2867_init;
	if (!m2867_init)
	{
		t433_TI_var = il2cpp_codegen_class_from_type(&t433_0_0_0);
		t763_TI_var = il2cpp_codegen_class_from_type(&t763_0_0_0);
		t764_TI_var = il2cpp_codegen_class_from_type(&t764_0_0_0);
		m4283_MI_var = il2cpp_codegen_genericmethod_get_method(&m4283_GM);
		m4284_MI_var = il2cpp_codegen_genericmethod_get_method(&m4284_GM);
		m4285_MI_var = il2cpp_codegen_genericmethod_get_method(&m4285_GM);
		m2867_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t433_TI_var);
		t433 * L_1 = (t433 *)il2cpp_codegen_object_new (t433_TI_var);
		m4283(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), m4283_MI_var);
		__this->f5 = L_1;
		int32_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t763_TI_var);
		t763 * L_3 = (t763 *)il2cpp_codegen_object_new (t763_TI_var);
		m4284(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), m4284_MI_var);
		__this->f6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(t764_TI_var);
		t764 * L_4 = (t764 *)il2cpp_codegen_object_new (t764_TI_var);
		m4285(L_4, ((int32_t)20), m4285_MI_var);
		__this->f7 = L_4;
		m3822(__this, &m3822_MI);
		return;
	}
}
extern MethodInfo m3821_MI;
extern "C" void m3821 (t470 * __this, MethodInfo* method)
{
	{
		m3823(__this, &m3823_MI);
		return;
	}
}
extern "C" void m3822 (t470 * __this, MethodInfo* method)
{
	typedef void (*m3822_ftn) (t470 *);
	static m3822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3823 (t470 * __this, MethodInfo* method)
{
	typedef void (*m3823_ftn) (t470 *);
	static m3823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
extern "C" bool m3824 (t470 * __this, t2* p0, t417 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, t28  p15, t28  p16, bool p17, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t417 * L_1 = p1;
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
		bool L_20 = m3825(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, &m3825_MI);
		return L_20;
	}
}
extern "C" bool m3825 (t470 * __this, t2* p0, t417 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, float p15, float p16, float p17, float p18, bool p19, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t417 * L_1 = p1;
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
		bool L_19 = m3826(NULL, __this, L_0, L_1, (&p2), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m3826_MI);
		return L_19;
	}
}
extern "C" bool m3826 (t9 * __this , t470 * p0, t2* p1, t417 * p2, t43 * p3, int32_t p4, float p5, float p6, int32_t p7, bool p8, bool p9, int32_t p10, int32_t p11, int32_t p12, int32_t p13, bool p14, int32_t p15, float p16, float p17, float p18, float p19, bool p20, MethodInfo* method)
{
	typedef bool (*m3826_ftn) (t470 *, t2*, t417 *, t43 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static m3826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20);
}
extern "C" t434  m2745 (t470 * __this, MethodInfo* method)
{
	typedef t434  (*m2745_ftn) (t470 *);
	static m2745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3827 (t470 * __this, MethodInfo* method)
{
	typedef int32_t (*m3827_ftn) (t470 *);
	static m3827_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3827_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3828 (t470 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3828_ftn) (t470 *, t9 *);
	static m3828_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3828_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3829_MI;
extern "C" t469* m3829 (t470 * __this, MethodInfo* method)
{
	typedef t469* (*m3829_ftn) (t470 *);
	static m3829_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3829_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3830_MI;
extern "C" int32_t m3830 (t470 * __this, MethodInfo* method)
{
	typedef int32_t (*m3830_ftn) (t470 *);
	static m3830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2723_MI;
extern "C" int32_t m2723 (t470 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m1066(NULL, L_0, &m1066_MI);
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
		int32_t L_3 = m2699(L_2, &m2699_MI);
		int32_t L_4 = m3827(__this, &m3827_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_5 = m2735(NULL, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), &m2735_MI);
		int32_t L_6 = m2737(NULL, L_3, L_5, &m2737_MI);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
extern "C" void m3831 (t470 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3831_ftn) (t470 *, t9 *);
	static m3831_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3831_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3832_MI;
extern "C" t765* m3832 (t470 * __this, MethodInfo* method)
{
	typedef t765* (*m3832_ftn) (t470 *);
	static m3832_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3832_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2722_MI;
extern "C" int32_t m2722 (t470 * __this, MethodInfo* method)
{
	typedef int32_t (*m2722_ftn) (t470 *);
	static m2722_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2722_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3833 (t470 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3833_ftn) (t470 *, t9 *);
	static m3833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3834_MI;
extern "C" t766* m3834 (t470 * __this, MethodInfo* method)
{
	typedef t766* (*m3834_ftn) (t470 *);
	static m3834_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3834_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2762_MI;
extern "C" int32_t m2762 (t470 * __this, MethodInfo* method)
{
	typedef int32_t (*m2762_ftn) (t470 *);
	static m2762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3835_MI;
extern "C" void m3835 (t470 * __this, MethodInfo* method)
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
extern "C" t504  m3836 (t470 * __this, t504  p0, MethodInfo* method)
{
	{
		t417 * L_0 = ((&p0)->f0);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t417 * L_2 = ((&p0)->f0);
		bool L_3 = m2871(L_2, &m2871_MI);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		t504  L_4 = p0;
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
		m1166(NULL, (t2*) &_stringLiteral267, &m1166_MI);
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
		m1166(NULL, (t2*) &_stringLiteral268, &m1166_MI);
		(&p0)->f8 = 0;
	}

IL_0075:
	{
		t504  L_8 = p0;
		return L_8;
	}
}
extern MethodInfo m2876_MI;
extern "C" void m2876 (t470 * __this, MethodInfo* method)
{
	{
		__this->f3 = 0;
		return;
	}
}
extern "C" void m3837 (t470 * __this, t763 * p0, MethodInfo* method)
{
	{
		t763 * L_0 = p0;
		m3831(__this, L_0, &m3831_MI);
		return;
	}
}
extern "C" void m3838 (t470 * __this, t764 * p0, MethodInfo* method)
{
	{
		t764 * L_0 = p0;
		m3833(__this, L_0, &m3833_MI);
		return;
	}
}
extern "C" void m3839 (t470 * __this, t433 * p0, MethodInfo* method)
{
	{
		t433 * L_0 = p0;
		m3828(__this, L_0, &m3828_MI);
		return;
	}
}
extern MethodInfo m2874_MI;
extern "C" float m2874 (t470 * __this, t2* p0, t504  p1, MethodInfo* method)
{
	t434  V_0 = {0};
	{
		(&p1)->f13 = 1;
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t504  L_1 = p1;
		m2743(__this, L_0, L_1, &m2743_MI);
		t434  L_2 = m2745(__this, &m2745_MI);
		V_0 = L_2;
		float L_3 = m2590((&V_0), &m2590_MI);
		return L_3;
	}
}
extern MethodInfo m2875_MI;
extern "C" float m2875 (t470 * __this, t2* p0, t504  p1, MethodInfo* method)
{
	t434  V_0 = {0};
	{
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t504  L_1 = p1;
		m2743(__this, L_0, L_1, &m2743_MI);
		t434  L_2 = m2745(__this, &m2745_MI);
		V_0 = L_2;
		float L_3 = m2591((&V_0), &m2591_MI);
		return L_3;
	}
}
extern "C" bool m2743 (t470 * __this, t2* p0, t504  p1, MethodInfo* method)
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
		t504  L_4 = (__this->f2);
		bool L_5 = m4143((&p1), L_4, &m4143_MI);
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
		t504  L_8 = p1;
		bool L_9 = m3840(__this, L_7, L_8, &m3840_MI);
		return L_9;
	}
}
extern "C" bool m3840 (t470 * __this, t2* p0, t504  p1, MethodInfo* method)
{
	t504  V_0 = {0};
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		__this->f3 = 1;
		__this->f8 = 0;
		__this->f9 = 0;
		__this->f10 = 0;
		t504  L_1 = p1;
		__this->f2 = L_1;
		t504  L_2 = p1;
		t504  L_3 = m3836(__this, L_2, &m3836_MI);
		V_0 = L_3;
		t2* L_4 = p0;
		t417 * L_5 = ((&V_0)->f0);
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
		bool L_22 = m3824(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, &m3824_MI);
		__this->f4 = L_22;
		bool L_23 = (__this->f4);
		return L_23;
	}
}
extern MethodInfo m2877_MI;
extern "C" t9* m2877 (t470 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t433 * L_1 = (__this->f5);
		m3839(__this, L_1, &m3839_MI);
		__this->f8 = 1;
	}

IL_001e:
	{
		t433 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m2724_MI;
extern "C" t9* m2724 (t470 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t763 * L_1 = (__this->f6);
		m3837(__this, L_1, &m3837_MI);
		__this->f9 = 1;
	}

IL_001e:
	{
		t763 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m2720_MI;
extern "C" t9* m2720 (t470 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t764 * L_1 = (__this->f7);
		m3838(__this, L_1, &m3838_MI);
		__this->f10 = 1;
	}

IL_001e:
	{
		t764 * L_2 = (__this->f7);
		return L_2;
	}
}
#include "t577.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t577_TI;
#include "t577MD.h"



#include "t567.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t567_TI;
#include "t567MD.h"



extern MethodInfo m2547_MI;
extern "C" void m2547 (t567 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3841_MI;
extern "C" void m3841 (t567 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3841((t567 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t567(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3842_MI;
extern "C" t9 * m3842 (t567 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3843_MI;
extern "C" void m3843 (t567 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t429.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t429_TI;
#include "t429MD.h"

extern MethodInfo m3845_MI;


extern MethodInfo m2548_MI;
extern "C" void m2548 (t9 * __this , t567 * p0, MethodInfo* method)
{
	{
		t567 * L_0 = ((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2;
		t567 * L_1 = p0;
		t286 * L_2 = m1060(NULL, L_0, L_1, &m1060_MI);
		((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2 = ((t567 *)Castclass(L_2, InitializedTypeInfo(&t567_TI)));
		return;
	}
}
extern MethodInfo m3844_MI;
extern "C" void m3844 (t9 * __this , t567 * p0, MethodInfo* method)
{
	{
		t567 * L_0 = ((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2;
		t567 * L_1 = p0;
		t286 * L_2 = m1061(NULL, L_0, L_1, &m1061_MI);
		((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2 = ((t567 *)Castclass(L_2, InitializedTypeInfo(&t567_TI)));
		return;
	}
}
extern MethodInfo m2620_MI;
extern "C" int32_t m2620 (t429 * __this, MethodInfo* method)
{
	typedef int32_t (*m2620_ftn) (t429 *);
	static m2620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2896_MI;
extern "C" bool m2896 (t429 * __this, MethodInfo* method)
{
	typedef bool (*m2896_ftn) (t429 *);
	static m2896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2623_MI;
extern "C" t39 * m2623 (t429 * __this, MethodInfo* method)
{
	typedef t39 * (*m2623_ftn) (t429 *);
	static m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2872_MI;
extern "C" float m2872 (t429 * __this, MethodInfo* method)
{
	typedef float (*m2872_ftn) (t429 *);
	static m2872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2900_MI;
extern "C" void m2900 (t429 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2900_ftn) (t429 *, float);
	static m2900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2651_MI;
extern "C" float m2651 (t429 * __this, MethodInfo* method)
{
	typedef float (*m2651_ftn) (t429 *);
	static m2651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2901_MI;
extern "C" void m2901 (t429 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2901_ftn) (t429 *, float);
	static m2901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2601_MI;
extern "C" bool m2601 (t429 * __this, MethodInfo* method)
{
	typedef bool (*m2601_ftn) (t429 *);
	static m2601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2622_MI;
extern "C" int32_t m2622 (t429 * __this, MethodInfo* method)
{
	typedef int32_t (*m2622_ftn) (t429 *);
	static m2622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2621_MI;
extern "C" int32_t m2621 (t429 * __this, MethodInfo* method)
{
	typedef int32_t (*m2621_ftn) (t429 *);
	static m2621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2631_MI;
extern "C" int32_t m2631 (t429 * __this, MethodInfo* method)
{
	typedef int32_t (*m2631_ftn) (t429 *);
	static m2631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2573_MI;
extern "C" t40 * m2573 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2573_ftn) ();
	static m2573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2868_MI;
extern "C" t40 * m2868 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2868_ftn) ();
	static m2868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
extern "C" void m3845 (t9 * __this , MethodInfo* method)
{
	{
		t567 * L_0 = ((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t567 * L_1 = ((t429_SFs*)InitializedTypeInfo(&t429_TI)->static_fields)->f2;
		VirtActionInvoker0::Invoke(&m3841_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m2811_MI;
extern "C" void m2811 (t9 * __this , MethodInfo* method)
{
	{
		m3845(NULL, &m3845_MI);
		return;
	}
}
#include "t571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t571_TI;
#include "t571MD.h"

extern MethodInfo m3846_MI;


extern MethodInfo m2835_MI;
extern "C" bool m2835 (t571 * __this, MethodInfo* method)
{
	typedef bool (*m2835_ftn) (t571 *);
	static m2835_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2835_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3846 (t571 * __this, MethodInfo* method)
{
	typedef bool (*m3846_ftn) (t571 *);
	static m3846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2599_MI;
extern "C" bool m2599 (t571 * __this, MethodInfo* method)
{
	typedef bool (*m2599_ftn) (t571 *);
	static m2599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3847_MI;
extern "C" bool m3847 (t571 * __this, t28  p0, t39 * p1, MethodInfo* method)
{
	{
		bool L_0 = m3846(__this, &m3846_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t452_TI;
#include "t452MD.h"

#include "t552.h"
#include "t568.h"
extern TypeInfo t552_TI;
extern TypeInfo t47_TI;
#include "t552MD.h"
#include "t47MD.h"
extern MethodInfo m2561_MI;
extern MethodInfo m413_MI;
extern MethodInfo m354_MI;
extern MethodInfo m3388_MI;
extern MethodInfo m1181_MI;


extern MethodInfo m3848_MI;
extern "C" void m3848 (t9 * __this , MethodInfo* method)
{
	t452  V_0 = {0};
	{
		t552  L_0 = {0};
		m2561(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), &m2561_MI);
		((t452_SFs*)InitializedTypeInfo(&t452_TI)->static_fields)->f6 = L_0;
		t47  L_1 = {0};
		m413(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), &m413_MI);
		((t452_SFs*)InitializedTypeInfo(&t452_TI)->static_fields)->f7 = L_1;
		Initobj (InitializedTypeInfo(&t452_TI), (&V_0));
		t13  L_2 = m354(NULL, &m354_MI);
		(&V_0)->f0 = L_2;
		t13  L_3 = m3388(NULL, &m3388_MI);
		(&V_0)->f1 = L_3;
		t47  L_4 = ((t452_SFs*)InitializedTypeInfo(&t452_TI)->static_fields)->f7;
		(&V_0)->f5 = L_4;
		t552  L_5 = ((t452_SFs*)InitializedTypeInfo(&t452_TI)->static_fields)->f6;
		(&V_0)->f2 = L_5;
		t28  L_6 = m1181(NULL, &m1181_MI);
		(&V_0)->f3 = L_6;
		t28  L_7 = m1181(NULL, &m1181_MI);
		(&V_0)->f4 = L_7;
		t452  L_8 = V_0;
		((t452_SFs*)InitializedTypeInfo(&t452_TI)->static_fields)->f8 = L_8;
		return;
	}
}
#include "t428.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t428_TI;
#include "t428MD.h"

#include "t148.h"
#include "t302.h"
extern TypeInfo t158_TI;
extern TypeInfo t302_TI;
#include "t728MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3849_MI;
extern MethodInfo m2750_MI;
extern MethodInfo m3562_MI;
extern MethodInfo m2608_MI;
extern MethodInfo m3850_MI;
extern MethodInfo m3851_MI;
extern Il2CppGenericMethod m2750_GM;
extern Il2CppGenericMethod m2608_GM;


extern MethodInfo m2606_MI;
extern "C" void m2606 (t428 * __this, t43  p0, MethodInfo* method)
{
	{
		m3849(NULL, __this, (&p0), &m3849_MI);
		return;
	}
}
extern "C" void m3849 (t9 * __this , t428 * p0, t43 * p1, MethodInfo* method)
{
	typedef void (*m3849_ftn) (t428 *, t43 *);
	static m3849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2604_MI;
extern "C" t43  m2604 (t428 * __this, MethodInfo* method)
{
	typedef t43  (*m2604_ftn) (t428 *);
	static m2604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2950_MI;
extern "C" void m2950 (t428 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m2950_ftn) (t428 *, bool);
	static m2950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2594_MI;
extern "C" void m2594 (t428 * __this, t40 * p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m2594_ftn) (t428 *, t40 *, t148 *);
	static m2594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2593_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m2750_MI_var;
extern MethodInfo* m2608_MI_var;
extern "C" void m2593 (t428 * __this, t433 * p0, MethodInfo* method)
{
	static bool m2593_init;
	if (!m2593_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2750_MI_var = il2cpp_codegen_genericmethod_get_method(&m2750_GM);
		m2608_MI_var = il2cpp_codegen_genericmethod_get_method(&m2608_GM);
		m2593_init = true;
	}
	{
		t433 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m2750_MI_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		t9 * L_4 = Box(InitializedTypeInfo(&t302_TI), &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m3562(NULL, (t2*) &_stringLiteral269, L_2, &m3562_MI);
		m1167(NULL, L_5, __this, &m1167_MI);
		t433 * L_6 = p0;
		VirtActionInvoker0::Invoke(m2608_MI_var, L_6);
	}

IL_0039:
	{
		t433 * L_7 = p0;
		m3850(__this, L_7, &m3850_MI);
		return;
	}
}
extern "C" void m3850 (t428 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3850_ftn) (t428 *, t9 *);
	static m3850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2710_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m2710 (t428 * __this, t469* p0, int32_t p1, MethodInfo* method)
{
	static bool m2710_init;
	if (!m2710_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2710_init = true;
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
		t9 * L_3 = Box(InitializedTypeInfo(&t302_TI), &L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_1, 0)) = (t9 *)L_3;
		t2* L_4 = m3562(NULL, (t2*) &_stringLiteral269, L_1, &m3562_MI);
		m1167(NULL, L_4, __this, &m1167_MI);
		p1 = 0;
	}

IL_0031:
	{
		t469* L_5 = p0;
		int32_t L_6 = p1;
		m3851(__this, L_5, L_6, &m3851_MI);
		return;
	}
}
extern "C" void m3851 (t428 * __this, t469* p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3851_ftn) (t428 *, t469*, int32_t);
	static m3851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2587_MI;
extern "C" void m2587 (t428 * __this, MethodInfo* method)
{
	typedef void (*m2587_ftn) (t428 *);
	static m2587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2574_MI;
extern "C" int32_t m2574 (t428 * __this, MethodInfo* method)
{
	typedef int32_t (*m2574_ftn) (t428 *);
	static m2574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
#include "t576.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t576_TI;
#include "t576MD.h"

#include "t585.h"
extern TypeInfo t37_TI;
extern TypeInfo t74_TI;
#include "t585MD.h"
#include "t427MD.h"
extern Il2CppType t37_0_0_0;
extern MethodInfo m3853_MI;
extern MethodInfo m3854_MI;
extern MethodInfo m3855_MI;
extern MethodInfo m388_MI;
extern MethodInfo m3857_MI;
extern MethodInfo m2718_MI;
extern MethodInfo m2719_MI;
extern MethodInfo m558_MI;
extern MethodInfo m3856_MI;
extern MethodInfo m617_MI;
extern MethodInfo m581_MI;
extern MethodInfo m2803_MI;
extern MethodInfo m2659_MI;
extern MethodInfo m2673_MI;
extern MethodInfo m2684_MI;
extern MethodInfo m2759_MI;
extern MethodInfo m2754_MI;
extern MethodInfo m2758_MI;
extern MethodInfo m2663_MI;
extern MethodInfo m2753_MI;
extern MethodInfo m2757_MI;
extern MethodInfo m2664_MI;
extern MethodInfo m2802_MI;
extern MethodInfo m3858_MI;
extern MethodInfo m2755_MI;
extern MethodInfo m2665_MI;


extern MethodInfo m3852_MI;
extern TypeInfo* t37_TI_var;
extern "C" void m3852 (t9 * __this , MethodInfo* method)
{
	static bool m3852_init;
	if (!m3852_init)
	{
		t37_TI_var = il2cpp_codegen_class_from_type(&t37_0_0_0);
		m3852_init = true;
	}
	{
		((t576_SFs*)InitializedTypeInfo(&t576_TI)->static_fields)->f0 = ((t37*)SZArrayNew(t37_TI_var, 4));
		return;
	}
}
extern MethodInfo m2634_MI;
extern "C" bool m2634 (t9 * __this , t427 * p0, t28  p1, t39 * p2, MethodInfo* method)
{
	{
		t427 * L_0 = p0;
		t39 * L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		bool L_2 = m3853(NULL, L_0, (&p1), L_1, &m3853_MI);
		return L_2;
	}
}
extern "C" bool m3853 (t9 * __this , t427 * p0, t28 * p1, t39 * p2, MethodInfo* method)
{
	typedef bool (*m3853_ftn) (t427 *, t28 *, t39 *);
	static m3853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m2602_MI;
extern "C" t28  m2602 (t9 * __this , t28  p0, t45 * p1, t429 * p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t28  L_0 = p0;
		t45 * L_1 = p1;
		t429 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		m3854(NULL, L_0, L_1, L_2, (&V_0), &m3854_MI);
		t28  L_3 = V_0;
		return L_3;
	}
}
extern "C" void m3854 (t9 * __this , t28  p0, t45 * p1, t429 * p2, t28 * p3, MethodInfo* method)
{
	{
		t45 * L_0 = p1;
		t429 * L_1 = p2;
		t28 * L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		m3855(NULL, (&p0), L_0, L_1, L_2, &m3855_MI);
		return;
	}
}
extern "C" void m3855 (t9 * __this , t28 * p0, t45 * p1, t429 * p2, t28 * p3, MethodInfo* method)
{
	typedef void (*m3855_ftn) (t28 *, t45 *, t429 *, t28 *);
	static m3855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m2603_MI;
extern "C" t434  m2603 (t9 * __this , t427 * p0, t429 * p1, MethodInfo* method)
{
	typedef t434  (*m2603_ftn) (t427 *, t429 *);
	static m2603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" bool m3856 (t9 * __this , t427 * p0, t28  p1, t39 * p2, t13 * p3, MethodInfo* method)
{
	t74  V_0 = {0};
	t585  V_1 = {0};
	float V_2 = 0.0f;
	{
		t13 * L_0 = p3;
		t28  L_1 = m1181(NULL, &m1181_MI);
		t13  L_2 = m388(NULL, L_1, &m388_MI);
		*L_0 = L_2;
		t39 * L_3 = p2;
		t28  L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		t74  L_5 = m3857(NULL, L_3, L_4, &m3857_MI);
		V_0 = L_5;
		t427 * L_6 = p0;
		t93  L_7 = m490(L_6, &m490_MI);
		t13  L_8 = m3388(NULL, &m3388_MI);
		t13  L_9 = m627(NULL, L_7, L_8, &m627_MI);
		t427 * L_10 = p0;
		t13  L_11 = m351(L_10, &m351_MI);
		m2718((&V_1), L_9, L_11, &m2718_MI);
		t74  L_12 = V_0;
		bool L_13 = m2719((&V_1), L_12, (&V_2), &m2719_MI);
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
extern MethodInfo m2677_MI;
extern "C" bool m2677 (t9 * __this , t427 * p0, t28  p1, t39 * p2, t28 * p3, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t28 * L_0 = p3;
		t28  L_1 = m1181(NULL, &m1181_MI);
		*L_0 = L_1;
		t427 * L_2 = p0;
		t28  L_3 = p1;
		t39 * L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		bool L_5 = m3856(NULL, L_2, L_3, L_4, (&V_0), &m3856_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t28 * L_6 = p3;
		t427 * L_7 = p0;
		t13  L_8 = V_0;
		t13  L_9 = m2717(L_7, L_8, &m2717_MI);
		t28  L_10 = m617(NULL, L_9, &m617_MI);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern "C" t74  m3857 (t9 * __this , t39 * p0, t28  p1, MethodInfo* method)
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
extern "C" void m2803 (t9 * __this , t427 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	t427 * V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	t28  V_5 = {0};
	float V_6 = 0.0f;
	{
		t427 * L_0 = p0;
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
		t427 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2923(L_3, L_4, &m2923_MI);
		V_1 = ((t427 *)IsInst(L_5, InitializedTypeInfo(&t427_TI)));
		t427 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		t427 * L_8 = V_1;
		int32_t L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		m2803(NULL, L_8, L_9, 0, 1, &m2803_MI);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		t427 * L_12 = p0;
		int32_t L_13 = m2926(L_12, &m2926_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		t427 * L_14 = p0;
		t28  L_15 = m2659(L_14, &m2659_MI);
		V_2 = L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p1;
		float L_18 = m2673((&V_2), L_17, &m2673_MI);
		m2684((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), &m2684_MI);
		t427 * L_19 = p0;
		t28  L_20 = V_2;
		m2759(L_19, L_20, &m2759_MI);
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
		t427 * L_22 = p0;
		t28  L_23 = m2754(L_22, &m2754_MI);
		V_3 = L_23;
		int32_t L_24 = p1;
		int32_t L_25 = p1;
		float L_26 = m2673((&V_3), L_25, &m2673_MI);
		m2684((&V_3), L_24, ((-L_26)), &m2684_MI);
		t427 * L_27 = p0;
		t28  L_28 = V_3;
		m2758(L_27, L_28, &m2758_MI);
		t427 * L_29 = p0;
		t28  L_30 = m2663(L_29, &m2663_MI);
		V_4 = L_30;
		t427 * L_31 = p0;
		t28  L_32 = m2753(L_31, &m2753_MI);
		V_5 = L_32;
		int32_t L_33 = p1;
		float L_34 = m2673((&V_4), L_33, &m2673_MI);
		V_6 = L_34;
		int32_t L_35 = p1;
		int32_t L_36 = p1;
		float L_37 = m2673((&V_5), L_36, &m2673_MI);
		m2684((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), &m2684_MI);
		int32_t L_38 = p1;
		float L_39 = V_6;
		m2684((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), &m2684_MI);
		t427 * L_40 = p0;
		t28  L_41 = V_4;
		m2757(L_40, L_41, &m2757_MI);
		t427 * L_42 = p0;
		t28  L_43 = V_5;
		m2664(L_42, L_43, &m2664_MI);
		return;
	}
}
extern "C" void m2802 (t9 * __this , t427 * p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t427 * V_1 = {0};
	{
		t427 * L_0 = p0;
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
		t427 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2923(L_3, L_4, &m2923_MI);
		V_1 = ((t427 *)IsInst(L_5, InitializedTypeInfo(&t427_TI)));
		t427 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t427 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		m2802(NULL, L_8, 0, 1, &m2802_MI);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		t427 * L_11 = p0;
		int32_t L_12 = m2926(L_11, &m2926_MI);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		t427 * L_13 = p0;
		t427 * L_14 = p0;
		t28  L_15 = m2659(L_14, &m2659_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		t28  L_16 = m3858(NULL, L_15, &m3858_MI);
		m2759(L_13, L_16, &m2759_MI);
		t427 * L_17 = p0;
		t427 * L_18 = p0;
		t28  L_19 = m2755(L_18, &m2755_MI);
		t28  L_20 = m3858(NULL, L_19, &m3858_MI);
		m2665(L_17, L_20, &m2665_MI);
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
		t427 * L_22 = p0;
		t427 * L_23 = p0;
		t28  L_24 = m2754(L_23, &m2754_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t576_TI));
		t28  L_25 = m3858(NULL, L_24, &m3858_MI);
		m2758(L_22, L_25, &m2758_MI);
		t427 * L_26 = p0;
		t427 * L_27 = p0;
		t28  L_28 = m2663(L_27, &m2663_MI);
		t28  L_29 = m3858(NULL, L_28, &m3858_MI);
		m2757(L_26, L_29, &m2757_MI);
		t427 * L_30 = p0;
		t427 * L_31 = p0;
		t28  L_32 = m2753(L_31, &m2753_MI);
		t28  L_33 = m3858(NULL, L_32, &m3858_MI);
		m2664(L_30, L_33, &m2664_MI);
		return;
	}
}
extern "C" t28  m3858 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f2);
		float L_1 = ((&p0)->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
#include "t767.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t767_TI;
#include "t767MD.h"

#include "t768.h"
#include "t769.h"
extern TypeInfo t768_TI;
extern TypeInfo t769_TI;
#include "t8MD.h"
extern MethodInfo m3860_MI;
extern MethodInfo m4286_MI;
extern MethodInfo m3861_MI;
extern MethodInfo m3862_MI;


extern MethodInfo m3859_MI;
extern "C" void m3859 (t767 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" uint64_t m3860 (t767 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" uint64_t m3861 (t767 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m3862 (t767 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3863_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3863 (t767 * __this, MethodInfo* method)
{
	static bool m3863_init;
	if (!m3863_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3863_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3860(__this, &m3860_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t768_TI), &L_4);
		t2* L_6 = m4286(L_5, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint64_t L_8 = m3861(__this, &m3861_MI);
		uint64_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t769_TI), &L_9);
		t2* L_11 = m4286(L_10, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t158* L_12 = L_7;
		int32_t L_13 = m3862(__this, &m3862_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3562(NULL, (t2*) &_stringLiteral270, L_12, &m3562_MI);
		return L_16;
	}
}
#include "t770.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t770_TI;
#include "t770MD.h"

#include "t883.h"
extern TypeInfo t771_TI;
extern TypeInfo t883_TI;
extern TypeInfo t884_TI;
#include "t883MD.h"
#include "t884MD.h"
extern Il2CppType t771_0_0_0;
extern MethodInfo m4287_MI;
extern MethodInfo m610_MI;
extern MethodInfo m4288_MI;
extern MethodInfo m4289_MI;
extern MethodInfo m4290_MI;
extern MethodInfo m4291_MI;
extern MethodInfo m4292_MI;
extern Il2CppGenericMethod m4287_GM;


extern MethodInfo m3864_MI;
extern "C" void m3864 (t770 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3865_MI;
extern MethodInfo* m4287_MI_var;
extern "C" t2* m3865 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3865_init;
	if (!m3865_init)
	{
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m3865_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4287_MI_var, L_0, L_1, (&p1));
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
		t2* L_5 = m610(NULL, L_4, (t2*) &_stringLiteral272, &m610_MI);
		t883 * L_6 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_6, L_5, &m4288_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m3866_MI;
extern MethodInfo* m4287_MI_var;
extern "C" int32_t m3866 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3866_init;
	if (!m3866_init)
	{
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m3866_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4287_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		int32_t L_4 = m4289(NULL, L_3, &m4289_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral272, &m610_MI);
		t883 * L_7 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_7, L_6, &m4288_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3867_MI;
extern MethodInfo* m4287_MI_var;
extern "C" uint16_t m3867 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3867_init;
	if (!m3867_init)
	{
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m3867_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4287_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		uint16_t L_4 = m4290(NULL, L_3, &m4290_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral272, &m610_MI);
		t883 * L_7 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_7, L_6, &m4288_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3868_MI;
extern MethodInfo* m4287_MI_var;
extern "C" uint64_t m3868 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3868_init;
	if (!m3868_init)
	{
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m3868_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4287_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		uint64_t L_4 = m4291(NULL, L_3, &m4291_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral272, &m610_MI);
		t883 * L_7 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_7, L_6, &m4288_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3869_MI;
extern MethodInfo* m4287_MI_var;
extern "C" bool m3869 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3869_init;
	if (!m3869_init)
	{
		m4287_MI_var = il2cpp_codegen_genericmethod_get_method(&m4287_GM);
		m3869_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4287_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		bool L_4 = m4292(NULL, L_3, &m4292_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral272, &m610_MI);
		t883 * L_7 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_7, L_6, &m4288_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
#include "t772.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t772_TI;
#include "t772MD.h"

extern MethodInfo m3871_MI;
extern MethodInfo m3873_MI;
extern MethodInfo m3872_MI;
extern MethodInfo m3874_MI;


extern MethodInfo m3870_MI;
extern "C" void m3870 (t772 * __this, MethodInfo* method)
{
	{
		m3864(__this, &m3864_MI);
		return;
	}
}
extern "C" bool m3871 (t772 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3872 (t772 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3873 (t772 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3874 (t772 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3875_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3875 (t772 * __this, MethodInfo* method)
{
	static bool m3875_init;
	if (!m3875_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3875_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		bool L_3 = m3871(__this, &m3871_MI);
		bool L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t124_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m3873(__this, &m3873_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t2* L_8 = m3562(NULL, (t2*) &_stringLiteral273, L_6, &m3562_MI);
		return L_8;
	}
}
extern MethodInfo m3876_MI;
extern TypeInfo* t771_TI_var;
extern "C" void m3876 (t772 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3876_init;
	if (!m3876_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m3876_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t771_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		bool L_4 = m3869(__this, (t2*) &_stringLiteral274, L_2, L_3, &m3869_MI);
		m3872(__this, L_4, &m3872_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3865(__this, (t2*) &_stringLiteral275, L_5, L_6, &m3865_MI);
		m3874(__this, L_7, &m3874_MI);
		bool L_8 = m3871(__this, &m3871_MI);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		t2* L_9 = m3873(__this, &m3873_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m610(NULL, (t2*) &_stringLiteral276, L_9, &m610_MI);
		t883 * L_11 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_11, L_10, &m4288_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
#include "t773.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t773_TI;
#include "t773MD.h"



extern MethodInfo m3877_MI;
extern "C" void m3877 (t773 * __this, MethodInfo* method)
{
	{
		m3870(__this, &m3870_MI);
		return;
	}
}
#include "t774.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t774_TI;
#include "t774MD.h"

#include "t168.h"
#include "t775.h"
extern TypeInfo t168_TI;
extern TypeInfo t775_TI;
#include "t775MD.h"
extern Il2CppType t775_0_0_0;
extern MethodInfo m3879_MI;
extern MethodInfo m3881_MI;
extern MethodInfo m3883_MI;
extern MethodInfo m3885_MI;
extern MethodInfo m3887_MI;
extern MethodInfo m4293_MI;
extern Il2CppGenericMethod m4293_GM;


extern MethodInfo m3878_MI;
extern "C" void m3878 (t774 * __this, MethodInfo* method)
{
	{
		m3859(__this, &m3859_MI);
		return;
	}
}
extern "C" t2* m3879 (t774 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3880_MI;
extern "C" void m3880 (t774 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint32_t m3881 (t774 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3882_MI;
extern "C" void m3882 (t774 * __this, uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" bool m3883 (t774 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3884_MI;
extern "C" void m3884 (t774 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t2* m3885 (t774 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3886_MI;
extern "C" void m3886 (t774 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern "C" t775 * m3887 (t774 * __this, MethodInfo* method)
{
	{
		t775 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3888_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4293_MI_var;
extern "C" t2* m3888 (t774 * __this, MethodInfo* method)
{
	static bool m3888_init;
	if (!m3888_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4293_MI_var = il2cpp_codegen_genericmethod_get_method(&m4293_GM);
		m3888_init = true;
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
		t2* L_1 = m3863(__this, &m3863_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3879(__this, &m3879_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		uint32_t L_5 = m3881(__this, &m3881_MI);
		uint32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t168_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		bool L_9 = m3883(__this, &m3883_MI);
		bool L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t124_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_11;
		t158* L_12 = L_8;
		t2* L_13 = m3885(__this, &m3885_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_15 = m331(NULL, L_13, L_14, &m331_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral277;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral277;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral278;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (t2*) &_stringLiteral279;
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
		t775 * L_17 = m3887(__this, &m3887_MI);
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
		t775 * L_18 = m3887(__this, &m3887_MI);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4293_MI_var, L_18);
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
		t2* L_22 = m3562(NULL, G_B6_4, G_B6_3, &m3562_MI);
		return L_22;
	}
}
#include "t776.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t776_TI;
#include "t776MD.h"

#include "t777.h"
#include "t778.h"
extern TypeInfo t777_TI;
extern TypeInfo t778_TI;
extern MethodInfo m3890_MI;
extern MethodInfo m3892_MI;
extern MethodInfo m3894_MI;
extern MethodInfo m3898_MI;
extern MethodInfo m3900_MI;
extern MethodInfo m3891_MI;
extern MethodInfo m3893_MI;
extern MethodInfo m3895_MI;
extern MethodInfo m3897_MI;
extern MethodInfo m3899_MI;
extern MethodInfo m3901_MI;


extern MethodInfo m3889_MI;
extern "C" void m3889 (t776 * __this, MethodInfo* method)
{
	{
		m3877(__this, &m3877_MI);
		return;
	}
}
extern "C" t2* m3890 (t776 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3891 (t776 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3892 (t776 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3893 (t776 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3894 (t776 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3895 (t776 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3896_MI;
extern "C" t2* m3896 (t776 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3897 (t776 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3898 (t776 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3899 (t776 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3900 (t776 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3901 (t776 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3902_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3902 (t776 * __this, MethodInfo* method)
{
	static bool m3902_init;
	if (!m3902_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3902_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3875(__this, &m3875_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3890(__this, &m3890_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3892(__this, &m3892_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3894(__this, &m3894_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t777_TI), &L_10);
		t2* L_12 = m4286(L_11, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3898(__this, &m3898_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t778_TI), &L_15);
		t2* L_17 = m4286(L_16, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3900(__this, &m3900_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3562(NULL, (t2*) &_stringLiteral280, L_18, &m3562_MI);
		return L_22;
	}
}
extern MethodInfo m3903_MI;
extern TypeInfo* t771_TI_var;
extern "C" void m3903 (t776 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3903_init;
	if (!m3903_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m3903_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3876(__this, L_0, &m3876_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t771_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3865(__this, (t2*) &_stringLiteral281, L_3, L_4, &m3865_MI);
		m3891(__this, L_5, &m3891_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3866(__this, (t2*) &_stringLiteral282, L_6, L_7, &m3866_MI);
		m3893(__this, L_8, &m3893_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3868(__this, (t2*) &_stringLiteral283, L_9, L_10, &m3868_MI);
		m3895(__this, L_11, &m3895_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3865(__this, (t2*) &_stringLiteral284, L_12, L_13, &m3865_MI);
		m3897(__this, L_14, &m3897_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3867(__this, (t2*) &_stringLiteral285, L_15, L_16, &m3867_MI);
		m3899(__this, L_17, &m3899_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3869(__this, (t2*) &_stringLiteral286, L_18, L_19, &m3869_MI);
		m3901(__this, L_20, &m3901_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral287, L_22, &m610_MI);
		t883 * L_24 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_24, L_23, &m4288_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t779.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t779_TI;
#include "t779MD.h"

extern MethodInfo m3905_MI;
extern MethodInfo m3907_MI;


extern MethodInfo m3904_MI;
extern "C" void m3904 (t779 * __this, MethodInfo* method)
{
	{
		m3859(__this, &m3859_MI);
		return;
	}
}
extern "C" uint64_t m3905 (t779 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3906_MI;
extern "C" void m3906 (t779 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t2* m3907 (t779 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3908_MI;
extern "C" void m3908 (t779 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3909_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3909 (t779 * __this, MethodInfo* method)
{
	static bool m3909_init;
	if (!m3909_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3909_init = true;
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
		t2* L_1 = m3863(__this, &m3863_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3905(__this, &m3905_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t777_TI), &L_4);
		t2* L_6 = m4286(L_5, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m3907(__this, &m3907_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_10 = m331(NULL, L_8, L_9, &m331_MI);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (t2*) &_stringLiteral288;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (t2*) &_stringLiteral288;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral278;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (t2*) &_stringLiteral279;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)G_B3_0;
		t2* L_11 = m3562(NULL, G_B3_4, G_B3_3, &m3562_MI);
		return L_11;
	}
}
#include "t780.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t780_TI;
#include "t780MD.h"

extern MethodInfo m3911_MI;
extern MethodInfo m3913_MI;
extern MethodInfo m3915_MI;
extern MethodInfo m3919_MI;
extern MethodInfo m3921_MI;
extern MethodInfo m3912_MI;
extern MethodInfo m3914_MI;
extern MethodInfo m3916_MI;
extern MethodInfo m3918_MI;
extern MethodInfo m3920_MI;
extern MethodInfo m3922_MI;


extern MethodInfo m3910_MI;
extern "C" void m3910 (t780 * __this, MethodInfo* method)
{
	{
		m3877(__this, &m3877_MI);
		return;
	}
}
extern "C" t2* m3911 (t780 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3912 (t780 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3913 (t780 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3914 (t780 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3915 (t780 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3916 (t780 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3917_MI;
extern "C" t2* m3917 (t780 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3918 (t780 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3919 (t780 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3920 (t780 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3921 (t780 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3922 (t780 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3923_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3923 (t780 * __this, MethodInfo* method)
{
	static bool m3923_init;
	if (!m3923_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3923_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3875(__this, &m3875_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3911(__this, &m3911_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3913(__this, &m3913_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3915(__this, &m3915_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t777_TI), &L_10);
		t2* L_12 = m4286(L_11, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3919(__this, &m3919_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t778_TI), &L_15);
		t2* L_17 = m4286(L_16, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3921(__this, &m3921_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3562(NULL, (t2*) &_stringLiteral280, L_18, &m3562_MI);
		return L_22;
	}
}
extern MethodInfo m3924_MI;
extern TypeInfo* t771_TI_var;
extern "C" void m3924 (t780 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3924_init;
	if (!m3924_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m3924_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3876(__this, L_0, &m3876_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t771_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3865(__this, (t2*) &_stringLiteral281, L_3, L_4, &m3865_MI);
		m3912(__this, L_5, &m3912_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3866(__this, (t2*) &_stringLiteral282, L_6, L_7, &m3866_MI);
		m3914(__this, L_8, &m3914_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3868(__this, (t2*) &_stringLiteral283, L_9, L_10, &m3868_MI);
		m3916(__this, L_11, &m3916_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3865(__this, (t2*) &_stringLiteral284, L_12, L_13, &m3865_MI);
		m3918(__this, L_14, &m3918_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3867(__this, (t2*) &_stringLiteral285, L_15, L_16, &m3867_MI);
		m3920(__this, L_17, &m3920_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3869(__this, (t2*) &_stringLiteral286, L_18, L_19, &m3869_MI);
		m3922(__this, L_20, &m3922_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral287, L_22, &m610_MI);
		t883 * L_24 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_24, L_23, &m4288_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t781.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t781_TI;
#include "t781MD.h"

extern MethodInfo m3926_MI;


extern MethodInfo m3925_MI;
extern "C" void m3925 (t781 * __this, MethodInfo* method)
{
	{
		m3859(__this, &m3859_MI);
		return;
	}
}
extern "C" uint64_t m3926 (t781 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3927_MI;
extern "C" void m3927 (t781 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3928_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3928 (t781 * __this, MethodInfo* method)
{
	static bool m3928_init;
	if (!m3928_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3928_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3863(__this, &m3863_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3926(__this, &m3926_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t777_TI), &L_4);
		t2* L_6 = m4286(L_5, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3562(NULL, (t2*) &_stringLiteral289, L_2, &m3562_MI);
		return L_7;
	}
}
#include "t782.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t782_TI;
#include "t782MD.h"

extern MethodInfo m3930_MI;
extern MethodInfo m3932_MI;


extern MethodInfo m3929_MI;
extern "C" void m3929 (t782 * __this, MethodInfo* method)
{
	{
		m3859(__this, &m3859_MI);
		return;
	}
}
extern "C" uint64_t m3930 (t782 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3931_MI;
extern "C" void m3931 (t782 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint16_t m3932 (t782 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3933_MI;
extern "C" void m3933 (t782 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3934_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3934 (t782 * __this, MethodInfo* method)
{
	static bool m3934_init;
	if (!m3934_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3934_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m3863(__this, &m3863_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3930(__this, &m3930_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t777_TI), &L_4);
		t2* L_6 = m4286(L_5, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint16_t L_8 = m3932(__this, &m3932_MI);
		uint16_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t778_TI), &L_9);
		t2* L_11 = m4286(L_10, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t2* L_12 = m3562(NULL, (t2*) &_stringLiteral290, L_7, &m3562_MI);
		return L_12;
	}
}
#include "t783.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t783_TI;
#include "t783MD.h"

extern MethodInfo m3936_MI;
extern MethodInfo m3938_MI;
extern MethodInfo m3940_MI;
extern MethodInfo m3942_MI;
extern MethodInfo m3943_MI;


extern MethodInfo m3935_MI;
extern "C" void m3935 (t783 * __this, MethodInfo* method)
{
	{
		m3859(__this, &m3859_MI);
		return;
	}
}
extern "C" int32_t m3936 (t783 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3937_MI;
extern "C" void m3937 (t783 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m3938 (t783 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3939_MI;
extern "C" void m3939 (t783 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t2* m3940 (t783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3941_MI;
extern "C" void m3941 (t783 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t775 * m3942 (t783 * __this, MethodInfo* method)
{
	{
		t775 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t775 * m3943 (t783 * __this, MethodInfo* method)
{
	{
		t775 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3944_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4293_MI_var;
extern "C" t2* m3944 (t783 * __this, MethodInfo* method)
{
	static bool m3944_init;
	if (!m3944_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4293_MI_var = il2cpp_codegen_genericmethod_get_method(&m4293_GM);
		m3944_init = true;
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
		t2* L_1 = m3863(__this, &m3863_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		int32_t L_3 = m3936(__this, &m3936_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m3938(__this, &m3938_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t125_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_9;
		t158* L_10 = L_6;
		t2* L_11 = m3940(__this, &m3940_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 3)) = (t9 *)L_11;
		t158* L_12 = L_10;
		t775 * L_13 = m3942(__this, &m3942_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral291;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral291;
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
		t775 * L_14 = m3942(__this, &m3942_MI);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4293_MI_var, L_14);
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
		t775 * L_19 = m3943(__this, &m3943_MI);
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
		t775 * L_20 = m3943(__this, &m3943_MI);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4293_MI_var, L_20);
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
		t2* L_24 = m3562(NULL, G_B6_4, G_B6_3, &m3562_MI);
		return L_24;
	}
}
#include "t784.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t784_TI;
#include "t784MD.h"

extern MethodInfo m3946_MI;
extern MethodInfo m3948_MI;
extern MethodInfo m3950_MI;
extern MethodInfo m3947_MI;
extern MethodInfo m3949_MI;
extern MethodInfo m3951_MI;


extern MethodInfo m3945_MI;
extern "C" void m3945 (t784 * __this, MethodInfo* method)
{
	{
		m3864(__this, &m3864_MI);
		return;
	}
}
extern "C" uint16_t m3946 (t784 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3947 (t784 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3948 (t784 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3949 (t784 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m3950 (t784 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3951 (t784 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3952_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3952 (t784 * __this, MethodInfo* method)
{
	static bool m3952_init;
	if (!m3952_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3952_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint16_t L_3 = m3946(__this, &m3946_MI);
		uint16_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t778_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m3948(__this, &m3948_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t158* L_8 = L_6;
		t2* L_9 = m3950(__this, &m3950_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_9;
		t2* L_10 = m3562(NULL, (t2*) &_stringLiteral292, L_8, &m3562_MI);
		return L_10;
	}
}
extern MethodInfo m3953_MI;
extern TypeInfo* t771_TI_var;
extern "C" void m3953 (t784 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3953_init;
	if (!m3953_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m3953_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t771_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint16_t L_4 = m3867(__this, (t2*) &_stringLiteral285, L_2, L_3, &m3867_MI);
		m3947(__this, L_4, &m3947_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3865(__this, (t2*) &_stringLiteral293, L_5, L_6, &m3865_MI);
		m3949(__this, L_7, &m3949_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		t2* L_10 = m3865(__this, (t2*) &_stringLiteral294, L_8, L_9, &m3865_MI);
		m3951(__this, L_10, &m3951_MI);
		goto IL_0061;
	}

IL_004b:
	{
		t9 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_13 = m610(NULL, (t2*) &_stringLiteral287, L_12, &m610_MI);
		t883 * L_14 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_14, L_13, &m4288_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
#include "t785.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t785_TI;
#include "t785MD.h"

#include "t786.h"
extern TypeInfo t786_TI;
#include "t786MD.h"
extern Il2CppType t786_0_0_0;
extern MethodInfo m3955_MI;
extern MethodInfo m3957_MI;
extern MethodInfo m3959_MI;
extern MethodInfo m3960_MI;
extern MethodInfo m3962_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m3966_MI;
extern MethodInfo m3968_MI;
extern MethodInfo m4294_MI;
extern MethodInfo m3956_MI;
extern MethodInfo m3958_MI;
extern MethodInfo m3961_MI;
extern MethodInfo m3963_MI;
extern MethodInfo m3965_MI;
extern MethodInfo m3969_MI;
struct t770;
#include "t311.h"
#include "t885.h"
extern "C" t786 * m4295 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4294_GM;
extern Il2CppGenericMethod m4295_GM;


extern MethodInfo m3954_MI;
extern "C" void m3954 (t785 * __this, MethodInfo* method)
{
	{
		m3864(__this, &m3864_MI);
		return;
	}
}
extern "C" uint64_t m3955 (t785 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3956 (t785 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3957 (t785 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3958 (t785 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" int32_t m3959 (t785 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m3960 (t785 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3961 (t785 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3962 (t785 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3963 (t785 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" bool m3964 (t785 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3965 (t785 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t775 * m3966 (t785 * __this, MethodInfo* method)
{
	{
		t775 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3967_MI;
extern "C" uint16_t m3967 (t785 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t786 * m3968 (t785 * __this, MethodInfo* method)
{
	{
		t786 * L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" void m3969 (t785 * __this, t786 * p0, MethodInfo* method)
{
	{
		t786 * L_0 = p0;
		__this->f8 = L_0;
		return;
	}
}
extern MethodInfo m3970_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4293_MI_var;
extern MethodInfo* m4294_MI_var;
extern "C" t2* m3970 (t785 * __this, MethodInfo* method)
{
	static bool m3970_init;
	if (!m3970_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4293_MI_var = il2cpp_codegen_genericmethod_get_method(&m4293_GM);
		m4294_MI_var = il2cpp_codegen_genericmethod_get_method(&m4294_GM);
		m3970_init = true;
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
		uint64_t L_3 = m3955(__this, &m3955_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t777_TI), &L_4);
		t2* L_6 = m4286(L_5, (t2*) &_stringLiteral271, &m4286_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m3957(__this, &m3957_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_8;
		t158* L_9 = L_7;
		int32_t L_10 = m3959(__this, &m3959_MI);
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_9, 3)) = (t9 *)L_12;
		t158* L_13 = L_9;
		int32_t L_14 = m3960(__this, &m3960_MI);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_16;
		t158* L_17 = L_13;
		int32_t L_18 = m3962(__this, &m3962_MI);
		int32_t L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 5)) = (t9 *)L_20;
		t158* L_21 = L_17;
		bool L_22 = m3964(__this, &m3964_MI);
		bool L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t124_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 6)) = (t9 *)L_24;
		t158* L_25 = L_21;
		t775 * L_26 = m3966(__this, &m3966_MI);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (t2*) &_stringLiteral295;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (t2*) &_stringLiteral295;
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
		t775 * L_27 = m3966(__this, &m3966_MI);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4293_MI_var, L_27);
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
		t786 * L_32 = m3968(__this, &m3968_MI);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4294_MI_var, L_32);
		int32_t L_34 = L_33;
		t9 * L_35 = Box(InitializedTypeInfo(&t125_TI), &L_34);
		ArrayElementTypeCheck (L_31, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 8)) = (t9 *)L_35;
		t2* L_36 = m3562(NULL, G_B3_4, L_31, &m3562_MI);
		return L_36;
	}
}
extern MethodInfo m3971_MI;
extern TypeInfo* t771_TI_var;
extern MethodInfo* m4295_MI_var;
extern "C" void m3971 (t785 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3971_init;
	if (!m3971_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m4295_MI_var = il2cpp_codegen_genericmethod_get_method(&m4295_GM);
		m3971_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t771_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint64_t L_4 = m3868(__this, (t2*) &_stringLiteral283, L_2, L_3, &m3868_MI);
		m3956(__this, L_4, &m3956_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3865(__this, (t2*) &_stringLiteral2, L_5, L_6, &m3865_MI);
		m3958(__this, L_7, &m3958_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		int32_t L_10 = m3866(__this, (t2*) &_stringLiteral296, L_8, L_9, &m3866_MI);
		m3961(__this, L_10, &m3961_MI);
		t9 * L_11 = p0;
		t9* L_12 = V_0;
		int32_t L_13 = m3866(__this, (t2*) &_stringLiteral297, L_11, L_12, &m3866_MI);
		m3963(__this, L_13, &m3963_MI);
		t9 * L_14 = p0;
		t9* L_15 = V_0;
		bool L_16 = m3869(__this, (t2*) &_stringLiteral298, L_14, L_15, &m3869_MI);
		m3965(__this, L_16, &m3965_MI);
		t9 * L_17 = p0;
		t9* L_18 = V_0;
		t786 * L_19 = m4295(__this, (t2*) &_stringLiteral299, L_17, L_18, m4295_MI_var);
		m3969(__this, L_19, &m3969_MI);
		goto IL_009a;
	}

IL_0084:
	{
		t9 * L_20 = p0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = m610(NULL, (t2*) &_stringLiteral287, L_21, &m610_MI);
		t883 * L_23 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_23, L_22, &m4288_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
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

#include "t788.h"
extern TypeInfo t788_TI;
#include "t788MD.h"
extern Il2CppType t788_0_0_0;
extern MethodInfo m3973_MI;
extern MethodInfo m4296_MI;
extern MethodInfo m3974_MI;
struct t770;
extern "C" t788 * m4297 (t770 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4296_GM;
extern Il2CppGenericMethod m4297_GM;


extern MethodInfo m3972_MI;
extern "C" void m3972 (t787 * __this, MethodInfo* method)
{
	{
		m3877(__this, &m3877_MI);
		return;
	}
}
extern "C" t788 * m3973 (t787 * __this, MethodInfo* method)
{
	{
		t788 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3974 (t787 * __this, t788 * p0, MethodInfo* method)
{
	{
		t788 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3975_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4296_MI_var;
extern "C" t2* m3975 (t787 * __this, MethodInfo* method)
{
	static bool m3975_init;
	if (!m3975_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4296_MI_var = il2cpp_codegen_genericmethod_get_method(&m4296_GM);
		m3975_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3875(__this, &m3875_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t788 * L_3 = m3973(__this, &m3973_MI);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4296_MI_var, L_3);
		int32_t L_5 = L_4;
		t9 * L_6 = Box(InitializedTypeInfo(&t125_TI), &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3562(NULL, (t2*) &_stringLiteral300, L_2, &m3562_MI);
		return L_7;
	}
}
extern MethodInfo m3976_MI;
extern TypeInfo* t771_TI_var;
extern MethodInfo* m4297_MI_var;
extern "C" void m3976 (t787 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3976_init;
	if (!m3976_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m4297_MI_var = il2cpp_codegen_genericmethod_get_method(&m4297_GM);
		m3976_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3876(__this, L_0, &m3876_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t771_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t788 * L_5 = m4297(__this, (t2*) &_stringLiteral301, L_3, L_4, m4297_MI_var);
		m3974(__this, L_5, &m3974_MI);
		goto IL_0042;
	}

IL_002c:
	{
		t9 * L_6 = p0;
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m610(NULL, (t2*) &_stringLiteral287, L_7, &m610_MI);
		t883 * L_9 = (t883 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t883_TI));
		m4288(L_9, L_8, &m4288_MI);
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
#include "t769MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t768MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t777MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t778MD.h"



#include "t789.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t789_TI;
#include "t789MD.h"

extern TypeInfo t723_TI;
extern TypeInfo t568_TI;
extern Il2CppType t723_0_0_0;
extern MethodInfo m4298_MI;


extern MethodInfo m3977_MI;
extern TypeInfo* t723_TI_var;
extern "C" void m3977 (t789 * __this, MethodInfo* method)
{
	static bool m3977_init;
	if (!m3977_init)
	{
		t723_TI_var = il2cpp_codegen_class_from_type(&t723_0_0_0);
		m3977_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f0 = ((t723*)SZArrayNew(t723_TI_var, ((int32_t)64)));
		return;
	}
}
extern MethodInfo m3978_MI;
extern "C" t2* m3978 (t789 * __this, MethodInfo* method)
{
	{
		t723* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		t2* L_1 = m4298(NULL, L_0, &m4298_MI);
		return L_1;
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
#include "t886MD.h"
#include "t791MD.h"
#include "t792MD.h"
#include "t161MD.h"
extern Il2CppType t792_0_0_0;
extern MethodInfo m4299_MI;
extern MethodInfo m4300_MI;
extern MethodInfo m4301_MI;
extern MethodInfo m3120_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4302_MI;
extern Il2CppGenericMethod m4301_GM;
extern Il2CppGenericMethod m4302_GM;


extern MethodInfo m3979_MI;
extern TypeInfo* t792_TI_var;
extern MethodInfo* m4301_MI_var;
extern "C" void m3979 (t9 * __this , MethodInfo* method)
{
	static bool m3979_init;
	if (!m3979_init)
	{
		t792_TI_var = il2cpp_codegen_class_from_type(&t792_0_0_0);
		m4301_MI_var = il2cpp_codegen_genericmethod_get_method(&m4301_GM);
		m3979_init = true;
	}
	{
		int32_t L_0 = m4299(NULL, &m4299_MI);
		t791 * L_1 = (t791 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t791_TI));
		m4300(L_1, L_0, &m4300_MI);
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f0 = L_1;
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f1 = 0;
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f2 = 0;
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f3 = (((int64_t)(-1)));
		t792 * L_2 = (t792 *)il2cpp_codegen_object_new (t792_TI_var);
		m4301(L_2, m4301_MI_var);
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f4 = L_2;
		return;
	}
}
extern MethodInfo m3980_MI;
extern "C" uint64_t m3980 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m3120(NULL, &m3120_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		int32_t L_1 = ((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f2;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_0, L_3, &m511_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4207_MI, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
extern MethodInfo m3981_MI;
extern "C" void m3981 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m3982_MI;
extern "C" uint64_t m3982 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_0 = ((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m3983_MI;
extern MethodInfo* m4302_MI_var;
extern "C" t789 * m3983 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	static bool m3983_init;
	if (!m3983_init)
	{
		m4302_MI_var = il2cpp_codegen_genericmethod_get_method(&m4302_GM);
		m3983_init = true;
	}
	t789 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		t792 * L_0 = ((t790_SFs*)InitializedTypeInfo(&t790_TI)->static_fields)->f4;
		uint64_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, t789 ** >::Invoke(m4302_MI_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t789 * L_3 = (t789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t789_TI));
		m3977(L_3, &m3977_MI);
		V_0 = L_3;
	}

IL_0018:
	{
		t789 * L_4 = V_0;
		return L_4;
	}
}
#include "t793.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t793_TI;
#include "t793MD.h"

#include "t794.h"
#include "t795.h"
#include "t724.h"
#include "t720.h"
#include "t8.h"
#include "t721.h"
#include "t796.h"
#include "t797.h"
#include "t798.h"
extern TypeInfo t794_TI;
extern TypeInfo t724_TI;
extern TypeInfo t8_TI;
extern TypeInfo t721_TI;
extern TypeInfo t720_TI;
#include "t794MD.h"
#include "t882MD.h"
#include "t724MD.h"
#include "t168MD.h"
#include "t124MD.h"
#include "t721MD.h"
#include "t720MD.h"
extern Il2CppType t721_0_0_0;
extern MethodInfo m4303_MI;
extern MethodInfo m4304_MI;
extern MethodInfo m3987_MI;
extern MethodInfo m3989_MI;
extern MethodInfo m3985_MI;
extern MethodInfo m4305_MI;
extern MethodInfo m3548_MI;
extern MethodInfo m651_MI;
extern MethodInfo m3549_MI;
extern MethodInfo m3551_MI;
extern MethodInfo m4306_MI;
extern MethodInfo m4307_MI;
extern MethodInfo m3552_MI;
extern MethodInfo m4256_MI;
extern MethodInfo m4308_MI;
extern MethodInfo m3533_MI;
extern MethodInfo m3991_MI;
extern MethodInfo m3993_MI;
extern MethodInfo m3995_MI;
extern MethodInfo m3997_MI;
struct t793;
#include "t887.h"
extern "C" t9 * m4309 (t793 * __this, t720 * p0, t795 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t793;
#include "t888.h"
extern "C" t9 * m4310 (t793 * __this, t720 * p0, t796 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t793;
#include "t889.h"
extern "C" t9 * m4311 (t793 * __this, t720 * p0, t797 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t793;
#include "t890.h"
extern "C" t9 * m4312 (t793 * __this, t720 * p0, t798 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4256_GM;
extern Il2CppGenericMethod m4309_GM;
extern Il2CppGenericMethod m4310_GM;
extern Il2CppGenericMethod m4311_GM;
extern Il2CppGenericMethod m4312_GM;


extern MethodInfo m3984_MI;
extern "C" void m3984 (t793 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_0 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4303(L_0, (t2*) &_stringLiteral302, &m4303_MI);
		__this->f3 = L_0;
		m328(__this, &m328_MI);
		t2* L_1 = m3689(NULL, (t2*) &_stringLiteral303, &m3689_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		bool L_3 = m4304(NULL, L_2, (&V_1), &m4304_MI);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		m611(NULL, (t2*) &_stringLiteral304, &m611_MI);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		m3987(__this, L_4, &m3987_MI);
	}

IL_0044:
	{
		return;
	}
}
extern "C" t794 * m3985 (t793 * __this, MethodInfo* method)
{
	{
		t794 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3986_MI;
extern "C" void m3986 (t793 * __this, t794 * p0, MethodInfo* method)
{
	{
		t794 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m3987 (t793 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		m3981(NULL, L_0, &m3981_MI);
		return;
	}
}
extern MethodInfo m3988_MI;
extern "C" t171 * m3988 (t793 * __this, t2* p0, uint32_t p1, bool p2, t2* p3, t795 * p4, MethodInfo* method)
{
	t774 * V_0 = {0};
	{
		t774 * L_0 = (t774 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t774_TI));
		m3878(L_0, &m3878_MI);
		V_0 = L_0;
		t774 * L_1 = V_0;
		t2* L_2 = p0;
		m3880(L_1, L_2, &m3880_MI);
		t774 * L_3 = V_0;
		uint32_t L_4 = p1;
		m3882(L_3, L_4, &m3882_MI);
		t774 * L_5 = V_0;
		bool L_6 = p2;
		m3884(L_5, L_6, &m3884_MI);
		t774 * L_7 = V_0;
		t2* L_8 = p3;
		m3886(L_7, L_8, &m3886_MI);
		t774 * L_9 = V_0;
		t795 * L_10 = p4;
		t171 * L_11 = m3989(__this, L_9, L_10, &m3989_MI);
		return L_11;
	}
}
extern MethodInfo* m4256_MI_var;
extern MethodInfo* m4309_MI_var;
extern "C" t171 * m3989 (t793 * __this, t774 * p0, t795 * p1, MethodInfo* method)
{
	static bool m3989_init;
	if (!m3989_init)
	{
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m4309_MI_var = il2cpp_codegen_genericmethod_get_method(&m4309_GM);
		m3989_init = true;
	}
	t794 * V_0 = {0};
	t724 * V_1 = {0};
	t720 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		t794 * L_0 = m3985(__this, &m3985_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_1 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4305(L_1, L_0, (t2*) &_stringLiteral305, &m4305_MI);
		V_0 = L_1;
		t794 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral306, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t724 * L_4 = (t724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t724_TI));
		m3548(L_4, &m3548_MI);
		V_1 = L_4;
		t724 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_6 = m3980(NULL, &m3980_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t768_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3549(L_5, (t2*) &_stringLiteral307, L_9, &m3549_MI);
		t724 * L_10 = V_1;
		uint64_t L_11 = m3982(NULL, &m3982_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t769_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3549(L_10, (t2*) &_stringLiteral308, L_14, &m3549_MI);
		t724 * L_15 = V_1;
		m3551(L_15, (t2*) &_stringLiteral284, 0, &m3551_MI);
		t724 * L_16 = V_1;
		m3551(L_16, (t2*) &_stringLiteral309, 0, &m3551_MI);
		t724 * L_17 = V_1;
		t774 * L_18 = p0;
		t2* L_19 = m3879(L_18, &m3879_MI);
		m3549(L_17, (t2*) &_stringLiteral2, L_19, &m3549_MI);
		t724 * L_20 = V_1;
		t774 * L_21 = p0;
		uint32_t L_22 = m3881(L_21, &m3881_MI);
		V_3 = L_22;
		t2* L_23 = m4306((&V_3), &m4306_MI);
		m3549(L_20, (t2*) &_stringLiteral310, L_23, &m3549_MI);
		t724 * L_24 = V_1;
		t774 * L_25 = p0;
		bool L_26 = m3883(L_25, &m3883_MI);
		V_4 = L_26;
		t2* L_27 = m4307((&V_4), &m4307_MI);
		m3549(L_24, (t2*) &_stringLiteral311, L_27, &m3549_MI);
		t724 * L_28 = V_1;
		t774 * L_29 = p0;
		t2* L_30 = m3885(L_29, &m3885_MI);
		m3549(L_28, (t2*) &_stringLiteral312, L_30, &m3549_MI);
		t724 * L_31 = V_1;
		t721 * L_32 = m3552(L_31, &m3552_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_32, (t2*) &_stringLiteral313, (t2*) &_stringLiteral314);
		t794 * L_33 = V_0;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_33);
		t724 * L_35 = V_1;
		t720 * L_36 = (t720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t720_TI));
		m3533(L_36, L_34, L_35, &m3533_MI);
		V_2 = L_36;
		t720 * L_37 = V_2;
		t795 * L_38 = p1;
		t9 * L_39 = m4309(__this, L_37, L_38, m4309_MI_var);
		t171 * L_40 = m605(__this, L_39, &m605_MI);
		return L_40;
	}
}
extern MethodInfo m3990_MI;
extern "C" t171 * m3990 (t793 * __this, uint64_t p0, t2* p1, t796 * p2, MethodInfo* method)
{
	t779 * V_0 = {0};
	{
		t779 * L_0 = (t779 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t779_TI));
		m3904(L_0, &m3904_MI);
		V_0 = L_0;
		t779 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3906(L_1, L_2, &m3906_MI);
		t779 * L_3 = V_0;
		t2* L_4 = p1;
		m3908(L_3, L_4, &m3908_MI);
		t779 * L_5 = V_0;
		t796 * L_6 = p2;
		t171 * L_7 = m3991(__this, L_5, L_6, &m3991_MI);
		return L_7;
	}
}
extern MethodInfo* m4256_MI_var;
extern MethodInfo* m4310_MI_var;
extern "C" t171 * m3991 (t793 * __this, t779 * p0, t796 * p1, MethodInfo* method)
{
	static bool m3991_init;
	if (!m3991_init)
	{
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m4310_MI_var = il2cpp_codegen_genericmethod_get_method(&m4310_GM);
		m3991_init = true;
	}
	t794 * V_0 = {0};
	t724 * V_1 = {0};
	t720 * V_2 = {0};
	{
		t794 * L_0 = m3985(__this, &m3985_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_1 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4305(L_1, L_0, (t2*) &_stringLiteral315, &m4305_MI);
		V_0 = L_1;
		t794 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral316, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t724 * L_4 = (t724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t724_TI));
		m3548(L_4, &m3548_MI);
		V_1 = L_4;
		t724 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_6 = m3980(NULL, &m3980_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t768_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3549(L_5, (t2*) &_stringLiteral307, L_9, &m3549_MI);
		t724 * L_10 = V_1;
		uint64_t L_11 = m3982(NULL, &m3982_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t769_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3549(L_10, (t2*) &_stringLiteral308, L_14, &m3549_MI);
		t724 * L_15 = V_1;
		m3551(L_15, (t2*) &_stringLiteral284, 0, &m3551_MI);
		t724 * L_16 = V_1;
		m3551(L_16, (t2*) &_stringLiteral309, 0, &m3551_MI);
		t724 * L_17 = V_1;
		t779 * L_18 = p0;
		uint64_t L_19 = m3905(L_18, &m3905_MI);
		uint64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t777_TI), &L_20);
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_21);
		m3549(L_17, (t2*) &_stringLiteral283, L_22, &m3549_MI);
		t724 * L_23 = V_1;
		t779 * L_24 = p0;
		t2* L_25 = m3907(L_24, &m3907_MI);
		m3549(L_23, (t2*) &_stringLiteral312, L_25, &m3549_MI);
		t724 * L_26 = V_1;
		t721 * L_27 = m3552(L_26, &m3552_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_27, (t2*) &_stringLiteral313, (t2*) &_stringLiteral314);
		t794 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_28);
		t724 * L_30 = V_1;
		t720 * L_31 = (t720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t720_TI));
		m3533(L_31, L_29, L_30, &m3533_MI);
		V_2 = L_31;
		t720 * L_32 = V_2;
		t796 * L_33 = p1;
		t9 * L_34 = m4310(__this, L_32, L_33, m4310_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
extern MethodInfo m3992_MI;
extern "C" t171 * m3992 (t793 * __this, uint64_t p0, t797 * p1, MethodInfo* method)
{
	t781 * V_0 = {0};
	{
		t781 * L_0 = (t781 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t781_TI));
		m3925(L_0, &m3925_MI);
		V_0 = L_0;
		t781 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3927(L_1, L_2, &m3927_MI);
		t781 * L_3 = V_0;
		t797 * L_4 = p1;
		t171 * L_5 = m3993(__this, L_3, L_4, &m3993_MI);
		return L_5;
	}
}
extern MethodInfo* m4256_MI_var;
extern MethodInfo* m4311_MI_var;
extern "C" t171 * m3993 (t793 * __this, t781 * p0, t797 * p1, MethodInfo* method)
{
	static bool m3993_init;
	if (!m3993_init)
	{
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3993_init = true;
	}
	t794 * V_0 = {0};
	t724 * V_1 = {0};
	t720 * V_2 = {0};
	{
		t794 * L_0 = m3985(__this, &m3985_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_1 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4305(L_1, L_0, (t2*) &_stringLiteral317, &m4305_MI);
		V_0 = L_1;
		t794 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m610(NULL, (t2*) &_stringLiteral318, L_3, &m610_MI);
		m611(NULL, L_4, &m611_MI);
		t724 * L_5 = (t724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t724_TI));
		m3548(L_5, &m3548_MI);
		V_1 = L_5;
		t724 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_7 = m3980(NULL, &m3980_MI);
		uint64_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t768_TI), &L_8);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_9);
		m3549(L_6, (t2*) &_stringLiteral307, L_10, &m3549_MI);
		t724 * L_11 = V_1;
		uint64_t L_12 = m3982(NULL, &m3982_MI);
		uint64_t L_13 = L_12;
		t9 * L_14 = Box(InitializedTypeInfo(&t769_TI), &L_13);
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_14);
		m3549(L_11, (t2*) &_stringLiteral308, L_15, &m3549_MI);
		t724 * L_16 = V_1;
		t781 * L_17 = p0;
		uint64_t L_18 = m3926(L_17, &m3926_MI);
		t789 * L_19 = m3983(NULL, L_18, &m3983_MI);
		t2* L_20 = m3978(L_19, &m3978_MI);
		m3549(L_16, (t2*) &_stringLiteral284, L_20, &m3549_MI);
		t724 * L_21 = V_1;
		m3551(L_21, (t2*) &_stringLiteral309, 0, &m3551_MI);
		t724 * L_22 = V_1;
		t781 * L_23 = p0;
		uint64_t L_24 = m3926(L_23, &m3926_MI);
		uint64_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t777_TI), &L_25);
		t2* L_27 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_26);
		m3549(L_22, (t2*) &_stringLiteral283, L_27, &m3549_MI);
		t724 * L_28 = V_1;
		t721 * L_29 = m3552(L_28, &m3552_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_29, (t2*) &_stringLiteral313, (t2*) &_stringLiteral314);
		t794 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_30);
		t724 * L_32 = V_1;
		t720 * L_33 = (t720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t720_TI));
		m3533(L_33, L_31, L_32, &m3533_MI);
		V_2 = L_33;
		t720 * L_34 = V_2;
		t797 * L_35 = p1;
		t9 * L_36 = m4311(__this, L_34, L_35, m4311_MI_var);
		t171 * L_37 = m605(__this, L_36, &m605_MI);
		return L_37;
	}
}
extern MethodInfo m3994_MI;
extern "C" t171 * m3994 (t793 * __this, uint64_t p0, uint16_t p1, t797 * p2, MethodInfo* method)
{
	t782 * V_0 = {0};
	{
		t782 * L_0 = (t782 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t782_TI));
		m3929(L_0, &m3929_MI);
		V_0 = L_0;
		t782 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3931(L_1, L_2, &m3931_MI);
		t782 * L_3 = V_0;
		uint16_t L_4 = p1;
		m3933(L_3, L_4, &m3933_MI);
		t782 * L_5 = V_0;
		t797 * L_6 = p2;
		t171 * L_7 = m3995(__this, L_5, L_6, &m3995_MI);
		return L_7;
	}
}
extern MethodInfo* m4256_MI_var;
extern MethodInfo* m4311_MI_var;
extern "C" t171 * m3995 (t793 * __this, t782 * p0, t797 * p1, MethodInfo* method)
{
	static bool m3995_init;
	if (!m3995_init)
	{
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3995_init = true;
	}
	t794 * V_0 = {0};
	t724 * V_1 = {0};
	t720 * V_2 = {0};
	{
		t794 * L_0 = m3985(__this, &m3985_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_1 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4305(L_1, L_0, (t2*) &_stringLiteral319, &m4305_MI);
		V_0 = L_1;
		t794 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral320, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t724 * L_4 = (t724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t724_TI));
		m3548(L_4, &m3548_MI);
		V_1 = L_4;
		t724 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_6 = m3980(NULL, &m3980_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t768_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3549(L_5, (t2*) &_stringLiteral307, L_9, &m3549_MI);
		t724 * L_10 = V_1;
		uint64_t L_11 = m3982(NULL, &m3982_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t769_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3549(L_10, (t2*) &_stringLiteral308, L_14, &m3549_MI);
		t724 * L_15 = V_1;
		t782 * L_16 = p0;
		uint64_t L_17 = m3930(L_16, &m3930_MI);
		t789 * L_18 = m3983(NULL, L_17, &m3983_MI);
		t2* L_19 = m3978(L_18, &m3978_MI);
		m3549(L_15, (t2*) &_stringLiteral284, L_19, &m3549_MI);
		t724 * L_20 = V_1;
		m3551(L_20, (t2*) &_stringLiteral309, 0, &m3551_MI);
		t724 * L_21 = V_1;
		t782 * L_22 = p0;
		uint64_t L_23 = m3930(L_22, &m3930_MI);
		uint64_t L_24 = L_23;
		t9 * L_25 = Box(InitializedTypeInfo(&t777_TI), &L_24);
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_25);
		m3549(L_21, (t2*) &_stringLiteral283, L_26, &m3549_MI);
		t724 * L_27 = V_1;
		t782 * L_28 = p0;
		uint16_t L_29 = m3932(L_28, &m3932_MI);
		uint16_t L_30 = L_29;
		t9 * L_31 = Box(InitializedTypeInfo(&t778_TI), &L_30);
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_31);
		m3549(L_27, (t2*) &_stringLiteral285, L_32, &m3549_MI);
		t724 * L_33 = V_1;
		t721 * L_34 = m3552(L_33, &m3552_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_34, (t2*) &_stringLiteral313, (t2*) &_stringLiteral314);
		t794 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_35);
		t724 * L_37 = V_1;
		t720 * L_38 = (t720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t720_TI));
		m3533(L_38, L_36, L_37, &m3533_MI);
		V_2 = L_38;
		t720 * L_39 = V_2;
		t797 * L_40 = p1;
		t9 * L_41 = m4311(__this, L_39, L_40, m4311_MI_var);
		t171 * L_42 = m605(__this, L_41, &m605_MI);
		return L_42;
	}
}
extern MethodInfo m3996_MI;
extern "C" t171 * m3996 (t793 * __this, int32_t p0, int32_t p1, t2* p2, t798 * p3, MethodInfo* method)
{
	t783 * V_0 = {0};
	{
		t783 * L_0 = (t783 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t783_TI));
		m3935(L_0, &m3935_MI);
		V_0 = L_0;
		t783 * L_1 = V_0;
		int32_t L_2 = p0;
		m3939(L_1, L_2, &m3939_MI);
		t783 * L_3 = V_0;
		int32_t L_4 = p1;
		m3937(L_3, L_4, &m3937_MI);
		t783 * L_5 = V_0;
		t2* L_6 = p2;
		m3941(L_5, L_6, &m3941_MI);
		t783 * L_7 = V_0;
		t798 * L_8 = p3;
		t171 * L_9 = m3997(__this, L_7, L_8, &m3997_MI);
		return L_9;
	}
}
extern MethodInfo* m4256_MI_var;
extern MethodInfo* m4312_MI_var;
extern "C" t171 * m3997 (t793 * __this, t783 * p0, t798 * p1, MethodInfo* method)
{
	static bool m3997_init;
	if (!m3997_init)
	{
		m4256_MI_var = il2cpp_codegen_genericmethod_get_method(&m4256_GM);
		m4312_MI_var = il2cpp_codegen_genericmethod_get_method(&m4312_GM);
		m3997_init = true;
	}
	t794 * V_0 = {0};
	t724 * V_1 = {0};
	t720 * V_2 = {0};
	{
		t794 * L_0 = m3985(__this, &m3985_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t794_TI));
		t794 * L_1 = (t794 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t794_TI));
		m4305(L_1, L_0, (t2*) &_stringLiteral321, &m4305_MI);
		V_0 = L_1;
		t794 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral322, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t724 * L_4 = (t724 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t724_TI));
		m3548(L_4, &m3548_MI);
		V_1 = L_4;
		t724 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t790_TI));
		uint64_t L_6 = m3980(NULL, &m3980_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t768_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3549(L_5, (t2*) &_stringLiteral307, L_9, &m3549_MI);
		t724 * L_10 = V_1;
		uint64_t L_11 = m3982(NULL, &m3982_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t769_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3549(L_10, (t2*) &_stringLiteral308, L_14, &m3549_MI);
		t724 * L_15 = V_1;
		m3551(L_15, (t2*) &_stringLiteral284, 0, &m3551_MI);
		t724 * L_16 = V_1;
		m3551(L_16, (t2*) &_stringLiteral309, 0, &m3551_MI);
		t724 * L_17 = V_1;
		t783 * L_18 = p0;
		int32_t L_19 = m3936(L_18, &m3936_MI);
		m3551(L_17, (t2*) &_stringLiteral323, L_19, &m3551_MI);
		t724 * L_20 = V_1;
		t783 * L_21 = p0;
		int32_t L_22 = m3938(L_21, &m3938_MI);
		m3551(L_20, (t2*) &_stringLiteral324, L_22, &m3551_MI);
		t724 * L_23 = V_1;
		t783 * L_24 = p0;
		t2* L_25 = m3940(L_24, &m3940_MI);
		m3549(L_23, (t2*) &_stringLiteral325, L_25, &m3549_MI);
		t724 * L_26 = V_1;
		t721 * L_27 = m3552(L_26, &m3552_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4256_MI_var, L_27, (t2*) &_stringLiteral313, (t2*) &_stringLiteral314);
		t794 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4308_MI, L_28);
		t724 * L_30 = V_1;
		t720 * L_31 = (t720 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t720_TI));
		m3533(L_31, L_29, L_30, &m3533_MI);
		V_2 = L_31;
		t720 * L_32 = V_2;
		t798 * L_33 = p1;
		t9 * L_34 = m4312(__this, L_32, L_33, m4312_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
#include "t799.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t799_TI;
#include "t799MD.h"

#include "t311MD.h"
#include "t807MD.h"
extern MethodInfo m4020_MI;
extern Il2CppGenericMethod m4313_GM;


extern MethodInfo m3998_MI;
extern MethodInfo* m4313_MI_var;
extern "C" void m3998 (t799 * __this, MethodInfo* method)
{
	static bool m3998_init;
	if (!m3998_init)
	{
		m4313_MI_var = il2cpp_codegen_genericmethod_get_method(&m4313_GM);
		m3998_init = true;
	}
	{
		m4313(__this, m4313_MI_var);
		return;
	}
}
extern MethodInfo m3999_MI;
extern "C" t2* m3999 (t799 * __this, MethodInfo* method)
{
	t2* G_B2_0 = {0};
	t2* G_B1_0 = {0};
	{
		t2* L_0 = m4020(NULL, __this, &m4020_MI);
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
#include "t800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t800_TI;
#include "t800MD.h"

#include "t801.h"
#include "t891.h"
#include "t892.h"
#include "t893.h"
#include "t805.h"
#include "t132.h"
extern TypeInfo t801_TI;
extern TypeInfo t893_TI;
extern TypeInfo t132_TI;
extern TypeInfo t806_TI;
extern TypeInfo t805_TI;
extern TypeInfo t76_TI;
#include "t801MD.h"
#include "t805MD.h"
#include "t132MD.h"
extern Il2CppType t801_0_0_0;
extern Il2CppType t893_0_0_0;
extern Il2CppType t806_0_0_0;
extern MethodInfo m4314_MI;
extern MethodInfo m4315_MI;
extern MethodInfo m4316_MI;
extern MethodInfo m4317_MI;
extern MethodInfo m4318_MI;
extern MethodInfo m4319_MI;
extern MethodInfo m4320_MI;
extern MethodInfo m4321_MI;
extern MethodInfo m4322_MI;
extern MethodInfo m339_MI;
extern MethodInfo m4013_MI;
extern MethodInfo m4016_MI;
extern MethodInfo m4323_MI;
extern MethodInfo m364_MI;
extern Il2CppGenericMethod m4324_GM;
extern Il2CppGenericMethod m4325_GM;
extern Il2CppGenericMethod m4314_GM;
extern Il2CppGenericMethod m4315_GM;
extern Il2CppGenericMethod m4316_GM;
extern Il2CppGenericMethod m4317_GM;
extern Il2CppGenericMethod m4326_GM;
extern Il2CppGenericMethod m4318_GM;
extern Il2CppGenericMethod m4319_GM;
extern Il2CppGenericMethod m4320_GM;
extern Il2CppGenericMethod m4327_GM;
extern Il2CppGenericMethod m4328_GM;
extern Il2CppGenericMethod m4321_GM;
extern Il2CppGenericMethod m4322_GM;
extern Il2CppGenericMethod m4323_GM;


extern MethodInfo m4000_MI;
extern TypeInfo* t801_TI_var;
extern MethodInfo* m4317_MI_var;
extern "C" void m4000 (t800 * __this, MethodInfo* method)
{
	static bool m4000_init;
	if (!m4000_init)
	{
		t801_TI_var = il2cpp_codegen_class_from_type(&t801_0_0_0);
		m4317_MI_var = il2cpp_codegen_genericmethod_get_method(&m4317_GM);
		m4000_init = true;
	}
	{
		m336(__this, &m336_MI);
		t801 * L_0 = (t801 *)il2cpp_codegen_object_new (t801_TI_var);
		m4317(L_0, m4317_MI_var);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m4001_MI;
extern TypeInfo* t893_TI_var;
extern MethodInfo* m4326_MI_var;
extern "C" t9 * m4001 (t800 * __this, MethodInfo* method)
{
	static bool m4001_init;
	if (!m4001_init)
	{
		t893_TI_var = il2cpp_codegen_class_from_type(&t893_0_0_0);
		m4326_MI_var = il2cpp_codegen_genericmethod_get_method(&m4326_GM);
		m4001_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t893  L_1 = m4326(L_0, m4326_MI_var);
		t893  L_2 = L_1;
		t9 * L_3 = Box(t893_TI_var, &L_2);
		return (t9 *)L_3;
	}
}
extern MethodInfo m4002_MI;
extern MethodInfo* m4318_MI_var;
extern "C" void m4002 (t800 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4002_init;
	if (!m4002_init)
	{
		m4318_MI_var = il2cpp_codegen_genericmethod_get_method(&m4318_GM);
		m4002_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4318_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4003_MI;
extern MethodInfo* m4324_MI_var;
extern "C" t9* m4003 (t800 * __this, MethodInfo* method)
{
	static bool m4003_init;
	if (!m4003_init)
	{
		m4324_MI_var = il2cpp_codegen_genericmethod_get_method(&m4324_GM);
		m4003_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t891 * L_1 = m4324(L_0, m4324_MI_var);
		return L_1;
	}
}
extern MethodInfo m4004_MI;
extern MethodInfo* m4319_MI_var;
extern "C" bool m4004 (t800 * __this, t2* p0, MethodInfo* method)
{
	static bool m4004_init;
	if (!m4004_init)
	{
		m4319_MI_var = il2cpp_codegen_genericmethod_get_method(&m4319_GM);
		m4004_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4319_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m4005_MI;
extern MethodInfo* m4320_MI_var;
extern "C" bool m4005 (t800 * __this, t2* p0, t9 ** p1, MethodInfo* method)
{
	static bool m4005_init;
	if (!m4005_init)
	{
		m4320_MI_var = il2cpp_codegen_genericmethod_get_method(&m4320_GM);
		m4005_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 ** L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4320_MI_var, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m4006_MI;
extern MethodInfo* m4325_MI_var;
extern "C" t9* m4006 (t800 * __this, MethodInfo* method)
{
	static bool m4006_init;
	if (!m4006_init)
	{
		m4325_MI_var = il2cpp_codegen_genericmethod_get_method(&m4325_GM);
		m4006_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t892 * L_1 = m4325(L_0, m4325_MI_var);
		return L_1;
	}
}
extern MethodInfo m4007_MI;
extern MethodInfo* m4314_MI_var;
extern "C" t9 * m4007 (t800 * __this, t2* p0, MethodInfo* method)
{
	static bool m4007_init;
	if (!m4007_init)
	{
		m4314_MI_var = il2cpp_codegen_genericmethod_get_method(&m4314_GM);
		m4007_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(m4314_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m4008_MI;
extern MethodInfo* m4315_MI_var;
extern "C" void m4008 (t800 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4008_init;
	if (!m4008_init)
	{
		m4315_MI_var = il2cpp_codegen_genericmethod_get_method(&m4315_GM);
		m4008_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4315_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4009_MI;
extern MethodInfo* m4327_MI_var;
extern MethodInfo* m4328_MI_var;
extern MethodInfo* m4318_MI_var;
extern "C" void m4009 (t800 * __this, t805  p0, MethodInfo* method)
{
	static bool m4009_init;
	if (!m4009_init)
	{
		m4327_MI_var = il2cpp_codegen_genericmethod_get_method(&m4327_GM);
		m4328_MI_var = il2cpp_codegen_genericmethod_get_method(&m4328_GM);
		m4318_MI_var = il2cpp_codegen_genericmethod_get_method(&m4318_GM);
		m4009_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = m4327((&p0), m4327_MI_var);
		t9 * L_2 = m4328((&p0), m4328_MI_var);
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4318_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4010_MI;
extern MethodInfo* m4321_MI_var;
extern "C" void m4010 (t800 * __this, MethodInfo* method)
{
	static bool m4010_init;
	if (!m4010_init)
	{
		m4321_MI_var = il2cpp_codegen_genericmethod_get_method(&m4321_GM);
		m4010_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(m4321_MI_var, L_0);
		return;
	}
}
extern MethodInfo m4011_MI;
extern MethodInfo* m4327_MI_var;
extern MethodInfo* m4322_MI_var;
extern MethodInfo* m4314_MI_var;
extern MethodInfo* m4328_MI_var;
extern "C" bool m4011 (t800 * __this, t805  p0, MethodInfo* method)
{
	static bool m4011_init;
	if (!m4011_init)
	{
		m4327_MI_var = il2cpp_codegen_genericmethod_get_method(&m4327_GM);
		m4322_MI_var = il2cpp_codegen_genericmethod_get_method(&m4322_GM);
		m4314_MI_var = il2cpp_codegen_genericmethod_get_method(&m4314_GM);
		m4328_MI_var = il2cpp_codegen_genericmethod_get_method(&m4328_GM);
		m4011_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = m4327((&p0), m4327_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4322_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		t801 * L_3 = (__this->f0);
		t2* L_4 = m4327((&p0), m4327_MI_var);
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(m4314_MI_var, L_3, L_4);
		t9 * L_6 = m4328((&p0), m4328_MI_var);
		G_B3_0 = ((((t9*)(t9 *)L_5) == ((t9*)(t9 *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
extern MethodInfo m4012_MI;
extern MethodInfo* m4323_MI_var;
extern "C" void m4012 (t800 * __this, t804* p0, int32_t p1, MethodInfo* method)
{
	static bool m4012_init;
	if (!m4012_init)
	{
		m4323_MI_var = il2cpp_codegen_genericmethod_get_method(&m4323_GM);
		m4012_init = true;
	}
	int32_t V_0 = 0;
	t805  V_1 = {0};
	t9* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t804* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral330, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4013_MI, __this);
		V_0 = L_2;
		t9* L_3 = (t9*)VirtFuncInvoker0< t9* >::Invoke(&m4016_MI, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			t9* L_4 = V_2;
			t805  L_5 = (t805 )InterfaceFuncInvoker0< t805  >::Invoke(m4323_MI_var, L_4);
			V_1 = L_5;
			t804* L_6 = p0;
			int32_t L_7 = p1;
			int32_t L_8 = L_7;
			p1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t805  L_9 = V_1;
			*((t805 *)(t805 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			t9* L_12 = V_2;
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			t9* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			t9* L_15 = V_2;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_0068:
	{
		return;
	}
}
extern MethodInfo* m4316_MI_var;
extern "C" int32_t m4013 (t800 * __this, MethodInfo* method)
{
	static bool m4013_init;
	if (!m4013_init)
	{
		m4316_MI_var = il2cpp_codegen_genericmethod_get_method(&m4316_GM);
		m4013_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4316_MI_var, L_0);
		return L_1;
	}
}
extern MethodInfo m4014_MI;
extern "C" bool m4014 (t800 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m4015_MI;
extern MethodInfo* m4327_MI_var;
extern MethodInfo* m4319_MI_var;
extern "C" bool m4015 (t800 * __this, t805  p0, MethodInfo* method)
{
	static bool m4015_init;
	if (!m4015_init)
	{
		m4327_MI_var = il2cpp_codegen_genericmethod_get_method(&m4327_GM);
		m4319_MI_var = il2cpp_codegen_genericmethod_get_method(&m4319_GM);
		m4015_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t2* L_1 = m4327((&p0), m4327_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4319_MI_var, L_0, L_1);
		return L_2;
	}
}
extern TypeInfo* t893_TI_var;
extern MethodInfo* m4326_MI_var;
extern "C" t9* m4016 (t800 * __this, MethodInfo* method)
{
	static bool m4016_init;
	if (!m4016_init)
	{
		t893_TI_var = il2cpp_codegen_class_from_type(&t893_0_0_0);
		m4326_MI_var = il2cpp_codegen_genericmethod_get_method(&m4326_GM);
		m4016_init = true;
	}
	{
		t801 * L_0 = (__this->f0);
		t893  L_1 = m4326(L_0, m4326_MI_var);
		t893  L_2 = L_1;
		t9 * L_3 = Box(t893_TI_var, &L_2);
		return (t9*)L_3;
	}
}
extern MethodInfo m4017_MI;
extern "C" t2* m4017 (t800 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4020(NULL, __this, &m4020_MI);
		return L_0;
	}
}
#include "t807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t807_TI;

#include "t809.h"
#include "t315.h"
#include "t894.h"
#include "t895.h"
#include "t896.h"
#include "t156.h"
#include "t292.h"
#include "t877.h"
#include "t897.h"
#include "t186.h"
#include "t327.h"
extern TypeInfo t809_TI;
extern TypeInfo t315_TI;
extern TypeInfo t311_TI;
extern TypeInfo t894_TI;
extern TypeInfo t896_TI;
extern TypeInfo t305_TI;
extern TypeInfo t296_TI;
extern TypeInfo t156_TI;
extern TypeInfo t292_TI;
extern TypeInfo t802_TI;
extern TypeInfo t803_TI;
extern TypeInfo t898_TI;
extern TypeInfo t658_TI;
extern TypeInfo t808_TI;
extern TypeInfo t899_TI;
extern TypeInfo t882_TI;
extern TypeInfo t897_TI;
extern TypeInfo t186_TI;
extern TypeInfo t327_TI;
#include "t809MD.h"
#include "t315MD.h"
#include "t894MD.h"
#include "t896MD.h"
#include "t156MD.h"
#include "t292MD.h"
#include "t125MD.h"
#include "t897MD.h"
extern Il2CppType t311_0_0_0;
extern Il2CppType t305_0_0_0;
extern Il2CppType t898_0_0_0;
extern MethodInfo m4038_MI;
extern MethodInfo m4039_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m4023_MI;
extern MethodInfo m4330_MI;
extern MethodInfo m4031_MI;
extern MethodInfo m1156_MI;
extern MethodInfo m4037_MI;
extern MethodInfo m4019_MI;
extern MethodInfo m4030_MI;
extern MethodInfo m4029_MI;
extern MethodInfo m4024_MI;
extern MethodInfo m4331_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m4026_MI;
extern MethodInfo m4021_MI;
extern MethodInfo m4022_MI;
extern MethodInfo m4028_MI;
extern MethodInfo m2733_MI;
extern MethodInfo m4333_MI;
extern MethodInfo m4334_MI;
extern MethodInfo m4335_MI;
extern MethodInfo m4025_MI;
extern MethodInfo m1154_MI;
extern MethodInfo m4336_MI;
extern MethodInfo m2742_MI;
extern MethodInfo m1090_MI;
extern MethodInfo m4027_MI;
extern MethodInfo m4244_MI;
extern MethodInfo m4337_MI;
extern MethodInfo m4338_MI;
extern MethodInfo m2770_MI;
extern MethodInfo m4034_MI;
extern MethodInfo m4339_MI;
extern MethodInfo m4340_MI;
extern MethodInfo m4032_MI;
extern MethodInfo m4341_MI;
extern MethodInfo m4342_MI;
extern MethodInfo m4033_MI;
extern MethodInfo m4036_MI;
extern MethodInfo m4035_MI;
extern MethodInfo m4343_MI;
extern MethodInfo m4344_MI;
extern MethodInfo m361_MI;
extern MethodInfo m4345_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m4347_MI;
extern MethodInfo m4348_MI;
extern MethodInfo m4349_MI;
extern MethodInfo m4350_MI;
extern MethodInfo m4351_MI;
extern MethodInfo m4352_MI;
extern Il2CppGenericMethod m4331_GM;
extern Il2CppGenericMethod m4332_GM;
extern Il2CppGenericMethod m4339_GM;
extern Il2CppGenericMethod m4340_GM;
extern Il2CppGenericMethod m4341_GM;
extern Il2CppGenericMethod m4342_GM;


extern MethodInfo m4018_MI;
extern "C" bool m4018 (t9 * __this , t2* p0, t9 ** p1, MethodInfo* method)
{
	bool V_0 = false;
	t305* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		t2* L_0 = p0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		t2* L_1 = p0;
		t305* L_2 = m4329(L_1, &m4329_MI);
		V_1 = L_2;
		V_2 = 0;
		t9 ** L_3 = p1;
		t305* L_4 = V_1;
		t9 * L_5 = m4023(NULL, L_4, (&V_2), (&V_0), &m4023_MI);
		*((t9 **)(L_3)) = (t9 *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		t9 ** L_6 = p1;
		*((t9 **)(L_6)) = (t9 *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
extern "C" t2* m4019 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	t315 * V_0 = {0};
	bool V_1 = false;
	t2* G_B3_0 = {0};
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_0, ((int32_t)2000), &m4330_MI);
		V_0 = L_0;
		t9 * L_1 = p1;
		t9 * L_2 = p0;
		t315 * L_3 = V_0;
		bool L_4 = m4031(NULL, L_1, L_2, L_3, &m4031_MI);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		t315 * L_6 = V_0;
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((t2*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
extern "C" t2* m4020 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = m4037(NULL, &m4037_MI);
		t2* L_2 = m4019(NULL, L_0, L_1, &m4019_MI);
		return L_2;
	}
}
extern MethodInfo* m4331_MI_var;
extern "C" t9* m4021 (t9 * __this , t305* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	static bool m4021_init;
	if (!m4021_init)
	{
		m4331_MI_var = il2cpp_codegen_genericmethod_get_method(&m4331_GM);
		m4021_init = true;
	}
	t9* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	t2* V_3 = {0};
	t9 * V_4 = {0};
	{
		t800 * L_0 = (t800 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t800_TI));
		m4000(L_0, &m4000_MI);
		V_0 = L_0;
		t305* L_1 = p0;
		int32_t* L_2 = p1;
		m4030(NULL, L_1, L_2, &m4030_MI);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		t305* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m4029(NULL, L_3, (*((int32_t*)L_4)), &m4029_MI);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = p2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (t9*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		t305* L_9 = p0;
		int32_t* L_10 = p1;
		m4030(NULL, L_9, L_10, &m4030_MI);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		t305* L_12 = p0;
		int32_t* L_13 = p1;
		m4030(NULL, L_12, L_13, &m4030_MI);
		t9* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		t305* L_15 = p0;
		int32_t* L_16 = p1;
		bool* L_17 = p2;
		t2* L_18 = m4024(NULL, L_15, L_16, L_17, &m4024_MI);
		V_3 = L_18;
		bool* L_19 = p2;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = p2;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (t9*)NULL;
	}

IL_0063:
	{
		t305* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = m4030(NULL, L_21, L_22, &m4030_MI);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = p2;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (t9*)NULL;
	}

IL_0077:
	{
		t305* L_26 = p0;
		int32_t* L_27 = p1;
		bool* L_28 = p2;
		t9 * L_29 = m4023(NULL, L_26, L_27, L_28, &m4023_MI);
		V_4 = L_29;
		bool* L_30 = p2;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = p2;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (t9*)NULL;
	}

IL_008d:
	{
		t9* L_32 = V_0;
		t2* L_33 = V_3;
		t9 * L_34 = V_4;
		InterfaceActionInvoker2< t2*, t9 * >::Invoke(m4331_MI_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		t9* L_36 = V_0;
		return L_36;
	}
}
extern MethodInfo* m4332_MI_var;
extern "C" t799 * m4022 (t9 * __this , t305* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	static bool m4022_init;
	if (!m4022_init)
	{
		m4332_MI_var = il2cpp_codegen_genericmethod_get_method(&m4332_GM);
		m4022_init = true;
	}
	t799 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t9 * V_3 = {0};
	{
		t799 * L_0 = (t799 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t799_TI));
		m3998(L_0, &m3998_MI);
		V_0 = L_0;
		t305* L_1 = p0;
		int32_t* L_2 = p1;
		m4030(NULL, L_1, L_2, &m4030_MI);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		t305* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m4029(NULL, L_3, (*((int32_t*)L_4)), &m4029_MI);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = p2;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (t799 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		t305* L_9 = p0;
		int32_t* L_10 = p1;
		m4030(NULL, L_9, L_10, &m4030_MI);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		t305* L_12 = p0;
		int32_t* L_13 = p1;
		m4030(NULL, L_12, L_13, &m4030_MI);
		goto IL_0070;
	}

IL_0051:
	{
		t305* L_14 = p0;
		int32_t* L_15 = p1;
		bool* L_16 = p2;
		t9 * L_17 = m4023(NULL, L_14, L_15, L_16, &m4023_MI);
		V_3 = L_17;
		bool* L_18 = p2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (t799 *)NULL;
	}

IL_0063:
	{
		t799 * L_19 = V_0;
		t9 * L_20 = V_3;
		VirtActionInvoker1< t9 * >::Invoke(m4332_MI_var, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		t799 * L_22 = V_0;
		return L_22;
	}
}
extern "C" t9 * m4023 (t9 * __this , t305* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t305* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = m4029(NULL, L_0, (*((int32_t*)L_1)), &m4029_MI);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		t305* L_4 = p0;
		int32_t* L_5 = p1;
		bool* L_6 = p2;
		t2* L_7 = m4024(NULL, L_4, L_5, L_6, &m4024_MI);
		return L_7;
	}

IL_004d:
	{
		t305* L_8 = p0;
		int32_t* L_9 = p1;
		bool* L_10 = p2;
		t9 * L_11 = m4026(NULL, L_8, L_9, L_10, &m4026_MI);
		return L_11;
	}

IL_0056:
	{
		t305* L_12 = p0;
		int32_t* L_13 = p1;
		bool* L_14 = p2;
		t9* L_15 = m4021(NULL, L_12, L_13, L_14, &m4021_MI);
		return L_15;
	}

IL_005f:
	{
		t305* L_16 = p0;
		int32_t* L_17 = p1;
		bool* L_18 = p2;
		t799 * L_19 = m4022(NULL, L_16, L_17, L_18, &m4022_MI);
		return L_19;
	}

IL_0068:
	{
		t305* L_20 = p0;
		int32_t* L_21 = p1;
		m4030(NULL, L_20, L_21, &m4030_MI);
		bool L_22 = 1;
		t9 * L_23 = Box(InitializedTypeInfo(&t124_TI), &L_22);
		return L_23;
	}

IL_0077:
	{
		t305* L_24 = p0;
		int32_t* L_25 = p1;
		m4030(NULL, L_24, L_25, &m4030_MI);
		bool L_26 = 0;
		t9 * L_27 = Box(InitializedTypeInfo(&t124_TI), &L_26);
		return L_27;
	}

IL_0086:
	{
		t305* L_28 = p0;
		int32_t* L_29 = p1;
		m4030(NULL, L_28, L_29, &m4030_MI);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = p2;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
extern "C" t2* m4024 (t9 * __this , t305* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	t315 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		t315 * L_0 = (t315 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t315_TI));
		m4330(L_0, ((int32_t)2000), &m4330_MI);
		V_0 = L_0;
		t305* L_1 = p0;
		int32_t* L_2 = p1;
		m4028(NULL, L_1, L_2, &m4028_MI);
		t305* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t* L_5 = p1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = p1;
		t305* L_10 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((t121 *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		t305* L_11 = p0;
		int32_t* L_12 = p1;
		int32_t* L_13 = p1;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = p1;
		t305* L_20 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((t121 *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		t305* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t* L_23 = p1;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		t315 * L_28 = V_0;
		m2733(L_28, ((int32_t)34), &m2733_MI);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		t315 * L_30 = V_0;
		m2733(L_30, ((int32_t)92), &m2733_MI);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		t315 * L_32 = V_0;
		m2733(L_32, ((int32_t)47), &m2733_MI);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		t315 * L_34 = V_0;
		m2733(L_34, 8, &m2733_MI);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		t315 * L_36 = V_0;
		m2733(L_36, ((int32_t)12), &m2733_MI);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		t315 * L_38 = V_0;
		m2733(L_38, ((int32_t)10), &m2733_MI);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		t315 * L_40 = V_0;
		m2733(L_40, ((int32_t)13), &m2733_MI);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		t315 * L_42 = V_0;
		m2733(L_42, ((int32_t)9), &m2733_MI);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		t305* L_44 = p0;
		int32_t* L_45 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = p2;
		t305* L_48 = p0;
		int32_t* L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_50 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_50 = m4353(L_50, L_48, (*((int32_t*)L_49)), 4, &m4333_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_51 = m4334(NULL, &m4334_MI);
		bool L_52 = m4335(NULL, L_50, ((int32_t)515), L_51, (&V_4), &m4335_MI);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_55 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = p1;
		int32_t* L_59 = p1;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		t305* L_60 = p0;
		int32_t* L_61 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		t305* L_63 = p0;
		int32_t* L_64 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_65 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_65 = m4353(L_65, L_63, (*((int32_t*)L_64)), 2, &m4333_MI);
		bool L_66 = m331(NULL, L_65, (t2*) &_stringLiteral331, &m331_MI);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		t305* L_67 = p0;
		int32_t* L_68 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_69 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_69 = m4353(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, &m4333_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_70 = m4334(NULL, &m4334_MI);
		bool L_71 = m4335(NULL, L_69, ((int32_t)515), L_70, (&V_5), &m4335_MI);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		t315 * L_74 = V_0;
		uint32_t L_75 = V_4;
		m2733(L_74, (((uint16_t)L_75)), &m2733_MI);
		t315 * L_76 = V_0;
		uint32_t L_77 = V_5;
		m2733(L_76, (((uint16_t)L_77)), &m2733_MI);
		int32_t* L_78 = p1;
		int32_t* L_79 = p1;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = p2;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_81 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		return L_81;
	}

IL_020e:
	{
		t315 * L_82 = V_0;
		uint32_t L_83 = V_4;
		t2* L_84 = m4025(NULL, L_83, &m4025_MI);
		m1154(L_82, L_84, &m1154_MI);
		int32_t* L_85 = p1;
		int32_t* L_86 = p1;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		t315 * L_87 = V_0;
		uint16_t L_88 = V_1;
		m2733(L_87, L_88, &m2733_MI);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = p2;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (t2*)NULL;
	}

IL_024a:
	{
		t315 * L_92 = V_0;
		t2* L_93 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1156_MI, L_92);
		return L_93;
	}
}
extern TypeInfo* t305_TI_var;
extern "C" t2* m4025 (t9 * __this , int32_t p0, MethodInfo* method)
{
	static bool m4025_init;
	if (!m4025_init)
	{
		t305_TI_var = il2cpp_codegen_class_from_type(&t305_0_0_0);
		m4025_init = true;
	}
	{
		int32_t L_0 = p0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = p0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		t896 * L_2 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_2, (t2*) &_stringLiteral332, (t2*) &_stringLiteral333, &m4336_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = p0;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = p0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		t896 * L_5 = (t896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t896_TI));
		m4336(L_5, (t2*) &_stringLiteral332, (t2*) &_stringLiteral334, &m4336_MI);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = p0;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_8 = m2792(L_8, (((uint16_t)L_7)), 1, &m2742_MI);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = p0;
		p0 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		t305* L_10 = ((t305*)SZArrayNew(t305_TI_var, 2));
		int32_t L_11 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		t305* L_12 = L_10;
		int32_t L_13 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_14 = m1102(L_14, L_12, &m1090_MI);
		return L_14;
	}
}
extern "C" t9 * m4026 (t9 * __this , t305* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	t2* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		t305* L_0 = p0;
		int32_t* L_1 = p1;
		m4028(NULL, L_0, L_1, &m4028_MI);
		t305* L_2 = p0;
		int32_t* L_3 = p1;
		int32_t L_4 = m4027(NULL, L_2, (*((int32_t*)L_3)), &m4027_MI);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = p1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		t305* L_7 = p0;
		int32_t* L_8 = p1;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_10 = m4353(L_10, L_7, (*((int32_t*)L_8)), L_9, &m4333_MI);
		V_3 = L_10;
		t2* L_11 = V_3;
		int32_t L_12 = m4244(L_11, (t2*) &_stringLiteral140, 5, &m4244_MI);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		t2* L_13 = V_3;
		int32_t L_14 = m4244(L_13, (t2*) &_stringLiteral335, 5, &m4244_MI);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = p2;
		t305* L_16 = p0;
		int32_t* L_17 = p1;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4353(L_19, L_16, (*((int32_t*)L_17)), L_18, &m4333_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_20 = m4334(NULL, &m4334_MI);
		bool L_21 = m4337(NULL, L_19, ((int32_t)511), L_20, (&V_4), &m4337_MI);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t156_TI), &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = p2;
		t305* L_26 = p0;
		int32_t* L_27 = p1;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_29 = m4353(L_29, L_26, (*((int32_t*)L_27)), L_28, &m4333_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_30 = m4334(NULL, &m4334_MI);
		bool L_31 = m4338(NULL, L_29, ((int32_t)511), L_30, (&V_5), &m4338_MI);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t292_TI), &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = p1;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		t9 * L_37 = V_2;
		return L_37;
	}
}
extern "C" int32_t m4027 (t9 * __this , t305* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		t305* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = m2770((t2*) &_stringLiteral336, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), &m2770_MI);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		t305* L_7 = p0;
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
extern "C" void m4028 (t9 * __this , t305* p0, int32_t* p1, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		t305* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = (*((int32_t*)L_1));
		int32_t L_3 = m2770((t2*) &_stringLiteral337, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), &m2770_MI);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = p1;
		int32_t* L_5 = p1;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = p1;
		t305* L_7 = p0;
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((t121 *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
extern "C" int32_t m4029 (t9 * __this , t305* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		t305* L_1 = p0;
		int32_t L_2 = m4030(NULL, L_1, (&V_0), &m4030_MI);
		return L_2;
	}
}
extern "C" int32_t m4030 (t9 * __this , t305* p0, int32_t* p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t305* L_0 = p0;
		int32_t* L_1 = p1;
		m4028(NULL, L_0, L_1, &m4028_MI);
		int32_t* L_2 = p1;
		t305* L_3 = p0;
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((t121 *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		t305* L_4 = p0;
		int32_t* L_5 = p1;
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = p1;
		int32_t* L_8 = p1;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = p1;
		int32_t* L_14 = p1;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		t305* L_15 = p0;
		int32_t* L_16 = p1;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		t305* L_18 = p0;
		int32_t* L_19 = p1;
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		t305* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		t305* L_24 = p0;
		int32_t* L_25 = p1;
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		t305* L_27 = p0;
		int32_t* L_28 = p1;
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		t305* L_30 = p0;
		int32_t* L_31 = p1;
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = p1;
		int32_t* L_34 = p1;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		t305* L_36 = p0;
		int32_t* L_37 = p1;
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		t305* L_39 = p0;
		int32_t* L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		t305* L_42 = p0;
		int32_t* L_43 = p1;
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		t305* L_45 = p0;
		int32_t* L_46 = p1;
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = p1;
		int32_t* L_49 = p1;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		t305* L_51 = p0;
		int32_t* L_52 = p1;
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		t305* L_54 = p0;
		int32_t* L_55 = p1;
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		t305* L_57 = p0;
		int32_t* L_58 = p1;
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		t305* L_60 = p0;
		int32_t* L_61 = p1;
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = p1;
		int32_t* L_64 = p1;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
extern TypeInfo* t771_TI_var;
extern TypeInfo* t898_TI_var;
extern MethodInfo* m4339_MI_var;
extern MethodInfo* m4340_MI_var;
extern MethodInfo* m4341_MI_var;
extern MethodInfo* m4342_MI_var;
extern "C" bool m4031 (t9 * __this , t9 * p0, t9 * p1, t315 * p2, MethodInfo* method)
{
	static bool m4031_init;
	if (!m4031_init)
	{
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		t898_TI_var = il2cpp_codegen_class_from_type(&t898_0_0_0);
		m4339_MI_var = il2cpp_codegen_genericmethod_get_method(&m4339_GM);
		m4340_MI_var = il2cpp_codegen_genericmethod_get_method(&m4340_GM);
		m4341_MI_var = il2cpp_codegen_genericmethod_get_method(&m4341_GM);
		m4342_MI_var = il2cpp_codegen_genericmethod_get_method(&m4342_GM);
		m4031_init = true;
	}
	bool V_0 = false;
	t2* V_1 = {0};
	t9* V_2 = {0};
	t9* V_3 = {0};
	t9 * V_4 = {0};
	t9 * V_5 = {0};
	t315 * G_B13_0 = {0};
	t315 * G_B12_0 = {0};
	t2* G_B14_0 = {0};
	t315 * G_B14_1 = {0};
	{
		V_0 = 1;
		t9 * L_0 = p1;
		V_1 = ((t2*)IsInst(L_0, (&t2_TI)));
		t2* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		t2* L_2 = V_1;
		t315 * L_3 = p2;
		bool L_4 = m4034(NULL, L_2, L_3, &m4034_MI);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		t9 * L_5 = p1;
		V_2 = ((t9*)IsInst(L_5, t771_TI_var));
		t9* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		t9 * L_7 = p0;
		t9* L_8 = V_2;
		t9* L_9 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4339_MI_var, L_8);
		t9* L_10 = V_2;
		t9* L_11 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4340_MI_var, L_10);
		t315 * L_12 = p2;
		bool L_13 = m4032(NULL, L_7, L_9, L_11, L_12, &m4032_MI);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		t9 * L_14 = p1;
		V_3 = ((t9*)IsInst(L_14, t898_TI_var));
		t9* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		t9 * L_16 = p0;
		t9* L_17 = V_3;
		t9* L_18 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4341_MI_var, L_17);
		t9* L_19 = V_3;
		t9* L_20 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4342_MI_var, L_19);
		t315 * L_21 = p2;
		bool L_22 = m4032(NULL, L_16, L_18, L_20, L_21, &m4032_MI);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		t9 * L_23 = p1;
		V_4 = ((t9 *)IsInst(L_23, InitializedTypeInfo(&t658_TI)));
		t9 * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		t9 * L_25 = p0;
		t9 * L_26 = V_4;
		t315 * L_27 = p2;
		bool L_28 = m4033(NULL, L_25, L_26, L_27, &m4033_MI);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		t9 * L_29 = p1;
		bool L_30 = m4036(NULL, L_29, &m4036_MI);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		t9 * L_31 = p1;
		t315 * L_32 = p2;
		bool L_33 = m4035(NULL, L_31, L_32, &m4035_MI);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		t9 * L_34 = p1;
		if (!((t9 *)IsInst(L_34, InitializedTypeInfo(&t124_TI))))
		{
			goto IL_00cf;
		}
	}
	{
		t315 * L_35 = p2;
		t9 * L_36 = p1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&t124_TI))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (t2*) &_stringLiteral338;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (t2*) &_stringLiteral339;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		m1154(G_B14_1, G_B14_0, &m1154_MI);
		goto IL_0100;
	}

IL_00cf:
	{
		t9 * L_37 = p1;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		t315 * L_38 = p2;
		m1154(L_38, (t2*) &_stringLiteral340, &m1154_MI);
		goto IL_0100;
	}

IL_00e6:
	{
		t9 * L_39 = p0;
		t9 * L_40 = p1;
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, t9 *, t9 ** >::Invoke(&m4343_MI, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		t9 * L_43 = p0;
		t9 * L_44 = V_5;
		t315 * L_45 = p2;
		m4031(NULL, L_43, L_44, L_45, &m4031_MI);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
extern "C" bool m4032 (t9 * __this , t9 * p0, t9 * p1, t9 * p2, t315 * p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	bool V_2 = false;
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t2* V_5 = {0};
	{
		t315 * L_0 = p3;
		m1154(L_0, (t2*) &_stringLiteral341, &m1154_MI);
		t9 * L_1 = p1;
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4344_MI, L_1);
		V_0 = L_2;
		t9 * L_3 = p2;
		t9 * L_4 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4344_MI, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		t9 * L_5 = V_0;
		t9 * L_6 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_5);
		V_3 = L_6;
		t9 * L_7 = V_1;
		t9 * L_8 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		t315 * L_10 = p3;
		m1154(L_10, (t2*) &_stringLiteral342, &m1154_MI);
	}

IL_0042:
	{
		t9 * L_11 = V_3;
		V_5 = ((t2*)IsInst(L_11, (&t2_TI)));
		t2* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		t2* L_13 = V_5;
		t315 * L_14 = p3;
		m4034(NULL, L_13, L_14, &m4034_MI);
		goto IL_006f;
	}

IL_005f:
	{
		t9 * L_15 = p0;
		t9 * L_16 = V_4;
		t315 * L_17 = p3;
		bool L_18 = m4031(NULL, L_15, L_16, L_17, &m4031_MI);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		t315 * L_19 = p3;
		m1154(L_19, (t2*) &_stringLiteral343, &m1154_MI);
		t9 * L_20 = p0;
		t9 * L_21 = V_4;
		t315 * L_22 = p3;
		bool L_23 = m4031(NULL, L_20, L_21, L_22, &m4031_MI);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		t9 * L_24 = V_0;
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		t9 * L_26 = V_1;
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		t315 * L_28 = p3;
		m1154(L_28, (t2*) &_stringLiteral178, &m1154_MI);
		return 1;
	}
}
extern "C" bool m4033 (t9 * __this , t9 * p0, t9 * p1, t315 * p2, MethodInfo* method)
{
	bool V_0 = false;
	t9 * V_1 = {0};
	t9 * V_2 = {0};
	bool V_3 = false;
	t9 * V_4 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t315 * L_0 = p2;
		m1154(L_0, (t2*) &_stringLiteral344, &m1154_MI);
		V_0 = 1;
		t9 * L_1 = p1;
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4344_MI, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			t9 * L_3 = V_2;
			t9 * L_4 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m361_MI, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			t315 * L_6 = p2;
			m1154(L_6, (t2*) &_stringLiteral342, &m1154_MI);
		}

IL_0033:
		{
			t9 * L_7 = p0;
			t9 * L_8 = V_1;
			t315 * L_9 = p2;
			bool L_10 = m4031(NULL, L_7, L_8, L_9, &m4031_MI);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			t9 * L_11 = V_2;
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&m364_MI, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (t138 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			t9 * L_13 = V_2;
			V_4 = ((t9 *)IsInst(L_13, InitializedTypeInfo(&t137_TI)));
			t9 * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			t9 * L_15 = V_4;
			InterfaceActionInvoker0::Invoke(&m365_MI, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(t138 *)
	}

IL_006e:
	{
		t315 * L_16 = p2;
		m1154(L_16, (t2*) &_stringLiteral345, &m1154_MI);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
extern "C" bool m4034 (t9 * __this , t2* p0, t315 * p1, MethodInfo* method)
{
	t305* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t315 * L_0 = p1;
		m1154(L_0, (t2*) &_stringLiteral244, &m1154_MI);
		t2* L_1 = p0;
		t305* L_2 = m4329(L_1, &m4329_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		t305* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		t315 * L_7 = p1;
		m1154(L_7, (t2*) &_stringLiteral346, &m1154_MI);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		t315 * L_9 = p1;
		m1154(L_9, (t2*) &_stringLiteral347, &m1154_MI);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		t315 * L_11 = p1;
		m1154(L_11, (t2*) &_stringLiteral348, &m1154_MI);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		t315 * L_13 = p1;
		m1154(L_13, (t2*) &_stringLiteral349, &m1154_MI);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		t315 * L_15 = p1;
		m1154(L_15, (t2*) &_stringLiteral350, &m1154_MI);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		t315 * L_17 = p1;
		m1154(L_17, (t2*) &_stringLiteral351, &m1154_MI);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		t315 * L_19 = p1;
		m1154(L_19, (t2*) &_stringLiteral352, &m1154_MI);
		goto IL_00d4;
	}

IL_00cc:
	{
		t315 * L_20 = p1;
		uint16_t L_21 = V_2;
		m2733(L_20, L_21, &m2733_MI);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		t305* L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((t121 *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t315 * L_25 = p1;
		m1154(L_25, (t2*) &_stringLiteral244, &m1154_MI);
		return 1;
	}
}
extern "C" bool m4035 (t9 * __this , t9 * p0, t315 * p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	t897  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t292_TI))))
		{
			goto IL_002a;
		}
	}
	{
		t315 * L_1 = p1;
		t9 * L_2 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&t292_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_3 = m4334(NULL, &m4334_MI);
		t2* L_4 = m4345((&V_0), L_3, &m4345_MI);
		m1154(L_1, L_4, &m1154_MI);
		goto IL_0123;
	}

IL_002a:
	{
		t9 * L_5 = p0;
		if (!((t9 *)IsInst(L_5, InitializedTypeInfo(&t882_TI))))
		{
			goto IL_0054;
		}
	}
	{
		t315 * L_6 = p1;
		t9 * L_7 = p0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&t882_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_8 = m4334(NULL, &m4334_MI);
		t2* L_9 = m4346((&V_1), L_8, &m4346_MI);
		m1154(L_6, L_9, &m1154_MI);
		goto IL_0123;
	}

IL_0054:
	{
		t9 * L_10 = p0;
		if (!((t9 *)IsInst(L_10, InitializedTypeInfo(&t125_TI))))
		{
			goto IL_007e;
		}
	}
	{
		t315 * L_11 = p1;
		t9 * L_12 = p0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&t125_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_13 = m4334(NULL, &m4334_MI);
		t2* L_14 = m4347((&V_2), L_13, &m4347_MI);
		m1154(L_11, L_14, &m1154_MI);
		goto IL_0123;
	}

IL_007e:
	{
		t9 * L_15 = p0;
		if (!((t9 *)IsInst(L_15, InitializedTypeInfo(&t168_TI))))
		{
			goto IL_00a8;
		}
	}
	{
		t315 * L_16 = p1;
		t9 * L_17 = p0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&t168_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_18 = m4334(NULL, &m4334_MI);
		t2* L_19 = m4348((&V_3), L_18, &m4348_MI);
		m1154(L_16, L_19, &m1154_MI);
		goto IL_0123;
	}

IL_00a8:
	{
		t9 * L_20 = p0;
		if (!((t9 *)IsInst(L_20, InitializedTypeInfo(&t897_TI))))
		{
			goto IL_00d3;
		}
	}
	{
		t315 * L_21 = p1;
		t9 * L_22 = p0;
		V_4 = ((*(t897 *)((t897 *)UnBox (L_22, InitializedTypeInfo(&t897_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_23 = m4334(NULL, &m4334_MI);
		t2* L_24 = m4349((&V_4), L_23, &m4349_MI);
		m1154(L_21, L_24, &m1154_MI);
		goto IL_0123;
	}

IL_00d3:
	{
		t9 * L_25 = p0;
		if (!((t9 *)IsInst(L_25, InitializedTypeInfo(&t123_TI))))
		{
			goto IL_00fe;
		}
	}
	{
		t315 * L_26 = p1;
		t9 * L_27 = p0;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&t123_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_28 = m4334(NULL, &m4334_MI);
		t2* L_29 = m4350((&V_5), L_28, &m4350_MI);
		m1154(L_26, L_29, &m1154_MI);
		goto IL_0123;
	}

IL_00fe:
	{
		t315 * L_30 = p1;
		t9 * L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t894_TI));
		t894 * L_32 = m4334(NULL, &m4334_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t884_TI));
		double L_33 = m4351(NULL, L_31, L_32, &m4351_MI);
		V_6 = L_33;
		t894 * L_34 = m4334(NULL, &m4334_MI);
		t2* L_35 = m4352((&V_6), (t2*) &_stringLiteral353, L_34, &m4352_MI);
		m1154(L_30, L_35, &m1154_MI);
	}

IL_0123:
	{
		return 1;
	}
}
extern "C" bool m4036 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t186_TI))))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		t9 * L_1 = p0;
		if (!((t9 *)IsInst(L_1, InitializedTypeInfo(&t568_TI))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		t9 * L_2 = p0;
		if (!((t9 *)IsInst(L_2, InitializedTypeInfo(&t327_TI))))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		t9 * L_3 = p0;
		if (!((t9 *)IsInst(L_3, InitializedTypeInfo(&t302_TI))))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		t9 * L_4 = p0;
		if (!((t9 *)IsInst(L_4, InitializedTypeInfo(&t125_TI))))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		t9 * L_5 = p0;
		if (!((t9 *)IsInst(L_5, InitializedTypeInfo(&t168_TI))))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		t9 * L_6 = p0;
		if (!((t9 *)IsInst(L_6, InitializedTypeInfo(&t292_TI))))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		t9 * L_7 = p0;
		if (!((t9 *)IsInst(L_7, InitializedTypeInfo(&t882_TI))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		t9 * L_8 = p0;
		if (!((t9 *)IsInst(L_8, InitializedTypeInfo(&t123_TI))))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		t9 * L_9 = p0;
		if (!((t9 *)IsInst(L_9, InitializedTypeInfo(&t156_TI))))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		t9 * L_10 = p0;
		if (!((t9 *)IsInst(L_10, InitializedTypeInfo(&t897_TI))))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
extern "C" t9 * m4037 (t9 * __this , MethodInfo* method)
{
	t9 * G_B2_0 = {0};
	t9 * G_B1_0 = {0};
	{
		t9 * L_0 = ((t807_SFs*)InitializedTypeInfo(&t807_TI)->static_fields)->f0;
		t9 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		t809 * L_2 = m4038(NULL, &m4038_MI);
		t809 * L_3 = L_2;
		((t807_SFs*)InitializedTypeInfo(&t807_TI)->static_fields)->f0 = L_3;
		G_B2_0 = ((t9 *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
extern "C" t809 * m4038 (t9 * __this , MethodInfo* method)
{
	t809 * G_B2_0 = {0};
	t809 * G_B1_0 = {0};
	{
		t809 * L_0 = ((t807_SFs*)InitializedTypeInfo(&t807_TI)->static_fields)->f1;
		t809 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t809_TI));
		t809 * L_2 = (t809 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t809_TI));
		m4039(L_2, &m4039_MI);
		t809 * L_3 = L_2;
		((t807_SFs*)InitializedTypeInfo(&t807_TI)->static_fields)->f1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
