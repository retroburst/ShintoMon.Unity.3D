#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1073.h"
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
extern TypeInfo t1073_TI;
#include "t1073MD.h"


#include "t121.h"

#include "t328.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t328_TI;
#include "t328MD.h"

#include "t122.h"
#include "t718MD.h"
extern MethodInfo m4240_MI;


extern MethodInfo m1204_MI;
extern "C" void m1204 (t328 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1074.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1074_TI;
#include "t1074MD.h"



extern MethodInfo m4663_MI;
extern "C" void m4663 (t1074 * __this, MethodInfo* method)
{
	{
		m4240(__this, &m4240_MI);
		return;
	}
}
#include "t1075.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1075_TI;
#include "t1075MD.h"

#include "t9.h"
#include "t2.h"
#include "t132.h"
extern TypeInfo t132_TI;
#include "t132MD.h"
extern MethodInfo m339_MI;


extern MethodInfo m4664_MI;
extern "C" void m4664 (t9 * __this , t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
extern MethodInfo m4665_MI;
extern "C" void m4665 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral406, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral407, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
#include "t1076.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1076_TI;
#include "t1076MD.h"



#include "t299.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t299_TI;
#include "t299MD.h"



#include "t234.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t234_TI;
#include "t234MD.h"

#include "t58.h"
#include "t463.h"


extern MethodInfo m1049_MI;
extern "C" void m1049 (t234 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m1059_MI;
extern "C" void m1059 (t234 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1059((t234 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t234(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m4666_MI;
extern "C" t9 * m4666 (t234 * __this, t463 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m4667_MI;
extern "C" void m4667 (t234 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1077.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1077_TI;
#include "t1077MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1077_marshal(const t1077& unmarshaled, t1077_marshaled& marshaled)
{
}
void t1077_marshal_back(const t1077_marshaled& marshaled, t1077& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1077_marshal_cleanup(t1077_marshaled& marshaled)
{
}
#include "t1078.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1078_TI;
#include "t1078MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
