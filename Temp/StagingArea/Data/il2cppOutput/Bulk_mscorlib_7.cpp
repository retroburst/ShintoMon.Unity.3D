#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1620.h"
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
extern TypeInfo t1620_TI;
#include "t1620MD.h"

#include "t122.h"
#include "t9.h"
#include "t58.h"
#include "t124.h"
#include "t1621.h"
#include "t1622.h"
#include "t470.h"

#include "t121.h"

extern MethodInfo m11908_MI;
extern "C" void m11908 (t1620 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11909_MI;
extern "C" bool m11909 (t1620 * __this, t1621 * p0, int32_t p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11909((t1620 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t1621 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t1621 * p0, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, int32_t p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1620(Il2CppObject* delegate, t1621 * p0, int32_t p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1621 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
extern MethodInfo m11910_MI;
extern "C" t9 * m11910 (t1620 * __this, t1621 * p0, int32_t p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t1622_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11911_MI;
extern "C" bool m11911 (t1620 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1567.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1567_TI;
#include "t1567MD.h"

#include "t560.h"


extern MethodInfo m11912_MI;
extern "C" void m11912 (t1567 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11913_MI;
extern "C" bool m11913 (t1567 * __this, t560 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11913((t1567 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 *, t9 * __this, t560 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t560 * p0, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t9 * __this, t9 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1567(Il2CppObject* delegate, t560 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t560 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
extern MethodInfo m11914_MI;
extern "C" t9 * m11914 (t1567 * __this, t560 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11915_MI;
extern "C" bool m11915 (t1567 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1811.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1811_TI;
#include "t1811MD.h"

#include "t126.h"


extern MethodInfo m11916_MI;
extern "C" void m11916 (t1811 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11917_MI;
extern "C" bool m11917 (t1811 * __this, t126 * p0, t9 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11917((t1811 *)__this->f9,p0, p1, method);
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
extern "C" bool pinvoke_delegate_wrapper_t1811(Il2CppObject* delegate, t126 * p0, t9 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t126 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
extern MethodInfo m11918_MI;
extern "C" t9 * m11918 (t1811 * __this, t126 * p0, t9 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11919_MI;
extern "C" bool m11919 (t1811 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1942.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1942_TI;
#include "t1942MD.h"

#include "mscorlib_ArrayTypes.h"
#include "t1892.h"


extern MethodInfo m11920_MI;
extern "C" void m11920 (t1942 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11921_MI;
extern "C" t9 * m11921 (t1942 * __this, t1895* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11921((t1942 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 *, t9 * __this, t1895* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, t1895* p0, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t9 * (*FunctionPointerType) (t9 * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t9 * pinvoke_delegate_wrapper_t1942(Il2CppObject* delegate, t1895* p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1895* _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
extern MethodInfo m11922_MI;
extern "C" t9 * m11922 (t1942 * __this, t1895* p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11923_MI;
extern "C" t9 * m11923 (t1942 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t9 *)__result;
}
#include "t2075.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2075_TI;
#include "t2075MD.h"



extern MethodInfo m11924_MI;
extern "C" void m11924 (t2075 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11925_MI;
extern "C" void m11925 (t2075 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11925((t2075 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t2075(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m11926_MI;
extern "C" t9 * m11926 (t2075 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m11927_MI;
extern "C" void m11927 (t2075 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2083.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2083_TI;
#include "t2083MD.h"



extern MethodInfo m11928_MI;
extern "C" void m11928 (t2083 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11929_MI;
extern "C" void m11929 (t2083 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11929((t2083 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2083(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11930_MI;
extern "C" t9 * m11930 (t2083 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11931_MI;
extern "C" void m11931 (t2083 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2079.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2079_TI;
#include "t2079MD.h"



extern MethodInfo m11932_MI;
extern "C" void m11932 (t2079 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11933_MI;
extern "C" void m11933 (t2079 * __this, t9 * p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11933((t2079 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2079(Il2CppObject* delegate, t9 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11934_MI;
extern "C" t9 * m11934 (t2079 * __this, t9 * p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11935_MI;
extern "C" void m11935 (t2079 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2071.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2071_TI;
#include "t2071MD.h"



extern MethodInfo m11936_MI;
extern "C" void m11936 (t2071 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11937_MI;
extern "C" void m11937 (t2071 * __this, t9 * p0, bool p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11937((t2071 *)__this->f9,p0, p1, method);
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
extern "C" void pinvoke_delegate_wrapper_t2071(Il2CppObject* delegate, t9 * p0, bool p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11938_MI;
extern "C" t9 * m11938 (t2071 * __this, t9 * p0, bool p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(InitializedTypeInfo(&t124_TI), &p1);
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11939_MI;
extern "C" void m11939 (t2071 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2094.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2094_TI;
#include "t2094MD.h"

#include "t2.h"


extern MethodInfo m11940_MI;
extern "C" void m11940 (t2094 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11941_MI;
extern "C" void m11941 (t2094 * __this, t221* p0, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11941((t2094 *)__this->f9,p0, method);
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
extern "C" void pinvoke_delegate_wrapper_t2094(Il2CppObject* delegate, t221* p0)
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
extern MethodInfo m11942_MI;
extern "C" t9 * m11942 (t2094 * __this, t221* p0, t470 * p1, t9 * p2, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern MethodInfo m11943_MI;
extern "C" void m11943 (t2094 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2089.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2089_TI;
#include "t2089MD.h"

#include "t2098.h"


extern MethodInfo m11944_MI;
extern "C" void m11944 (t2089 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11945_MI;
extern "C" void m11945 (t2089 * __this, t9 * p0, t2098 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11945((t2089 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2098 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2098 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2098 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2089(Il2CppObject* delegate, t9 * p0, t2098 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11946_MI;
extern "C" t9 * m11946 (t2089 * __this, t9 * p0, t2098 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11947_MI;
extern "C" void m11947 (t2089 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2091.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2091_TI;
#include "t2091MD.h"

#include "t1436.h"


extern MethodInfo m11948_MI;
extern "C" void m11948 (t2091 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11949_MI;
extern "C" void m11949 (t2091 * __this, t9 * p0, t1436 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11949((t2091 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t1436 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2091(Il2CppObject* delegate, t9 * p0, t1436 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11950_MI;
extern "C" t9 * m11950 (t2091 * __this, t9 * p0, t1436 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11951_MI;
extern "C" void m11951 (t2091 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2090.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2090_TI;
#include "t2090MD.h"

#include "t1345.h"
#include "t2141.h"


extern MethodInfo m11952_MI;
extern "C" void m11952 (t2090 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11953_MI;
extern "C" t1345 * m11953 (t2090 * __this, t9 * p0, t2141 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11953((t2090 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1345 * (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2141 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1345 * (*FunctionPointerType) (t9 * __this, t9 * p0, t2141 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1345 * (*FunctionPointerType) (t9 * __this, t2141 * p1, MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1345 * pinvoke_delegate_wrapper_t2090(Il2CppObject* delegate, t9 * p0, t2141 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11954_MI;
extern "C" t9 * m11954 (t2090 * __this, t9 * p0, t2141 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11955_MI;
extern "C" t1345 * m11955 (t2090 * __this, t9 * p0, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1345 *)__result;
}
#include "t2092.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2092_TI;
#include "t2092MD.h"

#include "t2149.h"


extern MethodInfo m11956_MI;
extern "C" void m11956 (t2092 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m11957_MI;
extern "C" void m11957 (t2092 * __this, t9 * p0, t2149 * p1, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m11957((t2092 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 *, t9 * __this, t9 * p0, t2149 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (t9 * __this, t9 * p0, t2149 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef void (*FunctionPointerType) (t9 * __this, t2149 * p1, MethodInfo* method);
		((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" void pinvoke_delegate_wrapper_t2092(Il2CppObject* delegate, t9 * p0, t2149 * p1)
{
	// Marshaling of parameter 'p0' to native representation
	t9 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
extern MethodInfo m11958_MI;
extern "C" t9 * m11958 (t2092 * __this, t9 * p0, t2149 * p1, t470 * p2, t9 * p3, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern MethodInfo m11959_MI;
extern "C" void m11959 (t2092 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t2152.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2152_TI;
#include "t2152MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2152_marshal(const t2152& unmarshaled, t2152_marshaled& marshaled)
{
}
void t2152_marshal_back(const t2152_marshaled& marshaled, t2152& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void t2152_marshal_cleanup(t2152_marshaled& marshaled)
{
}
#include "t2153.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2153_TI;
#include "t2153MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2153_marshal(const t2153& unmarshaled, t2153_marshaled& marshaled)
{
}
void t2153_marshal_back(const t2153_marshaled& marshaled, t2153& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void t2153_marshal_cleanup(t2153_marshaled& marshaled)
{
}
#include "t2154.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2154_TI;
#include "t2154MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2154_marshal(const t2154& unmarshaled, t2154_marshaled& marshaled)
{
}
void t2154_marshal_back(const t2154_marshaled& marshaled, t2154& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t2154_marshal_cleanup(t2154_marshaled& marshaled)
{
}
#include "t2155.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2155_TI;
#include "t2155MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2155_marshal(const t2155& unmarshaled, t2155_marshaled& marshaled)
{
}
void t2155_marshal_back(const t2155_marshaled& marshaled, t2155& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void t2155_marshal_cleanup(t2155_marshaled& marshaled)
{
}
#include "t2156.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2156_TI;
#include "t2156MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2156_marshal(const t2156& unmarshaled, t2156_marshaled& marshaled)
{
}
void t2156_marshal_back(const t2156_marshaled& marshaled, t2156& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t2156_marshal_cleanup(t2156_marshaled& marshaled)
{
}
#include "t2157.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2157_TI;
#include "t2157MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2157_marshal(const t2157& unmarshaled, t2157_marshaled& marshaled)
{
}
void t2157_marshal_back(const t2157_marshaled& marshaled, t2157& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t2157_marshal_cleanup(t2157_marshaled& marshaled)
{
}
#include "t2158.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2158_TI;
#include "t2158MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2158_marshal(const t2158& unmarshaled, t2158_marshaled& marshaled)
{
}
void t2158_marshal_back(const t2158_marshaled& marshaled, t2158& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t2158_marshal_cleanup(t2158_marshaled& marshaled)
{
}
#include "t2159.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2159_TI;
#include "t2159MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2159_marshal(const t2159& unmarshaled, t2159_marshaled& marshaled)
{
}
void t2159_marshal_back(const t2159_marshaled& marshaled, t2159& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t2159_marshal_cleanup(t2159_marshaled& marshaled)
{
}
#include "t2160.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2160_TI;
#include "t2160MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2160_marshal(const t2160& unmarshaled, t2160_marshaled& marshaled)
{
}
void t2160_marshal_back(const t2160_marshaled& marshaled, t2160& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t2160_marshal_cleanup(t2160_marshaled& marshaled)
{
}
#include "t2161.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2161_TI;
#include "t2161MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2161_marshal(const t2161& unmarshaled, t2161_marshaled& marshaled)
{
}
void t2161_marshal_back(const t2161_marshaled& marshaled, t2161& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t2161_marshal_cleanup(t2161_marshaled& marshaled)
{
}
#include "t2162.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2162_TI;
#include "t2162MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2162_marshal(const t2162& unmarshaled, t2162_marshaled& marshaled)
{
}
void t2162_marshal_back(const t2162_marshaled& marshaled, t2162& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t2162_marshal_cleanup(t2162_marshaled& marshaled)
{
}
#include "t2163.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2163_TI;
#include "t2163MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2163_marshal(const t2163& unmarshaled, t2163_marshaled& marshaled)
{
}
void t2163_marshal_back(const t2163_marshaled& marshaled, t2163& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void t2163_marshal_cleanup(t2163_marshaled& marshaled)
{
}
#include "t2164.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2164_TI;
#include "t2164MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2164_marshal(const t2164& unmarshaled, t2164_marshaled& marshaled)
{
}
void t2164_marshal_back(const t2164_marshaled& marshaled, t2164& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void t2164_marshal_cleanup(t2164_marshaled& marshaled)
{
}
#include "t2165.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2165_TI;
#include "t2165MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2165_marshal(const t2165& unmarshaled, t2165_marshaled& marshaled)
{
}
void t2165_marshal_back(const t2165_marshaled& marshaled, t2165& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void t2165_marshal_cleanup(t2165_marshaled& marshaled)
{
}
#include "t2166.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2166_TI;
#include "t2166MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2166_marshal(const t2166& unmarshaled, t2166_marshaled& marshaled)
{
}
void t2166_marshal_back(const t2166_marshaled& marshaled, t2166& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void t2166_marshal_cleanup(t2166_marshaled& marshaled)
{
}
#include "t2167.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2167_TI;
#include "t2167MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2167_marshal(const t2167& unmarshaled, t2167_marshaled& marshaled)
{
}
void t2167_marshal_back(const t2167_marshaled& marshaled, t2167& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t2167_marshal_cleanup(t2167_marshaled& marshaled)
{
}
#include "t2168.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2168_TI;
#include "t2168MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2168_marshal(const t2168& unmarshaled, t2168_marshaled& marshaled)
{
}
void t2168_marshal_back(const t2168_marshaled& marshaled, t2168& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void t2168_marshal_cleanup(t2168_marshaled& marshaled)
{
}
#include "t2169.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2169_TI;
#include "t2169MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2169_marshal(const t2169& unmarshaled, t2169_marshaled& marshaled)
{
}
void t2169_marshal_back(const t2169_marshaled& marshaled, t2169& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void t2169_marshal_cleanup(t2169_marshaled& marshaled)
{
}
#include "t2170.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2170_TI;
#include "t2170MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2170_marshal(const t2170& unmarshaled, t2170_marshaled& marshaled)
{
}
void t2170_marshal_back(const t2170_marshaled& marshaled, t2170& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void t2170_marshal_cleanup(t2170_marshaled& marshaled)
{
}
#include "t2171.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2171_TI;
#include "t2171MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2171_marshal(const t2171& unmarshaled, t2171_marshaled& marshaled)
{
}
void t2171_marshal_back(const t2171_marshaled& marshaled, t2171& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void t2171_marshal_cleanup(t2171_marshaled& marshaled)
{
}
#include "t2172.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t2172_TI;
#include "t2172MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
