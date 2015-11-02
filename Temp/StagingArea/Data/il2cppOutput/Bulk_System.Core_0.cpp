#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1086.h"
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
extern TypeInfo t1086_TI;
#include "t1086MD.h"


#include "t121.h"

#include "t342.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t342_TI;
#include "t342MD.h"

#include "t122.h"
#include "t732MD.h"
extern MethodInfo m4306_MI;


extern MethodInfo m1267_MI;
extern "C" void m1267 (t342 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1087.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1087_TI;
#include "t1087MD.h"



extern MethodInfo m4729_MI;
extern "C" void m4729 (t1087 * __this, MethodInfo* method)
{
	{
		m4306(__this, &m4306_MI);
		return;
	}
}
#include "t1088.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1088_TI;
#include "t1088MD.h"

#include "t9.h"
#include "t2.h"
#include "t132.h"
extern TypeInfo t132_TI;
#include "t132MD.h"
extern MethodInfo m339_MI;


extern MethodInfo m4730_MI;
extern "C" void m4730 (t9 * __this , t9 * p0, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
extern MethodInfo m4731_MI;
extern "C" void m4731 (t9 * __this , t9 * p0, t9 * p1, MethodInfo* method)
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
		m339(L_1, (t2*) &_stringLiteral402, &m339_MI);
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
		m339(L_3, (t2*) &_stringLiteral403, &m339_MI);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
#include "t1089.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1089_TI;
#include "t1089MD.h"



#include "t312.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t312_TI;
#include "t312MD.h"



#include "t237.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t237_TI;
#include "t237MD.h"

#include "t58.h"
#include "t477.h"


extern MethodInfo m1096_MI;
extern "C" void m1096 (t237 * __this, t9 * p0, t58 p1, MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern MethodInfo m1105_MI;
extern "C" void m1105 (t237 * __this, MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m1105((t237 *)__this->f9, method);
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
extern "C" void pinvoke_delegate_wrapper_t237(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
extern MethodInfo m4732_MI;
extern "C" t9 * m4732 (t237 * __this, t477 * p0, t9 * p1, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (t9 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p0, (Il2CppObject*)p1);
}
extern MethodInfo m4733_MI;
extern "C" void m4733 (t237 * __this, t9 * p0, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#include "t1090.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1090_TI;
#include "t1090MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1090_marshal(const t1090& unmarshaled, t1090_marshaled& marshaled)
{
}
void t1090_marshal_back(const t1090_marshaled& marshaled, t1090& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void t1090_marshal_cleanup(t1090_marshaled& marshaled)
{
}
#include "t1091.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo t1091_TI;
#include "t1091MD.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
