#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1626.h"
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
extern TypeInfo t1626_TI;
#include "t1626MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t124.h"
#include "t1627.h"
#include "t1628.h"
#include "t477.h"

#include "t121.h"

extern MethodInfo m11947_MI;
extern "C" void m11947 (t1626 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11948_MI;
extern "C" bool m11948 (t1626 * __this, t1627 * p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11948((t1626 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t1627 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t1627 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1626(Il2CppObject* delegate, t1627 * p0, int32_t p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1627 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
extern MethodInfo m11949_MI;
extern "C" t9 * m11949 (t1626 * __this, t1627 * p0, int32_t p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t1628_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11950_MI;
extern "C" bool m11950 (t1626 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1573.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1573_TI;
#include "t1573MD.h"

#include "t567.h"


extern MethodInfo m11951_MI;
extern "C" void m11951 (t1573 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11952_MI;
extern "C" bool m11952 (t1573 * __this, t567 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11952((t1573 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t567 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t567 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1573(Il2CppObject* delegate, t567 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t567 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
extern MethodInfo m11953_MI;
extern "C" t9 * m11953 (t1573 * __this, t567 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11954_MI;
extern "C" bool m11954 (t1573 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1817.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1817_TI;
#include "t1817MD.h"

#include "t126.h"


extern MethodInfo m11955_MI;
extern "C" void m11955 (t1817 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11956_MI;
extern "C" bool m11956 (t1817 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11956((t1817 *)__this->f9,p0, p1, method);
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
extern "C" bool pinvoke_delegate_wrapper_t1817(Il2CppObject* delegate, t126 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t126 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
extern MethodInfo m11957_MI;
extern "C" t9 * m11957 (t1817 * __this, t126 * p0, t9 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11958_MI;
extern "C" bool m11958 (t1817 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1948.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1948_TI;
#include "t1948MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t1898.h"


extern MethodInfo m11959_MI;
extern "C" void m11959 (t1948 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11960_MI;
extern "C" t9 * m11960 (t1948 * __this, t1901* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11960((t1948 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, t1901* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t1901* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t9 * pinvoke_delegate_wrapper_t1948(Il2CppObject* delegate, t1901* p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1901* _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
extern MethodInfo m11961_MI;
extern "C" t9 * m11961 (t1948 * __this, t1901* p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11962_MI;
extern "C" t9 * m11962 (t1948 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2081.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2081_TI;
#include "t2081MD.h"



extern MethodInfo m11963_MI;
extern "C" void m11963 (t2081 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11964_MI;
extern "C" void m11964 (t2081 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11964((t2081 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t2081(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m11965_MI;
extern "C" t9 * m11965 (t2081 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m11966_MI;
extern "C" void m11966 (t2081 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2089.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2089_TI;
#include "t2089MD.h"



extern MethodInfo m11967_MI;
extern "C" void m11967 (t2089 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11968_MI;
extern "C" void m11968 (t2089 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11968((t2089 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2089(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11969_MI;
extern "C" t9 * m11969 (t2089 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11970_MI;
extern "C" void m11970 (t2089 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2085.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2085_TI;
#include "t2085MD.h"



extern MethodInfo m11971_MI;
extern "C" void m11971 (t2085 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11972_MI;
extern "C" void m11972 (t2085 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11972((t2085 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2085(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11973_MI;
extern "C" t9 * m11973 (t2085 * __this, t9 * p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11974_MI;
extern "C" void m11974 (t2085 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2077.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2077_TI;
#include "t2077MD.h"



extern MethodInfo m11975_MI;
extern "C" void m11975 (t2077 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11976_MI;
extern "C" void m11976 (t2077 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11976((t2077 *)__this->f9,p0, p1, method);
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
extern "C" void pinvoke_delegate_wrapper_t2077(Il2CppObject* delegate, t9 * p0, bool p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11977_MI;
extern "C" t9 * m11977 (t2077 * __this, t9 * p0, bool p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t124_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11978_MI;
extern "C" void m11978 (t2077 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2100.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2100_TI;
#include "t2100MD.h"

#include "t2.h"


extern MethodInfo m11979_MI;
extern "C" void m11979 (t2100 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11980_MI;
extern "C" void m11980 (t2100 * __this, t221* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11980((t2100 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2100(Il2CppObject* delegate, t221* p0)
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
extern MethodInfo m11981_MI;
extern "C" t9 * m11981 (t2100 * __this, t221* p0, t477 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11982_MI;
extern "C" void m11982 (t2100 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2095.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2095_TI;
#include "t2095MD.h"

#include "t2104.h"


extern MethodInfo m11983_MI;
extern "C" void m11983 (t2095 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11984_MI;
extern "C" void m11984 (t2095 * __this, t9 * p0, t2104 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11984((t2095 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2104 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2104 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2104 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2095(Il2CppObject* delegate, t9 * p0, t2104 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11985_MI;
extern "C" t9 * m11985 (t2095 * __this, t9 * p0, t2104 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11986_MI;
extern "C" void m11986 (t2095 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2097.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2097_TI;
#include "t2097MD.h"

#include "t1442.h"


extern MethodInfo m11987_MI;
extern "C" void m11987 (t2097 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11988_MI;
extern "C" void m11988 (t2097 * __this, t9 * p0, t1442 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11988((t2097 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1442 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2097(Il2CppObject* delegate, t9 * p0, t1442 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11989_MI;
extern "C" t9 * m11989 (t2097 * __this, t9 * p0, t1442 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11990_MI;
extern "C" void m11990 (t2097 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2096.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2096_TI;
#include "t2096MD.h"

#include "t1351.h"
#include "t2147.h"


extern MethodInfo m11991_MI;
extern "C" void m11991 (t2096 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11992_MI;
extern "C" t1351 * m11992 (t2096 * __this, t9 * p0, t2147 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11992((t2096 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1351 * (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2147 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1351 * (*FunctionPointerType) (t9 * __this, t9 * p0, t2147 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1351 * (*FunctionPointerType) (t9 * __this, t2147 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1351 * pinvoke_delegate_wrapper_t2096(Il2CppObject* delegate, t9 * p0, t2147 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11993_MI;
extern "C" t9 * m11993 (t2096 * __this, t9 * p0, t2147 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11994_MI;
extern "C" t1351 * m11994 (t2096 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1351 *)__result;
}
#include "t2098.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2098_TI;
#include "t2098MD.h"

#include "t2155.h"


extern MethodInfo m11995_MI;
extern "C" void m11995 (t2098 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11996_MI;
extern "C" void m11996 (t2098 * __this, t9 * p0, t2155 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11996((t2098 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2155 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2155 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2155 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2098(Il2CppObject* delegate, t9 * p0, t2155 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11997_MI;
extern "C" t9 * m11997 (t2098 * __this, t9 * p0, t2155 * p1, t477 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11998_MI;
extern "C" void m11998 (t2098 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2158.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2158_TI;
#include "t2158MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2158_marshal(const t2158& unmarshaled, t2158_marshaled& marshaled)
{
}
void t2158_marshal_back(const t2158_marshaled& marshaled, t2158& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2158_marshal_cleanup(t2158_marshaled& marshaled)
{
}
#include "t2159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2159_TI;
#include "t2159MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2159_marshal(const t2159& unmarshaled, t2159_marshaled& marshaled)
{
}
void t2159_marshal_back(const t2159_marshaled& marshaled, t2159& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2159_marshal_cleanup(t2159_marshaled& marshaled)
{
}
#include "t2160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2160_TI;
#include "t2160MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2160_marshal(const t2160& unmarshaled, t2160_marshaled& marshaled)
{
}
void t2160_marshal_back(const t2160_marshaled& marshaled, t2160& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2160_marshal_cleanup(t2160_marshaled& marshaled)
{
}
#include "t2161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2161_TI;
#include "t2161MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2161_marshal(const t2161& unmarshaled, t2161_marshaled& marshaled)
{
}
void t2161_marshal_back(const t2161_marshaled& marshaled, t2161& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2161_marshal_cleanup(t2161_marshaled& marshaled)
{
}
#include "t2162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2162_TI;
#include "t2162MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2162_marshal(const t2162& unmarshaled, t2162_marshaled& marshaled)
{
}
void t2162_marshal_back(const t2162_marshaled& marshaled, t2162& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2162_marshal_cleanup(t2162_marshaled& marshaled)
{
}
#include "t2163.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2163_TI;
#include "t2163MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2163_marshal(const t2163& unmarshaled, t2163_marshaled& marshaled)
{
}
void t2163_marshal_back(const t2163_marshaled& marshaled, t2163& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2163_marshal_cleanup(t2163_marshaled& marshaled)
{
}
#include "t2164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2164_TI;
#include "t2164MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2164_marshal(const t2164& unmarshaled, t2164_marshaled& marshaled)
{
}
void t2164_marshal_back(const t2164_marshaled& marshaled, t2164& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2164_marshal_cleanup(t2164_marshaled& marshaled)
{
}
#include "t2165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2165_TI;
#include "t2165MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2165_marshal(const t2165& unmarshaled, t2165_marshaled& marshaled)
{
}
void t2165_marshal_back(const t2165_marshaled& marshaled, t2165& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2165_marshal_cleanup(t2165_marshaled& marshaled)
{
}
#include "t2166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2166_TI;
#include "t2166MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2166_marshal(const t2166& unmarshaled, t2166_marshaled& marshaled)
{
}
void t2166_marshal_back(const t2166_marshaled& marshaled, t2166& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2166_marshal_cleanup(t2166_marshaled& marshaled)
{
}
#include "t2167.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2167_TI;
#include "t2167MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2167_marshal(const t2167& unmarshaled, t2167_marshaled& marshaled)
{
}
void t2167_marshal_back(const t2167_marshaled& marshaled, t2167& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2167_marshal_cleanup(t2167_marshaled& marshaled)
{
}
#include "t2168.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2168_TI;
#include "t2168MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2168_marshal(const t2168& unmarshaled, t2168_marshaled& marshaled)
{
}
void t2168_marshal_back(const t2168_marshaled& marshaled, t2168& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2168_marshal_cleanup(t2168_marshaled& marshaled)
{
}
#include "t2169.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2169_TI;
#include "t2169MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2169_marshal(const t2169& unmarshaled, t2169_marshaled& marshaled)
{
}
void t2169_marshal_back(const t2169_marshaled& marshaled, t2169& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2169_marshal_cleanup(t2169_marshaled& marshaled)
{
}
#include "t2170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2170_TI;
#include "t2170MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2170_marshal(const t2170& unmarshaled, t2170_marshaled& marshaled)
{
}
void t2170_marshal_back(const t2170_marshaled& marshaled, t2170& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2170_marshal_cleanup(t2170_marshaled& marshaled)
{
}
#include "t2171.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2171_TI;
#include "t2171MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2171_marshal(const t2171& unmarshaled, t2171_marshaled& marshaled)
{
}
void t2171_marshal_back(const t2171_marshaled& marshaled, t2171& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2171_marshal_cleanup(t2171_marshaled& marshaled)
{
}
#include "t2172.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2172_TI;
#include "t2172MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2172_marshal(const t2172& unmarshaled, t2172_marshaled& marshaled)
{
}
void t2172_marshal_back(const t2172_marshaled& marshaled, t2172& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2172_marshal_cleanup(t2172_marshaled& marshaled)
{
}
#include "t2173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2173_TI;
#include "t2173MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2173_marshal(const t2173& unmarshaled, t2173_marshaled& marshaled)
{
}
void t2173_marshal_back(const t2173_marshaled& marshaled, t2173& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2173_marshal_cleanup(t2173_marshaled& marshaled)
{
}
#include "t2174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2174_TI;
#include "t2174MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2174_marshal(const t2174& unmarshaled, t2174_marshaled& marshaled)
{
}
void t2174_marshal_back(const t2174_marshaled& marshaled, t2174& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2174_marshal_cleanup(t2174_marshaled& marshaled)
{
}
#include "t2175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2175_TI;
#include "t2175MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2175_marshal(const t2175& unmarshaled, t2175_marshaled& marshaled)
{
}
void t2175_marshal_back(const t2175_marshaled& marshaled, t2175& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2175_marshal_cleanup(t2175_marshaled& marshaled)
{
}
#include "t2176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2176_TI;
#include "t2176MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2176_marshal(const t2176& unmarshaled, t2176_marshaled& marshaled)
{
}
void t2176_marshal_back(const t2176_marshaled& marshaled, t2176& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2176_marshal_cleanup(t2176_marshaled& marshaled)
{
}
#include "t2177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2177_TI;
#include "t2177MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2177_marshal(const t2177& unmarshaled, t2177_marshaled& marshaled)
{
}
void t2177_marshal_back(const t2177_marshaled& marshaled, t2177& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2177_marshal_cleanup(t2177_marshaled& marshaled)
{
}
#include "t2178.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2178_TI;
#include "t2178MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
