#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1080.h"
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
extern TypeInfo t1080_TI;
#include "t1080MD.h"


#include "t121.h"

#include "t335.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t335_TI;
#include "t335MD.h"

#include "t122.h"
#include "t725MD.h"
extern MethodInfo m4264_MI;


extern MethodInfo m1227_MI;
extern "C" void m1227 (t335 * __this, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		return;
	}
}
#include "t1081.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1081_TI;
#include "t1081MD.h"



extern MethodInfo m4687_MI;
extern "C" void m4687 (t1081 * __this, MethodInfo* method)
{
	{
		m4264(__this, &m4264_MI);
		return;
	}
}
#include "t1082.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1082_TI;
#include "t1082MD.h"

#include "t9.h"
#include "t2.h"
#include "t132.h"
extern TypeInfo t132_TI;
#include "t132MD.h"
extern MethodInfo m339_MI;


extern MethodInfo m4688_MI;
extern "C" void m4688 (t9 * __this , t9 * p0, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral405, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
extern MethodInfo m4689_MI;
extern "C" void m4689 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
{
	{
		t9 * L_0 = p0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		t132 * L_1 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_1, (t2*) &_stringLiteral405, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		t9 * L_2 = p1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		t132 * L_3 = (t132 *)il2cpp_codegen_object_new (InitializedTypeInfo(&t132_TI));
		m339(L_3, (t2*) &_stringLiteral406, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
#include "t1083.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1083_TI;
#include "t1083MD.h"



#include "t306.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t306_TI;
#include "t306MD.h"



#include "t235.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t235_TI;
#include "t235MD.h"

#include "t58.h"
#include "t470.h"


extern MethodInfo m1063_MI;
extern "C" void m1063 (t235 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m1073_MI;
extern "C" void m1073 (t235 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1073((t235 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t235(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m4690_MI;
extern "C" t9 * m4690 (t235 * __this, t470 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m4691_MI;
extern "C" void m4691 (t235 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1084.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1084_TI;
#include "t1084MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1084_marshal(const t1084& unmarshaled, t1084_marshaled& marshaled)
{
}
void t1084_marshal_back(const t1084_marshaled& marshaled, t1084& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1084_marshal_cleanup(t1084_marshaled& marshaled)
{
}
#include "t1085.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1085_TI;
#include "t1085MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
