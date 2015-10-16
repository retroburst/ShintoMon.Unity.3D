#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1611.h"
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
extern TypeInfo t1611_TI;
#include "t1611MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t124.h"
#include "t1612.h"
#include "t1613.h"
#include "t463.h"

#include "t121.h"

extern MethodInfo m11879_MI;
extern "C" void m11879 (t1611 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11880_MI;
extern "C" bool m11880 (t1611 * __this, t1612 * p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11880((t1611 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t1612 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t1612 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1611(Il2CppObject* delegate, t1612 * p0, int32_t p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1612 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
extern MethodInfo m11881_MI;
extern "C" t9 * m11881 (t1611 * __this, t1612 * p0, int32_t p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t1613_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11882_MI;
extern "C" bool m11882 (t1611 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1558_TI;
#include "t1558MD.h"

#include "t553.h"


extern MethodInfo m11883_MI;
extern "C" void m11883 (t1558 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11884_MI;
extern "C" bool m11884 (t1558 * __this, t553 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11884((t1558 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t553 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t553 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1558(Il2CppObject* delegate, t553 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t553 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
extern MethodInfo m11885_MI;
extern "C" t9 * m11885 (t1558 * __this, t553 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11886_MI;
extern "C" bool m11886 (t1558 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1802.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1802_TI;
#include "t1802MD.h"

#include "t126.h"


extern MethodInfo m11887_MI;
extern "C" void m11887 (t1802 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11888_MI;
extern "C" bool m11888 (t1802 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11888((t1802 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t126 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t126 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1802(Il2CppObject* delegate, t126 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t126 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
extern MethodInfo m11889_MI;
extern "C" t9 * m11889 (t1802 * __this, t126 * p0, t9 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11890_MI;
extern "C" bool m11890 (t1802 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1933.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1933_TI;
#include "t1933MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t1883.h"


extern MethodInfo m11891_MI;
extern "C" void m11891 (t1933 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11892_MI;
extern "C" t9 * m11892 (t1933 * __this, t1886* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11892((t1933 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, t1886* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t1886* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t9 * pinvoke_delegate_wrapper_t1933(Il2CppObject* delegate, t1886* p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1886* _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
extern MethodInfo m11893_MI;
extern "C" t9 * m11893 (t1933 * __this, t1886* p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11894_MI;
extern "C" t9 * m11894 (t1933 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2066.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2066_TI;
#include "t2066MD.h"



extern MethodInfo m11895_MI;
extern "C" void m11895 (t2066 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11896_MI;
extern "C" void m11896 (t2066 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11896((t2066 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t2066(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m11897_MI;
extern "C" t9 * m11897 (t2066 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m11898_MI;
extern "C" void m11898 (t2066 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2074.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2074_TI;
#include "t2074MD.h"



extern MethodInfo m11899_MI;
extern "C" void m11899 (t2074 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11900_MI;
extern "C" void m11900 (t2074 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11900((t2074 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2074(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11901_MI;
extern "C" t9 * m11901 (t2074 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11902_MI;
extern "C" void m11902 (t2074 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2070.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2070_TI;
#include "t2070MD.h"



extern MethodInfo m11903_MI;
extern "C" void m11903 (t2070 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11904_MI;
extern "C" void m11904 (t2070 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11904((t2070 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2070(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11905_MI;
extern "C" t9 * m11905 (t2070 * __this, t9 * p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11906_MI;
extern "C" void m11906 (t2070 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2062.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2062_TI;
#include "t2062MD.h"



extern MethodInfo m11907_MI;
extern "C" void m11907 (t2062 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11908_MI;
extern "C" void m11908 (t2062 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11908((t2062 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, bool p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, bool p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, bool p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2062(Il2CppObject* delegate, t9 * p0, bool p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11909_MI;
extern "C" t9 * m11909 (t2062 * __this, t9 * p0, bool p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t124_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11910_MI;
extern "C" void m11910 (t2062 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2085.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2085_TI;
#include "t2085MD.h"

#include "t2.h"


extern MethodInfo m11911_MI;
extern "C" void m11911 (t2085 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11912_MI;
extern "C" void m11912 (t2085 * __this, t221* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11912((t2085 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t221* p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t221* p0, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2085(Il2CppObject* delegate, t221* p0)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter 'p0' to native representation
	char** _p0_marshaled = { 0 };
	_p0_marshaled = il2cpp_codegen_marshal_string_array(p0);

	// Native function invocation
	_il2cpp_pinvoke_func(_p0_marshaled);

	// Marshaling cleanup of parameter 'p0' native representation
	if (p0 != NULL) il2cpp_codegen_marshal_free_string_array((void**)_p0_marshaled, ((Il2CppCodeGenArray*)p0)->max_length);
	_p0_marshaled = NULL;

}
extern MethodInfo m11913_MI;
extern "C" t9 * m11913 (t2085 * __this, t221* p0, t463 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11914_MI;
extern "C" void m11914 (t2085 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2080.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2080_TI;
#include "t2080MD.h"

#include "t2089.h"


extern MethodInfo m11915_MI;
extern "C" void m11915 (t2080 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11916_MI;
extern "C" void m11916 (t2080 * __this, t9 * p0, t2089 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11916((t2080 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2089 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2089 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2089 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2080(Il2CppObject* delegate, t9 * p0, t2089 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11917_MI;
extern "C" t9 * m11917 (t2080 * __this, t9 * p0, t2089 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11918_MI;
extern "C" void m11918 (t2080 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2082.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2082_TI;
#include "t2082MD.h"

#include "t1427.h"


extern MethodInfo m11919_MI;
extern "C" void m11919 (t2082 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11920_MI;
extern "C" void m11920 (t2082 * __this, t9 * p0, t1427 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11920((t2082 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1427 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2082(Il2CppObject* delegate, t9 * p0, t1427 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11921_MI;
extern "C" t9 * m11921 (t2082 * __this, t9 * p0, t1427 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11922_MI;
extern "C" void m11922 (t2082 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2081.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2081_TI;
#include "t2081MD.h"

#include "t1336.h"
#include "t2132.h"


extern MethodInfo m11923_MI;
extern "C" void m11923 (t2081 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11924_MI;
extern "C" t1336 * m11924 (t2081 * __this, t9 * p0, t2132 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11924((t2081 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1336 * (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2132 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1336 * (*FunctionPointerType) (t9 * __this, t9 * p0, t2132 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1336 * (*FunctionPointerType) (t9 * __this, t2132 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1336 * pinvoke_delegate_wrapper_t2081(Il2CppObject* delegate, t9 * p0, t2132 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11925_MI;
extern "C" t9 * m11925 (t2081 * __this, t9 * p0, t2132 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11926_MI;
extern "C" t1336 * m11926 (t2081 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1336 *)__result;
}
#include "t2083.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2083_TI;
#include "t2083MD.h"

#include "t2140.h"


extern MethodInfo m11927_MI;
extern "C" void m11927 (t2083 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11928_MI;
extern "C" void m11928 (t2083 * __this, t9 * p0, t2140 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11928((t2083 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2140 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2140 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2140 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2083(Il2CppObject* delegate, t9 * p0, t2140 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11929_MI;
extern "C" t9 * m11929 (t2083 * __this, t9 * p0, t2140 * p1, t463 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11930_MI;
extern "C" void m11930 (t2083 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2143.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2143_TI;
#include "t2143MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2143_marshal(const t2143& unmarshaled, t2143_marshaled& marshaled)
{
}
void t2143_marshal_back(const t2143_marshaled& marshaled, t2143& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2143_marshal_cleanup(t2143_marshaled& marshaled)
{
}
#include "t2144.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2144_TI;
#include "t2144MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2144_marshal(const t2144& unmarshaled, t2144_marshaled& marshaled)
{
}
void t2144_marshal_back(const t2144_marshaled& marshaled, t2144& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2144_marshal_cleanup(t2144_marshaled& marshaled)
{
}
#include "t2145.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2145_TI;
#include "t2145MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2145_marshal(const t2145& unmarshaled, t2145_marshaled& marshaled)
{
}
void t2145_marshal_back(const t2145_marshaled& marshaled, t2145& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2145_marshal_cleanup(t2145_marshaled& marshaled)
{
}
#include "t2146.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2146_TI;
#include "t2146MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2146_marshal(const t2146& unmarshaled, t2146_marshaled& marshaled)
{
}
void t2146_marshal_back(const t2146_marshaled& marshaled, t2146& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2146_marshal_cleanup(t2146_marshaled& marshaled)
{
}
#include "t2147.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2147_TI;
#include "t2147MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2147_marshal(const t2147& unmarshaled, t2147_marshaled& marshaled)
{
}
void t2147_marshal_back(const t2147_marshaled& marshaled, t2147& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2147_marshal_cleanup(t2147_marshaled& marshaled)
{
}
#include "t2148.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2148_TI;
#include "t2148MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2148_marshal(const t2148& unmarshaled, t2148_marshaled& marshaled)
{
}
void t2148_marshal_back(const t2148_marshaled& marshaled, t2148& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2148_marshal_cleanup(t2148_marshaled& marshaled)
{
}
#include "t2149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2149_TI;
#include "t2149MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2149_marshal(const t2149& unmarshaled, t2149_marshaled& marshaled)
{
}
void t2149_marshal_back(const t2149_marshaled& marshaled, t2149& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2149_marshal_cleanup(t2149_marshaled& marshaled)
{
}
#include "t2150.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2150_TI;
#include "t2150MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2150_marshal(const t2150& unmarshaled, t2150_marshaled& marshaled)
{
}
void t2150_marshal_back(const t2150_marshaled& marshaled, t2150& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2150_marshal_cleanup(t2150_marshaled& marshaled)
{
}
#include "t2151.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2151_TI;
#include "t2151MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2151_marshal(const t2151& unmarshaled, t2151_marshaled& marshaled)
{
}
void t2151_marshal_back(const t2151_marshaled& marshaled, t2151& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2151_marshal_cleanup(t2151_marshaled& marshaled)
{
}
#include "t2152.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2152_TI;
#include "t2152MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2152_marshal(const t2152& unmarshaled, t2152_marshaled& marshaled)
{
}
void t2152_marshal_back(const t2152_marshaled& marshaled, t2152& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2152_marshal_cleanup(t2152_marshaled& marshaled)
{
}
#include "t2153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2153_TI;
#include "t2153MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2153_marshal(const t2153& unmarshaled, t2153_marshaled& marshaled)
{
}
void t2153_marshal_back(const t2153_marshaled& marshaled, t2153& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2153_marshal_cleanup(t2153_marshaled& marshaled)
{
}
#include "t2154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2154_TI;
#include "t2154MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2154_marshal(const t2154& unmarshaled, t2154_marshaled& marshaled)
{
}
void t2154_marshal_back(const t2154_marshaled& marshaled, t2154& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2154_marshal_cleanup(t2154_marshaled& marshaled)
{
}
#include "t2155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2155_TI;
#include "t2155MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2155_marshal(const t2155& unmarshaled, t2155_marshaled& marshaled)
{
}
void t2155_marshal_back(const t2155_marshaled& marshaled, t2155& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2155_marshal_cleanup(t2155_marshaled& marshaled)
{
}
#include "t2156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2156_TI;
#include "t2156MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2156_marshal(const t2156& unmarshaled, t2156_marshaled& marshaled)
{
}
void t2156_marshal_back(const t2156_marshaled& marshaled, t2156& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2156_marshal_cleanup(t2156_marshaled& marshaled)
{
}
#include "t2157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2157_TI;
#include "t2157MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2157_marshal(const t2157& unmarshaled, t2157_marshaled& marshaled)
{
}
void t2157_marshal_back(const t2157_marshaled& marshaled, t2157& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2157_marshal_cleanup(t2157_marshaled& marshaled)
{
}
#include "t2158.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2158_TI;
#include "t2158MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2158_marshal(const t2158& unmarshaled, t2158_marshaled& marshaled)
{
}
void t2158_marshal_back(const t2158_marshaled& marshaled, t2158& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2158_marshal_cleanup(t2158_marshaled& marshaled)
{
}
#include "t2159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2159_TI;
#include "t2159MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2159_marshal(const t2159& unmarshaled, t2159_marshaled& marshaled)
{
}
void t2159_marshal_back(const t2159_marshaled& marshaled, t2159& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2159_marshal_cleanup(t2159_marshaled& marshaled)
{
}
#include "t2160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2160_TI;
#include "t2160MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2160_marshal(const t2160& unmarshaled, t2160_marshaled& marshaled)
{
}
void t2160_marshal_back(const t2160_marshaled& marshaled, t2160& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2160_marshal_cleanup(t2160_marshaled& marshaled)
{
}
#include "t2161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2161_TI;
#include "t2161MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2161_marshal(const t2161& unmarshaled, t2161_marshaled& marshaled)
{
}
void t2161_marshal_back(const t2161_marshaled& marshaled, t2161& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2161_marshal_cleanup(t2161_marshaled& marshaled)
{
}
#include "t2162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2162_TI;
#include "t2162MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2162_marshal(const t2162& unmarshaled, t2162_marshaled& marshaled)
{
}
void t2162_marshal_back(const t2162_marshaled& marshaled, t2162& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2162_marshal_cleanup(t2162_marshaled& marshaled)
{
}
#include "t2163.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2163_TI;
#include "t2163MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
