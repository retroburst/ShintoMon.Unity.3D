#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t737.h"
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
extern TypeInfo t737_TI;
#include "t737MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t39.h"
#include "t470.h"

#include "t121.h"

extern MethodInfo m3597_MI;
extern "C" void m3597 (t737 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3598_MI;
extern "C" void m3598 (t737 * __this, t39 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3598((t737 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t737(Il2CppObject* delegate, t39 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t39 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
extern MethodInfo m3599_MI;
extern "C" t9 * m3599 (t737 * __this, t39 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3600_MI;
extern "C" void m3600 (t737 * __this, t9 * p0, MethodInfo* method)
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
#include "t441.h"
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
extern MethodInfo m3602_MI;
extern MethodInfo m3603_MI;
extern MethodInfo m3604_MI;
extern MethodInfo m3606_MI;
extern MethodInfo m3607_MI;
extern MethodInfo m3608_MI;
extern MethodInfo m3609_MI;
extern MethodInfo m3610_MI;
extern MethodInfo m3611_MI;
extern MethodInfo m3618_MI;
extern MethodInfo m3620_MI;
extern MethodInfo m3621_MI;


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
extern MethodInfo m2421_MI;
extern "C" float m2421 (t39 * __this, MethodInfo* method)
{
	typedef float (*m2421_ftn) (t39 *);
	static m2421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2421_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
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
extern MethodInfo m2557_MI;
extern "C" int32_t m2557 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m2557_ftn) (t39 *);
	static m2557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
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
extern MethodInfo m3601_MI;
extern "C" int32_t m3601 (t39 * __this, MethodInfo* method)
{
	typedef int32_t (*m3601_ftn) (t39 *);
	static m3601_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3601_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3602 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3602_ftn) (t39 *, t43 *);
	static m3602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3603 (t39 * __this, t43 * p0, MethodInfo* method)
{
	typedef void (*m3603_ftn) (t39 *, t43 *);
	static m3603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m497_MI;
extern "C" t43  m497 (t39 * __this, MethodInfo* method)
{
	t43  V_0 = {0};
	{
		m3602(__this, (&V_0), &m3602_MI);
		t43  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m429_MI;
extern "C" void m429 (t39 * __this, t43  p0, MethodInfo* method)
{
	{
		m3603(__this, (&p0), &m3603_MI);
		return;
	}
}
extern "C" void m3604 (t39 * __this, t441 * p0, MethodInfo* method)
{
	typedef void (*m3604_ftn) (t39 *, t441 *);
	static m3604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3605_MI;
extern "C" t441  m3605 (t39 * __this, MethodInfo* method)
{
	t441  V_0 = {0};
	{
		m3604(__this, (&V_0), &m3604_MI);
		t441  L_0 = V_0;
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
extern "C" void m3606 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3606_ftn) (t39 *, t46 *);
	static m3606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3607 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3607_ftn) (t39 *, t46 *);
	static m3607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_worldToCameraMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m461_MI;
extern "C" t46  m461 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3606(__this, (&V_0), &m3606_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m463_MI;
extern "C" void m463 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3607(__this, (&p0), &m3607_MI);
		return;
	}
}
extern "C" void m3608 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3608_ftn) (t39 *, t46 *);
	static m3608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3609 (t39 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3609_ftn) (t39 *, t46 *);
	static m3609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m464_MI;
extern "C" t46  m464 (t39 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3608(__this, (&V_0), &m3608_MI);
		t46  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m465_MI;
extern "C" void m465 (t39 * __this, t46  p0, MethodInfo* method)
{
	{
		m3609(__this, (&p0), &m3609_MI);
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
extern MethodInfo m2649_MI;
extern "C" t13  m2649 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3610(NULL, __this, (&p0), &m3610_MI);
		return L_0;
	}
}
extern "C" t13  m3610 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3610_ftn) (t39 *, t13 *);
	static m3610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m557_MI;
extern "C" t74  m557 (t39 * __this, t13  p0, MethodInfo* method)
{
	{
		t74  L_0 = m3611(NULL, __this, (&p0), &m3611_MI);
		return L_0;
	}
}
extern "C" t74  m3611 (t9 * __this , t39 * p0, t13 * p1, MethodInfo* method)
{
	typedef t74  (*m3611_ftn) (t39 *, t13 *);
	static m3611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
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
extern MethodInfo m3612_MI;
extern "C" int32_t m3612 (t9 * __this , MethodInfo* method)
{
	typedef int32_t (*m3612_ftn) ();
	static m3612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
extern MethodInfo m3613_MI;
extern "C" int32_t m3613 (t9 * __this , t738* p0, MethodInfo* method)
{
	typedef int32_t (*m3613_ftn) (t738*);
	static m3613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3614_MI;
extern "C" void m3614 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t737 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t737 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f2;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3598_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3615_MI;
extern "C" void m3615 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t737 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t737 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f3;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3598_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
extern MethodInfo m3616_MI;
extern "C" void m3616 (t9 * __this , t39 * p0, MethodInfo* method)
{
	{
		t737 * L_0 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t737 * L_1 = ((t39_SFs*)InitializedTypeInfo(&t39_TI)->static_fields)->f4;
		t39 * L_2 = p0;
		VirtActionInvoker1< t39 * >::Invoke(&m3598_MI, L_1, L_2);
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
extern MethodInfo m3617_MI;
extern "C" t59 * m3617 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3618(NULL, __this, (&p0), L_0, L_1, &m3618_MI);
		return L_2;
	}
}
extern "C" t59 * m3618 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3618_ftn) (t39 *, t74 *, float, int32_t);
	static m3618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m3619_MI;
extern "C" t59 * m3619 (t39 * __this, t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		float L_0 = p1;
		int32_t L_1 = p2;
		t59 * L_2 = m3620(NULL, __this, (&p0), L_0, L_1, &m3620_MI);
		return L_2;
	}
}
extern "C" t59 * m3620 (t9 * __this , t39 * p0, t74 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t59 * (*m3620_ftn) (t39 *, t74 *, float, int32_t);
	static m3620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m488_MI;
extern "C" t46  m488 (t39 * __this, t47  p0, MethodInfo* method)
{
	{
		t46  L_0 = m3621(NULL, __this, (&p0), &m3621_MI);
		return L_0;
	}
}
extern "C" t46  m3621 (t9 * __this , t39 * p0, t47 * p1, MethodInfo* method)
{
	typedef t46  (*m3621_ftn) (t39 *, t47 *);
	static m3621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_CalculateObliqueMatrix(UnityEngine.Camera,UnityEngine.Vector4&)");
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
extern MethodInfo m3622_MI;
extern MethodInfo m2908_MI;
extern MethodInfo m611_MI;
extern MethodInfo m1173_MI;
extern MethodInfo m400_MI;
extern MethodInfo m1174_MI;
extern MethodInfo m3623_MI;
extern MethodInfo m1181_MI;
extern MethodInfo m1182_MI;


extern "C" void m3622 (t9 * __this , int32_t p0, t2* p1, t57 * p2, MethodInfo* method)
{
	typedef void (*m3622_ftn) (int32_t, t2*, t57 *);
	static m3622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3623 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	typedef void (*m3623_ftn) (t138 *, t57 *);
	static m3623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
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
		G_B3_0 = (t2*) &_stringLiteral260;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3622(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3622_MI);
		return;
	}
}
extern "C" void m1173 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
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
		G_B3_0 = (t2*) &_stringLiteral260;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		t57 * L_3 = p1;
		m3622(NULL, G_B3_1, G_B3_0, L_3, &m3622_MI);
		return;
	}
}
extern MethodInfo m1180_MI;
extern "C" void m1180 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		m611(NULL, L_2, &m611_MI);
		return;
	}
}
extern MethodInfo m1179_MI;
extern "C" void m1179 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		t57 * L_3 = p0;
		m1173(NULL, L_2, L_3, &m1173_MI);
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
		G_B3_0 = (t2*) &_stringLiteral260;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		m3622(NULL, G_B3_1, G_B3_0, (t57 *)NULL, &m3622_MI);
		return;
	}
}
extern "C" void m1174 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3622(NULL, 2, L_1, L_2, &m3622_MI);
		return;
	}
}
extern MethodInfo m1175_MI;
extern "C" void m1175 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		m400(NULL, L_2, &m400_MI);
		return;
	}
}
extern MethodInfo m1176_MI;
extern "C" void m1176 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		t57 * L_3 = p0;
		m1174(NULL, L_2, L_3, &m1174_MI);
		return;
	}
}
extern MethodInfo m1178_MI;
extern "C" void m1178 (t9 * __this , t138 * p0, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		m3623(NULL, L_0, (t57 *)NULL, &m3623_MI);
		return;
	}
}
extern MethodInfo m1177_MI;
extern "C" void m1177 (t9 * __this , t138 * p0, t57 * p1, MethodInfo* method)
{
	{
		t138 * L_0 = p0;
		t57 * L_1 = p1;
		m3623(NULL, L_0, L_1, &m3623_MI);
		return;
	}
}
extern "C" void m1181 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		m3622(NULL, 1, L_1, (t57 *)NULL, &m3622_MI);
		return;
	}
}
extern "C" void m1182 (t9 * __this , t9 * p0, t57 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t2* L_1 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_0);
		t57 * L_2 = p1;
		m3622(NULL, 1, L_1, L_2, &m3622_MI);
		return;
	}
}
extern MethodInfo m1183_MI;
extern "C" void m1183 (t9 * __this , t2* p0, t158* p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t158* L_1 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		m1181(NULL, L_2, &m1181_MI);
		return;
	}
}
extern MethodInfo m1184_MI;
extern "C" void m1184 (t9 * __this , t57 * p0, t2* p1, t158* p2, MethodInfo* method)
{
	{
		t2* L_0 = p1;
		t158* L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_2 = m2908(NULL, L_0, L_1, &m2908_MI);
		t57 * L_3 = p0;
		m1182(NULL, L_2, L_3, &m1182_MI);
		return;
	}
}
extern MethodInfo m1083_MI;
extern "C" bool m1083 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m1083_ftn) ();
	static m1083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::get_isDebugBuild()");
	return _il2cpp_icall_func();
}
#include "t739.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t739_TI;
#include "t739MD.h"



extern MethodInfo m3624_MI;
extern "C" void m3624 (t739 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3625_MI;
extern "C" void m3625 (t739 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3625((t739 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t739(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3626_MI;
extern "C" t9 * m3626 (t739 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3627_MI;
extern "C" void m3627 (t739 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t740.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t740_TI;
#include "t740MD.h"

#include "t743.h"
#include "t293.h"
extern TypeInfo t58_TI;
extern TypeInfo t741_TI;
extern TypeInfo t13_TI;
#include "t58MD.h"
#include "t293MD.h"
extern Il2CppType t741_0_0_0;
extern MethodInfo m3649_MI;
extern MethodInfo m3648_MI;
extern MethodInfo m3650_MI;
extern MethodInfo m336_MI;
extern MethodInfo m4303_MI;
extern MethodInfo m3628_MI;
extern MethodInfo m1074_MI;
extern MethodInfo m1075_MI;
extern MethodInfo m3652_MI;
extern MethodInfo m3653_MI;
extern MethodInfo m3651_MI;
extern MethodInfo m3654_MI;
extern MethodInfo m3655_MI;
extern MethodInfo m3629_MI;


extern "C" void m3628 (t740 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = {0};
		m4303(&L_0, 0, &m4303_MI);
		__this->f0 = L_0;
		return;
	}
}
extern "C" void m3629 (t740 * __this, t58 p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t58 L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3630_MI;
extern TypeInfo* t741_TI_var;
extern "C" void m3630 (t9 * __this , MethodInfo* method)
{
	static bool m3630_init;
	if (!m3630_init)
	{
		t741_TI_var = il2cpp_codegen_class_from_type(&t741_0_0_0);
		m3630_init = true;
	}
	{
		t741* L_0 = ((t741*)SZArrayNew(t741_TI_var, 1));
		t740 * L_1 = (t740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t740_TI));
		m3628(L_1, &m3628_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t740 **)(t740 **)SZArrayLdElema(L_0, 0)) = (t740 *)L_1;
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1 = L_0;
		t741* L_2 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1;
		int32_t L_3 = 0;
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f2 = (*(t740 **)(t740 **)SZArrayLdElema(L_2, L_3));
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3 = (t739 *)NULL;
		return;
	}
}
extern MethodInfo m3631_MI;
extern "C" void m3631 (t9 * __this , t739 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t739 * L_0 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3;
		t739 * L_1 = p0;
		t293 * L_2 = m1074(NULL, L_0, L_1, &m1074_MI);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3 = ((t739 *)Castclass(L_2, InitializedTypeInfo(&t739_TI)));
		return;
	}
}
extern MethodInfo m3632_MI;
extern "C" void m3632 (t9 * __this , t739 * p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t739 * L_0 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3;
		t739 * L_1 = p0;
		t293 * L_2 = m1075(NULL, L_0, L_1, &m1075_MI);
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3 = ((t739 *)Castclass(L_2, InitializedTypeInfo(&t739_TI)));
		return;
	}
}
extern MethodInfo m3633_MI;
extern "C" int32_t m3633 (t740 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3649(NULL, L_0, (&V_0), (&V_1), &m3649_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3634_MI;
extern "C" int32_t m3634 (t740 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3649(NULL, L_0, (&V_0), (&V_1), &m3649_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3635_MI;
extern "C" int32_t m3635 (t740 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3648(NULL, L_0, (&V_0), (&V_1), &m3648_MI);
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3636_MI;
extern "C" int32_t m3636 (t740 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3648(NULL, L_0, (&V_0), (&V_1), &m3648_MI);
		int32_t L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3637_MI;
extern "C" t743  m3637 (t740 * __this, MethodInfo* method)
{
	t743  V_0 = {0};
	t743  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3650(NULL, L_0, (&V_0), (&V_1), &m3650_MI);
		t743  L_1 = V_0;
		return L_1;
	}
}
extern MethodInfo m3638_MI;
extern "C" t743  m3638 (t740 * __this, MethodInfo* method)
{
	t743  V_0 = {0};
	t743  V_1 = {0};
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3650(NULL, L_0, (&V_0), (&V_1), &m3650_MI);
		t743  L_1 = V_1;
		return L_1;
	}
}
extern MethodInfo m3639_MI;
extern "C" void m3639 (t740 * __this, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3652(NULL, L_0, 0, 0, ((int32_t)60), &m3652_MI);
		return;
	}
}
extern MethodInfo m3640_MI;
extern "C" void m3640 (t740 * __this, int32_t p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3652(NULL, L_0, L_1, L_2, L_3, &m3652_MI);
		return;
	}
}
extern MethodInfo m3641_MI;
extern "C" void m3641 (t740 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		int32_t L_3 = p2;
		int32_t L_4 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3653(NULL, L_0, L_1, L_2, L_3, L_4, &m3653_MI);
		return;
	}
}
extern MethodInfo m3642_MI;
extern "C" void m3642 (t740 * __this, int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		t58 L_0 = (__this->f0);
		int32_t L_1 = p0;
		int32_t L_2 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		m3651(NULL, L_0, L_1, L_2, &m3651_MI);
		return;
	}
}
extern MethodInfo m3643_MI;
extern "C" bool m3643 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		bool L_0 = m3654(NULL, &m3654_MI);
		return L_0;
	}
}
extern MethodInfo m3644_MI;
extern "C" t13  m3644 (t9 * __this , t13  p0, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		int32_t L_4 = m3655(NULL, L_2, L_3, (&V_1), (&V_2), &m3655_MI);
		(&V_0)->f3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->f1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->f2 = (((float)L_6));
		t13  L_7 = V_0;
		return L_7;
	}
}
extern MethodInfo m3645_MI;
extern "C" t740 * m3645 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t740 * L_0 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f2;
		return L_0;
	}
}
extern MethodInfo m3646_MI;
extern TypeInfo* t741_TI_var;
extern "C" void m3646 (t9 * __this , t742* p0, MethodInfo* method)
{
	static bool m3646_init;
	if (!m3646_init)
	{
		t741_TI_var = il2cpp_codegen_class_from_type(&t741_0_0_0);
		m3646_init = true;
	}
	int32_t V_0 = 0;
	{
		t742* L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1 = ((t741*)SZArrayNew(t741_TI_var, (((int32_t)(((t121 *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t741* L_1 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1;
		int32_t L_2 = V_0;
		t742* L_3 = p0;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		t740 * L_6 = (t740 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t740_TI));
		m3629(L_6, (*(t58*)(t58*)SZArrayLdElema(L_3, L_5)), &m3629_MI);
		ArrayElementTypeCheck (L_1, L_6);
		*((t740 **)(t740 **)SZArrayLdElema(L_1, L_2)) = (t740 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		t742* L_9 = p0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((t121 *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t741* L_10 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f1;
		int32_t L_11 = 0;
		((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f2 = (*(t740 **)(t740 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
extern MethodInfo m3647_MI;
extern "C" void m3647 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t739 * L_0 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t740_TI));
		t739 * L_1 = ((t740_SFs*)InitializedTypeInfo(&t740_TI)->static_fields)->f3;
		VirtActionInvoker0::Invoke(&m3625_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern "C" void m3648 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3648_ftn) (t58, int32_t*, int32_t*);
	static m3648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3649 (t9 * __this , t58 p0, int32_t* p1, int32_t* p2, MethodInfo* method)
{
	typedef void (*m3649_ftn) (t58, int32_t*, int32_t*);
	static m3649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3650 (t9 * __this , t58 p0, t743 * p1, t743 * p2, MethodInfo* method)
{
	typedef void (*m3650_ftn) (t58, t743 *, t743 *);
	static m3650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3651 (t9 * __this , t58 p0, int32_t p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3651_ftn) (t58, int32_t, int32_t);
	static m3651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" void m3652 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, MethodInfo* method)
{
	typedef void (*m3652_ftn) (t58, int32_t, int32_t, int32_t);
	static m3652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern "C" void m3653 (t9 * __this , t58 p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, MethodInfo* method)
{
	typedef void (*m3653_ftn) (t58, int32_t, int32_t, int32_t, int32_t);
	static m3653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4);
}
extern "C" bool m3654 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m3654_ftn) ();
	static m3654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
extern "C" int32_t m3655 (t9 * __this , int32_t p0, int32_t p1, int32_t* p2, int32_t* p3, MethodInfo* method)
{
	typedef int32_t (*m3655_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static m3655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
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
extern MethodInfo m3596_MI;
extern MethodInfo m3656_MI;
extern MethodInfo m3657_MI;
extern MethodInfo m3659_MI;
extern MethodInfo m3660_MI;


extern MethodInfo m328_MI;
extern "C" void m328 (t4 * __this, MethodInfo* method)
{
	{
		m3596(__this, &m3596_MI);
		return;
	}
}
extern "C" void m3656 (t4 * __this, MethodInfo* method)
{
	typedef void (*m3656_ftn) (t4 *);
	static m3656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()");
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
extern MethodInfo m1164_MI;
extern "C" void m1164 (t4 * __this, MethodInfo* method)
{
	{
		m3656(__this, &m3656_MI);
		return;
	}
}
extern MethodInfo m605_MI;
extern "C" t171 * m605 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t171 * L_1 = m3657(__this, L_0, &m3657_MI);
		return L_1;
	}
}
extern "C" t171 * m3657 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef t171 * (*m3657_ftn) (t4 *, t9 *);
	static m3657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
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
extern MethodInfo m3658_MI;
extern "C" void m3658 (t4 * __this, t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		m3659(__this, L_0, &m3659_MI);
		return;
	}
}
extern MethodInfo m1214_MI;
extern "C" void m1214 (t4 * __this, t171 * p0, MethodInfo* method)
{
	{
		t171 * L_0 = p0;
		m3660(__this, L_0, &m3660_MI);
		return;
	}
}
extern "C" void m3659 (t4 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3659_ftn) (t4 *, t9 *);
	static m3659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3660 (t4 * __this, t171 * p0, MethodInfo* method)
{
	typedef void (*m3660_ftn) (t4 *, t171 *);
	static m3660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, p0);
}
#include "t324.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t324_TI;
#include "t324MD.h"



#include "t597.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t597_TI;
#include "t597MD.h"



#include "t141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t141_TI;
#include "t141MD.h"

#include "t28.h"


extern MethodInfo m2506_MI;
extern "C" int32_t m2506 (t141 * __this, MethodInfo* method)
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
extern MethodInfo m1206_MI;
extern "C" int32_t m1206 (t141 * __this, MethodInfo* method)
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

#include "t294.h"
extern TypeInfo t142_TI;
extern Il2CppType t142_0_0_0;
extern MethodInfo m389_MI;
extern MethodInfo m1205_MI;
extern MethodInfo m3664_MI;
extern MethodInfo m3662_MI;
extern MethodInfo m3663_MI;


extern MethodInfo m3661_MI;
extern "C" void m3661 (t9 * __this , MethodInfo* method)
{
	{
		return;
	}
}
extern "C" bool m3662 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3662_ftn) (int32_t);
	static m3662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyInt(System.Int32)");
	return _il2cpp_icall_func(p0);
}
extern "C" bool m3663 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m3663_ftn) (int32_t);
	static m3663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
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
extern MethodInfo m1080_MI;
extern "C" bool m1080 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3662(NULL, L_0, &m3662_MI);
		return L_1;
	}
}
extern MethodInfo m1078_MI;
extern "C" bool m1078 (t9 * __this , int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		bool L_1 = m3663(NULL, L_0, &m3663_MI);
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
extern MethodInfo m2507_MI;
extern "C" bool m2507 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef bool (*m2507_ftn) (int32_t);
	static m2507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
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
extern MethodInfo m2508_MI;
extern "C" t28  m2508 (t9 * __this , MethodInfo* method)
{
	typedef t28  (*m2508_ftn) ();
	static m2508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2526_MI;
extern "C" bool m2526 (t9 * __this , MethodInfo* method)
{
	typedef bool (*m2526_ftn) ();
	static m2526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
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
		t141  L_5 = m1205(NULL, L_4, &m1205_MI);
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
extern "C" t141  m1205 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef t141  (*m1205_ftn) (int32_t);
	static m1205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
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
extern MethodInfo m2544_MI;
extern "C" bool m2544 (t9 * __this , MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m2799_MI;
extern "C" void m2799 (t9 * __this , int32_t p0, MethodInfo* method)
{
	typedef void (*m2799_ftn) (int32_t);
	static m2799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2724_MI;
extern "C" t2* m2724 (t9 * __this , MethodInfo* method)
{
	typedef t2* (*m2724_ftn) ();
	static m2724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2724_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
extern "C" void m3664 (t9 * __this , t28 * p0, MethodInfo* method)
{
	typedef void (*m3664_ftn) (t28 *);
	static m3664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0);
}
extern MethodInfo m2787_MI;
extern "C" void m2787 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t139_TI));
		m3664(NULL, (&p0), &m3664_MI);
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
#include "t563.h"
extern TypeInfo t563_TI;
#include "t563MD.h"
extern MethodInfo m3668_MI;
extern MethodInfo m631_MI;
extern MethodInfo m3669_MI;
extern MethodInfo m3670_MI;
extern MethodInfo m3671_MI;
extern MethodInfo m510_MI;
extern MethodInfo m3672_MI;
extern MethodInfo m3673_MI;
extern MethodInfo m4304_MI;
extern MethodInfo m3674_MI;
extern MethodInfo m3667_MI;
extern MethodInfo m2909_MI;
extern MethodInfo m330_MI;


extern MethodInfo m3665_MI;
extern "C" void m3665 (t57 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3666_MI;
extern "C" t57 * m3666 (t9 * __this , t57 * p0, MethodInfo* method)
{
	typedef t57 * (*m3666_ftn) (t57 *);
	static m3666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(p0);
}
extern "C" t57 * m3667 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = m3668(NULL, L_0, (&p1), (&p2), &m3668_MI);
		return L_1;
	}
}
extern "C" t57 * m3668 (t9 * __this , t57 * p0, t13 * p1, t93 * p2, MethodInfo* method)
{
	typedef t57 * (*m3668_ftn) (t57 *, t13 *, t93 *);
	static m3668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
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
extern "C" void m3669 (t9 * __this , t57 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3669_ftn) (t57 *, bool);
	static m3669_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3669_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
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
		m3669(NULL, L_0, L_1, &m3669_MI);
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
extern "C" void m3670 (t9 * __this , t57 * p0, float p1, MethodInfo* method)
{
	typedef void (*m3670_ftn) (t57 *, float);
	static m3670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyObject(UnityEngine.Object,System.Single)");
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
		m3670(NULL, L_0, L_1, &m3670_MI);
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
		bool L_1 = m3671(NULL, __this, ((t57 *)IsInst(L_0, InitializedTypeInfo(&t57_TI))), &m3671_MI);
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
extern "C" bool m3671 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
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
		bool L_6 = m3672(NULL, L_5, &m3672_MI);
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
		bool L_9 = m3672(NULL, L_8, &m3672_MI);
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
extern "C" bool m3672 (t9 * __this , t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t58 L_1 = m3673(L_0, &m3673_MI);
		t58 L_2 = ((t58_SFs*)InitializedTypeInfo(&t58_TI)->static_fields)->f1;
		bool L_3 = m4304(NULL, L_1, L_2, &m4304_MI);
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
extern "C" t58 m3673 (t57 * __this, MethodInfo* method)
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
		m3674(NULL, L_0, (t2*) &_stringLiteral261, &m3674_MI);
		t57 * L_1 = p0;
		t13  L_2 = p1;
		t93  L_3 = p2;
		t57 * L_4 = m3667(NULL, L_1, L_2, L_3, &m3667_MI);
		return L_4;
	}
}
extern "C" void m3674 (t9 * __this , t9 * p0, t2* p1, MethodInfo* method)
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
		t563 * L_2 = (t563 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t563_TI));
		m2909(L_2, L_1, &m2909_MI);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
extern MethodInfo m3675_MI;
extern "C" t57 * m3675 (t9 * __this , t126 * p0, MethodInfo* method)
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
		bool L_1 = m3671(NULL, L_0, (t57 *)NULL, &m3671_MI);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m333_MI;
extern "C" bool m333 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3671(NULL, L_0, L_1, &m3671_MI);
		return L_2;
	}
}
extern MethodInfo m332_MI;
extern "C" bool m332 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		t57 * L_1 = p1;
		bool L_2 = m3671(NULL, L_0, L_1, &m3671_MI);
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
#include "t542.h"
#include "t177.h"
#include "t59MD.h"
extern MethodInfo m362_MI;
extern MethodInfo m424_MI;
extern MethodInfo m3677_MI;
extern MethodInfo m3678_MI;
extern MethodInfo m3679_MI;


extern MethodInfo m3676_MI;
extern "C" void m3676 (t133 * __this, MethodInfo* method)
{
	{
		m3665(__this, &m3665_MI);
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
extern "C" void m3677 (t133 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	typedef void (*m3677_ftn) (t133 *, t126 *, t9 *);
	static m3677_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3677_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2599_MI;
extern "C" void m2599 (t133 * __this, t126 * p0, t542 * p1, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t542 * L_1 = p1;
		m3677(__this, L_0, L_1, &m3677_MI);
		return;
	}
}
extern "C" void m3678 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3678_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
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
		m3678(__this, L_0, L_1, L_2, &m3678_MI);
		return;
	}
}
extern "C" void m3679 (t133 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3679_ftn) (t133 *, t2*, t9 *, int32_t);
	static m3679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern MethodInfo m613_MI;
extern "C" void m613 (t133 * __this, t2* p0, int32_t p1, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = p1;
		m3679(__this, L_0, NULL, L_1, &m3679_MI);
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

extern MethodInfo m3684_MI;
extern MethodInfo m428_MI;
extern MethodInfo m3682_MI;
extern MethodInfo m3683_MI;


extern MethodInfo m359_MI;
extern "C" void m359 (t59 * __this, t2* p0, MethodInfo* method)
{
	{
		m3665(__this, &m3665_MI);
		t2* L_0 = p0;
		m3684(NULL, __this, L_0, &m3684_MI);
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
		m3665(__this, &m3665_MI);
		t2* L_0 = p0;
		m3684(NULL, __this, L_0, &m3684_MI);
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
extern MethodInfo m3680_MI;
extern "C" t121 * m3680 (t59 * __this, t126 * p0, bool p1, bool p2, bool p3, bool p4, t9 * p5, MethodInfo* method)
{
	typedef t121 * (*m3680_ftn) (t59 *, t126 *, bool, bool, bool, bool, t9 *);
	static m3680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
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
extern MethodInfo m2772_MI;
extern "C" int32_t m2772 (t59 * __this, MethodInfo* method)
{
	typedef int32_t (*m2772_ftn) (t59 *);
	static m2772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2773_MI;
extern "C" void m2773 (t59 * __this, int32_t p0, MethodInfo* method)
{
	typedef void (*m2773_ftn) (t59 *, int32_t);
	static m2773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
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
extern MethodInfo m1147_MI;
extern "C" bool m1147 (t59 * __this, MethodInfo* method)
{
	typedef bool (*m1147_ftn) (t59 *);
	static m1147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1068_MI;
extern "C" t2* m1068 (t59 * __this, MethodInfo* method)
{
	typedef t2* (*m1068_ftn) (t59 *);
	static m1068_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1068_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m1085_MI;
extern "C" t59 * m1085 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t59 * (*m1085_ftn) (t2*);
	static m1085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m1217_MI;
extern "C" t100* m1217 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef t100* (*m1217_ftn) (t2*);
	static m1217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectsWithTag(System.String)");
	return _il2cpp_icall_func(p0);
}
extern MethodInfo m3681_MI;
extern "C" void m3681 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3681_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, p0, p1, p2);
}
extern "C" void m3682 (t59 * __this, t2* p0, t9 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3682_ftn) (t59 *, t2*, t9 *, int32_t);
	static m3682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
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
		m3682(__this, L_0, L_1, L_2, &m3682_MI);
		return;
	}
}
extern "C" t133 * m3683 (t59 * __this, t126 * p0, MethodInfo* method)
{
	typedef t133 * (*m3683_ftn) (t59 *, t126 *);
	static m3683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" t133 * m428 (t59 * __this, t126 * p0, MethodInfo* method)
{
	{
		t126 * L_0 = p0;
		t133 * L_1 = m3683(__this, L_0, &m3683_MI);
		return L_1;
	}
}
extern "C" void m3684 (t9 * __this , t59 * p0, t2* p1, MethodInfo* method)
{
	typedef void (*m3684_ftn) (t59 *, t2*);
	static m3684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
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
#include "t744.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t744_TI;
#include "t744MD.h"

#include "t45MD.h"
extern MethodInfo m2947_MI;
extern MethodInfo m2950_MI;


extern MethodInfo m3685_MI;
extern "C" void m3685 (t744 * __this, t45 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t45 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3686_MI;
extern "C" t9 * m3686 (t744 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t45 * L_2 = m2947(L_0, L_1, &m2947_MI);
		return L_2;
	}
}
extern MethodInfo m3687_MI;
extern "C" bool m3687 (t744 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		t45 * L_0 = (__this->f0);
		int32_t L_1 = m2950(L_0, &m2950_MI);
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

#include "t434.h"
#include "t67.h"
extern TypeInfo t434_TI;
#include "t93MD.h"
#include "t13MD.h"
extern MethodInfo m3688_MI;
extern MethodInfo m3689_MI;
extern MethodInfo m3690_MI;
extern MethodInfo m3691_MI;
extern MethodInfo m490_MI;
extern MethodInfo m3424_MI;
extern MethodInfo m3425_MI;
extern MethodInfo m491_MI;
extern MethodInfo m579_MI;
extern MethodInfo m627_MI;
extern MethodInfo m626_MI;
extern MethodInfo m3692_MI;
extern MethodInfo m3693_MI;
extern MethodInfo m3694_MI;
extern MethodInfo m3695_MI;
extern MethodInfo m3696_MI;
extern MethodInfo m3697_MI;
extern MethodInfo m3698_MI;
extern MethodInfo m3699_MI;
extern MethodInfo m3701_MI;
extern MethodInfo m3700_MI;
extern MethodInfo m351_MI;
extern MethodInfo m476_MI;
extern MethodInfo m358_MI;
extern MethodInfo m3705_MI;
extern MethodInfo m623_MI;
extern MethodInfo m618_MI;
extern MethodInfo m624_MI;
extern MethodInfo m619_MI;
extern MethodInfo m2864_MI;
extern MethodInfo m3702_MI;
extern MethodInfo m3703_MI;
extern MethodInfo m3704_MI;
extern MethodInfo m3706_MI;
extern MethodInfo m3707_MI;
extern MethodInfo m3708_MI;
extern MethodInfo m3709_MI;


extern "C" void m3688 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3688_ftn) (t45 *, t13 *);
	static m3688_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3688_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3689 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3689_ftn) (t45 *, t13 *);
	static m3689_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3689_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t13  m351 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3688(__this, (&V_0), &m3688_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m358 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3689(__this, (&p0), &m3689_MI);
		return;
	}
}
extern "C" void m3690 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3690_ftn) (t45 *, t13 *);
	static m3690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3691 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3691_ftn) (t45 *, t13 *);
	static m3691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m547_MI;
extern "C" t13  m547 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3690(__this, (&V_0), &m3690_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m2780_MI;
extern "C" void m2780 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3691(__this, (&p0), &m3691_MI);
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
		t13  L_1 = m3424((&V_0), &m3424_MI);
		return L_1;
	}
}
extern MethodInfo m456_MI;
extern "C" void m456 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		t93  L_1 = m3425(NULL, L_0, &m3425_MI);
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
extern "C" void m3692 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3692_ftn) (t45 *, t93 *);
	static m3692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3693 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3693_ftn) (t45 *, t93 *);
	static m3693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m490 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3692(__this, (&V_0), &m3692_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m491 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3693(__this, (&p0), &m3693_MI);
		return;
	}
}
extern "C" void m3694 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3694_ftn) (t45 *, t93 *);
	static m3694_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3694_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3695 (t45 * __this, t93 * p0, MethodInfo* method)
{
	typedef void (*m3695_ftn) (t45 *, t93 *);
	static m3695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" t93  m618 (t45 * __this, MethodInfo* method)
{
	t93  V_0 = {0};
	{
		m3694(__this, (&V_0), &m3694_MI);
		t93  L_0 = V_0;
		return L_0;
	}
}
extern "C" void m619 (t45 * __this, t93  p0, MethodInfo* method)
{
	{
		m3695(__this, (&p0), &m3695_MI);
		return;
	}
}
extern "C" void m3696 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3696_ftn) (t45 *, t13 *);
	static m3696_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3696_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3697 (t45 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3697_ftn) (t45 *, t13 *);
	static m3697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1064_MI;
extern "C" t13  m1064 (t45 * __this, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		m3696(__this, (&V_0), &m3696_MI);
		t13  L_0 = V_0;
		return L_0;
	}
}
extern MethodInfo m1069_MI;
extern "C" void m1069 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		m3697(__this, (&p0), &m3697_MI);
		return;
	}
}
extern MethodInfo m530_MI;
extern "C" t45 * m530 (t45 * __this, MethodInfo* method)
{
	{
		t45 * L_0 = m3698(__this, &m3698_MI);
		return L_0;
	}
}
extern MethodInfo m598_MI;
extern "C" void m598 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		if (!((t434 *)IsInst(__this, InitializedTypeInfo(&t434_TI))))
		{
			goto IL_0016;
		}
	}
	{
		m1182(NULL, (t2*) &_stringLiteral262, __this, &m1182_MI);
	}

IL_0016:
	{
		t45 * L_0 = p0;
		m3699(__this, L_0, &m3699_MI);
		return;
	}
}
extern "C" t45 * m3698 (t45 * __this, MethodInfo* method)
{
	typedef t45 * (*m3698_ftn) (t45 *);
	static m3698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3699 (t45 * __this, t45 * p0, MethodInfo* method)
{
	typedef void (*m3699_ftn) (t45 *, t45 *);
	static m3699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2770_MI;
extern "C" void m2770 (t45 * __this, t45 * p0, MethodInfo* method)
{
	{
		t45 * L_0 = p0;
		m3700(__this, L_0, 1, &m3700_MI);
		return;
	}
}
extern "C" void m3700 (t45 * __this, t45 * p0, bool p1, MethodInfo* method)
{
	typedef void (*m3700_ftn) (t45 *, t45 *, bool);
	static m3700_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3700_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern "C" void m3701 (t45 * __this, t46 * p0, MethodInfo* method)
{
	typedef void (*m3701_ftn) (t45 *, t46 *);
	static m3701_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3701_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2846_MI;
extern "C" t46  m2846 (t45 * __this, MethodInfo* method)
{
	t46  V_0 = {0};
	{
		m3701(__this, (&V_0), &m3701_MI);
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
		t13  L_6 = m3705(__this, L_5, &m3705_MI);
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
		t93  L_10 = m2864(NULL, L_9, &m2864_MI);
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
		m3702(__this, L_1, L_2, &m3702_MI);
		return;
	}
}
extern "C" void m3702 (t45 * __this, t45 * p0, t13  p1, MethodInfo* method)
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
		m3703(__this, L_3, L_4, &m3703_MI);
	}

IL_0018:
	{
		return;
	}
}
extern "C" void m3703 (t45 * __this, t13  p0, t13  p1, MethodInfo* method)
{
	{
		m3704(NULL, __this, (&p0), (&p1), &m3704_MI);
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
		m3704(NULL, __this, (&p0), (&V_0), &m3704_MI);
		return;
	}
}
extern "C" void m3704 (t9 * __this , t45 * p0, t13 * p1, t13 * p2, MethodInfo* method)
{
	typedef void (*m3704_ftn) (t45 *, t13 *, t13 *);
	static m3704_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3704_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(p0, p1, p2);
}
extern "C" t13  m3705 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3706(NULL, __this, (&p0), &m3706_MI);
		return L_0;
	}
}
extern "C" t13  m3706 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3706_ftn) (t45 *, t13 *);
	static m3706_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3706_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2865_MI;
extern "C" t13  m2865 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3707(NULL, __this, (&p0), &m3707_MI);
		return L_0;
	}
}
extern "C" t13  m3707 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3707_ftn) (t45 *, t13 *);
	static m3707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2741_MI;
extern "C" t13  m2741 (t45 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = m3708(NULL, __this, (&p0), &m3708_MI);
		return L_0;
	}
}
extern "C" t13  m3708 (t9 * __this , t45 * p0, t13 * p1, MethodInfo* method)
{
	typedef t13  (*m3708_ftn) (t45 *, t13 *);
	static m3708_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3708_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" int32_t m2950 (t45 * __this, MethodInfo* method)
{
	typedef int32_t (*m2950_ftn) (t45 *);
	static m2950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
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
extern MethodInfo m2771_MI;
extern "C" void m2771 (t45 * __this, MethodInfo* method)
{
	typedef void (*m2771_ftn) (t45 *);
	static m2771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
extern "C" t45 * m3709 (t45 * __this, t2* p0, MethodInfo* method)
{
	typedef t45 * (*m3709_ftn) (t45 *, t2*);
	static m3709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1210_MI;
extern "C" t45 * m1210 (t45 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t45 * L_1 = m3709(__this, L_0, &m3709_MI);
		return L_1;
	}
}
extern MethodInfo m360_MI;
extern "C" t9 * m360 (t45 * __this, MethodInfo* method)
{
	{
		t744 * L_0 = (t744 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t744_TI));
		m3685(L_0, __this, &m3685_MI);
		return L_0;
	}
}
extern "C" t45 * m2947 (t45 * __this, int32_t p0, MethodInfo* method)
{
	typedef t45 * (*m2947_ftn) (t45 *, int32_t);
	static m2947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
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
extern MethodInfo m2528_MI;
extern "C" float m2528 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2528_ftn) ();
	static m2528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2568_MI;
extern "C" float m2568 (t9 * __this , MethodInfo* method)
{
	typedef float (*m2568_ftn) ();
	static m2568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1086_MI;
extern "C" float m1086 (t9 * __this , MethodInfo* method)
{
	typedef float (*m1086_ftn) ();
	static m1086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
extern MethodInfo m1087_MI;
extern "C" void m1087 (t9 * __this , float p0, MethodInfo* method)
{
	typedef void (*m1087_ftn) (float);
	static m1087_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1087_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
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

extern MethodInfo m3710_MI;


extern MethodInfo m609_MI;
extern "C" float m609 (t9 * __this , float p0, float p1, MethodInfo* method)
{
	typedef float (*m609_ftn) (float, float);
	static m609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1166_MI;
extern "C" int32_t m1166 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		int32_t L_1 = p1;
		int32_t L_2 = m3710(NULL, L_0, L_1, &m3710_MI);
		return L_2;
	}
}
extern "C" int32_t m3710 (t9 * __this , int32_t p0, int32_t p1, MethodInfo* method)
{
	typedef int32_t (*m3710_ftn) (int32_t, int32_t);
	static m3710_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3710_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m1066_MI;
extern "C" t13  m1066 (t9 * __this , MethodInfo* method)
{
	typedef t13  (*m1066_ftn) ();
	static m1066_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1066_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_insideUnitSphere()");
	return _il2cpp_icall_func();
}
#include "t686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t686_TI;
#include "t686MD.h"



extern MethodInfo m3711_MI;
extern "C" void m3711 (t686 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void t686_marshal(const t686& unmarshaled, t686_marshaled& marshaled)
{
}
void t686_marshal_back(const t686_marshaled& marshaled, t686& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void t686_marshal_cleanup(t686_marshaled& marshaled)
{
}
#include "t745.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t745_TI;
#include "t745MD.h"

extern MethodInfo m3712_MI;


extern "C" t2* m3712 (t9 * __this , t2* p0, t2* p1, MethodInfo* method)
{
	typedef t2* (*m3712_ftn) (t2*, t2*);
	static m3712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(p0, p1);
}
extern MethodInfo m3713_MI;
extern "C" t2* m3713 (t9 * __this , t2* p0, MethodInfo* method)
{
	t2* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_0 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		V_0 = L_0;
		t2* L_1 = p0;
		t2* L_2 = V_0;
		t2* L_3 = m3712(NULL, L_1, L_2, &m3712_MI);
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
#include "t746.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t746_TI;
#include "t746MD.h"



extern MethodInfo m3714_MI;
extern "C" t13  m3714 (t746 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3715_MI;
extern "C" void m3715 (t746 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3716_MI;
extern "C" t13  m3716 (t746 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3717_MI;
extern "C" void m3717 (t746 * __this, t13  p0, MethodInfo* method)
{
	{
		t13  L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3718_MI;
extern "C" float m3718 (t746 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3719_MI;
extern "C" void m3719 (t746 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3720_MI;
extern "C" float m3720 (t746 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3721_MI;
extern "C" void m3721 (t746 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern MethodInfo m3722_MI;
extern "C" float m3722 (t746 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3723_MI;
extern "C" void m3723 (t746 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3724_MI;
extern "C" float m3724 (t746 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3725_MI;
extern "C" void m3725 (t746 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern MethodInfo m3726_MI;
extern "C" float m3726 (t746 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3727_MI;
extern "C" void m3727 (t746 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3728_MI;
extern "C" t43  m3728 (t746 * __this, MethodInfo* method)
{
	{
		t43  L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3729_MI;
extern "C" void m3729 (t746 * __this, t43  p0, MethodInfo* method)
{
	{
		t43  L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
#include "t747.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t747_TI;
#include "t747MD.h"



#include "t165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t165_TI;
#include "t165MD.h"

#include "t164.h"
#include "t74MD.h"
extern MethodInfo m3731_MI;
extern MethodInfo m565_MI;
extern MethodInfo m3730_MI;
extern MethodInfo m2650_MI;
extern MethodInfo m563_MI;
extern MethodInfo m564_MI;
extern MethodInfo m3732_MI;
extern MethodInfo m3733_MI;


extern "C" bool m3730 (t9 * __this , t13  p0, t13  p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	{
		t164 * L_0 = p2;
		float L_1 = p3;
		int32_t L_2 = p4;
		bool L_3 = m3731(NULL, (&p0), (&p1), L_0, L_1, L_2, &m3731_MI);
		return L_3;
	}
}
extern "C" bool m3731 (t9 * __this , t13 * p0, t13 * p1, t164 * p2, float p3, int32_t p4, MethodInfo* method)
{
	typedef bool (*m3731_ftn) (t13 *, t13 *, t164 *, float, int32_t);
	static m3731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
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
		bool L_5 = m3730(NULL, L_0, L_1, L_2, L_3, L_4, &m3730_MI);
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
		bool L_4 = m2650(NULL, L_0, L_1, L_2, L_3, &m2650_MI);
		return L_4;
	}
}
extern "C" bool m2650 (t9 * __this , t74  p0, t164 * p1, float p2, int32_t p3, MethodInfo* method)
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
extern MethodInfo m2558_MI;
extern "C" t573* m2558 (t9 * __this , t74  p0, float p1, int32_t p2, MethodInfo* method)
{
	{
		t13  L_0 = m563((&p0), &m563_MI);
		t13  L_1 = m564((&p0), &m564_MI);
		float L_2 = p1;
		int32_t L_3 = p2;
		t573* L_4 = m3732(NULL, L_0, L_1, L_2, L_3, &m3732_MI);
		return L_4;
	}
}
extern "C" t573* m3732 (t9 * __this , t13  p0, t13  p1, float p2, int32_t p3, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		t573* L_2 = m3733(NULL, (&p0), (&p1), L_0, L_1, &m3733_MI);
		return L_2;
	}
}
extern "C" t573* m3733 (t9 * __this , t13 * p0, t13 * p1, float p2, int32_t p3, MethodInfo* method)
{
	typedef t573* (*m3733_ftn) (t13 *, t13 *, float, int32_t);
	static m3733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(p0, p1, p2, p3);
}
#include "t92.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t92_TI;
#include "t92MD.h"

extern MethodInfo m3734_MI;
extern MethodInfo m3735_MI;
extern MethodInfo m3736_MI;


extern "C" void m3734 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3734_ftn) (t92 *, t13 *);
	static m3734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m599_MI;
extern "C" void m599 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3734(__this, (&p0), &m3734_MI);
		return;
	}
}
extern "C" void m3735 (t92 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3735_ftn) (t92 *, t13 *);
	static m3735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m600_MI;
extern "C" void m600 (t92 * __this, t13  p0, MethodInfo* method)
{
	{
		m3735(__this, (&p0), &m3735_MI);
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
extern MethodInfo m1065_MI;
extern "C" void m1065 (t92 * __this, t13  p0, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		m3736(NULL, __this, (&p0), L_0, &m3736_MI);
		return;
	}
}
extern "C" void m3736 (t9 * __this , t92 * p0, t13 * p1, int32_t p2, MethodInfo* method)
{
	typedef void (*m3736_ftn) (t92 *, t13 *, int32_t);
	static m3736_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3736_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(p0, p1, p2);
}
#include "t170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t170_TI;
#include "t170MD.h"

extern MethodInfo m3737_MI;


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
extern "C" void m3737 (t170 * __this, t13 * p0, MethodInfo* method)
{
	typedef void (*m3737_ftn) (t170 *, t13 *);
	static m3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m569_MI;
extern "C" void m569 (t170 * __this, t13  p0, MethodInfo* method)
{
	{
		m3737(__this, (&p0), &m3737_MI);
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



extern MethodInfo m3738_MI;
extern "C" t92 * m3738 (t60 * __this, MethodInfo* method)
{
	typedef t92 * (*m3738_ftn) (t60 *);
	static m3738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t164_TI;
#include "t164MD.h"

extern MethodInfo m2560_MI;


extern MethodInfo m543_MI;
extern "C" t13  m543 (t164 * __this, MethodInfo* method)
{
	{
		t13  L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m2561_MI;
extern "C" t13  m2561 (t164 * __this, MethodInfo* method)
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
extern "C" t60 * m2560 (t164 * __this, MethodInfo* method)
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
		t60 * L_0 = m2560(__this, &m2560_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t60 * L_2 = m2560(__this, &m2560_MI);
		t92 * L_3 = m3738(L_2, &m3738_MI);
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
#include "t748.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t748_TI;
#include "t748MD.h"



#include "t215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t215_TI;
#include "t215MD.h"



extern MethodInfo m1067_MI;
extern "C" t59 * m1067 (t215 * __this, MethodInfo* method)
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
#include "t571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t571_TI;
#include "t571MD.h"

#include "t750.h"
#include "t568.h"
extern TypeInfo t750_TI;
#include "t750MD.h"
extern Il2CppType t750_0_0_0;
extern MethodInfo m4305_MI;
extern MethodInfo m3741_MI;
extern MethodInfo m3742_MI;
extern MethodInfo m3740_MI;
extern MethodInfo m3743_MI;
extern Il2CppGenericMethod m4305_GM;


extern MethodInfo m3739_MI;
extern TypeInfo* t750_TI_var;
extern MethodInfo* m4305_MI_var;
extern "C" void m3739 (t9 * __this , MethodInfo* method)
{
	static bool m3739_init;
	if (!m3739_init)
	{
		t750_TI_var = il2cpp_codegen_class_from_type(&t750_0_0_0);
		m4305_MI_var = il2cpp_codegen_genericmethod_get_method(&m4305_GM);
		m3739_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(t750_TI_var);
		t750 * L_0 = (t750 *)il2cpp_codegen_object_new (t750_TI_var);
		m4305(L_0, m4305_MI_var);
		((t571_SFs*)InitializedTypeInfo(&t571_TI)->static_fields)->f0 = L_0;
		return;
	}
}
extern "C" void m3740 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, t568 * p6, MethodInfo* method)
{
	{
		float L_0 = p2;
		int32_t L_1 = p3;
		float L_2 = p4;
		float L_3 = p5;
		t568 * L_4 = p6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t571_TI));
		m3741(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, L_4, &m3741_MI);
		return;
	}
}
extern "C" void m3741 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, t568 * p6, MethodInfo* method)
{
	typedef void (*m3741_ftn) (t28 *, t28 *, float, int32_t, float, float, t568 *);
	static m3741_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3741_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6);
}
extern MethodInfo m2651_MI;
extern "C" t568  m2651 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t571_TI));
		t568  L_6 = m3742(NULL, L_0, L_1, L_2, L_3, L_4, L_5, &m3742_MI);
		return L_6;
	}
}
extern "C" t568  m3742 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	t568  V_0 = {0};
	{
		t28  L_0 = p0;
		t28  L_1 = p1;
		float L_2 = p2;
		int32_t L_3 = p3;
		float L_4 = p4;
		float L_5 = p5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t571_TI));
		m3740(NULL, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), &m3740_MI);
		t568  L_6 = V_0;
		return L_6;
	}
}
extern MethodInfo m2547_MI;
extern "C" t572* m2547 (t9 * __this , t28  p0, t28  p1, float p2, int32_t p3, MethodInfo* method)
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
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t571_TI));
		t572* L_4 = m3743(NULL, (&p0), (&p1), L_0, L_1, L_2, L_3, &m3743_MI);
		return L_4;
	}
}
extern "C" t572* m3743 (t9 * __this , t28 * p0, t28 * p1, float p2, int32_t p3, float p4, float p5, MethodInfo* method)
{
	typedef t572* (*m3743_ftn) (t28 *, t28 *, float, int32_t, float, float);
	static m3743_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3743_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t568_TI;
#include "t568MD.h"

#include "t570.h"
#include "t751.h"
#include "t570MD.h"
extern MethodInfo m2548_MI;
extern MethodInfo m3745_MI;
extern MethodInfo m3744_MI;


extern MethodInfo m2551_MI;
extern "C" t28  m2551 (t568 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m2552_MI;
extern "C" t28  m2552 (t568 * __this, MethodInfo* method)
{
	{
		t28  L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m2652_MI;
extern "C" float m2652 (t568 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" t570 * m2548 (t568 * __this, MethodInfo* method)
{
	{
		t570 * L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" t751 * m3744 (t568 * __this, MethodInfo* method)
{
	t751 * G_B3_0 = {0};
	{
		t570 * L_0 = m2548(__this, &m2548_MI);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		t570 * L_2 = m2548(__this, &m2548_MI);
		t751 * L_3 = m3745(L_2, &m3745_MI);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((t751 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
extern MethodInfo m2549_MI;
extern "C" t45 * m2549 (t568 * __this, MethodInfo* method)
{
	t751 * V_0 = {0};
	{
		t751 * L_0 = m3744(__this, &m3744_MI);
		V_0 = L_0;
		t751 * L_1 = V_0;
		bool L_2 = m332(NULL, L_1, (t57 *)NULL, &m332_MI);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		t751 * L_3 = V_0;
		t45 * L_4 = m350(L_3, &m350_MI);
		return L_4;
	}

IL_001a:
	{
		t570 * L_5 = m2548(__this, &m2548_MI);
		bool L_6 = m332(NULL, L_5, (t57 *)NULL, &m332_MI);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		t570 * L_7 = m2548(__this, &m2548_MI);
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
extern TypeInfo t751_TI;
#include "t751MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t570_TI;



extern "C" t751 * m3745 (t570 * __this, MethodInfo* method)
{
	typedef t751 * (*m3745_ftn) (t570 *);
	static m3745_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3745_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#include "t752.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t752_TI;
#include "t752MD.h"



extern MethodInfo m3746_MI;
extern "C" void m3746 (t752 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3747_MI;
extern "C" void m3747 (t752 * __this, bool p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3747((t752 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t752(Il2CppObject* delegate, bool p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3748_MI;
extern "C" t9 * m3748 (t752 * __this, bool p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t124_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3749_MI;
extern "C" void m3749 (t752 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t753.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t753_TI;
#include "t753MD.h"

extern TypeInfo t124_TI;


extern MethodInfo m3750_MI;
extern "C" void m3750 (t753 * __this, bool p0, MethodInfo* method)
{
	{
		t752 * L_0 = ((t753_SFs*)InitializedTypeInfo(&t753_TI)->static_fields)->f0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		t752 * L_1 = ((t753_SFs*)InitializedTypeInfo(&t753_TI)->static_fields)->f0;
		bool L_2 = p0;
		VirtActionInvoker1< bool >::Invoke(&m3747_MI, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
#include "t754.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t754_TI;
#include "t754MD.h"



extern MethodInfo m3751_MI;
extern "C" void m3751 (t754 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3752_MI;
extern "C" void m3752 (t754 * __this, t118* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3752((t754 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t754(Il2CppObject* delegate, t118* p0)
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
extern MethodInfo m3753_MI;
extern "C" t9 * m3753 (t754 * __this, t118* p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3754_MI;
extern "C" void m3754 (t754 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t755.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t755_TI;
#include "t755MD.h"



extern MethodInfo m3755_MI;
extern "C" void m3755 (t755 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3756_MI;
extern "C" void m3756 (t755 * __this, int32_t p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3756((t755 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t755(Il2CppObject* delegate, int32_t p0)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(p0);

	// Marshaling cleanup of parameter 'p0' native representation

}
extern MethodInfo m3757_MI;
extern "C" t9 * m3757 (t755 * __this, int32_t p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&t125_TI), &p0);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m3758_MI;
extern "C" void m3758 (t755 * __this, t9 * p0, MethodInfo* method)
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


extern MethodInfo m1197_MI;
extern "C" float m1197 (t205 * __this, MethodInfo* method)
{
	typedef float (*m1197_ftn) (t205 *);
	static m1197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3759_MI;
extern "C" void m3759 (t205 * __this, t118* p0, MethodInfo* method)
{
	{
		t754 * L_0 = (__this->f2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t754 * L_1 = (__this->f2);
		t118* L_2 = p0;
		VirtActionInvoker1< t118* >::Invoke(&m3752_MI, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
extern MethodInfo m3760_MI;
extern "C" void m3760 (t205 * __this, int32_t p0, MethodInfo* method)
{
	{
		t755 * L_0 = (__this->f3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		t755 * L_1 = (__this->f3);
		int32_t L_2 = p0;
		VirtActionInvoker1< int32_t >::Invoke(&m3756_MI, L_1, L_2);
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

#include "t889.h"
extern MethodInfo m3761_MI;


extern MethodInfo m1051_MI;
extern "C" void m1051 (t208 * __this, float p0, MethodInfo* method)
{
	typedef void (*m1051_ftn) (t208 *, float);
	static m1051_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1051_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1049_MI;
extern "C" void m1049 (t208 * __this, t205 * p0, MethodInfo* method)
{
	typedef void (*m1049_ftn) (t208 *, t205 *);
	static m1049_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1049_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3761 (t208 * __this, uint64_t p0, MethodInfo* method)
{
	typedef void (*m3761_ftn) (t208 *, uint64_t);
	static m3761_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3761_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1055_MI;
extern "C" void m1055 (t208 * __this, MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		m3761(__this, L_0, &m3761_MI);
		return;
	}
}
extern MethodInfo m1056_MI;
extern "C" void m1056 (t208 * __this, MethodInfo* method)
{
	typedef void (*m1056_ftn) (t208 *);
	static m1056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m1050_MI;
extern "C" void m1050 (t208 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1050_ftn) (t208 *, bool);
	static m1050_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1050_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m1052_MI;
extern "C" void m1052 (t208 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m1052_ftn) (t208 *, bool);
	static m1052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
#include "t756.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t756_TI;
#include "t756MD.h"



#include "t757.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t757_TI;
#include "t757MD.h"

#include "t758.h"
#include "t759.h"
#include "t760.h"
#include "t123MD.h"
extern MethodInfo m3779_MI;
extern MethodInfo m3780_MI;
extern MethodInfo m3773_MI;
extern MethodInfo m4231_MI;
extern MethodInfo m3775_MI;
extern MethodInfo m4229_MI;


extern MethodInfo m3762_MI;
extern "C" void m3762 (t757 * __this, MethodInfo* method)
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
		__this->f8 = (t758 *)NULL;
		return;
	}
}
extern MethodInfo m3763_MI;
extern "C" t2* m3763 (t757 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3764_MI;
extern "C" void m3764 (t757 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3765_MI;
extern "C" t2* m3765 (t757 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3766_MI;
extern "C" void m3766 (t757 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3767_MI;
extern "C" float m3767 (t757 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3768_MI;
extern "C" void m3768 (t757 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3769_MI;
extern "C" int32_t m3769 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3770_MI;
extern "C" void m3770 (t757 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3771_MI;
extern "C" t57 * m3771 (t757 * __this, MethodInfo* method)
{
	{
		t57 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3772_MI;
extern "C" void m3772 (t757 * __this, t57 * p0, MethodInfo* method)
{
	{
		t57 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" t2* m3773 (t757 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3774_MI;
extern "C" void m3774 (t757 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" float m3775 (t757 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3776_MI;
extern "C" void m3776 (t757 * __this, float p0, MethodInfo* method)
{
	{
		float L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3777_MI;
extern "C" int32_t m3777 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return (int32_t)(L_0);
	}
}
extern MethodInfo m3778_MI;
extern "C" void m3778 (t757 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3779 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
extern "C" bool m3780 (t757 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
extern MethodInfo m3781_MI;
extern "C" t758 * m3781 (t757 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3779(__this, &m3779_MI);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		m400(NULL, (t2*) &_stringLiteral263, &m400_MI);
	}

IL_0015:
	{
		t758 * L_1 = (__this->f8);
		return L_1;
	}
}
extern MethodInfo m3782_MI;
extern "C" t759  m3782 (t757 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3780(__this, &m3780_MI);
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
		t759  L_1 = (__this->f9);
		return L_1;
	}
}
extern MethodInfo m3783_MI;
extern "C" t760  m3783 (t757 * __this, MethodInfo* method)
{
	{
		bool L_0 = m3780(__this, &m3780_MI);
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
		t760  L_1 = (__this->f10);
		return L_1;
	}
}
extern MethodInfo m3784_MI;
extern "C" int32_t m3784 (t757 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		t2* L_0 = m3773(__this, &m3773_MI);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = m3775(__this, &m3775_MI);
		V_1 = L_3;
		int32_t L_4 = m4229((&V_1), &m4229_MI);
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

extern MethodInfo m3788_MI;
extern MethodInfo m3789_MI;
extern MethodInfo m3786_MI;
extern MethodInfo m646_MI;


extern MethodInfo m546_MI;
extern "C" void m546 (t71 * __this, t167* p0, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		t167* L_0 = p0;
		m3789(__this, L_0, &m3789_MI);
		return;
	}
}
extern MethodInfo m3785_MI;
extern "C" void m3785 (t71 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		m3789(__this, (t167*)(t167*)NULL, &m3789_MI);
		return;
	}
}
extern "C" void m3786 (t71 * __this, MethodInfo* method)
{
	typedef void (*m3786_ftn) (t71 *);
	static m3786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m3787_MI;
extern "C" void m3787 (t71 * __this, MethodInfo* method)
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
		m3786(__this, &m3786_MI);
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
		t166  L_1 = m3788(__this, L_0, &m3788_MI);
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
extern "C" t166  m3788 (t71 * __this, int32_t p0, MethodInfo* method)
{
	typedef t166  (*m3788_ftn) (t71 *, int32_t);
	static m3788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" void m3789 (t71 * __this, t167* p0, MethodInfo* method)
{
	typedef void (*m3789_ftn) (t71 *, t167*);
	static m3789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
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
#include "t761.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t761_TI;
#include "t761MD.h"



#include "t762.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t762_TI;
#include "t762MD.h"

#include "t163.h"
#include "t163MD.h"
extern MethodInfo m3796_MI;
extern MethodInfo m3797_MI;


extern MethodInfo m3790_MI;
extern "C" void m3790 (t762 * __this, t163 * p0, MethodInfo* method)
{
	{
		__this->f1 = (-1);
		m336(__this, &m336_MI);
		t163 * L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3791_MI;
extern "C" t9 * m3791 (t762 * __this, MethodInfo* method)
{
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = (__this->f1);
		t758 * L_2 = m3796(L_0, L_1, &m3796_MI);
		return L_2;
	}
}
extern MethodInfo m3792_MI;
extern "C" bool m3792 (t762 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t163 * L_0 = (__this->f0);
		int32_t L_1 = m3797(L_0, &m3797_MI);
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

extern MethodInfo m3793_MI;
extern MethodInfo m3794_MI;


extern MethodInfo m537_MI;
extern "C" bool m537 (t163 * __this, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = m3793(__this, L_0, &m3793_MI);
		return L_1;
	}
}
extern "C" bool m3793 (t163 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		bool L_1 = m3794(__this, L_0, &m3794_MI);
		return L_1;
	}
}
extern "C" bool m3794 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef bool (*m3794_ftn) (t163 *, int32_t);
	static m3794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3795_MI;
extern "C" t9 * m3795 (t163 * __this, MethodInfo* method)
{
	{
		t762 * L_0 = (t762 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t762_TI));
		m3790(L_0, __this, &m3790_MI);
		return L_0;
	}
}
extern "C" t758 * m3796 (t163 * __this, int32_t p0, MethodInfo* method)
{
	typedef t758 * (*m3796_ftn) (t163 *, int32_t);
	static m3796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	return _il2cpp_icall_func(__this, p0);
}
extern "C" int32_t m3797 (t163 * __this, MethodInfo* method)
{
	typedef int32_t (*m3797_ftn) (t163 *);
	static m3797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t758_TI;
#include "t758MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t760_TI;
#include "t760MD.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo t759_TI;
#include "t759MD.h"

#include "t502MD.h"
extern MethodInfo m3816_MI;


extern MethodInfo m3798_MI;
extern "C" bool m3798 (t759 * __this, t2* p0, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3816(NULL, L_0, &m3816_MI);
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
extern MethodInfo m3799_MI;
extern "C" int32_t m3799 (t759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3800_MI;
extern "C" int32_t m3800 (t759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3801_MI;
extern "C" int32_t m3801 (t759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3802_MI;
extern "C" float m3802 (t759 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3803_MI;
extern "C" float m3803 (t759 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3804_MI;
extern "C" int32_t m3804 (t759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3805_MI;
extern "C" bool m3805 (t759 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3816(NULL, L_0, &m3816_MI);
		int32_t L_2 = (__this->f5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3806_MI;
extern "C" bool m3806 (t759 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#include "t764.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t764_TI;
#include "t764MD.h"



extern MethodInfo m3807_MI;
extern "C" bool m3807 (t764 * __this, t2* p0, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = p0;
		int32_t L_1 = m3816(NULL, L_0, &m3816_MI);
		int32_t L_2 = (__this->f2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		t2* L_3 = p0;
		int32_t L_4 = m3816(NULL, L_3, &m3816_MI);
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
extern MethodInfo m3808_MI;
extern "C" bool m3808 (t764 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		int32_t L_1 = m3816(NULL, L_0, &m3816_MI);
		int32_t L_2 = (__this->f1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
extern MethodInfo m3809_MI;
extern "C" int32_t m3809 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3810_MI;
extern "C" int32_t m3810 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern MethodInfo m3811_MI;
extern "C" int32_t m3811 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3812_MI;
extern "C" float m3812 (t764 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3813_MI;
extern "C" bool m3813 (t764 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3814_MI;
extern "C" bool m3814 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
extern MethodInfo m3815_MI;
extern "C" bool m3815 (t764 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void t764_marshal(const t764& unmarshaled, t764_marshaled& marshaled)
{
	marshaled.f0 = unmarshaled.f0;
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
	marshaled.f5 = unmarshaled.f5;
}
void t764_marshal_back(const t764_marshaled& marshaled, t764& unmarshaled)
{
	unmarshaled.f0 = marshaled.f0;
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
	unmarshaled.f5 = marshaled.f5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void t764_marshal_cleanup(t764_marshaled& marshaled)
{
}
#include "t502.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t502_TI;

#include "t604.h"
extern MethodInfo m3817_MI;
extern MethodInfo m3818_MI;


extern MethodInfo m2874_MI;
extern "C" void m2874 (t502 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3817(__this, L_0, &m3817_MI);
		return;
	}
}
extern MethodInfo m2873_MI;
extern "C" void m2873 (t502 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		m3818(__this, L_0, &m3818_MI);
		return;
	}
}
extern MethodInfo m2872_MI;
extern "C" t604 * m2872 (t502 * __this, MethodInfo* method)
{
	typedef t604 * (*m2872_ftn) (t502 *);
	static m2872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3816 (t9 * __this , t2* p0, MethodInfo* method)
{
	typedef int32_t (*m3816_ftn) (t2*);
	static m3816_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3816_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(p0);
}
extern "C" void m3817 (t502 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3817_ftn) (t502 *, t2*);
	static m3817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
extern "C" void m3818 (t502 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m3818_ftn) (t502 *, t2*);
	static m3818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t765.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t765_TI;
#include "t765MD.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void t765_marshal(const t765& unmarshaled, t765_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = unmarshaled.f1;
	marshaled.f2 = unmarshaled.f2;
	marshaled.f3 = unmarshaled.f3;
	marshaled.f4 = unmarshaled.f4;
}
void t765_marshal_back(const t765_marshaled& marshaled, t765& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = marshaled.f1;
	unmarshaled.f2 = marshaled.f2;
	unmarshaled.f3 = marshaled.f3;
	unmarshaled.f4 = marshaled.f4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void t765_marshal_cleanup(t765_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
}
#include "t766.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t766_TI;
#include "t766MD.h"



#include "t767.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t767_TI;
#include "t767MD.h"



extern MethodInfo m3819_MI;
extern "C" t2* m3819 (t767 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f0);
		return L_0;
	}
}
extern MethodInfo m3820_MI;
extern "C" void m3820 (t767 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m3821_MI;
extern "C" t2* m3821 (t767 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern MethodInfo m3822_MI;
extern "C" void m3822 (t767 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void t767_marshal(const t767& unmarshaled, t767_marshaled& marshaled)
{
	marshaled.f0 = il2cpp_codegen_marshal_string(unmarshaled.f0);
	marshaled.f1 = il2cpp_codegen_marshal_string(unmarshaled.f1);
	marshaled.f2 = unmarshaled.f2;
}
void t767_marshal_back(const t767_marshaled& marshaled, t767& unmarshaled)
{
	unmarshaled.f0 = il2cpp_codegen_marshal_string_result(marshaled.f0);
	unmarshaled.f1 = il2cpp_codegen_marshal_string_result(marshaled.f1);
	unmarshaled.f2 = marshaled.f2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void t767_marshal_cleanup(t767_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.f0);
	marshaled.f0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.f1);
	marshaled.f1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t604_TI;
#include "t604MD.h"



#include "t426.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t426_TI;
#include "t426MD.h"



#include "t427.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t427_TI;
#include "t427MD.h"



#include "t428.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t428_TI;
#include "t428MD.h"



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
#include "t325.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t325_TI;
#include "t325MD.h"



extern MethodInfo m1211_MI;
extern "C" void m1211 (t325 * __this, t2* p0, MethodInfo* method)
{
	typedef void (*m1211_ftn) (t325 *, t2*);
	static m1211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m1211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, p0);
}
#include "t768.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t768_TI;
#include "t768MD.h"

extern TypeInfo t28_TI;
#include "t441MD.h"
#include "t28MD.h"
extern MethodInfo m2614_MI;
extern MethodInfo m2615_MI;
extern MethodInfo m2619_MI;
extern MethodInfo m2620_MI;
extern MethodInfo m392_MI;
extern MethodInfo m3831_MI;
extern MethodInfo m3834_MI;
extern MethodInfo m3832_MI;
extern MethodInfo m3833_MI;


extern MethodInfo m3823_MI;
extern "C" int32_t m3823 (t768 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->f3);
		return (((int32_t)L_0));
	}
}
extern MethodInfo m3824_MI;
extern "C" int32_t m3824 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f2);
		float L_1 = m2614(L_0, &m2614_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3825_MI;
extern "C" int32_t m3825 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f2);
		float L_1 = m2615(L_0, &m2615_MI);
		return (((int32_t)((-L_1))));
	}
}
extern MethodInfo m3826_MI;
extern "C" int32_t m3826 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f2);
		float L_1 = m2619(L_0, &m2619_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3827_MI;
extern "C" int32_t m3827 (t768 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t441 * L_1 = &(__this->f2);
		float L_2 = m2620(L_1, &m2620_MI);
		t441 * L_3 = &(__this->f2);
		float L_4 = m2615(L_3, &m2615_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
extern MethodInfo m3828_MI;
extern "C" int32_t m3828 (t768 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f7);
		t441 * L_1 = &(__this->f2);
		float L_2 = m2620(L_1, &m2620_MI);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
extern MethodInfo m3829_MI;
extern "C" int32_t m3829 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f2);
		float L_1 = m2619(L_0, &m2619_MI);
		return (((int32_t)L_1));
	}
}
extern MethodInfo m3830_MI;
extern "C" int32_t m3830 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f2);
		float L_1 = m2619(L_0, &m2619_MI);
		t441 * L_2 = &(__this->f2);
		float L_3 = m2614(L_2, &m2614_MI);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
extern "C" t28  m3831 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f1);
		float L_1 = m2619(L_0, &m2619_MI);
		t441 * L_2 = &(__this->f1);
		float L_3 = m2620(L_2, &m2620_MI);
		t28  L_4 = {0};
		m392(&L_4, L_1, L_3, &m392_MI);
		return L_4;
	}
}
extern "C" t28  m3832 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f1);
		float L_1 = m2619(L_0, &m2619_MI);
		t441 * L_2 = &(__this->f1);
		float L_3 = m2614(L_2, &m2614_MI);
		t441 * L_4 = &(__this->f1);
		float L_5 = m2620(L_4, &m2620_MI);
		t28  L_6 = {0};
		m392(&L_6, ((float)((float)L_1+(float)L_3)), L_5, &m392_MI);
		return L_6;
	}
}
extern "C" t28  m3833 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f1);
		float L_1 = m2619(L_0, &m2619_MI);
		t441 * L_2 = &(__this->f1);
		float L_3 = m2614(L_2, &m2614_MI);
		t441 * L_4 = &(__this->f1);
		float L_5 = m2620(L_4, &m2620_MI);
		t441 * L_6 = &(__this->f1);
		float L_7 = m2615(L_6, &m2615_MI);
		t28  L_8 = {0};
		m392(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), &m392_MI);
		return L_8;
	}
}
extern "C" t28  m3834 (t768 * __this, MethodInfo* method)
{
	{
		t441 * L_0 = &(__this->f1);
		float L_1 = m2619(L_0, &m2619_MI);
		t441 * L_2 = &(__this->f1);
		float L_3 = m2620(L_2, &m2620_MI);
		t441 * L_4 = &(__this->f1);
		float L_5 = m2615(L_4, &m2615_MI);
		t28  L_6 = {0};
		m392(&L_6, L_1, ((float)((float)L_3+(float)L_5)), &m392_MI);
		return L_6;
	}
}
extern MethodInfo m3835_MI;
extern "C" t28  m3835 (t768 * __this, MethodInfo* method)
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
		t28  L_1 = m3831(__this, &m3831_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3831(__this, &m3831_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3836_MI;
extern "C" t28  m3836 (t768 * __this, MethodInfo* method)
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
		t28  L_1 = m3834(__this, &m3834_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3832(__this, &m3832_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3837_MI;
extern "C" t28  m3837 (t768 * __this, MethodInfo* method)
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
		t28  L_1 = m3833(__this, &m3833_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3833(__this, &m3833_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
extern MethodInfo m3838_MI;
extern "C" t28  m3838 (t768 * __this, MethodInfo* method)
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
		t28  L_1 = m3832(__this, &m3832_MI);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		t28  L_2 = m3834(__this, &m3834_MI);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#include "t425.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void t768_marshal(const t768& unmarshaled, t768_marshaled& marshaled)
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
void t768_marshal_back(const t768_marshaled& marshaled, t768& unmarshaled)
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
void t768_marshal_cleanup(t768_marshaled& marshaled)
{
}
#include "t769.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t769_TI;
#include "t769MD.h"



extern MethodInfo m3839_MI;
extern "C" void m3839 (t769 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3840_MI;
extern "C" void m3840 (t769 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3840((t769 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t769(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3841_MI;
extern "C" t9 * m3841 (t769 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3842_MI;
extern "C" void m3842 (t769 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t424.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t424_TI;
#include "t424MD.h"

#include "t40.h"
#include "t577.h"
#include "t303.h"
extern TypeInfo t577_TI;
#include "t577MD.h"
extern Il2CppType t577_0_0_0;
extern MethodInfo m4306_MI;
extern Il2CppGenericMethod m4306_GM;


extern MethodInfo m2592_MI;
extern TypeInfo* t577_TI_var;
extern "C" void m2592 (t9 * __this , t577 * p0, MethodInfo* method)
{
	static bool m2592_init;
	if (!m2592_init)
	{
		t577_TI_var = il2cpp_codegen_class_from_type(&t577_0_0_0);
		m2592_init = true;
	}
	{
		t577 * L_0 = ((t424_SFs*)InitializedTypeInfo(&t424_TI)->static_fields)->f2;
		t577 * L_1 = p0;
		t293 * L_2 = m1074(NULL, L_0, L_1, &m1074_MI);
		((t424_SFs*)InitializedTypeInfo(&t424_TI)->static_fields)->f2 = ((t577 *)Castclass(L_2, t577_TI_var));
		return;
	}
}
extern MethodInfo m3843_MI;
extern TypeInfo* t577_TI_var;
extern "C" void m3843 (t9 * __this , t577 * p0, MethodInfo* method)
{
	static bool m3843_init;
	if (!m3843_init)
	{
		t577_TI_var = il2cpp_codegen_class_from_type(&t577_0_0_0);
		m3843_init = true;
	}
	{
		t577 * L_0 = ((t424_SFs*)InitializedTypeInfo(&t424_TI)->static_fields)->f2;
		t577 * L_1 = p0;
		t293 * L_2 = m1075(NULL, L_0, L_1, &m1075_MI);
		((t424_SFs*)InitializedTypeInfo(&t424_TI)->static_fields)->f2 = ((t577 *)Castclass(L_2, t577_TI_var));
		return;
	}
}
extern MethodInfo m2893_MI;
extern "C" t40 * m2893 (t424 * __this, MethodInfo* method)
{
	typedef t40 * (*m2893_ftn) (t424 *);
	static m2893_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2893_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2754_MI;
extern "C" bool m2754 (t424 * __this, uint16_t p0, MethodInfo* method)
{
	typedef bool (*m2754_ftn) (t424 *, uint16_t);
	static m2754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3844_MI;
extern MethodInfo* m4306_MI_var;
extern "C" void m3844 (t9 * __this , t424 * p0, MethodInfo* method)
{
	static bool m3844_init;
	if (!m3844_init)
	{
		m4306_MI_var = il2cpp_codegen_genericmethod_get_method(&m4306_GM);
		m3844_init = true;
	}
	t577 * V_0 = {0};
	{
		t577 * L_0 = ((t424_SFs*)InitializedTypeInfo(&t424_TI)->static_fields)->f2;
		V_0 = L_0;
		t577 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		t577 * L_2 = V_0;
		t424 * L_3 = p0;
		VirtActionInvoker1< t424 * >::Invoke(m4306_MI_var, L_2, L_3);
	}

IL_0013:
	{
		t424 * L_4 = p0;
		t769 * L_5 = (L_4->f3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		t424 * L_6 = p0;
		t769 * L_7 = (L_6->f3);
		VirtActionInvoker0::Invoke(&m3840_MI, L_7);
	}

IL_0029:
	{
		return;
	}
}
extern MethodInfo m2895_MI;
extern "C" bool m2895 (t424 * __this, MethodInfo* method)
{
	typedef bool (*m2895_ftn) (t424 *);
	static m2895_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2895_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2897_MI;
extern "C" int32_t m2897 (t424 * __this, MethodInfo* method)
{
	typedef int32_t (*m2897_ftn) (t424 *);
	static m2897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
#include "t594.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t594_TI;
#include "t594MD.h"



#include "t593.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t593_TI;
#include "t593MD.h"



#include "t477.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t477_TI;
#include "t477MD.h"

#include "t440.h"
#include "t770.h"
#include "t771.h"
#include "t459.h"
#include "t511.h"
extern TypeInfo t129_TI;
extern TypeInfo t440_TI;
extern TypeInfo t770_TI;
extern TypeInfo t771_TI;
extern TypeInfo t137_TI;
extern TypeInfo t511_TI;
#include "t129MD.h"
#include "t440MD.h"
#include "t770MD.h"
#include "t771MD.h"
#include "t511MD.h"
extern Il2CppType t440_0_0_0;
extern Il2CppType t770_0_0_0;
extern Il2CppType t771_0_0_0;
extern MethodInfo m1081_MI;
extern MethodInfo m2723_MI;
extern MethodInfo m3851_MI;
extern MethodInfo m2759_MI;
extern MethodInfo m2761_MI;
extern MethodInfo m3863_MI;
extern MethodInfo m3861_MI;
extern MethodInfo m3862_MI;
extern MethodInfo m2891_MI;
extern MethodInfo m4307_MI;
extern MethodInfo m4308_MI;
extern MethodInfo m4309_MI;
extern MethodInfo m3846_MI;
extern MethodInfo m3847_MI;
extern MethodInfo m3849_MI;
extern MethodInfo m3850_MI;
extern MethodInfo m365_MI;
extern MethodInfo m3855_MI;
extern MethodInfo m3857_MI;
extern MethodInfo m3852_MI;
extern MethodInfo m2767_MI;
extern MethodInfo m2769_MI;
extern MethodInfo m331_MI;
extern MethodInfo m4167_MI;
extern MethodInfo m3864_MI;
extern MethodInfo m3860_MI;
extern MethodInfo m3848_MI;
extern Il2CppGenericMethod m4307_GM;
extern Il2CppGenericMethod m4308_GM;
extern Il2CppGenericMethod m4309_GM;


extern MethodInfo m2719_MI;
extern "C" void m2719 (t477 * __this, MethodInfo* method)
{
	{
		m2891(__this, ((int32_t)50), &m2891_MI);
		return;
	}
}
extern TypeInfo* t440_TI_var;
extern TypeInfo* t770_TI_var;
extern TypeInfo* t771_TI_var;
extern MethodInfo* m4307_MI_var;
extern MethodInfo* m4308_MI_var;
extern MethodInfo* m4309_MI_var;
extern "C" void m2891 (t477 * __this, int32_t p0, MethodInfo* method)
{
	static bool m2891_init;
	if (!m2891_init)
	{
		t440_TI_var = il2cpp_codegen_class_from_type(&t440_0_0_0);
		t770_TI_var = il2cpp_codegen_class_from_type(&t770_0_0_0);
		t771_TI_var = il2cpp_codegen_class_from_type(&t771_0_0_0);
		m4307_MI_var = il2cpp_codegen_genericmethod_get_method(&m4307_GM);
		m4308_MI_var = il2cpp_codegen_genericmethod_get_method(&m4308_GM);
		m4309_MI_var = il2cpp_codegen_genericmethod_get_method(&m4309_GM);
		m2891_init = true;
	}
	{
		m336(__this, &m336_MI);
		int32_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t440_TI_var);
		t440 * L_1 = (t440 *)il2cpp_codegen_object_new (t440_TI_var);
		m4307(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), m4307_MI_var);
		__this->f5 = L_1;
		int32_t L_2 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(t770_TI_var);
		t770 * L_3 = (t770 *)il2cpp_codegen_object_new (t770_TI_var);
		m4308(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), m4308_MI_var);
		__this->f6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(t771_TI_var);
		t771 * L_4 = (t771 *)il2cpp_codegen_object_new (t771_TI_var);
		m4309(L_4, ((int32_t)20), m4309_MI_var);
		__this->f7 = L_4;
		m3846(__this, &m3846_MI);
		return;
	}
}
extern MethodInfo m3845_MI;
extern "C" void m3845 (t477 * __this, MethodInfo* method)
{
	{
		m3847(__this, &m3847_MI);
		return;
	}
}
extern "C" void m3846 (t477 * __this, MethodInfo* method)
{
	typedef void (*m3846_ftn) (t477 *);
	static m3846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
extern "C" void m3847 (t477 * __this, MethodInfo* method)
{
	typedef void (*m3847_ftn) (t477 *);
	static m3847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
extern "C" bool m3848 (t477 * __this, t2* p0, t424 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, t28  p15, t28  p16, bool p17, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t424 * L_1 = p1;
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
		bool L_20 = m3849(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, &m3849_MI);
		return L_20;
	}
}
extern "C" bool m3849 (t477 * __this, t2* p0, t424 * p1, t43  p2, int32_t p3, float p4, float p5, int32_t p6, bool p7, bool p8, int32_t p9, int32_t p10, int32_t p11, int32_t p12, bool p13, int32_t p14, float p15, float p16, float p17, float p18, bool p19, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		t424 * L_1 = p1;
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
		bool L_19 = m3850(NULL, __this, L_0, L_1, (&p2), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, &m3850_MI);
		return L_19;
	}
}
extern "C" bool m3850 (t9 * __this , t477 * p0, t2* p1, t424 * p2, t43 * p3, int32_t p4, float p5, float p6, int32_t p7, bool p8, bool p9, int32_t p10, int32_t p11, int32_t p12, int32_t p13, bool p14, int32_t p15, float p16, float p17, float p18, float p19, bool p20, MethodInfo* method)
{
	typedef bool (*m3850_ftn) (t477 *, t2*, t424 *, t43 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static m3850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20);
}
extern "C" t441  m2769 (t477 * __this, MethodInfo* method)
{
	typedef t441  (*m2769_ftn) (t477 *);
	static m2769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
extern "C" int32_t m3851 (t477 * __this, MethodInfo* method)
{
	typedef int32_t (*m3851_ftn) (t477 *);
	static m3851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3852 (t477 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3852_ftn) (t477 *, t9 *);
	static m3852_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3852_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3853_MI;
extern "C" t476* m3853 (t477 * __this, MethodInfo* method)
{
	typedef t476* (*m3853_ftn) (t477 *);
	static m3853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3854_MI;
extern "C" int32_t m3854 (t477 * __this, MethodInfo* method)
{
	typedef int32_t (*m3854_ftn) (t477 *);
	static m3854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2747_MI;
extern "C" int32_t m2747 (t477 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		t2* L_0 = (__this->f1);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		bool L_1 = m1081(NULL, L_0, &m1081_MI);
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
		int32_t L_3 = m2723(L_2, &m2723_MI);
		int32_t L_4 = m3851(__this, &m3851_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t129_TI));
		int32_t L_5 = m2759(NULL, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), &m2759_MI);
		int32_t L_6 = m2761(NULL, L_3, L_5, &m2761_MI);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
extern "C" void m3855 (t477 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3855_ftn) (t477 *, t9 *);
	static m3855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3856_MI;
extern "C" t772* m3856 (t477 * __this, MethodInfo* method)
{
	typedef t772* (*m3856_ftn) (t477 *);
	static m3856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2746_MI;
extern "C" int32_t m2746 (t477 * __this, MethodInfo* method)
{
	typedef int32_t (*m2746_ftn) (t477 *);
	static m2746_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2746_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
extern "C" void m3857 (t477 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3857_ftn) (t477 *, t9 *);
	static m3857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m3858_MI;
extern "C" t773* m3858 (t477 * __this, MethodInfo* method)
{
	typedef t773* (*m3858_ftn) (t477 *);
	static m3858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2786_MI;
extern "C" int32_t m2786 (t477 * __this, MethodInfo* method)
{
	typedef int32_t (*m2786_ftn) (t477 *);
	static m2786_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2786_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3859_MI;
extern "C" void m3859 (t477 * __this, MethodInfo* method)
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
extern "C" t511  m3860 (t477 * __this, t511  p0, MethodInfo* method)
{
	{
		t424 * L_0 = ((&p0)->f0);
		bool L_1 = m332(NULL, L_0, (t57 *)NULL, &m332_MI);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		t424 * L_2 = ((&p0)->f0);
		bool L_3 = m2895(L_2, &m2895_MI);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		t511  L_4 = p0;
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
		m1181(NULL, (t2*) &_stringLiteral266, &m1181_MI);
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
		m1181(NULL, (t2*) &_stringLiteral267, &m1181_MI);
		(&p0)->f8 = 0;
	}

IL_0075:
	{
		t511  L_8 = p0;
		return L_8;
	}
}
extern MethodInfo m2900_MI;
extern "C" void m2900 (t477 * __this, MethodInfo* method)
{
	{
		__this->f3 = 0;
		return;
	}
}
extern "C" void m3861 (t477 * __this, t770 * p0, MethodInfo* method)
{
	{
		t770 * L_0 = p0;
		m3855(__this, L_0, &m3855_MI);
		return;
	}
}
extern "C" void m3862 (t477 * __this, t771 * p0, MethodInfo* method)
{
	{
		t771 * L_0 = p0;
		m3857(__this, L_0, &m3857_MI);
		return;
	}
}
extern "C" void m3863 (t477 * __this, t440 * p0, MethodInfo* method)
{
	{
		t440 * L_0 = p0;
		m3852(__this, L_0, &m3852_MI);
		return;
	}
}
extern MethodInfo m2898_MI;
extern "C" float m2898 (t477 * __this, t2* p0, t511  p1, MethodInfo* method)
{
	t441  V_0 = {0};
	{
		(&p1)->f13 = 1;
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t511  L_1 = p1;
		m2767(__this, L_0, L_1, &m2767_MI);
		t441  L_2 = m2769(__this, &m2769_MI);
		V_0 = L_2;
		float L_3 = m2614((&V_0), &m2614_MI);
		return L_3;
	}
}
extern MethodInfo m2899_MI;
extern "C" float m2899 (t477 * __this, t2* p0, t511  p1, MethodInfo* method)
{
	t441  V_0 = {0};
	{
		(&p1)->f12 = 1;
		(&p1)->f11 = 1;
		t2* L_0 = p0;
		t511  L_1 = p1;
		m2767(__this, L_0, L_1, &m2767_MI);
		t441  L_2 = m2769(__this, &m2769_MI);
		V_0 = L_2;
		float L_3 = m2615((&V_0), &m2615_MI);
		return L_3;
	}
}
extern "C" bool m2767 (t477 * __this, t2* p0, t511  p1, MethodInfo* method)
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
		t511  L_4 = (__this->f2);
		bool L_5 = m4167((&p1), L_4, &m4167_MI);
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
		t511  L_8 = p1;
		bool L_9 = m3864(__this, L_7, L_8, &m3864_MI);
		return L_9;
	}
}
extern "C" bool m3864 (t477 * __this, t2* p0, t511  p1, MethodInfo* method)
{
	t511  V_0 = {0};
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		__this->f3 = 1;
		__this->f8 = 0;
		__this->f9 = 0;
		__this->f10 = 0;
		t511  L_1 = p1;
		__this->f2 = L_1;
		t511  L_2 = p1;
		t511  L_3 = m3860(__this, L_2, &m3860_MI);
		V_0 = L_3;
		t2* L_4 = p0;
		t424 * L_5 = ((&V_0)->f0);
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
		bool L_22 = m3848(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, &m3848_MI);
		__this->f4 = L_22;
		bool L_23 = (__this->f4);
		return L_23;
	}
}
extern MethodInfo m2901_MI;
extern "C" t9* m2901 (t477 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t440 * L_1 = (__this->f5);
		m3863(__this, L_1, &m3863_MI);
		__this->f8 = 1;
	}

IL_001e:
	{
		t440 * L_2 = (__this->f5);
		return L_2;
	}
}
extern MethodInfo m2748_MI;
extern "C" t9* m2748 (t477 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t770 * L_1 = (__this->f6);
		m3861(__this, L_1, &m3861_MI);
		__this->f9 = 1;
	}

IL_001e:
	{
		t770 * L_2 = (__this->f6);
		return L_2;
	}
}
extern MethodInfo m2744_MI;
extern "C" t9* m2744 (t477 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		t771 * L_1 = (__this->f7);
		m3862(__this, L_1, &m3862_MI);
		__this->f10 = 1;
	}

IL_001e:
	{
		t771 * L_2 = (__this->f7);
		return L_2;
	}
}
#include "t584.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t584_TI;
#include "t584MD.h"



#include "t574.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t574_TI;
#include "t574MD.h"



extern MethodInfo m2571_MI;
extern "C" void m2571 (t574 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m3865_MI;
extern "C" void m3865 (t574 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m3865((t574 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t574(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m3866_MI;
extern "C" t9 * m3866 (t574 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m3867_MI;
extern "C" void m3867 (t574 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t436.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t436_TI;
#include "t436MD.h"

extern MethodInfo m3869_MI;


extern MethodInfo m2572_MI;
extern "C" void m2572 (t9 * __this , t574 * p0, MethodInfo* method)
{
	{
		t574 * L_0 = ((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2;
		t574 * L_1 = p0;
		t293 * L_2 = m1074(NULL, L_0, L_1, &m1074_MI);
		((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2 = ((t574 *)Castclass(L_2, InitializedTypeInfo(&t574_TI)));
		return;
	}
}
extern MethodInfo m3868_MI;
extern "C" void m3868 (t9 * __this , t574 * p0, MethodInfo* method)
{
	{
		t574 * L_0 = ((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2;
		t574 * L_1 = p0;
		t293 * L_2 = m1075(NULL, L_0, L_1, &m1075_MI);
		((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2 = ((t574 *)Castclass(L_2, InitializedTypeInfo(&t574_TI)));
		return;
	}
}
extern MethodInfo m2644_MI;
extern "C" int32_t m2644 (t436 * __this, MethodInfo* method)
{
	typedef int32_t (*m2644_ftn) (t436 *);
	static m2644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2920_MI;
extern "C" bool m2920 (t436 * __this, MethodInfo* method)
{
	typedef bool (*m2920_ftn) (t436 *);
	static m2920_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2920_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2647_MI;
extern "C" t39 * m2647 (t436 * __this, MethodInfo* method)
{
	typedef t39 * (*m2647_ftn) (t436 *);
	static m2647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2896_MI;
extern "C" float m2896 (t436 * __this, MethodInfo* method)
{
	typedef float (*m2896_ftn) (t436 *);
	static m2896_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2896_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2924_MI;
extern "C" void m2924 (t436 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2924_ftn) (t436 *, float);
	static m2924_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2924_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2675_MI;
extern "C" float m2675 (t436 * __this, MethodInfo* method)
{
	typedef float (*m2675_ftn) (t436 *);
	static m2675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2925_MI;
extern "C" void m2925 (t436 * __this, float p0, MethodInfo* method)
{
	typedef void (*m2925_ftn) (t436 *, float);
	static m2925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2625_MI;
extern "C" bool m2625 (t436 * __this, MethodInfo* method)
{
	typedef bool (*m2625_ftn) (t436 *);
	static m2625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2646_MI;
extern "C" int32_t m2646 (t436 * __this, MethodInfo* method)
{
	typedef int32_t (*m2646_ftn) (t436 *);
	static m2646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2645_MI;
extern "C" int32_t m2645 (t436 * __this, MethodInfo* method)
{
	typedef int32_t (*m2645_ftn) (t436 *);
	static m2645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2655_MI;
extern "C" int32_t m2655 (t436 * __this, MethodInfo* method)
{
	typedef int32_t (*m2655_ftn) (t436 *);
	static m2655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2597_MI;
extern "C" t40 * m2597 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2597_ftn) ();
	static m2597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
extern MethodInfo m2892_MI;
extern "C" t40 * m2892 (t9 * __this , MethodInfo* method)
{
	typedef t40 * (*m2892_ftn) ();
	static m2892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
extern "C" void m3869 (t9 * __this , MethodInfo* method)
{
	{
		t574 * L_0 = ((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		t574 * L_1 = ((t436_SFs*)InitializedTypeInfo(&t436_TI)->static_fields)->f2;
		VirtActionInvoker0::Invoke(&m3865_MI, L_1);
	}

IL_0014:
	{
		return;
	}
}
extern MethodInfo m2835_MI;
extern "C" void m2835 (t9 * __this , MethodInfo* method)
{
	{
		m3869(NULL, &m3869_MI);
		return;
	}
}
#include "t578.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t578_TI;
#include "t578MD.h"

extern MethodInfo m3870_MI;


extern MethodInfo m2859_MI;
extern "C" bool m2859 (t578 * __this, MethodInfo* method)
{
	typedef bool (*m2859_ftn) (t578 *);
	static m2859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
extern "C" bool m3870 (t578 * __this, MethodInfo* method)
{
	typedef bool (*m3870_ftn) (t578 *);
	static m3870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2623_MI;
extern "C" bool m2623 (t578 * __this, MethodInfo* method)
{
	typedef bool (*m2623_ftn) (t578 *);
	static m2623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m3871_MI;
extern "C" bool m3871 (t578 * __this, t28  p0, t39 * p1, MethodInfo* method)
{
	{
		bool L_0 = m3870(__this, &m3870_MI);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t459_TI;
#include "t459MD.h"

#include "t559.h"
#include "t575.h"
extern TypeInfo t559_TI;
extern TypeInfo t47_TI;
#include "t559MD.h"
#include "t47MD.h"
extern MethodInfo m2585_MI;
extern MethodInfo m413_MI;
extern MethodInfo m354_MI;
extern MethodInfo m3412_MI;
extern MethodInfo m1204_MI;


extern MethodInfo m3872_MI;
extern "C" void m3872 (t9 * __this , MethodInfo* method)
{
	t459  V_0 = {0};
	{
		t559  L_0 = {0};
		m2585(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), &m2585_MI);
		((t459_SFs*)InitializedTypeInfo(&t459_TI)->static_fields)->f6 = L_0;
		t47  L_1 = {0};
		m413(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), &m413_MI);
		((t459_SFs*)InitializedTypeInfo(&t459_TI)->static_fields)->f7 = L_1;
		Initobj (InitializedTypeInfo(&t459_TI), (&V_0));
		t13  L_2 = m354(NULL, &m354_MI);
		(&V_0)->f0 = L_2;
		t13  L_3 = m3412(NULL, &m3412_MI);
		(&V_0)->f1 = L_3;
		t47  L_4 = ((t459_SFs*)InitializedTypeInfo(&t459_TI)->static_fields)->f7;
		(&V_0)->f5 = L_4;
		t559  L_5 = ((t459_SFs*)InitializedTypeInfo(&t459_TI)->static_fields)->f6;
		(&V_0)->f2 = L_5;
		t28  L_6 = m1204(NULL, &m1204_MI);
		(&V_0)->f3 = L_6;
		t28  L_7 = m1204(NULL, &m1204_MI);
		(&V_0)->f4 = L_7;
		t459  L_8 = V_0;
		((t459_SFs*)InitializedTypeInfo(&t459_TI)->static_fields)->f8 = L_8;
		return;
	}
}
#include "t435.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t435_TI;
#include "t435MD.h"

#include "t148.h"
#include "t309.h"
extern TypeInfo t158_TI;
extern TypeInfo t309_TI;
#include "t735MD.h"
extern Il2CppType t158_0_0_0;
extern MethodInfo m3873_MI;
extern MethodInfo m2774_MI;
extern MethodInfo m3586_MI;
extern MethodInfo m2632_MI;
extern MethodInfo m3874_MI;
extern MethodInfo m3875_MI;
extern Il2CppGenericMethod m2774_GM;
extern Il2CppGenericMethod m2632_GM;


extern MethodInfo m2630_MI;
extern "C" void m2630 (t435 * __this, t43  p0, MethodInfo* method)
{
	{
		m3873(NULL, __this, (&p0), &m3873_MI);
		return;
	}
}
extern "C" void m3873 (t9 * __this , t435 * p0, t43 * p1, MethodInfo* method)
{
	typedef void (*m3873_ftn) (t435 *, t43 *);
	static m3873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(p0, p1);
}
extern MethodInfo m2628_MI;
extern "C" t43  m2628 (t435 * __this, MethodInfo* method)
{
	typedef t43  (*m2628_ftn) (t435 *);
	static m2628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
extern MethodInfo m2974_MI;
extern "C" void m2974 (t435 * __this, bool p0, MethodInfo* method)
{
	typedef void (*m2974_ftn) (t435 *, bool);
	static m2974_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2974_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2618_MI;
extern "C" void m2618 (t435 * __this, t40 * p0, t148 * p1, MethodInfo* method)
{
	typedef void (*m2618_ftn) (t435 *, t40 *, t148 *);
	static m2618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2617_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m2774_MI_var;
extern MethodInfo* m2632_MI_var;
extern "C" void m2617 (t435 * __this, t440 * p0, MethodInfo* method)
{
	static bool m2617_init;
	if (!m2617_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2774_MI_var = il2cpp_codegen_genericmethod_get_method(&m2774_GM);
		m2632_MI_var = il2cpp_codegen_genericmethod_get_method(&m2632_GM);
		m2617_init = true;
	}
	{
		t440 * L_0 = p0;
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m2774_MI_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		t158* L_2 = ((t158*)SZArrayNew(t158_TI_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		t9 * L_4 = Box(InitializedTypeInfo(&t309_TI), &L_3);
		ArrayElementTypeCheck (L_2, L_4);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 0)) = (t9 *)L_4;
		t2* L_5 = m3586(NULL, (t2*) &_stringLiteral268, L_2, &m3586_MI);
		m1182(NULL, L_5, __this, &m1182_MI);
		t440 * L_6 = p0;
		VirtActionInvoker0::Invoke(m2632_MI_var, L_6);
	}

IL_0039:
	{
		t440 * L_7 = p0;
		m3874(__this, L_7, &m3874_MI);
		return;
	}
}
extern "C" void m3874 (t435 * __this, t9 * p0, MethodInfo* method)
{
	typedef void (*m3874_ftn) (t435 *, t9 *);
	static m3874_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3874_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, p0);
}
extern MethodInfo m2734_MI;
extern TypeInfo* t158_TI_var;
extern "C" void m2734 (t435 * __this, t476* p0, int32_t p1, MethodInfo* method)
{
	static bool m2734_init;
	if (!m2734_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m2734_init = true;
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
		t9 * L_3 = Box(InitializedTypeInfo(&t309_TI), &L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_1, 0)) = (t9 *)L_3;
		t2* L_4 = m3586(NULL, (t2*) &_stringLiteral268, L_1, &m3586_MI);
		m1182(NULL, L_4, __this, &m1182_MI);
		p1 = 0;
	}

IL_0031:
	{
		t476* L_5 = p0;
		int32_t L_6 = p1;
		m3875(__this, L_5, L_6, &m3875_MI);
		return;
	}
}
extern "C" void m3875 (t435 * __this, t476* p0, int32_t p1, MethodInfo* method)
{
	typedef void (*m3875_ftn) (t435 *, t476*, int32_t);
	static m3875_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3875_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, p0, p1);
}
extern MethodInfo m2611_MI;
extern "C" void m2611 (t435 * __this, MethodInfo* method)
{
	typedef void (*m2611_ftn) (t435 *);
	static m2611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
extern MethodInfo m2598_MI;
extern "C" int32_t m2598 (t435 * __this, MethodInfo* method)
{
	typedef int32_t (*m2598_ftn) (t435 *);
	static m2598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
#include "t583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t583_TI;
#include "t583MD.h"

#include "t592.h"
extern TypeInfo t37_TI;
extern TypeInfo t74_TI;
#include "t592MD.h"
#include "t434MD.h"
extern Il2CppType t37_0_0_0;
extern MethodInfo m3877_MI;
extern MethodInfo m3878_MI;
extern MethodInfo m3879_MI;
extern MethodInfo m388_MI;
extern MethodInfo m3881_MI;
extern MethodInfo m2742_MI;
extern MethodInfo m2743_MI;
extern MethodInfo m558_MI;
extern MethodInfo m3880_MI;
extern MethodInfo m617_MI;
extern MethodInfo m581_MI;
extern MethodInfo m2827_MI;
extern MethodInfo m2683_MI;
extern MethodInfo m2697_MI;
extern MethodInfo m2708_MI;
extern MethodInfo m2783_MI;
extern MethodInfo m2778_MI;
extern MethodInfo m2782_MI;
extern MethodInfo m2687_MI;
extern MethodInfo m2777_MI;
extern MethodInfo m2781_MI;
extern MethodInfo m2688_MI;
extern MethodInfo m2826_MI;
extern MethodInfo m3882_MI;
extern MethodInfo m2779_MI;
extern MethodInfo m2689_MI;


extern MethodInfo m3876_MI;
extern TypeInfo* t37_TI_var;
extern "C" void m3876 (t9 * __this , MethodInfo* method)
{
	static bool m3876_init;
	if (!m3876_init)
	{
		t37_TI_var = il2cpp_codegen_class_from_type(&t37_0_0_0);
		m3876_init = true;
	}
	{
		((t583_SFs*)InitializedTypeInfo(&t583_TI)->static_fields)->f0 = ((t37*)SZArrayNew(t37_TI_var, 4));
		return;
	}
}
extern MethodInfo m2658_MI;
extern "C" bool m2658 (t9 * __this , t434 * p0, t28  p1, t39 * p2, MethodInfo* method)
{
	{
		t434 * L_0 = p0;
		t39 * L_1 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		bool L_2 = m3877(NULL, L_0, (&p1), L_1, &m3877_MI);
		return L_2;
	}
}
extern "C" bool m3877 (t9 * __this , t434 * p0, t28 * p1, t39 * p2, MethodInfo* method)
{
	typedef bool (*m3877_ftn) (t434 *, t28 *, t39 *);
	static m3877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(p0, p1, p2);
}
extern MethodInfo m2626_MI;
extern "C" t28  m2626 (t9 * __this , t28  p0, t45 * p1, t436 * p2, MethodInfo* method)
{
	t28  V_0 = {0};
	{
		t28  L_0 = p0;
		t45 * L_1 = p1;
		t436 * L_2 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		m3878(NULL, L_0, L_1, L_2, (&V_0), &m3878_MI);
		t28  L_3 = V_0;
		return L_3;
	}
}
extern "C" void m3878 (t9 * __this , t28  p0, t45 * p1, t436 * p2, t28 * p3, MethodInfo* method)
{
	{
		t45 * L_0 = p1;
		t436 * L_1 = p2;
		t28 * L_2 = p3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		m3879(NULL, (&p0), L_0, L_1, L_2, &m3879_MI);
		return;
	}
}
extern "C" void m3879 (t9 * __this , t28 * p0, t45 * p1, t436 * p2, t28 * p3, MethodInfo* method)
{
	typedef void (*m3879_ftn) (t28 *, t45 *, t436 *, t28 *);
	static m3879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m3879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(p0, p1, p2, p3);
}
extern MethodInfo m2627_MI;
extern "C" t441  m2627 (t9 * __this , t434 * p0, t436 * p1, MethodInfo* method)
{
	typedef t441  (*m2627_ftn) (t434 *, t436 *);
	static m2627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (m2627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(p0, p1);
}
extern "C" bool m3880 (t9 * __this , t434 * p0, t28  p1, t39 * p2, t13 * p3, MethodInfo* method)
{
	t74  V_0 = {0};
	t592  V_1 = {0};
	float V_2 = 0.0f;
	{
		t13 * L_0 = p3;
		t28  L_1 = m1204(NULL, &m1204_MI);
		t13  L_2 = m388(NULL, L_1, &m388_MI);
		*L_0 = L_2;
		t39 * L_3 = p2;
		t28  L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		t74  L_5 = m3881(NULL, L_3, L_4, &m3881_MI);
		V_0 = L_5;
		t434 * L_6 = p0;
		t93  L_7 = m490(L_6, &m490_MI);
		t13  L_8 = m3412(NULL, &m3412_MI);
		t13  L_9 = m627(NULL, L_7, L_8, &m627_MI);
		t434 * L_10 = p0;
		t13  L_11 = m351(L_10, &m351_MI);
		m2742((&V_1), L_9, L_11, &m2742_MI);
		t74  L_12 = V_0;
		bool L_13 = m2743((&V_1), L_12, (&V_2), &m2743_MI);
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
extern MethodInfo m2701_MI;
extern "C" bool m2701 (t9 * __this , t434 * p0, t28  p1, t39 * p2, t28 * p3, MethodInfo* method)
{
	t13  V_0 = {0};
	{
		t28 * L_0 = p3;
		t28  L_1 = m1204(NULL, &m1204_MI);
		*L_0 = L_1;
		t434 * L_2 = p0;
		t28  L_3 = p1;
		t39 * L_4 = p2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		bool L_5 = m3880(NULL, L_2, L_3, L_4, (&V_0), &m3880_MI);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		t28 * L_6 = p3;
		t434 * L_7 = p0;
		t13  L_8 = V_0;
		t13  L_9 = m2741(L_7, L_8, &m2741_MI);
		t28  L_10 = m617(NULL, L_9, &m617_MI);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
extern "C" t74  m3881 (t9 * __this , t39 * p0, t28  p1, MethodInfo* method)
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
extern "C" void m2827 (t9 * __this , t434 * p0, int32_t p1, bool p2, bool p3, MethodInfo* method)
{
	int32_t V_0 = 0;
	t434 * V_1 = {0};
	t28  V_2 = {0};
	t28  V_3 = {0};
	t28  V_4 = {0};
	t28  V_5 = {0};
	float V_6 = 0.0f;
	{
		t434 * L_0 = p0;
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
		t434 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2947(L_3, L_4, &m2947_MI);
		V_1 = ((t434 *)IsInst(L_5, InitializedTypeInfo(&t434_TI)));
		t434 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		t434 * L_8 = V_1;
		int32_t L_9 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		m2827(NULL, L_8, L_9, 0, 1, &m2827_MI);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		t434 * L_12 = p0;
		int32_t L_13 = m2950(L_12, &m2950_MI);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		t434 * L_14 = p0;
		t28  L_15 = m2683(L_14, &m2683_MI);
		V_2 = L_15;
		int32_t L_16 = p1;
		int32_t L_17 = p1;
		float L_18 = m2697((&V_2), L_17, &m2697_MI);
		m2708((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), &m2708_MI);
		t434 * L_19 = p0;
		t28  L_20 = V_2;
		m2783(L_19, L_20, &m2783_MI);
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
		t434 * L_22 = p0;
		t28  L_23 = m2778(L_22, &m2778_MI);
		V_3 = L_23;
		int32_t L_24 = p1;
		int32_t L_25 = p1;
		float L_26 = m2697((&V_3), L_25, &m2697_MI);
		m2708((&V_3), L_24, ((-L_26)), &m2708_MI);
		t434 * L_27 = p0;
		t28  L_28 = V_3;
		m2782(L_27, L_28, &m2782_MI);
		t434 * L_29 = p0;
		t28  L_30 = m2687(L_29, &m2687_MI);
		V_4 = L_30;
		t434 * L_31 = p0;
		t28  L_32 = m2777(L_31, &m2777_MI);
		V_5 = L_32;
		int32_t L_33 = p1;
		float L_34 = m2697((&V_4), L_33, &m2697_MI);
		V_6 = L_34;
		int32_t L_35 = p1;
		int32_t L_36 = p1;
		float L_37 = m2697((&V_5), L_36, &m2697_MI);
		m2708((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), &m2708_MI);
		int32_t L_38 = p1;
		float L_39 = V_6;
		m2708((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), &m2708_MI);
		t434 * L_40 = p0;
		t28  L_41 = V_4;
		m2781(L_40, L_41, &m2781_MI);
		t434 * L_42 = p0;
		t28  L_43 = V_5;
		m2688(L_42, L_43, &m2688_MI);
		return;
	}
}
extern "C" void m2826 (t9 * __this , t434 * p0, bool p1, bool p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	t434 * V_1 = {0};
	{
		t434 * L_0 = p0;
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
		t434 * L_3 = p0;
		int32_t L_4 = V_0;
		t45 * L_5 = m2947(L_3, L_4, &m2947_MI);
		V_1 = ((t434 *)IsInst(L_5, InitializedTypeInfo(&t434_TI)));
		t434 * L_6 = V_1;
		bool L_7 = m332(NULL, L_6, (t57 *)NULL, &m332_MI);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		t434 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		m2826(NULL, L_8, 0, 1, &m2826_MI);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		t434 * L_11 = p0;
		int32_t L_12 = m2950(L_11, &m2950_MI);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		t434 * L_13 = p0;
		t434 * L_14 = p0;
		t28  L_15 = m2683(L_14, &m2683_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		t28  L_16 = m3882(NULL, L_15, &m3882_MI);
		m2783(L_13, L_16, &m2783_MI);
		t434 * L_17 = p0;
		t434 * L_18 = p0;
		t28  L_19 = m2779(L_18, &m2779_MI);
		t28  L_20 = m3882(NULL, L_19, &m3882_MI);
		m2689(L_17, L_20, &m2689_MI);
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
		t434 * L_22 = p0;
		t434 * L_23 = p0;
		t28  L_24 = m2778(L_23, &m2778_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t583_TI));
		t28  L_25 = m3882(NULL, L_24, &m3882_MI);
		m2782(L_22, L_25, &m2782_MI);
		t434 * L_26 = p0;
		t434 * L_27 = p0;
		t28  L_28 = m2687(L_27, &m2687_MI);
		t28  L_29 = m3882(NULL, L_28, &m3882_MI);
		m2781(L_26, L_29, &m2781_MI);
		t434 * L_30 = p0;
		t434 * L_31 = p0;
		t28  L_32 = m2777(L_31, &m2777_MI);
		t28  L_33 = m3882(NULL, L_32, &m3882_MI);
		m2688(L_30, L_33, &m2688_MI);
		return;
	}
}
extern "C" t28  m3882 (t9 * __this , t28  p0, MethodInfo* method)
{
	{
		float L_0 = ((&p0)->f2);
		float L_1 = ((&p0)->f1);
		t28  L_2 = {0};
		m392(&L_2, L_0, L_1, &m392_MI);
		return L_2;
	}
}
#include "t774.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t774_TI;
#include "t774MD.h"

#include "t775.h"
#include "t776.h"
extern TypeInfo t775_TI;
extern TypeInfo t776_TI;
#include "t8MD.h"
extern MethodInfo m3884_MI;
extern MethodInfo m4310_MI;
extern MethodInfo m3885_MI;
extern MethodInfo m3886_MI;


extern MethodInfo m3883_MI;
extern "C" void m3883 (t774 * __this, MethodInfo* method)
{
	{
		__this->f0 = 1;
		m336(__this, &m336_MI);
		return;
	}
}
extern "C" uint64_t m3884 (t774 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" uint64_t m3885 (t774 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m3886 (t774 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m3887_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3887 (t774 * __this, MethodInfo* method)
{
	static bool m3887_init;
	if (!m3887_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3887_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3884(__this, &m3884_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t775_TI), &L_4);
		t2* L_6 = m4310(L_5, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint64_t L_8 = m3885(__this, &m3885_MI);
		uint64_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t776_TI), &L_9);
		t2* L_11 = m4310(L_10, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t158* L_12 = L_7;
		int32_t L_13 = m3886(__this, &m3886_MI);
		int32_t L_14 = L_13;
		t9 * L_15 = Box(InitializedTypeInfo(&t125_TI), &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		*((t9 **)(t9 **)SZArrayLdElema(L_12, 3)) = (t9 *)L_15;
		t2* L_16 = m3586(NULL, (t2*) &_stringLiteral269, L_12, &m3586_MI);
		return L_16;
	}
}
#include "t777.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t777_TI;
#include "t777MD.h"

#include "t890.h"
extern TypeInfo t778_TI;
extern TypeInfo t890_TI;
extern TypeInfo t891_TI;
#include "t890MD.h"
#include "t891MD.h"
extern Il2CppType t778_0_0_0;
extern MethodInfo m4311_MI;
extern MethodInfo m610_MI;
extern MethodInfo m4312_MI;
extern MethodInfo m4313_MI;
extern MethodInfo m4314_MI;
extern MethodInfo m4315_MI;
extern MethodInfo m4316_MI;
extern Il2CppGenericMethod m4311_GM;


extern MethodInfo m3888_MI;
extern "C" void m3888 (t777 * __this, MethodInfo* method)
{
	{
		m336(__this, &m336_MI);
		return;
	}
}
extern MethodInfo m3889_MI;
extern MethodInfo* m4311_MI_var;
extern "C" t2* m3889 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3889_init;
	if (!m3889_init)
	{
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3889_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4311_MI_var, L_0, L_1, (&p1));
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
		t2* L_5 = m610(NULL, L_4, (t2*) &_stringLiteral271, &m610_MI);
		t890 * L_6 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_6, L_5, &m4312_MI);
		il2cpp_codegen_raise_exception(L_6);
	}
}
extern MethodInfo m3890_MI;
extern MethodInfo* m4311_MI_var;
extern "C" int32_t m3890 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3890_init;
	if (!m3890_init)
	{
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3890_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4311_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		int32_t L_4 = m4313(NULL, L_3, &m4313_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral271, &m610_MI);
		t890 * L_7 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_7, L_6, &m4312_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3891_MI;
extern MethodInfo* m4311_MI_var;
extern "C" uint16_t m3891 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3891_init;
	if (!m3891_init)
	{
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3891_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4311_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		uint16_t L_4 = m4314(NULL, L_3, &m4314_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral271, &m610_MI);
		t890 * L_7 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_7, L_6, &m4312_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3892_MI;
extern MethodInfo* m4311_MI_var;
extern "C" uint64_t m3892 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3892_init;
	if (!m3892_init)
	{
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3892_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4311_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		uint64_t L_4 = m4315(NULL, L_3, &m4315_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral271, &m610_MI);
		t890 * L_7 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_7, L_6, &m4312_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
extern MethodInfo m3893_MI;
extern MethodInfo* m4311_MI_var;
extern "C" bool m3893 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method)
{
	static bool m3893_init;
	if (!m3893_init)
	{
		m4311_MI_var = il2cpp_codegen_genericmethod_get_method(&m4311_GM);
		m3893_init = true;
	}
	{
		t9* L_0 = p2;
		t2* L_1 = p0;
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4311_MI_var, L_0, L_1, (&p1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		t9 * L_3 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		bool L_4 = m4316(NULL, L_3, &m4316_MI);
		return L_4;
	}

IL_0015:
	{
		t2* L_5 = p0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_6 = m610(NULL, L_5, (t2*) &_stringLiteral271, &m610_MI);
		t890 * L_7 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_7, L_6, &m4312_MI);
		il2cpp_codegen_raise_exception(L_7);
	}
}
#include "t779.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t779_TI;
#include "t779MD.h"

extern MethodInfo m3895_MI;
extern MethodInfo m3897_MI;
extern MethodInfo m3896_MI;
extern MethodInfo m3898_MI;


extern MethodInfo m3894_MI;
extern "C" void m3894 (t779 * __this, MethodInfo* method)
{
	{
		m3888(__this, &m3888_MI);
		return;
	}
}
extern "C" bool m3895 (t779 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3896 (t779 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3897 (t779 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3898 (t779 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern MethodInfo m3899_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3899 (t779 * __this, MethodInfo* method)
{
	static bool m3899_init;
	if (!m3899_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3899_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		bool L_3 = m3895(__this, &m3895_MI);
		bool L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t124_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m3897(__this, &m3897_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t2* L_8 = m3586(NULL, (t2*) &_stringLiteral272, L_6, &m3586_MI);
		return L_8;
	}
}
extern MethodInfo m3900_MI;
extern TypeInfo* t778_TI_var;
extern "C" void m3900 (t779 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3900_init;
	if (!m3900_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m3900_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t778_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		bool L_4 = m3893(__this, (t2*) &_stringLiteral273, L_2, L_3, &m3893_MI);
		m3896(__this, L_4, &m3896_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3889(__this, (t2*) &_stringLiteral274, L_5, L_6, &m3889_MI);
		m3898(__this, L_7, &m3898_MI);
		bool L_8 = m3895(__this, &m3895_MI);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		t2* L_9 = m3897(__this, &m3897_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = m610(NULL, (t2*) &_stringLiteral275, L_9, &m610_MI);
		t890 * L_11 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_11, L_10, &m4312_MI);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
#include "t780.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t780_TI;
#include "t780MD.h"



extern MethodInfo m3901_MI;
extern "C" void m3901 (t780 * __this, MethodInfo* method)
{
	{
		m3894(__this, &m3894_MI);
		return;
	}
}
#include "t781.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t781_TI;
#include "t781MD.h"

#include "t168.h"
#include "t782.h"
extern TypeInfo t168_TI;
extern TypeInfo t782_TI;
#include "t782MD.h"
extern Il2CppType t782_0_0_0;
extern MethodInfo m3903_MI;
extern MethodInfo m3905_MI;
extern MethodInfo m3907_MI;
extern MethodInfo m3909_MI;
extern MethodInfo m3911_MI;
extern MethodInfo m4317_MI;
extern Il2CppGenericMethod m4317_GM;


extern MethodInfo m3902_MI;
extern "C" void m3902 (t781 * __this, MethodInfo* method)
{
	{
		m3883(__this, &m3883_MI);
		return;
	}
}
extern "C" t2* m3903 (t781 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3904_MI;
extern "C" void m3904 (t781 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint32_t m3905 (t781 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3906_MI;
extern "C" void m3906 (t781 * __this, uint32_t p0, MethodInfo* method)
{
	{
		uint32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" bool m3907 (t781 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3908_MI;
extern "C" void m3908 (t781 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t2* m3909 (t781 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f7);
		return L_0;
	}
}
extern MethodInfo m3910_MI;
extern "C" void m3910 (t781 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern "C" t782 * m3911 (t781 * __this, MethodInfo* method)
{
	{
		t782 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3912_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4317_MI_var;
extern "C" t2* m3912 (t781 * __this, MethodInfo* method)
{
	static bool m3912_init;
	if (!m3912_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4317_MI_var = il2cpp_codegen_genericmethod_get_method(&m4317_GM);
		m3912_init = true;
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
		t2* L_1 = m3887(__this, &m3887_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3903(__this, &m3903_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		uint32_t L_5 = m3905(__this, &m3905_MI);
		uint32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t168_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		bool L_9 = m3907(__this, &m3907_MI);
		bool L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t124_TI), &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_11;
		t158* L_12 = L_8;
		t2* L_13 = m3909(__this, &m3909_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_15 = m331(NULL, L_13, L_14, &m331_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral276;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral276;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral277;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (t2*) &_stringLiteral278;
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
		t782 * L_17 = m3911(__this, &m3911_MI);
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
		t782 * L_18 = m3911(__this, &m3911_MI);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4317_MI_var, L_18);
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
		t2* L_22 = m3586(NULL, G_B6_4, G_B6_3, &m3586_MI);
		return L_22;
	}
}
#include "t783.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t783_TI;
#include "t783MD.h"

#include "t784.h"
#include "t785.h"
extern TypeInfo t784_TI;
extern TypeInfo t785_TI;
extern MethodInfo m3914_MI;
extern MethodInfo m3916_MI;
extern MethodInfo m3918_MI;
extern MethodInfo m3922_MI;
extern MethodInfo m3924_MI;
extern MethodInfo m3915_MI;
extern MethodInfo m3917_MI;
extern MethodInfo m3919_MI;
extern MethodInfo m3921_MI;
extern MethodInfo m3923_MI;
extern MethodInfo m3925_MI;


extern MethodInfo m3913_MI;
extern "C" void m3913 (t783 * __this, MethodInfo* method)
{
	{
		m3901(__this, &m3901_MI);
		return;
	}
}
extern "C" t2* m3914 (t783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3915 (t783 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3916 (t783 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3917 (t783 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3918 (t783 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3919 (t783 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3920_MI;
extern "C" t2* m3920 (t783 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3921 (t783 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3922 (t783 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3923 (t783 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3924 (t783 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3925 (t783 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3926_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3926 (t783 * __this, MethodInfo* method)
{
	static bool m3926_init;
	if (!m3926_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3926_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3899(__this, &m3899_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3914(__this, &m3914_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3916(__this, &m3916_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3918(__this, &m3918_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t784_TI), &L_10);
		t2* L_12 = m4310(L_11, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3922(__this, &m3922_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t785_TI), &L_15);
		t2* L_17 = m4310(L_16, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3924(__this, &m3924_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3586(NULL, (t2*) &_stringLiteral279, L_18, &m3586_MI);
		return L_22;
	}
}
extern MethodInfo m3927_MI;
extern TypeInfo* t778_TI_var;
extern "C" void m3927 (t783 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3927_init;
	if (!m3927_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m3927_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3900(__this, L_0, &m3900_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t778_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3889(__this, (t2*) &_stringLiteral280, L_3, L_4, &m3889_MI);
		m3915(__this, L_5, &m3915_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3890(__this, (t2*) &_stringLiteral281, L_6, L_7, &m3890_MI);
		m3917(__this, L_8, &m3917_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3892(__this, (t2*) &_stringLiteral282, L_9, L_10, &m3892_MI);
		m3919(__this, L_11, &m3919_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3889(__this, (t2*) &_stringLiteral283, L_12, L_13, &m3889_MI);
		m3921(__this, L_14, &m3921_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3891(__this, (t2*) &_stringLiteral284, L_15, L_16, &m3891_MI);
		m3923(__this, L_17, &m3923_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3893(__this, (t2*) &_stringLiteral285, L_18, L_19, &m3893_MI);
		m3925(__this, L_20, &m3925_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral286, L_22, &m610_MI);
		t890 * L_24 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_24, L_23, &m4312_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t786.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t786_TI;
#include "t786MD.h"

extern MethodInfo m3929_MI;
extern MethodInfo m3931_MI;


extern MethodInfo m3928_MI;
extern "C" void m3928 (t786 * __this, MethodInfo* method)
{
	{
		m3883(__this, &m3883_MI);
		return;
	}
}
extern "C" uint64_t m3929 (t786 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3930_MI;
extern "C" void m3930 (t786 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" t2* m3931 (t786 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3932_MI;
extern "C" void m3932 (t786 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3933_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3933 (t786 * __this, MethodInfo* method)
{
	static bool m3933_init;
	if (!m3933_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3933_init = true;
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
		t2* L_1 = m3887(__this, &m3887_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3929(__this, &m3929_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t784_TI), &L_4);
		t2* L_6 = m4310(L_5, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m3931(__this, &m3931_MI);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_9 = ((t2_SFs*)(&t2_TI)->static_fields)->f2;
		bool L_10 = m331(NULL, L_8, L_9, &m331_MI);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (t2*) &_stringLiteral287;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (t2*) &_stringLiteral287;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (t2*) &_stringLiteral277;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (t2*) &_stringLiteral278;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((t9 **)(t9 **)SZArrayLdElema(G_B3_2, G_B3_1)) = (t9 *)G_B3_0;
		t2* L_11 = m3586(NULL, G_B3_4, G_B3_3, &m3586_MI);
		return L_11;
	}
}
#include "t787.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t787_TI;
#include "t787MD.h"

extern MethodInfo m3935_MI;
extern MethodInfo m3937_MI;
extern MethodInfo m3939_MI;
extern MethodInfo m3943_MI;
extern MethodInfo m3945_MI;
extern MethodInfo m3936_MI;
extern MethodInfo m3938_MI;
extern MethodInfo m3940_MI;
extern MethodInfo m3942_MI;
extern MethodInfo m3944_MI;
extern MethodInfo m3946_MI;


extern MethodInfo m3934_MI;
extern "C" void m3934 (t787 * __this, MethodInfo* method)
{
	{
		m3901(__this, &m3901_MI);
		return;
	}
}
extern "C" t2* m3935 (t787 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3936 (t787 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern "C" int32_t m3937 (t787 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3938 (t787 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" uint64_t m3939 (t787 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3940 (t787 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3941_MI;
extern "C" t2* m3941 (t787 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3942 (t787 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" uint16_t m3943 (t787 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f6);
		return L_0;
	}
}
extern "C" void m3944 (t787 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" bool m3945 (t787 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" void m3946 (t787 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f7 = L_0;
		return;
	}
}
extern MethodInfo m3947_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3947 (t787 * __this, MethodInfo* method)
{
	static bool m3947_init;
	if (!m3947_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3947_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 6));
		t2* L_1 = m3899(__this, &m3899_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t2* L_3 = m3935(__this, &m3935_MI);
		ArrayElementTypeCheck (L_2, L_3);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_3;
		t158* L_4 = L_2;
		int32_t L_5 = m3937(__this, &m3937_MI);
		int32_t L_6 = L_5;
		t9 * L_7 = Box(InitializedTypeInfo(&t125_TI), &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_4, 2)) = (t9 *)L_7;
		t158* L_8 = L_4;
		uint64_t L_9 = m3939(__this, &m3939_MI);
		uint64_t L_10 = L_9;
		t9 * L_11 = Box(InitializedTypeInfo(&t784_TI), &L_10);
		t2* L_12 = m4310(L_11, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_8, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_12;
		t158* L_13 = L_8;
		uint16_t L_14 = m3943(__this, &m3943_MI);
		uint16_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t785_TI), &L_15);
		t2* L_17 = m4310(L_16, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_13, L_17);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_17;
		t158* L_18 = L_13;
		bool L_19 = m3945(__this, &m3945_MI);
		bool L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t124_TI), &L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((t9 **)(t9 **)SZArrayLdElema(L_18, 5)) = (t9 *)L_21;
		t2* L_22 = m3586(NULL, (t2*) &_stringLiteral279, L_18, &m3586_MI);
		return L_22;
	}
}
extern MethodInfo m3948_MI;
extern TypeInfo* t778_TI_var;
extern "C" void m3948 (t787 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3948_init;
	if (!m3948_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m3948_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3900(__this, L_0, &m3900_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t778_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t2* L_5 = m3889(__this, (t2*) &_stringLiteral280, L_3, L_4, &m3889_MI);
		m3936(__this, L_5, &m3936_MI);
		t9 * L_6 = p0;
		t9* L_7 = V_0;
		int32_t L_8 = m3890(__this, (t2*) &_stringLiteral281, L_6, L_7, &m3890_MI);
		m3938(__this, L_8, &m3938_MI);
		t9 * L_9 = p0;
		t9* L_10 = V_0;
		uint64_t L_11 = m3892(__this, (t2*) &_stringLiteral282, L_9, L_10, &m3892_MI);
		m3940(__this, L_11, &m3940_MI);
		t9 * L_12 = p0;
		t9* L_13 = V_0;
		t2* L_14 = m3889(__this, (t2*) &_stringLiteral283, L_12, L_13, &m3889_MI);
		m3942(__this, L_14, &m3942_MI);
		t9 * L_15 = p0;
		t9* L_16 = V_0;
		uint16_t L_17 = m3891(__this, (t2*) &_stringLiteral284, L_15, L_16, &m3891_MI);
		m3944(__this, L_17, &m3944_MI);
		t9 * L_18 = p0;
		t9* L_19 = V_0;
		bool L_20 = m3893(__this, (t2*) &_stringLiteral285, L_18, L_19, &m3893_MI);
		m3946(__this, L_20, &m3946_MI);
		goto IL_00a1;
	}

IL_008b:
	{
		t9 * L_21 = p0;
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_23 = m610(NULL, (t2*) &_stringLiteral286, L_22, &m610_MI);
		t890 * L_24 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_24, L_23, &m4312_MI);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
#include "t788.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t788_TI;
#include "t788MD.h"

extern MethodInfo m3950_MI;


extern MethodInfo m3949_MI;
extern "C" void m3949 (t788 * __this, MethodInfo* method)
{
	{
		m3883(__this, &m3883_MI);
		return;
	}
}
extern "C" uint64_t m3950 (t788 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3951_MI;
extern "C" void m3951 (t788 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern MethodInfo m3952_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3952 (t788 * __this, MethodInfo* method)
{
	static bool m3952_init;
	if (!m3952_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3952_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3887(__this, &m3887_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3950(__this, &m3950_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t784_TI), &L_4);
		t2* L_6 = m4310(L_5, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3586(NULL, (t2*) &_stringLiteral288, L_2, &m3586_MI);
		return L_7;
	}
}
#include "t789.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t789_TI;
#include "t789MD.h"

extern MethodInfo m3954_MI;
extern MethodInfo m3956_MI;


extern MethodInfo m3953_MI;
extern "C" void m3953 (t789 * __this, MethodInfo* method)
{
	{
		m3883(__this, &m3883_MI);
		return;
	}
}
extern "C" uint64_t m3954 (t789 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3955_MI;
extern "C" void m3955 (t789 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" uint16_t m3956 (t789 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3957_MI;
extern "C" void m3957 (t789 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern MethodInfo m3958_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3958 (t789 * __this, MethodInfo* method)
{
	static bool m3958_init;
	if (!m3958_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3958_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 3));
		t2* L_1 = m3887(__this, &m3887_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint64_t L_3 = m3954(__this, &m3954_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t784_TI), &L_4);
		t2* L_6 = m4310(L_5, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		uint16_t L_8 = m3956(__this, &m3956_MI);
		uint16_t L_9 = L_8;
		t9 * L_10 = Box(InitializedTypeInfo(&t785_TI), &L_9);
		t2* L_11 = m4310(L_10, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_7, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_11;
		t2* L_12 = m3586(NULL, (t2*) &_stringLiteral289, L_7, &m3586_MI);
		return L_12;
	}
}
#include "t790.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t790_TI;
#include "t790MD.h"

extern MethodInfo m3960_MI;
extern MethodInfo m3962_MI;
extern MethodInfo m3964_MI;
extern MethodInfo m3966_MI;
extern MethodInfo m3967_MI;


extern MethodInfo m3959_MI;
extern "C" void m3959 (t790 * __this, MethodInfo* method)
{
	{
		m3883(__this, &m3883_MI);
		return;
	}
}
extern "C" int32_t m3960 (t790 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern MethodInfo m3961_MI;
extern "C" void m3961 (t790 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" int32_t m3962 (t790 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f5);
		return L_0;
	}
}
extern MethodInfo m3963_MI;
extern "C" void m3963 (t790 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t2* m3964 (t790 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3965_MI;
extern "C" void m3965 (t790 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f6 = L_0;
		return;
	}
}
extern "C" t782 * m3966 (t790 * __this, MethodInfo* method)
{
	{
		t782 * L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t782 * m3967 (t790 * __this, MethodInfo* method)
{
	{
		t782 * L_0 = (__this->f8);
		return L_0;
	}
}
extern MethodInfo m3968_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4317_MI_var;
extern "C" t2* m3968 (t790 * __this, MethodInfo* method)
{
	static bool m3968_init;
	if (!m3968_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4317_MI_var = il2cpp_codegen_genericmethod_get_method(&m4317_GM);
		m3968_init = true;
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
		t2* L_1 = m3887(__this, &m3887_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		int32_t L_3 = m3960(__this, &m3960_MI);
		int32_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t125_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		int32_t L_7 = m3962(__this, &m3962_MI);
		int32_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t125_TI), &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_9;
		t158* L_10 = L_6;
		t2* L_11 = m3964(__this, &m3964_MI);
		ArrayElementTypeCheck (L_10, L_11);
		*((t9 **)(t9 **)SZArrayLdElema(L_10, 3)) = (t9 *)L_11;
		t158* L_12 = L_10;
		t782 * L_13 = m3966(__this, &m3966_MI);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (t2*) &_stringLiteral290;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (t2*) &_stringLiteral290;
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
		t782 * L_14 = m3966(__this, &m3966_MI);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4317_MI_var, L_14);
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
		t782 * L_19 = m3967(__this, &m3967_MI);
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
		t782 * L_20 = m3967(__this, &m3967_MI);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4317_MI_var, L_20);
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
		t2* L_24 = m3586(NULL, G_B6_4, G_B6_3, &m3586_MI);
		return L_24;
	}
}
#include "t791.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t791_TI;
#include "t791MD.h"

extern MethodInfo m3970_MI;
extern MethodInfo m3972_MI;
extern MethodInfo m3974_MI;
extern MethodInfo m3971_MI;
extern MethodInfo m3973_MI;
extern MethodInfo m3975_MI;


extern MethodInfo m3969_MI;
extern "C" void m3969 (t791 * __this, MethodInfo* method)
{
	{
		m3888(__this, &m3888_MI);
		return;
	}
}
extern "C" uint16_t m3970 (t791 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3971 (t791 * __this, uint16_t p0, MethodInfo* method)
{
	{
		uint16_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3972 (t791 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3973 (t791 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" t2* m3974 (t791 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3975 (t791 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3976_MI;
extern TypeInfo* t158_TI_var;
extern "C" t2* m3976 (t791 * __this, MethodInfo* method)
{
	static bool m3976_init;
	if (!m3976_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m3976_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 4));
		t2* L_1 = m673(__this, &m673_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		uint16_t L_3 = m3970(__this, &m3970_MI);
		uint16_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t785_TI), &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_5;
		t158* L_6 = L_2;
		t2* L_7 = m3972(__this, &m3972_MI);
		ArrayElementTypeCheck (L_6, L_7);
		*((t9 **)(t9 **)SZArrayLdElema(L_6, 2)) = (t9 *)L_7;
		t158* L_8 = L_6;
		t2* L_9 = m3974(__this, &m3974_MI);
		ArrayElementTypeCheck (L_8, L_9);
		*((t9 **)(t9 **)SZArrayLdElema(L_8, 3)) = (t9 *)L_9;
		t2* L_10 = m3586(NULL, (t2*) &_stringLiteral291, L_8, &m3586_MI);
		return L_10;
	}
}
extern MethodInfo m3977_MI;
extern TypeInfo* t778_TI_var;
extern "C" void m3977 (t791 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3977_init;
	if (!m3977_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m3977_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t778_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint16_t L_4 = m3891(__this, (t2*) &_stringLiteral284, L_2, L_3, &m3891_MI);
		m3971(__this, L_4, &m3971_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3889(__this, (t2*) &_stringLiteral292, L_5, L_6, &m3889_MI);
		m3973(__this, L_7, &m3973_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		t2* L_10 = m3889(__this, (t2*) &_stringLiteral293, L_8, L_9, &m3889_MI);
		m3975(__this, L_10, &m3975_MI);
		goto IL_0061;
	}

IL_004b:
	{
		t9 * L_11 = p0;
		t2* L_12 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_13 = m610(NULL, (t2*) &_stringLiteral286, L_12, &m610_MI);
		t890 * L_14 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_14, L_13, &m4312_MI);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
#include "t792.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t792_TI;
#include "t792MD.h"

#include "t793.h"
extern TypeInfo t793_TI;
#include "t793MD.h"
extern Il2CppType t793_0_0_0;
extern MethodInfo m3979_MI;
extern MethodInfo m3981_MI;
extern MethodInfo m3983_MI;
extern MethodInfo m3984_MI;
extern MethodInfo m3986_MI;
extern MethodInfo m3988_MI;
extern MethodInfo m3990_MI;
extern MethodInfo m3992_MI;
extern MethodInfo m4318_MI;
extern MethodInfo m3980_MI;
extern MethodInfo m3982_MI;
extern MethodInfo m3985_MI;
extern MethodInfo m3987_MI;
extern MethodInfo m3989_MI;
extern MethodInfo m3993_MI;
struct t777;
#include "t318.h"
#include "t892.h"
extern "C" t793 * m4319 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4318_GM;
extern Il2CppGenericMethod m4319_GM;


extern MethodInfo m3978_MI;
extern "C" void m3978 (t792 * __this, MethodInfo* method)
{
	{
		m3888(__this, &m3888_MI);
		return;
	}
}
extern "C" uint64_t m3979 (t792 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->f0);
		return L_0;
	}
}
extern "C" void m3980 (t792 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t2* m3981 (t792 * __this, MethodInfo* method)
{
	{
		t2* L_0 = (__this->f1);
		return L_0;
	}
}
extern "C" void m3982 (t792 * __this, t2* p0, MethodInfo* method)
{
	{
		t2* L_0 = p0;
		__this->f1 = L_0;
		return;
	}
}
extern "C" int32_t m3983 (t792 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" int32_t m3984 (t792 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f3);
		return L_0;
	}
}
extern "C" void m3985 (t792 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" int32_t m3986 (t792 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->f4);
		return L_0;
	}
}
extern "C" void m3987 (t792 * __this, int32_t p0, MethodInfo* method)
{
	{
		int32_t L_0 = p0;
		__this->f4 = L_0;
		return;
	}
}
extern "C" bool m3988 (t792 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->f5);
		return L_0;
	}
}
extern "C" void m3989 (t792 * __this, bool p0, MethodInfo* method)
{
	{
		bool L_0 = p0;
		__this->f5 = L_0;
		return;
	}
}
extern "C" t782 * m3990 (t792 * __this, MethodInfo* method)
{
	{
		t782 * L_0 = (__this->f6);
		return L_0;
	}
}
extern MethodInfo m3991_MI;
extern "C" uint16_t m3991 (t792 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->f7);
		return L_0;
	}
}
extern "C" t793 * m3992 (t792 * __this, MethodInfo* method)
{
	{
		t793 * L_0 = (__this->f8);
		return L_0;
	}
}
extern "C" void m3993 (t792 * __this, t793 * p0, MethodInfo* method)
{
	{
		t793 * L_0 = p0;
		__this->f8 = L_0;
		return;
	}
}
extern MethodInfo m3994_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4317_MI_var;
extern MethodInfo* m4318_MI_var;
extern "C" t2* m3994 (t792 * __this, MethodInfo* method)
{
	static bool m3994_init;
	if (!m3994_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4317_MI_var = il2cpp_codegen_genericmethod_get_method(&m4317_GM);
		m4318_MI_var = il2cpp_codegen_genericmethod_get_method(&m4318_GM);
		m3994_init = true;
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
		uint64_t L_3 = m3979(__this, &m3979_MI);
		uint64_t L_4 = L_3;
		t9 * L_5 = Box(InitializedTypeInfo(&t784_TI), &L_4);
		t2* L_6 = m4310(L_5, (t2*) &_stringLiteral270, &m4310_MI);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t158* L_7 = L_2;
		t2* L_8 = m3981(__this, &m3981_MI);
		ArrayElementTypeCheck (L_7, L_8);
		*((t9 **)(t9 **)SZArrayLdElema(L_7, 2)) = (t9 *)L_8;
		t158* L_9 = L_7;
		int32_t L_10 = m3983(__this, &m3983_MI);
		int32_t L_11 = L_10;
		t9 * L_12 = Box(InitializedTypeInfo(&t125_TI), &L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((t9 **)(t9 **)SZArrayLdElema(L_9, 3)) = (t9 *)L_12;
		t158* L_13 = L_9;
		int32_t L_14 = m3984(__this, &m3984_MI);
		int32_t L_15 = L_14;
		t9 * L_16 = Box(InitializedTypeInfo(&t125_TI), &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		*((t9 **)(t9 **)SZArrayLdElema(L_13, 4)) = (t9 *)L_16;
		t158* L_17 = L_13;
		int32_t L_18 = m3986(__this, &m3986_MI);
		int32_t L_19 = L_18;
		t9 * L_20 = Box(InitializedTypeInfo(&t125_TI), &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		*((t9 **)(t9 **)SZArrayLdElema(L_17, 5)) = (t9 *)L_20;
		t158* L_21 = L_17;
		bool L_22 = m3988(__this, &m3988_MI);
		bool L_23 = L_22;
		t9 * L_24 = Box(InitializedTypeInfo(&t124_TI), &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((t9 **)(t9 **)SZArrayLdElema(L_21, 6)) = (t9 *)L_24;
		t158* L_25 = L_21;
		t782 * L_26 = m3990(__this, &m3990_MI);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (t2*) &_stringLiteral294;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (t2*) &_stringLiteral294;
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
		t782 * L_27 = m3990(__this, &m3990_MI);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4317_MI_var, L_27);
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
		t793 * L_32 = m3992(__this, &m3992_MI);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4318_MI_var, L_32);
		int32_t L_34 = L_33;
		t9 * L_35 = Box(InitializedTypeInfo(&t125_TI), &L_34);
		ArrayElementTypeCheck (L_31, L_35);
		*((t9 **)(t9 **)SZArrayLdElema(L_31, 8)) = (t9 *)L_35;
		t2* L_36 = m3586(NULL, G_B3_4, L_31, &m3586_MI);
		return L_36;
	}
}
extern MethodInfo m3995_MI;
extern TypeInfo* t778_TI_var;
extern MethodInfo* m4319_MI_var;
extern "C" void m3995 (t792 * __this, t9 * p0, MethodInfo* method)
{
	static bool m3995_init;
	if (!m3995_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m4319_MI_var = il2cpp_codegen_genericmethod_get_method(&m4319_GM);
		m3995_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		V_0 = ((t9*)IsInst(L_0, t778_TI_var));
		t9* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		t9 * L_2 = p0;
		t9* L_3 = V_0;
		uint64_t L_4 = m3892(__this, (t2*) &_stringLiteral282, L_2, L_3, &m3892_MI);
		m3980(__this, L_4, &m3980_MI);
		t9 * L_5 = p0;
		t9* L_6 = V_0;
		t2* L_7 = m3889(__this, (t2*) &_stringLiteral2, L_5, L_6, &m3889_MI);
		m3982(__this, L_7, &m3982_MI);
		t9 * L_8 = p0;
		t9* L_9 = V_0;
		int32_t L_10 = m3890(__this, (t2*) &_stringLiteral295, L_8, L_9, &m3890_MI);
		m3985(__this, L_10, &m3985_MI);
		t9 * L_11 = p0;
		t9* L_12 = V_0;
		int32_t L_13 = m3890(__this, (t2*) &_stringLiteral296, L_11, L_12, &m3890_MI);
		m3987(__this, L_13, &m3987_MI);
		t9 * L_14 = p0;
		t9* L_15 = V_0;
		bool L_16 = m3893(__this, (t2*) &_stringLiteral297, L_14, L_15, &m3893_MI);
		m3989(__this, L_16, &m3989_MI);
		t9 * L_17 = p0;
		t9* L_18 = V_0;
		t793 * L_19 = m4319(__this, (t2*) &_stringLiteral298, L_17, L_18, m4319_MI_var);
		m3993(__this, L_19, &m3993_MI);
		goto IL_009a;
	}

IL_0084:
	{
		t9 * L_20 = p0;
		t2* L_21 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_22 = m610(NULL, (t2*) &_stringLiteral286, L_21, &m610_MI);
		t890 * L_23 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_23, L_22, &m4312_MI);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
#include "t794.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t794_TI;
#include "t794MD.h"

#include "t795.h"
extern TypeInfo t795_TI;
#include "t795MD.h"
extern Il2CppType t795_0_0_0;
extern MethodInfo m3997_MI;
extern MethodInfo m4320_MI;
extern MethodInfo m3998_MI;
struct t777;
extern "C" t795 * m4321 (t777 * __this, t2* p0, t9 * p1, t9* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4320_GM;
extern Il2CppGenericMethod m4321_GM;


extern MethodInfo m3996_MI;
extern "C" void m3996 (t794 * __this, MethodInfo* method)
{
	{
		m3901(__this, &m3901_MI);
		return;
	}
}
extern "C" t795 * m3997 (t794 * __this, MethodInfo* method)
{
	{
		t795 * L_0 = (__this->f2);
		return L_0;
	}
}
extern "C" void m3998 (t794 * __this, t795 * p0, MethodInfo* method)
{
	{
		t795 * L_0 = p0;
		__this->f2 = L_0;
		return;
	}
}
extern MethodInfo m3999_MI;
extern TypeInfo* t158_TI_var;
extern MethodInfo* m4320_MI_var;
extern "C" t2* m3999 (t794 * __this, MethodInfo* method)
{
	static bool m3999_init;
	if (!m3999_init)
	{
		t158_TI_var = il2cpp_codegen_class_from_type(&t158_0_0_0);
		m4320_MI_var = il2cpp_codegen_genericmethod_get_method(&m4320_GM);
		m3999_init = true;
	}
	{
		t158* L_0 = ((t158*)SZArrayNew(t158_TI_var, 2));
		t2* L_1 = m3899(__this, &m3899_MI);
		ArrayElementTypeCheck (L_0, L_1);
		*((t9 **)(t9 **)SZArrayLdElema(L_0, 0)) = (t9 *)L_1;
		t158* L_2 = L_0;
		t795 * L_3 = m3997(__this, &m3997_MI);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4320_MI_var, L_3);
		int32_t L_5 = L_4;
		t9 * L_6 = Box(InitializedTypeInfo(&t125_TI), &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		*((t9 **)(t9 **)SZArrayLdElema(L_2, 1)) = (t9 *)L_6;
		t2* L_7 = m3586(NULL, (t2*) &_stringLiteral299, L_2, &m3586_MI);
		return L_7;
	}
}
extern MethodInfo m4000_MI;
extern TypeInfo* t778_TI_var;
extern MethodInfo* m4321_MI_var;
extern "C" void m4000 (t794 * __this, t9 * p0, MethodInfo* method)
{
	static bool m4000_init;
	if (!m4000_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		m4321_MI_var = il2cpp_codegen_genericmethod_get_method(&m4321_GM);
		m4000_init = true;
	}
	t9* V_0 = {0};
	{
		t9 * L_0 = p0;
		m3900(__this, L_0, &m3900_MI);
		t9 * L_1 = p0;
		V_0 = ((t9*)IsInst(L_1, t778_TI_var));
		t9* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		t9 * L_3 = p0;
		t9* L_4 = V_0;
		t795 * L_5 = m4321(__this, (t2*) &_stringLiteral300, L_3, L_4, m4321_MI_var);
		m3998(__this, L_5, &m3998_MI);
		goto IL_0042;
	}

IL_002c:
	{
		t9 * L_6 = p0;
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m673_MI, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_8 = m610(NULL, (t2*) &_stringLiteral286, L_7, &m610_MI);
		t890 * L_9 = (t890 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t890_TI));
		m4312(L_9, L_8, &m4312_MI);
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
#include "t776MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t775MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t784MD.h"



#ifndef _MSC_VER
#else
#endif
#include "t785MD.h"



#include "t796.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t796_TI;
#include "t796MD.h"

extern TypeInfo t730_TI;
extern TypeInfo t575_TI;
extern Il2CppType t730_0_0_0;
extern MethodInfo m4322_MI;


extern MethodInfo m4001_MI;
extern TypeInfo* t730_TI_var;
extern "C" void m4001 (t796 * __this, MethodInfo* method)
{
	static bool m4001_init;
	if (!m4001_init)
	{
		t730_TI_var = il2cpp_codegen_class_from_type(&t730_0_0_0);
		m4001_init = true;
	}
	{
		m336(__this, &m336_MI);
		__this->f0 = ((t730*)SZArrayNew(t730_TI_var, ((int32_t)64)));
		return;
	}
}
extern MethodInfo m4002_MI;
extern "C" t2* m4002 (t796 * __this, MethodInfo* method)
{
	{
		t730* L_0 = (__this->f0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		t2* L_1 = m4322(NULL, L_0, &m4322_MI);
		return L_1;
	}
}
#include "t797.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t797_TI;
#include "t797MD.h"

#include "t798.h"
#include "t799.h"
extern TypeInfo t798_TI;
extern TypeInfo t799_TI;
#include "t893MD.h"
#include "t798MD.h"
#include "t799MD.h"
#include "t161MD.h"
extern Il2CppType t799_0_0_0;
extern MethodInfo m4323_MI;
extern MethodInfo m4324_MI;
extern MethodInfo m4325_MI;
extern MethodInfo m3144_MI;
extern MethodInfo m511_MI;
extern MethodInfo m4326_MI;
extern Il2CppGenericMethod m4325_GM;
extern Il2CppGenericMethod m4326_GM;


extern MethodInfo m4003_MI;
extern TypeInfo* t799_TI_var;
extern MethodInfo* m4325_MI_var;
extern "C" void m4003 (t9 * __this , MethodInfo* method)
{
	static bool m4003_init;
	if (!m4003_init)
	{
		t799_TI_var = il2cpp_codegen_class_from_type(&t799_0_0_0);
		m4325_MI_var = il2cpp_codegen_genericmethod_get_method(&m4325_GM);
		m4003_init = true;
	}
	{
		int32_t L_0 = m4323(NULL, &m4323_MI);
		t798 * L_1 = (t798 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t798_TI));
		m4324(L_1, L_0, &m4324_MI);
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f0 = L_1;
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f1 = 0;
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f2 = 0;
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f3 = (((int64_t)(-1)));
		t799 * L_2 = (t799 *)il2cpp_codegen_object_new (t799_TI_var);
		m4325(L_2, m4325_MI_var);
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f4 = L_2;
		return;
	}
}
extern MethodInfo m4004_MI;
extern "C" uint64_t m4004 (t9 * __this , MethodInfo* method)
{
	{
		t2* L_0 = m3144(NULL, &m3144_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		int32_t L_1 = ((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f2;
		int32_t L_2 = L_1;
		t9 * L_3 = Box(InitializedTypeInfo(&t125_TI), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m511(NULL, L_0, L_3, &m511_MI);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4231_MI, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
extern MethodInfo m4005_MI;
extern "C" void m4005 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f3 = L_0;
		return;
	}
}
extern MethodInfo m4006_MI;
extern "C" uint64_t m4006 (t9 * __this , MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_0 = ((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f3;
		return L_0;
	}
}
extern MethodInfo m4007_MI;
extern MethodInfo* m4326_MI_var;
extern "C" t796 * m4007 (t9 * __this , uint64_t p0, MethodInfo* method)
{
	static bool m4007_init;
	if (!m4007_init)
	{
		m4326_MI_var = il2cpp_codegen_genericmethod_get_method(&m4326_GM);
		m4007_init = true;
	}
	t796 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		t799 * L_0 = ((t797_SFs*)InitializedTypeInfo(&t797_TI)->static_fields)->f4;
		uint64_t L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, t796 ** >::Invoke(m4326_MI_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		t796 * L_3 = (t796 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t796_TI));
		m4001(L_3, &m4001_MI);
		V_0 = L_3;
	}

IL_0018:
	{
		t796 * L_4 = V_0;
		return L_4;
	}
}
#include "t800.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t800_TI;
#include "t800MD.h"

#include "t801.h"
#include "t802.h"
#include "t731.h"
#include "t727.h"
#include "t8.h"
#include "t728.h"
#include "t803.h"
#include "t804.h"
#include "t805.h"
extern TypeInfo t801_TI;
extern TypeInfo t731_TI;
extern TypeInfo t8_TI;
extern TypeInfo t728_TI;
extern TypeInfo t727_TI;
#include "t801MD.h"
#include "t889MD.h"
#include "t731MD.h"
#include "t168MD.h"
#include "t124MD.h"
#include "t728MD.h"
#include "t727MD.h"
extern Il2CppType t728_0_0_0;
extern MethodInfo m4327_MI;
extern MethodInfo m4328_MI;
extern MethodInfo m4011_MI;
extern MethodInfo m4013_MI;
extern MethodInfo m4009_MI;
extern MethodInfo m4329_MI;
extern MethodInfo m3572_MI;
extern MethodInfo m651_MI;
extern MethodInfo m3573_MI;
extern MethodInfo m3575_MI;
extern MethodInfo m4330_MI;
extern MethodInfo m4331_MI;
extern MethodInfo m3576_MI;
extern MethodInfo m4280_MI;
extern MethodInfo m4332_MI;
extern MethodInfo m3557_MI;
extern MethodInfo m4015_MI;
extern MethodInfo m4017_MI;
extern MethodInfo m4019_MI;
extern MethodInfo m4021_MI;
struct t800;
#include "t894.h"
extern "C" t9 * m4333 (t800 * __this, t727 * p0, t802 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t800;
#include "t895.h"
extern "C" t9 * m4334 (t800 * __this, t727 * p0, t803 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t800;
#include "t896.h"
extern "C" t9 * m4335 (t800 * __this, t727 * p0, t804 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct t800;
#include "t897.h"
extern "C" t9 * m4336 (t800 * __this, t727 * p0, t805 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod m4280_GM;
extern Il2CppGenericMethod m4333_GM;
extern Il2CppGenericMethod m4334_GM;
extern Il2CppGenericMethod m4335_GM;
extern Il2CppGenericMethod m4336_GM;


extern MethodInfo m4008_MI;
extern "C" void m4008 (t800 * __this, MethodInfo* method)
{
	t2* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_0 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4327(L_0, (t2*) &_stringLiteral301, &m4327_MI);
		__this->f3 = L_0;
		m328(__this, &m328_MI);
		t2* L_1 = m3713(NULL, (t2*) &_stringLiteral302, &m3713_MI);
		V_0 = L_1;
		t2* L_2 = V_0;
		bool L_3 = m4328(NULL, L_2, (&V_1), &m4328_MI);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		m611(NULL, (t2*) &_stringLiteral303, &m611_MI);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		m4011(__this, L_4, &m4011_MI);
	}

IL_0044:
	{
		return;
	}
}
extern "C" t801 * m4009 (t800 * __this, MethodInfo* method)
{
	{
		t801 * L_0 = (__this->f3);
		return L_0;
	}
}
extern MethodInfo m4010_MI;
extern "C" void m4010 (t800 * __this, t801 * p0, MethodInfo* method)
{
	{
		t801 * L_0 = p0;
		__this->f3 = L_0;
		return;
	}
}
extern "C" void m4011 (t800 * __this, uint64_t p0, MethodInfo* method)
{
	{
		uint64_t L_0 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		m4005(NULL, L_0, &m4005_MI);
		return;
	}
}
extern MethodInfo m4012_MI;
extern "C" t171 * m4012 (t800 * __this, t2* p0, uint32_t p1, bool p2, t2* p3, t802 * p4, MethodInfo* method)
{
	t781 * V_0 = {0};
	{
		t781 * L_0 = (t781 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t781_TI));
		m3902(L_0, &m3902_MI);
		V_0 = L_0;
		t781 * L_1 = V_0;
		t2* L_2 = p0;
		m3904(L_1, L_2, &m3904_MI);
		t781 * L_3 = V_0;
		uint32_t L_4 = p1;
		m3906(L_3, L_4, &m3906_MI);
		t781 * L_5 = V_0;
		bool L_6 = p2;
		m3908(L_5, L_6, &m3908_MI);
		t781 * L_7 = V_0;
		t2* L_8 = p3;
		m3910(L_7, L_8, &m3910_MI);
		t781 * L_9 = V_0;
		t802 * L_10 = p4;
		t171 * L_11 = m4013(__this, L_9, L_10, &m4013_MI);
		return L_11;
	}
}
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4333_MI_var;
extern "C" t171 * m4013 (t800 * __this, t781 * p0, t802 * p1, MethodInfo* method)
{
	static bool m4013_init;
	if (!m4013_init)
	{
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4333_MI_var = il2cpp_codegen_genericmethod_get_method(&m4333_GM);
		m4013_init = true;
	}
	t801 * V_0 = {0};
	t731 * V_1 = {0};
	t727 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		t801 * L_0 = m4009(__this, &m4009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_1 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4329(L_1, L_0, (t2*) &_stringLiteral304, &m4329_MI);
		V_0 = L_1;
		t801 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral305, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t731 * L_4 = (t731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t731_TI));
		m3572(L_4, &m3572_MI);
		V_1 = L_4;
		t731 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_6 = m4004(NULL, &m4004_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t775_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3573(L_5, (t2*) &_stringLiteral306, L_9, &m3573_MI);
		t731 * L_10 = V_1;
		uint64_t L_11 = m4006(NULL, &m4006_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t776_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3573(L_10, (t2*) &_stringLiteral307, L_14, &m3573_MI);
		t731 * L_15 = V_1;
		m3575(L_15, (t2*) &_stringLiteral283, 0, &m3575_MI);
		t731 * L_16 = V_1;
		m3575(L_16, (t2*) &_stringLiteral308, 0, &m3575_MI);
		t731 * L_17 = V_1;
		t781 * L_18 = p0;
		t2* L_19 = m3903(L_18, &m3903_MI);
		m3573(L_17, (t2*) &_stringLiteral2, L_19, &m3573_MI);
		t731 * L_20 = V_1;
		t781 * L_21 = p0;
		uint32_t L_22 = m3905(L_21, &m3905_MI);
		V_3 = L_22;
		t2* L_23 = m4330((&V_3), &m4330_MI);
		m3573(L_20, (t2*) &_stringLiteral309, L_23, &m3573_MI);
		t731 * L_24 = V_1;
		t781 * L_25 = p0;
		bool L_26 = m3907(L_25, &m3907_MI);
		V_4 = L_26;
		t2* L_27 = m4331((&V_4), &m4331_MI);
		m3573(L_24, (t2*) &_stringLiteral310, L_27, &m3573_MI);
		t731 * L_28 = V_1;
		t781 * L_29 = p0;
		t2* L_30 = m3909(L_29, &m3909_MI);
		m3573(L_28, (t2*) &_stringLiteral311, L_30, &m3573_MI);
		t731 * L_31 = V_1;
		t728 * L_32 = m3576(L_31, &m3576_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4280_MI_var, L_32, (t2*) &_stringLiteral312, (t2*) &_stringLiteral313);
		t801 * L_33 = V_0;
		t2* L_34 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_33);
		t731 * L_35 = V_1;
		t727 * L_36 = (t727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t727_TI));
		m3557(L_36, L_34, L_35, &m3557_MI);
		V_2 = L_36;
		t727 * L_37 = V_2;
		t802 * L_38 = p1;
		t9 * L_39 = m4333(__this, L_37, L_38, m4333_MI_var);
		t171 * L_40 = m605(__this, L_39, &m605_MI);
		return L_40;
	}
}
extern MethodInfo m4014_MI;
extern "C" t171 * m4014 (t800 * __this, uint64_t p0, t2* p1, t803 * p2, MethodInfo* method)
{
	t786 * V_0 = {0};
	{
		t786 * L_0 = (t786 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t786_TI));
		m3928(L_0, &m3928_MI);
		V_0 = L_0;
		t786 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3930(L_1, L_2, &m3930_MI);
		t786 * L_3 = V_0;
		t2* L_4 = p1;
		m3932(L_3, L_4, &m3932_MI);
		t786 * L_5 = V_0;
		t803 * L_6 = p2;
		t171 * L_7 = m4015(__this, L_5, L_6, &m4015_MI);
		return L_7;
	}
}
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4334_MI_var;
extern "C" t171 * m4015 (t800 * __this, t786 * p0, t803 * p1, MethodInfo* method)
{
	static bool m4015_init;
	if (!m4015_init)
	{
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4334_MI_var = il2cpp_codegen_genericmethod_get_method(&m4334_GM);
		m4015_init = true;
	}
	t801 * V_0 = {0};
	t731 * V_1 = {0};
	t727 * V_2 = {0};
	{
		t801 * L_0 = m4009(__this, &m4009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_1 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4329(L_1, L_0, (t2*) &_stringLiteral314, &m4329_MI);
		V_0 = L_1;
		t801 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral315, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t731 * L_4 = (t731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t731_TI));
		m3572(L_4, &m3572_MI);
		V_1 = L_4;
		t731 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_6 = m4004(NULL, &m4004_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t775_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3573(L_5, (t2*) &_stringLiteral306, L_9, &m3573_MI);
		t731 * L_10 = V_1;
		uint64_t L_11 = m4006(NULL, &m4006_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t776_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3573(L_10, (t2*) &_stringLiteral307, L_14, &m3573_MI);
		t731 * L_15 = V_1;
		m3575(L_15, (t2*) &_stringLiteral283, 0, &m3575_MI);
		t731 * L_16 = V_1;
		m3575(L_16, (t2*) &_stringLiteral308, 0, &m3575_MI);
		t731 * L_17 = V_1;
		t786 * L_18 = p0;
		uint64_t L_19 = m3929(L_18, &m3929_MI);
		uint64_t L_20 = L_19;
		t9 * L_21 = Box(InitializedTypeInfo(&t784_TI), &L_20);
		t2* L_22 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_21);
		m3573(L_17, (t2*) &_stringLiteral282, L_22, &m3573_MI);
		t731 * L_23 = V_1;
		t786 * L_24 = p0;
		t2* L_25 = m3931(L_24, &m3931_MI);
		m3573(L_23, (t2*) &_stringLiteral311, L_25, &m3573_MI);
		t731 * L_26 = V_1;
		t728 * L_27 = m3576(L_26, &m3576_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4280_MI_var, L_27, (t2*) &_stringLiteral312, (t2*) &_stringLiteral313);
		t801 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_28);
		t731 * L_30 = V_1;
		t727 * L_31 = (t727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t727_TI));
		m3557(L_31, L_29, L_30, &m3557_MI);
		V_2 = L_31;
		t727 * L_32 = V_2;
		t803 * L_33 = p1;
		t9 * L_34 = m4334(__this, L_32, L_33, m4334_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
extern MethodInfo m4016_MI;
extern "C" t171 * m4016 (t800 * __this, uint64_t p0, t804 * p1, MethodInfo* method)
{
	t788 * V_0 = {0};
	{
		t788 * L_0 = (t788 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t788_TI));
		m3949(L_0, &m3949_MI);
		V_0 = L_0;
		t788 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3951(L_1, L_2, &m3951_MI);
		t788 * L_3 = V_0;
		t804 * L_4 = p1;
		t171 * L_5 = m4017(__this, L_3, L_4, &m4017_MI);
		return L_5;
	}
}
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4335_MI_var;
extern "C" t171 * m4017 (t800 * __this, t788 * p0, t804 * p1, MethodInfo* method)
{
	static bool m4017_init;
	if (!m4017_init)
	{
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4335_MI_var = il2cpp_codegen_genericmethod_get_method(&m4335_GM);
		m4017_init = true;
	}
	t801 * V_0 = {0};
	t731 * V_1 = {0};
	t727 * V_2 = {0};
	{
		t801 * L_0 = m4009(__this, &m4009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_1 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4329(L_1, L_0, (t2*) &_stringLiteral316, &m4329_MI);
		V_0 = L_1;
		t801 * L_2 = V_0;
		t2* L_3 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_4 = m610(NULL, (t2*) &_stringLiteral317, L_3, &m610_MI);
		m611(NULL, L_4, &m611_MI);
		t731 * L_5 = (t731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t731_TI));
		m3572(L_5, &m3572_MI);
		V_1 = L_5;
		t731 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_7 = m4004(NULL, &m4004_MI);
		uint64_t L_8 = L_7;
		t9 * L_9 = Box(InitializedTypeInfo(&t775_TI), &L_8);
		t2* L_10 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_9);
		m3573(L_6, (t2*) &_stringLiteral306, L_10, &m3573_MI);
		t731 * L_11 = V_1;
		uint64_t L_12 = m4006(NULL, &m4006_MI);
		uint64_t L_13 = L_12;
		t9 * L_14 = Box(InitializedTypeInfo(&t776_TI), &L_13);
		t2* L_15 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_14);
		m3573(L_11, (t2*) &_stringLiteral307, L_15, &m3573_MI);
		t731 * L_16 = V_1;
		t788 * L_17 = p0;
		uint64_t L_18 = m3950(L_17, &m3950_MI);
		t796 * L_19 = m4007(NULL, L_18, &m4007_MI);
		t2* L_20 = m4002(L_19, &m4002_MI);
		m3573(L_16, (t2*) &_stringLiteral283, L_20, &m3573_MI);
		t731 * L_21 = V_1;
		m3575(L_21, (t2*) &_stringLiteral308, 0, &m3575_MI);
		t731 * L_22 = V_1;
		t788 * L_23 = p0;
		uint64_t L_24 = m3950(L_23, &m3950_MI);
		uint64_t L_25 = L_24;
		t9 * L_26 = Box(InitializedTypeInfo(&t784_TI), &L_25);
		t2* L_27 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_26);
		m3573(L_22, (t2*) &_stringLiteral282, L_27, &m3573_MI);
		t731 * L_28 = V_1;
		t728 * L_29 = m3576(L_28, &m3576_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4280_MI_var, L_29, (t2*) &_stringLiteral312, (t2*) &_stringLiteral313);
		t801 * L_30 = V_0;
		t2* L_31 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_30);
		t731 * L_32 = V_1;
		t727 * L_33 = (t727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t727_TI));
		m3557(L_33, L_31, L_32, &m3557_MI);
		V_2 = L_33;
		t727 * L_34 = V_2;
		t804 * L_35 = p1;
		t9 * L_36 = m4335(__this, L_34, L_35, m4335_MI_var);
		t171 * L_37 = m605(__this, L_36, &m605_MI);
		return L_37;
	}
}
extern MethodInfo m4018_MI;
extern "C" t171 * m4018 (t800 * __this, uint64_t p0, uint16_t p1, t804 * p2, MethodInfo* method)
{
	t789 * V_0 = {0};
	{
		t789 * L_0 = (t789 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t789_TI));
		m3953(L_0, &m3953_MI);
		V_0 = L_0;
		t789 * L_1 = V_0;
		uint64_t L_2 = p0;
		m3955(L_1, L_2, &m3955_MI);
		t789 * L_3 = V_0;
		uint16_t L_4 = p1;
		m3957(L_3, L_4, &m3957_MI);
		t789 * L_5 = V_0;
		t804 * L_6 = p2;
		t171 * L_7 = m4019(__this, L_5, L_6, &m4019_MI);
		return L_7;
	}
}
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4335_MI_var;
extern "C" t171 * m4019 (t800 * __this, t789 * p0, t804 * p1, MethodInfo* method)
{
	static bool m4019_init;
	if (!m4019_init)
	{
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4335_MI_var = il2cpp_codegen_genericmethod_get_method(&m4335_GM);
		m4019_init = true;
	}
	t801 * V_0 = {0};
	t731 * V_1 = {0};
	t727 * V_2 = {0};
	{
		t801 * L_0 = m4009(__this, &m4009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_1 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4329(L_1, L_0, (t2*) &_stringLiteral318, &m4329_MI);
		V_0 = L_1;
		t801 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral319, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t731 * L_4 = (t731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t731_TI));
		m3572(L_4, &m3572_MI);
		V_1 = L_4;
		t731 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_6 = m4004(NULL, &m4004_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t775_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3573(L_5, (t2*) &_stringLiteral306, L_9, &m3573_MI);
		t731 * L_10 = V_1;
		uint64_t L_11 = m4006(NULL, &m4006_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t776_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3573(L_10, (t2*) &_stringLiteral307, L_14, &m3573_MI);
		t731 * L_15 = V_1;
		t789 * L_16 = p0;
		uint64_t L_17 = m3954(L_16, &m3954_MI);
		t796 * L_18 = m4007(NULL, L_17, &m4007_MI);
		t2* L_19 = m4002(L_18, &m4002_MI);
		m3573(L_15, (t2*) &_stringLiteral283, L_19, &m3573_MI);
		t731 * L_20 = V_1;
		m3575(L_20, (t2*) &_stringLiteral308, 0, &m3575_MI);
		t731 * L_21 = V_1;
		t789 * L_22 = p0;
		uint64_t L_23 = m3954(L_22, &m3954_MI);
		uint64_t L_24 = L_23;
		t9 * L_25 = Box(InitializedTypeInfo(&t784_TI), &L_24);
		t2* L_26 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_25);
		m3573(L_21, (t2*) &_stringLiteral282, L_26, &m3573_MI);
		t731 * L_27 = V_1;
		t789 * L_28 = p0;
		uint16_t L_29 = m3956(L_28, &m3956_MI);
		uint16_t L_30 = L_29;
		t9 * L_31 = Box(InitializedTypeInfo(&t785_TI), &L_30);
		t2* L_32 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_31);
		m3573(L_27, (t2*) &_stringLiteral284, L_32, &m3573_MI);
		t731 * L_33 = V_1;
		t728 * L_34 = m3576(L_33, &m3576_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4280_MI_var, L_34, (t2*) &_stringLiteral312, (t2*) &_stringLiteral313);
		t801 * L_35 = V_0;
		t2* L_36 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_35);
		t731 * L_37 = V_1;
		t727 * L_38 = (t727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t727_TI));
		m3557(L_38, L_36, L_37, &m3557_MI);
		V_2 = L_38;
		t727 * L_39 = V_2;
		t804 * L_40 = p1;
		t9 * L_41 = m4335(__this, L_39, L_40, m4335_MI_var);
		t171 * L_42 = m605(__this, L_41, &m605_MI);
		return L_42;
	}
}
extern MethodInfo m4020_MI;
extern "C" t171 * m4020 (t800 * __this, int32_t p0, int32_t p1, t2* p2, t805 * p3, MethodInfo* method)
{
	t790 * V_0 = {0};
	{
		t790 * L_0 = (t790 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t790_TI));
		m3959(L_0, &m3959_MI);
		V_0 = L_0;
		t790 * L_1 = V_0;
		int32_t L_2 = p0;
		m3963(L_1, L_2, &m3963_MI);
		t790 * L_3 = V_0;
		int32_t L_4 = p1;
		m3961(L_3, L_4, &m3961_MI);
		t790 * L_5 = V_0;
		t2* L_6 = p2;
		m3965(L_5, L_6, &m3965_MI);
		t790 * L_7 = V_0;
		t805 * L_8 = p3;
		t171 * L_9 = m4021(__this, L_7, L_8, &m4021_MI);
		return L_9;
	}
}
extern MethodInfo* m4280_MI_var;
extern MethodInfo* m4336_MI_var;
extern "C" t171 * m4021 (t800 * __this, t790 * p0, t805 * p1, MethodInfo* method)
{
	static bool m4021_init;
	if (!m4021_init)
	{
		m4280_MI_var = il2cpp_codegen_genericmethod_get_method(&m4280_GM);
		m4336_MI_var = il2cpp_codegen_genericmethod_get_method(&m4336_GM);
		m4021_init = true;
	}
	t801 * V_0 = {0};
	t731 * V_1 = {0};
	t727 * V_2 = {0};
	{
		t801 * L_0 = m4009(__this, &m4009_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t801_TI));
		t801 * L_1 = (t801 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t801_TI));
		m4329(L_1, L_0, (t2*) &_stringLiteral320, &m4329_MI);
		V_0 = L_1;
		t801 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_3 = m511(NULL, (t2*) &_stringLiteral321, L_2, &m511_MI);
		m611(NULL, L_3, &m611_MI);
		t731 * L_4 = (t731 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t731_TI));
		m3572(L_4, &m3572_MI);
		V_1 = L_4;
		t731 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t797_TI));
		uint64_t L_6 = m4004(NULL, &m4004_MI);
		uint64_t L_7 = L_6;
		t9 * L_8 = Box(InitializedTypeInfo(&t775_TI), &L_7);
		t2* L_9 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_8);
		m3573(L_5, (t2*) &_stringLiteral306, L_9, &m3573_MI);
		t731 * L_10 = V_1;
		uint64_t L_11 = m4006(NULL, &m4006_MI);
		uint64_t L_12 = L_11;
		t9 * L_13 = Box(InitializedTypeInfo(&t776_TI), &L_12);
		t2* L_14 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m651_MI, L_13);
		m3573(L_10, (t2*) &_stringLiteral307, L_14, &m3573_MI);
		t731 * L_15 = V_1;
		m3575(L_15, (t2*) &_stringLiteral283, 0, &m3575_MI);
		t731 * L_16 = V_1;
		m3575(L_16, (t2*) &_stringLiteral308, 0, &m3575_MI);
		t731 * L_17 = V_1;
		t790 * L_18 = p0;
		int32_t L_19 = m3960(L_18, &m3960_MI);
		m3575(L_17, (t2*) &_stringLiteral322, L_19, &m3575_MI);
		t731 * L_20 = V_1;
		t790 * L_21 = p0;
		int32_t L_22 = m3962(L_21, &m3962_MI);
		m3575(L_20, (t2*) &_stringLiteral323, L_22, &m3575_MI);
		t731 * L_23 = V_1;
		t790 * L_24 = p0;
		t2* L_25 = m3964(L_24, &m3964_MI);
		m3573(L_23, (t2*) &_stringLiteral324, L_25, &m3573_MI);
		t731 * L_26 = V_1;
		t728 * L_27 = m3576(L_26, &m3576_MI);
		VirtActionInvoker2< t2*, t2* >::Invoke(m4280_MI_var, L_27, (t2*) &_stringLiteral312, (t2*) &_stringLiteral313);
		t801 * L_28 = V_0;
		t2* L_29 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m4332_MI, L_28);
		t731 * L_30 = V_1;
		t727 * L_31 = (t727 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t727_TI));
		m3557(L_31, L_29, L_30, &m3557_MI);
		V_2 = L_31;
		t727 * L_32 = V_2;
		t805 * L_33 = p1;
		t9 * L_34 = m4336(__this, L_32, L_33, m4336_MI_var);
		t171 * L_35 = m605(__this, L_34, &m605_MI);
		return L_35;
	}
}
#include "t806.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t806_TI;
#include "t806MD.h"

#include "t318MD.h"
#include "t814MD.h"
extern MethodInfo m4044_MI;
extern Il2CppGenericMethod m4337_GM;


extern MethodInfo m4022_MI;
extern MethodInfo* m4337_MI_var;
extern "C" void m4022 (t806 * __this, MethodInfo* method)
{
	static bool m4022_init;
	if (!m4022_init)
	{
		m4337_MI_var = il2cpp_codegen_genericmethod_get_method(&m4337_GM);
		m4022_init = true;
	}
	{
		m4337(__this, m4337_MI_var);
		return;
	}
}
extern MethodInfo m4023_MI;
extern "C" t2* m4023 (t806 * __this, MethodInfo* method)
{
	t2* G_B2_0 = {0};
	t2* G_B1_0 = {0};
	{
		t2* L_0 = m4044(NULL, __this, &m4044_MI);
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
#include "t807.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t807_TI;
#include "t807MD.h"

#include "t808.h"
#include "t898.h"
#include "t899.h"
#include "t900.h"
#include "t812.h"
#include "t132.h"
extern TypeInfo t808_TI;
extern TypeInfo t900_TI;
extern TypeInfo t132_TI;
extern TypeInfo t813_TI;
extern TypeInfo t812_TI;
extern TypeInfo t76_TI;
#include "t808MD.h"
#include "t812MD.h"
#include "t132MD.h"
extern Il2CppType t808_0_0_0;
extern Il2CppType t900_0_0_0;
extern Il2CppType t813_0_0_0;
extern MethodInfo m4338_MI;
extern MethodInfo m4339_MI;
extern MethodInfo m4340_MI;
extern MethodInfo m4341_MI;
extern MethodInfo m4342_MI;
extern MethodInfo m4343_MI;
extern MethodInfo m4344_MI;
extern MethodInfo m4345_MI;
extern MethodInfo m4346_MI;
extern MethodInfo m339_MI;
extern MethodInfo m4037_MI;
extern MethodInfo m4040_MI;
extern MethodInfo m4347_MI;
extern MethodInfo m364_MI;
extern Il2CppGenericMethod m4348_GM;
extern Il2CppGenericMethod m4349_GM;
extern Il2CppGenericMethod m4338_GM;
extern Il2CppGenericMethod m4339_GM;
extern Il2CppGenericMethod m4340_GM;
extern Il2CppGenericMethod m4341_GM;
extern Il2CppGenericMethod m4350_GM;
extern Il2CppGenericMethod m4342_GM;
extern Il2CppGenericMethod m4343_GM;
extern Il2CppGenericMethod m4344_GM;
extern Il2CppGenericMethod m4351_GM;
extern Il2CppGenericMethod m4352_GM;
extern Il2CppGenericMethod m4345_GM;
extern Il2CppGenericMethod m4346_GM;
extern Il2CppGenericMethod m4347_GM;


extern MethodInfo m4024_MI;
extern TypeInfo* t808_TI_var;
extern MethodInfo* m4341_MI_var;
extern "C" void m4024 (t807 * __this, MethodInfo* method)
{
	static bool m4024_init;
	if (!m4024_init)
	{
		t808_TI_var = il2cpp_codegen_class_from_type(&t808_0_0_0);
		m4341_MI_var = il2cpp_codegen_genericmethod_get_method(&m4341_GM);
		m4024_init = true;
	}
	{
		m336(__this, &m336_MI);
		t808 * L_0 = (t808 *)il2cpp_codegen_object_new (t808_TI_var);
		m4341(L_0, m4341_MI_var);
		__this->f0 = L_0;
		return;
	}
}
extern MethodInfo m4025_MI;
extern TypeInfo* t900_TI_var;
extern MethodInfo* m4350_MI_var;
extern "C" t9 * m4025 (t807 * __this, MethodInfo* method)
{
	static bool m4025_init;
	if (!m4025_init)
	{
		t900_TI_var = il2cpp_codegen_class_from_type(&t900_0_0_0);
		m4350_MI_var = il2cpp_codegen_genericmethod_get_method(&m4350_GM);
		m4025_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t900  L_1 = m4350(L_0, m4350_MI_var);
		t900  L_2 = L_1;
		t9 * L_3 = Box(t900_TI_var, &L_2);
		return (t9 *)L_3;
	}
}
extern MethodInfo m4026_MI;
extern MethodInfo* m4342_MI_var;
extern "C" void m4026 (t807 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4026_init;
	if (!m4026_init)
	{
		m4342_MI_var = il2cpp_codegen_genericmethod_get_method(&m4342_GM);
		m4026_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4342_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4027_MI;
extern MethodInfo* m4348_MI_var;
extern "C" t9* m4027 (t807 * __this, MethodInfo* method)
{
	static bool m4027_init;
	if (!m4027_init)
	{
		m4348_MI_var = il2cpp_codegen_genericmethod_get_method(&m4348_GM);
		m4027_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t898 * L_1 = m4348(L_0, m4348_MI_var);
		return L_1;
	}
}
extern MethodInfo m4028_MI;
extern MethodInfo* m4343_MI_var;
extern "C" bool m4028 (t807 * __this, t2* p0, MethodInfo* method)
{
	static bool m4028_init;
	if (!m4028_init)
	{
		m4343_MI_var = il2cpp_codegen_genericmethod_get_method(&m4343_GM);
		m4028_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = p0;
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4343_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m4029_MI;
extern MethodInfo* m4344_MI_var;
extern "C" bool m4029 (t807 * __this, t2* p0, t9 ** p1, MethodInfo* method)
{
	static bool m4029_init;
	if (!m4029_init)
	{
		m4344_MI_var = il2cpp_codegen_genericmethod_get_method(&m4344_GM);
		m4029_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 ** L_2 = p1;
		bool L_3 = (bool)VirtFuncInvoker2< bool, t2*, t9 ** >::Invoke(m4344_MI_var, L_0, L_1, L_2);
		return L_3;
	}
}
extern MethodInfo m4030_MI;
extern MethodInfo* m4349_MI_var;
extern "C" t9* m4030 (t807 * __this, MethodInfo* method)
{
	static bool m4030_init;
	if (!m4030_init)
	{
		m4349_MI_var = il2cpp_codegen_genericmethod_get_method(&m4349_GM);
		m4030_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t899 * L_1 = m4349(L_0, m4349_MI_var);
		return L_1;
	}
}
extern MethodInfo m4031_MI;
extern MethodInfo* m4338_MI_var;
extern "C" t9 * m4031 (t807 * __this, t2* p0, MethodInfo* method)
{
	static bool m4031_init;
	if (!m4031_init)
	{
		m4338_MI_var = il2cpp_codegen_genericmethod_get_method(&m4338_GM);
		m4031_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(m4338_MI_var, L_0, L_1);
		return L_2;
	}
}
extern MethodInfo m4032_MI;
extern MethodInfo* m4339_MI_var;
extern "C" void m4032 (t807 * __this, t2* p0, t9 * p1, MethodInfo* method)
{
	static bool m4032_init;
	if (!m4032_init)
	{
		m4339_MI_var = il2cpp_codegen_genericmethod_get_method(&m4339_GM);
		m4032_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = p0;
		t9 * L_2 = p1;
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4339_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4033_MI;
extern MethodInfo* m4351_MI_var;
extern MethodInfo* m4352_MI_var;
extern MethodInfo* m4342_MI_var;
extern "C" void m4033 (t807 * __this, t812  p0, MethodInfo* method)
{
	static bool m4033_init;
	if (!m4033_init)
	{
		m4351_MI_var = il2cpp_codegen_genericmethod_get_method(&m4351_GM);
		m4352_MI_var = il2cpp_codegen_genericmethod_get_method(&m4352_GM);
		m4342_MI_var = il2cpp_codegen_genericmethod_get_method(&m4342_GM);
		m4033_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = m4351((&p0), m4351_MI_var);
		t9 * L_2 = m4352((&p0), m4352_MI_var);
		VirtActionInvoker2< t2*, t9 * >::Invoke(m4342_MI_var, L_0, L_1, L_2);
		return;
	}
}
extern MethodInfo m4034_MI;
extern MethodInfo* m4345_MI_var;
extern "C" void m4034 (t807 * __this, MethodInfo* method)
{
	static bool m4034_init;
	if (!m4034_init)
	{
		m4345_MI_var = il2cpp_codegen_genericmethod_get_method(&m4345_GM);
		m4034_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		VirtActionInvoker0::Invoke(m4345_MI_var, L_0);
		return;
	}
}
extern MethodInfo m4035_MI;
extern MethodInfo* m4351_MI_var;
extern MethodInfo* m4346_MI_var;
extern MethodInfo* m4338_MI_var;
extern MethodInfo* m4352_MI_var;
extern "C" bool m4035 (t807 * __this, t812  p0, MethodInfo* method)
{
	static bool m4035_init;
	if (!m4035_init)
	{
		m4351_MI_var = il2cpp_codegen_genericmethod_get_method(&m4351_GM);
		m4346_MI_var = il2cpp_codegen_genericmethod_get_method(&m4346_GM);
		m4338_MI_var = il2cpp_codegen_genericmethod_get_method(&m4338_GM);
		m4352_MI_var = il2cpp_codegen_genericmethod_get_method(&m4352_GM);
		m4035_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = m4351((&p0), m4351_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4346_MI_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		t808 * L_3 = (__this->f0);
		t2* L_4 = m4351((&p0), m4351_MI_var);
		t9 * L_5 = (t9 *)VirtFuncInvoker1< t9 *, t2* >::Invoke(m4338_MI_var, L_3, L_4);
		t9 * L_6 = m4352((&p0), m4352_MI_var);
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
extern MethodInfo m4036_MI;
extern MethodInfo* m4347_MI_var;
extern "C" void m4036 (t807 * __this, t811* p0, int32_t p1, MethodInfo* method)
{
	static bool m4036_init;
	if (!m4036_init)
	{
		m4347_MI_var = il2cpp_codegen_genericmethod_get_method(&m4347_GM);
		m4036_init = true;
	}
	int32_t V_0 = 0;
	t812  V_1 = {0};
	t9* V_2 = {0};
	t138 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t138 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t811* L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral329, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&m4037_MI, __this);
		V_0 = L_2;
		t9* L_3 = (t9*)VirtFuncInvoker0< t9* >::Invoke(&m4040_MI, __this);
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
			t812  L_5 = (t812 )InterfaceFuncInvoker0< t812  >::Invoke(m4347_MI_var, L_4);
			V_1 = L_5;
			t811* L_6 = p0;
			int32_t L_7 = p1;
			int32_t L_8 = L_7;
			p1 = ((int32_t)((int32_t)L_8+(int32_t)1));
			t812  L_9 = V_1;
			*((t812 *)(t812 *)SZArrayLdElema(L_6, L_8)) = L_9;
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
extern MethodInfo* m4340_MI_var;
extern "C" int32_t m4037 (t807 * __this, MethodInfo* method)
{
	static bool m4037_init;
	if (!m4037_init)
	{
		m4340_MI_var = il2cpp_codegen_genericmethod_get_method(&m4340_GM);
		m4037_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(m4340_MI_var, L_0);
		return L_1;
	}
}
extern MethodInfo m4038_MI;
extern "C" bool m4038 (t807 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
extern MethodInfo m4039_MI;
extern MethodInfo* m4351_MI_var;
extern MethodInfo* m4343_MI_var;
extern "C" bool m4039 (t807 * __this, t812  p0, MethodInfo* method)
{
	static bool m4039_init;
	if (!m4039_init)
	{
		m4351_MI_var = il2cpp_codegen_genericmethod_get_method(&m4351_GM);
		m4343_MI_var = il2cpp_codegen_genericmethod_get_method(&m4343_GM);
		m4039_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t2* L_1 = m4351((&p0), m4351_MI_var);
		bool L_2 = (bool)VirtFuncInvoker1< bool, t2* >::Invoke(m4343_MI_var, L_0, L_1);
		return L_2;
	}
}
extern TypeInfo* t900_TI_var;
extern MethodInfo* m4350_MI_var;
extern "C" t9* m4040 (t807 * __this, MethodInfo* method)
{
	static bool m4040_init;
	if (!m4040_init)
	{
		t900_TI_var = il2cpp_codegen_class_from_type(&t900_0_0_0);
		m4350_MI_var = il2cpp_codegen_genericmethod_get_method(&m4350_GM);
		m4040_init = true;
	}
	{
		t808 * L_0 = (__this->f0);
		t900  L_1 = m4350(L_0, m4350_MI_var);
		t900  L_2 = L_1;
		t9 * L_3 = Box(t900_TI_var, &L_2);
		return (t9*)L_3;
	}
}
extern MethodInfo m4041_MI;
extern "C" t2* m4041 (t807 * __this, MethodInfo* method)
{
	{
		t2* L_0 = m4044(NULL, __this, &m4044_MI);
		return L_0;
	}
}
#include "t814.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t814_TI;

#include "t816.h"
#include "t322.h"
#include "t901.h"
#include "t902.h"
#include "t903.h"
#include "t156.h"
#include "t299.h"
#include "t884.h"
#include "t904.h"
#include "t186.h"
#include "t334.h"
extern TypeInfo t816_TI;
extern TypeInfo t322_TI;
extern TypeInfo t318_TI;
extern TypeInfo t901_TI;
extern TypeInfo t903_TI;
extern TypeInfo t312_TI;
extern TypeInfo t303_TI;
extern TypeInfo t156_TI;
extern TypeInfo t299_TI;
extern TypeInfo t809_TI;
extern TypeInfo t810_TI;
extern TypeInfo t905_TI;
extern TypeInfo t665_TI;
extern TypeInfo t815_TI;
extern TypeInfo t906_TI;
extern TypeInfo t889_TI;
extern TypeInfo t904_TI;
extern TypeInfo t186_TI;
extern TypeInfo t334_TI;
#include "t816MD.h"
#include "t322MD.h"
#include "t901MD.h"
#include "t903MD.h"
#include "t156MD.h"
#include "t299MD.h"
#include "t125MD.h"
#include "t904MD.h"
extern Il2CppType t318_0_0_0;
extern Il2CppType t312_0_0_0;
extern Il2CppType t905_0_0_0;
extern MethodInfo m4062_MI;
extern MethodInfo m4063_MI;
extern MethodInfo m4353_MI;
extern MethodInfo m4047_MI;
extern MethodInfo m4354_MI;
extern MethodInfo m4055_MI;
extern MethodInfo m1171_MI;
extern MethodInfo m4061_MI;
extern MethodInfo m4043_MI;
extern MethodInfo m4054_MI;
extern MethodInfo m4053_MI;
extern MethodInfo m4048_MI;
extern MethodInfo m4355_MI;
extern MethodInfo m4356_MI;
extern MethodInfo m4050_MI;
extern MethodInfo m4045_MI;
extern MethodInfo m4046_MI;
extern MethodInfo m4052_MI;
extern MethodInfo m2757_MI;
extern MethodInfo m4357_MI;
extern MethodInfo m4358_MI;
extern MethodInfo m4359_MI;
extern MethodInfo m4049_MI;
extern MethodInfo m1169_MI;
extern MethodInfo m4360_MI;
extern MethodInfo m2766_MI;
extern MethodInfo m1105_MI;
extern MethodInfo m4051_MI;
extern MethodInfo m4268_MI;
extern MethodInfo m4361_MI;
extern MethodInfo m4362_MI;
extern MethodInfo m2794_MI;
extern MethodInfo m4058_MI;
extern MethodInfo m4363_MI;
extern MethodInfo m4364_MI;
extern MethodInfo m4056_MI;
extern MethodInfo m4365_MI;
extern MethodInfo m4366_MI;
extern MethodInfo m4057_MI;
extern MethodInfo m4060_MI;
extern MethodInfo m4059_MI;
extern MethodInfo m4367_MI;
extern MethodInfo m4368_MI;
extern MethodInfo m361_MI;
extern MethodInfo m4369_MI;
extern MethodInfo m4370_MI;
extern MethodInfo m4371_MI;
extern MethodInfo m4372_MI;
extern MethodInfo m4373_MI;
extern MethodInfo m4374_MI;
extern MethodInfo m4375_MI;
extern MethodInfo m4376_MI;
extern Il2CppGenericMethod m4355_GM;
extern Il2CppGenericMethod m4356_GM;
extern Il2CppGenericMethod m4363_GM;
extern Il2CppGenericMethod m4364_GM;
extern Il2CppGenericMethod m4365_GM;
extern Il2CppGenericMethod m4366_GM;


extern MethodInfo m4042_MI;
extern "C" bool m4042 (t9 * __this , t2* p0, t9 ** p1, MethodInfo* method)
{
	bool V_0 = false;
	t312* V_1 = {0};
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
		t312* L_2 = m4353(L_1, &m4353_MI);
		V_1 = L_2;
		V_2 = 0;
		t9 ** L_3 = p1;
		t312* L_4 = V_1;
		t9 * L_5 = m4047(NULL, L_4, (&V_2), (&V_0), &m4047_MI);
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
extern "C" t2* m4043 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	t322 * V_0 = {0};
	bool V_1 = false;
	t2* G_B3_0 = {0};
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4354(L_0, ((int32_t)2000), &m4354_MI);
		V_0 = L_0;
		t9 * L_1 = p1;
		t9 * L_2 = p0;
		t322 * L_3 = V_0;
		bool L_4 = m4055(NULL, L_1, L_2, L_3, &m4055_MI);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		t322 * L_6 = V_0;
		t2* L_7 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_6);
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
extern "C" t2* m4044 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		t9 * L_1 = m4061(NULL, &m4061_MI);
		t2* L_2 = m4043(NULL, L_0, L_1, &m4043_MI);
		return L_2;
	}
}
extern MethodInfo* m4355_MI_var;
extern "C" t9* m4045 (t9 * __this , t312* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	static bool m4045_init;
	if (!m4045_init)
	{
		m4355_MI_var = il2cpp_codegen_genericmethod_get_method(&m4355_GM);
		m4045_init = true;
	}
	t9* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	t2* V_3 = {0};
	t9 * V_4 = {0};
	{
		t807 * L_0 = (t807 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t807_TI));
		m4024(L_0, &m4024_MI);
		V_0 = L_0;
		t312* L_1 = p0;
		int32_t* L_2 = p1;
		m4054(NULL, L_1, L_2, &m4054_MI);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		t312* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m4053(NULL, L_3, (*((int32_t*)L_4)), &m4053_MI);
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
		t312* L_9 = p0;
		int32_t* L_10 = p1;
		m4054(NULL, L_9, L_10, &m4054_MI);
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
		t312* L_12 = p0;
		int32_t* L_13 = p1;
		m4054(NULL, L_12, L_13, &m4054_MI);
		t9* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		t312* L_15 = p0;
		int32_t* L_16 = p1;
		bool* L_17 = p2;
		t2* L_18 = m4048(NULL, L_15, L_16, L_17, &m4048_MI);
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
		t312* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = m4054(NULL, L_21, L_22, &m4054_MI);
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
		t312* L_26 = p0;
		int32_t* L_27 = p1;
		bool* L_28 = p2;
		t9 * L_29 = m4047(NULL, L_26, L_27, L_28, &m4047_MI);
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
		InterfaceActionInvoker2< t2*, t9 * >::Invoke(m4355_MI_var, L_32, L_33, L_34);
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
extern MethodInfo* m4356_MI_var;
extern "C" t806 * m4046 (t9 * __this , t312* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	static bool m4046_init;
	if (!m4046_init)
	{
		m4356_MI_var = il2cpp_codegen_genericmethod_get_method(&m4356_GM);
		m4046_init = true;
	}
	t806 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	t9 * V_3 = {0};
	{
		t806 * L_0 = (t806 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t806_TI));
		m4022(L_0, &m4022_MI);
		V_0 = L_0;
		t312* L_1 = p0;
		int32_t* L_2 = p1;
		m4054(NULL, L_1, L_2, &m4054_MI);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		t312* L_3 = p0;
		int32_t* L_4 = p1;
		int32_t L_5 = m4053(NULL, L_3, (*((int32_t*)L_4)), &m4053_MI);
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
		return (t806 *)NULL;
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
		t312* L_9 = p0;
		int32_t* L_10 = p1;
		m4054(NULL, L_9, L_10, &m4054_MI);
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
		t312* L_12 = p0;
		int32_t* L_13 = p1;
		m4054(NULL, L_12, L_13, &m4054_MI);
		goto IL_0070;
	}

IL_0051:
	{
		t312* L_14 = p0;
		int32_t* L_15 = p1;
		bool* L_16 = p2;
		t9 * L_17 = m4047(NULL, L_14, L_15, L_16, &m4047_MI);
		V_3 = L_17;
		bool* L_18 = p2;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (t806 *)NULL;
	}

IL_0063:
	{
		t806 * L_19 = V_0;
		t9 * L_20 = V_3;
		VirtActionInvoker1< t9 * >::Invoke(m4356_MI_var, L_19, L_20);
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
		t806 * L_22 = V_0;
		return L_22;
	}
}
extern "C" t9 * m4047 (t9 * __this , t312* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		t312* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = m4053(NULL, L_0, (*((int32_t*)L_1)), &m4053_MI);
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
		t312* L_4 = p0;
		int32_t* L_5 = p1;
		bool* L_6 = p2;
		t2* L_7 = m4048(NULL, L_4, L_5, L_6, &m4048_MI);
		return L_7;
	}

IL_004d:
	{
		t312* L_8 = p0;
		int32_t* L_9 = p1;
		bool* L_10 = p2;
		t9 * L_11 = m4050(NULL, L_8, L_9, L_10, &m4050_MI);
		return L_11;
	}

IL_0056:
	{
		t312* L_12 = p0;
		int32_t* L_13 = p1;
		bool* L_14 = p2;
		t9* L_15 = m4045(NULL, L_12, L_13, L_14, &m4045_MI);
		return L_15;
	}

IL_005f:
	{
		t312* L_16 = p0;
		int32_t* L_17 = p1;
		bool* L_18 = p2;
		t806 * L_19 = m4046(NULL, L_16, L_17, L_18, &m4046_MI);
		return L_19;
	}

IL_0068:
	{
		t312* L_20 = p0;
		int32_t* L_21 = p1;
		m4054(NULL, L_20, L_21, &m4054_MI);
		bool L_22 = 1;
		t9 * L_23 = Box(InitializedTypeInfo(&t124_TI), &L_22);
		return L_23;
	}

IL_0077:
	{
		t312* L_24 = p0;
		int32_t* L_25 = p1;
		m4054(NULL, L_24, L_25, &m4054_MI);
		bool L_26 = 0;
		t9 * L_27 = Box(InitializedTypeInfo(&t124_TI), &L_26);
		return L_27;
	}

IL_0086:
	{
		t312* L_28 = p0;
		int32_t* L_29 = p1;
		m4054(NULL, L_28, L_29, &m4054_MI);
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
extern "C" t2* m4048 (t9 * __this , t312* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	t322 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		t322 * L_0 = (t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t322_TI));
		m4354(L_0, ((int32_t)2000), &m4354_MI);
		V_0 = L_0;
		t312* L_1 = p0;
		int32_t* L_2 = p1;
		m4052(NULL, L_1, L_2, &m4052_MI);
		t312* L_3 = p0;
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
		t312* L_10 = p0;
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
		t312* L_11 = p0;
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
		t312* L_20 = p0;
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
		t312* L_21 = p0;
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
		t322 * L_28 = V_0;
		m2757(L_28, ((int32_t)34), &m2757_MI);
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
		t322 * L_30 = V_0;
		m2757(L_30, ((int32_t)92), &m2757_MI);
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
		t322 * L_32 = V_0;
		m2757(L_32, ((int32_t)47), &m2757_MI);
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
		t322 * L_34 = V_0;
		m2757(L_34, 8, &m2757_MI);
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
		t322 * L_36 = V_0;
		m2757(L_36, ((int32_t)12), &m2757_MI);
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
		t322 * L_38 = V_0;
		m2757(L_38, ((int32_t)10), &m2757_MI);
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
		t322 * L_40 = V_0;
		m2757(L_40, ((int32_t)13), &m2757_MI);
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
		t322 * L_42 = V_0;
		m2757(L_42, ((int32_t)9), &m2757_MI);
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
		t312* L_44 = p0;
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
		t312* L_48 = p0;
		int32_t* L_49 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_50 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_50 = m4377(L_50, L_48, (*((int32_t*)L_49)), 4, &m4357_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_51 = m4358(NULL, &m4358_MI);
		bool L_52 = m4359(NULL, L_50, ((int32_t)515), L_51, (&V_4), &m4359_MI);
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
		t312* L_60 = p0;
		int32_t* L_61 = p1;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		t312* L_63 = p0;
		int32_t* L_64 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_65 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_65 = m4377(L_65, L_63, (*((int32_t*)L_64)), 2, &m4357_MI);
		bool L_66 = m331(NULL, L_65, (t2*) &_stringLiteral330, &m331_MI);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		t312* L_67 = p0;
		int32_t* L_68 = p1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_69 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_69 = m4377(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, &m4357_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_70 = m4358(NULL, &m4358_MI);
		bool L_71 = m4359(NULL, L_69, ((int32_t)515), L_70, (&V_5), &m4359_MI);
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
		t322 * L_74 = V_0;
		uint32_t L_75 = V_4;
		m2757(L_74, (((uint16_t)L_75)), &m2757_MI);
		t322 * L_76 = V_0;
		uint32_t L_77 = V_5;
		m2757(L_76, (((uint16_t)L_77)), &m2757_MI);
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
		t322 * L_82 = V_0;
		uint32_t L_83 = V_4;
		t2* L_84 = m4049(NULL, L_83, &m4049_MI);
		m1169(L_82, L_84, &m1169_MI);
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
		t322 * L_87 = V_0;
		uint16_t L_88 = V_1;
		m2757(L_87, L_88, &m2757_MI);
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
		t322 * L_92 = V_0;
		t2* L_93 = (t2*)VirtFuncInvoker0< t2* >::Invoke(&m1171_MI, L_92);
		return L_93;
	}
}
extern TypeInfo* t312_TI_var;
extern "C" t2* m4049 (t9 * __this , int32_t p0, MethodInfo* method)
{
	static bool m4049_init;
	if (!m4049_init)
	{
		t312_TI_var = il2cpp_codegen_class_from_type(&t312_0_0_0);
		m4049_init = true;
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
		t903 * L_2 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_2, (t2*) &_stringLiteral331, (t2*) &_stringLiteral332, &m4360_MI);
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
		t903 * L_5 = (t903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t903_TI));
		m4360(L_5, (t2*) &_stringLiteral331, (t2*) &_stringLiteral333, &m4360_MI);
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
		L_8 = m2816(L_8, (((uint16_t)L_7)), 1, &m2766_MI);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = p0;
		p0 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		t312* L_10 = ((t312*)SZArrayNew(t312_TI_var, 2));
		int32_t L_11 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		t312* L_12 = L_10;
		int32_t L_13 = p0;
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_14 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_14 = m1117(L_14, L_12, &m1105_MI);
		return L_14;
	}
}
extern "C" t9 * m4050 (t9 * __this , t312* p0, int32_t* p1, bool* p2, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t9 * V_2 = {0};
	t2* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		t312* L_0 = p0;
		int32_t* L_1 = p1;
		m4052(NULL, L_0, L_1, &m4052_MI);
		t312* L_2 = p0;
		int32_t* L_3 = p1;
		int32_t L_4 = m4051(NULL, L_2, (*((int32_t*)L_3)), &m4051_MI);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = p1;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		t312* L_7 = p0;
		int32_t* L_8 = p1;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_10 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_10 = m4377(L_10, L_7, (*((int32_t*)L_8)), L_9, &m4357_MI);
		V_3 = L_10;
		t2* L_11 = V_3;
		int32_t L_12 = m4268(L_11, (t2*) &_stringLiteral139, 5, &m4268_MI);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		t2* L_13 = V_3;
		int32_t L_14 = m4268(L_13, (t2*) &_stringLiteral334, 5, &m4268_MI);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = p2;
		t312* L_16 = p0;
		int32_t* L_17 = p1;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_19 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_19 = m4377(L_19, L_16, (*((int32_t*)L_17)), L_18, &m4357_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_20 = m4358(NULL, &m4358_MI);
		bool L_21 = m4361(NULL, L_19, ((int32_t)511), L_20, (&V_4), &m4361_MI);
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
		t312* L_26 = p0;
		int32_t* L_27 = p1;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&t2_TI));
		t2* L_29 = (t2*)il2cpp_codegen_object_new ((&t2_TI));
		L_29 = m4377(L_29, L_26, (*((int32_t*)L_27)), L_28, &m4357_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_30 = m4358(NULL, &m4358_MI);
		bool L_31 = m4362(NULL, L_29, ((int32_t)511), L_30, (&V_5), &m4362_MI);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		t9 * L_34 = Box(InitializedTypeInfo(&t299_TI), &L_33);
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
extern "C" int32_t m4051 (t9 * __this , t312* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		t312* L_1 = p0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = m2794((t2*) &_stringLiteral335, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), &m2794_MI);
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
		t312* L_7 = p0;
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
extern "C" void m4052 (t9 * __this , t312* p0, int32_t* p1, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		t312* L_0 = p0;
		int32_t* L_1 = p1;
		int32_t L_2 = (*((int32_t*)L_1));
		int32_t L_3 = m2794((t2*) &_stringLiteral336, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), &m2794_MI);
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
		t312* L_7 = p0;
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
extern "C" int32_t m4053 (t9 * __this , t312* p0, int32_t p1, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = p1;
		V_0 = L_0;
		t312* L_1 = p0;
		int32_t L_2 = m4054(NULL, L_1, (&V_0), &m4054_MI);
		return L_2;
	}
}
extern "C" int32_t m4054 (t9 * __this , t312* p0, int32_t* p1, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t312* L_0 = p0;
		int32_t* L_1 = p1;
		m4052(NULL, L_0, L_1, &m4052_MI);
		int32_t* L_2 = p1;
		t312* L_3 = p0;
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
		t312* L_4 = p0;
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
		t312* L_15 = p0;
		int32_t* L_16 = p1;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((t121 *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		t312* L_18 = p0;
		int32_t* L_19 = p1;
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		t312* L_21 = p0;
		int32_t* L_22 = p1;
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		t312* L_24 = p0;
		int32_t* L_25 = p1;
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		t312* L_27 = p0;
		int32_t* L_28 = p1;
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		t312* L_30 = p0;
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
		t312* L_36 = p0;
		int32_t* L_37 = p1;
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		t312* L_39 = p0;
		int32_t* L_40 = p1;
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		t312* L_42 = p0;
		int32_t* L_43 = p1;
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		t312* L_45 = p0;
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
		t312* L_51 = p0;
		int32_t* L_52 = p1;
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		t312* L_54 = p0;
		int32_t* L_55 = p1;
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		t312* L_57 = p0;
		int32_t* L_58 = p1;
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		t312* L_60 = p0;
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
extern TypeInfo* t778_TI_var;
extern TypeInfo* t905_TI_var;
extern MethodInfo* m4363_MI_var;
extern MethodInfo* m4364_MI_var;
extern MethodInfo* m4365_MI_var;
extern MethodInfo* m4366_MI_var;
extern "C" bool m4055 (t9 * __this , t9 * p0, t9 * p1, t322 * p2, MethodInfo* method)
{
	static bool m4055_init;
	if (!m4055_init)
	{
		t778_TI_var = il2cpp_codegen_class_from_type(&t778_0_0_0);
		t905_TI_var = il2cpp_codegen_class_from_type(&t905_0_0_0);
		m4363_MI_var = il2cpp_codegen_genericmethod_get_method(&m4363_GM);
		m4364_MI_var = il2cpp_codegen_genericmethod_get_method(&m4364_GM);
		m4365_MI_var = il2cpp_codegen_genericmethod_get_method(&m4365_GM);
		m4366_MI_var = il2cpp_codegen_genericmethod_get_method(&m4366_GM);
		m4055_init = true;
	}
	bool V_0 = false;
	t2* V_1 = {0};
	t9* V_2 = {0};
	t9* V_3 = {0};
	t9 * V_4 = {0};
	t9 * V_5 = {0};
	t322 * G_B13_0 = {0};
	t322 * G_B12_0 = {0};
	t2* G_B14_0 = {0};
	t322 * G_B14_1 = {0};
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
		t322 * L_3 = p2;
		bool L_4 = m4058(NULL, L_2, L_3, &m4058_MI);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		t9 * L_5 = p1;
		V_2 = ((t9*)IsInst(L_5, t778_TI_var));
		t9* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		t9 * L_7 = p0;
		t9* L_8 = V_2;
		t9* L_9 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4363_MI_var, L_8);
		t9* L_10 = V_2;
		t9* L_11 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4364_MI_var, L_10);
		t322 * L_12 = p2;
		bool L_13 = m4056(NULL, L_7, L_9, L_11, L_12, &m4056_MI);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		t9 * L_14 = p1;
		V_3 = ((t9*)IsInst(L_14, t905_TI_var));
		t9* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		t9 * L_16 = p0;
		t9* L_17 = V_3;
		t9* L_18 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4365_MI_var, L_17);
		t9* L_19 = V_3;
		t9* L_20 = (t9*)InterfaceFuncInvoker0< t9* >::Invoke(m4366_MI_var, L_19);
		t322 * L_21 = p2;
		bool L_22 = m4056(NULL, L_16, L_18, L_20, L_21, &m4056_MI);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		t9 * L_23 = p1;
		V_4 = ((t9 *)IsInst(L_23, InitializedTypeInfo(&t665_TI)));
		t9 * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		t9 * L_25 = p0;
		t9 * L_26 = V_4;
		t322 * L_27 = p2;
		bool L_28 = m4057(NULL, L_25, L_26, L_27, &m4057_MI);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		t9 * L_29 = p1;
		bool L_30 = m4060(NULL, L_29, &m4060_MI);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		t9 * L_31 = p1;
		t322 * L_32 = p2;
		bool L_33 = m4059(NULL, L_31, L_32, &m4059_MI);
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
		t322 * L_35 = p2;
		t9 * L_36 = p1;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&t124_TI))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (t2*) &_stringLiteral337;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (t2*) &_stringLiteral338;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		m1169(G_B14_1, G_B14_0, &m1169_MI);
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
		t322 * L_38 = p2;
		m1169(L_38, (t2*) &_stringLiteral339, &m1169_MI);
		goto IL_0100;
	}

IL_00e6:
	{
		t9 * L_39 = p0;
		t9 * L_40 = p1;
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, t9 *, t9 ** >::Invoke(&m4367_MI, L_39, L_40, (&V_5));
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
		t322 * L_45 = p2;
		m4055(NULL, L_43, L_44, L_45, &m4055_MI);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
extern "C" bool m4056 (t9 * __this , t9 * p0, t9 * p1, t9 * p2, t322 * p3, MethodInfo* method)
{
	t9 * V_0 = {0};
	t9 * V_1 = {0};
	bool V_2 = false;
	t9 * V_3 = {0};
	t9 * V_4 = {0};
	t2* V_5 = {0};
	{
		t322 * L_0 = p3;
		m1169(L_0, (t2*) &_stringLiteral340, &m1169_MI);
		t9 * L_1 = p1;
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4368_MI, L_1);
		V_0 = L_2;
		t9 * L_3 = p2;
		t9 * L_4 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4368_MI, L_3);
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
		t322 * L_10 = p3;
		m1169(L_10, (t2*) &_stringLiteral341, &m1169_MI);
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
		t322 * L_14 = p3;
		m4058(NULL, L_13, L_14, &m4058_MI);
		goto IL_006f;
	}

IL_005f:
	{
		t9 * L_15 = p0;
		t9 * L_16 = V_4;
		t322 * L_17 = p3;
		bool L_18 = m4055(NULL, L_15, L_16, L_17, &m4055_MI);
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
		t322 * L_19 = p3;
		m1169(L_19, (t2*) &_stringLiteral342, &m1169_MI);
		t9 * L_20 = p0;
		t9 * L_21 = V_4;
		t322 * L_22 = p3;
		bool L_23 = m4055(NULL, L_20, L_21, L_22, &m4055_MI);
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
		t322 * L_28 = p3;
		m1169(L_28, (t2*) &_stringLiteral177, &m1169_MI);
		return 1;
	}
}
extern "C" bool m4057 (t9 * __this , t9 * p0, t9 * p1, t322 * p2, MethodInfo* method)
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
		t322 * L_0 = p2;
		m1169(L_0, (t2*) &_stringLiteral343, &m1169_MI);
		V_0 = 1;
		t9 * L_1 = p1;
		t9 * L_2 = (t9 *)InterfaceFuncInvoker0< t9 * >::Invoke(&m4368_MI, L_1);
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
			t322 * L_6 = p2;
			m1169(L_6, (t2*) &_stringLiteral341, &m1169_MI);
		}

IL_0033:
		{
			t9 * L_7 = p0;
			t9 * L_8 = V_1;
			t322 * L_9 = p2;
			bool L_10 = m4055(NULL, L_7, L_8, L_9, &m4055_MI);
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
		t322 * L_16 = p2;
		m1169(L_16, (t2*) &_stringLiteral344, &m1169_MI);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
extern "C" bool m4058 (t9 * __this , t2* p0, t322 * p1, MethodInfo* method)
{
	t312* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		t322 * L_0 = p1;
		m1169(L_0, (t2*) &_stringLiteral243, &m1169_MI);
		t2* L_1 = p0;
		t312* L_2 = m4353(L_1, &m4353_MI);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		t312* L_3 = V_0;
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
		t322 * L_7 = p1;
		m1169(L_7, (t2*) &_stringLiteral345, &m1169_MI);
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
		t322 * L_9 = p1;
		m1169(L_9, (t2*) &_stringLiteral346, &m1169_MI);
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
		t322 * L_11 = p1;
		m1169(L_11, (t2*) &_stringLiteral347, &m1169_MI);
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
		t322 * L_13 = p1;
		m1169(L_13, (t2*) &_stringLiteral348, &m1169_MI);
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
		t322 * L_15 = p1;
		m1169(L_15, (t2*) &_stringLiteral349, &m1169_MI);
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
		t322 * L_17 = p1;
		m1169(L_17, (t2*) &_stringLiteral350, &m1169_MI);
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
		t322 * L_19 = p1;
		m1169(L_19, (t2*) &_stringLiteral351, &m1169_MI);
		goto IL_00d4;
	}

IL_00cc:
	{
		t322 * L_20 = p1;
		uint16_t L_21 = V_2;
		m2757(L_20, L_21, &m2757_MI);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		t312* L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((t121 *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		t322 * L_25 = p1;
		m1169(L_25, (t2*) &_stringLiteral243, &m1169_MI);
		return 1;
	}
}
extern "C" bool m4059 (t9 * __this , t9 * p0, t322 * p1, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	t904  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		t9 * L_0 = p0;
		if (!((t9 *)IsInst(L_0, InitializedTypeInfo(&t299_TI))))
		{
			goto IL_002a;
		}
	}
	{
		t322 * L_1 = p1;
		t9 * L_2 = p0;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&t299_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_3 = m4358(NULL, &m4358_MI);
		t2* L_4 = m4369((&V_0), L_3, &m4369_MI);
		m1169(L_1, L_4, &m1169_MI);
		goto IL_0123;
	}

IL_002a:
	{
		t9 * L_5 = p0;
		if (!((t9 *)IsInst(L_5, InitializedTypeInfo(&t889_TI))))
		{
			goto IL_0054;
		}
	}
	{
		t322 * L_6 = p1;
		t9 * L_7 = p0;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&t889_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_8 = m4358(NULL, &m4358_MI);
		t2* L_9 = m4370((&V_1), L_8, &m4370_MI);
		m1169(L_6, L_9, &m1169_MI);
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
		t322 * L_11 = p1;
		t9 * L_12 = p0;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&t125_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_13 = m4358(NULL, &m4358_MI);
		t2* L_14 = m4371((&V_2), L_13, &m4371_MI);
		m1169(L_11, L_14, &m1169_MI);
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
		t322 * L_16 = p1;
		t9 * L_17 = p0;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&t168_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_18 = m4358(NULL, &m4358_MI);
		t2* L_19 = m4372((&V_3), L_18, &m4372_MI);
		m1169(L_16, L_19, &m1169_MI);
		goto IL_0123;
	}

IL_00a8:
	{
		t9 * L_20 = p0;
		if (!((t9 *)IsInst(L_20, InitializedTypeInfo(&t904_TI))))
		{
			goto IL_00d3;
		}
	}
	{
		t322 * L_21 = p1;
		t9 * L_22 = p0;
		V_4 = ((*(t904 *)((t904 *)UnBox (L_22, InitializedTypeInfo(&t904_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_23 = m4358(NULL, &m4358_MI);
		t2* L_24 = m4373((&V_4), L_23, &m4373_MI);
		m1169(L_21, L_24, &m1169_MI);
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
		t322 * L_26 = p1;
		t9 * L_27 = p0;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&t123_TI)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_28 = m4358(NULL, &m4358_MI);
		t2* L_29 = m4374((&V_5), L_28, &m4374_MI);
		m1169(L_26, L_29, &m1169_MI);
		goto IL_0123;
	}

IL_00fe:
	{
		t322 * L_30 = p1;
		t9 * L_31 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t901_TI));
		t901 * L_32 = m4358(NULL, &m4358_MI);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t891_TI));
		double L_33 = m4375(NULL, L_31, L_32, &m4375_MI);
		V_6 = L_33;
		t901 * L_34 = m4358(NULL, &m4358_MI);
		t2* L_35 = m4376((&V_6), (t2*) &_stringLiteral352, L_34, &m4376_MI);
		m1169(L_30, L_35, &m1169_MI);
	}

IL_0123:
	{
		return 1;
	}
}
extern "C" bool m4060 (t9 * __this , t9 * p0, MethodInfo* method)
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
		if (!((t9 *)IsInst(L_1, InitializedTypeInfo(&t575_TI))))
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
		if (!((t9 *)IsInst(L_2, InitializedTypeInfo(&t334_TI))))
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
		if (!((t9 *)IsInst(L_3, InitializedTypeInfo(&t309_TI))))
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
		if (!((t9 *)IsInst(L_6, InitializedTypeInfo(&t299_TI))))
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
		if (!((t9 *)IsInst(L_7, InitializedTypeInfo(&t889_TI))))
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
		if (!((t9 *)IsInst(L_10, InitializedTypeInfo(&t904_TI))))
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
extern "C" t9 * m4061 (t9 * __this , MethodInfo* method)
{
	t9 * G_B2_0 = {0};
	t9 * G_B1_0 = {0};
	{
		t9 * L_0 = ((t814_SFs*)InitializedTypeInfo(&t814_TI)->static_fields)->f0;
		t9 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		t816 * L_2 = m4062(NULL, &m4062_MI);
		t816 * L_3 = L_2;
		((t814_SFs*)InitializedTypeInfo(&t814_TI)->static_fields)->f0 = L_3;
		G_B2_0 = ((t9 *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
extern "C" t816 * m4062 (t9 * __this , MethodInfo* method)
{
	t816 * G_B2_0 = {0};
	t816 * G_B1_0 = {0};
	{
		t816 * L_0 = ((t814_SFs*)InitializedTypeInfo(&t814_TI)->static_fields)->f1;
		t816 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&t816_TI));
		t816 * L_2 = (t816 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t816_TI));
		m4063(L_2, &m4063_MI);
		t816 * L_3 = L_2;
		((t814_SFs*)InitializedTypeInfo(&t814_TI)->static_fields)->f1 = L_3;
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
